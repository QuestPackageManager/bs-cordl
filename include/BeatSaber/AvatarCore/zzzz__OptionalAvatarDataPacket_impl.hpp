#pragma once
// IWYU pragma private; include "BeatSaber\AvatarCore\OptionalAvatarDataPacket.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaber/AvatarCore/zzzz__OptionalAvatarDataPacket_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__OptionalAvatarData_def.hpp"
#include "GlobalNamespace/zzzz__ByteArrayNetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__IPoolablePacket_def.hpp"
#include "GlobalNamespace/zzzz__PacketPool_1_def.hpp"
#include "LiteNetLib/Utils/zzzz__INetSerializable_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
//  Writing Method size for method: ::BeatSaber::AvatarCore::OptionalAvatarDataPacket.get_pool
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PacketPool_1<::BeatSaber::AvatarCore::OptionalAvatarDataPacket*>* (*)()>(
    &::BeatSaber::AvatarCore::OptionalAvatarDataPacket::get_pool)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x3270cec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::OptionalAvatarDataPacket*>(), { "get_pool", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::OptionalAvatarDataPacket.Serialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::AvatarCore::OptionalAvatarDataPacket::*)(::LiteNetLib::Utils::NetDataWriter*)>(
    &::BeatSaber::AvatarCore::OptionalAvatarDataPacket::Serialize)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x3270d30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::OptionalAvatarDataPacket*>(), { "Serialize", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataWriter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::OptionalAvatarDataPacket.Deserialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::AvatarCore::OptionalAvatarDataPacket::*)(::LiteNetLib::Utils::NetDataReader*)>(
    &::BeatSaber::AvatarCore::OptionalAvatarDataPacket::Deserialize)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x3270d74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::OptionalAvatarDataPacket*>(), { "Deserialize", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataReader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::OptionalAvatarDataPacket.Release
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::AvatarCore::OptionalAvatarDataPacket::*)()>(&::BeatSaber::AvatarCore::OptionalAvatarDataPacket::Release)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x3270dc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::OptionalAvatarDataPacket*>(), { "Release", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::OptionalAvatarDataPacket.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatSaber::AvatarCore::OptionalAvatarDataPacket* (
    ::BeatSaber::AvatarCore::OptionalAvatarDataPacket::*)(::BeatSaber::AvatarCore::OptionalAvatarData)>(&::BeatSaber::AvatarCore::OptionalAvatarDataPacket::Init)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3270e30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::OptionalAvatarDataPacket*>(), { "Init", {}, { ::i2c::type_of<::BeatSaber::AvatarCore::OptionalAvatarData>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::OptionalAvatarDataPacket.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatSaber::AvatarCore::OptionalAvatarDataPacket* (::BeatSaber::AvatarCore::OptionalAvatarDataPacket::*)(uint32_t, ::ArrayW<uint8_t>, int32_t)>(
    &::BeatSaber::AvatarCore::OptionalAvatarDataPacket::Init)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x3270e38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::OptionalAvatarDataPacket*>(),
                                                             { "Init", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::OptionalAvatarDataPacket._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::AvatarCore::OptionalAvatarDataPacket::*)()>(&::BeatSaber::AvatarCore::OptionalAvatarDataPacket::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x3270e6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::OptionalAvatarDataPacket*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr uint32_t& BeatSaber::AvatarCore::OptionalAvatarDataPacket::__cordl_internal_get_dataType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dataType;
}
constexpr uint32_t const& BeatSaber::AvatarCore::OptionalAvatarDataPacket::__cordl_internal_get_dataType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dataType;
}
constexpr void BeatSaber::AvatarCore::OptionalAvatarDataPacket::__cordl_internal_set_dataType(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___dataType = value;
}
constexpr ::GlobalNamespace::ByteArrayNetSerializable*& BeatSaber::AvatarCore::OptionalAvatarDataPacket::__cordl_internal_get_data() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
constexpr ::GlobalNamespace::ByteArrayNetSerializable* const& BeatSaber::AvatarCore::OptionalAvatarDataPacket::__cordl_internal_get_data() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
constexpr void BeatSaber::AvatarCore::OptionalAvatarDataPacket::__cordl_internal_set_data(::GlobalNamespace::ByteArrayNetSerializable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___data = value;
}
inline ::GlobalNamespace::PacketPool_1<::BeatSaber::AvatarCore::OptionalAvatarDataPacket*>* BeatSaber::AvatarCore::OptionalAvatarDataPacket::get_pool() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::OptionalAvatarDataPacket*>(), { "get_pool", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PacketPool_1<::BeatSaber::AvatarCore::OptionalAvatarDataPacket*>*>(nullptr, ___internal_method);
}
inline void BeatSaber::AvatarCore::OptionalAvatarDataPacket::Serialize(::LiteNetLib::Utils::NetDataWriter* writer) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::OptionalAvatarDataPacket*>(), { "Serialize", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataWriter*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer);
}
inline void BeatSaber::AvatarCore::OptionalAvatarDataPacket::Deserialize(::LiteNetLib::Utils::NetDataReader* reader) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::OptionalAvatarDataPacket*>(), { "Deserialize", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataReader*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader);
}
inline void BeatSaber::AvatarCore::OptionalAvatarDataPacket::Release() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::OptionalAvatarDataPacket*>(), { "Release", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BeatSaber::AvatarCore::OptionalAvatarDataPacket* BeatSaber::AvatarCore::OptionalAvatarDataPacket::Init(::BeatSaber::AvatarCore::OptionalAvatarData optionalAvatarData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::OptionalAvatarDataPacket*>(), { "Init", {}, { ::i2c::type_of<::BeatSaber::AvatarCore::OptionalAvatarData>() } })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::AvatarCore::OptionalAvatarDataPacket*>(this, ___internal_method, optionalAvatarData);
}
inline ::BeatSaber::AvatarCore::OptionalAvatarDataPacket* BeatSaber::AvatarCore::OptionalAvatarDataPacket::Init(uint32_t dataType, ::ArrayW<uint8_t> data, int32_t length) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::OptionalAvatarDataPacket*>(),
                                                           { "Init", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::AvatarCore::OptionalAvatarDataPacket*>(this, ___internal_method, dataType, data, length);
}
inline void BeatSaber::AvatarCore::OptionalAvatarDataPacket::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::OptionalAvatarDataPacket*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BeatSaber::AvatarCore::OptionalAvatarDataPacket* BeatSaber::AvatarCore::OptionalAvatarDataPacket::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::AvatarCore::OptionalAvatarDataPacket*>());
}
/// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
constexpr BeatSaber::AvatarCore::OptionalAvatarDataPacket::operator ::LiteNetLib::Utils::INetSerializable*() noexcept {
  return static_cast<::LiteNetLib::Utils::INetSerializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::LiteNetLib::Utils::INetSerializable"
constexpr ::LiteNetLib::Utils::INetSerializable* BeatSaber::AvatarCore::OptionalAvatarDataPacket::i___LiteNetLib__Utils__INetSerializable() noexcept {
  return static_cast<::LiteNetLib::Utils::INetSerializable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IPoolablePacket"
constexpr BeatSaber::AvatarCore::OptionalAvatarDataPacket::operator ::GlobalNamespace::IPoolablePacket*() noexcept {
  return static_cast<::GlobalNamespace::IPoolablePacket*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IPoolablePacket"
constexpr ::GlobalNamespace::IPoolablePacket* BeatSaber::AvatarCore::OptionalAvatarDataPacket::i___GlobalNamespace__IPoolablePacket() noexcept {
  return static_cast<::GlobalNamespace::IPoolablePacket*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::BeatSaber::AvatarCore::OptionalAvatarDataPacket::OptionalAvatarDataPacket() {}
