#pragma once
// IWYU pragma private; include "System/Data/Range.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Range)
// Forward declare root types
namespace System::Data {
struct Range;
}
// Write type traits
MARK_VAL_T(::System::Data::Range);
// Dependencies
namespace System::Data {
// Is value type: true
// CS Name: System.Data.Range
struct CORDL_TYPE Range {
public:
  // Declarations
  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_IsNull)) bool IsNull;

  __declspec(property(get = get_Min)) int32_t Min;

  /// @brief Method CheckNull, addr 0x4183238, size 0x38, virtual false, abstract: false, final false
  inline void CheckNull();

  /// @brief Method .ctor, addr 0x41831ec, size 0x4c, virtual false, abstract: false, final false
  inline void _ctor(int32_t min, int32_t max);

  /// @brief Method get_Count, addr 0x417dc40, size 0x20, virtual false, abstract: false, final false
  inline int32_t get_Count();

  /// @brief Method get_IsNull, addr 0x417d790, size 0x10, virtual false, abstract: false, final false
  inline bool get_IsNull();

  /// @brief Method get_Min, addr 0x417dc60, size 0x18, virtual false, abstract: false, final false
  inline int32_t get_Min();

  // Ctor Parameters []
  // @brief default ctor
  constexpr Range();

  // Ctor Parameters [CppParam { name: "_min", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_max", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_isNotNull",
  // ty: "bool", modifiers: "", def_value: None }]
  constexpr Range(int32_t _min, int32_t _max, bool _isNotNull) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11445 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xc };

  /// @brief Field _min, offset: 0x0, size: 0x4, def value: None
  int32_t _min;

  /// @brief Field _max, offset: 0x4, size: 0x4, def value: None
  int32_t _max;

  /// @brief Field _isNotNull, offset: 0x8, size: 0x1, def value: None
  bool _isNotNull;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Data::Range, _min) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Data::Range, _max) == 0x4, "Offset mismatch!");

static_assert(offsetof(::System::Data::Range, _isNotNull) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Data::Range, 0xc>, "Size mismatch!");

} // namespace System::Data
DEFINE_IL2CPP_ARG_TYPE(::System::Data::Range, "System.Data", "Range");
