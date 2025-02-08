#pragma once
// IWYU pragma private; include "GlobalNamespace/VoipManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(VoipManager)
// Forward declare root types
namespace GlobalNamespace {
class VoipManager;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::VoipManager);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: VoipManager
class CORDL_TYPE VoipManager : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  static inline ::GlobalNamespace::VoipManager* New_ctor();

  /// @brief Method .ctor, addr 0x3e7ad84, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VoipManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VoipManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VoipManager(VoipManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VoipManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VoipManager(VoipManager const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17381 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::VoipManager, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::VoipManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::VoipManager*, "", "VoipManager");
