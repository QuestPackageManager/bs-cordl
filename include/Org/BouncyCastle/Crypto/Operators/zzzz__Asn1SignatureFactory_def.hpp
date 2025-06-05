#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Operators/Asn1SignatureFactory.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/zzzz__ISignatureFactory_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(Asn1SignatureFactory)
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
namespace Org::BouncyCastle::Crypto {
class IStreamCalculator;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace System::Collections {
class IEnumerable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Operators {
class Asn1SignatureFactory;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Operators::Asn1SignatureFactory);
// Dependencies Org.BouncyCastle.Crypto.ISignatureFactory, System.Object
namespace Org::BouncyCastle::Crypto::Operators {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Operators.Asn1SignatureFactory
class CORDL_TYPE Asn1SignatureFactory : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_AlgorithmDetails)) ::System::Object* AlgorithmDetails;

  /// @brief Field algID, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_algID, put = __cordl_internal_set_algID)) ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* algID;

  /// @brief Field algorithm, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_algorithm, put = __cordl_internal_set_algorithm)) ::StringW algorithm;

  /// @brief Field privateKey, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_privateKey, put = __cordl_internal_set_privateKey)) ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey;

  /// @brief Field random, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_random, put = __cordl_internal_set_random)) ::Org::BouncyCastle::Security::SecureRandom* random;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::ISignatureFactory"
  constexpr operator ::Org::BouncyCastle::Crypto::ISignatureFactory*() noexcept;

  /// @brief Method CreateCalculator, addr 0x23b5a9c, size 0xac, virtual true, abstract: false, final true
  inline ::Org::BouncyCastle::Crypto::IStreamCalculator* CreateCalculator();

  static inline ::Org::BouncyCastle::Crypto::Operators::Asn1SignatureFactory* New_ctor(::StringW algorithm, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey);

  static inline ::Org::BouncyCastle::Crypto::Operators::Asn1SignatureFactory* New_ctor(::StringW algorithm, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey,
                                                                                       ::Org::BouncyCastle::Security::SecureRandom* random);

  constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* const& __cordl_internal_get_algID() const;

  constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& __cordl_internal_get_algID();

  constexpr ::StringW const& __cordl_internal_get_algorithm() const;

  constexpr ::StringW& __cordl_internal_get_algorithm();

  constexpr ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* const& __cordl_internal_get_privateKey() const;

  constexpr ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*& __cordl_internal_get_privateKey();

  constexpr ::Org::BouncyCastle::Security::SecureRandom* const& __cordl_internal_get_random() const;

  constexpr ::Org::BouncyCastle::Security::SecureRandom*& __cordl_internal_get_random();

  constexpr void __cordl_internal_set_algID(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value);

  constexpr void __cordl_internal_set_algorithm(::StringW value);

  constexpr void __cordl_internal_set_privateKey(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* value);

  constexpr void __cordl_internal_set_random(::Org::BouncyCastle::Security::SecureRandom* value);

  /// @brief Method .ctor, addr 0x23b5940, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW algorithm, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey);

  /// @brief Method .ctor, addr 0x23b5948, size 0x14c, virtual false, abstract: false, final false
  inline void _ctor(::StringW algorithm, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey, ::Org::BouncyCastle::Security::SecureRandom* random);

  /// @brief Method get_AlgorithmDetails, addr 0x23b5a94, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* get_AlgorithmDetails();

  /// @brief Method get_SignatureAlgNames, addr 0x23b5bbc, size 0x4c, virtual false, abstract: false, final false
  static inline ::System::Collections::IEnumerable* get_SignatureAlgNames();

  /// @brief Convert to "::Org::BouncyCastle::Crypto::ISignatureFactory"
  constexpr ::Org::BouncyCastle::Crypto::ISignatureFactory* i___Org__BouncyCastle__Crypto__ISignatureFactory() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Asn1SignatureFactory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Asn1SignatureFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Asn1SignatureFactory(Asn1SignatureFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Asn1SignatureFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Asn1SignatureFactory(Asn1SignatureFactory const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 992 };

  /// @brief Field algID, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* ___algID;

  /// @brief Field algorithm, offset: 0x18, size: 0x8, def value: None
  ::StringW ___algorithm;

  /// @brief Field privateKey, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* ___privateKey;

  /// @brief Field random, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Security::SecureRandom* ___random;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crypto::Operators::Asn1SignatureFactory, ___algID) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Operators::Asn1SignatureFactory, ___algorithm) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Operators::Asn1SignatureFactory, ___privateKey) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Operators::Asn1SignatureFactory, ___random) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Operators::Asn1SignatureFactory, 0x30>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Operators
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Operators::Asn1SignatureFactory);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Operators::Asn1SignatureFactory*, "Org.BouncyCastle.Crypto.Operators", "Asn1SignatureFactory");
