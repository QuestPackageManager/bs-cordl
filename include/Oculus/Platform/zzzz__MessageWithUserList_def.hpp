#pragma once
// IWYU pragma private; include "Oculus/Platform/MessageWithUserList.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
CORDL_MODULE_EXPORT(MessageWithUserList)
namespace Oculus::Platform::Models {
class UserList;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithUserList;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::MessageWithUserList);
// Dependencies Oculus.Platform.Message`1<T>
namespace Oculus::Platform {
// Is value type: false
// CS Name: Oculus.Platform.MessageWithUserList
class CORDL_TYPE MessageWithUserList : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::UserList*> {
public:
  // Declarations
  /// @brief Method GetDataFromMessage, addr 0x3f80b80, size 0x94, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::UserList* GetDataFromMessage(::System::IntPtr c_message);

  /// @brief Method GetUserList, addr 0x3f80b44, size 0x3c, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::UserList* GetUserList();

  static inline ::Oculus::Platform::MessageWithUserList* New_ctor(::System::IntPtr c_message);

  /// @brief Method .ctor, addr 0x3f7c994, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr c_message);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MessageWithUserList();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MessageWithUserList", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MessageWithUserList(MessageWithUserList&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithUserList", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MessageWithUserList(MessageWithUserList const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15419 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithUserList, 0x30>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithUserList);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithUserList*, "Oculus.Platform", "MessageWithUserList");
