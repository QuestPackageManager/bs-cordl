#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\Internal\MultiColumnHeaderColumnResizeHandle.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_impl.hpp"
#include "UnityEngine/UIElements/Internal/zzzz__MultiColumnHeaderColumnResizeHandle_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnResizeHandle.get_dragArea
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::VisualElement* (::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnResizeHandle::*)()>(
    &::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnResizeHandle::get_dragArea)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d2bb6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnResizeHandle*>(), { "get_dragArea", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnResizeHandle._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnResizeHandle::*)()>(
    &::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnResizeHandle::_ctor)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x6d26ba4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnResizeHandle*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::VisualElement*& UnityEngine::UIElements::Internal::MultiColumnHeaderColumnResizeHandle::__cordl_internal_get__dragArea_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dragArea_k__BackingField;
}
constexpr ::UnityEngine::UIElements::VisualElement* const& UnityEngine::UIElements::Internal::MultiColumnHeaderColumnResizeHandle::__cordl_internal_get__dragArea_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dragArea_k__BackingField;
}
constexpr void UnityEngine::UIElements::Internal::MultiColumnHeaderColumnResizeHandle::__cordl_internal_set__dragArea_k__BackingField(::UnityEngine::UIElements::VisualElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____dragArea_k__BackingField = value;
}
inline void UnityEngine::UIElements::Internal::MultiColumnHeaderColumnResizeHandle::setStaticF_ussClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "ussClassName", ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnResizeHandle*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::Internal::MultiColumnHeaderColumnResizeHandle::getStaticF_ussClassName() {
  return ::cordl_internals::getStaticField<::StringW, "ussClassName", ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnResizeHandle*>();
}
inline void UnityEngine::UIElements::Internal::MultiColumnHeaderColumnResizeHandle::setStaticF_dragAreaUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "dragAreaUssClassName", ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnResizeHandle*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::Internal::MultiColumnHeaderColumnResizeHandle::getStaticF_dragAreaUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "dragAreaUssClassName", ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnResizeHandle*>();
}
inline ::UnityEngine::UIElements::VisualElement* UnityEngine::UIElements::Internal::MultiColumnHeaderColumnResizeHandle::get_dragArea() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnResizeHandle*>(), { "get_dragArea", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElement*>(this, ___internal_method);
}
inline void UnityEngine::UIElements::Internal::MultiColumnHeaderColumnResizeHandle::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnResizeHandle*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnResizeHandle* UnityEngine::UIElements::Internal::MultiColumnHeaderColumnResizeHandle::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnResizeHandle*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnResizeHandle::MultiColumnHeaderColumnResizeHandle() {}
