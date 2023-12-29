#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__AvatarPartSO_1_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
CORDL_MODULE_EXPORT(AvatarSpritePartSO)
namespace UnityEngine {
class Sprite;
}
// Forward declare root types
namespace GlobalNamespace {
class AvatarSpritePartSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::AvatarSpritePartSO);
// Type: ::AvatarSpritePartSO
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(4778), inst: 765 }), TypeDefinitionIndex(TypeDefinitionIndex(10213)),
// TypeDefinitionIndex(TypeDefinitionIndex(4778))} Self: TypeDefinitionIndex(TypeDefinitionIndex(4780)) CS Name: ::AvatarSpritePartSO*
class CORDL_TYPE AvatarSpritePartSO : public ::GlobalNamespace::AvatarPartSO_1<::UnityEngine::Sprite*> {
public:
  // Declarations
  __declspec(property(get = get_sprite))::UnityEngine::Sprite* sprite;

  /// @brief Method get_sprite addr 0x223ebf8 size 0x3c virtual false final false
  inline ::UnityEngine::Sprite* get_sprite();

  static inline ::GlobalNamespace::AvatarSpritePartSO* New_ctor();

  /// @brief Method .ctor addr 0x223ec34 size 0x48 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "AvatarSpritePartSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AvatarSpritePartSO(AvatarSpritePartSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AvatarSpritePartSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AvatarSpritePartSO(AvatarSpritePartSO const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AvatarSpritePartSO();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AvatarSpritePartSO, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::AvatarSpritePartSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AvatarSpritePartSO*, "", "AvatarSpritePartSO");
