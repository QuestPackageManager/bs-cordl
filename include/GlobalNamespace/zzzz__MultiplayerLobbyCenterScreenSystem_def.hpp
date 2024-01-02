#pragma once
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
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5561))
// CS Name: ::MultiplayerLobbyCenterScreenSystem*
class CORDL_TYPE MultiplayerLobbyCenterScreenSystem : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  static inline ::GlobalNamespace::MultiplayerLobbyCenterScreenSystem* New_ctor();

  /// @brief Method .ctor, addr 0x22a36b4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerLobbyCenterScreenSystem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerLobbyCenterScreenSystem(MultiplayerLobbyCenterScreenSystem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerLobbyCenterScreenSystem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerLobbyCenterScreenSystem(MultiplayerLobbyCenterScreenSystem const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerLobbyCenterScreenSystem();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerLobbyCenterScreenSystem, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerLobbyCenterScreenSystem);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerLobbyCenterScreenSystem*, "", "MultiplayerLobbyCenterScreenSystem");
