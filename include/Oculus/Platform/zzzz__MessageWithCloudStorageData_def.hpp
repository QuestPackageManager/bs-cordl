#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/Models/zzzz__CloudStorageData_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MessageWithCloudStorageData)
namespace Oculus::Platform::Models {
class CloudStorageData;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithCloudStorageData;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::MessageWithCloudStorageData);
// Type: Oculus.Platform::MessageWithCloudStorageData
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13269)), TypeDefinitionIndex(TypeDefinitionIndex(13472)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13269), inst:
// 4483 })} Self: TypeDefinitionIndex(TypeDefinitionIndex(13295)) CS Name: ::Oculus.Platform::MessageWithCloudStorageData*
class CORDL_TYPE MessageWithCloudStorageData : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::CloudStorageData*> {
public:
  // Declarations
  static inline ::Oculus::Platform::MessageWithCloudStorageData* New_ctor(void* c_message);

  /// @brief Method .ctor addr 0x2592d1c size 0x58 virtual false final false
  inline void _ctor(void* c_message);

  /// @brief Method GetCloudStorageData addr 0x259565c size 0x3c virtual true final false
  inline ::Oculus::Platform::Models::CloudStorageData* GetCloudStorageData();

  /// @brief Method GetDataFromMessage addr 0x2595698 size 0x9c virtual true final false
  inline ::Oculus::Platform::Models::CloudStorageData* GetDataFromMessage(void* c_message);

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithCloudStorageData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MessageWithCloudStorageData(MessageWithCloudStorageData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithCloudStorageData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MessageWithCloudStorageData(MessageWithCloudStorageData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MessageWithCloudStorageData();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithCloudStorageData, 0x30>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithCloudStorageData);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithCloudStorageData*, "Oculus.Platform", "MessageWithCloudStorageData");
