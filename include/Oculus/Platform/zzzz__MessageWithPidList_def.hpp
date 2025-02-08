#pragma once
// IWYU pragma private; include "Oculus/Platform/MessageWithPidList.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
CORDL_MODULE_EXPORT(MessageWithPidList)
namespace Oculus::Platform::Models {
class PidList;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithPidList;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::MessageWithPidList);
// Dependencies Oculus.Platform.Message`1<T>
namespace Oculus::Platform {
// Is value type: false
// CS Name: Oculus.Platform.MessageWithPidList
class CORDL_TYPE MessageWithPidList : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::PidList*> {
public:
  // Declarations
  /// @brief Method GetDataFromMessage, addr 0x3f84ab4, size 0x94, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::PidList* GetDataFromMessage(::System::IntPtr c_message);

  /// @brief Method GetPidList, addr 0x3f84a78, size 0x3c, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::PidList* GetPidList();

  static inline ::Oculus::Platform::MessageWithPidList* New_ctor(::System::IntPtr c_message);

  /// @brief Method .ctor, addr 0x3f80e28, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr c_message);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MessageWithPidList();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MessageWithPidList", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MessageWithPidList(MessageWithPidList&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithPidList", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MessageWithPidList(MessageWithPidList const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15402 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithPidList, 0x30>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithPidList);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithPidList*, "Oculus.Platform", "MessageWithPidList");
