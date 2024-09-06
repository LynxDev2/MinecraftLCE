#pragma once

#include <memory>
#include "Minecraft.Network/protocol/Packet.h"
#include "types.h"

class ClientboundTakeItemEntityPacket : public Packet, public std::enable_shared_from_this<ClientboundTakeItemEntityPacket> {
public:
    ClientboundTakeItemEntityPacket();

    EPacketType getPacketId() override;
    void read(DataInputStream*) override;
    void write(DataOutputStream*) override;
    void handle(PacketListener*) override;
    int getEstimatedSize() override;

    void* field_18 = nullptr;
    void* field_20 = nullptr;
};

ASSERT_SIZEOF(ClientboundTakeItemEntityPacket, 0x38)
