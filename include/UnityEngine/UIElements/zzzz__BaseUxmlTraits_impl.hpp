#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/BaseUxmlTraits.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__BaseUxmlTraits_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::BaseUxmlTraits._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseUxmlTraits::*)()>(&::UnityEngine::UIElements::BaseUxmlTraits::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6cbc7f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseUxmlTraits*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseUxmlTraits.set_canHaveAnyAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseUxmlTraits::*)(bool)>(&::UnityEngine::UIElements::BaseUxmlTraits::set_canHaveAnyAttribute)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6cbc800;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseUxmlTraits*>(), { "set_canHaveAnyAttribute", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
constexpr bool& UnityEngine::UIElements::BaseUxmlTraits::__cordl_internal_get__canHaveAnyAttribute_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____canHaveAnyAttribute_k__BackingField;
}
constexpr bool const& UnityEngine::UIElements::BaseUxmlTraits::__cordl_internal_get__canHaveAnyAttribute_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____canHaveAnyAttribute_k__BackingField;
}
constexpr void UnityEngine::UIElements::BaseUxmlTraits::__cordl_internal_set__canHaveAnyAttribute_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____canHaveAnyAttribute_k__BackingField = value;
}
inline void UnityEngine::UIElements::BaseUxmlTraits::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseUxmlTraits*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseUxmlTraits::set_canHaveAnyAttribute(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseUxmlTraits*>(), { "set_canHaveAnyAttribute", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::BaseUxmlTraits* UnityEngine::UIElements::BaseUxmlTraits::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::BaseUxmlTraits*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::BaseUxmlTraits::BaseUxmlTraits() {}
