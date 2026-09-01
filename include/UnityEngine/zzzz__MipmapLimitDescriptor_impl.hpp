#pragma once
// IWYU pragma private; include "UnityEngine\MipmapLimitDescriptor.hpp"
#include "UnityEngine/zzzz__MipmapLimitDescriptor_def.hpp"
//  Writing Method size for method: ::UnityEngine::MipmapLimitDescriptor.get_useMipmapLimit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::MipmapLimitDescriptor::*)()>(&::UnityEngine::MipmapLimitDescriptor::get_useMipmapLimit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6ac78e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::MipmapLimitDescriptor>(), { "get_useMipmapLimit", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MipmapLimitDescriptor.get_groupName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::MipmapLimitDescriptor::*)()>(&::UnityEngine::MipmapLimitDescriptor::get_groupName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6ac78f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::MipmapLimitDescriptor>(), { "get_groupName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MipmapLimitDescriptor._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::MipmapLimitDescriptor::*)(bool, ::StringW)>(&::UnityEngine::MipmapLimitDescriptor::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6ac78f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::MipmapLimitDescriptor>(), { ".ctor", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
inline bool UnityEngine::MipmapLimitDescriptor::get_useMipmapLimit() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::MipmapLimitDescriptor>(), { "get_useMipmapLimit", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline ::StringW UnityEngine::MipmapLimitDescriptor::get_groupName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::MipmapLimitDescriptor>(), { "get_groupName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline void UnityEngine::MipmapLimitDescriptor::_ctor(bool useMipmapLimit, ::StringW groupName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::MipmapLimitDescriptor>(), { ".ctor", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, useMipmapLimit, groupName);
}
// Ctor Parameters [CppParam { name: "_useMipmapLimit_k__BackingField", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "_groupName_k__BackingField", ty: "::StringW", modifiers:
// "", def_value: Some("{}") }]
constexpr ::UnityEngine::MipmapLimitDescriptor::MipmapLimitDescriptor(bool _useMipmapLimit_k__BackingField, ::StringW _groupName_k__BackingField) noexcept {
  this->_useMipmapLimit_k__BackingField = _useMipmapLimit_k__BackingField;
  this->_groupName_k__BackingField = _groupName_k__BackingField;
}
// Ctor Parameters []
constexpr ::UnityEngine::MipmapLimitDescriptor::MipmapLimitDescriptor() {}
