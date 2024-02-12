#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ArticulationJacobian)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace UnityEngine {
struct ArticulationJacobian;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ArticulationJacobian);
// Type: UnityEngine::ArticulationJacobian
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13912))
// CS Name: ::UnityEngine::ArticulationJacobian
struct CORDL_TYPE ArticulationJacobian {
public:
  // Declarations
  __declspec(property(get = get_Item, put = set_Item)) float_t Item[];

  __declspec(property(get = get_rows, put = set_rows)) int32_t rows;

  __declspec(property(get = get_columns, put = set_columns)) int32_t columns;

  __declspec(property(get = get_elements, put = set_elements))::System::Collections::Generic::List_1<float_t>* elements;

  /// @brief Method .ctor, addr 0x2d2a158, size 0x114, virtual false, abstract: false, final false
  inline void _ctor(int32_t rows, int32_t cols);

  /// @brief Method get_Item, addr 0x2d2a26c, size 0xc0, virtual false, abstract: false, final false
  inline float_t get_Item(int32_t row, int32_t col);

  /// @brief Method set_Item, addr 0x2d2a32c, size 0xd0, virtual false, abstract: false, final false
  inline void set_Item(int32_t row, int32_t col, float_t value);

  /// @brief Method get_rows, addr 0x2d2a3fc, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_rows();

  /// @brief Method set_rows, addr 0x2d2a404, size 0x8, virtual false, abstract: false, final false
  inline void set_rows(int32_t value);

  /// @brief Method get_columns, addr 0x2d2a40c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_columns();

  /// @brief Method set_columns, addr 0x2d2a414, size 0x8, virtual false, abstract: false, final false
  inline void set_columns(int32_t value);

  /// @brief Method get_elements, addr 0x2d2a41c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<float_t>* get_elements();

  /// @brief Method set_elements, addr 0x2d2a424, size 0x8, virtual false, abstract: false, final false
  inline void set_elements(::System::Collections::Generic::List_1<float_t>* value);

  // Ctor Parameters [CppParam { name: "rowsCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "colsCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "matrixData", ty: "::System::Collections::Generic::List_1<float_t>*", modifiers: "", def_value: None }]
  constexpr ArticulationJacobian(int32_t rowsCount, int32_t colsCount, ::System::Collections::Generic::List_1<float_t>* matrixData) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr ArticulationJacobian();

  /// @brief Field rowsCount, offset: 0x0, size: 0x4, def value: None
  int32_t rowsCount;

  /// @brief Field colsCount, offset: 0x4, size: 0x4, def value: None
  int32_t colsCount;

  /// @brief Field matrixData, offset: 0x8, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<float_t>* matrixData;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ArticulationJacobian, 0x10>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ArticulationJacobian, rowsCount) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ArticulationJacobian, colsCount) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ArticulationJacobian, matrixData) == 0x8, "Offset mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ArticulationJacobian, "UnityEngine", "ArticulationJacobian");
