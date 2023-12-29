#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(RsaOaepWrapperProvider)
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Crypto::Operators {
class WrapperProvider;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Operators {
class RsaOaepWrapperProvider;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Operators::RsaOaepWrapperProvider);
// Type: Org.BouncyCastle.Crypto.Operators::RsaOaepWrapperProvider
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Operators {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(989))
// CS Name: ::Org.BouncyCastle.Crypto.Operators::RsaOaepWrapperProvider*
class CORDL_TYPE RsaOaepWrapperProvider : public ::System::Object {
public:
  // Declarations
  /// @brief Field digestOid, offset 0x10, size 0x8
  __declspec(property(get = __get_digestOid, put = __set_digestOid))::Org::BouncyCastle::Asn1::DerObjectIdentifier* digestOid;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::Operators::WrapperProvider"
  constexpr operator ::Org::BouncyCastle::Crypto::Operators::WrapperProvider*() noexcept;

  constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& __get_digestOid();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerObjectIdentifier*> const& __get_digestOid() const;

  constexpr void __set_digestOid(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Crypto::Operators::RsaOaepWrapperProvider* New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* digestOid);

  /// @brief Method .ctor addr 0xeb3e88 size 0x28 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* digestOid);

  /// @brief Method Org.BouncyCastle.Crypto.Operators.WrapperProvider.CreateWrapper addr 0xeb45a0 size 0x7c virtual true final true
  inline ::System::Object* Org_BouncyCastle_Crypto_Operators_WrapperProvider_CreateWrapper(bool forWrapping, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters);

  // Ctor Parameters [CppParam { name: "", ty: "RsaOaepWrapperProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RsaOaepWrapperProvider(RsaOaepWrapperProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RsaOaepWrapperProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RsaOaepWrapperProvider(RsaOaepWrapperProvider const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RsaOaepWrapperProvider();

public:
  /// @brief Field digestOid, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerObjectIdentifier* ___digestOid;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Operators::RsaOaepWrapperProvider, 0x18>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Operators::RsaOaepWrapperProvider, ___digestOid) == 0x10, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Operators
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Operators::RsaOaepWrapperProvider);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Operators::RsaOaepWrapperProvider*, "Org.BouncyCastle.Crypto.Operators", "RsaOaepWrapperProvider");
