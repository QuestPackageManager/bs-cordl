#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Kisa/KisaObjectIdentifiers.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(KisaObjectIdentifiers)
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Kisa {
class KisaObjectIdentifiers;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Kisa::KisaObjectIdentifiers);
// Dependencies System.Object
namespace Org::BouncyCastle::Asn1::Kisa {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.Kisa.KisaObjectIdentifiers
class CORDL_TYPE KisaObjectIdentifiers : public ::System::Object {
public:
  // Declarations
  /// @brief Field IdNpkiAppCmsSeedWrap, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_IdNpkiAppCmsSeedWrap, put = setStaticF_IdNpkiAppCmsSeedWrap)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdNpkiAppCmsSeedWrap;

  /// @brief Field IdSeedCbc, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_IdSeedCbc, put = setStaticF_IdSeedCbc)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdSeedCbc;

  static inline ::Org::BouncyCastle::Asn1::Kisa::KisaObjectIdentifiers* New_ctor();

  /// @brief Method .ctor, addr 0x24019e4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdNpkiAppCmsSeedWrap();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdSeedCbc();

  static inline void setStaticF_IdNpkiAppCmsSeedWrap(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_IdSeedCbc(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr KisaObjectIdentifiers();

public:
  // Ctor Parameters [CppParam { name: "", ty: "KisaObjectIdentifiers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  KisaObjectIdentifiers(KisaObjectIdentifiers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "KisaObjectIdentifiers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  KisaObjectIdentifiers(KisaObjectIdentifiers const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 193 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Kisa::KisaObjectIdentifiers, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Kisa
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Kisa::KisaObjectIdentifiers);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Kisa::KisaObjectIdentifiers*, "Org.BouncyCastle.Asn1.Kisa", "KisaObjectIdentifiers");
