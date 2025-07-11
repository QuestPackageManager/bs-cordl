#pragma once
// IWYU pragma private; include "Oculus/Platform/MessageWithInstalledApplicationList.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
CORDL_MODULE_EXPORT(MessageWithInstalledApplicationList)
namespace Oculus::Platform::Models {
class InstalledApplicationList;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithInstalledApplicationList;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::MessageWithInstalledApplicationList);
// Dependencies Oculus.Platform.Message`1<T>
namespace Oculus::Platform {
// Is value type: false
// CS Name: Oculus.Platform.MessageWithInstalledApplicationList
class CORDL_TYPE MessageWithInstalledApplicationList : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::InstalledApplicationList*> {
public:
  // Declarations
  /// @brief Method GetDataFromMessage, addr 0x3f7ea40, size 0x94, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::InstalledApplicationList* GetDataFromMessage(::System::IntPtr c_message);

  /// @brief Method GetInstalledApplicationList, addr 0x3f7ea04, size 0x3c, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::InstalledApplicationList* GetInstalledApplicationList();

  static inline ::Oculus::Platform::MessageWithInstalledApplicationList* New_ctor(::System::IntPtr c_message);

  /// @brief Method .ctor, addr 0x3f7e9ac, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr c_message);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MessageWithInstalledApplicationList();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MessageWithInstalledApplicationList", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MessageWithInstalledApplicationList(MessageWithInstalledApplicationList&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithInstalledApplicationList", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MessageWithInstalledApplicationList(MessageWithInstalledApplicationList const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15382 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithInstalledApplicationList, 0x30>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithInstalledApplicationList);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithInstalledApplicationList*, "Oculus.Platform", "MessageWithInstalledApplicationList");
