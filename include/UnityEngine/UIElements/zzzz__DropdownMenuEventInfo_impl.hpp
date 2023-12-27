#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__EventModifiers_impl.hpp"
#include "UnityEngine/zzzz__KeyCode_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/UIElements/zzzz__DropdownMenuEventInfo_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::DropdownMenuEventInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::DropdownMenuEventInfo::*)(::UnityEngine::UIElements::EventBase*)>(
    &::UnityEngine::UIElements::DropdownMenuEventInfo::_ctor)> {
  constexpr static std::size_t size = 0x31c;
  constexpr static std::size_t addrs = 0x2e08220;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DropdownMenuEventInfo*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventBase*>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::EventModifiers& UnityEngine::UIElements::DropdownMenuEventInfo::__get__modifiers_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____modifiers_k__BackingField;
}
constexpr ::UnityEngine::EventModifiers const& UnityEngine::UIElements::DropdownMenuEventInfo::__get__modifiers_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____modifiers_k__BackingField;
}
constexpr void UnityEngine::UIElements::DropdownMenuEventInfo::__set__modifiers_k__BackingField(::UnityEngine::EventModifiers value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____modifiers_k__BackingField = value;
}
constexpr ::UnityEngine::Vector2& UnityEngine::UIElements::DropdownMenuEventInfo::__get__mousePosition_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____mousePosition_k__BackingField;
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::UIElements::DropdownMenuEventInfo::__get__mousePosition_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____mousePosition_k__BackingField;
}
constexpr void UnityEngine::UIElements::DropdownMenuEventInfo::__set__mousePosition_k__BackingField(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____mousePosition_k__BackingField = value;
}
constexpr ::UnityEngine::Vector2& UnityEngine::UIElements::DropdownMenuEventInfo::__get__localMousePosition_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____localMousePosition_k__BackingField;
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::UIElements::DropdownMenuEventInfo::__get__localMousePosition_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____localMousePosition_k__BackingField;
}
constexpr void UnityEngine::UIElements::DropdownMenuEventInfo::__set__localMousePosition_k__BackingField(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____localMousePosition_k__BackingField = value;
}
constexpr char16_t& UnityEngine::UIElements::DropdownMenuEventInfo::__get__character_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____character_k__BackingField;
}
constexpr char16_t const& UnityEngine::UIElements::DropdownMenuEventInfo::__get__character_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____character_k__BackingField;
}
constexpr void UnityEngine::UIElements::DropdownMenuEventInfo::__set__character_k__BackingField(char16_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____character_k__BackingField = value;
}
constexpr ::UnityEngine::KeyCode& UnityEngine::UIElements::DropdownMenuEventInfo::__get__keyCode_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____keyCode_k__BackingField;
}
constexpr ::UnityEngine::KeyCode const& UnityEngine::UIElements::DropdownMenuEventInfo::__get__keyCode_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____keyCode_k__BackingField;
}
constexpr void UnityEngine::UIElements::DropdownMenuEventInfo::__set__keyCode_k__BackingField(::UnityEngine::KeyCode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____keyCode_k__BackingField = value;
}
inline ::UnityEngine::UIElements::DropdownMenuEventInfo* UnityEngine::UIElements::DropdownMenuEventInfo::New_ctor(::UnityEngine::UIElements::EventBase* e) {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UIElements::DropdownMenuEventInfo*>(e));
}
inline void UnityEngine::UIElements::DropdownMenuEventInfo::_ctor(::UnityEngine::UIElements::EventBase* e) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DropdownMenuEventInfo*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventBase*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, e);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::DropdownMenuEventInfo::DropdownMenuEventInfo() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
