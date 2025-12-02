#pragma once
// IWYU pragma private; include "Meta/XR/InputActions/InputActionDefinition.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRPlugin_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(InputActionDefinition)
// Forward declare root types
namespace Meta::XR::InputActions {
class InputActionDefinition;
}
// Write type traits
MARK_REF_PTR_T(::Meta::XR::InputActions::InputActionDefinition);
// Dependencies OVRPlugin::ActionTypes, System.Object
namespace Meta::XR::InputActions {
// Is value type: false
// CS Name: Meta.XR.InputActions.InputActionDefinition
class CORDL_TYPE InputActionDefinition : public ::System::Object {
public:
  // Declarations
  /// @brief Field ActionName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_ActionName, put = __cordl_internal_set_ActionName)) ::StringW ActionName;

  /// @brief Field Paths, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_Paths, put = __cordl_internal_set_Paths)) ::ArrayW<::StringW, ::Array<::StringW>*> Paths;

  /// @brief Field Type, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_Type, put = __cordl_internal_set_Type)) ::GlobalNamespace::OVRPlugin_ActionTypes Type;

  static inline ::Meta::XR::InputActions::InputActionDefinition* New_ctor();

  constexpr ::StringW const& __cordl_internal_get_ActionName() const;

  constexpr ::StringW& __cordl_internal_get_ActionName();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_Paths() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_Paths();

  constexpr ::GlobalNamespace::OVRPlugin_ActionTypes const& __cordl_internal_get_Type() const;

  constexpr ::GlobalNamespace::OVRPlugin_ActionTypes& __cordl_internal_get_Type();

  constexpr void __cordl_internal_set_ActionName(::StringW value);

  constexpr void __cordl_internal_set_Paths(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set_Type(::GlobalNamespace::OVRPlugin_ActionTypes value);

  /// @brief Method .ctor, addr 0x5c3c0e8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InputActionDefinition();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InputActionDefinition", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InputActionDefinition(InputActionDefinition&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InputActionDefinition", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InputActionDefinition(InputActionDefinition const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8553 };

  /// @brief Field ActionName, offset: 0x10, size: 0x8, def value: None
  ::StringW ___ActionName;

  /// @brief Field Type, offset: 0x18, size: 0x4, def value: None
  ::GlobalNamespace::OVRPlugin_ActionTypes ___Type;

  /// @brief Field Paths, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___Paths;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::InputActions::InputActionDefinition, ___ActionName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::InputActions::InputActionDefinition, ___Type) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::InputActions::InputActionDefinition, ___Paths) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::InputActions::InputActionDefinition, 0x28>, "Size mismatch!");

} // namespace Meta::XR::InputActions
NEED_NO_BOX(::Meta::XR::InputActions::InputActionDefinition);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::InputActions::InputActionDefinition*, "Meta.XR.InputActions", "InputActionDefinition");
