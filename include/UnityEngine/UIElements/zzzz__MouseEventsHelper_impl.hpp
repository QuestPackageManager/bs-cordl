#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/MouseEventsHelper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__MouseEventsHelper_def.hpp"
#include "UnityEngine/UIElements/zzzz__IMouseEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::MouseEventsHelper.SendMouseOverMouseOut
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::IMouseEvent*,
                                                                ::UnityEngine::Vector2)>(&::UnityEngine::UIElements::MouseEventsHelper::SendMouseOverMouseOut)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x6d949c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MouseEventsHelper*>(),
                                                             { "SendMouseOverMouseOut",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(),
                                                                 ::i2c::type_of<::UnityEngine::UIElements::IMouseEvent*>(), ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
template <typename TLeaveEvent, typename TEnterEvent>
inline void UnityEngine::UIElements::MouseEventsHelper::SendEnterLeave(::UnityEngine::UIElements::VisualElement* previousTopElementUnderMouse,
                                                                       ::UnityEngine::UIElements::VisualElement* currentTopElementUnderMouse, ::UnityEngine::UIElements::IMouseEvent* triggerEvent,
                                                                       ::UnityEngine::Vector2 mousePosition) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MouseEventsHelper*>(),
                                                           { "SendEnterLeave",
                                                             { ::i2c::class_of<TLeaveEvent>(), ::i2c::class_of<TEnterEvent>() },
                                                             { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(),
                                                               ::i2c::type_of<::UnityEngine::UIElements::IMouseEvent*>(), ::i2c::type_of<::UnityEngine::Vector2>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TLeaveEvent>(), ::i2c::class_of<TEnterEvent>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, previousTopElementUnderMouse, currentTopElementUnderMouse, triggerEvent, mousePosition);
}
inline void UnityEngine::UIElements::MouseEventsHelper::SendMouseOverMouseOut(::UnityEngine::UIElements::VisualElement* previousTopElementUnderMouse,
                                                                              ::UnityEngine::UIElements::VisualElement* currentTopElementUnderMouse,
                                                                              ::UnityEngine::UIElements::IMouseEvent* triggerEvent, ::UnityEngine::Vector2 mousePosition) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MouseEventsHelper*>(),
                                                           { "SendMouseOverMouseOut",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(),
                                                               ::i2c::type_of<::UnityEngine::UIElements::IMouseEvent*>(), ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, previousTopElementUnderMouse, currentTopElementUnderMouse, triggerEvent, mousePosition);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::MouseEventsHelper::MouseEventsHelper() {}
