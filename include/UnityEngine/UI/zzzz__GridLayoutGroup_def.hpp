#pragma once
// IWYU pragma private; include "UnityEngine/UI/GridLayoutGroup.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UI/zzzz__LayoutGroup_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GridLayoutGroup)
namespace UnityEngine::UI {
struct GridLayoutGroup_Axis;
}
namespace UnityEngine::UI {
struct GridLayoutGroup_Constraint;
}
namespace UnityEngine::UI {
struct GridLayoutGroup_Corner;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::UI {
struct GridLayoutGroup_Axis;
}
namespace UnityEngine::UI {
struct GridLayoutGroup_Constraint;
}
namespace UnityEngine::UI {
struct GridLayoutGroup_Corner;
}
namespace UnityEngine::UI {
class GridLayoutGroup;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UI::GridLayoutGroup_Axis);
MARK_VAL_T(::UnityEngine::UI::GridLayoutGroup_Constraint);
MARK_VAL_T(::UnityEngine::UI::GridLayoutGroup_Corner);
MARK_REF_PTR_T(::UnityEngine::UI::GridLayoutGroup);
// Dependencies
namespace UnityEngine::UI {
// Is value type: true
// CS Name: UnityEngine.UI.GridLayoutGroup/Corner
struct CORDL_TYPE GridLayoutGroup_Corner {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __GridLayoutGroup_Corner_Unwrapped
  enum struct __GridLayoutGroup_Corner_Unwrapped : int32_t {
    __E_UpperLeft = static_cast<int32_t>(0x0),
    __E_UpperRight = static_cast<int32_t>(0x1),
    __E_LowerLeft = static_cast<int32_t>(0x2),
    __E_LowerRight = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __GridLayoutGroup_Corner_Unwrapped() const noexcept {
    return static_cast<__GridLayoutGroup_Corner_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr GridLayoutGroup_Corner();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr GridLayoutGroup_Corner(int32_t value__) noexcept;

  /// @brief Field LowerLeft value: I32(2)
  static ::UnityEngine::UI::GridLayoutGroup_Corner const LowerLeft;

  /// @brief Field LowerRight value: I32(3)
  static ::UnityEngine::UI::GridLayoutGroup_Corner const LowerRight;

  /// @brief Field UpperLeft value: I32(0)
  static ::UnityEngine::UI::GridLayoutGroup_Corner const UpperLeft;

  /// @brief Field UpperRight value: I32(1)
  static ::UnityEngine::UI::GridLayoutGroup_Corner const UpperRight;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15094 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UI::GridLayoutGroup_Corner, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::GridLayoutGroup_Corner, 0x4>, "Size mismatch!");

} // namespace UnityEngine::UI
// Dependencies
namespace UnityEngine::UI {
// Is value type: true
// CS Name: UnityEngine.UI.GridLayoutGroup/Axis
struct CORDL_TYPE GridLayoutGroup_Axis {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __GridLayoutGroup_Axis_Unwrapped
  enum struct __GridLayoutGroup_Axis_Unwrapped : int32_t {
    __E_Horizontal = static_cast<int32_t>(0x0),
    __E_Vertical = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __GridLayoutGroup_Axis_Unwrapped() const noexcept {
    return static_cast<__GridLayoutGroup_Axis_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr GridLayoutGroup_Axis();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr GridLayoutGroup_Axis(int32_t value__) noexcept;

  /// @brief Field Horizontal value: I32(0)
  static ::UnityEngine::UI::GridLayoutGroup_Axis const Horizontal;

  /// @brief Field Vertical value: I32(1)
  static ::UnityEngine::UI::GridLayoutGroup_Axis const Vertical;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15095 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UI::GridLayoutGroup_Axis, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::GridLayoutGroup_Axis, 0x4>, "Size mismatch!");

} // namespace UnityEngine::UI
// Dependencies
namespace UnityEngine::UI {
// Is value type: true
// CS Name: UnityEngine.UI.GridLayoutGroup/Constraint
struct CORDL_TYPE GridLayoutGroup_Constraint {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __GridLayoutGroup_Constraint_Unwrapped
  enum struct __GridLayoutGroup_Constraint_Unwrapped : int32_t {
    __E_Flexible = static_cast<int32_t>(0x0),
    __E_FixedColumnCount = static_cast<int32_t>(0x1),
    __E_FixedRowCount = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __GridLayoutGroup_Constraint_Unwrapped() const noexcept {
    return static_cast<__GridLayoutGroup_Constraint_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr GridLayoutGroup_Constraint();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr GridLayoutGroup_Constraint(int32_t value__) noexcept;

  /// @brief Field FixedColumnCount value: I32(1)
  static ::UnityEngine::UI::GridLayoutGroup_Constraint const FixedColumnCount;

  /// @brief Field FixedRowCount value: I32(2)
  static ::UnityEngine::UI::GridLayoutGroup_Constraint const FixedRowCount;

  /// @brief Field Flexible value: I32(0)
  static ::UnityEngine::UI::GridLayoutGroup_Constraint const Flexible;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15096 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UI::GridLayoutGroup_Constraint, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::GridLayoutGroup_Constraint, 0x4>, "Size mismatch!");

} // namespace UnityEngine::UI
// Dependencies UnityEngine.UI.GridLayoutGroup::Axis, UnityEngine.UI.GridLayoutGroup::Constraint, UnityEngine.UI.GridLayoutGroup::Corner, UnityEngine.UI.LayoutGroup, UnityEngine.Vector2
namespace UnityEngine::UI {
// Is value type: false
// CS Name: UnityEngine.UI.GridLayoutGroup
class CORDL_TYPE GridLayoutGroup : public ::UnityEngine::UI::LayoutGroup {
public:
  // Declarations
  using Axis = ::UnityEngine::UI::GridLayoutGroup_Axis;

