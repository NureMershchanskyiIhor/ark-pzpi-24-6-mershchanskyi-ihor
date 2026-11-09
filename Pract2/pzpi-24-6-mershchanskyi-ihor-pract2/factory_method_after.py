from abc import ABC, abstractmethod

class Transport(ABC):
    @abstractmethod
    def deliver(self) -> str:
        pass

class Truck(Transport):
    def deliver(self) -> str:
        return "Delivery overland by truck."

class Ship(Transport):
    def deliver(self) -> str:
        return "Delivery by ship by sea."


class LogisticsCreator(ABC):
    @abstractmethod
    def create_transport(self) -> Transport:
        pass

    def plan_delivery(self) -> str:
        transport = self.create_transport()
        return f"Logistics. {transport.deliver()}"


class RoadLogistics(LogisticsCreator):
    def create_transport(self) -> Transport:

class SeaLogistics(LogisticsCreator):
    def create_transport(self) -> Transport:


def example(creator: LogisticsCreator):
    print(creator.plan_delivery())

print("Use of ground logistics:")
example(RoadLogistics())

print("\nUse of maritime logistics:")
example(SeaLogistics())