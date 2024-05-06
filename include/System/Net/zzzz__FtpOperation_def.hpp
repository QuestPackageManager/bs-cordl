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
// Type: System.Net::FtpOperation
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: true
// CS Name: ::System.Net::FtpOperation
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

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field AppendFile value: static_cast<int32_t>(0x5)
  static ::System::Net::FtpOperation const AppendFile;

  /// @brief Field DeleteFile value: static_cast<int32_t>(0x6)
  static ::System::Net::FtpOperation const DeleteFile;

  /// @brief Field DownloadFile value: static_cast<int32_t>(0x0)
  static ::System::Net::FtpOperation const DownloadFile;

  /// @brief Field GetDateTimestamp value: static_cast<int32_t>(0x7)
  static ::System::Net::FtpOperation const GetDateTimestamp;

  /// @brief Field GetFileSize value: static_cast<int32_t>(0x8)
  static ::System::Net::FtpOperation const GetFileSize;

  /// @brief Field ListDirectory value: static_cast<int32_t>(0x1)
  static ::System::Net::FtpOperation const ListDirectory;

  /// @brief Field ListDirectoryDetails value: static_cast<int32_t>(0x2)
  static ::System::Net::FtpOperation const ListDirectoryDetails;

  /// @brief Field MakeDirectory value: static_cast<int32_t>(0xa)
  static ::System::Net::FtpOperation const MakeDirectory;

  /// @brief Field Other value: static_cast<int32_t>(0xd)
  static ::System::Net::FtpOperation const Other;

  /// @brief Field PrintWorkingDirectory value: static_cast<int32_t>(0xc)
  static ::System::Net::FtpOperation const PrintWorkingDirectory;

  /// @brief Field RemoveDirectory value: static_cast<int32_t>(0xb)
  static ::System::Net::FtpOperation const RemoveDirectory;

  /// @brief Field Rename value: static_cast<int32_t>(0x9)
  static ::System::Net::FtpOperation const Rename;

  /// @brief Field UploadFile value: static_cast<int32_t>(0x3)
  static ::System::Net::FtpOperation const UploadFile;

  /// @brief Field UploadFileUnique value: static_cast<int32_t>(0x4)
  static ::System::Net::FtpOperation const UploadFileUnique;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::FtpOperation, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Net::FtpOperation, value__) == 0x0, "Offset mismatch!");

} // namespace System::Net
DEFINE_IL2CPP_ARG_TYPE(::System::Net::FtpOperation, "System.Net", "FtpOperation");
