#pragma once
// IWYU pragma private; include "GlobalNamespace\INetworkPacketSubSerializer_1.hpp"
#include "GlobalNamespace/zzzz__INetworkPacketSubSerializer_1_def.hpp"
#include "GlobalNamespace/zzzz__INetworkPacketProcessor_1_def.hpp"
#include "LiteNetLib/Utils/zzzz__INetSerializable_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
#include "System/zzzz__Type_def.hpp"
template <typename TData> inline void GlobalNamespace::INetworkPacketSubSerializer_1<TData>::Deserialize(::LiteNetLib::Utils::NetDataReader* reader, int32_t length, TData data) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::INetworkPacketSubSerializer_1<TData>*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader, length, data);
}
template <typename TData> inline void GlobalNamespace::INetworkPacketSubSerializer_1<TData>::Serialize(::LiteNetLib::Utils::NetDataWriter* writer, ::LiteNetLib::Utils::INetSerializable* packet) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::INetworkPacketSubSerializer_1<TData>*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, packet);
}
template <typename TData> inline bool GlobalNamespace::INetworkPacketSubSerializer_1<TData>::HandlesType(::System::Type* type) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::INetworkPacketSubSerializer_1<TData>*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, type);
}
/// @brief Convert operator to "::GlobalNamespace::INetworkPacketProcessor_1<TData>"
template <typename TData> constexpr GlobalNamespace::INetworkPacketSubSerializer_1<TData>::operator ::GlobalNamespace::INetworkPacketProcessor_1<TData>*() noexcept {
  return static_cast<::GlobalNamespace::INetworkPacketProcessor_1<TData>*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::INetworkPacketProcessor_1<TData>"
template <typename TData>
constexpr ::GlobalNamespace::INetworkPacketProcessor_1<TData>* GlobalNamespace::INetworkPacketSubSerializer_1<TData>::i___GlobalNamespace__INetworkPacketProcessor_1_TData_() noexcept {
  return static_cast<::GlobalNamespace::INetworkPacketProcessor_1<TData>*>(static_cast<void*>(this));
}
