#pragma once
// IWYU pragma private; include "UnityEngine/VFX/VFXOutputEventArgs.hpp"
#include "UnityEngine/VFX/zzzz__VFXOutputEventArgs_def.hpp"
#include "UnityEngine/VFX/zzzz__VFXEventAttribute_def.hpp"
//  Writing Method size for method: ::UnityEngine::VFX::VFXOutputEventArgs.get_nameId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::VFX::VFXOutputEventArgs::*)()>(&::UnityEngine::VFX::VFXOutputEventArgs::get_nameId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e2a824;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VFXOutputEventArgs>(), { "get_nameId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::VFXOutputEventArgs.get_eventAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::VFX::VFXEventAttribute* (::UnityEngine::VFX::VFXOutputEventArgs::*)()>(
    &::UnityEngine::VFX::VFXOutputEventArgs::get_eventAttribute)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e2a82c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VFXOutputEventArgs>(), { "get_eventAttribute", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::VFXOutputEventArgs._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::VFXOutputEventArgs::*)(int32_t, ::UnityEngine::VFX::VFXEventAttribute*)>(
    &::UnityEngine::VFX::VFXOutputEventArgs::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6e2a834;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VFXOutputEventArgs>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::VFX::VFXEventAttribute*>() } })));
    return ___internal_method;
  }
};
inline int32_t UnityEngine::VFX::VFXOutputEventArgs::get_nameId() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VFXOutputEventArgs>(), { "get_nameId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::UnityEngine::VFX::VFXEventAttribute* UnityEngine::VFX::VFXOutputEventArgs::get_eventAttribute() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VFXOutputEventArgs>(), { "get_eventAttribute", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::VFX::VFXEventAttribute*>(*this, ___internal_method);
}
inline void UnityEngine::VFX::VFXOutputEventArgs::_ctor(int32_t nameId, ::UnityEngine::VFX::VFXEventAttribute* eventAttribute) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VFXOutputEventArgs>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::VFX::VFXEventAttribute*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, nameId, eventAttribute);
}
// Ctor Parameters [CppParam { name: "_nameId_k__BackingField", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_eventAttribute_k__BackingField", ty:
// "::UnityEngine::VFX::VFXEventAttribute*", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::VFX::VFXOutputEventArgs::VFXOutputEventArgs(int32_t _nameId_k__BackingField, ::UnityEngine::VFX::VFXEventAttribute* _eventAttribute_k__BackingField) noexcept {
  this->_nameId_k__BackingField = _nameId_k__BackingField;
  this->_eventAttribute_k__BackingField = _eventAttribute_k__BackingField;
}
// Ctor Parameters []
constexpr ::UnityEngine::VFX::VFXOutputEventArgs::VFXOutputEventArgs() {}
