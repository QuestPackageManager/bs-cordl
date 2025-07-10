#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/EnhancedTouch/EnhancedTouchSupport.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputSettings_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EnhancedTouchSupport)
namespace UnityEngine::InputSystem {
struct InputDeviceChange;
}
namespace UnityEngine::InputSystem {
class InputDevice;
}
// Forward declare root types
namespace UnityEngine::InputSystem::EnhancedTouch {
class EnhancedTouchSupport;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::EnhancedTouch::EnhancedTouchSupport);
// Dependencies System.Object, UnityEngine.InputSystem.InputSettings::UpdateMode
namespace UnityEngine::InputSystem::EnhancedTouch {
// Is value type: false
// CS Name: UnityEngine.InputSystem.EnhancedTouch.EnhancedTouchSupport
class CORDL_TYPE EnhancedTouchSupport : public ::System::Object {
public:
  // Declarations
  /// @brief Field s_Enabled, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_s_Enabled, put = setStaticF_s_Enabled)) int32_t s_Enabled;

  /// @brief Field s_UpdateMode, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_s_UpdateMode, put = setStaticF_s_UpdateMode)) ::UnityEngine::InputSystem::InputSettings_UpdateMode s_UpdateMode;

  /// @brief Method CheckEnabled, addr 0x4600650, size 0x98, virtual false, abstract: false, final false
  static inline void CheckEnabled();

  /// @brief Method Disable, addr 0x45ffec8, size 0x184, virtual false, abstract: false, final false
  static inline void Disable();

  /// @brief Method Enable, addr 0x45ffb7c, size 0x170, virtual false, abstract: false, final false
  static inline void Enable();

  /// @brief Method OnDeviceChange, addr 0x460032c, size 0x11c, virtual false, abstract: false, final false
  static inline void OnDeviceChange(::UnityEngine::InputSystem::InputDevice* device, ::UnityEngine::InputSystem::InputDeviceChange change);

  /// @brief Method OnSettingsChange, addr 0x46005b8, size 0x98, virtual false, abstract: false, final false
  static inline void OnSettingsChange();

  /// @brief Method Reset, addr 0x4600208, size 0xa0, virtual false, abstract: false, final false
  static inline void Reset();

  /// @brief Method SetUpState, addr 0x45ffcec, size 0x1dc, virtual false, abstract: false, final false
  static inline void SetUpState();

  /// @brief Method TearDownState, addr 0x460004c, size 0x1bc, virtual false, abstract: false, final false
  static inline void TearDownState();

  static inline int32_t getStaticF_s_Enabled();

  static inline ::UnityEngine::InputSystem::InputSettings_UpdateMode getStaticF_s_UpdateMode();

  /// @brief Method get_enabled, addr 0x45ffb2c, size 0x50, virtual false, abstract: false, final false
  static inline bool get_enabled();

  static inline void setStaticF_s_Enabled(int32_t value);

  static inline void setStaticF_s_UpdateMode(::UnityEngine::InputSystem::InputSettings_UpdateMode value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EnhancedTouchSupport();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EnhancedTouchSupport", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EnhancedTouchSupport(EnhancedTouchSupport&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EnhancedTouchSupport", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EnhancedTouchSupport(EnhancedTouchSupport const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6823 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::EnhancedTouch::EnhancedTouchSupport, 0x10>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::EnhancedTouch
NEED_NO_BOX(::UnityEngine::InputSystem::EnhancedTouch::EnhancedTouchSupport);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::EnhancedTouch::EnhancedTouchSupport*, "UnityEngine.InputSystem.EnhancedTouch", "EnhancedTouchSupport");
