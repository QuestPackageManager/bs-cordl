#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Tsp/TimeStampResponseGenerator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/Cmp/zzzz__PkiStatus_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerBitString_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TimeStampResponseGenerator)
namespace Org::BouncyCastle::Asn1::Cmp {
class PkiStatusInfo;
}
namespace Org::BouncyCastle::Asn1::Cmp {
struct PkiStatus;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1EncodableVector;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Tsp {
class TimeStampRequest;
}
namespace Org::BouncyCastle::Tsp {
class TimeStampResponseGenerator_FailInfo;
}
namespace Org::BouncyCastle::Tsp {
class TimeStampResponse;
}
namespace Org::BouncyCastle::Tsp {
class TimeStampTokenGenerator;
}
namespace Org::BouncyCastle::Utilities::Date {
class DateTimeObject;
}
namespace System::Collections {
class IList;
}
namespace System {
struct DateTime;
}
// Forward declare root types
namespace Org::BouncyCastle::Tsp {
class TimeStampResponseGenerator;
}
namespace Org::BouncyCastle::Tsp {
class TimeStampResponseGenerator_FailInfo;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Tsp::TimeStampResponseGenerator);
MARK_REF_PTR_T(::Org::BouncyCastle::Tsp::TimeStampResponseGenerator_FailInfo);
// Dependencies Org.BouncyCastle.Asn1.DerBitString
namespace Org::BouncyCastle::Tsp {
// Is value type: false
// CS Name: Org.BouncyCastle.Tsp.TimeStampResponseGenerator/FailInfo
class CORDL_TYPE TimeStampResponseGenerator_FailInfo : public ::Org::BouncyCastle::Asn1::DerBitString {
public:
  // Declarations
  static inline ::Org::BouncyCastle::Tsp::TimeStampResponseGenerator_FailInfo* New_ctor(int32_t failInfoValue);

  /// @brief Method .ctor, addr 0x25cbc48, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(int32_t failInfoValue);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TimeStampResponseGenerator_FailInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TimeStampResponseGenerator_FailInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TimeStampResponseGenerator_FailInfo(TimeStampResponseGenerator_FailInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TimeStampResponseGenerator_FailInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TimeStampResponseGenerator_FailInfo(TimeStampResponseGenerator_FailInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1767 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Tsp::TimeStampResponseGenerator_FailInfo, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Tsp
// Dependencies Org.BouncyCastle.Asn1.Cmp.PkiStatus, System.Object
namespace Org::BouncyCastle::Tsp {
// Is value type: false
// CS Name: Org.BouncyCastle.Tsp.TimeStampResponseGenerator
class CORDL_TYPE TimeStampResponseGenerator : public ::System::Object {
public:
  // Declarations
  using FailInfo = ::Org::BouncyCastle::Tsp::TimeStampResponseGenerator_FailInfo;

  /// @brief Field acceptedAlgorithms, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_acceptedAlgorithms, put = __cordl_internal_set_acceptedAlgorithms)) ::System::Collections::IList* acceptedAlgorithms;

  /// @brief Field acceptedExtensions, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_acceptedExtensions, put = __cordl_internal_set_acceptedExtensions)) ::System::Collections::IList* acceptedExtensions;

  /// @brief Field acceptedPolicies, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_acceptedPolicies, put = __cordl_internal_set_acceptedPolicies)) ::System::Collections::IList* acceptedPolicies;

  /// @brief Field failInfo, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_failInfo, put = __cordl_internal_set_failInfo)) int32_t failInfo;

  /// @brief Field status, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_status, put = __cordl_internal_set_status)) ::Org::BouncyCastle::Asn1::Cmp::PkiStatus status;

  /// @brief Field statusStrings, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_statusStrings, put = __cordl_internal_set_statusStrings)) ::Org::BouncyCastle::Asn1::Asn1EncodableVector* statusStrings;

  /// @brief Field tokenGenerator, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_tokenGenerator, put = __cordl_internal_set_tokenGenerator)) ::Org::BouncyCastle::Tsp::TimeStampTokenGenerator* tokenGenerator;

  /// @brief Method AddStatusString, addr 0x25cb9b4, size 0x7c, virtual false, abstract: false, final false
  inline void AddStatusString(::StringW statusString);

  /// @brief Method Generate, addr 0x25cbd5c, size 0x400, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Tsp::TimeStampResponse* Generate(::Org::BouncyCastle::Tsp::TimeStampRequest* request, ::Org::BouncyCastle::Math::BigInteger* serialNumber,
                                                               ::Org::BouncyCastle::Utilities::Date::DateTimeObject* genTime);

  /// @brief Method Generate, addr 0x25cbcb0, size 0x84, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Tsp::TimeStampResponse* Generate(::Org::BouncyCastle::Tsp::TimeStampRequest* request, ::Org::BouncyCastle::Math::BigInteger* serialNumber, ::System::DateTime genTime);

  /// @brief Method GenerateFailResponse, addr 0x25cc7c0, size 0x18c, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Tsp::TimeStampResponse* GenerateFailResponse(::Org::BouncyCastle::Asn1::Cmp::PkiStatus status, int32_t failInfoField, ::StringW statusString);

  /// @brief Method GetPkiStatusInfo, addr 0x25cba40, size 0x208, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo* GetPkiStatusInfo();

  static inline ::Org::BouncyCastle::Tsp::TimeStampResponseGenerator* New_ctor(::Org::BouncyCastle::Tsp::TimeStampTokenGenerator* tokenGenerator, ::System::Collections::IList* acceptedAlgorithms);

  static inline ::Org::BouncyCastle::Tsp::TimeStampResponseGenerator* New_ctor(::Org::BouncyCastle::Tsp::TimeStampTokenGenerator* tokenGenerator, ::System::Collections::IList* acceptedAlgorithms,
                                                                               ::System::Collections::IList* acceptedPolicies, ::System::Collections::IList* acceptedExtensions);

