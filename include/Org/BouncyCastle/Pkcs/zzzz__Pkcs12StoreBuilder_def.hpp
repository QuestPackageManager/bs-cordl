#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Pkcs/Pkcs12StoreBuilder.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Pkcs12StoreBuilder)
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Pkcs {
class Pkcs12Store;
}
// Forward declare root types
namespace Org::BouncyCastle::Pkcs {
class Pkcs12StoreBuilder;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Pkcs::Pkcs12StoreBuilder);
// Dependencies System.Object
namespace Org::BouncyCastle::Pkcs {
// Is value type: false
// CS Name: Org.BouncyCastle.Pkcs.Pkcs12StoreBuilder
class CORDL_TYPE Pkcs12StoreBuilder : public ::System::Object {
public:
  // Declarations
  /// @brief Field certAlgorithm, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_certAlgorithm, put = __cordl_internal_set_certAlgorithm)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* certAlgorithm;

  /// @brief Field certPrfAlgorithm, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_certPrfAlgorithm, put = __cordl_internal_set_certPrfAlgorithm)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* certPrfAlgorithm;

  /// @brief Field keyAlgorithm, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_keyAlgorithm, put = __cordl_internal_set_keyAlgorithm)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* keyAlgorithm;

  /// @brief Field keyPrfAlgorithm, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_keyPrfAlgorithm, put = __cordl_internal_set_keyPrfAlgorithm)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* keyPrfAlgorithm;

  /// @brief Field useDerEncoding, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get_useDerEncoding, put = __cordl_internal_set_useDerEncoding)) bool useDerEncoding;

  /// @brief Method Build, addr 0x2562024, size 0x88, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Pkcs::Pkcs12Store* Build();

  static inline ::Org::BouncyCastle::Pkcs::Pkcs12StoreBuilder* New_ctor();

  /// @brief Method SetCertAlgorithm, addr 0x25620ac, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Pkcs::Pkcs12StoreBuilder* SetCertAlgorithm(::Org::BouncyCastle::Asn1::DerObjectIdentifier* certAlgorithm);

  /// @brief Method SetKeyAlgorithm, addr 0x25620b4, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Pkcs::Pkcs12StoreBuilder* SetKeyAlgorithm(::Org::BouncyCastle::Asn1::DerObjectIdentifier* keyAlgorithm);

  /// @brief Method SetKeyAlgorithm, addr 0x25620bc, size 0xc, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Pkcs::Pkcs12StoreBuilder* SetKeyAlgorithm(::Org::BouncyCastle::Asn1::DerObjectIdentifier* keyAlgorithm, ::Org::BouncyCastle::Asn1::DerObjectIdentifier* keyPrfAlgorithm);

  /// @brief Method SetUseDerEncoding, addr 0x25620c8, size 0xc, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Pkcs::Pkcs12StoreBuilder* SetUseDerEncoding(bool useDerEncoding);

  constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier* const& __cordl_internal_get_certAlgorithm() const;

  constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& __cordl_internal_get_certAlgorithm();

  constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier* const& __cordl_internal_get_certPrfAlgorithm() const;

  constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& __cordl_internal_get_certPrfAlgorithm();

  constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier* const& __cordl_internal_get_keyAlgorithm() const;

  constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& __cordl_internal_get_keyAlgorithm();

  constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier* const& __cordl_internal_get_keyPrfAlgorithm() const;

  constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& __cordl_internal_get_keyPrfAlgorithm();

  constexpr bool const& __cordl_internal_get_useDerEncoding() const;

  constexpr bool& __cordl_internal_get_useDerEncoding();

  constexpr void __cordl_internal_set_certAlgorithm(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  constexpr void __cordl_internal_set_certPrfAlgorithm(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  constexpr void __cordl_internal_set_keyAlgorithm(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  constexpr void __cordl_internal_set_keyPrfAlgorithm(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  constexpr void __cordl_internal_set_useDerEncoding(bool value);

  /// @brief Method .ctor, addr 0x2561fac, size 0x78, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Pkcs12StoreBuilder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Pkcs12StoreBuilder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Pkcs12StoreBuilder(Pkcs12StoreBuilder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Pkcs12StoreBuilder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Pkcs12StoreBuilder(Pkcs12StoreBuilder const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1701 };

  /// @brief Field keyAlgorithm, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerObjectIdentifier* ___keyAlgorithm;

  /// @brief Field certAlgorithm, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerObjectIdentifier* ___certAlgorithm;

  /// @brief Field keyPrfAlgorithm, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerObjectIdentifier* ___keyPrfAlgorithm;

  /// @brief Field certPrfAlgorithm, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerObjectIdentifier* ___certPrfAlgorithm;

  /// @brief Field useDerEncoding, offset: 0x30, size: 0x1, def value: None
  bool ___useDerEncoding;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Pkcs::Pkcs12StoreBuilder, ___keyAlgorithm) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Pkcs::Pkcs12StoreBuilder, ___certAlgorithm) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Pkcs::Pkcs12StoreBuilder, ___keyPrfAlgorithm) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Pkcs::Pkcs12StoreBuilder, ___certPrfAlgorithm) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Pkcs::Pkcs12StoreBuilder, ___useDerEncoding) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Pkcs::Pkcs12StoreBuilder, 0x38>, "Size mismatch!");

} // namespace Org::BouncyCastle::Pkcs
NEED_NO_BOX(::Org::BouncyCastle::Pkcs::Pkcs12StoreBuilder);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Pkcs::Pkcs12StoreBuilder*, "Org.BouncyCastle.Pkcs", "Pkcs12StoreBuilder");
