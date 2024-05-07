#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Tsp/TimeStampTokenInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TimeStampTokenInfo)
namespace Org::BouncyCastle::Asn1::Tsp {
class Accuracy;
}
namespace Org::BouncyCastle::Asn1::Tsp {
class TstInfo;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1::X509 {
class GeneralName;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Tsp {
class GenTimeAccuracy;
}
namespace System {
struct DateTime;
}
// Forward declare root types
namespace Org::BouncyCastle::Tsp {
class TimeStampTokenInfo;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Tsp::TimeStampTokenInfo);
// Type: Org.BouncyCastle.Tsp::TimeStampTokenInfo
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Tsp {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Tsp::TimeStampTokenInfo*
class CORDL_TYPE TimeStampTokenInfo : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Accuracy))::Org::BouncyCastle::Asn1::Tsp::Accuracy* Accuracy;

  __declspec(property(get = get_GenTime))::System::DateTime GenTime;

  __declspec(property(get = get_GenTimeAccuracy))::Org::BouncyCastle::Tsp::GenTimeAccuracy* GenTimeAccuracy;

  __declspec(property(get = get_HashAlgorithm))::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* HashAlgorithm;

  __declspec(property(get = get_IsOrdered)) bool IsOrdered;

  __declspec(property(get = get_MessageImprintAlgOid))::StringW MessageImprintAlgOid;

  __declspec(property(get = get_Nonce))::Org::BouncyCastle::Math::BigInteger* Nonce;

  __declspec(property(get = get_Policy))::StringW Policy;

  __declspec(property(get = get_SerialNumber))::Org::BouncyCastle::Math::BigInteger* SerialNumber;

  __declspec(property(get = get_Tsa))::Org::BouncyCastle::Asn1::X509::GeneralName* Tsa;

  __declspec(property(get = get_TstInfo))::Org::BouncyCastle::Asn1::Tsp::TstInfo* TstInfo;

  /// @brief Field genTime, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_genTime, put = __cordl_internal_set_genTime))::System::DateTime genTime;

  /// @brief Field tstInfo, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_tstInfo, put = __cordl_internal_set_tstInfo))::Org::BouncyCastle::Asn1::Tsp::TstInfo* tstInfo;

  /// @brief Method GetEncoded, addr 0x13b56d0, size 0x1c, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetEncoded();

  /// @brief Method GetMessageImprintDigest, addr 0x13b2804, size 0x24, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetMessageImprintDigest();

  static inline ::Org::BouncyCastle::Tsp::TimeStampTokenInfo* New_ctor(::Org::BouncyCastle::Asn1::Tsp::TstInfo* tstInfo);

  constexpr ::System::DateTime const& __cordl_internal_get_genTime() const;

  constexpr ::System::DateTime& __cordl_internal_get_genTime();

  constexpr ::Org::BouncyCastle::Asn1::Tsp::TstInfo*& __cordl_internal_get_tstInfo();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Tsp::TstInfo*> const& __cordl_internal_get_tstInfo() const;

  constexpr void __cordl_internal_set_genTime(::System::DateTime value);

  constexpr void __cordl_internal_set_tstInfo(::Org::BouncyCastle::Asn1::Tsp::TstInfo* value);

  /// @brief Method .ctor, addr 0x13b4230, size 0x134, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Tsp::TstInfo* tstInfo);

  /// @brief Method get_Accuracy, addr 0x13b55cc, size 0x1c, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Tsp::Accuracy* get_Accuracy();

  /// @brief Method get_GenTime, addr 0x13b55e8, size 0x8, virtual false, abstract: false, final false
  inline ::System::DateTime get_GenTime();

  /// @brief Method get_GenTimeAccuracy, addr 0x13b55f0, size 0x7c, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Tsp::GenTimeAccuracy* get_GenTimeAccuracy();

  /// @brief Method get_HashAlgorithm, addr 0x13b56ac, size 0x24, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_HashAlgorithm();

  /// @brief Method get_IsOrdered, addr 0x13b55a8, size 0x24, virtual false, abstract: false, final false
  inline bool get_IsOrdered();

  /// @brief Method get_MessageImprintAlgOid, addr 0x13b2828, size 0x3c, virtual false, abstract: false, final false
  inline ::StringW get_MessageImprintAlgOid();

  /// @brief Method get_Nonce, addr 0x13b27bc, size 0x2c, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_Nonce();

  /// @brief Method get_Policy, addr 0x13b2880, size 0x24, virtual false, abstract: false, final false
  inline ::StringW get_Policy();

  /// @brief Method get_SerialNumber, addr 0x13b566c, size 0x24, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_SerialNumber();

  /// @brief Method get_Tsa, addr 0x13b5690, size 0x1c, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::GeneralName* get_Tsa();

  /// @brief Method get_TstInfo, addr 0x13b56ec, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Tsp::TstInfo* get_TstInfo();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TimeStampTokenInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TimeStampTokenInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TimeStampTokenInfo(TimeStampTokenInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TimeStampTokenInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TimeStampTokenInfo(TimeStampTokenInfo const&) = delete;

  /// @brief Field tstInfo, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Tsp::TstInfo* ___tstInfo;

  /// @brief Field genTime, offset: 0x18, size: 0x8, def value: None
  ::System::DateTime ___genTime;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Tsp::TimeStampTokenInfo, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Tsp::TimeStampTokenInfo, ___tstInfo) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Tsp::TimeStampTokenInfo, ___genTime) == 0x18, "Offset mismatch!");

} // namespace Org::BouncyCastle::Tsp
NEED_NO_BOX(::Org::BouncyCastle::Tsp::TimeStampTokenInfo);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Tsp::TimeStampTokenInfo*, "Org.BouncyCastle.Tsp", "TimeStampTokenInfo");