  static inline ::Org::BouncyCastle::Tsp::TimeStampResponseGenerator* New_ctor(::Org::BouncyCastle::Tsp::TimeStampTokenGenerator* tokenGenerator, ::System::Collections::IList* acceptedAlgorithms,
                                                                               ::System::Collections::IList* acceptedPolicy);

  /// @brief Method SetFailInfoField, addr 0x25cba30, size 0x10, virtual false, abstract: false, final false
  inline void SetFailInfoField(int32_t field);

  constexpr ::System::Collections::IList* const& __cordl_internal_get_acceptedAlgorithms() const;

  constexpr ::System::Collections::IList*& __cordl_internal_get_acceptedAlgorithms();

  constexpr ::System::Collections::IList* const& __cordl_internal_get_acceptedExtensions() const;

  constexpr ::System::Collections::IList*& __cordl_internal_get_acceptedExtensions();

  constexpr ::System::Collections::IList* const& __cordl_internal_get_acceptedPolicies() const;

  constexpr ::System::Collections::IList*& __cordl_internal_get_acceptedPolicies();

  constexpr int32_t const& __cordl_internal_get_failInfo() const;

  constexpr int32_t& __cordl_internal_get_failInfo();

  constexpr ::Org::BouncyCastle::Asn1::Cmp::PkiStatus const& __cordl_internal_get_status() const;

  constexpr ::Org::BouncyCastle::Asn1::Cmp::PkiStatus& __cordl_internal_get_status();

  constexpr ::Org::BouncyCastle::Asn1::Asn1EncodableVector* const& __cordl_internal_get_statusStrings() const;

  constexpr ::Org::BouncyCastle::Asn1::Asn1EncodableVector*& __cordl_internal_get_statusStrings();

  constexpr ::Org::BouncyCastle::Tsp::TimeStampTokenGenerator* const& __cordl_internal_get_tokenGenerator() const;

  constexpr ::Org::BouncyCastle::Tsp::TimeStampTokenGenerator*& __cordl_internal_get_tokenGenerator();

  constexpr void __cordl_internal_set_acceptedAlgorithms(::System::Collections::IList* value);

  constexpr void __cordl_internal_set_acceptedExtensions(::System::Collections::IList* value);

  constexpr void __cordl_internal_set_acceptedPolicies(::System::Collections::IList* value);

  constexpr void __cordl_internal_set_failInfo(int32_t value);

  constexpr void __cordl_internal_set_status(::Org::BouncyCastle::Asn1::Cmp::PkiStatus value);

  constexpr void __cordl_internal_set_statusStrings(::Org::BouncyCastle::Asn1::Asn1EncodableVector* value);

  constexpr void __cordl_internal_set_tokenGenerator(::Org::BouncyCastle::Tsp::TimeStampTokenGenerator* value);

  /// @brief Method .ctor, addr 0x25cb914, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Tsp::TimeStampTokenGenerator* tokenGenerator, ::System::Collections::IList* acceptedAlgorithms);

  /// @brief Method .ctor, addr 0x25cb920, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Tsp::TimeStampTokenGenerator* tokenGenerator, ::System::Collections::IList* acceptedAlgorithms, ::System::Collections::IList* acceptedPolicies,
                    ::System::Collections::IList* acceptedExtensions);

  /// @brief Method .ctor, addr 0x25cb9ac, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Tsp::TimeStampTokenGenerator* tokenGenerator, ::System::Collections::IList* acceptedAlgorithms, ::System::Collections::IList* acceptedPolicy);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TimeStampResponseGenerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TimeStampResponseGenerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TimeStampResponseGenerator(TimeStampResponseGenerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TimeStampResponseGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TimeStampResponseGenerator(TimeStampResponseGenerator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1768 };

  /// @brief Field status, offset: 0x10, size: 0x4, def value: None
  ::Org::BouncyCastle::Asn1::Cmp::PkiStatus ___status;

  /// @brief Field statusStrings, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1EncodableVector* ___statusStrings;

  /// @brief Field failInfo, offset: 0x20, size: 0x4, def value: None
  int32_t ___failInfo;

  /// @brief Field tokenGenerator, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Tsp::TimeStampTokenGenerator* ___tokenGenerator;

  /// @brief Field acceptedAlgorithms, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::IList* ___acceptedAlgorithms;

  /// @brief Field acceptedPolicies, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::IList* ___acceptedPolicies;

  /// @brief Field acceptedExtensions, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::IList* ___acceptedExtensions;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Tsp::TimeStampResponseGenerator, ___status) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Tsp::TimeStampResponseGenerator, ___statusStrings) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Tsp::TimeStampResponseGenerator, ___failInfo) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Tsp::TimeStampResponseGenerator, ___tokenGenerator) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Tsp::TimeStampResponseGenerator, ___acceptedAlgorithms) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Tsp::TimeStampResponseGenerator, ___acceptedPolicies) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Tsp::TimeStampResponseGenerator, ___acceptedExtensions) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Tsp::TimeStampResponseGenerator, 0x48>, "Size mismatch!");

} // namespace Org::BouncyCastle::Tsp
NEED_NO_BOX(::Org::BouncyCastle::Tsp::TimeStampResponseGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Tsp::TimeStampResponseGenerator*, "Org.BouncyCastle.Tsp", "TimeStampResponseGenerator");
NEED_NO_BOX(::Org::BouncyCastle::Tsp::TimeStampResponseGenerator_FailInfo);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Tsp::TimeStampResponseGenerator_FailInfo*, "Org.BouncyCastle.Tsp", "TimeStampResponseGenerator/FailInfo");
