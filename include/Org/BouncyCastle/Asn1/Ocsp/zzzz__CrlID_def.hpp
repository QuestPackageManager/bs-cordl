#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(CrlID)
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class DerGeneralizedTime;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class DerIA5String;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Ocsp {
class CrlID;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Ocsp::CrlID);
// Type: Org.BouncyCastle.Asn1.Ocsp::CrlID
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Ocsp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(209))
// CS Name: ::Org.BouncyCastle.Asn1.Ocsp::CrlID*
class CORDL_TYPE CrlID : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field crlUrl, offset 0x10, size 0x8
  __declspec(property(get = __get_crlUrl, put = __set_crlUrl))::Org::BouncyCastle::Asn1::DerIA5String* crlUrl;

  /// @brief Field crlNum, offset 0x18, size 0x8
  __declspec(property(get = __get_crlNum, put = __set_crlNum))::Org::BouncyCastle::Asn1::DerInteger* crlNum;

  /// @brief Field crlTime, offset 0x20, size 0x8
  __declspec(property(get = __get_crlTime, put = __set_crlTime))::Org::BouncyCastle::Asn1::DerGeneralizedTime* crlTime;

  __declspec(property(get = get_CrlUrl))::Org::BouncyCastle::Asn1::DerIA5String* CrlUrl;

  __declspec(property(get = get_CrlNum))::Org::BouncyCastle::Asn1::DerInteger* CrlNum;

  __declspec(property(get = get_CrlTime))::Org::BouncyCastle::Asn1::DerGeneralizedTime* CrlTime;

  constexpr ::Org::BouncyCastle::Asn1::DerIA5String*& __get_crlUrl();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerIA5String*> const& __get_crlUrl() const;

  constexpr void __set_crlUrl(::Org::BouncyCastle::Asn1::DerIA5String* value);

  constexpr ::Org::BouncyCastle::Asn1::DerInteger*& __get_crlNum();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerInteger*> const& __get_crlNum() const;

  constexpr void __set_crlNum(::Org::BouncyCastle::Asn1::DerInteger* value);

  constexpr ::Org::BouncyCastle::Asn1::DerGeneralizedTime*& __get_crlTime();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerGeneralizedTime*> const& __get_crlTime() const;

  constexpr void __set_crlTime(::Org::BouncyCastle::Asn1::DerGeneralizedTime* value);

  static inline ::Org::BouncyCastle::Asn1::Ocsp::CrlID* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor, addr 0xf80330, size 0x3c0, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method get_CrlUrl, addr 0xf806f0, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerIA5String* get_CrlUrl();

  /// @brief Method get_CrlNum, addr 0xf806f8, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerInteger* get_CrlNum();

  /// @brief Method get_CrlTime, addr 0xf80700, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerGeneralizedTime* get_CrlTime();

  /// @brief Method ToAsn1Object, addr 0xf80708, size 0xd8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  // Ctor Parameters [CppParam { name: "", ty: "CrlID", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CrlID(CrlID&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CrlID", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CrlID(CrlID const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CrlID();

public:
  /// @brief Field crlUrl, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerIA5String* ___crlUrl;

  /// @brief Field crlNum, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerInteger* ___crlNum;

  /// @brief Field crlTime, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerGeneralizedTime* ___crlTime;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Ocsp::CrlID, 0x28>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Ocsp::CrlID, ___crlUrl) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Ocsp::CrlID, ___crlNum) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Ocsp::CrlID, ___crlTime) == 0x20, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::Ocsp
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Ocsp::CrlID);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Ocsp::CrlID*, "Org.BouncyCastle.Asn1.Ocsp", "CrlID");
