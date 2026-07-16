#pragma once
// IWYU pragma private; include "UnityEngine/Bindings/VisibleToOtherModulesAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/Bindings/zzzz__VisibleToOtherModulesAttribute_def.hpp"
//  Writing Method size for method: ::UnityEngine::Bindings::VisibleToOtherModulesAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Bindings::VisibleToOtherModulesAttribute::*)()>(&::UnityEngine::Bindings::VisibleToOtherModulesAttribute::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6bb29e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Bindings::VisibleToOtherModulesAttribute*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Bindings::VisibleToOtherModulesAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Bindings::VisibleToOtherModulesAttribute::*)(::ArrayW<::StringW>)>(
    &::UnityEngine::Bindings::VisibleToOtherModulesAttribute::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6bb29e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Bindings::VisibleToOtherModulesAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<::StringW>>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Bindings::VisibleToOtherModulesAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Bindings::VisibleToOtherModulesAttribute*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Bindings::VisibleToOtherModulesAttribute::_ctor(::ArrayW<::StringW> modules) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Bindings::VisibleToOtherModulesAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, modules);
}
inline ::UnityEngine::Bindings::VisibleToOtherModulesAttribute* UnityEngine::Bindings::VisibleToOtherModulesAttribute::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Bindings::VisibleToOtherModulesAttribute*>());
}
inline ::UnityEngine::Bindings::VisibleToOtherModulesAttribute* UnityEngine::Bindings::VisibleToOtherModulesAttribute::New_ctor(::ArrayW<::StringW> modules) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Bindings::VisibleToOtherModulesAttribute*>(modules));
}
// Ctor Parameters []
constexpr ::UnityEngine::Bindings::VisibleToOtherModulesAttribute::VisibleToOtherModulesAttribute() {}
