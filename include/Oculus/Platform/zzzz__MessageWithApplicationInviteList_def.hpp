#pragma once
// IWYU pragma private; include "Oculus/Platform/MessageWithApplicationInviteList.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
CORDL_MODULE_EXPORT(MessageWithApplicationInviteList)
namespace Oculus::Platform::Models {
class ApplicationInviteList;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithApplicationInviteList;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::MessageWithApplicationInviteList);
// Dependencies Oculus.Platform.Message`1<T>
namespace Oculus::Platform {
// Is value type: false
// CS Name: Oculus.Platform.MessageWithApplicationInviteList
class CORDL_TYPE MessageWithApplicationInviteList : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::ApplicationInviteList*> {
public:
  // Declarations
  /// @brief Method GetApplicationInviteList, addr 0x5c2b5a4, size 0x44, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::ApplicationInviteList* GetApplicationInviteList();

  /// @brief Method GetDataFromMessage, addr 0x5c2b5e8, size 0x98, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::ApplicationInviteList* GetDataFromMessage(::System::IntPtr c_message);

  static inline ::Oculus::Platform::MessageWithApplicationInviteList* New_ctor(::System::IntPtr c_message);

  /// @brief Method .ctor, addr 0x5c28b98, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr c_message);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MessageWithApplicationInviteList();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MessageWithApplicationInviteList", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MessageWithApplicationInviteList(MessageWithApplicationInviteList&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithApplicationInviteList", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MessageWithApplicationInviteList(MessageWithApplicationInviteList const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17834 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithApplicationInviteList, 0x30>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithApplicationInviteList);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithApplicationInviteList*, "Oculus.Platform", "MessageWithApplicationInviteList");
