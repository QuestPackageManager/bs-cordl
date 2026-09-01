#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\Internal\MultiColumnHeaderColumnResizePreview.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_impl.hpp"
#include "UnityEngine/UIElements/Internal/zzzz__MultiColumnHeaderColumnResizePreview_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnResizePreview._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnResizePreview::*)()>(
    &::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnResizePreview::_ctor)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x6d22eac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnResizePreview*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::Internal::MultiColumnHeaderColumnResizePreview::setStaticF_ussClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "ussClassName", ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnResizePreview*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::Internal::MultiColumnHeaderColumnResizePreview::getStaticF_ussClassName() {
  return ::cordl_internals::getStaticField<::StringW, "ussClassName", ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnResizePreview*>();
}
inline void UnityEngine::UIElements::Internal::MultiColumnHeaderColumnResizePreview::setStaticF_visualUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "visualUssClassName", ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnResizePreview*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::Internal::MultiColumnHeaderColumnResizePreview::getStaticF_visualUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "visualUssClassName", ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnResizePreview*>();
}
inline void UnityEngine::UIElements::Internal::MultiColumnHeaderColumnResizePreview::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnResizePreview*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnResizePreview* UnityEngine::UIElements::Internal::MultiColumnHeaderColumnResizePreview::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnResizePreview*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnResizePreview::MultiColumnHeaderColumnResizePreview() {}
