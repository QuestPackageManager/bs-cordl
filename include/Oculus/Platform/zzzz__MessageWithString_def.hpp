#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MessageWithString)
// Forward declare root types
namespace Oculus::Platform {
class MessageWithString;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::MessageWithString);
// Type: Oculus.Platform::MessageWithString
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: false
// CS Name: ::Oculus.Platform::MessageWithString*
class CORDL_TYPE MessageWithString : public ::Oculus::Platform::Message_1<::StringW> {
public:
  // Declarations
  /// @brief Method GetDataFromMessage, addr 0x2847e70, size 0x54, virtual true, abstract: false, final false
  inline ::StringW GetDataFromMessage(void* c_message);

  /// @brief Method GetString, addr 0x2847e34, size 0x3c, virtual true, abstract: false, final false
  inline ::StringW GetString();

  static inline ::Oculus::Platform::MessageWithString* New_ctor(void* c_message);

  /// @brief Method .ctor, addr 0x2843bec, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(void* c_message);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MessageWithString();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MessageWithString", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MessageWithString(MessageWithString&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithString", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MessageWithString(MessageWithString const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithString, 0x30>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithString);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithString*, "Oculus.Platform", "MessageWithString");
