#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Tsp/TimeStampRequestGenerator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TimeStampRequestGenerator)
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace Org::BouncyCastle::Asn1 {
class DerBoolean;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Tsp {
class TimeStampRequest;
}
namespace System::Collections {
class IDictionary;
}
namespace System::Collections {
class IList;
}
// Forward declare root types
namespace Org::BouncyCastle::Tsp {
class TimeStampRequestGenerator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Tsp::TimeStampRequestGenerator);
// Dependencies System.Object
namespace Org::BouncyCastle::Tsp {
// Is value type: false
// CS Name: Org.BouncyCastle.Tsp.TimeStampRequestGenerator
class CORDL_TYPE TimeStampRequestGenerator : public ::System::Object {
public:
  // Declarations
  /// @brief Field certReq, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_certReq, put = __cordl_internal_set_certReq)) ::Org::BouncyCastle::Asn1::DerBoolean* certReq;

  /// @brief Field extOrdering, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_extOrdering, put = __cordl_internal_set_extOrdering)) ::System::Collections::IList* extOrdering;

  /// @brief Field extensions, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_extensions, put = __cordl_internal_set_extensions)) ::System::Collections::IDictionary* extensions;

  /// @brief Field reqPolicy, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_reqPolicy, put = __cordl_internal_set_reqPolicy)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* reqPolicy;

  /// @brief Method AddExtension, addr 0x25c97b8, size 0x1a0, virtual true, abstract: false, final false
  inline void AddExtension(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid, bool critical, ::ArrayW<uint8_t, ::Array<uint8_t>*> extValue);

  /// @brief Method AddExtension, addr 0x25c976c, size 0x4c, virtual true, abstract: false, final false
  inline void AddExtension(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid, bool critical, ::Org::BouncyCastle::Asn1::Asn1Encodable* extValue);

  /// @brief Method AddExtension, addr 0x25c9598, size 0x1d4, virtual false, abstract: false, final false
  inline void AddExtension(::StringW oid, bool critical, ::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method AddExtension, addr 0x25c9554, size 0x44, virtual false, abstract: false, final false
  inline void AddExtension(::StringW oid, bool critical, ::Org::BouncyCastle::Asn1::Asn1Encodable* value);

  /// @brief Method Generate, addr 0x25c9c18, size 0x1c, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Tsp::TimeStampRequest* Generate(::Org::BouncyCastle::Asn1::DerObjectIdentifier* digestAlgorithm, ::ArrayW<uint8_t, ::Array<uint8_t>*> digest);

  /// @brief Method Generate, addr 0x25c9c34, size 0x18, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Tsp::TimeStampRequest* Generate(::Org::BouncyCastle::Asn1::DerObjectIdentifier* digestAlgorithm, ::ArrayW<uint8_t, ::Array<uint8_t>*> digest,
                                                              ::Org::BouncyCastle::Math::BigInteger* nonce);

  /// @brief Method Generate, addr 0x25c9958, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Tsp::TimeStampRequest* Generate(::StringW digestAlgorithm, ::ArrayW<uint8_t, ::Array<uint8_t>*> digest);

  /// @brief Method Generate, addr 0x25c9960, size 0x2b8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Tsp::TimeStampRequest* Generate(::StringW digestAlgorithmOid, ::ArrayW<uint8_t, ::Array<uint8_t>*> digest, ::Org::BouncyCastle::Math::BigInteger* nonce);

  static inline ::Org::BouncyCastle::Tsp::TimeStampRequestGenerator* New_ctor();

  /// @brief Method SetCertReq, addr 0x25c94e8, size 0x6c, virtual false, abstract: false, final false
  inline void SetCertReq(bool certReq);

  /// @brief Method SetReqPolicy, addr 0x25c9480, size 0x68, virtual false, abstract: false, final false
  inline void SetReqPolicy(::StringW reqPolicy);

  constexpr ::Org::BouncyCastle::Asn1::DerBoolean* const& __cordl_internal_get_certReq() const;

  constexpr ::Org::BouncyCastle::Asn1::DerBoolean*& __cordl_internal_get_certReq();

  constexpr ::System::Collections::IList* const& __cordl_internal_get_extOrdering() const;

  constexpr ::System::Collections::IList*& __cordl_internal_get_extOrdering();

  constexpr ::System::Collections::IDictionary* const& __cordl_internal_get_extensions() const;

  constexpr ::System::Collections::IDictionary*& __cordl_internal_get_extensions();

  constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier* const& __cordl_internal_get_reqPolicy() const;

  constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& __cordl_internal_get_reqPolicy();

  constexpr void __cordl_internal_set_certReq(::Org::BouncyCastle::Asn1::DerBoolean* value);

  constexpr void __cordl_internal_set_extOrdering(::System::Collections::IList* value);

  constexpr void __cordl_internal_set_extensions(::System::Collections::IDictionary* value);

  constexpr void __cordl_internal_set_reqPolicy(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  /// @brief Method .ctor, addr 0x25c9c4c, size 0x70, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TimeStampRequestGenerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TimeStampRequestGenerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TimeStampRequestGenerator(TimeStampRequestGenerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TimeStampRequestGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TimeStampRequestGenerator(TimeStampRequestGenerator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1765 };

  /// @brief Field reqPolicy, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerObjectIdentifier* ___reqPolicy;

  /// @brief Field certReq, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerBoolean* ___certReq;

  /// @brief Field extensions, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::IDictionary* ___extensions;

  /// @brief Field extOrdering, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::IList* ___extOrdering;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Tsp::TimeStampRequestGenerator, ___reqPolicy) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Tsp::TimeStampRequestGenerator, ___certReq) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Tsp::TimeStampRequestGenerator, ___extensions) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Tsp::TimeStampRequestGenerator, ___extOrdering) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Tsp::TimeStampRequestGenerator, 0x30>, "Size mismatch!");

} // namespace Org::BouncyCastle::Tsp
NEED_NO_BOX(::Org::BouncyCastle::Tsp::TimeStampRequestGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Tsp::TimeStampRequestGenerator*, "Org.BouncyCastle.Tsp", "TimeStampRequestGenerator");
