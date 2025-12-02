#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/Manager/GizmoManagerForAddon.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/XR/ImmersiveDebugger/Manager/zzzz__SubManagerForAddon_def.hpp"
#include "Meta/XR/ImmersiveDebugger/Utils/zzzz__InstanceHandle_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(GizmoManagerForAddon)
namespace Meta::XR::ImmersiveDebugger::Gizmo {
class GizmoRendererManager;
}
namespace Meta::XR::ImmersiveDebugger::Manager {
class GizmoManagerForAddon___c__DisplayClass1_0;
}
namespace Meta::XR::ImmersiveDebugger::UserInterface {
class IMember;
}
namespace Meta::XR::ImmersiveDebugger::Utils {
struct InstanceHandle;
}
namespace Meta::XR::ImmersiveDebugger {
class DebugMember;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Reflection {
class MemberInfo;
}
// Forward declare root types
namespace Meta::XR::ImmersiveDebugger::Manager {
class GizmoManagerForAddon;
}
namespace Meta::XR::ImmersiveDebugger::Manager {
class GizmoManagerForAddon___c__DisplayClass1_0;
}
// Write type traits
MARK_REF_PTR_T(::Meta::XR::ImmersiveDebugger::Manager::GizmoManagerForAddon);
MARK_REF_PTR_T(::Meta::XR::ImmersiveDebugger::Manager::GizmoManagerForAddon___c__DisplayClass1_0);
// Dependencies Meta.XR.ImmersiveDebugger.Utils.InstanceHandle, System.Object
namespace Meta::XR::ImmersiveDebugger::Manager {
// Is value type: false
// CS Name: Meta.XR.ImmersiveDebugger.Manager.GizmoManagerForAddon/<>c__DisplayClass1_0
class CORDL_TYPE GizmoManagerForAddon___c__DisplayClass1_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::Meta::XR::ImmersiveDebugger::Manager::GizmoManagerForAddon* __4__this;

  /// @brief Field handle, offset 0x20, size 0x18
  __declspec(property(get = __cordl_internal_get_handle, put = __cordl_internal_set_handle)) ::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle handle;

  /// @brief Field memberInfo, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_memberInfo, put = __cordl_internal_set_memberInfo)) ::System::Reflection::MemberInfo* memberInfo;

  static inline ::Meta::XR::ImmersiveDebugger::Manager::GizmoManagerForAddon___c__DisplayClass1_0* New_ctor();

  /// @brief Method <RegisterSpecialisedWidget>g__GetState|1, addr 0x58525ac, size 0x6c, virtual false, abstract: false, final false
  inline bool _RegisterSpecialisedWidget_g__GetState_1();

  /// @brief Method <RegisterSpecialisedWidget>g__OnStateChanged|0, addr 0x5852530, size 0x7c, virtual false, abstract: false, final false
  inline void _RegisterSpecialisedWidget_g__OnStateChanged_0(bool state);

  constexpr ::Meta::XR::ImmersiveDebugger::Manager::GizmoManagerForAddon* const& __cordl_internal_get___4__this() const;

  constexpr ::Meta::XR::ImmersiveDebugger::Manager::GizmoManagerForAddon*& __cordl_internal_get___4__this();

  constexpr ::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle const& __cordl_internal_get_handle() const;

  constexpr ::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle& __cordl_internal_get_handle();

  constexpr ::System::Reflection::MemberInfo* const& __cordl_internal_get_memberInfo() const;

  constexpr ::System::Reflection::MemberInfo*& __cordl_internal_get_memberInfo();

  constexpr void __cordl_internal_set___4__this(::Meta::XR::ImmersiveDebugger::Manager::GizmoManagerForAddon* value);

  constexpr void __cordl_internal_set_handle(::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle value);

  constexpr void __cordl_internal_set_memberInfo(::System::Reflection::MemberInfo* value);

  /// @brief Method .ctor, addr 0x585244c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GizmoManagerForAddon___c__DisplayClass1_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GizmoManagerForAddon___c__DisplayClass1_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GizmoManagerForAddon___c__DisplayClass1_0(GizmoManagerForAddon___c__DisplayClass1_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GizmoManagerForAddon___c__DisplayClass1_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GizmoManagerForAddon___c__DisplayClass1_0(GizmoManagerForAddon___c__DisplayClass1_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18411 };

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::Meta::XR::ImmersiveDebugger::Manager::GizmoManagerForAddon* _____4__this;

  /// @brief Field memberInfo, offset: 0x18, size: 0x8, def value: None
  ::System::Reflection::MemberInfo* ___memberInfo;

