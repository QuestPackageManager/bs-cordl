#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/Gizmo/GizmoTypeInfo.hpp"
#include "Meta/XR/ImmersiveDebugger/Gizmo/zzzz__GizmoTypeInfo_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypeInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypeInfo::*)(::System::Action_1<::System::Object*>*)>(
    &::Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypeInfo::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5859bbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypeInfo>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::System::Object*>*>::get() })));
    return ___internal_method;
  }
};
inline void Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypeInfo::_ctor(::System::Action_1<::System::Object*>* renderDelegate) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypeInfo>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::System::Object*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, renderDelegate);
}
// Ctor Parameters [CppParam { name: "RenderDelegate", ty: "::System::Action_1<::System::Object*>*", modifiers: "", def_value: Some("{}") }]
constexpr ::Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypeInfo::GizmoTypeInfo(::System::Action_1<::System::Object*>* RenderDelegate) noexcept {
  this->RenderDelegate = RenderDelegate;
}
// Ctor Parameters []
constexpr ::Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypeInfo::GizmoTypeInfo() {}
