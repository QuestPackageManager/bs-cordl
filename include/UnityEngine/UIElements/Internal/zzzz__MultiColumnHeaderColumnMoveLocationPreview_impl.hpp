#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\Internal\MultiColumnHeaderColumnMoveLocationPreview.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_impl.hpp"
#include "UnityEngine/UIElements/Internal/zzzz__MultiColumnHeaderColumnMoveLocationPreview_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnMoveLocationPreview._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnMoveLocationPreview::*)()>(
    &::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnMoveLocationPreview::_ctor)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x6d20eec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnMoveLocationPreview*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::Internal::MultiColumnHeaderColumnMoveLocationPreview::setStaticF_ussClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "ussClassName", ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnMoveLocationPreview*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::Internal::MultiColumnHeaderColumnMoveLocationPreview::getStaticF_ussClassName() {
  return ::cordl_internals::getStaticField<::StringW, "ussClassName", ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnMoveLocationPreview*>();
}
inline void UnityEngine::UIElements::Internal::MultiColumnHeaderColumnMoveLocationPreview::setStaticF_visualUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "visualUssClassName", ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnMoveLocationPreview*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::Internal::MultiColumnHeaderColumnMoveLocationPreview::getStaticF_visualUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "visualUssClassName", ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnMoveLocationPreview*>();
}
inline void UnityEngine::UIElements::Internal::MultiColumnHeaderColumnMoveLocationPreview::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnMoveLocationPreview*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnMoveLocationPreview* UnityEngine::UIElements::Internal::MultiColumnHeaderColumnMoveLocationPreview::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnMoveLocationPreview*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnMoveLocationPreview::MultiColumnHeaderColumnMoveLocationPreview() {}
