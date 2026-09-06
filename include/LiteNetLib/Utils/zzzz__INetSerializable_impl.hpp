#pragma once
// IWYU pragma private; include "LiteNetLib/Utils/INetSerializable.hpp"
#include "LiteNetLib/Utils/zzzz__INetSerializable_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
//  Writing Method size for method: ::LiteNetLib::Utils::INetSerializable.Serialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::Utils::INetSerializable::*)(::LiteNetLib::Utils::NetDataWriter*)>(&::LiteNetLib::Utils::INetSerializable::Serialize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::INetSerializable*>(), { ::i2c::class_of<::LiteNetLib::Utils::INetSerializable*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::INetSerializable.Deserialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::Utils::INetSerializable::*)(::LiteNetLib::Utils::NetDataReader*)>(&::LiteNetLib::Utils::INetSerializable::Deserialize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::INetSerializable*>(), { ::i2c::class_of<::LiteNetLib::Utils::INetSerializable*>(), 1 }));
    return ___internal_method;
  }
};
inline void LiteNetLib::Utils::INetSerializable::Serialize(::LiteNetLib::Utils::NetDataWriter* writer) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::LiteNetLib::Utils::INetSerializable*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer);
}
inline void LiteNetLib::Utils::INetSerializable::Deserialize(::LiteNetLib::Utils::NetDataReader* reader) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::LiteNetLib::Utils::INetSerializable*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader);
}
