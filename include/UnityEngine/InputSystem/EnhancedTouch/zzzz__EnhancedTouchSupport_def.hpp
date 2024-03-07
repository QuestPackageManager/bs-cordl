#pragma once
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
// Type: UnityEngine.InputSystem.EnhancedTouch::EnhancedTouchSupport
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::EnhancedTouch {
// Is value type: false
// CS Name: ::UnityEngine.InputSystem.EnhancedTouch::EnhancedTouchSupport*
class CORDL_TYPE EnhancedTouchSupport : public ::System::Object {
public:
  // Declarations
  /// @brief Field s_Enabled, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_s_Enabled, put = setStaticF_s_Enabled)) int32_t s_Enabled;

  /// @brief Field s_UpdateMode, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_s_UpdateMode, put = setStaticF_s_UpdateMode))::UnityEngine::InputSystem::__InputSettings__UpdateMode s_UpdateMode;

  /// @brief Method CheckEnabled, addr 0x2c26f4c, size 0x109c, virtual false, abstract: false, final false
  static inline void CheckEnabled();

  /// @brief Method Disable, addr 0x2c269a0, size 0x198, virtual false, abstract: false, final false
  static inline void Disable();

  /// @brief Method Enable, addr 0x2c2664c, size 0x174, virtual false, abstract: false, final false
  static inline void Enable();

  /// @brief Method OnDeviceChange, addr 0x2c26da0, size 0x114, virtual false, abstract: false, final false
  static inline void OnDeviceChange(::UnityEngine::InputSystem::InputDevice* device, ::UnityEngine::InputSystem::InputDeviceChange change);

  /// @brief Method OnSettingsChange, addr 0x2c26eb4, size 0x98, virtual false, abstract: false, final false
  static inline void OnSettingsChange();

  /// @brief Method Reset, addr 0x2c26cfc, size 0xa4, virtual false, abstract: false, final false
  static inline void Reset();

  /// @brief Method SetUpState, addr 0x2c267c0, size 0x1e0, virtual false, abstract: false, final false
  static inline void SetUpState();

  /// @brief Method TearDownState, addr 0x2c26b38, size 0x1c4, virtual false, abstract: false, final false
  static inline void TearDownState();

  static inline int32_t getStaticF_s_Enabled();

  static inline ::UnityEngine::InputSystem::__InputSettings__UpdateMode getStaticF_s_UpdateMode();

  /// @brief Method get_enabled, addr 0x2c265fc, size 0x50, virtual false, abstract: false, final false
  static inline bool get_enabled();

  static inline void setStaticF_s_Enabled(int32_t value);

  static inline void setStaticF_s_UpdateMode(::UnityEngine::InputSystem::__InputSettings__UpdateMode value);

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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::EnhancedTouch::EnhancedTouchSupport, 0x10>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::EnhancedTouch
NEED_NO_BOX(::UnityEngine::InputSystem::EnhancedTouch::EnhancedTouchSupport);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::EnhancedTouch::EnhancedTouchSupport*, "UnityEngine.InputSystem.EnhancedTouch", "EnhancedTouchSupport");
