#pragma once
// IWYU pragma private; include "System/Data/IndexField.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IndexField)
namespace System::Data {
class DataColumn;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Data {
struct IndexField;
}
// Write type traits
MARK_VAL_T(::System::Data::IndexField);
// Type: System.Data::IndexField
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 25, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Data {
// Is value type: true
// CS Name: ::System.Data::IndexField
struct CORDL_TYPE IndexField {
public:
  // Declarations
  /// @brief Method Equals, addr 0x2cdb774, size 0x88, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x2cdb7fc, size 0x44, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method .ctor, addr 0x2cdb744, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::System::Data::DataColumn* column, bool isDescending);

  /// @brief Method op_Equality, addr 0x2cdb754, size 0x20, virtual false, abstract: false, final false
  static inline bool op_Equality(::System::Data::IndexField if1, ::System::Data::IndexField if2);

  // Ctor Parameters []
  // @brief default ctor
  constexpr IndexField();

  // Ctor Parameters [CppParam { name: "Column", ty: "::System::Data::DataColumn*", modifiers: "", def_value: None }, CppParam { name: "IsDescending", ty: "bool", modifiers: "", def_value: None }]
  constexpr IndexField(::System::Data::DataColumn* Column, bool IsDescending) noexcept;

  /// @brief Field Column, offset: 0x0, size: 0x8, def value: None
  ::System::Data::DataColumn* Column;

  /// @brief Field IsDescending, offset: 0x8, size: 0x1, def value: None
  bool IsDescending;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Data::IndexField, 0x10>, "Size mismatch!");

static_assert(offsetof(::System::Data::IndexField, Column) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Data::IndexField, IsDescending) == 0x8, "Offset mismatch!");

} // namespace System::Data
DEFINE_IL2CPP_ARG_TYPE(::System::Data::IndexField, "System.Data", "IndexField");
