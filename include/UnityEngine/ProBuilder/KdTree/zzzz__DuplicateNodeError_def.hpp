#pragma once
// IWYU pragma private; include "UnityEngine\ProBuilder\KdTree\DuplicateNodeError.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
CORDL_MODULE_EXPORT(DuplicateNodeError)
// Forward declare root types
namespace UnityEngine::ProBuilder::KdTree {
class DuplicateNodeError;
}
// Write type traits
MARK_REF_T(::UnityEngine::ProBuilder::KdTree::DuplicateNodeError*);
DEFINE_IL2CPP_CLASS(::UnityEngine::ProBuilder::KdTree::DuplicateNodeError*, "UnityEngine.ProBuilder.KdTree", "DuplicateNodeError");
// Dependencies System.Exception
namespace UnityEngine::ProBuilder::KdTree {
// Is value type: false
// CS Name: UnityEngine.ProBuilder.KdTree.DuplicateNodeError
class CORDL_TYPE DuplicateNodeError : public ::System::Exception {
public:
  // Declarations
  static inline ::UnityEngine::ProBuilder::KdTree::DuplicateNodeError* New_ctor();

  /// @brief Method .ctor, addr 0x66a9edc, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DuplicateNodeError();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DuplicateNodeError", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DuplicateNodeError(DuplicateNodeError&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DuplicateNodeError", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DuplicateNodeError(DuplicateNodeError const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22681 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::ProBuilder::KdTree::DuplicateNodeError) == 0x90, "Size mismatch!");

} // namespace UnityEngine::ProBuilder::KdTree
