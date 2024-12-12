#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Tsp/TimeStampResponse.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TimeStampResponse)
namespace Org::BouncyCastle::Asn1::Cmp {
class PkiFailureInfo;
}
namespace Org::BouncyCastle::Asn1::Tsp {
class TimeStampResp;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1InputStream;
}
namespace Org::BouncyCastle::Tsp {
class TimeStampRequest;
}
namespace Org::BouncyCastle::Tsp {
class TimeStampToken;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Tsp {
class TimeStampResponse;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Tsp::TimeStampResponse);
// Dependencies System.Object
namespace Org::BouncyCastle::Tsp {
// Is value type: false
// CS Name: Org.BouncyCastle.Tsp.TimeStampResponse
class CORDL_TYPE TimeStampResponse : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Status)) int32_t Status;

  __declspec(property(get = get_TimeStampToken)) ::Org::BouncyCastle::Tsp::TimeStampToken* TimeStampToken;

  /// @brief Field resp, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_resp, put = __cordl_internal_set_resp)) ::Org::BouncyCastle::Asn1::Tsp::TimeStampResp* resp;

  /// @brief Field timeStampToken, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_timeStampToken, put = __cordl_internal_set_timeStampToken)) ::Org::BouncyCastle::Tsp::TimeStampToken* timeStampToken;

  /// @brief Method GetEncoded, addr 0x25c95a8, size 0x1c, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetEncoded();

  /// @brief Method GetFailInfo, addr 0x25c9128, size 0x80, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Cmp::PkiFailureInfo* GetFailInfo();

  /// @brief Method GetStatusString, addr 0x25c9024, size 0x104, virtual false, abstract: false, final false
  inline ::StringW GetStatusString();

  static inline ::Org::BouncyCastle::Tsp::TimeStampResponse* New_ctor(::System::IO::Stream* input);

  static inline ::Org::BouncyCastle::Tsp::TimeStampResponse* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> resp);

  static inline ::Org::BouncyCastle::Tsp::TimeStampResponse* New_ctor(::Org::BouncyCastle::Asn1::Tsp::TimeStampResp* resp);

  /// @brief Method Validate, addr 0x25c91b0, size 0x310, virtual false, abstract: false, final false
  inline void Validate(::Org::BouncyCastle::Tsp::TimeStampRequest* request);

  constexpr ::Org::BouncyCastle::Asn1::Tsp::TimeStampResp* const& __cordl_internal_get_resp() const;

  constexpr ::Org::BouncyCastle::Asn1::Tsp::TimeStampResp*& __cordl_internal_get_resp();

  constexpr ::Org::BouncyCastle::Tsp::TimeStampToken* const& __cordl_internal_get_timeStampToken() const;

  constexpr ::Org::BouncyCastle::Tsp::TimeStampToken*& __cordl_internal_get_timeStampToken();

  constexpr void __cordl_internal_set_resp(::Org::BouncyCastle::Asn1::Tsp::TimeStampResp* value);

  constexpr void __cordl_internal_set_timeStampToken(::Org::BouncyCastle::Tsp::TimeStampToken* value);

  /// @brief Method .ctor, addr 0x25c8f10, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* input);

  /// @brief Method .ctor, addr 0x25c8d88, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> resp);

  /// @brief Method .ctor, addr 0x25c8ca0, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Tsp::TimeStampResp* resp);

  /// @brief Method get_Status, addr 0x25c8ff4, size 0x30, virtual false, abstract: false, final false
  inline int32_t get_Status();

  /// @brief Method get_TimeStampToken, addr 0x25c91a8, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Tsp::TimeStampToken* get_TimeStampToken();

  /// @brief Method readTimeStampResp, addr 0x25c8dfc, size 0x114, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Tsp::TimeStampResp* readTimeStampResp(::Org::BouncyCastle::Asn1::Asn1InputStream* input);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TimeStampResponse();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TimeStampResponse", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TimeStampResponse(TimeStampResponse&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TimeStampResponse", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TimeStampResponse(TimeStampResponse const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1766 };

  /// @brief Field resp, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Tsp::TimeStampResp* ___resp;

  /// @brief Field timeStampToken, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Tsp::TimeStampToken* ___timeStampToken;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Tsp::TimeStampResponse, ___resp) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Tsp::TimeStampResponse, ___timeStampToken) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Tsp::TimeStampResponse, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Tsp
NEED_NO_BOX(::Org::BouncyCastle::Tsp::TimeStampResponse);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Tsp::TimeStampResponse*, "Org.BouncyCastle.Tsp", "TimeStampResponse");
