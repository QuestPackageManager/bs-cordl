#pragma once
// IWYU pragma private; include "LiteNetLib/Utils/INetImmutableSerializable.hpp"
#include "LiteNetLib/Utils/zzzz__INetImmutableSerializable_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
//  Writing Method size for method: ::LiteNetLib::Utils::INetImmutableSerializable.Serialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::Utils::INetImmutableSerializable::*)(::LiteNetLib::Utils::NetDataWriter*)>(
    &::LiteNetLib::Utils::INetImmutableSerializable::Serialize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::INetImmutableSerializable*>(), { ::i2c::class_of<::LiteNetLib::Utils::INetImmutableSerializable*>(), 0 }));
    return ___internal_method;
  }
};
inline void LiteNetLib::Utils::INetImmutableSerializable::Serialize(::LiteNetLib::Utils::NetDataWriter* writer) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::LiteNetLib::Utils::INetImmutableSerializable*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer);
}
