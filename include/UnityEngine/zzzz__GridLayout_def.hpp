#pragma once
// IWYU pragma private; include "UnityEngine/GridLayout.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Behaviour_def.hpp"
CORDL_MODULE_EXPORT(GridLayout)
namespace UnityEngine {
struct Vector3Int;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
class GridLayout;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::GridLayout);
// Dependencies UnityEngine.Behaviour
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.GridLayout
class CORDL_TYPE GridLayout : public ::UnityEngine::Behaviour {
public:
  // Declarations
  /// @brief Method CellToLocal, addr 0x48d47b8, size 0x68, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 CellToLocal(::UnityEngine::Vector3Int cellPosition);

  /// @brief Method CellToLocal_Injected, addr 0x48d4820, size 0x54, virtual false, abstract: false, final false
  inline void CellToLocal_Injected(::ByRef<::UnityEngine::Vector3Int> cellPosition, ::ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method DoNothing, addr 0x48d4874, size 0x4, virtual false, abstract: false, final false
  inline void DoNothing();

  static inline ::UnityEngine::GridLayout* New_ctor();

  /// @brief Method .ctor, addr 0x48d47b0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19051 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::GridLayout, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::GridLayout);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::GridLayout*, "UnityEngine", "GridLayout");
