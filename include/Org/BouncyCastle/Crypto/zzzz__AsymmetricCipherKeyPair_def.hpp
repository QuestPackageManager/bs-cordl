#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/AsymmetricCipherKeyPair.hpp"
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
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto::AsymmetricCipherKeyPair*
class CORDL_TYPE AsymmetricCipherKeyPair : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Private)) ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* Private;

  __declspec(property(get = get_Public)) ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* Public;

  /// @brief Field privateParameter, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_privateParameter, put = __cordl_internal_set_privateParameter)) ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateParameter;

  /// @brief Field publicParameter, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_publicParameter, put = __cordl_internal_set_publicParameter)) ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* publicParameter;

  static inline ::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair* New_ctor(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* publicParameter,
                                                                               ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateParameter);

  constexpr ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*& __cordl_internal_get_privateParameter();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*> const& __cordl_internal_get_privateParameter() const;

  constexpr ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*& __cordl_internal_get_publicParameter();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*> const& __cordl_internal_get_publicParameter() const;

  constexpr void __cordl_internal_set_privateParameter(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* value);

  constexpr void __cordl_internal_set_publicParameter(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* value);

  /// @brief Method .ctor, addr 0x2411e68, size 0xd4, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* publicParameter, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateParameter);

  /// @brief Method get_Private, addr 0x2411f44, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* get_Private();

  /// @brief Method get_Public, addr 0x2411f3c, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* get_Public();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AsymmetricCipherKeyPair();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AsymmetricCipherKeyPair", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AsymmetricCipherKeyPair(AsymmetricCipherKeyPair&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AsymmetricCipherKeyPair", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AsymmetricCipherKeyPair(AsymmetricCipherKeyPair const&) = delete;

  /// @brief Field publicParameter, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* ___publicParameter;

  /// @brief Field privateParameter, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* ___privateParameter;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1340 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair, ___publicParameter) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair, ___privateParameter) == 0x18, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto
NEED_NO_BOX(::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair*, "Org.BouncyCastle.Crypto", "AsymmetricCipherKeyPair");
