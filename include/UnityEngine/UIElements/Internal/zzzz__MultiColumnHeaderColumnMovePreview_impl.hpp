#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\Internal\MultiColumnHeaderColumnMovePreview.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_impl.hpp"
#include "UnityEngine/UIElements/Internal/zzzz__MultiColumnHeaderColumnMovePreview_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnMovePreview._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnMovePreview::*)()>(
    &::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnMovePreview::_ctor)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6d20d9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnMovePreview*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::Internal::MultiColumnHeaderColumnMovePreview::setStaticF_ussClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "ussClassName", ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnMovePreview*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::Internal::MultiColumnHeaderColumnMovePreview::getStaticF_ussClassName() {
  return ::cordl_internals::getStaticField<::StringW, "ussClassName", ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnMovePreview*>();
}
inline void UnityEngine::UIElements::Internal::MultiColumnHeaderColumnMovePreview::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnMovePreview*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnMovePreview* UnityEngine::UIElements::Internal::MultiColumnHeaderColumnMovePreview::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnMovePreview*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnMovePreview::MultiColumnHeaderColumnMovePreview() {}
