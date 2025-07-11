#pragma once
// IWYU pragma private; include "BeatSaber/BeatAvatarSDK/AvatarSpritePartSO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatSaber/BeatAvatarSDK/zzzz__AvatarPartSO_1_def.hpp"
CORDL_MODULE_EXPORT(AvatarSpritePartSO)
namespace UnityEngine {
class Sprite;
}
// Forward declare root types
namespace BeatSaber::BeatAvatarSDK {
class AvatarSpritePartSO;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::BeatAvatarSDK::AvatarSpritePartSO);
// Dependencies BeatSaber.BeatAvatarSDK.AvatarPartSO`1<T>
namespace BeatSaber::BeatAvatarSDK {
// Is value type: false
// CS Name: BeatSaber.BeatAvatarSDK.AvatarSpritePartSO
class CORDL_TYPE AvatarSpritePartSO : public ::BeatSaber::BeatAvatarSDK::AvatarPartSO_1<::UnityW<::UnityEngine::Sprite>> {
public:
  // Declarations
  __declspec(property(get = get_sprite)) ::UnityW<::UnityEngine::Sprite> sprite;

  static inline ::BeatSaber::BeatAvatarSDK::AvatarSpritePartSO* New_ctor();

  /// @brief Method .ctor, addr 0x225c3ac, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_sprite, addr 0x225c370, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Sprite> get_sprite();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AvatarSpritePartSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AvatarSpritePartSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AvatarSpritePartSO(AvatarSpritePartSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AvatarSpritePartSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AvatarSpritePartSO(AvatarSpritePartSO const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18166 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::BeatAvatarSDK::AvatarSpritePartSO, 0x30>, "Size mismatch!");

} // namespace BeatSaber::BeatAvatarSDK
NEED_NO_BOX(::BeatSaber::BeatAvatarSDK::AvatarSpritePartSO);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::BeatAvatarSDK::AvatarSpritePartSO*, "BeatSaber.BeatAvatarSDK", "AvatarSpritePartSO");
