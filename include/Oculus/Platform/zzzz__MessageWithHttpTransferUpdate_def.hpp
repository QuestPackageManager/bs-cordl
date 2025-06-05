#pragma once
// IWYU pragma private; include "Oculus/Platform/MessageWithHttpTransferUpdate.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
CORDL_MODULE_EXPORT(MessageWithHttpTransferUpdate)
namespace Oculus::Platform::Models {
class HttpTransferUpdate;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithHttpTransferUpdate;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::MessageWithHttpTransferUpdate);
// Dependencies Oculus.Platform.Message`1<T>
namespace Oculus::Platform {
// Is value type: false
// CS Name: Oculus.Platform.MessageWithHttpTransferUpdate
class CORDL_TYPE MessageWithHttpTransferUpdate : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::HttpTransferUpdate*> {
public:
  // Declarations
  /// @brief Method GetDataFromMessage, addr 0x3f813e8, size 0x94, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::HttpTransferUpdate* GetDataFromMessage(::System::IntPtr c_message);

  /// @brief Method GetHttpTransferUpdate, addr 0x3f813ac, size 0x3c, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::HttpTransferUpdate* GetHttpTransferUpdate();

  static inline ::Oculus::Platform::MessageWithHttpTransferUpdate* New_ctor(::System::IntPtr c_message);

  /// @brief Method .ctor, addr 0x3f7ce5c, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr c_message);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MessageWithHttpTransferUpdate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MessageWithHttpTransferUpdate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MessageWithHttpTransferUpdate(MessageWithHttpTransferUpdate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithHttpTransferUpdate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MessageWithHttpTransferUpdate(MessageWithHttpTransferUpdate const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15425 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithHttpTransferUpdate, 0x30>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithHttpTransferUpdate);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithHttpTransferUpdate*, "Oculus.Platform", "MessageWithHttpTransferUpdate");
