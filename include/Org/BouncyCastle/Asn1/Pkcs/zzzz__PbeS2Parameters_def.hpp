#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Pkcs/PbeS2Parameters.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(PbeS2Parameters)
namespace Org::BouncyCastle::Asn1::Pkcs {
class EncryptionScheme;
}
namespace Org::BouncyCastle::Asn1::Pkcs {
class KeyDerivationFunc;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Pkcs {
class PbeS2Parameters;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Pkcs::PbeS2Parameters);
// Dependencies Org.BouncyCastle.Asn1.Asn1Encodable
namespace Org::BouncyCastle::Asn1::Pkcs {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.Pkcs.PbeS2Parameters
class CORDL_TYPE PbeS2Parameters : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_EncryptionScheme)) ::Org::BouncyCastle::Asn1::Pkcs::EncryptionScheme* EncryptionScheme;

  __declspec(property(get = get_KeyDerivationFunc)) ::Org::BouncyCastle::Asn1::Pkcs::KeyDerivationFunc* KeyDerivationFunc;

  /// @brief Field func, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_func, put = __cordl_internal_set_func)) ::Org::BouncyCastle::Asn1::Pkcs::KeyDerivationFunc* func;

  /// @brief Field scheme, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_scheme, put = __cordl_internal_set_scheme)) ::Org::BouncyCastle::Asn1::Pkcs::EncryptionScheme* scheme;

  /// @brief Method GetInstance, addr 0x240f414, size 0xa4, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Pkcs::PbeS2Parameters* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Pkcs::PbeS2Parameters* New_ctor(::Org::BouncyCastle::Asn1::Pkcs::KeyDerivationFunc* keyDevFunc,
                                                                           ::Org::BouncyCastle::Asn1::Pkcs::EncryptionScheme* encScheme);

  static inline ::Org::BouncyCastle::Asn1::Pkcs::PbeS2Parameters* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method ToAsn1Object, addr 0x240f8f0, size 0xec, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::Pkcs::KeyDerivationFunc* const& __cordl_internal_get_func() const;

  constexpr ::Org::BouncyCastle::Asn1::Pkcs::KeyDerivationFunc*& __cordl_internal_get_func();

  constexpr ::Org::BouncyCastle::Asn1::Pkcs::EncryptionScheme* const& __cordl_internal_get_scheme() const;

  constexpr ::Org::BouncyCastle::Asn1::Pkcs::EncryptionScheme*& __cordl_internal_get_scheme();

  constexpr void __cordl_internal_set_func(::Org::BouncyCastle::Asn1::Pkcs::KeyDerivationFunc* value);

  constexpr void __cordl_internal_set_scheme(::Org::BouncyCastle::Asn1::Pkcs::EncryptionScheme* value);

  /// @brief Method .ctor, addr 0x240f738, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Pkcs::KeyDerivationFunc* keyDevFunc, ::Org::BouncyCastle::Asn1::Pkcs::EncryptionScheme* encScheme);

  /// @brief Method .ctor, addr 0x240f4b8, size 0x280, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method get_EncryptionScheme, addr 0x240f8e8, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Pkcs::EncryptionScheme* get_EncryptionScheme();

  /// @brief Method get_KeyDerivationFunc, addr 0x240f8e0, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Pkcs::KeyDerivationFunc* get_KeyDerivationFunc();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PbeS2Parameters();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PbeS2Parameters", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PbeS2Parameters(PbeS2Parameters&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PbeS2Parameters", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PbeS2Parameters(PbeS2Parameters const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 241 };

  /// @brief Field func, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Pkcs::KeyDerivationFunc* ___func;

  /// @brief Field scheme, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Pkcs::EncryptionScheme* ___scheme;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::Pkcs::PbeS2Parameters, ___func) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Pkcs::PbeS2Parameters, ___scheme) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Pkcs::PbeS2Parameters, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Pkcs
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Pkcs::PbeS2Parameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Pkcs::PbeS2Parameters*, "Org.BouncyCastle.Asn1.Pkcs", "PbeS2Parameters");
