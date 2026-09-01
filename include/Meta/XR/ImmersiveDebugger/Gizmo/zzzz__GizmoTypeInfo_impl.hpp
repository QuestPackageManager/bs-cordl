#pragma once
// IWYU pragma private; include "Meta\XR\ImmersiveDebugger\Gizmo\GizmoTypeInfo.hpp"
#include "Meta/XR/ImmersiveDebugger/Gizmo/zzzz__GizmoTypeInfo_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypeInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypeInfo::*)(::System::Action_1<::System::Object*>*)>(
    &::Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypeInfo::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a6fb6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypeInfo>(), { ".ctor", {}, { ::i2c::type_of<::System::Action_1<::System::Object*>*>() } })));
    return ___internal_method;
  }
};
inline void Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypeInfo::_ctor(::System::Action_1<::System::Object*>* renderDelegate) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypeInfo>(), { ".ctor", {}, { ::i2c::type_of<::System::Action_1<::System::Object*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, renderDelegate);
}
// Ctor Parameters [CppParam { name: "RenderDelegate", ty: "::System::Action_1<::System::Object*>*", modifiers: "", def_value: Some("{}") }]
constexpr ::Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypeInfo::GizmoTypeInfo(::System::Action_1<::System::Object*>* RenderDelegate) noexcept {
  this->RenderDelegate = RenderDelegate;
}
// Ctor Parameters []
constexpr ::Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypeInfo::GizmoTypeInfo() {}
