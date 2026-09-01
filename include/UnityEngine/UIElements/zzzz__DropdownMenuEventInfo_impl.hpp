#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\DropdownMenuEventInfo.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__EventModifiers_impl.hpp"
#include "UnityEngine/zzzz__KeyCode_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/UIElements/zzzz__DropdownMenuEventInfo_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::DropdownMenuEventInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::DropdownMenuEventInfo::*)(::UnityEngine::UIElements::EventBase*)>(
    &::UnityEngine::UIElements::DropdownMenuEventInfo::_ctor)> {
  constexpr static std::size_t size = 0x454;
  constexpr static std::size_t addrs = 0x6d939f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DropdownMenuEventInfo*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UIElements::EventBase*>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::EventModifiers& UnityEngine::UIElements::DropdownMenuEventInfo::__cordl_internal_get__modifiers_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____modifiers_k__BackingField;
}
constexpr ::UnityEngine::EventModifiers const& UnityEngine::UIElements::DropdownMenuEventInfo::__cordl_internal_get__modifiers_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____modifiers_k__BackingField;
}
constexpr void UnityEngine::UIElements::DropdownMenuEventInfo::__cordl_internal_set__modifiers_k__BackingField(::UnityEngine::EventModifiers value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____modifiers_k__BackingField = value;
}
constexpr ::UnityEngine::Vector2& UnityEngine::UIElements::DropdownMenuEventInfo::__cordl_internal_get__mousePosition_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mousePosition_k__BackingField;
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::UIElements::DropdownMenuEventInfo::__cordl_internal_get__mousePosition_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mousePosition_k__BackingField;
}
constexpr void UnityEngine::UIElements::DropdownMenuEventInfo::__cordl_internal_set__mousePosition_k__BackingField(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____mousePosition_k__BackingField = value;
}
constexpr ::UnityEngine::Vector2& UnityEngine::UIElements::DropdownMenuEventInfo::__cordl_internal_get__localMousePosition_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localMousePosition_k__BackingField;
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::UIElements::DropdownMenuEventInfo::__cordl_internal_get__localMousePosition_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localMousePosition_k__BackingField;
}
constexpr void UnityEngine::UIElements::DropdownMenuEventInfo::__cordl_internal_set__localMousePosition_k__BackingField(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____localMousePosition_k__BackingField = value;
}
constexpr char16_t& UnityEngine::UIElements::DropdownMenuEventInfo::__cordl_internal_get__character_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____character_k__BackingField;
}
constexpr char16_t const& UnityEngine::UIElements::DropdownMenuEventInfo::__cordl_internal_get__character_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____character_k__BackingField;
}
constexpr void UnityEngine::UIElements::DropdownMenuEventInfo::__cordl_internal_set__character_k__BackingField(char16_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____character_k__BackingField = value;
}
constexpr ::UnityEngine::KeyCode& UnityEngine::UIElements::DropdownMenuEventInfo::__cordl_internal_get__keyCode_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____keyCode_k__BackingField;
}
constexpr ::UnityEngine::KeyCode const& UnityEngine::UIElements::DropdownMenuEventInfo::__cordl_internal_get__keyCode_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____keyCode_k__BackingField;
}
constexpr void UnityEngine::UIElements::DropdownMenuEventInfo::__cordl_internal_set__keyCode_k__BackingField(::UnityEngine::KeyCode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____keyCode_k__BackingField = value;
}
inline void UnityEngine::UIElements::DropdownMenuEventInfo::_ctor(::UnityEngine::UIElements::EventBase* e) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DropdownMenuEventInfo*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UIElements::EventBase*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e);
}
inline ::UnityEngine::UIElements::DropdownMenuEventInfo* UnityEngine::UIElements::DropdownMenuEventInfo::New_ctor(::UnityEngine::UIElements::EventBase* e) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::DropdownMenuEventInfo*>(e));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::DropdownMenuEventInfo::DropdownMenuEventInfo() {}
