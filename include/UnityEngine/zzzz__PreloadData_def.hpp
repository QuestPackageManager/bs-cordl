#pragma once
// IWYU pragma private; include "UnityEngine/PreloadData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(PreloadData)
// Forward declare root types
namespace UnityEngine {
class PreloadData;
}
// Write type traits
MARK_REF_T(::UnityEngine::PreloadData*);
DEFINE_IL2CPP_CLASS(::UnityEngine::PreloadData*, "UnityEngine", "PreloadData");
// Dependencies UnityEngine.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.PreloadData
class CORDL_TYPE PreloadData : public ::UnityEngine::Object {
public:
  // Declarations
  /// @brief Method PreloadDataDontStripMe, addr 0x6aed014, size 0x4, virtual false, abstract: false, final false
  inline void PreloadDataDontStripMe();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PreloadData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PreloadData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PreloadData(PreloadData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PreloadData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PreloadData(PreloadData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10375 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::PreloadData) == 0x18, "Size mismatch!");

} // namespace UnityEngine
