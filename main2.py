import numpy as np

class NeuralNetwork():
    
    def __init__(self):
        np.random.seed(1)

        self.synaptic_weights = 2 * np.random.random((4, 1)) - 1

    def sigmoid(self, x):
        return 1 / (1 + np.exp(-x))

    def sigmoid_derivative(self, x):
        return x * (1 - x)

    def train(self, training_inputs, training_outputs, training_iterations):
        for iteration in range(training_iterations):
            output = self.think(training_inputs)


            error = training_outputs - output

            adjustments = np.dot(training_inputs.T, error * self.sigmoid_derivative(output))

            self.synaptic_weights += adjustments

    def think(self, inputs):
        
        inputs = inputs.astype(float)
        output = self.sigmoid(np.dot(inputs, self.synaptic_weights))

        return output


if __name__ == "__main__":

    neural_network = NeuralNetwork()

    print("permulaan acak synaptic weights: ")
    print(neural_network.synaptic_weights)

    training_inputs = np.array([[0.64,0.10,0.22,0.23],
                                [0.62,0.54,0.25,0.30],
                                [0.66,0.14,0.25,0.30],
                                [0.48,0.10,0.29,0.37]])

    training_outputs = np.array([[0,1,0,1]]).T

    
    neural_network.train(training_inputs, training_outputs, 10000)

    print("\nSynaptic weights setelah training: ")
    print(neural_network.synaptic_weights)

    A = str(input("\nTemperatur: "))
    B = str(input("Solar Radiation: "))
    C = str(input("Relative Humidity: "))
    D = str(input("Wind Speed: "))
    
    print("\nData Masuk = ","TP :", A,"SR :", B,"RH :", C,"WS :", D)
    print("\nHasil Prediksi : ")
    
    if neural_network.think(np.array([A, B, C, D]))>0.5:
        print("============\nHujan...\nHasil : ",neural_network.think(np.array([A, B, C, D])) ,"\n============")
    else:
        print("============\nEngga Hujan\n============")