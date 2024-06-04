#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Pkcs/CertBag.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(CertBag)
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Pkcs {
class CertBag;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Pkcs::CertBag);
// Type: Org.BouncyCastle.Asn1.Pkcs::CertBag
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Pkcs {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Asn1.Pkcs::CertBag*
class CORDL_TYPE CertBag : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_CertID))::Org::BouncyCastle::Asn1::DerObjectIdentifier* CertID;

  __declspec(property(get = get_CertValue))::Org::BouncyCastle::Asn1::Asn1Object* CertValue;

  /// @brief Field certID, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_certID, put = __cordl_internal_set_certID))::Org::BouncyCastle::Asn1::DerObjectIdentifier* certID;

  /// @brief Field certValue, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_certValue, put = __cordl_internal_set_certValue))::Org::BouncyCastle::Asn1::Asn1Object* certValue;

  /// @brief Method GetInstance, addr 0x11eae1c, size 0xa4, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Pkcs::CertBag* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Pkcs::CertBag* New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* certID, ::Org::BouncyCastle::Asn1::Asn1Object* certValue);

  static inline ::Org::BouncyCastle::Asn1::Pkcs::CertBag* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method ToAsn1Object, addr 0x11eb038, size 0x120, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& __cordl_internal_get_certID();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerObjectIdentifier*> const& __cordl_internal_get_certID() const;

  constexpr ::Org::BouncyCastle::Asn1::Asn1Object*& __cordl_internal_get_certValue();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Object*> const& __cordl_internal_get_certValue() const;

  constexpr void __cordl_internal_set_certID(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  constexpr void __cordl_internal_set_certValue(::Org::BouncyCastle::Asn1::Asn1Object* value);

  /// @brief Method .ctor, addr 0x11eaffc, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* certID, ::Org::BouncyCastle::Asn1::Asn1Object* certValue);

  /// @brief Method .ctor, addr 0x11eaec0, size 0x13c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method get_CertID, addr 0x11eb028, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* get_CertID();

  /// @brief Method get_CertValue, addr 0x11eb030, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* get_CertValue();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CertBag();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CertBag", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CertBag(CertBag&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CertBag", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CertBag(CertBag const&) = delete;

  /// @brief Field certID, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerObjectIdentifier* ___certID;

  /// @brief Field certValue, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Object* ___certValue;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Pkcs::CertBag, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Pkcs::CertBag, ___certID) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Pkcs::CertBag, ___certValue) == 0x18, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::Pkcs
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Pkcs::CertBag);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Pkcs::CertBag*, "Org.BouncyCastle.Asn1.Pkcs", "CertBag");
