#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/Manager/GizmoHook.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/XR/ImmersiveDebugger/Manager/zzzz__Hook_def.hpp"
CORDL_MODULE_EXPORT(GizmoHook)
namespace Meta::XR::ImmersiveDebugger::Utils {
struct InstanceHandle;
}
namespace Meta::XR::ImmersiveDebugger {
class DebugMember;
}
namespace System::Reflection {
class MemberInfo;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
template <typename TResult> class Func_1;
}
// Forward declare root types
namespace Meta::XR::ImmersiveDebugger::Manager {
class GizmoHook;
}
// Write type traits
MARK_REF_PTR_T(::Meta::XR::ImmersiveDebugger::Manager::GizmoHook);
// Dependencies Meta.XR.ImmersiveDebugger.Manager.Hook
namespace Meta::XR::ImmersiveDebugger::Manager {
// Is value type: false
// CS Name: Meta.XR.ImmersiveDebugger.Manager.GizmoHook
class CORDL_TYPE GizmoHook : public ::Meta::XR::ImmersiveDebugger::Manager::Hook {
public:
  // Declarations
  __declspec(property(get = get_GetState)) ::System::Func_1<bool>* GetState;

  __declspec(property(get = get_SetState)) ::System::Action_1<bool>* SetState;

  /// @brief Field <GetState>k__BackingField, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__GetState_k__BackingField, put = __cordl_internal_set__GetState_k__BackingField)) ::System::Func_1<bool>* _GetState_k__BackingField;

  /// @brief Field <SetState>k__BackingField, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__SetState_k__BackingField, put = __cordl_internal_set__SetState_k__BackingField)) ::System::Action_1<bool>* _SetState_k__BackingField;

  static inline ::Meta::XR::ImmersiveDebugger::Manager::GizmoHook* New_ctor(::System::Reflection::MemberInfo* memberInfo, ::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle instanceHandle,
                                                                            ::Meta::XR::ImmersiveDebugger::DebugMember* attribute, ::System::Action_1<bool>* setState,
                                                                            ::System::Func_1<bool>* getState);

  constexpr ::System::Func_1<bool>* const& __cordl_internal_get__GetState_k__BackingField() const;

  constexpr ::System::Func_1<bool>*& __cordl_internal_get__GetState_k__BackingField();

  constexpr ::System::Action_1<bool>* const& __cordl_internal_get__SetState_k__BackingField() const;

  constexpr ::System::Action_1<bool>*& __cordl_internal_get__SetState_k__BackingField();

  constexpr void __cordl_internal_set__GetState_k__BackingField(::System::Func_1<bool>* value);

  constexpr void __cordl_internal_set__SetState_k__BackingField(::System::Action_1<bool>* value);

  /// @brief Method .ctor, addr 0x584e330, size 0x60, virtual false, abstract: false, final false
  inline void _ctor(::System::Reflection::MemberInfo* memberInfo, ::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle instanceHandle, ::Meta::XR::ImmersiveDebugger::DebugMember* attribute,
                    ::System::Action_1<bool>* setState, ::System::Func_1<bool>* getState);

  /// @brief Method get_GetState, addr 0x584e714, size 0x8, virtual false, abstract: false, final false
  inline ::System::Func_1<bool>* get_GetState();

  /// @brief Method get_SetState, addr 0x584e70c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Action_1<bool>* get_SetState();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GizmoHook();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GizmoHook", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GizmoHook(GizmoHook&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GizmoHook", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GizmoHook(GizmoHook const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18388 };

  /// @brief Field <SetState>k__BackingField, offset: 0x40, size: 0x8, def value: None
  ::System::Action_1<bool>* ____SetState_k__BackingField;

  /// @brief Field <GetState>k__BackingField, offset: 0x48, size: 0x8, def value: None
  ::System::Func_1<bool>* ____GetState_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::ImmersiveDebugger::Manager::GizmoHook, ____SetState_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::Manager::GizmoHook, ____GetState_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::ImmersiveDebugger::Manager::GizmoHook, 0x50>, "Size mismatch!");

} // namespace Meta::XR::ImmersiveDebugger::Manager
NEED_NO_BOX(::Meta::XR::ImmersiveDebugger::Manager::GizmoHook);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::ImmersiveDebugger::Manager::GizmoHook*, "Meta.XR.ImmersiveDebugger.Manager", "GizmoHook");
