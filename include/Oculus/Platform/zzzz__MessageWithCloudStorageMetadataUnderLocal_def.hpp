#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/Models/zzzz__CloudStorageMetadata_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MessageWithCloudStorageMetadataUnderLocal)
namespace Oculus::Platform::Models {
class CloudStorageMetadata;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithCloudStorageMetadataUnderLocal;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::MessageWithCloudStorageMetadataUnderLocal);
// Type: Oculus.Platform::MessageWithCloudStorageMetadataUnderLocal
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13269), inst: 1148 }), TypeDefinitionIndex(TypeDefinitionIndex(13473)),
// TypeDefinitionIndex(TypeDefinitionIndex(13269))} Self: TypeDefinitionIndex(TypeDefinitionIndex(13296)) CS Name: ::Oculus.Platform::MessageWithCloudStorageMetadataUnderLocal*
class CORDL_TYPE MessageWithCloudStorageMetadataUnderLocal : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::CloudStorageMetadata*> {
public:
  // Declarations
  static inline ::Oculus::Platform::MessageWithCloudStorageMetadataUnderLocal* New_ctor(void* c_message);

  /// @brief Method .ctor addr 0x2592d74 size 0x58 virtual false final false
  inline void _ctor(void* c_message);

  /// @brief Method GetCloudStorageMetadata addr 0x2595734 size 0x3c virtual true final false
  inline ::Oculus::Platform::Models::CloudStorageMetadata* GetCloudStorageMetadata();

  /// @brief Method GetDataFromMessage addr 0x2595770 size 0x9c virtual true final false
  inline ::Oculus::Platform::Models::CloudStorageMetadata* GetDataFromMessage(void* c_message);

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithCloudStorageMetadataUnderLocal", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MessageWithCloudStorageMetadataUnderLocal(MessageWithCloudStorageMetadataUnderLocal&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithCloudStorageMetadataUnderLocal", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MessageWithCloudStorageMetadataUnderLocal(MessageWithCloudStorageMetadataUnderLocal const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MessageWithCloudStorageMetadataUnderLocal();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithCloudStorageMetadataUnderLocal, 0x30>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithCloudStorageMetadataUnderLocal);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithCloudStorageMetadataUnderLocal*, "Oculus.Platform", "MessageWithCloudStorageMetadataUnderLocal");
