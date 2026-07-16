#pragma once
// IWYU pragma private; include "OculusStudios/Platform/Core/PartyInfo.hpp"
#include "OculusStudios/Platform/Core/zzzz__PartyInfo_def.hpp"
//  Writing Method size for method: ::OculusStudios::Platform::Core::PartyInfo.get_currentUsers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::OculusStudios::Platform::Core::PartyInfo::*)()>(&::OculusStudios::Platform::Core::PartyInfo::get_currentUsers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f2c254;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Core::PartyInfo>(), { "get_currentUsers", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Core::PartyInfo.get_maxUsers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::OculusStudios::Platform::Core::PartyInfo::*)()>(&::OculusStudios::Platform::Core::PartyInfo::get_maxUsers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f2c25c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Core::PartyInfo>(), { "get_maxUsers", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Core::PartyInfo.get_groupId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::OculusStudios::Platform::Core::PartyInfo::*)()>(&::OculusStudios::Platform::Core::PartyInfo::get_groupId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f2c264;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Core::PartyInfo>(), { "get_groupId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Core::PartyInfo.get_joinKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::OculusStudios::Platform::Core::PartyInfo::*)()>(&::OculusStudios::Platform::Core::PartyInfo::get_joinKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f2c26c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Core::PartyInfo>(), { "get_joinKey", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Core::PartyInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::Platform::Core::PartyInfo::*)(uint32_t, uint32_t, ::StringW, ::StringW)>(
    &::OculusStudios::Platform::Core::PartyInfo::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5f2c274;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Core::PartyInfo>(),
                                                             { ".ctor", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
inline uint32_t OculusStudios::Platform::Core::PartyInfo::get_currentUsers() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Core::PartyInfo>(), { "get_currentUsers", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method);
}
inline uint32_t OculusStudios::Platform::Core::PartyInfo::get_maxUsers() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Core::PartyInfo>(), { "get_maxUsers", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method);
}
inline ::StringW OculusStudios::Platform::Core::PartyInfo::get_groupId() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Core::PartyInfo>(), { "get_groupId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::StringW OculusStudios::Platform::Core::PartyInfo::get_joinKey() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Core::PartyInfo>(), { "get_joinKey", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline void OculusStudios::Platform::Core::PartyInfo::_ctor(uint32_t currentUsers, uint32_t maxUsers, ::StringW groupId, ::StringW joinKey) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Core::PartyInfo>(),
                                                           { ".ctor", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, currentUsers, maxUsers, groupId, joinKey);
}
// Ctor Parameters [CppParam { name: "_currentUsers_k__BackingField", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_maxUsers_k__BackingField", ty: "uint32_t", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "_groupId_k__BackingField", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "_joinKey_k__BackingField", ty: "::StringW",
// modifiers: "", def_value: Some("{}") }]
constexpr ::OculusStudios::Platform::Core::PartyInfo::PartyInfo(uint32_t _currentUsers_k__BackingField, uint32_t _maxUsers_k__BackingField, ::StringW _groupId_k__BackingField,
                                                                ::StringW _joinKey_k__BackingField) noexcept {
  this->_currentUsers_k__BackingField = _currentUsers_k__BackingField;
  this->_maxUsers_k__BackingField = _maxUsers_k__BackingField;
  this->_groupId_k__BackingField = _groupId_k__BackingField;
  this->_joinKey_k__BackingField = _joinKey_k__BackingField;
}
// Ctor Parameters []
constexpr ::OculusStudios::Platform::Core::PartyInfo::PartyInfo() {}
