#pragma once
// IWYU pragma private; include "Oculus/Platform/MessageWithInvitePanelResultInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
CORDL_MODULE_EXPORT(MessageWithInvitePanelResultInfo)
namespace Oculus::Platform::Models {
class InvitePanelResultInfo;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithInvitePanelResultInfo;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::MessageWithInvitePanelResultInfo);
// Dependencies Oculus.Platform.Message`1<T>
namespace Oculus::Platform {
// Is value type: false
// CS Name: Oculus.Platform.MessageWithInvitePanelResultInfo
class CORDL_TYPE MessageWithInvitePanelResultInfo : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::InvitePanelResultInfo*> {
public:
  // Declarations
  /// @brief Method GetDataFromMessage, addr 0x3f7eb10, size 0x94, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::InvitePanelResultInfo* GetDataFromMessage(::System::IntPtr c_message);

  /// @brief Method GetInvitePanelResultInfo, addr 0x3f7ead4, size 0x3c, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::InvitePanelResultInfo* GetInvitePanelResultInfo();

  static inline ::Oculus::Platform::MessageWithInvitePanelResultInfo* New_ctor(::System::IntPtr c_message);

  /// @brief Method .ctor, addr 0x3f7c04c, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr c_message);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MessageWithInvitePanelResultInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MessageWithInvitePanelResultInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MessageWithInvitePanelResultInfo(MessageWithInvitePanelResultInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithInvitePanelResultInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MessageWithInvitePanelResultInfo(MessageWithInvitePanelResultInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15383 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithInvitePanelResultInfo, 0x30>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithInvitePanelResultInfo);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithInvitePanelResultInfo*, "Oculus.Platform", "MessageWithInvitePanelResultInfo");
