#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/OnScreen/UGUIOnScreenControlUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/InputSystem/OnScreen/zzzz__UGUIOnScreenControlUtils_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::OnScreen::UGUIOnScreenControlUtils.GetCanvasRectTransform
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::RectTransform> (*)(::UnityEngine::Transform*)>(
    &::UnityEngine::InputSystem::OnScreen::UGUIOnScreenControlUtils::GetCanvasRectTransform)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x659832c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::OnScreen::UGUIOnScreenControlUtils*>(),
                                                                                           { "GetCanvasRectTransform", {}, { ::i2c::type_of<::UnityEngine::Transform*>() } })));
    return ___internal_method;
  }
};
inline ::UnityW<::UnityEngine::RectTransform> UnityEngine::InputSystem::OnScreen::UGUIOnScreenControlUtils::GetCanvasRectTransform(::UnityEngine::Transform* transform) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::OnScreen::UGUIOnScreenControlUtils*>(),
                                                                                         { "GetCanvasRectTransform", {}, { ::i2c::type_of<::UnityEngine::Transform*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::RectTransform>>(nullptr, ___internal_method, transform);
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::OnScreen::UGUIOnScreenControlUtils::UGUIOnScreenControlUtils() {}
