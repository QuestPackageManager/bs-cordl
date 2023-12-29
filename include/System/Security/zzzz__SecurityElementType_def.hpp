#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SecurityElementType)
// Forward declare root types
namespace System::Security {
struct SecurityElementType;
}
// Write type traits
MARK_VAL_T(::System::Security::SecurityElementType);
// Type: System.Security::SecurityElementType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Security {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2882))
// CS Name: ::System.Security::SecurityElementType
struct CORDL_TYPE SecurityElementType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __SecurityElementType_Unwrapped
  enum struct __SecurityElementType_Unwrapped : int32_t {
    __E_Regular = static_cast<int32_t>(0x0),
    __E_Format = static_cast<int32_t>(0x1),
    __E_Comment = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __SecurityElementType_Unwrapped() const noexcept {
    return static_cast<__SecurityElementType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr SecurityElementType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr SecurityElementType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Regular value: static_cast<int32_t>(0x0)
  static ::System::Security::SecurityElementType const Regular;

  /// @brief Field Format value: static_cast<int32_t>(0x1)
  static ::System::Security::SecurityElementType const Format;

  /// @brief Field Comment value: static_cast<int32_t>(0x2)
  static ::System::Security::SecurityElementType const Comment;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::SecurityElementType, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Security::SecurityElementType, value__) == 0x0, "Offset mismatch!");

} // namespace System::Security
DEFINE_IL2CPP_ARG_TYPE(::System::Security::SecurityElementType, "System.Security", "SecurityElementType");
