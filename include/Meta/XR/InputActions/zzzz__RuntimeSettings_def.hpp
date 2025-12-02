#pragma once
// IWYU pragma private; include "Meta/XR/InputActions/RuntimeSettings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRRuntimeAssetsBase_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(RuntimeSettings)
namespace Meta::XR::InputActions {
class InputActionSet;
}
namespace Meta::XR::InputActions {
class UserInputActionSet;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace Meta::XR::InputActions {
class RuntimeSettings;
}
// Write type traits
MARK_REF_PTR_T(::Meta::XR::InputActions::RuntimeSettings);
// Dependencies OVRRuntimeAssetsBase
namespace Meta::XR::InputActions {
// Is value type: false
// CS Name: Meta.XR.InputActions.RuntimeSettings
class CORDL_TYPE RuntimeSettings : public ::GlobalNamespace::OVRRuntimeAssetsBase {
public:
  // Declarations
  /// @brief Field InputActionDefinitions, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_InputActionDefinitions,
                      put = __cordl_internal_set_InputActionDefinitions)) ::System::Collections::Generic::List_1<::Meta::XR::InputActions::UserInputActionSet*>* InputActionDefinitions;

  /// @brief Field InputActionSets, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_InputActionSets,
                      put = __cordl_internal_set_InputActionSets)) ::System::Collections::Generic::List_1<::UnityW<::Meta::XR::InputActions::InputActionSet>>* InputActionSets;

  /// @brief Field InstanceAssetName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_InstanceAssetName, put = setStaticF_InstanceAssetName)) ::StringW InstanceAssetName;

  /// @brief Field _instance, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__instance, put = setStaticF__instance)) ::UnityW<::Meta::XR::InputActions::RuntimeSettings> _instance;

  static inline ::Meta::XR::InputActions::RuntimeSettings* New_ctor();

  constexpr ::System::Collections::Generic::List_1<::Meta::XR::InputActions::UserInputActionSet*>* const& __cordl_internal_get_InputActionDefinitions() const;

  constexpr ::System::Collections::Generic::List_1<::Meta::XR::InputActions::UserInputActionSet*>*& __cordl_internal_get_InputActionDefinitions();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::Meta::XR::InputActions::InputActionSet>>* const& __cordl_internal_get_InputActionSets() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::Meta::XR::InputActions::InputActionSet>>*& __cordl_internal_get_InputActionSets();

  constexpr void __cordl_internal_set_InputActionDefinitions(::System::Collections::Generic::List_1<::Meta::XR::InputActions::UserInputActionSet*>* value);

  constexpr void __cordl_internal_set_InputActionSets(::System::Collections::Generic::List_1<::UnityW<::Meta::XR::InputActions::InputActionSet>>* value);

  /// @brief Method .ctor, addr 0x5c3bf40, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::StringW getStaticF_InstanceAssetName();

  static inline ::UnityW<::Meta::XR::InputActions::RuntimeSettings> getStaticF__instance();

  /// @brief Method get_Instance, addr 0x5c3be30, size 0x110, virtual false, abstract: false, final false
  static inline ::UnityW<::Meta::XR::InputActions::RuntimeSettings> get_Instance();

  static inline void setStaticF_InstanceAssetName(::StringW value);

  static inline void setStaticF__instance(::UnityW<::Meta::XR::InputActions::RuntimeSettings> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RuntimeSettings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RuntimeSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RuntimeSettings(RuntimeSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RuntimeSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RuntimeSettings(RuntimeSettings const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8551 };

  /// @brief Field InputActionDefinitions, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Meta::XR::InputActions::UserInputActionSet*>* ___InputActionDefinitions;

  /// @brief Field InputActionSets, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::Meta::XR::InputActions::InputActionSet>>* ___InputActionSets;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::InputActions::RuntimeSettings, ___InputActionDefinitions) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::InputActions::RuntimeSettings, ___InputActionSets) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::InputActions::RuntimeSettings, 0x28>, "Size mismatch!");

} // namespace Meta::XR::InputActions
NEED_NO_BOX(::Meta::XR::InputActions::RuntimeSettings);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::InputActions::RuntimeSettings*, "Meta.XR.InputActions", "RuntimeSettings");
