#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/InspectedData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(InspectedData)
namespace Meta::XR::ImmersiveDebugger {
class InspectedMember;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Meta::XR::ImmersiveDebugger {
class InspectedData;
}
// Write type traits
MARK_REF_PTR_T(::Meta::XR::ImmersiveDebugger::InspectedData);
// Dependencies UnityEngine.ScriptableObject
namespace Meta::XR::ImmersiveDebugger {
// Is value type: false
// CS Name: Meta.XR.ImmersiveDebugger.InspectedData
class CORDL_TYPE InspectedData : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  /// @brief Field DisplayName, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_DisplayName, put = __cordl_internal_set_DisplayName)) ::StringW DisplayName;

  /// @brief Field InspectedMembers, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_InspectedMembers,
                      put = __cordl_internal_set_InspectedMembers)) ::System::Collections::Generic::List_1<::Meta::XR::ImmersiveDebugger::InspectedMember*>* InspectedMembers;

  /// @brief Method ExtractTypesFromInspectedMembers, addr 0x5891814, size 0x224, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::System::Type*>* ExtractTypesFromInspectedMembers();

  static inline ::Meta::XR::ImmersiveDebugger::InspectedData* New_ctor();

  constexpr ::StringW const& __cordl_internal_get_DisplayName() const;

  constexpr ::StringW& __cordl_internal_get_DisplayName();

  constexpr ::System::Collections::Generic::List_1<::Meta::XR::ImmersiveDebugger::InspectedMember*>* const& __cordl_internal_get_InspectedMembers() const;

  constexpr ::System::Collections::Generic::List_1<::Meta::XR::ImmersiveDebugger::InspectedMember*>*& __cordl_internal_get_InspectedMembers();

  constexpr void __cordl_internal_set_DisplayName(::StringW value);

  constexpr void __cordl_internal_set_InspectedMembers(::System::Collections::Generic::List_1<::Meta::XR::ImmersiveDebugger::InspectedMember*>* value);

  /// @brief Method .ctor, addr 0x5891d20, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InspectedData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InspectedData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InspectedData(InspectedData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InspectedData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InspectedData(InspectedData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18294 };

  /// @brief Field DisplayName, offset: 0x18, size: 0x8, def value: None
  ::StringW ___DisplayName;

  /// @brief Field InspectedMembers, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Meta::XR::ImmersiveDebugger::InspectedMember*>* ___InspectedMembers;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::ImmersiveDebugger::InspectedData, ___DisplayName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::InspectedData, ___InspectedMembers) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::ImmersiveDebugger::InspectedData, 0x28>, "Size mismatch!");

} // namespace Meta::XR::ImmersiveDebugger
NEED_NO_BOX(::Meta::XR::ImmersiveDebugger::InspectedData);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::ImmersiveDebugger::InspectedData*, "Meta.XR.ImmersiveDebugger", "InspectedData");
