#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/Models/zzzz__Party_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MessageWithParty)
namespace Oculus::Platform::Models {
class Party;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithParty;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::MessageWithParty);
// Type: Oculus.Platform::MessageWithParty
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13262), inst: 4602 }), TypeDefinitionIndex(TypeDefinitionIndex(13466)),
// TypeDefinitionIndex(TypeDefinitionIndex(13262))} Self: TypeDefinitionIndex(TypeDefinitionIndex(13312)) CS Name: ::Oculus.Platform::MessageWithParty*
class CORDL_TYPE MessageWithParty : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::Party*> {
public:
  // Declarations
  static inline ::Oculus::Platform::MessageWithParty* New_ctor(void* c_message);

  /// @brief Method .ctor addr 0x26f3040 size 0x58 virtual false final false
  inline void _ctor(void* c_message);

  /// @brief Method GetParty addr 0x26f3098 size 0x3c virtual true final false
  inline ::Oculus::Platform::Models::Party* GetParty();

  /// @brief Method GetDataFromMessage addr 0x26f30d4 size 0x9c virtual true final false
  inline ::Oculus::Platform::Models::Party* GetDataFromMessage(void* c_message);

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithParty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MessageWithParty(MessageWithParty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithParty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MessageWithParty(MessageWithParty const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MessageWithParty();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithParty, 0x30>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithParty);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithParty*, "Oculus.Platform", "MessageWithParty");
