#pragma once
// IWYU pragma private; include "Oculus/Platform/MessageWithBlockedUserList.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
CORDL_MODULE_EXPORT(MessageWithBlockedUserList)
namespace Oculus::Platform::Models {
class BlockedUserList;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithBlockedUserList;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::MessageWithBlockedUserList);
// Dependencies Oculus.Platform.Message`1<T>
namespace Oculus::Platform {
// Is value type: false
// CS Name: Oculus.Platform.MessageWithBlockedUserList
class CORDL_TYPE MessageWithBlockedUserList : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::BlockedUserList*> {
public:
  // Declarations
  /// @brief Method GetBlockedUserList, addr 0x3f79738, size 0x3c, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::BlockedUserList* GetBlockedUserList();

  /// @brief Method GetDataFromMessage, addr 0x3f79774, size 0x94, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::BlockedUserList* GetDataFromMessage(::System::IntPtr c_message);

  static inline ::Oculus::Platform::MessageWithBlockedUserList* New_ctor(::System::IntPtr c_message);

  /// @brief Method .ctor, addr 0x3f771a0, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr c_message);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MessageWithBlockedUserList();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MessageWithBlockedUserList", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MessageWithBlockedUserList(MessageWithBlockedUserList&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithBlockedUserList", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MessageWithBlockedUserList(MessageWithBlockedUserList const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15371 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithBlockedUserList, 0x30>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithBlockedUserList);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithBlockedUserList*, "Oculus.Platform", "MessageWithBlockedUserList");