  using Constraint = ::UnityEngine::UI::GridLayoutGroup_Constraint;

  using Corner = ::UnityEngine::UI::GridLayoutGroup_Corner;

  __declspec(property(get = get_cellSize, put = set_cellSize)) ::UnityEngine::Vector2 cellSize;

  __declspec(property(get = get_constraint, put = set_constraint)) ::UnityEngine::UI::GridLayoutGroup_Constraint constraint;

  __declspec(property(get = get_constraintCount, put = set_constraintCount)) int32_t constraintCount;

  /// @brief Field m_CellSize, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CellSize, put = __cordl_internal_set_m_CellSize)) ::UnityEngine::Vector2 m_CellSize;

  /// @brief Field m_Constraint, offset 0x78, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Constraint, put = __cordl_internal_set_m_Constraint)) ::UnityEngine::UI::GridLayoutGroup_Constraint m_Constraint;

  /// @brief Field m_ConstraintCount, offset 0x7c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ConstraintCount, put = __cordl_internal_set_m_ConstraintCount)) int32_t m_ConstraintCount;

  /// @brief Field m_Spacing, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Spacing, put = __cordl_internal_set_m_Spacing)) ::UnityEngine::Vector2 m_Spacing;

  /// @brief Field m_StartAxis, offset 0x64, size 0x4
  __declspec(property(get = __cordl_internal_get_m_StartAxis, put = __cordl_internal_set_m_StartAxis)) ::UnityEngine::UI::GridLayoutGroup_Axis m_StartAxis;

  /// @brief Field m_StartCorner, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get_m_StartCorner, put = __cordl_internal_set_m_StartCorner)) ::UnityEngine::UI::GridLayoutGroup_Corner m_StartCorner;

  __declspec(property(get = get_spacing, put = set_spacing)) ::UnityEngine::Vector2 spacing;

  __declspec(property(get = get_startAxis, put = set_startAxis)) ::UnityEngine::UI::GridLayoutGroup_Axis startAxis;

  __declspec(property(get = get_startCorner, put = set_startCorner)) ::UnityEngine::UI::GridLayoutGroup_Corner startCorner;

  /// @brief Method CalculateLayoutInputHorizontal, addr 0x4ac5788, size 0x1cc, virtual true, abstract: false, final false
  inline void CalculateLayoutInputHorizontal();

  /// @brief Method CalculateLayoutInputVertical, addr 0x4ac5d8c, size 0x208, virtual true, abstract: false, final false
  inline void CalculateLayoutInputVertical();

  static inline ::UnityEngine::UI::GridLayoutGroup* New_ctor();

  /// @brief Method SetCellsAlongAxis, addr 0x4ac6030, size 0x78c, virtual false, abstract: false, final false
  inline void SetCellsAlongAxis(int32_t axis);

  /// @brief Method SetLayoutHorizontal, addr 0x4ac6028, size 0x8, virtual true, abstract: false, final false
  inline void SetLayoutHorizontal();

  /// @brief Method SetLayoutVertical, addr 0x4ac67bc, size 0x8, virtual true, abstract: false, final false
  inline void SetLayoutVertical();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_m_CellSize() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get_m_CellSize();

  constexpr ::UnityEngine::UI::GridLayoutGroup_Constraint const& __cordl_internal_get_m_Constraint() const;

  constexpr ::UnityEngine::UI::GridLayoutGroup_Constraint& __cordl_internal_get_m_Constraint();

  constexpr int32_t const& __cordl_internal_get_m_ConstraintCount() const;

  constexpr int32_t& __cordl_internal_get_m_ConstraintCount();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_m_Spacing() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get_m_Spacing();

  constexpr ::UnityEngine::UI::GridLayoutGroup_Axis const& __cordl_internal_get_m_StartAxis() const;

