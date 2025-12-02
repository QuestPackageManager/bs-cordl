#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/Manager/ActionHook.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/XR/ImmersiveDebugger/Manager/zzzz__Hook_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ActionHook)
namespace Meta::XR::ImmersiveDebugger::Manager {
class ActionHook___c__DisplayClass4_0;
}
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
class Action;
}
// Forward declare root types
namespace Meta::XR::ImmersiveDebugger::Manager {
class ActionHook;
}
namespace Meta::XR::ImmersiveDebugger::Manager {
class ActionHook___c__DisplayClass4_0;
}
// Write type traits
MARK_REF_PTR_T(::Meta::XR::ImmersiveDebugger::Manager::ActionHook);
MARK_REF_PTR_T(::Meta::XR::ImmersiveDebugger::Manager::ActionHook___c__DisplayClass4_0);
// Dependencies System.Object
namespace Meta::XR::ImmersiveDebugger::Manager {
// Is value type: false
// CS Name: Meta.XR.ImmersiveDebugger.Manager.ActionHook/<>c__DisplayClass4_0
class CORDL_TYPE ActionHook___c__DisplayClass4_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::Meta::XR::ImmersiveDebugger::Manager::ActionHook* __4__this;

  /// @brief Field memberInfo, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_memberInfo, put = __cordl_internal_set_memberInfo)) ::System::Reflection::MemberInfo* memberInfo;

  static inline ::Meta::XR::ImmersiveDebugger::Manager::ActionHook___c__DisplayClass4_0* New_ctor();

  constexpr ::Meta::XR::ImmersiveDebugger::Manager::ActionHook* const& __cordl_internal_get___4__this() const;

  constexpr ::Meta::XR::ImmersiveDebugger::Manager::ActionHook*& __cordl_internal_get___4__this();

  constexpr ::System::Reflection::MemberInfo* const& __cordl_internal_get_memberInfo() const;

  constexpr ::System::Reflection::MemberInfo*& __cordl_internal_get_memberInfo();

  constexpr void __cordl_internal_set___4__this(::Meta::XR::ImmersiveDebugger::Manager::ActionHook* value);

  constexpr void __cordl_internal_set_memberInfo(::System::Reflection::MemberInfo* value);

  /// @brief Method <.ctor>b__0, addr 0x584e660, size 0xac, virtual false, abstract: false, final false
  inline void __ctor_b__0();

  /// @brief Method .ctor, addr 0x584e63c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ActionHook___c__DisplayClass4_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ActionHook___c__DisplayClass4_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ActionHook___c__DisplayClass4_0(ActionHook___c__DisplayClass4_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ActionHook___c__DisplayClass4_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ActionHook___c__DisplayClass4_0(ActionHook___c__DisplayClass4_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18386 };

  /// @brief Field memberInfo, offset: 0x10, size: 0x8, def value: None
  ::System::Reflection::MemberInfo* ___memberInfo;

  /// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
  ::Meta::XR::ImmersiveDebugger::Manager::ActionHook* _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::ImmersiveDebugger::Manager::ActionHook___c__DisplayClass4_0, ___memberInfo) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::Manager::ActionHook___c__DisplayClass4_0, _____4__this) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::ImmersiveDebugger::Manager::ActionHook___c__DisplayClass4_0, 0x20>, "Size mismatch!");

} // namespace Meta::XR::ImmersiveDebugger::Manager
// Dependencies Meta.XR.ImmersiveDebugger.Manager.Hook
namespace Meta::XR::ImmersiveDebugger::Manager {
// Is value type: false
// CS Name: Meta.XR.ImmersiveDebugger.Manager.ActionHook
class CORDL_TYPE ActionHook : public ::Meta::XR::ImmersiveDebugger::Manager::Hook {
public:
  // Declarations
  using __c__DisplayClass4_0 = ::Meta::XR::ImmersiveDebugger::Manager::ActionHook___c__DisplayClass4_0;

  __declspec(property(get = get_Delegate, put = set_Delegate)) ::System::Action* Delegate;

  /// @brief Field <Delegate>k__BackingField, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__Delegate_k__BackingField, put = __cordl_internal_set__Delegate_k__BackingField)) ::System::Action* _Delegate_k__BackingField;

  static inline ::Meta::XR::ImmersiveDebugger::Manager::ActionHook* New_ctor(::System::Reflection::MemberInfo* memberInfo, ::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle instanceHandle,
                                                                             ::Meta::XR::ImmersiveDebugger::DebugMember* attribute);

  constexpr ::System::Action* const& __cordl_internal_get__Delegate_k__BackingField() const;

  constexpr ::System::Action*& __cordl_internal_get__Delegate_k__BackingField();

  constexpr void __cordl_internal_set__Delegate_k__BackingField(::System::Action* value);

  /// @brief Method .ctor, addr 0x584b82c, size 0x128, virtual false, abstract: false, final false
  inline void _ctor(::System::Reflection::MemberInfo* memberInfo, ::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle instanceHandle, ::Meta::XR::ImmersiveDebugger::DebugMember* attribute);

  /// @brief Method get_Delegate, addr 0x584e62c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Action* get_Delegate();

  /// @brief Method set_Delegate, addr 0x584e634, size 0x8, virtual false, abstract: false, final false
  inline void set_Delegate(::System::Action* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ActionHook();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ActionHook", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ActionHook(ActionHook&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ActionHook", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ActionHook(ActionHook const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18387 };

  /// @brief Field <Delegate>k__BackingField, offset: 0x40, size: 0x8, def value: None
  ::System::Action* ____Delegate_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::ImmersiveDebugger::Manager::ActionHook, ____Delegate_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::ImmersiveDebugger::Manager::ActionHook, 0x48>, "Size mismatch!");

} // namespace Meta::XR::ImmersiveDebugger::Manager
NEED_NO_BOX(::Meta::XR::ImmersiveDebugger::Manager::ActionHook);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::ImmersiveDebugger::Manager::ActionHook*, "Meta.XR.ImmersiveDebugger.Manager", "ActionHook");
NEED_NO_BOX(::Meta::XR::ImmersiveDebugger::Manager::ActionHook___c__DisplayClass4_0);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::ImmersiveDebugger::Manager::ActionHook___c__DisplayClass4_0*, "Meta.XR.ImmersiveDebugger.Manager", "ActionHook/<>c__DisplayClass4_0");
