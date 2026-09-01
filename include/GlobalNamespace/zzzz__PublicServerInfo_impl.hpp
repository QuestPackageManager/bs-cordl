#pragma once
// IWYU pragma private; include "GlobalNamespace\PublicServerInfo.hpp"
#include "GlobalNamespace/zzzz__PublicServerInfo_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PublicServerInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PublicServerInfo::*)(::StringW, int32_t)>(&::GlobalNamespace::PublicServerInfo::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x32ba00c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PublicServerInfo>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PublicServerInfo.Serialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PublicServerInfo::*)(::LiteNetLib::Utils::NetDataWriter*)>(&::GlobalNamespace::PublicServerInfo::Serialize)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x32ba018;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PublicServerInfo>(), { "Serialize", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataWriter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PublicServerInfo.Deserialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PublicServerInfo (*)(::LiteNetLib::Utils::NetDataReader*)>(&::GlobalNamespace::PublicServerInfo::Deserialize)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x32ba06c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PublicServerInfo>(), { "Deserialize", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataReader*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::PublicServerInfo::_ctor(::StringW code, int32_t currentPlayerCount) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PublicServerInfo>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, code, currentPlayerCount);
}
inline void GlobalNamespace::PublicServerInfo::Serialize(::LiteNetLib::Utils::NetDataWriter* writer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PublicServerInfo>(), { "Serialize", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataWriter*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, writer);
}
inline ::GlobalNamespace::PublicServerInfo GlobalNamespace::PublicServerInfo::Deserialize(::LiteNetLib::Utils::NetDataReader* reader) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PublicServerInfo>(), { "Deserialize", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataReader*>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PublicServerInfo>(nullptr, ___internal_method, reader);
}
// Ctor Parameters [CppParam { name: "code", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "currentPlayerCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::PublicServerInfo::PublicServerInfo(::StringW code, int32_t currentPlayerCount) noexcept {
  this->code = code;
  this->currentPlayerCount = currentPlayerCount;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PublicServerInfo::PublicServerInfo() {}
