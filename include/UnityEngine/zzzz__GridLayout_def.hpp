#pragma once
// IWYU pragma private; include "UnityEngine\GridLayout.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Behaviour_def.hpp"
CORDL_MODULE_EXPORT(GridLayout)
// Forward declare root types
namespace UnityEngine {
class GridLayout;
}
// Write type traits
MARK_REF_T(::UnityEngine::GridLayout*);
DEFINE_IL2CPP_CLASS(::UnityEngine::GridLayout*, "UnityEngine", "GridLayout");
// Dependencies UnityEngine.Behaviour
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.GridLayout
class CORDL_TYPE GridLayout : public ::UnityEngine::Behaviour {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GridLayout();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GridLayout", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GridLayout(GridLayout&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GridLayout", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GridLayout(GridLayout const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23420 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::GridLayout) == 0x18, "Size mismatch!");

} // namespace UnityEngine
