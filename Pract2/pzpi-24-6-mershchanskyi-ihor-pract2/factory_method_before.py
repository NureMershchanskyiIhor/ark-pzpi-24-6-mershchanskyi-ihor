class Truck:
    def deliver(self):
        return "Delivery overland by truck."

class Ship:
    def deliver(self):
        return "Delivery by ship by sea."

class Logistics:
    def plan_delivery(self, transport_type: str):
        if transport_type == "truck":
            transport = Truck()
        elif transport_type == "ship":
            transport = Ship()
        else:
            raise ValueError("Unknown type of transport")
        
        result = f"Logistics Cooperation: {transport.deliver()}"
        return result

logistics = Logistics()
print(logistics.plan_delivery("truck"))
print(logistics.plan_delivery("ship"))