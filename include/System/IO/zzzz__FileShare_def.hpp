#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FileShare)
// Forward declare root types
namespace System::IO {
struct FileShare;
}
// Write type traits
MARK_VAL_T(::System::IO::FileShare);
// Type: System.IO::FileShare
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::IO {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3560))
// CS Name: ::System.IO::FileShare
struct CORDL_TYPE FileShare {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __FileShare_Unwrapped
  enum struct __FileShare_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Read = static_cast<int32_t>(0x1),
    __E_Write = static_cast<int32_t>(0x2),
    __E_ReadWrite = static_cast<int32_t>(0x3),
    __E_Delete = static_cast<int32_t>(0x4),
    __E_Inheritable = static_cast<int32_t>(0x10),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __FileShare_Unwrapped() const noexcept {
    return static_cast<__FileShare_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr FileShare(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr FileShare();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::System::IO::FileShare const None;

  /// @brief Field Read value: static_cast<int32_t>(0x1)
  static ::System::IO::FileShare const Read;

  /// @brief Field Write value: static_cast<int32_t>(0x2)
  static ::System::IO::FileShare const Write;

  /// @brief Field ReadWrite value: static_cast<int32_t>(0x3)
  static ::System::IO::FileShare const ReadWrite;

  /// @brief Field Delete value: static_cast<int32_t>(0x4)
  static ::System::IO::FileShare const Delete;

  /// @brief Field Inheritable value: static_cast<int32_t>(0x10)
  static ::System::IO::FileShare const Inheritable;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::FileShare, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::IO::FileShare, value__) == 0x0, "Offset mismatch!");

} // namespace System::IO
DEFINE_IL2CPP_ARG_TYPE(::System::IO::FileShare, "System.IO", "FileShare");
