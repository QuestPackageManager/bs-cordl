#pragma once
// IWYU pragma private; include "Oculus/Platform/MessageWithCowatchViewerList.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
CORDL_MODULE_EXPORT(MessageWithCowatchViewerList)
namespace Oculus::Platform::Models {
class CowatchViewerList;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithCowatchViewerList;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::MessageWithCowatchViewerList);
// Dependencies Oculus.Platform.Message`1<T>
namespace Oculus::Platform {
// Is value type: false
// CS Name: Oculus.Platform.MessageWithCowatchViewerList
class CORDL_TYPE MessageWithCowatchViewerList : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::CowatchViewerList*> {
public:
  // Declarations
  /// @brief Method GetCowatchViewerList, addr 0x5c2c498, size 0x44, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::CowatchViewerList* GetCowatchViewerList();

  /// @brief Method GetDataFromMessage, addr 0x5c2c4dc, size 0x9c, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::CowatchViewerList* GetDataFromMessage(::System::IntPtr c_message);

  static inline ::Oculus::Platform::MessageWithCowatchViewerList* New_ctor(::System::IntPtr c_message);

  /// @brief Method .ctor, addr 0x5c29044, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr c_message);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MessageWithCowatchViewerList();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MessageWithCowatchViewerList", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MessageWithCowatchViewerList(MessageWithCowatchViewerList&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithCowatchViewerList", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MessageWithCowatchViewerList(MessageWithCowatchViewerList const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17847 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithCowatchViewerList, 0x30>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithCowatchViewerList);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithCowatchViewerList*, "Oculus.Platform", "MessageWithCowatchViewerList");
