#pragma once
// IWYU pragma private; include "Meta/XR/InputActions/UserInputActionSet.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(UserInputActionSet)
namespace Meta::XR::InputActions {
class InputActionDefinition;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace Meta::XR::InputActions {
class UserInputActionSet;
}
// Write type traits
MARK_REF_PTR_T(::Meta::XR::InputActions::UserInputActionSet);
// Dependencies System.Object
namespace Meta::XR::InputActions {
// Is value type: false
// CS Name: Meta.XR.InputActions.UserInputActionSet
class CORDL_TYPE UserInputActionSet : public ::System::Object {
public:
  // Declarations
  /// @brief Field InputActionDefinitions, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_InputActionDefinitions,
                      put = __cordl_internal_set_InputActionDefinitions)) ::System::Collections::Generic::List_1<::Meta::XR::InputActions::InputActionDefinition*>* InputActionDefinitions;

  /// @brief Field InteractionProfile, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_InteractionProfile, put = __cordl_internal_set_InteractionProfile)) ::StringW InteractionProfile;

  static inline ::Meta::XR::InputActions::UserInputActionSet* New_ctor();

  /// @brief Method ToString, addr 0x5ca2b4c, size 0x8, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr ::System::Collections::Generic::List_1<::Meta::XR::InputActions::InputActionDefinition*>* const& __cordl_internal_get_InputActionDefinitions() const;

  constexpr ::System::Collections::Generic::List_1<::Meta::XR::InputActions::InputActionDefinition*>*& __cordl_internal_get_InputActionDefinitions();

  constexpr ::StringW const& __cordl_internal_get_InteractionProfile() const;

  constexpr ::StringW& __cordl_internal_get_InteractionProfile();

  constexpr void __cordl_internal_set_InputActionDefinitions(::System::Collections::Generic::List_1<::Meta::XR::InputActions::InputActionDefinition*>* value);

  constexpr void __cordl_internal_set_InteractionProfile(::StringW value);

  /// @brief Method .ctor, addr 0x5ca2b54, size 0x74, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UserInputActionSet();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UserInputActionSet", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UserInputActionSet(UserInputActionSet&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UserInputActionSet", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UserInputActionSet(UserInputActionSet const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8556 };

  /// @brief Field InteractionProfile, offset: 0x10, size: 0x8, def value: None
  ::StringW ___InteractionProfile;

  /// @brief Field InputActionDefinitions, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Meta::XR::InputActions::InputActionDefinition*>* ___InputActionDefinitions;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::InputActions::UserInputActionSet, ___InteractionProfile) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::InputActions::UserInputActionSet, ___InputActionDefinitions) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::InputActions::UserInputActionSet, 0x20>, "Size mismatch!");

} // namespace Meta::XR::InputActions
NEED_NO_BOX(::Meta::XR::InputActions::UserInputActionSet);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::InputActions::UserInputActionSet*, "Meta.XR.InputActions", "UserInputActionSet");
