#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CloudStorage)
namespace Oculus::Platform::Models {
class CloudStorageData;
}
namespace Oculus::Platform::Models {
class CloudStorageUpdateResponse;
}
namespace Oculus::Platform::Models {
class CloudStorageConflictMetadata;
}
namespace Oculus::Platform {
template <typename T> class Request_1;
}
namespace Oculus::Platform::Models {
class CloudStorageMetadata;
}
namespace Oculus::Platform::Models {
class CloudStorageMetadataList;
}
// Forward declare root types
namespace Oculus::Platform {
class CloudStorage;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::CloudStorage);
// Type: Oculus.Platform::CloudStorage
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13392))
// CS Name: ::Oculus.Platform::CloudStorage*
class CORDL_TYPE CloudStorage : public ::System::Object {
public:
  // Declarations
  /// @brief Method Delete addr 0x25a6520 size 0x170 virtual false final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::CloudStorageUpdateResponse*>* Delete(::StringW bucket, ::StringW key);

  /// @brief Method Load addr 0x25a6690 size 0x170 virtual false final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::CloudStorageData*>* Load(::StringW bucket, ::StringW key);

  /// @brief Method LoadBucketMetadata addr 0x25a6800 size 0x160 virtual false final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::CloudStorageMetadataList*>* LoadBucketMetadata(::StringW bucket);

  /// @brief Method LoadConflictMetadata addr 0x25a6960 size 0x170 virtual false final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::CloudStorageConflictMetadata*>* LoadConflictMetadata(::StringW bucket, ::StringW key);

  /// @brief Method LoadHandle addr 0x25a6ad0 size 0x160 virtual false final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::CloudStorageData*>* LoadHandle(::StringW handle);

  /// @brief Method LoadMetadata addr 0x25a6c30 size 0x170 virtual false final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::CloudStorageMetadata*>* LoadMetadata(::StringW bucket, ::StringW key);

  /// @brief Method ResolveKeepLocal addr 0x25a6da0 size 0x178 virtual false final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::CloudStorageUpdateResponse*>* ResolveKeepLocal(::StringW bucket, ::StringW key, ::StringW remoteHandle);

  /// @brief Method ResolveKeepRemote addr 0x25a6f18 size 0x178 virtual false final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::CloudStorageUpdateResponse*>* ResolveKeepRemote(::StringW bucket, ::StringW key, ::StringW remoteHandle);

  /// @brief Method Save addr 0x25a7090 size 0x1a4 virtual false final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::CloudStorageUpdateResponse*>* Save(::StringW bucket, ::StringW key, ::ArrayW<uint8_t, ::Array<uint8_t>*> data,
                                                                                                             int64_t counter, ::StringW extraData);

  /// @brief Method GetNextCloudStorageMetadataListPage addr 0x25a7234 size 0x11dc virtual false final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::CloudStorageMetadataList*>* GetNextCloudStorageMetadataListPage(::Oculus::Platform::Models::CloudStorageMetadataList* list);

  // Ctor Parameters [CppParam { name: "", ty: "CloudStorage", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CloudStorage(CloudStorage&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CloudStorage", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CloudStorage(CloudStorage const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CloudStorage();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::CloudStorage, 0x10>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::CloudStorage);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::CloudStorage*, "Oculus.Platform", "CloudStorage");
