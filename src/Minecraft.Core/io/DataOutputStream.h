#pragma once

#include "Minecraft.World/ArrayWithLength.h"
#include "Minecraft.Core/io/OutputStream.h"
#include "Minecraft.Core/io/DataOutput.h"

class BlockPos;

class DataOutputStream : OutputStream, DataOutput{
public:
    virtual ~DataOutputStream();
    virtual void write(unsigned int);
    virtual void write(arrayWithLength<unsigned char>);
    virtual void write(arrayWithLength<unsigned char>, unsigned int, unsigned int);
    virtual void close();
    virtual void flush();
    virtual void writeBytes(arrayWithLength<unsigned char>);
    virtual void writeByte(unsigned char);
    virtual void writeDouble(double);
    virtual void writeFloat(float);
    virtual void writeInt(int);
    virtual void writeLong(long long);
    virtual void writeShort(short);
    virtual void writeUnsignedShort(unsigned short);
    virtual void writeChar(wchar_t);
    virtual void writeChars(std::wstring const&);
    virtual void writeBoolean(bool);
    virtual void writeUTF(std::wstring const&);
    virtual void writePlayerUID(PlayerUID);

    void writeVarInt(int);
    void writeBlockPos(const BlockPos&) const;
};
