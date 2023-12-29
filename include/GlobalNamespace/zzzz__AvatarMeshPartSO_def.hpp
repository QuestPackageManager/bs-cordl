#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__AvatarPartSO_1_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
CORDL_MODULE_EXPORT(AvatarMeshPartSO)
namespace UnityEngine {
class Mesh;
}
// Forward declare root types
namespace GlobalNamespace {
class AvatarMeshPartSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::AvatarMeshPartSO);
// Type: ::AvatarMeshPartSO
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9998)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(4778), inst: 896 }),
// TypeDefinitionIndex(TypeDefinitionIndex(4778))} Self: TypeDefinitionIndex(TypeDefinitionIndex(4774)) CS Name: ::AvatarMeshPartSO*
class CORDL_TYPE AvatarMeshPartSO : public ::GlobalNamespace::AvatarPartSO_1<::UnityEngine::Mesh*> {
public:
  // Declarations
  __declspec(property(get = get_mesh))::UnityEngine::Mesh* mesh;

  /// @brief Method get_mesh addr 0x223e7dc size 0x3c virtual false final false
  inline ::UnityEngine::Mesh* get_mesh();

  static inline ::GlobalNamespace::AvatarMeshPartSO* New_ctor();

  /// @brief Method .ctor addr 0x223e818 size 0x48 virtual false final false
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
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AvatarMeshPartSO, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::AvatarMeshPartSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AvatarMeshPartSO*, "", "AvatarMeshPartSO");