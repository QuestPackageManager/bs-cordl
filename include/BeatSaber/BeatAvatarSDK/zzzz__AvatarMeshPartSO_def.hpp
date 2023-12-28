#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatSaber/BeatAvatarSDK/zzzz__AvatarPartSO_1_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
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
// Type: BeatSaber.BeatAvatarSDK::AvatarMeshPartSO
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace BeatSaber::BeatAvatarSDK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15687)), TypeDefinitionIndex(TypeDefinitionIndex(10070)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15687), inst:
// 913 })} Self: TypeDefinitionIndex(TypeDefinitionIndex(15682)) CS Name: ::BeatSaber.BeatAvatarSDK::AvatarMeshPartSO*
class CORDL_TYPE AvatarMeshPartSO : public ::BeatSaber::BeatAvatarSDK::AvatarPartSO_1<::UnityEngine::Mesh*> {
public:
  // Declarations
  __declspec(property(get = get_mesh))::UnityEngine::Mesh* mesh;

  /// @brief Method get_mesh addr 0xe19f1c size 0x3c virtual false final false
  inline ::UnityEngine::Mesh* get_mesh();

  static inline ::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO* New_ctor();

  /// @brief Method .ctor addr 0xe19f58 size 0x48 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "AvatarMeshPartSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AvatarMeshPartSO(AvatarMeshPartSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AvatarMeshPartSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AvatarMeshPartSO(AvatarMeshPartSO const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AvatarMeshPartSO();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO, 0x30>, "Size mismatch!");

} // namespace BeatSaber::BeatAvatarSDK
NEED_NO_BOX(::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO*, "BeatSaber.BeatAvatarSDK", "AvatarMeshPartSO");
