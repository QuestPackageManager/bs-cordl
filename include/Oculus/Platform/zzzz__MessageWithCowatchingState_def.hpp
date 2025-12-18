#pragma once
// IWYU pragma private; include "Oculus/Platform/MessageWithCowatchingState.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
CORDL_MODULE_EXPORT(MessageWithCowatchingState)
namespace Oculus::Platform::Models {
class CowatchingState;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithCowatchingState;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::MessageWithCowatchingState);
// Dependencies Oculus.Platform.Message`1<T>
namespace Oculus::Platform {
// Is value type: false
// CS Name: Oculus.Platform.MessageWithCowatchingState
class CORDL_TYPE MessageWithCowatchingState : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::CowatchingState*> {
public:
  // Declarations
  /// @brief Method GetCowatchingState, addr 0x5c2c658, size 0x44, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::CowatchingState* GetCowatchingState();

  /// @brief Method GetDataFromMessage, addr 0x5c2c69c, size 0x9c, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::CowatchingState* GetDataFromMessage(::System::IntPtr c_message);

  static inline ::Oculus::Platform::MessageWithCowatchingState* New_ctor(::System::IntPtr c_message);

  /// @brief Method .ctor, addr 0x5c290fc, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr c_message);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MessageWithCowatchingState();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MessageWithCowatchingState", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MessageWithCowatchingState(MessageWithCowatchingState&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithCowatchingState", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MessageWithCowatchingState(MessageWithCowatchingState const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17849 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithCowatchingState, 0x30>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithCowatchingState);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithCowatchingState*, "Oculus.Platform", "MessageWithCowatchingState");
