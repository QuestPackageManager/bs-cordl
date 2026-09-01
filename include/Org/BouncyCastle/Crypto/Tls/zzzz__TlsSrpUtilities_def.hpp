#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Tls\TlsSrpUtilities.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TlsSrpUtilities)
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace System::Collections {
class IDictionary;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class TlsSrpUtilities;
}
// Write type traits
MARK_REF_T(::Org::BouncyCastle::Crypto::Tls::TlsSrpUtilities*);
DEFINE_IL2CPP_CLASS(::Org::BouncyCastle::Crypto::Tls::TlsSrpUtilities*, "Org.BouncyCastle.Crypto.Tls", "TlsSrpUtilities");
// Dependencies System.Object
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Tls.TlsSrpUtilities
class CORDL_TYPE TlsSrpUtilities : public ::System::Object {
public:
  // Declarations
  /// @brief Method AddSrpExtension, addr 0x349219c, size 0xe0, virtual false, abstract: false, final false
  static inline void AddSrpExtension(::System::Collections::IDictionary* extensions, ::ArrayW<uint8_t> identity);

  /// @brief Method CreateSrpExtension, addr 0x349227c, size 0x90, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t> CreateSrpExtension(::ArrayW<uint8_t> identity);

  /// @brief Method GetSrpExtension, addr 0x349230c, size 0x70, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t> GetSrpExtension(::System::Collections::IDictionary* extensions);

  /// @brief Method IsSrpCipherSuite, addr 0x3492504, size 0x14, virtual false, abstract: false, final false
  static inline bool IsSrpCipherSuite(int32_t cipherSuite);

  static inline ::Org::BouncyCastle::Crypto::Tls::TlsSrpUtilities* New_ctor();

  /// @brief Method ReadSrpExtension, addr 0x349237c, size 0xf0, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t> ReadSrpExtension(::ArrayW<uint8_t> extensionData);

  /// @brief Method ReadSrpParameter, addr 0x3491de0, size 0x9c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Math::BigInteger* ReadSrpParameter(::System::IO::Stream* input);

  /// @brief Method WriteSrpParameter, addr 0x3491b7c, size 0x84, virtual false, abstract: false, final false
  static inline void WriteSrpParameter(::Org::BouncyCastle::Math::BigInteger* x, ::System::IO::Stream* output);

  /// @brief Method .ctor, addr 0x3492518, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TlsSrpUtilities();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TlsSrpUtilities", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TlsSrpUtilities(TlsSrpUtilities&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TlsSrpUtilities", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TlsSrpUtilities(TlsSrpUtilities const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1328 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Org::BouncyCastle::Crypto::Tls::TlsSrpUtilities) == 0x10, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
