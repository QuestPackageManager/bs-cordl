#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\PointerEventsHelper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__PointerEventsHelper_def.hpp"
#include "UnityEngine/UIElements/zzzz__IPointerEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::PointerEventsHelper.SendOverOut
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::IPointerEvent*,
                                                                ::UnityEngine::Vector2, int32_t)>(&::UnityEngine::UIElements::PointerEventsHelper::SendOverOut)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0x6d97c88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerEventsHelper*>(),
                                                { "SendOverOut",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(),
                                                    ::i2c::type_of<::UnityEngine::UIElements::IPointerEvent*>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
template <typename TLeaveEvent, typename TEnterEvent>
inline void UnityEngine::UIElements::PointerEventsHelper::SendEnterLeave(::UnityEngine::UIElements::VisualElement* previousTopElementUnderPointer,
                                                                         ::UnityEngine::UIElements::VisualElement* currentTopElementUnderPointer,
                                                                         ::UnityEngine::UIElements::IPointerEvent* triggerEvent, ::UnityEngine::Vector2 position, int32_t pointerId) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerEventsHelper*>(),
                                                           { "SendEnterLeave",
                                                             { ::i2c::class_of<TLeaveEvent>(), ::i2c::class_of<TEnterEvent>() },
                                                             { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(),
                                                               ::i2c::type_of<::UnityEngine::UIElements::IPointerEvent*>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TLeaveEvent>(), ::i2c::class_of<TEnterEvent>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, previousTopElementUnderPointer, currentTopElementUnderPointer, triggerEvent, position, pointerId);
}
inline void UnityEngine::UIElements::PointerEventsHelper::SendOverOut(::UnityEngine::UIElements::VisualElement* previousTopElementUnderPointer,
                                                                      ::UnityEngine::UIElements::VisualElement* currentTopElementUnderPointer, ::UnityEngine::UIElements::IPointerEvent* triggerEvent,
                                                                      ::UnityEngine::Vector2 position, int32_t pointerId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerEventsHelper*>(),
                                                           { "SendOverOut",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(),
                                                               ::i2c::type_of<::UnityEngine::UIElements::IPointerEvent*>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, previousTopElementUnderPointer, currentTopElementUnderPointer, triggerEvent, position, pointerId);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::PointerEventsHelper::PointerEventsHelper() {}
