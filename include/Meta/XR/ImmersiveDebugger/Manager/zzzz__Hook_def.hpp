#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/Manager/Hook.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/XR/ImmersiveDebugger/Utils/zzzz__InstanceHandle_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Hook)
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
class Object;
}
// Forward declare root types
namespace Meta::XR::ImmersiveDebugger::Manager {
class Hook;
}
// Write type traits
MARK_REF_PTR_T(::Meta::XR::ImmersiveDebugger::Manager::Hook);
// Dependencies Meta.XR.ImmersiveDebugger.Utils.InstanceHandle, System.Object
namespace Meta::XR::ImmersiveDebugger::Manager {
// Is value type: false
// CS Name: Meta.XR.ImmersiveDebugger.Manager.Hook
class CORDL_TYPE Hook : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Attribute)) ::Meta::XR::ImmersiveDebugger::DebugMember* Attribute;

  __declspec(property(get = get_MemberInfo)) ::System::Reflection::MemberInfo* MemberInfo;

  __declspec(property(get = get_Valid)) bool Valid;

  /// @brief Field _attribute, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__attribute, put = __cordl_internal_set__attribute)) ::Meta::XR::ImmersiveDebugger::DebugMember* _attribute;

  /// @brief Field _instance, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__instance, put = __cordl_internal_set__instance)) ::System::Object* _instance;

  /// @brief Field _instanceHandle, offset 0x10, size 0x18
  __declspec(property(get = __cordl_internal_get__instanceHandle, put = __cordl_internal_set__instanceHandle)) ::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle _instanceHandle;

  /// @brief Field _memberInfo, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__memberInfo, put = __cordl_internal_set__memberInfo)) ::System::Reflection::MemberInfo* _memberInfo;

  /// @brief Method Matches, addr 0x584b7c4, size 0x68, virtual false, abstract: false, final false
  inline bool Matches(::System::Reflection::MemberInfo* memberInfo, ::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle instance);

  static inline ::Meta::XR::ImmersiveDebugger::Manager::Hook* New_ctor(::System::Reflection::MemberInfo* memberInfo, ::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle instanceHandle,
                                                                       ::Meta::XR::ImmersiveDebugger::DebugMember* attribute);

  constexpr ::Meta::XR::ImmersiveDebugger::DebugMember* const& __cordl_internal_get__attribute() const;

  constexpr ::Meta::XR::ImmersiveDebugger::DebugMember*& __cordl_internal_get__attribute();

  constexpr ::System::Object* const& __cordl_internal_get__instance() const;

  constexpr ::System::Object*& __cordl_internal_get__instance();

  constexpr ::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle const& __cordl_internal_get__instanceHandle() const;

  constexpr ::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle& __cordl_internal_get__instanceHandle();

  constexpr ::System::Reflection::MemberInfo* const& __cordl_internal_get__memberInfo() const;

  constexpr ::System::Reflection::MemberInfo*& __cordl_internal_get__memberInfo();

  constexpr void __cordl_internal_set__attribute(::Meta::XR::ImmersiveDebugger::DebugMember* value);

  constexpr void __cordl_internal_set__instance(::System::Object* value);

  constexpr void __cordl_internal_set__instanceHandle(::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle value);

  constexpr void __cordl_internal_set__memberInfo(::System::Reflection::MemberInfo* value);

  /// @brief Method .ctor, addr 0x584e640, size 0x20, virtual false, abstract: false, final false
  inline void _ctor(::System::Reflection::MemberInfo* memberInfo, ::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle instanceHandle, ::Meta::XR::ImmersiveDebugger::DebugMember* attribute);

  /// @brief Method get_Attribute, addr 0x584e71c, size 0x8, virtual false, abstract: false, final false
  inline ::Meta::XR::ImmersiveDebugger::DebugMember* get_Attribute();

  /// @brief Method get_MemberInfo, addr 0x584e724, size 0x8, virtual false, abstract: false, final false
  inline ::System::Reflection::MemberInfo* get_MemberInfo();

  /// @brief Method get_Valid, addr 0x58469a4, size 0xc, virtual false, abstract: false, final false
  inline bool get_Valid();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Hook();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Hook", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Hook(Hook&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Hook", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Hook(Hook const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18389 };

  /// @brief Field _instanceHandle, offset: 0x10, size: 0x18, def value: None
  ::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle ____instanceHandle;

  /// @brief Field _attribute, offset: 0x28, size: 0x8, def value: None
  ::Meta::XR::ImmersiveDebugger::DebugMember* ____attribute;

  /// @brief Field _memberInfo, offset: 0x30, size: 0x8, def value: None
  ::System::Reflection::MemberInfo* ____memberInfo;

  /// @brief Field _instance, offset: 0x38, size: 0x8, def value: None
  ::System::Object* ____instance;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::ImmersiveDebugger::Manager::Hook, ____instanceHandle) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::Manager::Hook, ____attribute) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::Manager::Hook, ____memberInfo) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::Manager::Hook, ____instance) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::ImmersiveDebugger::Manager::Hook, 0x40>, "Size mismatch!");

} // namespace Meta::XR::ImmersiveDebugger::Manager
NEED_NO_BOX(::Meta::XR::ImmersiveDebugger::Manager::Hook);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::ImmersiveDebugger::Manager::Hook*, "Meta.XR.ImmersiveDebugger.Manager", "Hook");
