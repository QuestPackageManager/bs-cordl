#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Bcpg/UserAttributeSubpacketsParser.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(UserAttributeSubpacketsParser)
namespace Org::BouncyCastle::Bcpg {
class UserAttributeSubpacket;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg {
class UserAttributeSubpacketsParser;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::UserAttributeSubpacketsParser);
// Dependencies System.Object
namespace Org::BouncyCastle::Bcpg {
// Is value type: false
// CS Name: Org.BouncyCastle.Bcpg.UserAttributeSubpacketsParser
class CORDL_TYPE UserAttributeSubpacketsParser : public ::System::Object {
public:
  // Declarations
  /// @brief Field input, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_input, put = __cordl_internal_set_input)) ::System::IO::Stream* input;

  static inline ::Org::BouncyCastle::Bcpg::UserAttributeSubpacketsParser* New_ctor(::System::IO::Stream* input);

  /// @brief Method ReadPacket, addr 0x264a9f0, size 0x2ac, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Bcpg::UserAttributeSubpacket* ReadPacket();

  constexpr ::System::IO::Stream* const& __cordl_internal_get_input() const;

  constexpr ::System::IO::Stream*& __cordl_internal_get_input();

  constexpr void __cordl_internal_set_input(::System::IO::Stream* value);

  /// @brief Method .ctor, addr 0x264a8c0, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* input);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UserAttributeSubpacketsParser();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UserAttributeSubpacketsParser", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UserAttributeSubpacketsParser(UserAttributeSubpacketsParser&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UserAttributeSubpacketsParser", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UserAttributeSubpacketsParser(UserAttributeSubpacketsParser const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 598 };

  /// @brief Field input, offset: 0x10, size: 0x8, def value: None
  ::System::IO::Stream* ___input;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Bcpg::UserAttributeSubpacketsParser, ___input) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::UserAttributeSubpacketsParser, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Bcpg
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::UserAttributeSubpacketsParser);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::UserAttributeSubpacketsParser*, "Org.BouncyCastle.Bcpg", "UserAttributeSubpacketsParser");
