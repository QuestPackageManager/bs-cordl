#pragma once
// IWYU pragma private; include "System/Net/FtpMethodFlags.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FtpMethodFlags)
// Forward declare root types
namespace System::Net {
struct FtpMethodFlags;
}
// Write type traits
MARK_VAL_T(::System::Net::FtpMethodFlags);
// Dependencies
namespace System::Net {
// Is value type: true
// CS Name: System.Net.FtpMethodFlags
struct CORDL_TYPE FtpMethodFlags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __FtpMethodFlags_Unwrapped
  enum struct __FtpMethodFlags_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_IsDownload = static_cast<int32_t>(0x1),
    __E_IsUpload = static_cast<int32_t>(0x2),
    __E_TakesParameter = static_cast<int32_t>(0x4),
    __E_MayTakeParameter = static_cast<int32_t>(0x8),
    __E_DoesNotTakeParameter = static_cast<int32_t>(0x10),
    __E_ParameterIsDirectory = static_cast<int32_t>(0x20),
    __E_ShouldParseForResponseUri = static_cast<int32_t>(0x40),
    __E_HasHttpCommand = static_cast<int32_t>(0x80),
    __E_MustChangeWorkingDirectoryToPath = static_cast<int32_t>(0x100),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __FtpMethodFlags_Unwrapped() const noexcept {
    return static_cast<__FtpMethodFlags_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr FtpMethodFlags();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr FtpMethodFlags(int32_t value__) noexcept;

  /// @brief Field DoesNotTakeParameter value: I32(16)
  static ::System::Net::FtpMethodFlags const DoesNotTakeParameter;

  /// @brief Field HasHttpCommand value: I32(128)
  static ::System::Net::FtpMethodFlags const HasHttpCommand;

  /// @brief Field IsDownload value: I32(1)
  static ::System::Net::FtpMethodFlags const IsDownload;

  /// @brief Field IsUpload value: I32(2)
  static ::System::Net::FtpMethodFlags const IsUpload;

  /// @brief Field MayTakeParameter value: I32(8)
  static ::System::Net::FtpMethodFlags const MayTakeParameter;

  /// @brief Field MustChangeWorkingDirectoryToPath value: I32(256)
  static ::System::Net::FtpMethodFlags const MustChangeWorkingDirectoryToPath;

  /// @brief Field None value: I32(0)
  static ::System::Net::FtpMethodFlags const None;

  /// @brief Field ParameterIsDirectory value: I32(32)
  static ::System::Net::FtpMethodFlags const ParameterIsDirectory;

  /// @brief Field ShouldParseForResponseUri value: I32(64)
  static ::System::Net::FtpMethodFlags const ShouldParseForResponseUri;

  /// @brief Field TakesParameter value: I32(4)
  static ::System::Net::FtpMethodFlags const TakesParameter;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9566 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Net::FtpMethodFlags, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::FtpMethodFlags, 0x4>, "Size mismatch!");

} // namespace System::Net
DEFINE_IL2CPP_ARG_TYPE(::System::Net::FtpMethodFlags, "System.Net", "FtpMethodFlags");
