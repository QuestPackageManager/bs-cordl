#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputFeatureNames.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(InputFeatureNames)
// Forward declare root types
namespace UnityEngine::InputSystem {
class InputFeatureNames;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::InputFeatureNames);
// Dependencies System.Object
namespace UnityEngine::InputSystem {
// Is value type: false
// CS Name: UnityEngine.InputSystem.InputFeatureNames
class CORDL_TYPE InputFeatureNames : public ::System::Object {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InputFeatureNames();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InputFeatureNames", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InputFeatureNames(InputFeatureNames&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InputFeatureNames", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InputFeatureNames(InputFeatureNames const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6697 };

  /// @brief Field kDisableUnityRemoteSupport offset 0xffffffff size 0x8
  static constexpr ::ConstString kDisableUnityRemoteSupport{ u"DISABLE_UNITY_REMOTE_SUPPORT" };

  /// @brief Field kParanoidReadValueCachingChecks offset 0xffffffff size 0x8
  static constexpr ::ConstString kParanoidReadValueCachingChecks{ u"PARANOID_READ_VALUE_CACHING_CHECKS" };

  /// @brief Field kRunPlayerUpdatesInEditMode offset 0xffffffff size 0x8
  static constexpr ::ConstString kRunPlayerUpdatesInEditMode{ u"RUN_PLAYER_UPDATES_IN_EDIT_MODE" };

  /// @brief Field kUseOptimizedControls offset 0xffffffff size 0x8
  static constexpr ::ConstString kUseOptimizedControls{ u"USE_OPTIMIZED_CONTROLS" };

  /// @brief Field kUseReadValueCaching offset 0xffffffff size 0x8
  static constexpr ::ConstString kUseReadValueCaching{ u"USE_READ_VALUE_CACHING" };

  /// @brief Field kUseWindowsGamingInputBackend offset 0xffffffff size 0x8
  static constexpr ::ConstString kUseWindowsGamingInputBackend{ u"USE_WINDOWS_GAMING_INPUT_BACKEND" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::InputFeatureNames, 0x10>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
NEED_NO_BOX(::UnityEngine::InputSystem::InputFeatureNames);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputFeatureNames*, "UnityEngine.InputSystem", "InputFeatureNames");
