#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/InspectedMember.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/XR/ImmersiveDebugger/zzzz__InspectedItemBase_def.hpp"
#include "System/Reflection/zzzz__BindingFlags_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(InspectedMember)
namespace Meta::XR::ImmersiveDebugger {
struct DebugGizmoType;
}
namespace Meta::XR::ImmersiveDebugger {
class DebugMember;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Reflection {
class MemberInfo;
}
// Forward declare root types
namespace Meta::XR::ImmersiveDebugger {
class InspectedMember;
}
// Write type traits
MARK_REF_PTR_T(::Meta::XR::ImmersiveDebugger::InspectedMember);
// Dependencies Meta.XR.ImmersiveDebugger.InspectedItemBase, System.Reflection.BindingFlags
namespace Meta::XR::ImmersiveDebugger {
// Is value type: false
// CS Name: Meta.XR.ImmersiveDebugger.InspectedMember
class CORDL_TYPE InspectedMember : public ::Meta::XR::ImmersiveDebugger::InspectedItemBase {
public:
  // Declarations
  __declspec(property(get = get_MemberInfo, put = set_MemberInfo)) ::System::Reflection::MemberInfo* MemberInfo;

  __declspec(property(get = get_SupportedGizmos, put = set_SupportedGizmos)) ::System::Collections::Generic::List_1<::Meta::XR::ImmersiveDebugger::DebugGizmoType>* SupportedGizmos;

  /// @brief Field <MemberInfo>k__BackingField, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__MemberInfo_k__BackingField, put = __cordl_internal_set__MemberInfo_k__BackingField)) ::System::Reflection::MemberInfo* _MemberInfo_k__BackingField;

  /// @brief Field <SupportedGizmos>k__BackingField, offset 0x40, size 0x8
  __declspec(property(
      get = __cordl_internal_get__SupportedGizmos_k__BackingField,
      put = __cordl_internal_set__SupportedGizmos_k__BackingField)) ::System::Collections::Generic::List_1<::Meta::XR::ImmersiveDebugger::DebugGizmoType>* _SupportedGizmos_k__BackingField;

  /// @brief Field _editorSelectedGizmoIndex, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__editorSelectedGizmoIndex, put = __cordl_internal_set__editorSelectedGizmoIndex)) int32_t _editorSelectedGizmoIndex;

  /// @brief Field attribute, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_attribute, put = __cordl_internal_set_attribute)) ::Meta::XR::ImmersiveDebugger::DebugMember* attribute;

  /// @brief Field memberName, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_memberName, put = __cordl_internal_set_memberName)) ::StringW memberName;

  /// @brief Method Initialize, addr 0x582b2d4, size 0x128, virtual false, abstract: false, final false
  inline void Initialize();

  static inline ::Meta::XR::ImmersiveDebugger::InspectedMember* New_ctor(::System::Reflection::MemberInfo* member);

  /// @brief Method PopulateSupportedGizmos, addr 0x582bc8c, size 0x5ec, virtual false, abstract: false, final false
  inline void PopulateSupportedGizmos(::System::Collections::Generic::List_1<::Meta::XR::ImmersiveDebugger::DebugGizmoType>* supportedGizmos);

  constexpr ::System::Reflection::MemberInfo* const& __cordl_internal_get__MemberInfo_k__BackingField() const;

  constexpr ::System::Reflection::MemberInfo*& __cordl_internal_get__MemberInfo_k__BackingField();

  constexpr ::System::Collections::Generic::List_1<::Meta::XR::ImmersiveDebugger::DebugGizmoType>* const& __cordl_internal_get__SupportedGizmos_k__BackingField() const;

  constexpr ::System::Collections::Generic::List_1<::Meta::XR::ImmersiveDebugger::DebugGizmoType>*& __cordl_internal_get__SupportedGizmos_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__editorSelectedGizmoIndex() const;

  constexpr int32_t& __cordl_internal_get__editorSelectedGizmoIndex();

  constexpr ::Meta::XR::ImmersiveDebugger::DebugMember* const& __cordl_internal_get_attribute() const;

  constexpr ::Meta::XR::ImmersiveDebugger::DebugMember*& __cordl_internal_get_attribute();

  constexpr ::StringW const& __cordl_internal_get_memberName() const;

  constexpr ::StringW& __cordl_internal_get_memberName();

  constexpr void __cordl_internal_set__MemberInfo_k__BackingField(::System::Reflection::MemberInfo* value);

  constexpr void __cordl_internal_set__SupportedGizmos_k__BackingField(::System::Collections::Generic::List_1<::Meta::XR::ImmersiveDebugger::DebugGizmoType>* value);

  constexpr void __cordl_internal_set__editorSelectedGizmoIndex(int32_t value);

  constexpr void __cordl_internal_set_attribute(::Meta::XR::ImmersiveDebugger::DebugMember* value);

  constexpr void __cordl_internal_set_memberName(::StringW value);

  /// @brief Method .ctor, addr 0x582bbb0, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::System::Reflection::MemberInfo* member);

  /// @brief Method get_MemberInfo, addr 0x582bc7c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Reflection::MemberInfo* get_MemberInfo();

  /// @brief Method get_SupportedGizmos, addr 0x582bc6c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::Meta::XR::ImmersiveDebugger::DebugGizmoType>* get_SupportedGizmos();

  /// @brief Method set_MemberInfo, addr 0x582bc84, size 0x8, virtual false, abstract: false, final false
  inline void set_MemberInfo(::System::Reflection::MemberInfo* value);

  /// @brief Method set_SupportedGizmos, addr 0x582bc74, size 0x8, virtual false, abstract: false, final false
  inline void set_SupportedGizmos(::System::Collections::Generic::List_1<::Meta::XR::ImmersiveDebugger::DebugGizmoType>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InspectedMember();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InspectedMember", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InspectedMember(InspectedMember&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InspectedMember", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InspectedMember(InspectedMember const&) = delete;

  /// @brief Field Flags value: I32(62)
  static ::System::Reflection::BindingFlags const Flags;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18283 };

  /// @brief Field attribute, offset: 0x28, size: 0x8, def value: None
  ::Meta::XR::ImmersiveDebugger::DebugMember* ___attribute;

  /// @brief Field memberName, offset: 0x30, size: 0x8, def value: None
  ::StringW ___memberName;

  /// @brief Field _editorSelectedGizmoIndex, offset: 0x38, size: 0x4, def value: None
  int32_t ____editorSelectedGizmoIndex;

  /// @brief Field <SupportedGizmos>k__BackingField, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Meta::XR::ImmersiveDebugger::DebugGizmoType>* ____SupportedGizmos_k__BackingField;

  /// @brief Field <MemberInfo>k__BackingField, offset: 0x48, size: 0x8, def value: None
  ::System::Reflection::MemberInfo* ____MemberInfo_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::ImmersiveDebugger::InspectedMember, ___attribute) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::InspectedMember, ___memberName) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::InspectedMember, ____editorSelectedGizmoIndex) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::InspectedMember, ____SupportedGizmos_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::InspectedMember, ____MemberInfo_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::ImmersiveDebugger::InspectedMember, 0x50>, "Size mismatch!");

} // namespace Meta::XR::ImmersiveDebugger
NEED_NO_BOX(::Meta::XR::ImmersiveDebugger::InspectedMember);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::ImmersiveDebugger::InspectedMember*, "Meta.XR.ImmersiveDebugger", "InspectedMember");
