#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(Asn1VerifierFactory)
namespace Org::BouncyCastle::Crypto {
class IStreamCalculator;
}
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
namespace Org::BouncyCastle::Crypto {
class IVerifierFactory;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Operators {
class Asn1VerifierFactory;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactory);
// Type: Org.BouncyCastle.Crypto.Operators::Asn1VerifierFactory
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Operators {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(994))
// CS Name: ::Org.BouncyCastle.Crypto.Operators::Asn1VerifierFactory*
class CORDL_TYPE Asn1VerifierFactory : public ::System::Object {
public:
  // Declarations
  /// @brief Field algID, offset 0x10, size 0x8
  __declspec(property(get = __get_algID, put = __set_algID))::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* algID;

  /// @brief Field publicKey, offset 0x18, size 0x8
  __declspec(property(get = __get_publicKey, put = __set_publicKey))::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* publicKey;

  __declspec(property(get = get_AlgorithmDetails))::System::Object* AlgorithmDetails;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IVerifierFactory"
  constexpr operator ::Org::BouncyCastle::Crypto::IVerifierFactory*() noexcept;

  constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& __get_algID();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*> const& __get_algID() const;

  constexpr void __set_algID(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value);

  constexpr ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*& __get_publicKey();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*> const& __get_publicKey() const;

  constexpr void __set_publicKey(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* value);

  static inline ::Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactory* New_ctor(::StringW algorithm, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* publicKey);

  /// @brief Method .ctor addr 0xf2cd78 size 0x150 virtual false final false
  inline void _ctor(::StringW algorithm, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* publicKey);

  static inline ::Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactory* New_ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* algorithm,
                                                                                      ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* publicKey);

  /// @brief Method .ctor addr 0xf2cec8 size 0x2c virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* algorithm, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* publicKey);

  /// @brief Method get_AlgorithmDetails addr 0xf2cef4 size 0x8 virtual true final true
  inline ::System::Object* get_AlgorithmDetails();

  /// @brief Method CreateCalculator addr 0xf2cefc size 0xe8 virtual true final true
  inline ::Org::BouncyCastle::Crypto::IStreamCalculator* CreateCalculator();

  // Ctor Parameters [CppParam { name: "", ty: "Asn1VerifierFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Asn1VerifierFactory(Asn1VerifierFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Asn1VerifierFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Asn1VerifierFactory(Asn1VerifierFactory const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Asn1VerifierFactory();

public:
  /// @brief Field algID, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* ___algID;

  /// @brief Field publicKey, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* ___publicKey;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactory, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Operators
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactory);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactory*, "Org.BouncyCastle.Crypto.Operators", "Asn1VerifierFactory");
