#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AssetFile)
namespace Oculus::Platform {
template <typename T> class __Message_1__Callback;
}
namespace Oculus::Platform::Models {
class AssetDetailsList;
}
namespace Oculus::Platform::Models {
class AssetFileDownloadResult;
}
namespace Oculus::Platform::Models {
class AssetFileDownloadCancelResult;
}
namespace Oculus::Platform::Models {
class AssetDetails;
}
namespace Oculus::Platform::Models {
class AssetFileDeleteResult;
}
namespace Oculus::Platform::Models {
class AssetFileDownloadUpdate;
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
// Type: Oculus.Platform::AssetFile
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13390))
// CS Name: ::Oculus.Platform::AssetFile*
class CORDL_TYPE AssetFile : public ::System::Object {
public:
  // Declarations
  /// @brief Method Delete addr 0x25a5134 size 0x160 virtual false final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::AssetFileDeleteResult*>* Delete(uint64_t assetFileID);

  /// @brief Method DeleteById addr 0x25a5294 size 0x160 virtual false final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::AssetFileDeleteResult*>* DeleteById(uint64_t assetFileID);

  /// @brief Method DeleteByName addr 0x25a53f4 size 0x160 virtual false final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::AssetFileDeleteResult*>* DeleteByName(::StringW assetFileName);

  /// @brief Method Download addr 0x25a5554 size 0x160 virtual false final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::AssetFileDownloadResult*>* Download(uint64_t assetFileID);

  /// @brief Method DownloadById addr 0x25a56b4 size 0x160 virtual false final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::AssetFileDownloadResult*>* DownloadById(uint64_t assetFileID);

  /// @brief Method DownloadByName addr 0x25a5814 size 0x160 virtual false final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::AssetFileDownloadResult*>* DownloadByName(::StringW assetFileName);

  /// @brief Method DownloadCancel addr 0x25a5974 size 0x160 virtual false final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::AssetFileDownloadCancelResult*>* DownloadCancel(uint64_t assetFileID);

  /// @brief Method DownloadCancelById addr 0x25a5ad4 size 0x160 virtual false final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::AssetFileDownloadCancelResult*>* DownloadCancelById(uint64_t assetFileID);

  /// @brief Method DownloadCancelByName addr 0x25a5c34 size 0x160 virtual false final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::AssetFileDownloadCancelResult*>* DownloadCancelByName(::StringW assetFileName);

  /// @brief Method GetList addr 0x25a5d94 size 0x158 virtual false final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::AssetDetailsList*>* GetList();

  /// @brief Method Status addr 0x25a5eec size 0x160 virtual false final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::AssetDetails*>* Status(uint64_t assetFileID);

  /// @brief Method StatusById addr 0x25a604c size 0x160 virtual false final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::AssetDetails*>* StatusById(uint64_t assetFileID);

  /// @brief Method StatusByName addr 0x25a61ac size 0x160 virtual false final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::AssetDetails*>* StatusByName(::StringW assetFileName);

  /// @brief Method SetDownloadUpdateNotificationCallback addr 0x25a630c size 0x74 virtual false final false
  static inline void SetDownloadUpdateNotificationCallback(::Oculus::Platform::__Message_1__Callback<::Oculus::Platform::Models::AssetFileDownloadUpdate*>* callback);

  // Ctor Parameters [CppParam { name: "", ty: "AssetFile", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AssetFile(AssetFile&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AssetFile", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AssetFile(AssetFile const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AssetFile();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::AssetFile, 0x10>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::AssetFile);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::AssetFile*, "Oculus.Platform", "AssetFile");
