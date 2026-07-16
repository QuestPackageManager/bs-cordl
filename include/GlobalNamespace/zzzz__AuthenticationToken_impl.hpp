#pragma once
// IWYU pragma private; include "GlobalNamespace/AuthenticationToken.hpp"
#include "GlobalNamespace/zzzz__AuthenticationToken_def.hpp"
#include "GlobalNamespace/zzzz__AuthenticationToken_def.hpp"
#include "LiteNetLib/Utils/zzzz__INetImmutableSerializable_1_def.hpp"
#include "LiteNetLib/Utils/zzzz__INetImmutableSerializable_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::AuthenticationToken_PlatformType::AuthenticationToken_PlatformType(uint8_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AuthenticationToken_PlatformType::AuthenticationToken_PlatformType() {}
constexpr ::GlobalNamespace::AuthenticationToken_PlatformType GlobalNamespace::AuthenticationToken_PlatformType::Test{ static_cast<uint8_t>(0x0u) };
constexpr ::GlobalNamespace::AuthenticationToken_PlatformType GlobalNamespace::AuthenticationToken_PlatformType::OculusRift{ static_cast<uint8_t>(0x1u) };
constexpr ::GlobalNamespace::AuthenticationToken_PlatformType GlobalNamespace::AuthenticationToken_PlatformType::OculusQuest{ static_cast<uint8_t>(0x2u) };
constexpr ::GlobalNamespace::AuthenticationToken_PlatformType GlobalNamespace::AuthenticationToken_PlatformType::Steam{ static_cast<uint8_t>(0x3u) };
constexpr ::GlobalNamespace::AuthenticationToken_PlatformType GlobalNamespace::AuthenticationToken_PlatformType::PS4{ static_cast<uint8_t>(0x4u) };
constexpr ::GlobalNamespace::AuthenticationToken_PlatformType GlobalNamespace::AuthenticationToken_PlatformType::PS4Dev{ static_cast<uint8_t>(0x5u) };
constexpr ::GlobalNamespace::AuthenticationToken_PlatformType GlobalNamespace::AuthenticationToken_PlatformType::PS4Cert{ static_cast<uint8_t>(0x6u) };
constexpr ::GlobalNamespace::AuthenticationToken_PlatformType GlobalNamespace::AuthenticationToken_PlatformType::PS5{ static_cast<uint8_t>(0x7u) };
constexpr ::GlobalNamespace::AuthenticationToken_PlatformType GlobalNamespace::AuthenticationToken_PlatformType::PS5Dev{ static_cast<uint8_t>(0x8u) };
constexpr ::GlobalNamespace::AuthenticationToken_PlatformType GlobalNamespace::AuthenticationToken_PlatformType::PS5Cert{ static_cast<uint8_t>(0x9u) };
constexpr ::GlobalNamespace::AuthenticationToken_PlatformType GlobalNamespace::AuthenticationToken_PlatformType::Oculus{ static_cast<uint8_t>(0x2u) };
//  Writing Method size for method: ::GlobalNamespace::AuthenticationToken._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AuthenticationToken::*)(::GlobalNamespace::AuthenticationToken_PlatformType, ::StringW, ::StringW, ::StringW)>(
    &::GlobalNamespace::AuthenticationToken::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x32a4d88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::AuthenticationToken>(),
            { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::AuthenticationToken_PlatformType>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AuthenticationToken.Serialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AuthenticationToken::*)(::LiteNetLib::Utils::NetDataWriter*)>(&::GlobalNamespace::AuthenticationToken::Serialize)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x32a4d98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AuthenticationToken>(), { "Serialize", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataWriter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AuthenticationToken.CreateFromSerializedData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::AuthenticationToken (::GlobalNamespace::AuthenticationToken::*)(::LiteNetLib::Utils::NetDataReader*)>(
    &::GlobalNamespace::AuthenticationToken::CreateFromSerializedData)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x32a4f54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AuthenticationToken>(), { "CreateFromSerializedData", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataReader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AuthenticationToken.Deserialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::AuthenticationToken (*)(::LiteNetLib::Utils::NetDataReader*)>(&::GlobalNamespace::AuthenticationToken::Deserialize)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x32a4f80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AuthenticationToken>(), { "Deserialize", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataReader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AuthenticationToken.FromHex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::StringW)>(&::GlobalNamespace::AuthenticationToken::FromHex)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x32a4e58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AuthenticationToken>(), { "FromHex", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AuthenticationToken.GetHexVal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (*)(char16_t)>(&::GlobalNamespace::AuthenticationToken::GetHexVal)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x32a5130;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AuthenticationToken>(), { "GetHexVal", {}, { ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AuthenticationToken.FromUtf8
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::StringW)>(&::GlobalNamespace::AuthenticationToken::FromUtf8)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x32a4e28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AuthenticationToken>(), { "FromUtf8", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AuthenticationToken.ToHex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::ArrayW<uint8_t>)>(&::GlobalNamespace::AuthenticationToken::ToHex)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x32a50b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AuthenticationToken>(), { "ToHex", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AuthenticationToken.ToUtf8
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::ArrayW<uint8_t>)>(&::GlobalNamespace::AuthenticationToken::ToUtf8)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x32a5084;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AuthenticationToken>(), { "ToUtf8", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::AuthenticationToken::_ctor(::GlobalNamespace::AuthenticationToken_PlatformType platform, ::StringW userId, ::StringW userName, ::StringW sessionToken) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::AuthenticationToken>(),
          { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::AuthenticationToken_PlatformType>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, platform, userId, userName, sessionToken);
}
inline void GlobalNamespace::AuthenticationToken::Serialize(::LiteNetLib::Utils::NetDataWriter* writer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AuthenticationToken>(), { "Serialize", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataWriter*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, writer);
}
inline ::GlobalNamespace::AuthenticationToken GlobalNamespace::AuthenticationToken::CreateFromSerializedData(::LiteNetLib::Utils::NetDataReader* reader) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AuthenticationToken>(), { "CreateFromSerializedData", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataReader*>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::AuthenticationToken>(*this, ___internal_method, reader);
}
inline ::GlobalNamespace::AuthenticationToken GlobalNamespace::AuthenticationToken::Deserialize(::LiteNetLib::Utils::NetDataReader* reader) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AuthenticationToken>(), { "Deserialize", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataReader*>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::AuthenticationToken>(nullptr, ___internal_method, reader);
}
inline ::ArrayW<uint8_t> GlobalNamespace::AuthenticationToken::FromHex(::StringW str) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AuthenticationToken>(), { "FromHex", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, str);
}
inline uint8_t GlobalNamespace::AuthenticationToken::GetHexVal(char16_t c) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AuthenticationToken>(), { "GetHexVal", {}, { ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint8_t>(nullptr, ___internal_method, c);
}
inline ::ArrayW<uint8_t> GlobalNamespace::AuthenticationToken::FromUtf8(::StringW str) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AuthenticationToken>(), { "FromUtf8", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, str);
}
inline ::StringW GlobalNamespace::AuthenticationToken::ToHex(::ArrayW<uint8_t> bytes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AuthenticationToken>(), { "ToHex", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, bytes);
}
inline ::StringW GlobalNamespace::AuthenticationToken::ToUtf8(::ArrayW<uint8_t> bytes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AuthenticationToken>(), { "ToUtf8", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, bytes);
}
/// @brief Convert operator to "::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::AuthenticationToken>"
constexpr GlobalNamespace::AuthenticationToken::operator ::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::AuthenticationToken>*() {
  return static_cast<::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::AuthenticationToken>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::AuthenticationToken>"
constexpr ::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::AuthenticationToken>*
GlobalNamespace::AuthenticationToken::i___LiteNetLib__Utils__INetImmutableSerializable_1___GlobalNamespace__AuthenticationToken_() {
  return static_cast<::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::AuthenticationToken>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::LiteNetLib::Utils::INetImmutableSerializable"
constexpr GlobalNamespace::AuthenticationToken::operator ::LiteNetLib::Utils::INetImmutableSerializable*() {
  return static_cast<::LiteNetLib::Utils::INetImmutableSerializable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::LiteNetLib::Utils::INetImmutableSerializable"
constexpr ::LiteNetLib::Utils::INetImmutableSerializable* GlobalNamespace::AuthenticationToken::i___LiteNetLib__Utils__INetImmutableSerializable() {
  return static_cast<::LiteNetLib::Utils::INetImmutableSerializable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "platform", ty: "::GlobalNamespace::AuthenticationToken_PlatformType", modifiers: "", def_value: Some("{}") }, CppParam { name: "userId", ty: "::StringW",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "userName", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "sessionToken", ty: "::StringW", modifiers: "",
// def_value: Some("{}") }]
constexpr ::GlobalNamespace::AuthenticationToken::AuthenticationToken(::GlobalNamespace::AuthenticationToken_PlatformType platform, ::StringW userId, ::StringW userName,
                                                                      ::StringW sessionToken) noexcept {
  this->platform = platform;
  this->userId = userId;
  this->userName = userName;
  this->sessionToken = sessionToken;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AuthenticationToken::AuthenticationToken() {}
