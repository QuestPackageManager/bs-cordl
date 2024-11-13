#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerLobbyCenterScreenSystem.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(MultiplayerLobbyCenterScreenSystem)
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerLobbyCenterScreenSystem;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerLobbyCenterScreenSystem);
// Type: ::MultiplayerLobbyCenterScreenSystem
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MultiplayerLobbyCenterScreenSystem*
class CORDL_TYPE MultiplayerLobbyCenterScreenSystem : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  static inline ::GlobalNamespace::MultiplayerLobbyCenterScreenSystem* New_ctor();

  /// @brief Method .ctor, addr 0x3ba6a3c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerLobbyCenterScreenSystem();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerLobbyCenterScreenSystem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerLobbyCenterScreenSystem(MultiplayerLobbyCenterScreenSystem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerLobbyCenterScreenSystem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerLobbyCenterScreenSystem(MultiplayerLobbyCenterScreenSystem const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4812 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerLobbyCenterScreenSystem, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerLobbyCenterScreenSystem);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerLobbyCenterScreenSystem*, "", "MultiplayerLobbyCenterScreenSystem");
