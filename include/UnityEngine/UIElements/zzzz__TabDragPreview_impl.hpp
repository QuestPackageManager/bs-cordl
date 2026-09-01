#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\TabDragPreview.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_impl.hpp"
#include "UnityEngine/UIElements/zzzz__TabDragPreview_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::TabDragPreview._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::TabDragPreview::*)()>(&::UnityEngine::UIElements::TabDragPreview::_ctor)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6d747a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TabDragPreview*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::TabDragPreview::setStaticF_ussClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "ussClassName", ::UnityEngine::UIElements::TabDragPreview*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::TabDragPreview::getStaticF_ussClassName() {
  return ::cordl_internals::getStaticField<::StringW, "ussClassName", ::UnityEngine::UIElements::TabDragPreview*>();
}
inline void UnityEngine::UIElements::TabDragPreview::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TabDragPreview*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::TabDragPreview* UnityEngine::UIElements::TabDragPreview::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::TabDragPreview*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::TabDragPreview::TabDragPreview() {}
