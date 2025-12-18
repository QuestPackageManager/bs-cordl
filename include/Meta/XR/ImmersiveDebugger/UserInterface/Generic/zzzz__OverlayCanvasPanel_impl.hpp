#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/OverlayCanvasPanel.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__Panel_impl.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__OverlayCanvasPanel_def.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__Controller_def.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__OverlayCanvas_def.hpp"
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::OverlayCanvasPanel.Setup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Generic::OverlayCanvasPanel::*)(
    ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller*)>(&::Meta::XR::ImmersiveDebugger::UserInterface::Generic::OverlayCanvasPanel::Setup)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x58ad22c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::OverlayCanvasPanel*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::OverlayCanvasPanel*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::OverlayCanvasPanel._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Generic::OverlayCanvasPanel::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Generic::OverlayCanvasPanel::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x58ad42c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::OverlayCanvasPanel*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____overlayCanvas)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Generic::OverlayCanvasPanel::Setup(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller* owner) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::OverlayCanvasPanel*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, owner);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Generic::OverlayCanvasPanel::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::OverlayCanvasPanel*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::OverlayCanvasPanel* Meta::XR::ImmersiveDebugger::UserInterface::Generic::OverlayCanvasPanel::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::OverlayCanvasPanel*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::OverlayCanvasPanel::OverlayCanvasPanel() {}
