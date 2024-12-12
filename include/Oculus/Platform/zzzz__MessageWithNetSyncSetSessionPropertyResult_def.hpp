#pragma once
// IWYU pragma private; include "Oculus/Platform/MessageWithNetSyncSetSessionPropertyResult.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
CORDL_MODULE_EXPORT(MessageWithNetSyncSetSessionPropertyResult)
namespace Oculus::Platform::Models {
class NetSyncSetSessionPropertyResult;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithNetSyncSetSessionPropertyResult;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::MessageWithNetSyncSetSessionPropertyResult);
// Dependencies Oculus.Platform.Message`1<T>
namespace Oculus::Platform {
// Is value type: false
// CS Name: Oculus.Platform.MessageWithNetSyncSetSessionPropertyResult
class CORDL_TYPE MessageWithNetSyncSetSessionPropertyResult : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::NetSyncSetSessionPropertyResult*> {
public:
  // Declarations
  /// @brief Method GetDataFromMessage, addr 0x3f7e540, size 0x94, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::NetSyncSetSessionPropertyResult* GetDataFromMessage(::System::IntPtr c_message);

  /// @brief Method GetNetSyncSetSessionPropertyResult, addr 0x3f7e504, size 0x3c, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::NetSyncSetSessionPropertyResult* GetNetSyncSetSessionPropertyResult();

  static inline ::Oculus::Platform::MessageWithNetSyncSetSessionPropertyResult* New_ctor(::System::IntPtr c_message);

  /// @brief Method .ctor, addr 0x3f7e4ac, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr c_message);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MessageWithNetSyncSetSessionPropertyResult();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MessageWithNetSyncSetSessionPropertyResult", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MessageWithNetSyncSetSessionPropertyResult(MessageWithNetSyncSetSessionPropertyResult&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithNetSyncSetSessionPropertyResult", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MessageWithNetSyncSetSessionPropertyResult(MessageWithNetSyncSetSessionPropertyResult const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15391 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithNetSyncSetSessionPropertyResult, 0x30>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithNetSyncSetSessionPropertyResult);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithNetSyncSetSessionPropertyResult*, "Oculus.Platform", "MessageWithNetSyncSetSessionPropertyResult");
