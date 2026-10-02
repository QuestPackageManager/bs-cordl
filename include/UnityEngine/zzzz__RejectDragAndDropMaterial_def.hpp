#pragma once
// IWYU pragma private; include "UnityEngine/RejectDragAndDropMaterial.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(RejectDragAndDropMaterial)
// Forward declare root types
namespace UnityEngine {
class RejectDragAndDropMaterial;
}
// Write type traits
MARK_REF_T(::UnityEngine::RejectDragAndDropMaterial*);
DEFINE_IL2CPP_CLASS(::UnityEngine::RejectDragAndDropMaterial*, "UnityEngine", "RejectDragAndDropMaterial");
// [AttributeUsage((System.AttributeTargets)4)]
// [VisibleToOtherModules]
// Dependencies System.Attribute
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.RejectDragAndDropMaterial
class CORDL_TYPE RejectDragAndDropMaterial : public ::System::Attribute {
public:
  // Declarations
  static inline ::UnityEngine::RejectDragAndDropMaterial* New_ctor();

  /// @brief Method .ctor, addr 0x7014a44, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RejectDragAndDropMaterial();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RejectDragAndDropMaterial", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RejectDragAndDropMaterial(RejectDragAndDropMaterial&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RejectDragAndDropMaterial", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RejectDragAndDropMaterial(RejectDragAndDropMaterial const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23526 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::RejectDragAndDropMaterial) == 0x10, "Size mismatch!");

} // namespace UnityEngine
