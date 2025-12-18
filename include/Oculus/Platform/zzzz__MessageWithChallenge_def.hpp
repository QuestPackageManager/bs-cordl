#pragma once
// IWYU pragma private; include "Oculus/Platform/MessageWithChallenge.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
CORDL_MODULE_EXPORT(MessageWithChallenge)
namespace Oculus::Platform::Models {
class Challenge;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithChallenge;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::MessageWithChallenge);
// Dependencies Oculus.Platform.Message`1<T>
namespace Oculus::Platform {
// Is value type: false
// CS Name: Oculus.Platform.MessageWithChallenge
class CORDL_TYPE MessageWithChallenge : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::Challenge*> {
public:
  // Declarations
  /// @brief Method GetChallenge, addr 0x5c2c1f8, size 0x44, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::Challenge* GetChallenge();

  /// @brief Method GetDataFromMessage, addr 0x5c2c23c, size 0x9c, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::Challenge* GetDataFromMessage(::System::IntPtr c_message);

  static inline ::Oculus::Platform::MessageWithChallenge* New_ctor(::System::IntPtr c_message);

  /// @brief Method .ctor, addr 0x5c28f30, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr c_message);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MessageWithChallenge();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MessageWithChallenge", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MessageWithChallenge(MessageWithChallenge&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithChallenge", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MessageWithChallenge(MessageWithChallenge const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17844 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithChallenge, 0x30>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithChallenge);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithChallenge*, "Oculus.Platform", "MessageWithChallenge");
