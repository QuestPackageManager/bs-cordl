#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UI/zzzz__GridLayoutGroup_def.hpp"
#include "UnityEngine/UI/zzzz__LayoutGroup_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GridLayoutGroup)
namespace UnityEngine::UI {
struct __GridLayoutGroup__Constraint;
}
namespace UnityEngine::UI {
struct __GridLayoutGroup__Corner;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine::UI {
struct __GridLayoutGroup__Axis;
}
// Forward declare root types
namespace UnityEngine::UI {
struct __GridLayoutGroup__Axis;
}
namespace UnityEngine::UI {
struct __GridLayoutGroup__Constraint;
}
namespace UnityEngine::UI {
struct __GridLayoutGroup__Corner;
}
namespace UnityEngine::UI {
class GridLayoutGroup;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UI::__GridLayoutGroup__Axis);
MARK_VAL_T(::UnityEngine::UI::__GridLayoutGroup__Constraint);
MARK_VAL_T(::UnityEngine::UI::__GridLayoutGroup__Corner);
MARK_REF_PTR_T(::UnityEngine::UI::GridLayoutGroup);
// Type: ::Corner
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UI {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13083))
// CS Name: ::GridLayoutGroup::Corner
struct CORDL_TYPE __GridLayoutGroup__Corner {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____GridLayoutGroup__Corner_Unwrapped
  enum struct ____GridLayoutGroup__Corner_Unwrapped : int32_t {
    __E_UpperLeft = static_cast<int32_t>(0x0),
    __E_UpperRight = static_cast<int32_t>(0x1),
    __E_LowerLeft = static_cast<int32_t>(0x2),
    __E_LowerRight = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____GridLayoutGroup__Corner_Unwrapped() const noexcept {
    return static_cast<____GridLayoutGroup__Corner_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __GridLayoutGroup__Corner(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __GridLayoutGroup__Corner();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field UpperLeft value: static_cast<int32_t>(0x0)
  static ::UnityEngine::UI::__GridLayoutGroup__Corner const UpperLeft;

  /// @brief Field UpperRight value: static_cast<int32_t>(0x1)
  static ::UnityEngine::UI::__GridLayoutGroup__Corner const UpperRight;

  /// @brief Field LowerLeft value: static_cast<int32_t>(0x2)
  static ::UnityEngine::UI::__GridLayoutGroup__Corner const LowerLeft;

  /// @brief Field LowerRight value: static_cast<int32_t>(0x3)
  static ::UnityEngine::UI::__GridLayoutGroup__Corner const LowerRight;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::__GridLayoutGroup__Corner, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UI::__GridLayoutGroup__Corner, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::UI
// Type: ::Axis
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UI {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13084))
// CS Name: ::GridLayoutGroup::Axis
struct CORDL_TYPE __GridLayoutGroup__Axis {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____GridLayoutGroup__Axis_Unwrapped
  enum struct ____GridLayoutGroup__Axis_Unwrapped : int32_t {
    __E_Horizontal = static_cast<int32_t>(0x0),
    __E_Vertical = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____GridLayoutGroup__Axis_Unwrapped() const noexcept {
    return static_cast<____GridLayoutGroup__Axis_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __GridLayoutGroup__Axis(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __GridLayoutGroup__Axis();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Horizontal value: static_cast<int32_t>(0x0)
  static ::UnityEngine::UI::__GridLayoutGroup__Axis const Horizontal;

  /// @brief Field Vertical value: static_cast<int32_t>(0x1)
  static ::UnityEngine::UI::__GridLayoutGroup__Axis const Vertical;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::__GridLayoutGroup__Axis, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UI::__GridLayoutGroup__Axis, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::UI
// Type: ::Constraint
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UI {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13085))
// CS Name: ::GridLayoutGroup::Constraint
struct CORDL_TYPE __GridLayoutGroup__Constraint {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____GridLayoutGroup__Constraint_Unwrapped
  enum struct ____GridLayoutGroup__Constraint_Unwrapped : int32_t {
    __E_Flexible = static_cast<int32_t>(0x0),
    __E_FixedColumnCount = static_cast<int32_t>(0x1),
    __E_FixedRowCount = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____GridLayoutGroup__Constraint_Unwrapped() const noexcept {
    return static_cast<____GridLayoutGroup__Constraint_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __GridLayoutGroup__Constraint(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __GridLayoutGroup__Constraint();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Flexible value: static_cast<int32_t>(0x0)
  static ::UnityEngine::UI::__GridLayoutGroup__Constraint const Flexible;

  /// @brief Field FixedColumnCount value: static_cast<int32_t>(0x1)
  static ::UnityEngine::UI::__GridLayoutGroup__Constraint const FixedColumnCount;

  /// @brief Field FixedRowCount value: static_cast<int32_t>(0x2)
  static ::UnityEngine::UI::__GridLayoutGroup__Constraint const FixedRowCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::__GridLayoutGroup__Constraint, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UI::__GridLayoutGroup__Constraint, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::UI
// Type: UnityEngine.UI::GridLayoutGroup
// SizeInfo { instance_size: 120, native_size: -1, calculated_instance_size: 120, calculated_native_size: 120, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13084)), TypeDefinitionIndex(TypeDefinitionIndex(13096)), TypeDefinitionIndex(TypeDefinitionIndex(13083)),
// TypeDefinitionIndex(TypeDefinitionIndex(10170)), TypeDefinitionIndex(TypeDefinitionIndex(13085))} Self: TypeDefinitionIndex(TypeDefinitionIndex(13086)) CS Name: ::UnityEngine.UI::GridLayoutGroup*
class CORDL_TYPE GridLayoutGroup : public ::UnityEngine::UI::LayoutGroup {
public:
  // Declarations
  using Constraint = ::UnityEngine::UI::__GridLayoutGroup__Constraint;

  using Axis = ::UnityEngine::UI::__GridLayoutGroup__Axis;

  using Corner = ::UnityEngine::UI::__GridLayoutGroup__Corner;

  /// @brief Field m_StartCorner, offset 0x58, size 0x4
  __declspec(property(get = __get_m_StartCorner, put = __set_m_StartCorner))::UnityEngine::UI::__GridLayoutGroup__Corner m_StartCorner;

  /// @brief Field m_StartAxis, offset 0x5c, size 0x4
  __declspec(property(get = __get_m_StartAxis, put = __set_m_StartAxis))::UnityEngine::UI::__GridLayoutGroup__Axis m_StartAxis;

  /// @brief Field m_CellSize, offset 0x60, size 0x8
  __declspec(property(get = __get_m_CellSize, put = __set_m_CellSize))::UnityEngine::Vector2 m_CellSize;

  /// @brief Field m_Spacing, offset 0x68, size 0x8
  __declspec(property(get = __get_m_Spacing, put = __set_m_Spacing))::UnityEngine::Vector2 m_Spacing;

  /// @brief Field m_Constraint, offset 0x70, size 0x4
  __declspec(property(get = __get_m_Constraint, put = __set_m_Constraint))::UnityEngine::UI::__GridLayoutGroup__Constraint m_Constraint;

  /// @brief Field m_ConstraintCount, offset 0x74, size 0x4
  __declspec(property(get = __get_m_ConstraintCount, put = __set_m_ConstraintCount)) int32_t m_ConstraintCount;

  __declspec(property(get = get_startCorner, put = set_startCorner))::UnityEngine::UI::__GridLayoutGroup__Corner startCorner;

  __declspec(property(get = get_startAxis, put = set_startAxis))::UnityEngine::UI::__GridLayoutGroup__Axis startAxis;

  __declspec(property(get = get_cellSize, put = set_cellSize))::UnityEngine::Vector2 cellSize;

  __declspec(property(get = get_spacing, put = set_spacing))::UnityEngine::Vector2 spacing;

  __declspec(property(get = get_constraint, put = set_constraint))::UnityEngine::UI::__GridLayoutGroup__Constraint constraint;

  __declspec(property(get = get_constraintCount, put = set_constraintCount)) int32_t constraintCount;

  constexpr ::UnityEngine::UI::__GridLayoutGroup__Corner& __get_m_StartCorner();

  constexpr ::UnityEngine::UI::__GridLayoutGroup__Corner const& __get_m_StartCorner() const;

  constexpr void __set_m_StartCorner(::UnityEngine::UI::__GridLayoutGroup__Corner value);

  constexpr ::UnityEngine::UI::__GridLayoutGroup__Axis& __get_m_StartAxis();

  constexpr ::UnityEngine::UI::__GridLayoutGroup__Axis const& __get_m_StartAxis() const;

  constexpr void __set_m_StartAxis(::UnityEngine::UI::__GridLayoutGroup__Axis value);

  constexpr ::UnityEngine::Vector2& __get_m_CellSize();

  constexpr ::UnityEngine::Vector2 const& __get_m_CellSize() const;

  constexpr void __set_m_CellSize(::UnityEngine::Vector2 value);

  constexpr ::UnityEngine::Vector2& __get_m_Spacing();

  constexpr ::UnityEngine::Vector2 const& __get_m_Spacing() const;

  constexpr void __set_m_Spacing(::UnityEngine::Vector2 value);

  constexpr ::UnityEngine::UI::__GridLayoutGroup__Constraint& __get_m_Constraint();

  constexpr ::UnityEngine::UI::__GridLayoutGroup__Constraint const& __get_m_Constraint() const;

  constexpr void __set_m_Constraint(::UnityEngine::UI::__GridLayoutGroup__Constraint value);

  constexpr int32_t& __get_m_ConstraintCount();

  constexpr int32_t const& __get_m_ConstraintCount() const;

  constexpr void __set_m_ConstraintCount(int32_t value);

  /// @brief Method get_startCorner addr 0x2c0c74c size 0x8 virtual false final false
  inline ::UnityEngine::UI::__GridLayoutGroup__Corner get_startCorner();

  /// @brief Method set_startCorner addr 0x2c0c754 size 0x5c virtual false final false
  inline void set_startCorner(::UnityEngine::UI::__GridLayoutGroup__Corner value);

  /// @brief Method get_startAxis addr 0x2c0c7b0 size 0x8 virtual false final false
  inline ::UnityEngine::UI::__GridLayoutGroup__Axis get_startAxis();

  /// @brief Method set_startAxis addr 0x2c0c7b8 size 0x5c virtual false final false
  inline void set_startAxis(::UnityEngine::UI::__GridLayoutGroup__Axis value);

  /// @brief Method get_cellSize addr 0x2c0c814 size 0x8 virtual false final false
  inline ::UnityEngine::Vector2 get_cellSize();

  /// @brief Method set_cellSize addr 0x2c0c81c size 0x64 virtual false final false
  inline void set_cellSize(::UnityEngine::Vector2 value);

  /// @brief Method get_spacing addr 0x2c0c880 size 0x8 virtual false final false
  inline ::UnityEngine::Vector2 get_spacing();

  /// @brief Method set_spacing addr 0x2c0c888 size 0x64 virtual false final false
  inline void set_spacing(::UnityEngine::Vector2 value);

  /// @brief Method get_constraint addr 0x2c0c8ec size 0x8 virtual false final false
  inline ::UnityEngine::UI::__GridLayoutGroup__Constraint get_constraint();

  /// @brief Method set_constraint addr 0x2c0c8f4 size 0x5c virtual false final false
  inline void set_constraint(::UnityEngine::UI::__GridLayoutGroup__Constraint value);

  /// @brief Method get_constraintCount addr 0x2c0c950 size 0x8 virtual false final false
  inline int32_t get_constraintCount();

  /// @brief Method set_constraintCount addr 0x2c0c958 size 0x60 virtual false final false
  inline void set_constraintCount(int32_t value);

  static inline ::UnityEngine::UI::GridLayoutGroup* New_ctor();

  /// @brief Method .ctor addr 0x2c0c9b8 size 0x68 virtual false final false
  inline void _ctor();

  /// @brief Method CalculateLayoutInputHorizontal addr 0x2c0cb4c size 0x1cc virtual true final false
  inline void CalculateLayoutInputHorizontal();

  /// @brief Method CalculateLayoutInputVertical addr 0x2c0d158 size 0x228 virtual true final false
  inline void CalculateLayoutInputVertical();

  /// @brief Method SetLayoutHorizontal addr 0x2c0d414 size 0x8 virtual true final false
  inline void SetLayoutHorizontal();

  /// @brief Method SetLayoutVertical addr 0x2c0d9f4 size 0x8 virtual true final false
  inline void SetLayoutVertical();

  /// @brief Method SetCellsAlongAxis addr 0x2c0d41c size 0x5d8 virtual false final false
  inline void SetCellsAlongAxis(int32_t axis);

  // Ctor Parameters [CppParam { name: "", ty: "GridLayoutGroup", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GridLayoutGroup(GridLayoutGroup&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GridLayoutGroup", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GridLayoutGroup(GridLayoutGroup const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GridLayoutGroup();

public:
  /// @brief Field m_StartCorner, offset: 0x58, size: 0x4, def value: None
  ::UnityEngine::UI::__GridLayoutGroup__Corner ___m_StartCorner;

  /// @brief Field m_StartAxis, offset: 0x5c, size: 0x4, def value: None
  ::UnityEngine::UI::__GridLayoutGroup__Axis ___m_StartAxis;

  /// @brief Field m_CellSize, offset: 0x60, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___m_CellSize;

  /// @brief Field m_Spacing, offset: 0x68, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___m_Spacing;

  /// @brief Field m_Constraint, offset: 0x70, size: 0x4, def value: None
  ::UnityEngine::UI::__GridLayoutGroup__Constraint ___m_Constraint;

  /// @brief Field m_ConstraintCount, offset: 0x74, size: 0x4, def value: None
  int32_t ___m_ConstraintCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::GridLayoutGroup, 0x78>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UI::GridLayoutGroup, ___m_StartCorner) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::GridLayoutGroup, ___m_StartAxis) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::GridLayoutGroup, ___m_CellSize) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::GridLayoutGroup, ___m_Spacing) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::GridLayoutGroup, ___m_Constraint) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::GridLayoutGroup, ___m_ConstraintCount) == 0x74, "Offset mismatch!");

} // namespace UnityEngine::UI
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::__GridLayoutGroup__Axis, "UnityEngine.UI", "GridLayoutGroup/Axis");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::__GridLayoutGroup__Constraint, "UnityEngine.UI", "GridLayoutGroup/Constraint");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::__GridLayoutGroup__Corner, "UnityEngine.UI", "GridLayoutGroup/Corner");
NEED_NO_BOX(::UnityEngine::UI::GridLayoutGroup);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::GridLayoutGroup*, "UnityEngine.UI", "GridLayoutGroup");
