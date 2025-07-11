#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Operators/Asn1VerifierFactoryProvider.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/zzzz__IVerifierFactoryProvider_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Asn1VerifierFactoryProvider)
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
namespace Org::BouncyCastle::Crypto {
class IVerifierFactory;
}
namespace System::Collections {
class IEnumerable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Operators {
class Asn1VerifierFactoryProvider;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactoryProvider);
// Dependencies Org.BouncyCastle.Crypto.IVerifierFactoryProvider, System.Object
namespace Org::BouncyCastle::Crypto::Operators {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Operators.Asn1VerifierFactoryProvider
class CORDL_TYPE Asn1VerifierFactoryProvider : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_SignatureAlgNames)) ::System::Collections::IEnumerable* SignatureAlgNames;

  /// @brief Field publicKey, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_publicKey, put = __cordl_internal_set_publicKey)) ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* publicKey;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IVerifierFactoryProvider"
  constexpr operator ::Org::BouncyCastle::Crypto::IVerifierFactoryProvider*() noexcept;

  /// @brief Method CreateVerifierFactory, addr 0x23b5f8c, size 0xbc, virtual true, abstract: false, final true
  inline ::Org::BouncyCastle::Crypto::IVerifierFactory* CreateVerifierFactory(::System::Object* algorithmDetails);

  static inline ::Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactoryProvider* New_ctor(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* publicKey);

  constexpr ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* const& __cordl_internal_get_publicKey() const;

  constexpr ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*& __cordl_internal_get_publicKey();

  constexpr void __cordl_internal_set_publicKey(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* value);

  /// @brief Method .ctor, addr 0x23b5f64, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* publicKey);

  /// @brief Method get_SignatureAlgNames, addr 0x23b6048, size 0x4c, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerable* get_SignatureAlgNames();

  /// @brief Convert to "::Org::BouncyCastle::Crypto::IVerifierFactoryProvider"
  constexpr ::Org::BouncyCastle::Crypto::IVerifierFactoryProvider* i___Org__BouncyCastle__Crypto__IVerifierFactoryProvider() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Asn1VerifierFactoryProvider();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Asn1VerifierFactoryProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Asn1VerifierFactoryProvider(Asn1VerifierFactoryProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Asn1VerifierFactoryProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Asn1VerifierFactoryProvider(Asn1VerifierFactoryProvider const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 996 };

  /// @brief Field publicKey, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* ___publicKey;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactoryProvider, ___publicKey) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactoryProvider, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Operators
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactoryProvider);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactoryProvider*, "Org.BouncyCastle.Crypto.Operators", "Asn1VerifierFactoryProvider");
