"""
Our neural nets will be made up of layers.
Each layer needs to pass its inputs forward
and prpagate gradients backward. For example,
a neural net might look like

inputs -> Linear -> Tanh -> Linear -> output
"""
import numpy as np
from joelnet.tensor import Tensor


class Layer:
    def __init__(self) -> None:
        pass

    def forward(self, inputs: Tensor) -> Tensor:
        """
        Produce the outputs corresponding to these inputs
        """
        raise NotImplementedError

    def backward(self, grad: Tensor) -> Tensor:
        """
        Backpropogate this gradient through the layer
        """
