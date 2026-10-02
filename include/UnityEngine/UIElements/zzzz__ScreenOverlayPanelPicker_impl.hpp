#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/ScreenOverlayPanelPicker.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__ScreenOverlayPanelPicker_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseRuntimePanel_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseVisualElementPanel_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::ScreenOverlayPanelPicker.TryPick
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::ScreenOverlayPanelPicker::*)(::UnityEngine::UIElements::BaseRuntimePanel*, int32_t, ::UnityEngine::Vector2,
                                                                                                                     ::UnityEngine::Vector2, ::System::Nullable_1<int32_t>, ::by_ref<bool>)>(
    &::UnityEngine::UIElements::ScreenOverlayPanelPicker::TryPick)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x7242f48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScreenOverlayPanelPicker*>(),
                                                             { "TryPick",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::UIElements::BaseRuntimePanel*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector2>(),
                                                                 ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::System::Nullable_1<int32_t>>(), ::i2c::type_of<::by_ref<bool>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ScreenOverlayPanelPicker.GetCapturingPanel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::ScreenOverlayPanelPicker::*)(int32_t, ::by_ref<::UnityEngine::UIElements::BaseVisualElementPanel*>)>(
    &::UnityEngine::UIElements::ScreenOverlayPanelPicker::GetCapturingPanel)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x7243098;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScreenOverlayPanelPicker*>(),
                                                { "GetCapturingPanel", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::BaseVisualElementPanel*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ScreenOverlayPanelPicker._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ScreenOverlayPanelPicker::*)()>(&::UnityEngine::UIElements::ScreenOverlayPanelPicker::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x72431b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScreenOverlayPanelPicker*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline bool UnityEngine::UIElements::ScreenOverlayPanelPicker::TryPick(::UnityEngine::UIElements::BaseRuntimePanel* panel, int32_t pointerId, ::UnityEngine::Vector2 screenPosition,
                                                                       ::UnityEngine::Vector2 delta, ::System::Nullable_1<int32_t> targetDisplay, ::by_ref<bool> captured) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScreenOverlayPanelPicker*>(),
                                                           { "TryPick",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::UIElements::BaseRuntimePanel*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector2>(),
                                                               ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::System::Nullable_1<int32_t>>(), ::i2c::type_of<::by_ref<bool>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, panel, pointerId, screenPosition, delta, targetDisplay, captured);
}
inline bool UnityEngine::UIElements::ScreenOverlayPanelPicker::GetCapturingPanel(int32_t pointerId, ::by_ref<::UnityEngine::UIElements::BaseVisualElementPanel*> capturingPanel) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScreenOverlayPanelPicker*>(),
                                              { "GetCapturingPanel", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::BaseVisualElementPanel*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pointerId, capturingPanel);
}
inline void UnityEngine::UIElements::ScreenOverlayPanelPicker::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ScreenOverlayPanelPicker*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::ScreenOverlayPanelPicker* UnityEngine::UIElements::ScreenOverlayPanelPicker::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::ScreenOverlayPanelPicker*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::ScreenOverlayPanelPicker::ScreenOverlayPanelPicker() {}
