#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/Models/zzzz__UserDataStoreUpdateResponse_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MessageWithUserDataStoreUpdateResponse)
namespace Oculus::Platform::Models {
class UserDataStoreUpdateResponse;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithUserDataStoreUpdateResponse;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::MessageWithUserDataStoreUpdateResponse);
// Type: Oculus.Platform::MessageWithUserDataStoreUpdateResponse
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13262)), TypeDefinitionIndex(TypeDefinitionIndex(13489)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13262), inst:
// 4613 })} Self: TypeDefinitionIndex(TypeDefinitionIndex(13330)) CS Name: ::Oculus.Platform::MessageWithUserDataStoreUpdateResponse*
class CORDL_TYPE MessageWithUserDataStoreUpdateResponse : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::UserDataStoreUpdateResponse*> {
public:
  // Declarations
  static inline ::Oculus::Platform::MessageWithUserDataStoreUpdateResponse* New_ctor(void* c_message);

  /// @brief Method .ctor, addr 0x26efad8, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(void* c_message);

  /// @brief Method GetUserDataStoreUpdateResponse, addr 0x26f3fd8, size 0x3c, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::UserDataStoreUpdateResponse* GetUserDataStoreUpdateResponse();

  /// @brief Method GetDataFromMessage, addr 0x26f4014, size 0x9c, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::UserDataStoreUpdateResponse* GetDataFromMessage(void* c_message);

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithUserDataStoreUpdateResponse", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MessageWithUserDataStoreUpdateResponse(MessageWithUserDataStoreUpdateResponse&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithUserDataStoreUpdateResponse", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MessageWithUserDataStoreUpdateResponse(MessageWithUserDataStoreUpdateResponse const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MessageWithUserDataStoreUpdateResponse();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithUserDataStoreUpdateResponse, 0x30>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithUserDataStoreUpdateResponse);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithUserDataStoreUpdateResponse*, "Oculus.Platform", "MessageWithUserDataStoreUpdateResponse");
