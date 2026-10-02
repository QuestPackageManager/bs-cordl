#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/DrawParams.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Rect_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__DrawParams_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__Stack_1_def.hpp"
#include "UnityEngine/zzzz__MaterialPropertyBlock_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::DrawParams.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::DrawParams::*)()>(&::UnityEngine::UIElements::UIR::DrawParams::Reset)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x718fad4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::DrawParams*>(), { "Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::DrawParams._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::DrawParams::*)()>(&::UnityEngine::UIElements::UIR::DrawParams::_ctor)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x718ba38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::DrawParams*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Stack_1<::UnityEngine::Matrix4x4>*& UnityEngine::UIElements::UIR::DrawParams::__cordl_internal_get_view() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___view;
}
constexpr ::System::Collections::Generic::Stack_1<::UnityEngine::Matrix4x4>* const& UnityEngine::UIElements::UIR::DrawParams::__cordl_internal_get_view() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___view;
}
constexpr void UnityEngine::UIElements::UIR::DrawParams::__cordl_internal_set_view(::System::Collections::Generic::Stack_1<::UnityEngine::Matrix4x4>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___view = value;
}
constexpr ::System::Collections::Generic::Stack_1<::UnityEngine::Rect>*& UnityEngine::UIElements::UIR::DrawParams::__cordl_internal_get_scissor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scissor;
}
constexpr ::System::Collections::Generic::Stack_1<::UnityEngine::Rect>* const& UnityEngine::UIElements::UIR::DrawParams::__cordl_internal_get_scissor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scissor;
}
constexpr void UnityEngine::UIElements::UIR::DrawParams::__cordl_internal_set_scissor(::System::Collections::Generic::Stack_1<::UnityEngine::Rect>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___scissor = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*& UnityEngine::UIElements::UIR::DrawParams::__cordl_internal_get_defaultMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___defaultMaterial;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>* const& UnityEngine::UIElements::UIR::DrawParams::__cordl_internal_get_defaultMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___defaultMaterial;
}
constexpr void UnityEngine::UIElements::UIR::DrawParams::__cordl_internal_set_defaultMaterial(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___defaultMaterial = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::MaterialPropertyBlock*>*& UnityEngine::UIElements::UIR::DrawParams::__cordl_internal_get_props() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___props;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::MaterialPropertyBlock*>* const& UnityEngine::UIElements::UIR::DrawParams::__cordl_internal_get_props() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___props;
}
constexpr void UnityEngine::UIElements::UIR::DrawParams::__cordl_internal_set_props(::System::Collections::Generic::List_1<::UnityEngine::MaterialPropertyBlock*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___props = value;
}
constexpr ::UnityEngine::Vector2& UnityEngine::UIElements::UIR::DrawParams::__cordl_internal_get_boundsMin() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___boundsMin;
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::UIElements::UIR::DrawParams::__cordl_internal_get_boundsMin() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___boundsMin;
}
constexpr void UnityEngine::UIElements::UIR::DrawParams::__cordl_internal_set_boundsMin(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___boundsMin = value;
}
inline void UnityEngine::UIElements::UIR::DrawParams::setStaticF_k_UnlimitedRect(::UnityEngine::Rect value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rect, "k_UnlimitedRect", ::UnityEngine::UIElements::UIR::DrawParams*>(std::forward<::UnityEngine::Rect>(value));
}
inline ::UnityEngine::Rect UnityEngine::UIElements::UIR::DrawParams::getStaticF_k_UnlimitedRect() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rect, "k_UnlimitedRect", ::UnityEngine::UIElements::UIR::DrawParams*>();
}
inline void UnityEngine::UIElements::UIR::DrawParams::setStaticF_k_FullNormalizedRect(::UnityEngine::Rect value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rect, "k_FullNormalizedRect", ::UnityEngine::UIElements::UIR::DrawParams*>(std::forward<::UnityEngine::Rect>(value));
}
inline ::UnityEngine::Rect UnityEngine::UIElements::UIR::DrawParams::getStaticF_k_FullNormalizedRect() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rect, "k_FullNormalizedRect", ::UnityEngine::UIElements::UIR::DrawParams*>();
}
inline void UnityEngine::UIElements::UIR::DrawParams::Reset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::DrawParams*>(), { "Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::DrawParams::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::DrawParams*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::UIR::DrawParams* UnityEngine::UIElements::UIR::DrawParams::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::UIR::DrawParams*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIR::DrawParams::DrawParams() {}
