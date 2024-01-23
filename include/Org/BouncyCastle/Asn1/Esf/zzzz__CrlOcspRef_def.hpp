#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(CrlOcspRef)
namespace Org::BouncyCastle::Asn1::Esf {
class CrlListID;
}
namespace Org::BouncyCastle::Asn1::Esf {
class OcspListID;
}
namespace Org::BouncyCastle::Asn1::Esf {
class OtherRevRefs;
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
namespace Org::BouncyCastle::Asn1::Esf {
class CrlOcspRef;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Esf::CrlOcspRef);
// Type: Org.BouncyCastle.Asn1.Esf::CrlOcspRef
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Esf {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(7))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(142))
// CS Name: ::Org.BouncyCastle.Asn1.Esf::CrlOcspRef*
class CORDL_TYPE CrlOcspRef : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field crlids, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_crlids, put = __cordl_internal_set_crlids))::Org::BouncyCastle::Asn1::Esf::CrlListID* crlids;

  /// @brief Field ocspids, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_ocspids, put = __cordl_internal_set_ocspids))::Org::BouncyCastle::Asn1::Esf::OcspListID* ocspids;

  /// @brief Field otherRev, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_otherRev, put = __cordl_internal_set_otherRev))::Org::BouncyCastle::Asn1::Esf::OtherRevRefs* otherRev;

  __declspec(property(get = get_CrlIDs))::Org::BouncyCastle::Asn1::Esf::CrlListID* CrlIDs;

  __declspec(property(get = get_OcspIDs))::Org::BouncyCastle::Asn1::Esf::OcspListID* OcspIDs;

  __declspec(property(get = get_OtherRev))::Org::BouncyCastle::Asn1::Esf::OtherRevRefs* OtherRev;

  constexpr ::Org::BouncyCastle::Asn1::Esf::CrlListID*& __cordl_internal_get_crlids();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Esf::CrlListID*> const& __cordl_internal_get_crlids() const;

  constexpr void __cordl_internal_set_crlids(::Org::BouncyCastle::Asn1::Esf::CrlListID* value);

  constexpr ::Org::BouncyCastle::Asn1::Esf::OcspListID*& __cordl_internal_get_ocspids();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Esf::OcspListID*> const& __cordl_internal_get_ocspids() const;

  constexpr void __cordl_internal_set_ocspids(::Org::BouncyCastle::Asn1::Esf::OcspListID* value);

  constexpr ::Org::BouncyCastle::Asn1::Esf::OtherRevRefs*& __cordl_internal_get_otherRev();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Esf::OtherRevRefs*> const& __cordl_internal_get_otherRev() const;

  constexpr void __cordl_internal_set_otherRev(::Org::BouncyCastle::Asn1::Esf::OtherRevRefs* value);

  /// @brief Method GetInstance, addr 0xe90e74, size 0x188, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Esf::CrlOcspRef* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Esf::CrlOcspRef* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor, addr 0xe92580, size 0x3e4, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  static inline ::Org::BouncyCastle::Asn1::Esf::CrlOcspRef* New_ctor(::Org::BouncyCastle::Asn1::Esf::CrlListID* crlids, ::Org::BouncyCastle::Asn1::Esf::OcspListID* ocspids,
                                                                     ::Org::BouncyCastle::Asn1::Esf::OtherRevRefs* otherRev);

  /// @brief Method .ctor, addr 0xe92c74, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Esf::CrlListID* crlids, ::Org::BouncyCastle::Asn1::Esf::OcspListID* ocspids, ::Org::BouncyCastle::Asn1::Esf::OtherRevRefs* otherRev);

  /// @brief Method get_CrlIDs, addr 0xe92cb0, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Esf::CrlListID* get_CrlIDs();

  /// @brief Method get_OcspIDs, addr 0xe92cb8, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Esf::OcspListID* get_OcspIDs();

  /// @brief Method get_OtherRev, addr 0xe92cc0, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Esf::OtherRevRefs* get_OtherRev();

  /// @brief Method ToAsn1Object, addr 0xe92cc8, size 0x19c, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  // Ctor Parameters [CppParam { name: "", ty: "CrlOcspRef", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CrlOcspRef(CrlOcspRef&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CrlOcspRef", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CrlOcspRef(CrlOcspRef const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CrlOcspRef();

public:
  /// @brief Field crlids, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Esf::CrlListID* ___crlids;

  /// @brief Field ocspids, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Esf::OcspListID* ___ocspids;

  /// @brief Field otherRev, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Esf::OtherRevRefs* ___otherRev;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Esf::CrlOcspRef, 0x28>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Esf::CrlOcspRef, ___crlids) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Esf::CrlOcspRef, ___ocspids) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Esf::CrlOcspRef, ___otherRev) == 0x20, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::Esf
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Esf::CrlOcspRef);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Esf::CrlOcspRef*, "Org.BouncyCastle.Asn1.Esf", "CrlOcspRef");
