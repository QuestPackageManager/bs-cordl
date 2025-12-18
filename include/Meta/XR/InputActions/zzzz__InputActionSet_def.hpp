#pragma once
// IWYU pragma private; include "Meta/XR/InputActions/InputActionSet.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(InputActionSet)
namespace Meta::XR::InputActions {
class InputActionDefinition;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace Meta::XR::InputActions {
class InputActionSet;
}
// Write type traits
MARK_REF_PTR_T(::Meta::XR::InputActions::InputActionSet);
// Dependencies UnityEngine.ScriptableObject
namespace Meta::XR::InputActions {
// Is value type: false
// CS Name: Meta.XR.InputActions.InputActionSet
class CORDL_TYPE InputActionSet : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  /// @brief Field InputActionDefinitions, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_InputActionDefinitions,
                      put = __cordl_internal_set_InputActionDefinitions)) ::System::Collections::Generic::List_1<::Meta::XR::InputActions::InputActionDefinition*>* InputActionDefinitions;

  /// @brief Field InteractionProfile, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_InteractionProfile, put = __cordl_internal_set_InteractionProfile)) ::StringW InteractionProfile;

  static inline ::Meta::XR::InputActions::InputActionSet* New_ctor();

  /// @brief Method ToString, addr 0x5ca288c, size 0x8, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr ::System::Collections::Generic::List_1<::Meta::XR::InputActions::InputActionDefinition*>* const& __cordl_internal_get_InputActionDefinitions() const;

  constexpr ::System::Collections::Generic::List_1<::Meta::XR::InputActions::InputActionDefinition*>*& __cordl_internal_get_InputActionDefinitions();

  constexpr ::StringW const& __cordl_internal_get_InteractionProfile() const;

  constexpr ::StringW& __cordl_internal_get_InteractionProfile();

  constexpr void __cordl_internal_set_InputActionDefinitions(::System::Collections::Generic::List_1<::Meta::XR::InputActions::InputActionDefinition*>* value);

  constexpr void __cordl_internal_set_InteractionProfile(::StringW value);

  /// @brief Method .ctor, addr 0x5ca2894, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InputActionSet();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InputActionSet", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InputActionSet(InputActionSet&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InputActionSet", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InputActionSet(InputActionSet const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8554 };

  /// @brief Field InteractionProfile, offset: 0x18, size: 0x8, def value: None
  ::StringW ___InteractionProfile;

  /// @brief Field InputActionDefinitions, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Meta::XR::InputActions::InputActionDefinition*>* ___InputActionDefinitions;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::InputActions::InputActionSet, ___InteractionProfile) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::InputActions::InputActionSet, ___InputActionDefinitions) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::InputActions::InputActionSet, 0x28>, "Size mismatch!");

} // namespace Meta::XR::InputActions
NEED_NO_BOX(::Meta::XR::InputActions::InputActionSet);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::InputActions::InputActionSet*, "Meta.XR.InputActions", "InputActionSet");
