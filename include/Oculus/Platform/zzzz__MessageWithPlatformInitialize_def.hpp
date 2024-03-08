#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/Models/zzzz__PlatformInitialize_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MessageWithPlatformInitialize)
namespace Oculus::Platform::Models {
class PlatformInitialize;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithPlatformInitialize;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::MessageWithPlatformInitialize);
// Type: Oculus.Platform::MessageWithPlatformInitialize
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: false
// CS Name: ::Oculus.Platform::MessageWithPlatformInitialize*
class CORDL_TYPE MessageWithPlatformInitialize : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::PlatformInitialize*> {
public:
  // Declarations
  /// @brief Method GetDataFromMessage, addr 0x2848788, size 0x9c, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::PlatformInitialize* GetDataFromMessage(void* c_message);

  /// @brief Method GetPlatformInitialize, addr 0x284874c, size 0x3c, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::PlatformInitialize* GetPlatformInitialize();

  static inline ::Oculus::Platform::MessageWithPlatformInitialize* New_ctor(void* c_message);

  /// @brief Method .ctor, addr 0x2843f04, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(void* c_message);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MessageWithPlatformInitialize();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MessageWithPlatformInitialize", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MessageWithPlatformInitialize(MessageWithPlatformInitialize&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithPlatformInitialize", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MessageWithPlatformInitialize(MessageWithPlatformInitialize const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithPlatformInitialize, 0x30>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithPlatformInitialize);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithPlatformInitialize*, "Oculus.Platform", "MessageWithPlatformInitialize");
