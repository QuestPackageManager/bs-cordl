#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Ocsp/CrlID.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(CrlID)
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class DerGeneralizedTime;
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
// Dependencies Org.BouncyCastle.Asn1.Asn1Encodable
namespace Org::BouncyCastle::Asn1::Ocsp {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.Ocsp.CrlID
class CORDL_TYPE CrlID : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_CrlNum)) ::Org::BouncyCastle::Asn1::DerInteger* CrlNum;

  __declspec(property(get = get_CrlTime)) ::Org::BouncyCastle::Asn1::DerGeneralizedTime* CrlTime;

  __declspec(property(get = get_CrlUrl)) ::Org::BouncyCastle::Asn1::DerIA5String* CrlUrl;

  /// @brief Field crlNum, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_crlNum, put = __cordl_internal_set_crlNum)) ::Org::BouncyCastle::Asn1::DerInteger* crlNum;

  /// @brief Field crlTime, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_crlTime, put = __cordl_internal_set_crlTime)) ::Org::BouncyCastle::Asn1::DerGeneralizedTime* crlTime;

  /// @brief Field crlUrl, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_crlUrl, put = __cordl_internal_set_crlUrl)) ::Org::BouncyCastle::Asn1::DerIA5String* crlUrl;

  static inline ::Org::BouncyCastle::Asn1::Ocsp::CrlID* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method ToAsn1Object, addr 0x335f0a8, size 0xd8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::DerInteger* const& __cordl_internal_get_crlNum() const;

  constexpr ::Org::BouncyCastle::Asn1::DerInteger*& __cordl_internal_get_crlNum();

  constexpr ::Org::BouncyCastle::Asn1::DerGeneralizedTime* const& __cordl_internal_get_crlTime() const;

  constexpr ::Org::BouncyCastle::Asn1::DerGeneralizedTime*& __cordl_internal_get_crlTime();

  constexpr ::Org::BouncyCastle::Asn1::DerIA5String* const& __cordl_internal_get_crlUrl() const;

  constexpr ::Org::BouncyCastle::Asn1::DerIA5String*& __cordl_internal_get_crlUrl();

  constexpr void __cordl_internal_set_crlNum(::Org::BouncyCastle::Asn1::DerInteger* value);

  constexpr void __cordl_internal_set_crlTime(::Org::BouncyCastle::Asn1::DerGeneralizedTime* value);

  constexpr void __cordl_internal_set_crlUrl(::Org::BouncyCastle::Asn1::DerIA5String* value);

  /// @brief Method .ctor, addr 0x335ed00, size 0x390, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method get_CrlNum, addr 0x335f098, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerInteger* get_CrlNum();

  /// @brief Method get_CrlTime, addr 0x335f0a0, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerGeneralizedTime* get_CrlTime();

  /// @brief Method get_CrlUrl, addr 0x335f090, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerIA5String* get_CrlUrl();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CrlID();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CrlID", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CrlID(CrlID&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CrlID", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CrlID(CrlID const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 209 };

  /// @brief Field crlUrl, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerIA5String* ___crlUrl;

  /// @brief Field crlNum, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerInteger* ___crlNum;

  /// @brief Field crlTime, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerGeneralizedTime* ___crlTime;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::Ocsp::CrlID, ___crlUrl) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Ocsp::CrlID, ___crlNum) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Ocsp::CrlID, ___crlTime) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Ocsp::CrlID, 0x28>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Ocsp
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Ocsp::CrlID);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Ocsp::CrlID*, "Org.BouncyCastle.Asn1.Ocsp", "CrlID");