  constexpr ::UnityEngine::UI::GridLayoutGroup_Axis& __cordl_internal_get_m_StartAxis();

  constexpr ::UnityEngine::UI::GridLayoutGroup_Corner const& __cordl_internal_get_m_StartCorner() const;

  constexpr ::UnityEngine::UI::GridLayoutGroup_Corner& __cordl_internal_get_m_StartCorner();

  constexpr void __cordl_internal_set_m_CellSize(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set_m_Constraint(::UnityEngine::UI::GridLayoutGroup_Constraint value);

  constexpr void __cordl_internal_set_m_ConstraintCount(int32_t value);

  constexpr void __cordl_internal_set_m_Spacing(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set_m_StartAxis(::UnityEngine::UI::GridLayoutGroup_Axis value);

  constexpr void __cordl_internal_set_m_StartCorner(::UnityEngine::UI::GridLayoutGroup_Corner value);

  /// @brief Method .ctor, addr 0x4ac5604, size 0x68, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_cellSize, addr 0x4ac5460, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_cellSize();

  /// @brief Method get_constraint, addr 0x4ac5538, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UI::GridLayoutGroup_Constraint get_constraint();

  /// @brief Method get_constraintCount, addr 0x4ac559c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_constraintCount();

  /// @brief Method get_spacing, addr 0x4ac54cc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_spacing();

  /// @brief Method get_startAxis, addr 0x4ac53fc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UI::GridLayoutGroup_Axis get_startAxis();

  /// @brief Method get_startCorner, addr 0x4ac5398, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UI::GridLayoutGroup_Corner get_startCorner();

  /// @brief Method set_cellSize, addr 0x4ac5468, size 0x64, virtual false, abstract: false, final false
  inline void set_cellSize(::UnityEngine::Vector2 value);

  /// @brief Method set_constraint, addr 0x4ac5540, size 0x5c, virtual false, abstract: false, final false
  inline void set_constraint(::UnityEngine::UI::GridLayoutGroup_Constraint value);

  /// @brief Method set_constraintCount, addr 0x4ac55a4, size 0x60, virtual false, abstract: false, final false
  inline void set_constraintCount(int32_t value);

  /// @brief Method set_spacing, addr 0x4ac54d4, size 0x64, virtual false, abstract: false, final false
  inline void set_spacing(::UnityEngine::Vector2 value);

  /// @brief Method set_startAxis, addr 0x4ac5404, size 0x5c, virtual false, abstract: false, final false
  inline void set_startAxis(::UnityEngine::UI::GridLayoutGroup_Axis value);

  /// @brief Method set_startCorner, addr 0x4ac53a0, size 0x5c, virtual false, abstract: false, final false
  inline void set_startCorner(::UnityEngine::UI::GridLayoutGroup_Corner value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GridLayoutGroup();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GridLayoutGroup", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GridLayoutGroup(GridLayoutGroup&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GridLayoutGroup", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GridLayoutGroup(GridLayoutGroup const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15097 };

  /// @brief Field m_StartCorner, offset: 0x60, size: 0x4, def value: None
  ::UnityEngine::UI::GridLayoutGroup_Corner ___m_StartCorner;

  /// @brief Field m_StartAxis, offset: 0x64, size: 0x4, def value: None
  ::UnityEngine::UI::GridLayoutGroup_Axis ___m_StartAxis;

  /// @brief Field m_CellSize, offset: 0x68, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___m_CellSize;

  /// @brief Field m_Spacing, offset: 0x70, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___m_Spacing;

  /// @brief Field m_Constraint, offset: 0x78, size: 0x4, def value: None
  ::UnityEngine::UI::GridLayoutGroup_Constraint ___m_Constraint;

  /// @brief Field m_ConstraintCount, offset: 0x7c, size: 0x4, def value: None
  int32_t ___m_ConstraintCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UI::GridLayoutGroup, ___m_StartCorner) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::GridLayoutGroup, ___m_StartAxis) == 0x64, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::GridLayoutGroup, ___m_CellSize) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::GridLayoutGroup, ___m_Spacing) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::GridLayoutGroup, ___m_Constraint) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::GridLayoutGroup, ___m_ConstraintCount) == 0x7c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::GridLayoutGroup, 0x80>, "Size mismatch!");

} // namespace UnityEngine::UI
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::GridLayoutGroup_Axis, "UnityEngine.UI", "GridLayoutGroup/Axis");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::GridLayoutGroup_Constraint, "UnityEngine.UI", "GridLayoutGroup/Constraint");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::GridLayoutGroup_Corner, "UnityEngine.UI", "GridLayoutGroup/Corner");
NEED_NO_BOX(::UnityEngine::UI::GridLayoutGroup);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::GridLayoutGroup*, "UnityEngine.UI", "GridLayoutGroup");
