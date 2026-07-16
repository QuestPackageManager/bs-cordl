#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/SupportedOnRendererAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/zzzz__Type_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__SupportedOnRendererAttribute_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::SupportedOnRendererAttribute.get_rendererTypes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Type*> (::UnityEngine::Rendering::Universal::SupportedOnRendererAttribute::*)()>(
    &::UnityEngine::Rendering::Universal::SupportedOnRendererAttribute::get_rendererTypes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68b9690;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::SupportedOnRendererAttribute*>(), { "get_rendererTypes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::SupportedOnRendererAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::SupportedOnRendererAttribute::*)(::System::Type*)>(
    &::UnityEngine::Rendering::Universal::SupportedOnRendererAttribute::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x68b9698;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::SupportedOnRendererAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::SupportedOnRendererAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::SupportedOnRendererAttribute::*)(::ArrayW<::System::Type*>)>(
    &::UnityEngine::Rendering::Universal::SupportedOnRendererAttribute::_ctor)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x68b973c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::SupportedOnRendererAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<::System::Type*>>() } })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::System::Type*>& UnityEngine::Rendering::Universal::SupportedOnRendererAttribute::__cordl_internal_get__rendererTypes_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rendererTypes_k__BackingField;
}
constexpr ::ArrayW<::System::Type*> const& UnityEngine::Rendering::Universal::SupportedOnRendererAttribute::__cordl_internal_get__rendererTypes_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rendererTypes_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::SupportedOnRendererAttribute::__cordl_internal_set__rendererTypes_k__BackingField(::ArrayW<::System::Type*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rendererTypes_k__BackingField = value;
}
inline ::ArrayW<::System::Type*> UnityEngine::Rendering::Universal::SupportedOnRendererAttribute::get_rendererTypes() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::SupportedOnRendererAttribute*>(), { "get_rendererTypes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Type*>>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::SupportedOnRendererAttribute::_ctor(::System::Type* renderer) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::SupportedOnRendererAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderer);
}
inline void UnityEngine::Rendering::Universal::SupportedOnRendererAttribute::_ctor(::ArrayW<::System::Type*> renderers) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::SupportedOnRendererAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<::System::Type*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderers);
}
inline ::UnityEngine::Rendering::Universal::SupportedOnRendererAttribute* UnityEngine::Rendering::Universal::SupportedOnRendererAttribute::New_ctor(::System::Type* renderer) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::SupportedOnRendererAttribute*>(renderer));
}
inline ::UnityEngine::Rendering::Universal::SupportedOnRendererAttribute* UnityEngine::Rendering::Universal::SupportedOnRendererAttribute::New_ctor(::ArrayW<::System::Type*> renderers) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::SupportedOnRendererAttribute*>(renderers));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::SupportedOnRendererAttribute::SupportedOnRendererAttribute() {}
