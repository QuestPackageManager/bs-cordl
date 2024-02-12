#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/Models/zzzz__CloudStorageMetadataList_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MessageWithCloudStorageMetadataList)
namespace Oculus::Platform::Models {
class CloudStorageMetadataList;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithCloudStorageMetadataList;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::MessageWithCloudStorageMetadataList);
// Type: Oculus.Platform::MessageWithCloudStorageMetadataList
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(13162)), TypeDefinitionIndex(TypeDefinitionIndex(13367)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13162), inst:
// 4557 })] Self: TypeDefinitionIndex(TypeDefinitionIndex(13190)) CS Name: ::Oculus.Platform::MessageWithCloudStorageMetadataList*
class CORDL_TYPE MessageWithCloudStorageMetadataList : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::CloudStorageMetadataList*> {
public:
  // Declarations
  static inline ::Oculus::Platform::MessageWithCloudStorageMetadataList* New_ctor(void* c_message);

  /// @brief Method .ctor, addr 0x2718654, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(void* c_message);

  /// @brief Method GetCloudStorageMetadataList, addr 0x271b094, size 0x3c, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::CloudStorageMetadataList* GetCloudStorageMetadataList();

  /// @brief Method GetDataFromMessage, addr 0x271b0d0, size 0x9c, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::CloudStorageMetadataList* GetDataFromMessage(void* c_message);

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithCloudStorageMetadataList", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MessageWithCloudStorageMetadataList(MessageWithCloudStorageMetadataList&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithCloudStorageMetadataList", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MessageWithCloudStorageMetadataList(MessageWithCloudStorageMetadataList const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MessageWithCloudStorageMetadataList();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithCloudStorageMetadataList, 0x30>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithCloudStorageMetadataList);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithCloudStorageMetadataList*, "Oculus.Platform", "MessageWithCloudStorageMetadataList");
