#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Operators/Asn1VerifierFactory.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(Asn1VerifierFactory)
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
namespace Org::BouncyCastle::Crypto {
class IStreamCalculator;
}
namespace Org::BouncyCastle::Crypto {
class IVerifierFactory;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Operators {
class Asn1VerifierFactory;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactory);
// Dependencies System.Object
namespace Org::BouncyCastle::Crypto::Operators {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Operators.Asn1VerifierFactory
class CORDL_TYPE Asn1VerifierFactory : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_AlgorithmDetails)) ::System::Object* AlgorithmDetails;

  /// @brief Field algID, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_algID, put = __cordl_internal_set_algID)) ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* algID;

  /// @brief Field publicKey, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_publicKey, put = __cordl_internal_set_publicKey)) ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* publicKey;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IVerifierFactory"
  constexpr operator ::Org::BouncyCastle::Crypto::IVerifierFactory*() noexcept;

  /// @brief Method CreateCalculator, addr 0x32e40fc, size 0xe4, virtual true, abstract: false, final true
  inline ::Org::BouncyCastle::Crypto::IStreamCalculator* CreateCalculator();

  static inline ::Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactory* New_ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* algorithm,
                                                                                      ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* publicKey);

  static inline ::Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactory* New_ctor(::StringW algorithm, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* publicKey);

  constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* const& __cordl_internal_get_algID() const;

  constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& __cordl_internal_get_algID();

  constexpr ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* const& __cordl_internal_get_publicKey() const;

  constexpr ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*& __cordl_internal_get_publicKey();

  constexpr void __cordl_internal_set_algID(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value);

  constexpr void __cordl_internal_set_publicKey(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* value);

  /// @brief Method .ctor, addr 0x32e40ec, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* algorithm, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* publicKey);

  /// @brief Method .ctor, addr 0x32e3fb0, size 0x13c, virtual false, abstract: false, final false
  inline void _ctor(::StringW algorithm, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* publicKey);

  /// @brief Method get_AlgorithmDetails, addr 0x32e40f4, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* get_AlgorithmDetails();

  /// @brief Convert to "::Org::BouncyCastle::Crypto::IVerifierFactory"
  constexpr ::Org::BouncyCastle::Crypto::IVerifierFactory* i___Org__BouncyCastle__Crypto__IVerifierFactory() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Asn1VerifierFactory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Asn1VerifierFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Asn1VerifierFactory(Asn1VerifierFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Asn1VerifierFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Asn1VerifierFactory(Asn1VerifierFactory const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 994 };

  /// @brief Field algID, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* ___algID;

  /// @brief Field publicKey, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* ___publicKey;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactory, ___algID) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactory, ___publicKey) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactory, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Operators
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactory);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactory*, "Org.BouncyCastle.Crypto.Operators", "Asn1VerifierFactory");
