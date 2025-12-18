#pragma once
// IWYU pragma private; include "Oculus/Platform/AssetFile.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AssetFile)
namespace Oculus::Platform::Models {
class AssetDetailsList;
}
namespace Oculus::Platform::Models {
class AssetDetails;
}
namespace Oculus::Platform::Models {
class AssetFileDeleteResult;
}
namespace Oculus::Platform::Models {
class AssetFileDownloadCancelResult;
}
namespace Oculus::Platform::Models {
class AssetFileDownloadResult;
}
namespace Oculus::Platform::Models {
class AssetFileDownloadUpdate;
}
namespace Oculus::Platform {
template <typename T> class Message_1_Callback;
}
namespace Oculus::Platform {
template <typename T> class Request_1;
}
// Forward declare root types
namespace Oculus::Platform {
class AssetFile;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::AssetFile);
// Dependencies System.Object
namespace Oculus::Platform {
// Is value type: false
// CS Name: Oculus.Platform.AssetFile
class CORDL_TYPE AssetFile : public ::System::Object {
public:
  // Declarations
  /// @brief Method Delete, addr 0x5c37144, size 0x168, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::AssetFileDeleteResult*>* Delete(uint64_t assetFileID);

  /// @brief Method DeleteById, addr 0x5c372ac, size 0x168, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::AssetFileDeleteResult*>* DeleteById(uint64_t assetFileID);

  /// @brief Method DeleteByName, addr 0x5c37414, size 0x168, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::AssetFileDeleteResult*>* DeleteByName(::StringW assetFileName);

  /// @brief Method Download, addr 0x5c3757c, size 0x168, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::AssetFileDownloadResult*>* Download(uint64_t assetFileID);

  /// @brief Method DownloadById, addr 0x5c376e4, size 0x168, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::AssetFileDownloadResult*>* DownloadById(uint64_t assetFileID);

  /// @brief Method DownloadByName, addr 0x5c3784c, size 0x168, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::AssetFileDownloadResult*>* DownloadByName(::StringW assetFileName);

  /// @brief Method DownloadCancel, addr 0x5c379b4, size 0x168, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::AssetFileDownloadCancelResult*>* DownloadCancel(uint64_t assetFileID);

  /// @brief Method DownloadCancelById, addr 0x5c37b1c, size 0x168, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::AssetFileDownloadCancelResult*>* DownloadCancelById(uint64_t assetFileID);

  /// @brief Method DownloadCancelByName, addr 0x5c37c84, size 0x168, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::AssetFileDownloadCancelResult*>* DownloadCancelByName(::StringW assetFileName);

  /// @brief Method GetList, addr 0x5c37dec, size 0x158, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::AssetDetailsList*>* GetList();

  /// @brief Method SetDownloadUpdateNotificationCallback, addr 0x5c3837c, size 0x7c, virtual false, abstract: false, final false
  static inline void SetDownloadUpdateNotificationCallback(::Oculus::Platform::Message_1_Callback<::Oculus::Platform::Models::AssetFileDownloadUpdate*>* callback);

  /// @brief Method Status, addr 0x5c37f44, size 0x168, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::AssetDetails*>* Status(uint64_t assetFileID);

  /// @brief Method StatusById, addr 0x5c380ac, size 0x168, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::AssetDetails*>* StatusById(uint64_t assetFileID);

  /// @brief Method StatusByName, addr 0x5c38214, size 0x168, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::AssetDetails*>* StatusByName(::StringW assetFileName);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AssetFile();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AssetFile", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AssetFile(AssetFile&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AssetFile", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AssetFile(AssetFile const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17921 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::AssetFile, 0x10>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::AssetFile);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::AssetFile*, "Oculus.Platform", "AssetFile");
