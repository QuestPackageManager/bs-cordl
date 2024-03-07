#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/Models/zzzz__Challenge_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MessageWithChallenge)
namespace Oculus::Platform::Models {
class Challenge;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithChallenge;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::MessageWithChallenge);
// Type: Oculus.Platform::MessageWithChallenge
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: false
// CS Name: ::Oculus.Platform::MessageWithChallenge*
class CORDL_TYPE MessageWithChallenge : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::Challenge*> {
public:
  // Declarations
  /// @brief Method GetChallenge, addr 0x2845854, size 0x3c, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::Challenge* GetChallenge();

  /// @brief Method GetDataFromMessage, addr 0x2845890, size 0x9c, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::Challenge* GetDataFromMessage(void* c_message);

  static inline ::Oculus::Platform::MessageWithChallenge* New_ctor(void* c_message);

  /// @brief Method .ctor, addr 0x2843144, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(void* c_message);

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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithChallenge, 0x30>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithChallenge);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithChallenge*, "Oculus.Platform", "MessageWithChallenge");
