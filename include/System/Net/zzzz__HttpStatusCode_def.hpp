#pragma once
// IWYU pragma private; include "System/Net/HttpStatusCode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HttpStatusCode)
// Forward declare root types
namespace System::Net {
struct HttpStatusCode;
}
// Write type traits
MARK_VAL_T(::System::Net::HttpStatusCode);
// Dependencies
namespace System::Net {
// Is value type: true
// CS Name: System.Net.HttpStatusCode
struct CORDL_TYPE HttpStatusCode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __HttpStatusCode_Unwrapped
  enum struct __HttpStatusCode_Unwrapped : int32_t {
    __E_Continue = static_cast<int32_t>(0x64),
    __E_SwitchingProtocols = static_cast<int32_t>(0x65),
    __E_Processing = static_cast<int32_t>(0x66),
    __E_EarlyHints = static_cast<int32_t>(0x67),
    __E_OK = static_cast<int32_t>(0xc8),
    __E_Created = static_cast<int32_t>(0xc9),
    __E_Accepted = static_cast<int32_t>(0xca),
    __E_NonAuthoritativeInformation = static_cast<int32_t>(0xcb),
    __E_NoContent = static_cast<int32_t>(0xcc),
    __E_ResetContent = static_cast<int32_t>(0xcd),
    __E_PartialContent = static_cast<int32_t>(0xce),
    __E_MultiStatus = static_cast<int32_t>(0xcf),
    __E_AlreadyReported = static_cast<int32_t>(0xd0),
    __E_IMUsed = static_cast<int32_t>(0xe2),
    __E_MultipleChoices = static_cast<int32_t>(0x12c),
    __E_Ambiguous = static_cast<int32_t>(0x12c),
    __E_MovedPermanently = static_cast<int32_t>(0x12d),
    __E_Moved = static_cast<int32_t>(0x12d),
    __E_Found = static_cast<int32_t>(0x12e),
    __E_Redirect = static_cast<int32_t>(0x12e),
    __E_SeeOther = static_cast<int32_t>(0x12f),
    __E_RedirectMethod = static_cast<int32_t>(0x12f),
    __E_NotModified = static_cast<int32_t>(0x130),
    __E_UseProxy = static_cast<int32_t>(0x131),
    __E_Unused = static_cast<int32_t>(0x132),
    __E_TemporaryRedirect = static_cast<int32_t>(0x133),
    __E_RedirectKeepVerb = static_cast<int32_t>(0x133),
    __E_PermanentRedirect = static_cast<int32_t>(0x134),
    __E_BadRequest = static_cast<int32_t>(0x190),
    __E_Unauthorized = static_cast<int32_t>(0x191),
    __E_PaymentRequired = static_cast<int32_t>(0x192),
    __E_Forbidden = static_cast<int32_t>(0x193),
    __E_NotFound = static_cast<int32_t>(0x194),
    __E_MethodNotAllowed = static_cast<int32_t>(0x195),
    __E_NotAcceptable = static_cast<int32_t>(0x196),
    __E_ProxyAuthenticationRequired = static_cast<int32_t>(0x197),
    __E_RequestTimeout = static_cast<int32_t>(0x198),
    __E_Conflict = static_cast<int32_t>(0x199),
    __E_Gone = static_cast<int32_t>(0x19a),
    __E_LengthRequired = static_cast<int32_t>(0x19b),
    __E_PreconditionFailed = static_cast<int32_t>(0x19c),
    __E_RequestEntityTooLarge = static_cast<int32_t>(0x19d),
    __E_RequestUriTooLong = static_cast<int32_t>(0x19e),
    __E_UnsupportedMediaType = static_cast<int32_t>(0x19f),
    __E_RequestedRangeNotSatisfiable = static_cast<int32_t>(0x1a0),
    __E_ExpectationFailed = static_cast<int32_t>(0x1a1),
    __E_MisdirectedRequest = static_cast<int32_t>(0x1a5),
    __E_UnprocessableEntity = static_cast<int32_t>(0x1a6),
    __E_Locked = static_cast<int32_t>(0x1a7),
    __E_FailedDependency = static_cast<int32_t>(0x1a8),
    __E_UpgradeRequired = static_cast<int32_t>(0x1aa),
    __E_PreconditionRequired = static_cast<int32_t>(0x1ac),
    __E_TooManyRequests = static_cast<int32_t>(0x1ad),
    __E_RequestHeaderFieldsTooLarge = static_cast<int32_t>(0x1af),
    __E_UnavailableForLegalReasons = static_cast<int32_t>(0x1c3),
    __E_InternalServerError = static_cast<int32_t>(0x1f4),
    __E_NotImplemented = static_cast<int32_t>(0x1f5),
    __E_BadGateway = static_cast<int32_t>(0x1f6),
    __E_ServiceUnavailable = static_cast<int32_t>(0x1f7),
    __E_GatewayTimeout = static_cast<int32_t>(0x1f8),
    __E_HttpVersionNotSupported = static_cast<int32_t>(0x1f9),
    __E_VariantAlsoNegotiates = static_cast<int32_t>(0x1fa),
    __E_InsufficientStorage = static_cast<int32_t>(0x1fb),
    __E_LoopDetected = static_cast<int32_t>(0x1fc),
    __E_NotExtended = static_cast<int32_t>(0x1fe),
    __E_NetworkAuthenticationRequired = static_cast<int32_t>(0x1ff),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __HttpStatusCode_Unwrapped() const noexcept {
    return static_cast<__HttpStatusCode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr HttpStatusCode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr HttpStatusCode(int32_t value__) noexcept;

  /// @brief Field Accepted value: I32(202)
  static ::System::Net::HttpStatusCode const Accepted;

  /// @brief Field AlreadyReported value: I32(208)
  static ::System::Net::HttpStatusCode const AlreadyReported;

  /// @brief Field Ambiguous value: I32(300)
  static ::System::Net::HttpStatusCode const Ambiguous;

  /// @brief Field BadGateway value: I32(502)
  static ::System::Net::HttpStatusCode const BadGateway;

  /// @brief Field BadRequest value: I32(400)
  static ::System::Net::HttpStatusCode const BadRequest;

  /// @brief Field Conflict value: I32(409)
  static ::System::Net::HttpStatusCode const Conflict;

  /// @brief Field Continue value: I32(100)
  static ::System::Net::HttpStatusCode const Continue;

  /// @brief Field Created value: I32(201)
  static ::System::Net::HttpStatusCode const Created;

  /// @brief Field EarlyHints value: I32(103)
  static ::System::Net::HttpStatusCode const EarlyHints;

  /// @brief Field ExpectationFailed value: I32(417)
  static ::System::Net::HttpStatusCode const ExpectationFailed;

  /// @brief Field FailedDependency value: I32(424)
  static ::System::Net::HttpStatusCode const FailedDependency;

  /// @brief Field Forbidden value: I32(403)
  static ::System::Net::HttpStatusCode const Forbidden;

  /// @brief Field Found value: I32(302)
  static ::System::Net::HttpStatusCode const Found;

  /// @brief Field GatewayTimeout value: I32(504)
  static ::System::Net::HttpStatusCode const GatewayTimeout;

  /// @brief Field Gone value: I32(410)
  static ::System::Net::HttpStatusCode const Gone;

  /// @brief Field HttpVersionNotSupported value: I32(505)
  static ::System::Net::HttpStatusCode const HttpVersionNotSupported;

  /// @brief Field IMUsed value: I32(226)
  static ::System::Net::HttpStatusCode const IMUsed;

  /// @brief Field InsufficientStorage value: I32(507)
  static ::System::Net::HttpStatusCode const InsufficientStorage;

  /// @brief Field InternalServerError value: I32(500)
  static ::System::Net::HttpStatusCode const InternalServerError;

  /// @brief Field LengthRequired value: I32(411)
  static ::System::Net::HttpStatusCode const LengthRequired;

  /// @brief Field Locked value: I32(423)
  static ::System::Net::HttpStatusCode const Locked;

  /// @brief Field LoopDetected value: I32(508)
  static ::System::Net::HttpStatusCode const LoopDetected;

  /// @brief Field MethodNotAllowed value: I32(405)
  static ::System::Net::HttpStatusCode const MethodNotAllowed;

  /// @brief Field MisdirectedRequest value: I32(421)
  static ::System::Net::HttpStatusCode const MisdirectedRequest;

  /// @brief Field Moved value: I32(301)
  static ::System::Net::HttpStatusCode const Moved;

  /// @brief Field MovedPermanently value: I32(301)
  static ::System::Net::HttpStatusCode const MovedPermanently;

  /// @brief Field MultiStatus value: I32(207)
  static ::System::Net::HttpStatusCode const MultiStatus;

  /// @brief Field MultipleChoices value: I32(300)
  static ::System::Net::HttpStatusCode const MultipleChoices;

  /// @brief Field NetworkAuthenticationRequired value: I32(511)
  static ::System::Net::HttpStatusCode const NetworkAuthenticationRequired;

  /// @brief Field NoContent value: I32(204)
  static ::System::Net::HttpStatusCode const NoContent;

  /// @brief Field NonAuthoritativeInformation value: I32(203)
  static ::System::Net::HttpStatusCode const NonAuthoritativeInformation;

  /// @brief Field NotAcceptable value: I32(406)
  static ::System::Net::HttpStatusCode const NotAcceptable;

  /// @brief Field NotExtended value: I32(510)
  static ::System::Net::HttpStatusCode const NotExtended;

  /// @brief Field NotFound value: I32(404)
  static ::System::Net::HttpStatusCode const NotFound;

  /// @brief Field NotImplemented value: I32(501)
  static ::System::Net::HttpStatusCode const NotImplemented;

  /// @brief Field NotModified value: I32(304)
  static ::System::Net::HttpStatusCode const NotModified;

  /// @brief Field OK value: I32(200)
  static ::System::Net::HttpStatusCode const OK;

  /// @brief Field PartialContent value: I32(206)
  static ::System::Net::HttpStatusCode const PartialContent;

  /// @brief Field PaymentRequired value: I32(402)
  static ::System::Net::HttpStatusCode const PaymentRequired;

  /// @brief Field PermanentRedirect value: I32(308)
  static ::System::Net::HttpStatusCode const PermanentRedirect;

  /// @brief Field PreconditionFailed value: I32(412)
  static ::System::Net::HttpStatusCode const PreconditionFailed;

  /// @brief Field PreconditionRequired value: I32(428)
  static ::System::Net::HttpStatusCode const PreconditionRequired;

  /// @brief Field Processing value: I32(102)
  static ::System::Net::HttpStatusCode const Processing;

  /// @brief Field ProxyAuthenticationRequired value: I32(407)
  static ::System::Net::HttpStatusCode const ProxyAuthenticationRequired;

  /// @brief Field Redirect value: I32(302)
  static ::System::Net::HttpStatusCode const Redirect;

  /// @brief Field RedirectKeepVerb value: I32(307)
  static ::System::Net::HttpStatusCode const RedirectKeepVerb;

  /// @brief Field RedirectMethod value: I32(303)
  static ::System::Net::HttpStatusCode const RedirectMethod;

  /// @brief Field RequestEntityTooLarge value: I32(413)
  static ::System::Net::HttpStatusCode const RequestEntityTooLarge;

  /// @brief Field RequestHeaderFieldsTooLarge value: I32(431)
  static ::System::Net::HttpStatusCode const RequestHeaderFieldsTooLarge;

  /// @brief Field RequestTimeout value: I32(408)
  static ::System::Net::HttpStatusCode const RequestTimeout;

  /// @brief Field RequestUriTooLong value: I32(414)
  static ::System::Net::HttpStatusCode const RequestUriTooLong;

  /// @brief Field RequestedRangeNotSatisfiable value: I32(416)
  static ::System::Net::HttpStatusCode const RequestedRangeNotSatisfiable;

  /// @brief Field ResetContent value: I32(205)
  static ::System::Net::HttpStatusCode const ResetContent;

  /// @brief Field SeeOther value: I32(303)
  static ::System::Net::HttpStatusCode const SeeOther;

  /// @brief Field ServiceUnavailable value: I32(503)
  static ::System::Net::HttpStatusCode const ServiceUnavailable;

  /// @brief Field SwitchingProtocols value: I32(101)
  static ::System::Net::HttpStatusCode const SwitchingProtocols;

  /// @brief Field TemporaryRedirect value: I32(307)
  static ::System::Net::HttpStatusCode const TemporaryRedirect;

  /// @brief Field TooManyRequests value: I32(429)
  static ::System::Net::HttpStatusCode const TooManyRequests;

  /// @brief Field Unauthorized value: I32(401)
  static ::System::Net::HttpStatusCode const Unauthorized;

  /// @brief Field UnavailableForLegalReasons value: I32(451)
  static ::System::Net::HttpStatusCode const UnavailableForLegalReasons;

  /// @brief Field UnprocessableEntity value: I32(422)
  static ::System::Net::HttpStatusCode const UnprocessableEntity;

  /// @brief Field UnsupportedMediaType value: I32(415)
  static ::System::Net::HttpStatusCode const UnsupportedMediaType;

  /// @brief Field Unused value: I32(306)
  static ::System::Net::HttpStatusCode const Unused;

  /// @brief Field UpgradeRequired value: I32(426)
  static ::System::Net::HttpStatusCode const UpgradeRequired;

  /// @brief Field UseProxy value: I32(305)
  static ::System::Net::HttpStatusCode const UseProxy;

  /// @brief Field VariantAlsoNegotiates value: I32(506)
  static ::System::Net::HttpStatusCode const VariantAlsoNegotiates;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9546 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Net::HttpStatusCode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::HttpStatusCode, 0x4>, "Size mismatch!");

} // namespace System::Net
DEFINE_IL2CPP_ARG_TYPE(::System::Net::HttpStatusCode, "System.Net", "HttpStatusCode");
