#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MessageWithSystemVoipState)
namespace Oculus::Platform::Models {
class SystemVoipState;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithSystemVoipState;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::MessageWithSystemVoipState);
// Type: Oculus.Platform::MessageWithSystemVoipState
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: false
// CS Name: ::Oculus.Platform::MessageWithSystemVoipState*
class CORDL_TYPE MessageWithSystemVoipState : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::SystemVoipState*> {
public:
  // Declarations
  /// @brief Method GetDataFromMessage, addr 0x2ac9d90, size 0x9c, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::SystemVoipState* GetDataFromMessage(void* c_message);

  /// @brief Method GetSystemVoipState, addr 0x2ac9d54, size 0x3c, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::SystemVoipState* GetSystemVoipState();

  static inline ::Oculus::Platform::MessageWithSystemVoipState* New_ctor(void* c_message);

  /// @brief Method .ctor, addr 0x2ac5ad4, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(void* c_message);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MessageWithSystemVoipState();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MessageWithSystemVoipState", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MessageWithSystemVoipState(MessageWithSystemVoipState&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithSystemVoipState", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MessageWithSystemVoipState(MessageWithSystemVoipState const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithSystemVoipState, 0x30>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithSystemVoipState);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithSystemVoipState*, "Oculus.Platform", "MessageWithSystemVoipState");
