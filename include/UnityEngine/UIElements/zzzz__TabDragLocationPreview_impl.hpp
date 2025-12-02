#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/TabDragLocationPreview.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_impl.hpp"
#include "UnityEngine/UIElements/zzzz__TabDragLocationPreview_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::TabDragLocationPreview.get_preview
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::VisualElement* (::UnityEngine::UIElements::TabDragLocationPreview::*)()>(
    &::UnityEngine::UIElements::TabDragLocationPreview::get_preview)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b401b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TabDragLocationPreview*>::get(),
                                                                               "get_preview", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TabDragLocationPreview._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::TabDragLocationPreview::*)()>(
    &::UnityEngine::UIElements::TabDragLocationPreview::_ctor)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x6b401bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TabDragLocationPreview*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Preview)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::UIElements::TabDragLocationPreview::setStaticF_ussClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "ussClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TabDragLocationPreview*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::TabDragLocationPreview::getStaticF_ussClassName() {
  return ::cordl_internals::getStaticField<::StringW, "ussClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TabDragLocationPreview*>::get>();
}
inline void UnityEngine::UIElements::TabDragLocationPreview::setStaticF_visualUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "visualUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TabDragLocationPreview*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::TabDragLocationPreview::getStaticF_visualUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "visualUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TabDragLocationPreview*>::get>();
}
inline void UnityEngine::UIElements::TabDragLocationPreview::setStaticF_verticalUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "verticalUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TabDragLocationPreview*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::TabDragLocationPreview::getStaticF_verticalUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "verticalUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TabDragLocationPreview*>::get>();
}
inline void UnityEngine::UIElements::TabDragLocationPreview::setStaticF_horizontalUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "horizontalUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TabDragLocationPreview*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::TabDragLocationPreview::getStaticF_horizontalUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "horizontalUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TabDragLocationPreview*>::get>();
}
inline ::UnityEngine::UIElements::VisualElement* UnityEngine::UIElements::TabDragLocationPreview::get_preview() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TabDragLocationPreview*>::get(),
                                                                             "get_preview", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElement*, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::TabDragLocationPreview::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TabDragLocationPreview*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::TabDragLocationPreview* UnityEngine::UIElements::TabDragLocationPreview::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::TabDragLocationPreview*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::TabDragLocationPreview::TabDragLocationPreview() {}
