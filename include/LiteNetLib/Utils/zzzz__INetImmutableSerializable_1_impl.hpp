#pragma once
// IWYU pragma private; include "LiteNetLib\Utils\INetImmutableSerializable_1.hpp"
#include "LiteNetLib/Utils/zzzz__INetImmutableSerializable_1_def.hpp"
#include "LiteNetLib/Utils/zzzz__INetImmutableSerializable_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
template <typename T> inline T LiteNetLib::Utils::INetImmutableSerializable_1<T>::CreateFromSerializedData(::LiteNetLib::Utils::NetDataReader* reader) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::LiteNetLib::Utils::INetImmutableSerializable_1<T>*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, reader);
}
/// @brief Convert operator to "::LiteNetLib::Utils::INetImmutableSerializable"
template <typename T> constexpr LiteNetLib::Utils::INetImmutableSerializable_1<T>::operator ::LiteNetLib::Utils::INetImmutableSerializable*() noexcept {
  return static_cast<::LiteNetLib::Utils::INetImmutableSerializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::LiteNetLib::Utils::INetImmutableSerializable"
template <typename T> constexpr ::LiteNetLib::Utils::INetImmutableSerializable* LiteNetLib::Utils::INetImmutableSerializable_1<T>::i___LiteNetLib__Utils__INetImmutableSerializable() noexcept {
  return static_cast<::LiteNetLib::Utils::INetImmutableSerializable*>(static_cast<void*>(this));
}
