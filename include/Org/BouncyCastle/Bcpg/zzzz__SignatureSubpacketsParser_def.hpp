#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Bcpg/SignatureSubpacketsParser.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SignatureSubpacketsParser)
namespace Org::BouncyCastle::Bcpg {
class SignatureSubpacket;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg {
class SignatureSubpacketsParser;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::SignatureSubpacketsParser);
// Type: Org.BouncyCastle.Bcpg::SignatureSubpacketsParser
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Bcpg {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Bcpg::SignatureSubpacketsParser*
class CORDL_TYPE SignatureSubpacketsParser : public ::System::Object {
public:
  // Declarations
  /// @brief Field input, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_input, put = __cordl_internal_set_input))::System::IO::Stream* input;

  /// @brief Method CheckData, addr 0x1447e8c, size 0xf0, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> CheckData(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t expected, int32_t bytesRead, ::StringW name);

  static inline ::Org::BouncyCastle::Bcpg::SignatureSubpacketsParser* New_ctor(::System::IO::Stream* input);

  /// @brief Method ReadPacket, addr 0x1446c70, size 0x650, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Bcpg::SignatureSubpacket* ReadPacket();

  constexpr ::System::IO::Stream*& __cordl_internal_get_input();

  constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> const& __cordl_internal_get_input() const;

  constexpr void __cordl_internal_set_input(::System::IO::Stream* value);

  /// @brief Method .ctor, addr 0x1446c48, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* input);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SignatureSubpacketsParser();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SignatureSubpacketsParser", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SignatureSubpacketsParser(SignatureSubpacketsParser&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SignatureSubpacketsParser", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SignatureSubpacketsParser(SignatureSubpacketsParser const&) = delete;

  /// @brief Field input, offset: 0x10, size: 0x8, def value: None
  ::System::IO::Stream* ___input;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::SignatureSubpacketsParser, 0x18>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::SignatureSubpacketsParser, ___input) == 0x10, "Offset mismatch!");

} // namespace Org::BouncyCastle::Bcpg
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::SignatureSubpacketsParser);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::SignatureSubpacketsParser*, "Org.BouncyCastle.Bcpg", "SignatureSubpacketsParser");
