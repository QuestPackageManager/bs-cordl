#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\TabDragLocationPreview.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_impl.hpp"
#include "UnityEngine/UIElements/zzzz__TabDragLocationPreview_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::TabDragLocationPreview.get_preview
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::VisualElement* (::UnityEngine::UIElements::TabDragLocationPreview::*)()>(
    &::UnityEngine::UIElements::TabDragLocationPreview::get_preview)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d748f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TabDragLocationPreview*>(), { "get_preview", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TabDragLocationPreview._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::TabDragLocationPreview::*)()>(&::UnityEngine::UIElements::TabDragLocationPreview::_ctor)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x6d74900;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TabDragLocationPreview*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::VisualElement*& UnityEngine::UIElements::TabDragLocationPreview::__cordl_internal_get_m_Preview() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Preview;
}
constexpr ::UnityEngine::UIElements::VisualElement* const& UnityEngine::UIElements::TabDragLocationPreview::__cordl_internal_get_m_Preview() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Preview;
}
constexpr void UnityEngine::UIElements::TabDragLocationPreview::__cordl_internal_set_m_Preview(::UnityEngine::UIElements::VisualElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Preview = value;
}
inline void UnityEngine::UIElements::TabDragLocationPreview::setStaticF_ussClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "ussClassName", ::UnityEngine::UIElements::TabDragLocationPreview*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::TabDragLocationPreview::getStaticF_ussClassName() {
  return ::cordl_internals::getStaticField<::StringW, "ussClassName", ::UnityEngine::UIElements::TabDragLocationPreview*>();
}
inline void UnityEngine::UIElements::TabDragLocationPreview::setStaticF_visualUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "visualUssClassName", ::UnityEngine::UIElements::TabDragLocationPreview*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::TabDragLocationPreview::getStaticF_visualUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "visualUssClassName", ::UnityEngine::UIElements::TabDragLocationPreview*>();
}
inline void UnityEngine::UIElements::TabDragLocationPreview::setStaticF_verticalUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "verticalUssClassName", ::UnityEngine::UIElements::TabDragLocationPreview*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::TabDragLocationPreview::getStaticF_verticalUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "verticalUssClassName", ::UnityEngine::UIElements::TabDragLocationPreview*>();
}
inline void UnityEngine::UIElements::TabDragLocationPreview::setStaticF_horizontalUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "horizontalUssClassName", ::UnityEngine::UIElements::TabDragLocationPreview*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::TabDragLocationPreview::getStaticF_horizontalUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "horizontalUssClassName", ::UnityEngine::UIElements::TabDragLocationPreview*>();
}
inline ::UnityEngine::UIElements::VisualElement* UnityEngine::UIElements::TabDragLocationPreview::get_preview() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TabDragLocationPreview*>(), { "get_preview", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElement*>(this, ___internal_method);
}
inline void UnityEngine::UIElements::TabDragLocationPreview::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TabDragLocationPreview*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::TabDragLocationPreview* UnityEngine::UIElements::TabDragLocationPreview::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::TabDragLocationPreview*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::TabDragLocationPreview::TabDragLocationPreview() {}
