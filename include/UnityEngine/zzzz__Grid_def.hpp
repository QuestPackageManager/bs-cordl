#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__GridLayout_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
CORDL_MODULE_EXPORT(Grid)
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
class Grid;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Grid);
// Type: UnityEngine::Grid
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::Grid*
class CORDL_TYPE Grid : public ::UnityEngine::GridLayout {
public:
  // Declarations
  __declspec(property(get = get_cellSize))::UnityEngine::Vector3 cellSize;

  static inline ::UnityEngine::Grid* New_ctor();

  /// @brief Method .ctor, addr 0x2e4e8b0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_cellSize, addr 0x2e4e810, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_cellSize();

  /// @brief Method get_cellSize_Injected, addr 0x2e4e86c, size 0x44, virtual false, abstract: false, final false
  inline void get_cellSize_Injected(ByRef<::UnityEngine::Vector3> ret);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Grid();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Grid", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Grid(Grid&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Grid", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Grid(Grid const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Grid, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::Grid);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Grid*, "UnityEngine", "Grid");
