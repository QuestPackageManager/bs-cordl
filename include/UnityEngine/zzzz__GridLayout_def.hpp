#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Behaviour_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
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
// Type: UnityEngine::GridLayout
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10115))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16016))
// CS Name: ::UnityEngine::GridLayout*
class CORDL_TYPE GridLayout : public ::UnityEngine::Behaviour {
public:
  // Declarations
  /// @brief Method CellToLocal addr 0x2b92aec size 0x68 virtual false final false
  inline ::UnityEngine::Vector3 CellToLocal(::UnityEngine::Vector3Int cellPosition);

  /// @brief Method DoNothing addr 0x2b92ba8 size 0x4 virtual false final false
  inline void DoNothing();

  static inline ::UnityEngine::GridLayout* New_ctor();

  /// @brief Method .ctor addr 0x2b92bac size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method CellToLocal_Injected addr 0x2b92b54 size 0x54 virtual false final false
  inline void CellToLocal_Injected(ByRef<::UnityEngine::Vector3Int> cellPosition, ByRef<::UnityEngine::Vector3> ret);

  // Ctor Parameters [CppParam { name: "", ty: "GridLayout", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GridLayout(GridLayout&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GridLayout", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GridLayout(GridLayout const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GridLayout();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::GridLayout, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::GridLayout);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::GridLayout*, "UnityEngine", "GridLayout");
