#pragma once
// IWYU pragma private; include "GlobalNamespace/StaticBatchedMeshContainer.hpp"
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
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::StaticBatchedMeshContainer*
class CORDL_TYPE StaticBatchedMeshContainer : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  static inline ::GlobalNamespace::StaticBatchedMeshContainer* New_ctor();

  /// @brief Method .ctor, addr 0x2269ba4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StaticBatchedMeshContainer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StaticBatchedMeshContainer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StaticBatchedMeshContainer(StaticBatchedMeshContainer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StaticBatchedMeshContainer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StaticBatchedMeshContainer(StaticBatchedMeshContainer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19157 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::StaticBatchedMeshContainer, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::StaticBatchedMeshContainer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StaticBatchedMeshContainer*, "", "StaticBatchedMeshContainer");
