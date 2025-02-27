#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Tsp/TimeStampResp.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(TimeStampResp)
namespace Org::BouncyCastle::Asn1::Cmp {
class PkiStatusInfo;
}
namespace Org::BouncyCastle::Asn1::Cms {
class ContentInfo;
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
namespace Org::BouncyCastle::Asn1::Tsp {
class TimeStampResp;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Tsp::TimeStampResp);
// Dependencies Org.BouncyCastle.Asn1.Asn1Encodable
namespace Org::BouncyCastle::Asn1::Tsp {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.Tsp.TimeStampResp
class CORDL_TYPE TimeStampResp : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_Status)) ::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo* Status;

  __declspec(property(get = get_TimeStampToken)) ::Org::BouncyCastle::Asn1::Cms::ContentInfo* TimeStampToken;

  /// @brief Field pkiStatusInfo, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_pkiStatusInfo, put = __cordl_internal_set_pkiStatusInfo)) ::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo* pkiStatusInfo;

  /// @brief Field timeStampToken, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_timeStampToken, put = __cordl_internal_set_timeStampToken)) ::Org::BouncyCastle::Asn1::Cms::ContentInfo* timeStampToken;

  /// @brief Method GetInstance, addr 0x24ff3ac, size 0xa4, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Tsp::TimeStampResp* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Tsp::TimeStampResp* New_ctor(::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo* pkiStatusInfo, ::Org::BouncyCastle::Asn1::Cms::ContentInfo* timeStampToken);

  static inline ::Org::BouncyCastle::Asn1::Tsp::TimeStampResp* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method ToAsn1Object, addr 0x24ff514, size 0x144, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo* const& __cordl_internal_get_pkiStatusInfo() const;

  constexpr ::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo*& __cordl_internal_get_pkiStatusInfo();

  constexpr ::Org::BouncyCastle::Asn1::Cms::ContentInfo* const& __cordl_internal_get_timeStampToken() const;

  constexpr ::Org::BouncyCastle::Asn1::Cms::ContentInfo*& __cordl_internal_get_timeStampToken();

  constexpr void __cordl_internal_set_pkiStatusInfo(::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo* value);

  constexpr void __cordl_internal_set_timeStampToken(::Org::BouncyCastle::Asn1::Cms::ContentInfo* value);

  /// @brief Method .ctor, addr 0x24ff4d8, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo* pkiStatusInfo, ::Org::BouncyCastle::Asn1::Cms::ContentInfo* timeStampToken);

  /// @brief Method .ctor, addr 0x24ff450, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method get_Status, addr 0x24ff504, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo* get_Status();

  /// @brief Method get_TimeStampToken, addr 0x24ff50c, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Cms::ContentInfo* get_TimeStampToken();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TimeStampResp();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TimeStampResp", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TimeStampResp(TimeStampResp&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TimeStampResp", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TimeStampResp(TimeStampResp const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 317 };

  /// @brief Field pkiStatusInfo, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo* ___pkiStatusInfo;

  /// @brief Field timeStampToken, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Cms::ContentInfo* ___timeStampToken;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::Tsp::TimeStampResp, ___pkiStatusInfo) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Tsp::TimeStampResp, ___timeStampToken) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Tsp::TimeStampResp, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Tsp
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Tsp::TimeStampResp);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Tsp::TimeStampResp*, "Org.BouncyCastle.Asn1.Tsp", "TimeStampResp");
