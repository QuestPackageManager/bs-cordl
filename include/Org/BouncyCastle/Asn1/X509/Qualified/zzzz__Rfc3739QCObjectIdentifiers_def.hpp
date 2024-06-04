#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/X509/Qualified/Rfc3739QCObjectIdentifiers.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Rfc3739QCObjectIdentifiers)
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509::Qualified {
class Rfc3739QCObjectIdentifiers;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X509::Qualified::Rfc3739QCObjectIdentifiers);
// Type: Org.BouncyCastle.Asn1.X509.Qualified::Rfc3739QCObjectIdentifiers
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::X509::Qualified {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Asn1.X509.Qualified::Rfc3739QCObjectIdentifiers*
class CORDL_TYPE Rfc3739QCObjectIdentifiers : public ::System::Object {
public:
  // Declarations
  /// @brief Field IdQcs, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_IdQcs, put = setStaticF_IdQcs))::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdQcs;

  /// @brief Field IdQcsPkixQCSyntaxV1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_IdQcsPkixQCSyntaxV1, put = setStaticF_IdQcsPkixQCSyntaxV1))::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdQcsPkixQCSyntaxV1;

  /// @brief Field IdQcsPkixQCSyntaxV2, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_IdQcsPkixQCSyntaxV2, put = setStaticF_IdQcsPkixQCSyntaxV2))::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdQcsPkixQCSyntaxV2;

  static inline ::Org::BouncyCastle::Asn1::X509::Qualified::Rfc3739QCObjectIdentifiers* New_ctor();

  /// @brief Method .ctor, addr 0x12eb9e8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdQcs();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdQcsPkixQCSyntaxV1();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdQcsPkixQCSyntaxV2();

  static inline void setStaticF_IdQcs(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_IdQcsPkixQCSyntaxV1(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_IdQcsPkixQCSyntaxV2(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Rfc3739QCObjectIdentifiers();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Rfc3739QCObjectIdentifiers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Rfc3739QCObjectIdentifiers(Rfc3739QCObjectIdentifiers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Rfc3739QCObjectIdentifiers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Rfc3739QCObjectIdentifiers(Rfc3739QCObjectIdentifiers const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X509::Qualified::Rfc3739QCObjectIdentifiers, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::X509::Qualified
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::Qualified::Rfc3739QCObjectIdentifiers);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::Qualified::Rfc3739QCObjectIdentifiers*, "Org.BouncyCastle.Asn1.X509.Qualified", "Rfc3739QCObjectIdentifiers");
