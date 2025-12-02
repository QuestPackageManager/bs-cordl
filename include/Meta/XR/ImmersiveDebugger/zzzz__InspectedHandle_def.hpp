#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/InspectedHandle.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/XR/ImmersiveDebugger/Utils/zzzz__InstanceHandle_def.hpp"
#include "Meta/XR/ImmersiveDebugger/zzzz__InspectedItemBase_def.hpp"
CORDL_MODULE_EXPORT(InspectedHandle)
namespace Meta::XR::ImmersiveDebugger::Utils {
struct InstanceHandle;
}
namespace Meta::XR::ImmersiveDebugger {
class DebugInspector;
}
namespace Meta::XR::ImmersiveDebugger {
class InspectedMember;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Reflection {
class MemberInfo;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Meta::XR::ImmersiveDebugger {
class InspectedHandle;
}
// Write type traits
MARK_REF_PTR_T(::Meta::XR::ImmersiveDebugger::InspectedHandle);
// Dependencies Meta.XR.ImmersiveDebugger.InspectedItemBase, Meta.XR.ImmersiveDebugger.Utils.InstanceHandle
namespace Meta::XR::ImmersiveDebugger {
// Is value type: false
// CS Name: Meta.XR.ImmersiveDebugger.InspectedHandle
class CORDL_TYPE InspectedHandle : public ::Meta::XR::ImmersiveDebugger::InspectedItemBase {
public:
  // Declarations
  __declspec(property(get = get_InstanceHandle, put = set_InstanceHandle)) ::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle InstanceHandle;

  __declspec(property(get = get_Type, put = set_Type)) ::System::Type* Type;

  /// @brief Field <InstanceHandle>k__BackingField, offset 0x30, size 0x18
  __declspec(property(get = __cordl_internal_get__InstanceHandle_k__BackingField,
                      put = __cordl_internal_set__InstanceHandle_k__BackingField)) ::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle _InstanceHandle_k__BackingField;

  /// @brief Field <Type>k__BackingField, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__Type_k__BackingField, put = __cordl_internal_set__Type_k__BackingField)) ::System::Type* _Type_k__BackingField;

  /// @brief Field inspectedMembers, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_inspectedMembers,
                      put = __cordl_internal_set_inspectedMembers)) ::System::Collections::Generic::List_1<::Meta::XR::ImmersiveDebugger::InspectedMember*>* inspectedMembers;

  /// @brief Method Initialize, addr 0x5829ed8, size 0x3ec, virtual false, abstract: false, final false
  inline void Initialize(::Meta::XR::ImmersiveDebugger::DebugInspector* owner);

  static inline ::Meta::XR::ImmersiveDebugger::InspectedHandle* New_ctor(::Meta::XR::ImmersiveDebugger::DebugInspector* owner, ::System::Type* type);

  /// @brief Method TryGetMember, addr 0x582b860, size 0x134, virtual false, abstract: false, final false
  inline bool TryGetMember(::System::Reflection::MemberInfo* memberInfo, ::ByRef<::Meta::XR::ImmersiveDebugger::InspectedMember*> inspectedMember);

  constexpr ::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle const& __cordl_internal_get__InstanceHandle_k__BackingField() const;

  constexpr ::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle& __cordl_internal_get__InstanceHandle_k__BackingField();

  constexpr ::System::Type* const& __cordl_internal_get__Type_k__BackingField() const;

  constexpr ::System::Type*& __cordl_internal_get__Type_k__BackingField();

  constexpr ::System::Collections::Generic::List_1<::Meta::XR::ImmersiveDebugger::InspectedMember*>* const& __cordl_internal_get_inspectedMembers() const;

  constexpr ::System::Collections::Generic::List_1<::Meta::XR::ImmersiveDebugger::InspectedMember*>*& __cordl_internal_get_inspectedMembers();

  constexpr void __cordl_internal_set__InstanceHandle_k__BackingField(::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle value);

  constexpr void __cordl_internal_set__Type_k__BackingField(::System::Type* value);

  constexpr void __cordl_internal_set_inspectedMembers(::System::Collections::Generic::List_1<::Meta::XR::ImmersiveDebugger::InspectedMember*>* value);

  /// @brief Method .ctor, addr 0x582a430, size 0xb4, virtual false, abstract: false, final false
  inline void _ctor(::Meta::XR::ImmersiveDebugger::DebugInspector* owner, ::System::Type* type);

  /// @brief Method get_InstanceHandle, addr 0x582b788, size 0x14, virtual false, abstract: false, final false
  inline ::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle get_InstanceHandle();

  /// @brief Method get_Type, addr 0x582b7b0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Type* get_Type();

  /// @brief Method set_InstanceHandle, addr 0x582b79c, size 0x14, virtual false, abstract: false, final false
  inline void set_InstanceHandle(::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle value);

  /// @brief Method set_Type, addr 0x582b7b8, size 0x8, virtual false, abstract: false, final false
  inline void set_Type(::System::Type* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InspectedHandle();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InspectedHandle", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InspectedHandle(InspectedHandle&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InspectedHandle", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InspectedHandle(InspectedHandle const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18282 };

  /// @brief Field inspectedMembers, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Meta::XR::ImmersiveDebugger::InspectedMember*>* ___inspectedMembers;

  /// @brief Field <InstanceHandle>k__BackingField, offset: 0x30, size: 0x18, def value: None
  ::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle ____InstanceHandle_k__BackingField;

  /// @brief Field <Type>k__BackingField, offset: 0x48, size: 0x8, def value: None
  ::System::Type* ____Type_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::ImmersiveDebugger::InspectedHandle, ___inspectedMembers) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::InspectedHandle, ____InstanceHandle_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::InspectedHandle, ____Type_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::ImmersiveDebugger::InspectedHandle, 0x50>, "Size mismatch!");

} // namespace Meta::XR::ImmersiveDebugger
NEED_NO_BOX(::Meta::XR::ImmersiveDebugger::InspectedHandle);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::ImmersiveDebugger::InspectedHandle*, "Meta.XR.ImmersiveDebugger", "InspectedHandle");
