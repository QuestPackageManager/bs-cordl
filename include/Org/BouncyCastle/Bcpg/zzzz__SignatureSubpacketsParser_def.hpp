#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SignatureSubpacketsParser)
namespace System::IO {
class Stream;
}
namespace Org::BouncyCastle::Bcpg {
class SignatureSubpacket;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(590))
// CS Name: ::Org.BouncyCastle.Bcpg::SignatureSubpacketsParser*
class CORDL_TYPE SignatureSubpacketsParser : public ::System::Object {
public:
  // Declarations
  /// @brief Field input, offset 0x10, size 0x8
  __declspec(property(get = __get_input, put = __set_input))::System::IO::Stream* input;

  constexpr ::System::IO::Stream*& __get_input();

  constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> const& __get_input() const;

  constexpr void __set_input(::System::IO::Stream* value);

  static inline ::Org::BouncyCastle::Bcpg::SignatureSubpacketsParser* New_ctor(::System::IO::Stream* input);

  /// @brief Method .ctor addr 0x11d38d4 size 0x28 virtual false final false
  inline void _ctor(::System::IO::Stream* input);

  /// @brief Method ReadPacket addr 0x11d38fc size 0x650 virtual false final false
  inline ::Org::BouncyCastle::Bcpg::SignatureSubpacket* ReadPacket();

  /// @brief Method CheckData addr 0x11d4b18 size 0xf0 virtual false final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> CheckData(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t expected, int32_t bytesRead, ::StringW name);

  // Ctor Parameters [CppParam { name: "", ty: "SignatureSubpacketsParser", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SignatureSubpacketsParser(SignatureSubpacketsParser&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SignatureSubpacketsParser", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SignatureSubpacketsParser(SignatureSubpacketsParser const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SignatureSubpacketsParser();

public:
  /// @brief Field input, offset: 0x10, size: 0x8, def value: None
  ::System::IO::Stream* ___input;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::SignatureSubpacketsParser, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Bcpg
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::SignatureSubpacketsParser);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::SignatureSubpacketsParser*, "Org.BouncyCastle.Bcpg", "SignatureSubpacketsParser");
