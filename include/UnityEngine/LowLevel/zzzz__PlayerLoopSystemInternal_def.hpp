#pragma once
// IWYU pragma private; include "UnityEngine/LowLevel/PlayerLoopSystemInternal.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PlayerLoopSystemInternal)
namespace System {
class Type;
}
namespace UnityEngine::LowLevel {
class PlayerLoopSystem_UpdateFunction;
}
// Forward declare root types
namespace UnityEngine::LowLevel {
struct PlayerLoopSystemInternal;
}
// Write type traits
MARK_VAL_T(::UnityEngine::LowLevel::PlayerLoopSystemInternal);
// Dependencies System.IntPtr
namespace UnityEngine::LowLevel {
// Is value type: true
// CS Name: UnityEngine.LowLevel.PlayerLoopSystemInternal
struct CORDL_TYPE PlayerLoopSystemInternal {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayerLoopSystemInternal();

  // Ctor Parameters [CppParam { name: "type", ty: "::System::Type*", modifiers: "", def_value: None }, CppParam { name: "updateDelegate", ty:
  // "::UnityEngine::LowLevel::PlayerLoopSystem_UpdateFunction*", modifiers: "", def_value: None }, CppParam { name: "updateFunction", ty: "::System::IntPtr", modifiers: "", def_value: None },
  // CppParam { name: "loopConditionFunction", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "numSubSystems", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr PlayerLoopSystemInternal(::System::Type* type, ::UnityEngine::LowLevel::PlayerLoopSystem_UpdateFunction* updateDelegate, ::System::IntPtr updateFunction,
                                     ::System::IntPtr loopConditionFunction, int32_t numSubSystems) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11010 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  /// @brief Field type, offset: 0x0, size: 0x8, def value: None
  ::System::Type* type;

  /// @brief Field updateDelegate, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::LowLevel::PlayerLoopSystem_UpdateFunction* updateDelegate;

  /// @brief Field updateFunction, offset: 0x10, size: 0x8, def value: None
  ::System::IntPtr updateFunction;

  /// @brief Field loopConditionFunction, offset: 0x18, size: 0x8, def value: None
  ::System::IntPtr loopConditionFunction;

  /// @brief Field numSubSystems, offset: 0x20, size: 0x4, def value: None
  int32_t numSubSystems;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::LowLevel::PlayerLoopSystemInternal, type) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevel::PlayerLoopSystemInternal, updateDelegate) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevel::PlayerLoopSystemInternal, updateFunction) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevel::PlayerLoopSystemInternal, loopConditionFunction) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevel::PlayerLoopSystemInternal, numSubSystems) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::LowLevel::PlayerLoopSystemInternal, 0x28>, "Size mismatch!");

} // namespace UnityEngine::LowLevel
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::LowLevel::PlayerLoopSystemInternal, "UnityEngine.LowLevel", "PlayerLoopSystemInternal");
