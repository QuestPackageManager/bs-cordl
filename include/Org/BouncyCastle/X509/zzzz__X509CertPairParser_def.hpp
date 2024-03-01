#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(X509CertPairParser)
namespace Org::BouncyCastle::X509 {
class X509CertificatePair;
}
namespace System::Collections {
class ICollection;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::X509 {
class X509CertPairParser;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::X509::X509CertPairParser);
// Type: Org.BouncyCastle.X509::X509CertPairParser
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::X509 {
// Is value type: false
// CS Name: ::Org.BouncyCastle.X509::X509CertPairParser*
class CORDL_TYPE X509CertPairParser : public ::System::Object {
public:
  // Declarations
  /// @brief Field currentStream, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_currentStream, put = __cordl_internal_set_currentStream))::System::IO::Stream* currentStream;

  static inline ::Org::BouncyCastle::X509::X509CertPairParser* New_ctor();

  /// @brief Method ReadCertPair, addr 0x11ebab4, size 0x244, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::X509::X509CertificatePair* ReadCertPair(::System::IO::Stream* inStream);

  /// @brief Method ReadCertPair, addr 0x11eba3c, size 0x78, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::X509::X509CertificatePair* ReadCertPair(::ArrayW<uint8_t, ::Array<uint8_t>*> input);

  /// @brief Method ReadCertPairs, addr 0x11ebd70, size 0x110, virtual false, abstract: false, final false
  inline ::System::Collections::ICollection* ReadCertPairs(::System::IO::Stream* inStream);

  /// @brief Method ReadCertPairs, addr 0x11ebcf8, size 0x78, virtual false, abstract: false, final false
  inline ::System::Collections::ICollection* ReadCertPairs(::ArrayW<uint8_t, ::Array<uint8_t>*> input);

  /// @brief Method ReadDerCrossCertificatePair, addr 0x11eb948, size 0xf4, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::X509::X509CertificatePair* ReadDerCrossCertificatePair(::System::IO::Stream* inStream);

  constexpr ::System::IO::Stream*& __cordl_internal_get_currentStream();

  constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> const& __cordl_internal_get_currentStream() const;

  constexpr void __cordl_internal_set_currentStream(::System::IO::Stream* value);

  /// @brief Method .ctor, addr 0x11ebe80, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X509CertPairParser();

public:
  // Ctor Parameters [CppParam { name: "", ty: "X509CertPairParser", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X509CertPairParser(X509CertPairParser&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X509CertPairParser", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X509CertPairParser(X509CertPairParser const&) = delete;

  /// @brief Field currentStream, offset: 0x10, size: 0x8, def value: None
  ::System::IO::Stream* ___currentStream;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::X509::X509CertPairParser, 0x18>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::X509::X509CertPairParser, ___currentStream) == 0x10, "Offset mismatch!");

} // namespace Org::BouncyCastle::X509
NEED_NO_BOX(::Org::BouncyCastle::X509::X509CertPairParser);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::X509::X509CertPairParser*, "Org.BouncyCastle.X509", "X509CertPairParser");
