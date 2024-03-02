#pragma once
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
// Type: System.Net::HttpStatusCode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: true
// CS Name: ::System.Net::HttpStatusCode
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
  constexpr operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr HttpStatusCode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr HttpStatusCode(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Accepted value: static_cast<int32_t>(0xca)
  static ::System::Net::HttpStatusCode const Accepted;

  /// @brief Field AlreadyReported value: static_cast<int32_t>(0xd0)
  static ::System::Net::HttpStatusCode const AlreadyReported;

  /// @brief Field Ambiguous value: static_cast<int32_t>(0x12c)
  static ::System::Net::HttpStatusCode const Ambiguous;

  /// @brief Field BadGateway value: static_cast<int32_t>(0x1f6)
  static ::System::Net::HttpStatusCode const BadGateway;

  /// @brief Field BadRequest value: static_cast<int32_t>(0x190)
  static ::System::Net::HttpStatusCode const BadRequest;

  /// @brief Field Conflict value: static_cast<int32_t>(0x199)
  static ::System::Net::HttpStatusCode const Conflict;

  /// @brief Field Continue value: static_cast<int32_t>(0x64)
  static ::System::Net::HttpStatusCode const Continue;

  /// @brief Field Created value: static_cast<int32_t>(0xc9)
  static ::System::Net::HttpStatusCode const Created;

  /// @brief Field EarlyHints value: static_cast<int32_t>(0x67)
  static ::System::Net::HttpStatusCode const EarlyHints;

  /// @brief Field ExpectationFailed value: static_cast<int32_t>(0x1a1)
  static ::System::Net::HttpStatusCode const ExpectationFailed;

  /// @brief Field FailedDependency value: static_cast<int32_t>(0x1a8)
  static ::System::Net::HttpStatusCode const FailedDependency;

  /// @brief Field Forbidden value: static_cast<int32_t>(0x193)
  static ::System::Net::HttpStatusCode const Forbidden;

  /// @brief Field Found value: static_cast<int32_t>(0x12e)
  static ::System::Net::HttpStatusCode const Found;

  /// @brief Field GatewayTimeout value: static_cast<int32_t>(0x1f8)
  static ::System::Net::HttpStatusCode const GatewayTimeout;

  /// @brief Field Gone value: static_cast<int32_t>(0x19a)
  static ::System::Net::HttpStatusCode const Gone;

  /// @brief Field HttpVersionNotSupported value: static_cast<int32_t>(0x1f9)
  static ::System::Net::HttpStatusCode const HttpVersionNotSupported;

  /// @brief Field IMUsed value: static_cast<int32_t>(0xe2)
  static ::System::Net::HttpStatusCode const IMUsed;

  /// @brief Field InsufficientStorage value: static_cast<int32_t>(0x1fb)
  static ::System::Net::HttpStatusCode const InsufficientStorage;

  /// @brief Field InternalServerError value: static_cast<int32_t>(0x1f4)
  static ::System::Net::HttpStatusCode const InternalServerError;

  /// @brief Field LengthRequired value: static_cast<int32_t>(0x19b)
  static ::System::Net::HttpStatusCode const LengthRequired;

  /// @brief Field Locked value: static_cast<int32_t>(0x1a7)
  static ::System::Net::HttpStatusCode const Locked;

  /// @brief Field LoopDetected value: static_cast<int32_t>(0x1fc)
  static ::System::Net::HttpStatusCode const LoopDetected;

  /// @brief Field MethodNotAllowed value: static_cast<int32_t>(0x195)
  static ::System::Net::HttpStatusCode const MethodNotAllowed;

  /// @brief Field MisdirectedRequest value: static_cast<int32_t>(0x1a5)
  static ::System::Net::HttpStatusCode const MisdirectedRequest;

  /// @brief Field Moved value: static_cast<int32_t>(0x12d)
  static ::System::Net::HttpStatusCode const Moved;

  /// @brief Field MovedPermanently value: static_cast<int32_t>(0x12d)
  static ::System::Net::HttpStatusCode const MovedPermanently;

  /// @brief Field MultiStatus value: static_cast<int32_t>(0xcf)
  static ::System::Net::HttpStatusCode const MultiStatus;

  /// @brief Field MultipleChoices value: static_cast<int32_t>(0x12c)
  static ::System::Net::HttpStatusCode const MultipleChoices;

  /// @brief Field NetworkAuthenticationRequired value: static_cast<int32_t>(0x1ff)
  static ::System::Net::HttpStatusCode const NetworkAuthenticationRequired;

  /// @brief Field NoContent value: static_cast<int32_t>(0xcc)
  static ::System::Net::HttpStatusCode const NoContent;

  /// @brief Field NonAuthoritativeInformation value: static_cast<int32_t>(0xcb)
  static ::System::Net::HttpStatusCode const NonAuthoritativeInformation;

  /// @brief Field NotAcceptable value: static_cast<int32_t>(0x196)
  static ::System::Net::HttpStatusCode const NotAcceptable;

  /// @brief Field NotExtended value: static_cast<int32_t>(0x1fe)
  static ::System::Net::HttpStatusCode const NotExtended;

  /// @brief Field NotFound value: static_cast<int32_t>(0x194)
  static ::System::Net::HttpStatusCode const NotFound;

  /// @brief Field NotImplemented value: static_cast<int32_t>(0x1f5)
  static ::System::Net::HttpStatusCode const NotImplemented;

  /// @brief Field NotModified value: static_cast<int32_t>(0x130)
  static ::System::Net::HttpStatusCode const NotModified;

  /// @brief Field OK value: static_cast<int32_t>(0xc8)
  static ::System::Net::HttpStatusCode const OK;

  /// @brief Field PartialContent value: static_cast<int32_t>(0xce)
  static ::System::Net::HttpStatusCode const PartialContent;

  /// @brief Field PaymentRequired value: static_cast<int32_t>(0x192)
  static ::System::Net::HttpStatusCode const PaymentRequired;

  /// @brief Field PermanentRedirect value: static_cast<int32_t>(0x134)
  static ::System::Net::HttpStatusCode const PermanentRedirect;

  /// @brief Field PreconditionFailed value: static_cast<int32_t>(0x19c)
  static ::System::Net::HttpStatusCode const PreconditionFailed;

  /// @brief Field PreconditionRequired value: static_cast<int32_t>(0x1ac)
  static ::System::Net::HttpStatusCode const PreconditionRequired;

  /// @brief Field Processing value: static_cast<int32_t>(0x66)
  static ::System::Net::HttpStatusCode const Processing;

  /// @brief Field ProxyAuthenticationRequired value: static_cast<int32_t>(0x197)
  static ::System::Net::HttpStatusCode const ProxyAuthenticationRequired;

  /// @brief Field Redirect value: static_cast<int32_t>(0x12e)
  static ::System::Net::HttpStatusCode const Redirect;

  /// @brief Field RedirectKeepVerb value: static_cast<int32_t>(0x133)
  static ::System::Net::HttpStatusCode const RedirectKeepVerb;

  /// @brief Field RedirectMethod value: static_cast<int32_t>(0x12f)
  static ::System::Net::HttpStatusCode const RedirectMethod;

  /// @brief Field RequestEntityTooLarge value: static_cast<int32_t>(0x19d)
  static ::System::Net::HttpStatusCode const RequestEntityTooLarge;

  /// @brief Field RequestHeaderFieldsTooLarge value: static_cast<int32_t>(0x1af)
  static ::System::Net::HttpStatusCode const RequestHeaderFieldsTooLarge;

  /// @brief Field RequestTimeout value: static_cast<int32_t>(0x198)
  static ::System::Net::HttpStatusCode const RequestTimeout;

  /// @brief Field RequestUriTooLong value: static_cast<int32_t>(0x19e)
  static ::System::Net::HttpStatusCode const RequestUriTooLong;

  /// @brief Field RequestedRangeNotSatisfiable value: static_cast<int32_t>(0x1a0)
  static ::System::Net::HttpStatusCode const RequestedRangeNotSatisfiable;

  /// @brief Field ResetContent value: static_cast<int32_t>(0xcd)
  static ::System::Net::HttpStatusCode const ResetContent;

  /// @brief Field SeeOther value: static_cast<int32_t>(0x12f)
  static ::System::Net::HttpStatusCode const SeeOther;

  /// @brief Field ServiceUnavailable value: static_cast<int32_t>(0x1f7)
  static ::System::Net::HttpStatusCode const ServiceUnavailable;

  /// @brief Field SwitchingProtocols value: static_cast<int32_t>(0x65)
  static ::System::Net::HttpStatusCode const SwitchingProtocols;

  /// @brief Field TemporaryRedirect value: static_cast<int32_t>(0x133)
  static ::System::Net::HttpStatusCode const TemporaryRedirect;

  /// @brief Field TooManyRequests value: static_cast<int32_t>(0x1ad)
  static ::System::Net::HttpStatusCode const TooManyRequests;

  /// @brief Field Unauthorized value: static_cast<int32_t>(0x191)
  static ::System::Net::HttpStatusCode const Unauthorized;

  /// @brief Field UnavailableForLegalReasons value: static_cast<int32_t>(0x1c3)
  static ::System::Net::HttpStatusCode const UnavailableForLegalReasons;

  /// @brief Field UnprocessableEntity value: static_cast<int32_t>(0x1a6)
  static ::System::Net::HttpStatusCode const UnprocessableEntity;

  /// @brief Field UnsupportedMediaType value: static_cast<int32_t>(0x19f)
  static ::System::Net::HttpStatusCode const UnsupportedMediaType;

  /// @brief Field Unused value: static_cast<int32_t>(0x132)
  static ::System::Net::HttpStatusCode const Unused;

  /// @brief Field UpgradeRequired value: static_cast<int32_t>(0x1aa)
  static ::System::Net::HttpStatusCode const UpgradeRequired;

  /// @brief Field UseProxy value: static_cast<int32_t>(0x131)
  static ::System::Net::HttpStatusCode const UseProxy;

  /// @brief Field VariantAlsoNegotiates value: static_cast<int32_t>(0x1fa)
  static ::System::Net::HttpStatusCode const VariantAlsoNegotiates;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::HttpStatusCode, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Net::HttpStatusCode, value__) == 0x0, "Offset mismatch!");

} // namespace System::Net
DEFINE_IL2CPP_ARG_TYPE(::System::Net::HttpStatusCode, "System.Net", "HttpStatusCode");
