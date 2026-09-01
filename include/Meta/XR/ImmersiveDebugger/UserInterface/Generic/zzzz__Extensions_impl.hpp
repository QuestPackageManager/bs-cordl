#pragma once
// IWYU pragma private; include "Meta\XR\ImmersiveDebugger\UserInterface\Generic\Extensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__Extensions_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Extensions.SetSizeOptimized
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::RectTransform*, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, bool)>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Extensions::SetSizeOptimized)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x5a57fdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Extensions*>(),
                                                             { "SetSizeOptimized",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::RectTransform*>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(),
                                                                 ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
inline void Meta::XR::ImmersiveDebugger::UserInterface::Generic::Extensions::SetSizeOptimized(::UnityEngine::RectTransform* rectTransform, ::UnityEngine::Vector2 offsetMin,
                                                                                              ::UnityEngine::Vector2 offsetMax, ::UnityEngine::Vector2 fixedDimensions, bool setAnchoredPosition) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Extensions*>(),
                                                           { "SetSizeOptimized",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::RectTransform*>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(),
                                                               ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, rectTransform, offsetMin, offsetMax, fixedDimensions, setAnchoredPosition);
}
// Ctor Parameters []
constexpr ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Extensions::Extensions() {}
