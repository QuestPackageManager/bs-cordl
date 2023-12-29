#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TimeStampTokenInfo)
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1::Tsp {
class TstInfo;
}
namespace System {
struct DateTime;
}
namespace Org::BouncyCastle::Tsp {
class GenTimeAccuracy;
}
namespace Org::BouncyCastle::Asn1::Tsp {
class Accuracy;
}
namespace Org::BouncyCastle::Asn1::X509 {
class GeneralName;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2368)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1772))
// CS Name: ::Org.BouncyCastle.Tsp::TimeStampTokenInfo*
class CORDL_TYPE TimeStampTokenInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field tstInfo, offset 0x10, size 0x8
  __declspec(property(get = __get_tstInfo, put = __set_tstInfo))::Org::BouncyCastle::Asn1::Tsp::TstInfo* tstInfo;

  /// @brief Field genTime, offset 0x18, size 0x8
  __declspec(property(get = __get_genTime, put = __set_genTime))::System::DateTime genTime;

  __declspec(property(get = get_IsOrdered)) bool IsOrdered;

  __declspec(property(get = get_Accuracy))::Org::BouncyCastle::Asn1::Tsp::Accuracy* Accuracy;

  __declspec(property(get = get_GenTime))::System::DateTime GenTime;

  __declspec(property(get = get_GenTimeAccuracy))::Org::BouncyCastle::Tsp::GenTimeAccuracy* GenTimeAccuracy;

  __declspec(property(get = get_Policy))::StringW Policy;

  __declspec(property(get = get_SerialNumber))::Org::BouncyCastle::Math::BigInteger* SerialNumber;

  __declspec(property(get = get_Tsa))::Org::BouncyCastle::Asn1::X509::GeneralName* Tsa;

  __declspec(property(get = get_Nonce))::Org::BouncyCastle::Math::BigInteger* Nonce;

  __declspec(property(get = get_HashAlgorithm))::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* HashAlgorithm;

  __declspec(property(get = get_MessageImprintAlgOid))::StringW MessageImprintAlgOid;

  __declspec(property(get = get_TstInfo))::Org::BouncyCastle::Asn1::Tsp::TstInfo* TstInfo;

  constexpr ::Org::BouncyCastle::Asn1::Tsp::TstInfo*& __get_tstInfo();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Tsp::TstInfo*> const& __get_tstInfo() const;

  constexpr void __set_tstInfo(::Org::BouncyCastle::Asn1::Tsp::TstInfo* value);

  constexpr ::System::DateTime& __get_genTime();

  constexpr ::System::DateTime const& __get_genTime() const;

  constexpr void __set_genTime(::System::DateTime value);

  static inline ::Org::BouncyCastle::Tsp::TimeStampTokenInfo* New_ctor(::Org::BouncyCastle::Asn1::Tsp::TstInfo* tstInfo);

  /// @brief Method .ctor addr 0x10e17dc size 0x134 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Tsp::TstInfo* tstInfo);

  /// @brief Method get_IsOrdered addr 0x10e2b54 size 0x24 virtual false final false
  inline bool get_IsOrdered();

  /// @brief Method get_Accuracy addr 0x10e2b78 size 0x1c virtual false final false
  inline ::Org::BouncyCastle::Asn1::Tsp::Accuracy* get_Accuracy();

  /// @brief Method get_GenTime addr 0x10e2b94 size 0x8 virtual false final false
  inline ::System::DateTime get_GenTime();

  /// @brief Method get_GenTimeAccuracy addr 0x10e2b9c size 0x7c virtual false final false
  inline ::Org::BouncyCastle::Tsp::GenTimeAccuracy* get_GenTimeAccuracy();

  /// @brief Method get_Policy addr 0x10dfe2c size 0x24 virtual false final false
  inline ::StringW get_Policy();

  /// @brief Method get_SerialNumber addr 0x10e2c18 size 0x24 virtual false final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_SerialNumber();

  /// @brief Method get_Tsa addr 0x10e2c3c size 0x1c virtual false final false
  inline ::Org::BouncyCastle::Asn1::X509::GeneralName* get_Tsa();

  /// @brief Method get_Nonce addr 0x10dfd68 size 0x2c virtual false final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_Nonce();

  /// @brief Method get_HashAlgorithm addr 0x10e2c58 size 0x24 virtual false final false
  inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_HashAlgorithm();

  /// @brief Method get_MessageImprintAlgOid addr 0x10dfdd4 size 0x3c virtual false final false
  inline ::StringW get_MessageImprintAlgOid();

  /// @brief Method GetMessageImprintDigest addr 0x10dfdb0 size 0x24 virtual false final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetMessageImprintDigest();

  /// @brief Method GetEncoded addr 0x10e2c7c size 0x1c virtual false final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetEncoded();

  /// @brief Method get_TstInfo addr 0x10e2c98 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Asn1::Tsp::TstInfo* get_TstInfo();

  // Ctor Parameters [CppParam { name: "", ty: "TimeStampTokenInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TimeStampTokenInfo(TimeStampTokenInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TimeStampTokenInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TimeStampTokenInfo(TimeStampTokenInfo const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TimeStampTokenInfo();

public:
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
