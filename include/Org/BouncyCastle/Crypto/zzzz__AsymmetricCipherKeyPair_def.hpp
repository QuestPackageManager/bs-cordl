#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(AsymmetricCipherKeyPair)
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto {
class AsymmetricCipherKeyPair;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair);
// Type: Org.BouncyCastle.Crypto::AsymmetricCipherKeyPair
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1340))
// CS Name: ::Org.BouncyCastle.Crypto::AsymmetricCipherKeyPair*
class CORDL_TYPE AsymmetricCipherKeyPair : public ::System::Object {
public:
  // Declarations
  /// @brief Field publicParameter, offset 0x10, size 0x8
  __declspec(property(get = __get_publicParameter, put = __set_publicParameter))::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* publicParameter;

  /// @brief Field privateParameter, offset 0x18, size 0x8
  __declspec(property(get = __get_privateParameter, put = __set_privateParameter))::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateParameter;

  __declspec(property(get = get_Public))::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* Public;

  __declspec(property(get = get_Private))::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* Private;

  constexpr ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*& __get_publicParameter();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*> const& __get_publicParameter() const;

  constexpr void __set_publicParameter(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* value);

  constexpr ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*& __get_privateParameter();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*> const& __get_privateParameter() const;

  constexpr void __set_privateParameter(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* value);

  static inline ::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair* New_ctor(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* publicParameter,
                                                                               ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateParameter);

  /// @brief Method .ctor addr 0xfc2b68 size 0xdc virtual false final false
  inline void _ctor(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* publicParameter, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateParameter);

  /// @brief Method get_Public addr 0xfc2c44 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* get_Public();

  /// @brief Method get_Private addr 0xfc2c4c size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* get_Private();

  // Ctor Parameters [CppParam { name: "", ty: "AsymmetricCipherKeyPair", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AsymmetricCipherKeyPair(AsymmetricCipherKeyPair&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AsymmetricCipherKeyPair", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AsymmetricCipherKeyPair(AsymmetricCipherKeyPair const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AsymmetricCipherKeyPair();

public:
  /// @brief Field publicParameter, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* ___publicParameter;

  /// @brief Field privateParameter, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* ___privateParameter;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto
NEED_NO_BOX(::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair*, "Org.BouncyCastle.Crypto", "AsymmetricCipherKeyPair");
