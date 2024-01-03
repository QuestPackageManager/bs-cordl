#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DtlsProtocol)
namespace Org::BouncyCastle::Crypto::Tls {
class Certificate;
}
namespace System::Collections {
class IList;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace Org::BouncyCastle::Crypto::Tls {
class DtlsRecordLayer;
}
namespace System::Collections {
class IDictionary;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class DtlsProtocol;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::DtlsProtocol);
// Type: Org.BouncyCastle.Crypto.Tls::DtlsProtocol
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1222))
// CS Name: ::Org.BouncyCastle.Crypto.Tls::DtlsProtocol*
class CORDL_TYPE DtlsProtocol : public ::System::Object {
public:
  // Declarations
  /// @brief Field mSecureRandom, offset 0x10, size 0x8
  __declspec(property(get = __get_mSecureRandom, put = __set_mSecureRandom))::Org::BouncyCastle::Security::SecureRandom* mSecureRandom;

  constexpr ::Org::BouncyCastle::Security::SecureRandom*& __get_mSecureRandom();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Security::SecureRandom*> const& __get_mSecureRandom() const;

  constexpr void __set_mSecureRandom(::Org::BouncyCastle::Security::SecureRandom* value);

  static inline ::Org::BouncyCastle::Crypto::Tls::DtlsProtocol* New_ctor(::Org::BouncyCastle::Security::SecureRandom* secureRandom);

  /// @brief Method .ctor, addr 0xf68a04, size 0x78, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Security::SecureRandom* secureRandom);

  /// @brief Method ProcessFinished, addr 0xf68a7c, size 0x130, virtual true, abstract: false, final false
  inline void ProcessFinished(::ArrayW<uint8_t, ::Array<uint8_t>*> body, ::ArrayW<uint8_t, ::Array<uint8_t>*> expected_verify_data);

  /// @brief Method ApplyMaxFragmentLengthExtension, addr 0xf68bac, size 0xa0, virtual false, abstract: false, final false
  static inline void ApplyMaxFragmentLengthExtension(::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer* recordLayer, int16_t maxFragmentLength);

  /// @brief Method EvaluateMaxFragmentLengthExtension, addr 0xf68c4c, size 0xac, virtual false, abstract: false, final false
  static inline int16_t EvaluateMaxFragmentLengthExtension(bool resumedSession, ::System::Collections::IDictionary* clientExtensions, ::System::Collections::IDictionary* serverExtensions,
                                                           uint8_t alertDescription);

  /// @brief Method GenerateCertificate, addr 0xf68cf8, size 0x84, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GenerateCertificate(::Org::BouncyCastle::Crypto::Tls::Certificate* certificate);

  /// @brief Method GenerateSupplementalData, addr 0xf68d7c, size 0x7c, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GenerateSupplementalData(::System::Collections::IList* supplementalData);

  /// @brief Method ValidateSelectedCipherSuite, addr 0xf68df8, size 0xb4, virtual false, abstract: false, final false
  static inline void ValidateSelectedCipherSuite(int32_t selectedCipherSuite, uint8_t alertDescription);

  // Ctor Parameters [CppParam { name: "", ty: "DtlsProtocol", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DtlsProtocol(DtlsProtocol&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DtlsProtocol", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DtlsProtocol(DtlsProtocol const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DtlsProtocol();

public:
  /// @brief Field mSecureRandom, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Security::SecureRandom* ___mSecureRandom;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::DtlsProtocol, 0x18>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::DtlsProtocol, ___mSecureRandom) == 0x10, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::DtlsProtocol);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::DtlsProtocol*, "Org.BouncyCastle.Crypto.Tls", "DtlsProtocol");
