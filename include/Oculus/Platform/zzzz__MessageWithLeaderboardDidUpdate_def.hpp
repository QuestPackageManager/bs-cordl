#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MessageWithLeaderboardDidUpdate)
// Forward declare root types
namespace Oculus::Platform {
class MessageWithLeaderboardDidUpdate;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::MessageWithLeaderboardDidUpdate);
// Type: Oculus.Platform::MessageWithLeaderboardDidUpdate
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 41, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(13162)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13162), inst: 77 })]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13251))
// CS Name: ::Oculus.Platform::MessageWithLeaderboardDidUpdate*
class CORDL_TYPE MessageWithLeaderboardDidUpdate : public ::Oculus::Platform::Message_1<bool> {
public:
  // Declarations
  static inline ::Oculus::Platform::MessageWithLeaderboardDidUpdate* New_ctor(void* c_message);

  /// @brief Method .ctor, addr 0x2718b24, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(void* c_message);

  /// @brief Method GetLeaderboardDidUpdate, addr 0x271e7f0, size 0x3c, virtual true, abstract: false, final false
  inline bool GetLeaderboardDidUpdate();

  /// @brief Method GetDataFromMessage, addr 0x271e82c, size 0x5c, virtual true, abstract: false, final false
  inline bool GetDataFromMessage(void* c_message);

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithLeaderboardDidUpdate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MessageWithLeaderboardDidUpdate(MessageWithLeaderboardDidUpdate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithLeaderboardDidUpdate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MessageWithLeaderboardDidUpdate(MessageWithLeaderboardDidUpdate const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MessageWithLeaderboardDidUpdate();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithLeaderboardDidUpdate, 0x30>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithLeaderboardDidUpdate);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithLeaderboardDidUpdate*, "Oculus.Platform", "MessageWithLeaderboardDidUpdate");
