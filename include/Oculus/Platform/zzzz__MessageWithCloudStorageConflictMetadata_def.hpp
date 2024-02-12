#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/Models/zzzz__CloudStorageConflictMetadata_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MessageWithCloudStorageConflictMetadata)
namespace Oculus::Platform::Models {
class CloudStorageConflictMetadata;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithCloudStorageConflictMetadata;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::MessageWithCloudStorageConflictMetadata);
// Type: Oculus.Platform::MessageWithCloudStorageConflictMetadata
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(13162)), TypeDefinitionIndex(TypeDefinitionIndex(13364)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13162), inst:
// 4555 })] Self: TypeDefinitionIndex(TypeDefinitionIndex(13187)) CS Name: ::Oculus.Platform::MessageWithCloudStorageConflictMetadata*
class CORDL_TYPE MessageWithCloudStorageConflictMetadata : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::CloudStorageConflictMetadata*> {
public:
  // Declarations
  static inline ::Oculus::Platform::MessageWithCloudStorageConflictMetadata* New_ctor(void* c_message);

  /// @brief Method .ctor, addr 0x271854c, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(void* c_message);

  /// @brief Method GetCloudStorageConflictMetadata, addr 0x271ae0c, size 0x3c, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::CloudStorageConflictMetadata* GetCloudStorageConflictMetadata();

  /// @brief Method GetDataFromMessage, addr 0x271ae48, size 0x9c, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::CloudStorageConflictMetadata* GetDataFromMessage(void* c_message);

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithCloudStorageConflictMetadata", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MessageWithCloudStorageConflictMetadata(MessageWithCloudStorageConflictMetadata&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithCloudStorageConflictMetadata", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MessageWithCloudStorageConflictMetadata(MessageWithCloudStorageConflictMetadata const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MessageWithCloudStorageConflictMetadata();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithCloudStorageConflictMetadata, 0x30>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithCloudStorageConflictMetadata);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithCloudStorageConflictMetadata*, "Oculus.Platform", "MessageWithCloudStorageConflictMetadata");
