#pragma once
// IWYU pragma private; include "System/IO/FileMode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FileMode)
// Forward declare root types
namespace System::IO {
struct FileMode;
}
// Write type traits
MARK_VAL_T(::System::IO::FileMode);
// Dependencies
namespace System::IO {
// Is value type: true
// CS Name: System.IO.FileMode
struct CORDL_TYPE FileMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __FileMode_Unwrapped
  enum struct __FileMode_Unwrapped : int32_t {
    __E_CreateNew = static_cast<int32_t>(0x1),
    __E_Create = static_cast<int32_t>(0x2),
    __E_Open = static_cast<int32_t>(0x3),
    __E_OpenOrCreate = static_cast<int32_t>(0x4),
    __E_Truncate = static_cast<int32_t>(0x5),
    __E_Append = static_cast<int32_t>(0x6),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __FileMode_Unwrapped() const noexcept {
    return static_cast<__FileMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr FileMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr FileMode(int32_t value__) noexcept;

  /// @brief Field Append value: I32(6)
  static ::System::IO::FileMode const Append;

  /// @brief Field Create value: I32(2)
  static ::System::IO::FileMode const Create;

  /// @brief Field CreateNew value: I32(1)
  static ::System::IO::FileMode const CreateNew;

  /// @brief Field Open value: I32(3)
  static ::System::IO::FileMode const Open;

  /// @brief Field OpenOrCreate value: I32(4)
  static ::System::IO::FileMode const OpenOrCreate;

  /// @brief Field Truncate value: I32(5)
  static ::System::IO::FileMode const Truncate;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3843 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::IO::FileMode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::IO::FileMode, 0x4>, "Size mismatch!");

} // namespace System::IO
DEFINE_IL2CPP_ARG_TYPE(::System::IO::FileMode, "System.IO", "FileMode");
