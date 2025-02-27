#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Operators/RsaOaepWrapperProvider.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/Operators/zzzz__WrapperProvider_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(RsaOaepWrapperProvider)
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Operators {
class RsaOaepWrapperProvider;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Operators::RsaOaepWrapperProvider);
// Dependencies Org.BouncyCastle.Crypto.Operators.WrapperProvider, System.Object
namespace Org::BouncyCastle::Crypto::Operators {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Operators.RsaOaepWrapperProvider
class CORDL_TYPE RsaOaepWrapperProvider : public ::System::Object {
public:
  // Declarations
  /// @brief Field digestOid, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_digestOid, put = __cordl_internal_set_digestOid)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* digestOid;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::Operators::WrapperProvider"
  constexpr operator ::Org::BouncyCastle::Crypto::Operators::WrapperProvider*() noexcept;

  static inline ::Org::BouncyCastle::Crypto::Operators::RsaOaepWrapperProvider* New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* digestOid);

  /// @brief Method Org.BouncyCastle.Crypto.Operators.WrapperProvider.CreateWrapper, addr 0x23b6a64, size 0x74, virtual true, abstract: false, final true
  inline ::System::Object* Org_BouncyCastle_Crypto_Operators_WrapperProvider_CreateWrapper(bool forWrapping, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters);

  constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier* const& __cordl_internal_get_digestOid() const;

  constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& __cordl_internal_get_digestOid();

  constexpr void __cordl_internal_set_digestOid(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  /// @brief Method .ctor, addr 0x23b635c, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* digestOid);

  /// @brief Convert to "::Org::BouncyCastle::Crypto::Operators::WrapperProvider"
  constexpr ::Org::BouncyCastle::Crypto::Operators::WrapperProvider* i___Org__BouncyCastle__Crypto__Operators__WrapperProvider() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RsaOaepWrapperProvider();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RsaOaepWrapperProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RsaOaepWrapperProvider(RsaOaepWrapperProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RsaOaepWrapperProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RsaOaepWrapperProvider(RsaOaepWrapperProvider const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 989 };

  /// @brief Field digestOid, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerObjectIdentifier* ___digestOid;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crypto::Operators::RsaOaepWrapperProvider, ___digestOid) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Operators::RsaOaepWrapperProvider, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Operators
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Operators::RsaOaepWrapperProvider);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Operators::RsaOaepWrapperProvider*, "Org.BouncyCastle.Crypto.Operators", "RsaOaepWrapperProvider");
