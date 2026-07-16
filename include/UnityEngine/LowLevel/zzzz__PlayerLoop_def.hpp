#pragma once
// IWYU pragma private; include "UnityEngine/LowLevel/PlayerLoop.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PlayerLoop)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::LowLevel {
struct PlayerLoopSystemInternal;
}
namespace UnityEngine::LowLevel {
struct PlayerLoopSystem;
}
// Forward declare root types
namespace UnityEngine::LowLevel {
class PlayerLoop;
}
// Write type traits
MARK_REF_T(::UnityEngine::LowLevel::PlayerLoop*);
DEFINE_IL2CPP_CLASS(::UnityEngine::LowLevel::PlayerLoop*, "UnityEngine.LowLevel", "PlayerLoop");
// Dependencies System.Object
namespace UnityEngine::LowLevel {
// Is value type: false
// CS Name: UnityEngine.LowLevel.PlayerLoop
class CORDL_TYPE PlayerLoop : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetCurrentPlayerLoop, addr 0x6afe0b4, size 0x6c, virtual false, abstract: false, final false
  static inline ::UnityEngine::LowLevel::PlayerLoopSystem GetCurrentPlayerLoop();

  /// @brief Method GetCurrentPlayerLoopInternal, addr 0x6afe120, size 0x28, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::LowLevel::PlayerLoopSystemInternal> GetCurrentPlayerLoopInternal();

  /// @brief Method InternalToPlayerLoopSystem, addr 0x6afe148, size 0x1f8, virtual false, abstract: false, final false
  static inline ::UnityEngine::LowLevel::PlayerLoopSystem InternalToPlayerLoopSystem(::ArrayW<::UnityEngine::LowLevel::PlayerLoopSystemInternal> internalSys, ::by_ref<int32_t> offset);

  /// @brief Method PlayerLoopSystemToInternal, addr 0x6afe428, size 0x1ac, virtual false, abstract: false, final false
  static inline int32_t PlayerLoopSystemToInternal(::UnityEngine::LowLevel::PlayerLoopSystem sys,
                                                   ::by_ref<::System::Collections::Generic::List_1<::UnityEngine::LowLevel::PlayerLoopSystemInternal>*> internalSys);

  /// @brief Method SetPlayerLoop, addr 0x6afe340, size 0xe8, virtual false, abstract: false, final false
  static inline void SetPlayerLoop(::UnityEngine::LowLevel::PlayerLoopSystem loop);

  /// @brief Method SetPlayerLoopInternal, addr 0x6afe5d4, size 0x3c, virtual false, abstract: false, final false
  static inline void SetPlayerLoopInternal(::ArrayW<::UnityEngine::LowLevel::PlayerLoopSystemInternal> loop);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayerLoop();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlayerLoop", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayerLoop(PlayerLoop&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayerLoop", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayerLoop(PlayerLoop const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10469 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::LowLevel::PlayerLoop) == 0x10, "Size mismatch!");

} // namespace UnityEngine::LowLevel
