#pragma once
// IWYU pragma private; include "BeatSaber/BeatAvatarSDK/AvatarMeshPartSO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatSaber/BeatAvatarSDK/zzzz__AvatarPartSO_1_def.hpp"
CORDL_MODULE_EXPORT(AvatarMeshPartSO)
namespace UnityEngine {
class Mesh;
}
// Forward declare root types
namespace BeatSaber::BeatAvatarSDK {
class AvatarMeshPartSO;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO);
// Dependencies BeatSaber.BeatAvatarSDK.AvatarPartSO`1<T>
namespace BeatSaber::BeatAvatarSDK {
// Is value type: false
// CS Name: BeatSaber.BeatAvatarSDK.AvatarMeshPartSO
class CORDL_TYPE AvatarMeshPartSO : public ::BeatSaber::BeatAvatarSDK::AvatarPartSO_1<::UnityW<::UnityEngine::Mesh>> {
public:
  // Declarations
  __declspec(property(get = get_mesh)) ::UnityW<::UnityEngine::Mesh> mesh;

  static inline ::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO* New_ctor();

  /// @brief Method .ctor, addr 0x22591b8, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_mesh, addr 0x225917c, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Mesh> get_mesh();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AvatarMeshPartSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AvatarMeshPartSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AvatarMeshPartSO(AvatarMeshPartSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AvatarMeshPartSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AvatarMeshPartSO(AvatarMeshPartSO const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18143 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO, 0x30>, "Size mismatch!");

} // namespace BeatSaber::BeatAvatarSDK
NEED_NO_BOX(::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO*, "BeatSaber.BeatAvatarSDK", "AvatarMeshPartSO");