  /// @brief Field handle, offset: 0x20, size: 0x18, def value: None
  ::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle ___handle;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::ImmersiveDebugger::Manager::GizmoManagerForAddon___c__DisplayClass1_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::Manager::GizmoManagerForAddon___c__DisplayClass1_0, ___memberInfo) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::Manager::GizmoManagerForAddon___c__DisplayClass1_0, ___handle) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::ImmersiveDebugger::Manager::GizmoManagerForAddon___c__DisplayClass1_0, 0x38>, "Size mismatch!");

} // namespace Meta::XR::ImmersiveDebugger::Manager
// Dependencies Meta.XR.ImmersiveDebugger.Manager.SubManagerForAddon
namespace Meta::XR::ImmersiveDebugger::Manager {
// Is value type: false
// CS Name: Meta.XR.ImmersiveDebugger.Manager.GizmoManagerForAddon
class CORDL_TYPE GizmoManagerForAddon : public ::Meta::XR::ImmersiveDebugger::Manager::SubManagerForAddon {
public:
  // Declarations
  using __c__DisplayClass1_0 = ::Meta::XR::ImmersiveDebugger::Manager::GizmoManagerForAddon___c__DisplayClass1_0;

  __declspec(property(get = get_TelemetryAnnotation)) ::StringW TelemetryAnnotation;

  /// @brief Field _memberToGizmoRendererManagerDict, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__memberToGizmoRendererManagerDict, put = __cordl_internal_set__memberToGizmoRendererManagerDict)) ::System::Collections::Generic::Dictionary_2<
      ::System::Reflection::MemberInfo*, ::UnityW<::Meta::XR::ImmersiveDebugger::Gizmo::GizmoRendererManager>>* _memberToGizmoRendererManagerDict;

  static inline ::Meta::XR::ImmersiveDebugger::Manager::GizmoManagerForAddon* New_ctor();

  /// @brief Method RegisterSpecialisedWidget, addr 0x5851d54, size 0x6f8, virtual true, abstract: false, final false
  inline bool RegisterSpecialisedWidget(::Meta::XR::ImmersiveDebugger::UserInterface::IMember* member, ::System::Reflection::MemberInfo* memberInfo,
                                        ::Meta::XR::ImmersiveDebugger::DebugMember* memberAttribute, ::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle handle);

  constexpr ::System::Collections::Generic::Dictionary_2<::System::Reflection::MemberInfo*, ::UnityW<::Meta::XR::ImmersiveDebugger::Gizmo::GizmoRendererManager>>* const&
  __cordl_internal_get__memberToGizmoRendererManagerDict() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::System::Reflection::MemberInfo*, ::UnityW<::Meta::XR::ImmersiveDebugger::Gizmo::GizmoRendererManager>>*&
  __cordl_internal_get__memberToGizmoRendererManagerDict();

  constexpr void __cordl_internal_set__memberToGizmoRendererManagerDict(
      ::System::Collections::Generic::Dictionary_2<::System::Reflection::MemberInfo*, ::UnityW<::Meta::XR::ImmersiveDebugger::Gizmo::GizmoRendererManager>>* value);

  /// @brief Method .ctor, addr 0x5852494, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_TelemetryAnnotation, addr 0x5852450, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_TelemetryAnnotation();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GizmoManagerForAddon();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GizmoManagerForAddon", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GizmoManagerForAddon(GizmoManagerForAddon&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GizmoManagerForAddon", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GizmoManagerForAddon(GizmoManagerForAddon const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18412 };

  /// @brief Field _memberToGizmoRendererManagerDict, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::System::Reflection::MemberInfo*, ::UnityW<::Meta::XR::ImmersiveDebugger::Gizmo::GizmoRendererManager>>* ____memberToGizmoRendererManagerDict;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::ImmersiveDebugger::Manager::GizmoManagerForAddon, ____memberToGizmoRendererManagerDict) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::ImmersiveDebugger::Manager::GizmoManagerForAddon, 0x30>, "Size mismatch!");

} // namespace Meta::XR::ImmersiveDebugger::Manager
NEED_NO_BOX(::Meta::XR::ImmersiveDebugger::Manager::GizmoManagerForAddon);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::ImmersiveDebugger::Manager::GizmoManagerForAddon*, "Meta.XR.ImmersiveDebugger.Manager", "GizmoManagerForAddon");
NEED_NO_BOX(::Meta::XR::ImmersiveDebugger::Manager::GizmoManagerForAddon___c__DisplayClass1_0);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::ImmersiveDebugger::Manager::GizmoManagerForAddon___c__DisplayClass1_0*, "Meta.XR.ImmersiveDebugger.Manager", "GizmoManagerForAddon/<>c__DisplayClass1_0");
