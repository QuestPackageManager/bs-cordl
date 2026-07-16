#pragma once
// IWYU pragma private; include "Oculus/Platform/MessageWithMicrophoneAvailabilityState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
CORDL_MODULE_EXPORT(MessageWithMicrophoneAvailabilityState)
namespace Oculus::Platform::Models {
class MicrophoneAvailabilityState;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithMicrophoneAvailabilityState;
}
// Write type traits
MARK_REF_T(::Oculus::Platform::MessageWithMicrophoneAvailabilityState*);
DEFINE_IL2CPP_CLASS(::Oculus::Platform::MessageWithMicrophoneAvailabilityState*, "Oculus.Platform", "MessageWithMicrophoneAvailabilityState");
// Dependencies Oculus.Platform.Message`1<T>
namespace Oculus::Platform {
// Is value type: false
// CS Name: Oculus.Platform.MessageWithMicrophoneAvailabilityState
class CORDL_TYPE MessageWithMicrophoneAvailabilityState : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::MicrophoneAvailabilityState*> {
public:
  // Declarations
  /// @brief Method GetDataFromMessage, addr 0x5dd9abc, size 0x9c, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::MicrophoneAvailabilityState* GetDataFromMessage(::System::IntPtr c_message);

  /// @brief Method GetMicrophoneAvailabilityState, addr 0x5dd9a78, size 0x44, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::MicrophoneAvailabilityState* GetMicrophoneAvailabilityState();

  static inline ::Oculus::Platform::MessageWithMicrophoneAvailabilityState* New_ctor(::System::IntPtr c_message);

  /// @brief Method .ctor, addr 0x5dd5898, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr c_message);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MessageWithMicrophoneAvailabilityState();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MessageWithMicrophoneAvailabilityState", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MessageWithMicrophoneAvailabilityState(MessageWithMicrophoneAvailabilityState&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithMicrophoneAvailabilityState", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MessageWithMicrophoneAvailabilityState(MessageWithMicrophoneAvailabilityState const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17868 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Platform::MessageWithMicrophoneAvailabilityState) == 0x30, "Size mismatch!");

} // namespace Oculus::Platform
