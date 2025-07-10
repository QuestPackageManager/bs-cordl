#pragma once
// IWYU pragma private; include "Oculus/Platform/MessageWithUserProof.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
CORDL_MODULE_EXPORT(MessageWithUserProof)
namespace Oculus::Platform::Models {
class UserProof;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithUserProof;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::MessageWithUserProof);
// Dependencies Oculus.Platform.Message`1<T>
namespace Oculus::Platform {
// Is value type: false
// CS Name: Oculus.Platform.MessageWithUserProof
class CORDL_TYPE MessageWithUserProof : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::UserProof*> {
public:
  // Declarations
  /// @brief Method GetDataFromMessage, addr 0x3f80df0, size 0x94, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::UserProof* GetDataFromMessage(::System::IntPtr c_message);

  /// @brief Method GetUserProof, addr 0x3f80db4, size 0x3c, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::UserProof* GetUserProof();

  static inline ::Oculus::Platform::MessageWithUserProof* New_ctor(::System::IntPtr c_message);

  /// @brief Method .ctor, addr 0x3f7ca9c, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr c_message);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MessageWithUserProof();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MessageWithUserProof", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MessageWithUserProof(MessageWithUserProof&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithUserProof", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MessageWithUserProof(MessageWithUserProof const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15422 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithUserProof, 0x30>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithUserProof);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithUserProof*, "Oculus.Platform", "MessageWithUserProof");
