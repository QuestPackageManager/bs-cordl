#pragma once
// IWYU pragma private; include "GlobalNamespace/UnityPlayerLoopManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(UnityPlayerLoopManager)
namespace System {
class Type;
}
namespace UnityEngine::LowLevel {
struct PlayerLoopSystem;
}
// Forward declare root types
namespace GlobalNamespace {
class UnityPlayerLoopManager;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::UnityPlayerLoopManager);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: UnityPlayerLoopManager
class CORDL_TYPE UnityPlayerLoopManager : public ::System::Object {
public:
  // Declarations
  /// @brief Method InitializePlayerLoop, addr 0x569cd1c, size 0x1bc, virtual false, abstract: false, final false
  static inline void InitializePlayerLoop();

  /// @brief Method RemoveDisabledSubsystems, addr 0x569ced8, size 0x250, virtual false, abstract: false, final false
  static inline bool RemoveDisabledSubsystems(::ByRef<::UnityEngine::LowLevel::PlayerLoopSystem> loop, ::ArrayW<::System::Type*, ::Array<::System::Type*>*> typesToRemove);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnityPlayerLoopManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UnityPlayerLoopManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnityPlayerLoopManager(UnityPlayerLoopManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnityPlayerLoopManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnityPlayerLoopManager(UnityPlayerLoopManager const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22804 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::UnityPlayerLoopManager, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::UnityPlayerLoopManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::UnityPlayerLoopManager*, "", "UnityPlayerLoopManager");
