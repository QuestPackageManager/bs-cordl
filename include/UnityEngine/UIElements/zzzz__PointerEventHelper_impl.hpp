#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\PointerEventHelper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__PointerEventHelper_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_def.hpp"
#include "UnityEngine/zzzz__EventModifiers_def.hpp"
#include "UnityEngine/zzzz__EventType_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::PointerEventHelper.GetPooled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::EventBase* (*)(::UnityEngine::EventType, ::UnityEngine::Vector3, ::UnityEngine::Vector2, int32_t, int32_t,
                                                                                                 ::UnityEngine::EventModifiers, int32_t)>(&::UnityEngine::UIElements::PointerEventHelper::GetPooled)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x6da3810;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerEventHelper*>(),
                                                { "GetPooled",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::EventType>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector2>(),
                                                    ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::EventModifiers>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline ::UnityEngine::UIElements::EventBase* UnityEngine::UIElements::PointerEventHelper::GetPooled(::UnityEngine::EventType eventType, ::UnityEngine::Vector3 mousePosition,
                                                                                                    ::UnityEngine::Vector2 delta, int32_t button, int32_t clickCount,
                                                                                                    ::UnityEngine::EventModifiers modifiers, int32_t displayIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerEventHelper*>(),
                                                           { "GetPooled",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::EventType>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector2>(),
                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::EventModifiers>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::EventBase*>(nullptr, ___internal_method, eventType, mousePosition, delta, button, clickCount, modifiers, displayIndex);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::PointerEventHelper::PointerEventHelper() {}
