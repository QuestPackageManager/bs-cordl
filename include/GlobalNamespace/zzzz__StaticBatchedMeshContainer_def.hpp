#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(StaticBatchedMeshContainer)
// Forward declare root types
namespace GlobalNamespace {
class StaticBatchedMeshContainer;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::StaticBatchedMeshContainer);
// Type: ::StaticBatchedMeshContainer
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16104))
// CS Name: ::StaticBatchedMeshContainer*
class CORDL_TYPE StaticBatchedMeshContainer : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  static inline ::GlobalNamespace::StaticBatchedMeshContainer* New_ctor();

  /// @brief Method .ctor addr 0x2691cf0 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "StaticBatchedMeshContainer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StaticBatchedMeshContainer(StaticBatchedMeshContainer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StaticBatchedMeshContainer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StaticBatchedMeshContainer(StaticBatchedMeshContainer const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StaticBatchedMeshContainer();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::StaticBatchedMeshContainer, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::StaticBatchedMeshContainer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StaticBatchedMeshContainer*, "", "StaticBatchedMeshContainer");
