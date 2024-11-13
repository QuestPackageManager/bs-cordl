#pragma once
// IWYU pragma private; include "Oculus/Platform/MessageWithUserDataStoreUpdateResponse.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MessageWithUserDataStoreUpdateResponse)
namespace Oculus::Platform::Models {
class UserDataStoreUpdateResponse;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithUserDataStoreUpdateResponse;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::MessageWithUserDataStoreUpdateResponse);
// Type: Oculus.Platform::MessageWithUserDataStoreUpdateResponse
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: false
// CS Name: ::Oculus.Platform::MessageWithUserDataStoreUpdateResponse*
class CORDL_TYPE MessageWithUserDataStoreUpdateResponse : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::UserDataStoreUpdateResponse*> {
public:
  // Declarations
  /// @brief Method GetDataFromMessage, addr 0x3f1f66c, size 0x94, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::UserDataStoreUpdateResponse* GetDataFromMessage(::System::IntPtr c_message);

  /// @brief Method GetUserDataStoreUpdateResponse, addr 0x3f1f630, size 0x3c, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::UserDataStoreUpdateResponse* GetUserDataStoreUpdateResponse();

  static inline ::Oculus::Platform::MessageWithUserDataStoreUpdateResponse* New_ctor(::System::IntPtr c_message);

  /// @brief Method .ctor, addr 0x3f1b390, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr c_message);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MessageWithUserDataStoreUpdateResponse();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MessageWithUserDataStoreUpdateResponse", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MessageWithUserDataStoreUpdateResponse(MessageWithUserDataStoreUpdateResponse&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithUserDataStoreUpdateResponse", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MessageWithUserDataStoreUpdateResponse(MessageWithUserDataStoreUpdateResponse const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15377 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithUserDataStoreUpdateResponse, 0x30>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithUserDataStoreUpdateResponse);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithUserDataStoreUpdateResponse*, "Oculus.Platform", "MessageWithUserDataStoreUpdateResponse");
