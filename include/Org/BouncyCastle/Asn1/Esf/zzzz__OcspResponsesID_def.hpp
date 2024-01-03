#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(OcspResponsesID)
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1::Esf {
class OtherHash;
}
namespace Org::BouncyCastle::Asn1::Esf {
class OcspIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Esf {
class OcspResponsesID;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Esf::OcspResponsesID);
// Type: Org.BouncyCastle.Asn1.Esf::OcspResponsesID
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Esf {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(147))
// CS Name: ::Org.BouncyCastle.Asn1.Esf::OcspResponsesID*
class CORDL_TYPE OcspResponsesID : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field ocspIdentifier, offset 0x10, size 0x8
  __declspec(property(get = __get_ocspIdentifier, put = __set_ocspIdentifier))::Org::BouncyCastle::Asn1::Esf::OcspIdentifier* ocspIdentifier;

  /// @brief Field ocspRepHash, offset 0x18, size 0x8
  __declspec(property(get = __get_ocspRepHash, put = __set_ocspRepHash))::Org::BouncyCastle::Asn1::Esf::OtherHash* ocspRepHash;

  __declspec(property(get = get_OcspIdentifier))::Org::BouncyCastle::Asn1::Esf::OcspIdentifier* OcspIdentifier;

  __declspec(property(get = get_OcspRepHash))::Org::BouncyCastle::Asn1::Esf::OtherHash* OcspRepHash;

  constexpr ::Org::BouncyCastle::Asn1::Esf::OcspIdentifier*& __get_ocspIdentifier();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Esf::OcspIdentifier*> const& __get_ocspIdentifier() const;

  constexpr void __set_ocspIdentifier(::Org::BouncyCastle::Asn1::Esf::OcspIdentifier* value);

  constexpr ::Org::BouncyCastle::Asn1::Esf::OtherHash*& __get_ocspRepHash();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Esf::OtherHash*> const& __get_ocspRepHash() const;

  constexpr void __set_ocspRepHash(::Org::BouncyCastle::Asn1::Esf::OtherHash* value);

  /// @brief Method GetInstance, addr 0xe93e28, size 0x188, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Esf::OcspResponsesID* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Esf::OcspResponsesID* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor, addr 0xe943a0, size 0x1c8, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  static inline ::Org::BouncyCastle::Asn1::Esf::OcspResponsesID* New_ctor(::Org::BouncyCastle::Asn1::Esf::OcspIdentifier* ocspIdentifier);

  /// @brief Method .ctor, addr 0xe94568, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Esf::OcspIdentifier* ocspIdentifier);

  static inline ::Org::BouncyCastle::Asn1::Esf::OcspResponsesID* New_ctor(::Org::BouncyCastle::Asn1::Esf::OcspIdentifier* ocspIdentifier, ::Org::BouncyCastle::Asn1::Esf::OtherHash* ocspRepHash);

  /// @brief Method .ctor, addr 0xe94570, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Esf::OcspIdentifier* ocspIdentifier, ::Org::BouncyCastle::Asn1::Esf::OtherHash* ocspRepHash);

  /// @brief Method get_OcspIdentifier, addr 0xe945ec, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Esf::OcspIdentifier* get_OcspIdentifier();

  /// @brief Method get_OcspRepHash, addr 0xe945f4, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Esf::OtherHash* get_OcspRepHash();

  /// @brief Method ToAsn1Object, addr 0xe945fc, size 0x138, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  // Ctor Parameters [CppParam { name: "", ty: "OcspResponsesID", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OcspResponsesID(OcspResponsesID&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OcspResponsesID", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OcspResponsesID(OcspResponsesID const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OcspResponsesID();

public:
  /// @brief Field ocspIdentifier, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Esf::OcspIdentifier* ___ocspIdentifier;

  /// @brief Field ocspRepHash, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Esf::OtherHash* ___ocspRepHash;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Esf::OcspResponsesID, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Esf::OcspResponsesID, ___ocspIdentifier) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Esf::OcspResponsesID, ___ocspRepHash) == 0x18, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::Esf
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Esf::OcspResponsesID);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Esf::OcspResponsesID*, "Org.BouncyCastle.Asn1.Esf", "OcspResponsesID");
