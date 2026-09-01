#pragma once
// IWYU pragma private; include "GlobalNamespace\PlayerIdentityPacket_1.hpp"
#include "GlobalNamespace/zzzz__PlayerStateHash_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__PlayerIdentityPacket_1_def.hpp"
#include "GlobalNamespace/zzzz__ByteArrayNetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__IPoolablePacket_def.hpp"
#include "GlobalNamespace/zzzz__PacketPool_1_def.hpp"
#include "GlobalNamespace/zzzz__PlayerStateHash_def.hpp"
#include "LiteNetLib/Utils/zzzz__INetSerializable_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
template <typename TGameSpecificIdentityData> constexpr ::GlobalNamespace::PlayerStateHash& GlobalNamespace::PlayerIdentityPacket_1<TGameSpecificIdentityData>::__cordl_internal_get_playerState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerState;
}
template <typename TGameSpecificIdentityData>
constexpr ::GlobalNamespace::PlayerStateHash const& GlobalNamespace::PlayerIdentityPacket_1<TGameSpecificIdentityData>::__cordl_internal_get_playerState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerState;
}
template <typename TGameSpecificIdentityData>
constexpr void GlobalNamespace::PlayerIdentityPacket_1<TGameSpecificIdentityData>::__cordl_internal_set_playerState(::GlobalNamespace::PlayerStateHash value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___playerState = value;
}
template <typename TGameSpecificIdentityData>
constexpr ::GlobalNamespace::ByteArrayNetSerializable*& GlobalNamespace::PlayerIdentityPacket_1<TGameSpecificIdentityData>::__cordl_internal_get_random() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___random;
}
template <typename TGameSpecificIdentityData>
constexpr ::GlobalNamespace::ByteArrayNetSerializable* const& GlobalNamespace::PlayerIdentityPacket_1<TGameSpecificIdentityData>::__cordl_internal_get_random() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___random;
}
template <typename TGameSpecificIdentityData>
constexpr void GlobalNamespace::PlayerIdentityPacket_1<TGameSpecificIdentityData>::__cordl_internal_set_random(::GlobalNamespace::ByteArrayNetSerializable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___random = value;
}
template <typename TGameSpecificIdentityData>
constexpr ::GlobalNamespace::ByteArrayNetSerializable*& GlobalNamespace::PlayerIdentityPacket_1<TGameSpecificIdentityData>::__cordl_internal_get_publicEncryptionKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___publicEncryptionKey;
}
template <typename TGameSpecificIdentityData>
constexpr ::GlobalNamespace::ByteArrayNetSerializable* const& GlobalNamespace::PlayerIdentityPacket_1<TGameSpecificIdentityData>::__cordl_internal_get_publicEncryptionKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___publicEncryptionKey;
}
template <typename TGameSpecificIdentityData>
constexpr void GlobalNamespace::PlayerIdentityPacket_1<TGameSpecificIdentityData>::__cordl_internal_set_publicEncryptionKey(::GlobalNamespace::ByteArrayNetSerializable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___publicEncryptionKey = value;
}
template <typename TGameSpecificIdentityData> constexpr TGameSpecificIdentityData& GlobalNamespace::PlayerIdentityPacket_1<TGameSpecificIdentityData>::__cordl_internal_get_gameSpecificData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameSpecificData;
}
template <typename TGameSpecificIdentityData>
constexpr TGameSpecificIdentityData const& GlobalNamespace::PlayerIdentityPacket_1<TGameSpecificIdentityData>::__cordl_internal_get_gameSpecificData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameSpecificData;
}
template <typename TGameSpecificIdentityData>
constexpr void GlobalNamespace::PlayerIdentityPacket_1<TGameSpecificIdentityData>::__cordl_internal_set_gameSpecificData(TGameSpecificIdentityData value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___gameSpecificData = value;
}
template <typename TGameSpecificIdentityData>
inline ::GlobalNamespace::PacketPool_1<::GlobalNamespace::PlayerIdentityPacket_1<TGameSpecificIdentityData>*>* GlobalNamespace::PlayerIdentityPacket_1<TGameSpecificIdentityData>::get_pool() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerIdentityPacket_1<TGameSpecificIdentityData>*>(), { "get_pool", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PacketPool_1<::GlobalNamespace::PlayerIdentityPacket_1<TGameSpecificIdentityData>*>*>(nullptr, ___internal_method);
}
template <typename TGameSpecificIdentityData> inline void GlobalNamespace::PlayerIdentityPacket_1<TGameSpecificIdentityData>::Serialize(::LiteNetLib::Utils::NetDataWriter* writer) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerIdentityPacket_1<TGameSpecificIdentityData>*>(),
                                                                                         { "Serialize", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataWriter*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer);
}
template <typename TGameSpecificIdentityData> inline void GlobalNamespace::PlayerIdentityPacket_1<TGameSpecificIdentityData>::Deserialize(::LiteNetLib::Utils::NetDataReader* reader) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerIdentityPacket_1<TGameSpecificIdentityData>*>(),
                                                                                         { "Deserialize", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataReader*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader);
}
template <typename TGameSpecificIdentityData> inline void GlobalNamespace::PlayerIdentityPacket_1<TGameSpecificIdentityData>::Release() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerIdentityPacket_1<TGameSpecificIdentityData>*>(), { "Release", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TGameSpecificIdentityData>
inline ::GlobalNamespace::PlayerIdentityPacket_1<TGameSpecificIdentityData>*
GlobalNamespace::PlayerIdentityPacket_1<TGameSpecificIdentityData>::Init(::GlobalNamespace::PlayerStateHash states, ::ArrayW<uint8_t> random, ::ArrayW<uint8_t> publicEncryptionKey,
                                                                         TGameSpecificIdentityData gameSpecificData) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerIdentityPacket_1<TGameSpecificIdentityData>*>(),
                                                                                         { "Init",
                                                                                           {},
                                                                                           { ::i2c::type_of<::GlobalNamespace::PlayerStateHash>(), ::i2c::type_of<::ArrayW<uint8_t>>(),
                                                                                             ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<TGameSpecificIdentityData>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PlayerIdentityPacket_1<TGameSpecificIdentityData>*>(this, ___internal_method, states, random, publicEncryptionKey, gameSpecificData);
}
template <typename TGameSpecificIdentityData> inline void GlobalNamespace::PlayerIdentityPacket_1<TGameSpecificIdentityData>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerIdentityPacket_1<TGameSpecificIdentityData>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TGameSpecificIdentityData>
inline ::GlobalNamespace::PlayerIdentityPacket_1<TGameSpecificIdentityData>* GlobalNamespace::PlayerIdentityPacket_1<TGameSpecificIdentityData>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlayerIdentityPacket_1<TGameSpecificIdentityData>*>());
}
/// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
template <typename TGameSpecificIdentityData> constexpr GlobalNamespace::PlayerIdentityPacket_1<TGameSpecificIdentityData>::operator ::LiteNetLib::Utils::INetSerializable*() noexcept {
  return static_cast<::LiteNetLib::Utils::INetSerializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::LiteNetLib::Utils::INetSerializable"
template <typename TGameSpecificIdentityData>
constexpr ::LiteNetLib::Utils::INetSerializable* GlobalNamespace::PlayerIdentityPacket_1<TGameSpecificIdentityData>::i___LiteNetLib__Utils__INetSerializable() noexcept {
  return static_cast<::LiteNetLib::Utils::INetSerializable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IPoolablePacket"
template <typename TGameSpecificIdentityData> constexpr GlobalNamespace::PlayerIdentityPacket_1<TGameSpecificIdentityData>::operator ::GlobalNamespace::IPoolablePacket*() noexcept {
  return static_cast<::GlobalNamespace::IPoolablePacket*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IPoolablePacket"
template <typename TGameSpecificIdentityData>
constexpr ::GlobalNamespace::IPoolablePacket* GlobalNamespace::PlayerIdentityPacket_1<TGameSpecificIdentityData>::i___GlobalNamespace__IPoolablePacket() noexcept {
  return static_cast<::GlobalNamespace::IPoolablePacket*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename TGameSpecificIdentityData> constexpr ::GlobalNamespace::PlayerIdentityPacket_1<TGameSpecificIdentityData>::PlayerIdentityPacket_1() {}
