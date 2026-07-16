#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/OverlayCanvasPanel.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__Panel_impl.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__OverlayCanvasPanel_def.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__Controller_def.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__OverlayCanvas_def.hpp"
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::OverlayCanvasPanel.Setup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Generic::OverlayCanvasPanel::*)(
    ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller*)>(&::Meta::XR::ImmersiveDebugger::UserInterface::Generic::OverlayCanvasPanel::Setup)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5a5a778;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::OverlayCanvasPanel*>(),
                                                                                          { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::OverlayCanvasPanel*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::OverlayCanvasPanel._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Generic::OverlayCanvasPanel::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Generic::OverlayCanvasPanel::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5a5a978;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::OverlayCanvasPanel*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::OverlayCanvas>&
Meta::XR::ImmersiveDebugger::UserInterface::Generic::OverlayCanvasPanel::__cordl_internal_get__overlayCanvas() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____overlayCanvas;
}
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::OverlayCanvas> const&
Meta::XR::ImmersiveDebugger::UserInterface::Generic::OverlayCanvasPanel::__cordl_internal_get__overlayCanvas() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____overlayCanvas;
}
constexpr void
Meta::XR::ImmersiveDebugger::UserInterface::Generic::OverlayCanvasPanel::__cordl_internal_set__overlayCanvas(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::OverlayCanvas> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____overlayCanvas = value;
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Generic::OverlayCanvasPanel::Setup(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller* owner) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::OverlayCanvasPanel*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, owner);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Generic::OverlayCanvasPanel::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::OverlayCanvasPanel*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::OverlayCanvasPanel* Meta::XR::ImmersiveDebugger::UserInterface::Generic::OverlayCanvasPanel::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::OverlayCanvasPanel*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::OverlayCanvasPanel::OverlayCanvasPanel() {}
