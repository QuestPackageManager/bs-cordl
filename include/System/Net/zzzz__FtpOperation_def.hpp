#pragma once
// IWYU pragma private; include "System/Net/FtpOperation.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FtpOperation)
// Forward declare root types
namespace System::Net {
struct FtpOperation;
}
// Write type traits
MARK_VAL_T(::System::Net::FtpOperation);
// Dependencies
namespace System::Net {
// Is value type: true
// CS Name: System.Net.FtpOperation
struct CORDL_TYPE FtpOperation {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __FtpOperation_Unwrapped
  enum struct __FtpOperation_Unwrapped : int32_t {
    __E_DownloadFile = static_cast<int32_t>(0x0),
    __E_ListDirectory = static_cast<int32_t>(0x1),
    __E_ListDirectoryDetails = static_cast<int32_t>(0x2),
    __E_UploadFile = static_cast<int32_t>(0x3),
    __E_UploadFileUnique = static_cast<int32_t>(0x4),
    __E_AppendFile = static_cast<int32_t>(0x5),
    __E_DeleteFile = static_cast<int32_t>(0x6),
    __E_GetDateTimestamp = static_cast<int32_t>(0x7),
    __E_GetFileSize = static_cast<int32_t>(0x8),
    __E_Rename = static_cast<int32_t>(0x9),
    __E_MakeDirectory = static_cast<int32_t>(0xa),
    __E_RemoveDirectory = static_cast<int32_t>(0xb),
    __E_PrintWorkingDirectory = static_cast<int32_t>(0xc),
    __E_Other = static_cast<int32_t>(0xd),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __FtpOperation_Unwrapped() const noexcept {
    return static_cast<__FtpOperation_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr FtpOperation();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr FtpOperation(int32_t value__) noexcept;

  /// @brief Field AppendFile value: I32(5)
  static ::System::Net::FtpOperation const AppendFile;

  /// @brief Field DeleteFile value: I32(6)
  static ::System::Net::FtpOperation const DeleteFile;

  /// @brief Field DownloadFile value: I32(0)
  static ::System::Net::FtpOperation const DownloadFile;

  /// @brief Field GetDateTimestamp value: I32(7)
  static ::System::Net::FtpOperation const GetDateTimestamp;

  /// @brief Field GetFileSize value: I32(8)
  static ::System::Net::FtpOperation const GetFileSize;

  /// @brief Field ListDirectory value: I32(1)
  static ::System::Net::FtpOperation const ListDirectory;

  /// @brief Field ListDirectoryDetails value: I32(2)
  static ::System::Net::FtpOperation const ListDirectoryDetails;

  /// @brief Field MakeDirectory value: I32(10)
  static ::System::Net::FtpOperation const MakeDirectory;

  /// @brief Field Other value: I32(13)
  static ::System::Net::FtpOperation const Other;

  /// @brief Field PrintWorkingDirectory value: I32(12)
  static ::System::Net::FtpOperation const PrintWorkingDirectory;

  /// @brief Field RemoveDirectory value: I32(11)
  static ::System::Net::FtpOperation const RemoveDirectory;

  /// @brief Field Rename value: I32(9)
  static ::System::Net::FtpOperation const Rename;

  /// @brief Field UploadFile value: I32(3)
  static ::System::Net::FtpOperation const UploadFile;

  /// @brief Field UploadFileUnique value: I32(4)
  static ::System::Net::FtpOperation const UploadFileUnique;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11439 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Net::FtpOperation, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::FtpOperation, 0x4>, "Size mismatch!");

} // namespace System::Net
DEFINE_IL2CPP_ARG_TYPE(::System::Net::FtpOperation, "System.Net", "FtpOperation");
