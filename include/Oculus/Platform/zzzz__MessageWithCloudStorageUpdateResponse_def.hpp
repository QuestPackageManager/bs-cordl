#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/Models/zzzz__CloudStorageUpdateResponse_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MessageWithCloudStorageUpdateResponse)
namespace Oculus::Platform::Models {
class CloudStorageUpdateResponse;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithCloudStorageUpdateResponse;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::MessageWithCloudStorageUpdateResponse);
// Type: Oculus.Platform::MessageWithCloudStorageUpdateResponse
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(13162)), TypeDefinitionIndex(TypeDefinitionIndex(13368)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13162), inst:
// 4558 })] Self: TypeDefinitionIndex(TypeDefinitionIndex(13191)) CS Name: ::Oculus.Platform::MessageWithCloudStorageUpdateResponse*
class CORDL_TYPE MessageWithCloudStorageUpdateResponse : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::CloudStorageUpdateResponse*> {
public:
  // Declarations
  static inline ::Oculus::Platform::MessageWithCloudStorageUpdateResponse* New_ctor(void* c_message);

  /// @brief Method .ctor, addr 0x27186ac, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(void* c_message);

  /// @brief Method GetCloudStorageUpdateResponse, addr 0x271b16c, size 0x3c, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::CloudStorageUpdateResponse* GetCloudStorageUpdateResponse();

  /// @brief Method GetDataFromMessage, addr 0x271b1a8, size 0x9c, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::CloudStorageUpdateResponse* GetDataFromMessage(void* c_message);

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithCloudStorageUpdateResponse", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MessageWithCloudStorageUpdateResponse(MessageWithCloudStorageUpdateResponse&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithCloudStorageUpdateResponse", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MessageWithCloudStorageUpdateResponse(MessageWithCloudStorageUpdateResponse const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MessageWithCloudStorageUpdateResponse();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithCloudStorageUpdateResponse, 0x30>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithCloudStorageUpdateResponse);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithCloudStorageUpdateResponse*, "Oculus.Platform", "MessageWithCloudStorageUpdateResponse");
