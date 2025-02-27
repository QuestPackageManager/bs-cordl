#pragma once
// IWYU pragma private; include "System/Net/HttpRequestHeader.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HttpRequestHeader)
// Forward declare root types
namespace System::Net {
struct HttpRequestHeader;
}
// Write type traits
MARK_VAL_T(::System::Net::HttpRequestHeader);
// Dependencies
namespace System::Net {
// Is value type: true
// CS Name: System.Net.HttpRequestHeader
struct CORDL_TYPE HttpRequestHeader {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __HttpRequestHeader_Unwrapped
  enum struct __HttpRequestHeader_Unwrapped : int32_t {
    __E_CacheControl = static_cast<int32_t>(0x0),
    __E_Connection = static_cast<int32_t>(0x1),
    __E_Date = static_cast<int32_t>(0x2),
    __E_KeepAlive = static_cast<int32_t>(0x3),
    __E_Pragma = static_cast<int32_t>(0x4),
    __E_Trailer = static_cast<int32_t>(0x5),
    __E_TransferEncoding = static_cast<int32_t>(0x6),
    __E_Upgrade = static_cast<int32_t>(0x7),
    __E_Via = static_cast<int32_t>(0x8),
    __E_Warning = static_cast<int32_t>(0x9),
    __E_Allow = static_cast<int32_t>(0xa),
    __E_ContentLength = static_cast<int32_t>(0xb),
    __E_ContentType = static_cast<int32_t>(0xc),
    __E_ContentEncoding = static_cast<int32_t>(0xd),
    __E_ContentLanguage = static_cast<int32_t>(0xe),
    __E_ContentLocation = static_cast<int32_t>(0xf),
    __E_ContentMd5 = static_cast<int32_t>(0x10),
    __E_ContentRange = static_cast<int32_t>(0x11),
    __E_Expires = static_cast<int32_t>(0x12),
    __E_LastModified = static_cast<int32_t>(0x13),
    __E_Accept = static_cast<int32_t>(0x14),
    __E_AcceptCharset = static_cast<int32_t>(0x15),
    __E_AcceptEncoding = static_cast<int32_t>(0x16),
    __E_AcceptLanguage = static_cast<int32_t>(0x17),
    __E_Authorization = static_cast<int32_t>(0x18),
    __E_Cookie = static_cast<int32_t>(0x19),
    __E_Expect = static_cast<int32_t>(0x1a),
    __E_From = static_cast<int32_t>(0x1b),
    __E_Host = static_cast<int32_t>(0x1c),
    __E_IfMatch = static_cast<int32_t>(0x1d),
    __E_IfModifiedSince = static_cast<int32_t>(0x1e),
    __E_IfNoneMatch = static_cast<int32_t>(0x1f),
    __E_IfRange = static_cast<int32_t>(0x20),
    __E_IfUnmodifiedSince = static_cast<int32_t>(0x21),
    __E_MaxForwards = static_cast<int32_t>(0x22),
    __E_ProxyAuthorization = static_cast<int32_t>(0x23),
    __E_Referer = static_cast<int32_t>(0x24),
    __E_Range = static_cast<int32_t>(0x25),
    __E_Te = static_cast<int32_t>(0x26),
    __E_Translate = static_cast<int32_t>(0x27),
    __E_UserAgent = static_cast<int32_t>(0x28),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __HttpRequestHeader_Unwrapped() const noexcept {
    return static_cast<__HttpRequestHeader_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr HttpRequestHeader();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr HttpRequestHeader(int32_t value__) noexcept;

  /// @brief Field Accept value: I32(20)
  static ::System::Net::HttpRequestHeader const Accept;

  /// @brief Field AcceptCharset value: I32(21)
  static ::System::Net::HttpRequestHeader const AcceptCharset;

  /// @brief Field AcceptEncoding value: I32(22)
  static ::System::Net::HttpRequestHeader const AcceptEncoding;

  /// @brief Field AcceptLanguage value: I32(23)
  static ::System::Net::HttpRequestHeader const AcceptLanguage;

  /// @brief Field Allow value: I32(10)
  static ::System::Net::HttpRequestHeader const Allow;

  /// @brief Field Authorization value: I32(24)
  static ::System::Net::HttpRequestHeader const Authorization;

  /// @brief Field CacheControl value: I32(0)
  static ::System::Net::HttpRequestHeader const CacheControl;

  /// @brief Field Connection value: I32(1)
  static ::System::Net::HttpRequestHeader const Connection;

  /// @brief Field ContentEncoding value: I32(13)
  static ::System::Net::HttpRequestHeader const ContentEncoding;

  /// @brief Field ContentLanguage value: I32(14)
  static ::System::Net::HttpRequestHeader const ContentLanguage;

  /// @brief Field ContentLength value: I32(11)
  static ::System::Net::HttpRequestHeader const ContentLength;

  /// @brief Field ContentLocation value: I32(15)
  static ::System::Net::HttpRequestHeader const ContentLocation;

  /// @brief Field ContentMd5 value: I32(16)
  static ::System::Net::HttpRequestHeader const ContentMd5;

  /// @brief Field ContentRange value: I32(17)
  static ::System::Net::HttpRequestHeader const ContentRange;

  /// @brief Field ContentType value: I32(12)
  static ::System::Net::HttpRequestHeader const ContentType;

  /// @brief Field Cookie value: I32(25)
  static ::System::Net::HttpRequestHeader const Cookie;

  /// @brief Field Date value: I32(2)
  static ::System::Net::HttpRequestHeader const Date;

  /// @brief Field Expect value: I32(26)
  static ::System::Net::HttpRequestHeader const Expect;

  /// @brief Field Expires value: I32(18)
  static ::System::Net::HttpRequestHeader const Expires;

  /// @brief Field From value: I32(27)
  static ::System::Net::HttpRequestHeader const From;

  /// @brief Field Host value: I32(28)
  static ::System::Net::HttpRequestHeader const Host;

  /// @brief Field IfMatch value: I32(29)
  static ::System::Net::HttpRequestHeader const IfMatch;

  /// @brief Field IfModifiedSince value: I32(30)
  static ::System::Net::HttpRequestHeader const IfModifiedSince;

  /// @brief Field IfNoneMatch value: I32(31)
  static ::System::Net::HttpRequestHeader const IfNoneMatch;

  /// @brief Field IfRange value: I32(32)
  static ::System::Net::HttpRequestHeader const IfRange;

  /// @brief Field IfUnmodifiedSince value: I32(33)
  static ::System::Net::HttpRequestHeader const IfUnmodifiedSince;

  /// @brief Field KeepAlive value: I32(3)
  static ::System::Net::HttpRequestHeader const KeepAlive;

  /// @brief Field LastModified value: I32(19)
  static ::System::Net::HttpRequestHeader const LastModified;

  /// @brief Field MaxForwards value: I32(34)
  static ::System::Net::HttpRequestHeader const MaxForwards;

  /// @brief Field Pragma value: I32(4)
  static ::System::Net::HttpRequestHeader const Pragma;

  /// @brief Field ProxyAuthorization value: I32(35)
  static ::System::Net::HttpRequestHeader const ProxyAuthorization;

  /// @brief Field Range value: I32(37)
  static ::System::Net::HttpRequestHeader const Range;

  /// @brief Field Referer value: I32(36)
  static ::System::Net::HttpRequestHeader const Referer;

  /// @brief Field Te value: I32(38)
  static ::System::Net::HttpRequestHeader const Te;

  /// @brief Field Trailer value: I32(5)
  static ::System::Net::HttpRequestHeader const Trailer;

  /// @brief Field TransferEncoding value: I32(6)
  static ::System::Net::HttpRequestHeader const TransferEncoding;

  /// @brief Field Translate value: I32(39)
  static ::System::Net::HttpRequestHeader const Translate;

  /// @brief Field Upgrade value: I32(7)
  static ::System::Net::HttpRequestHeader const Upgrade;

  /// @brief Field UserAgent value: I32(40)
  static ::System::Net::HttpRequestHeader const UserAgent;

  /// @brief Field Via value: I32(8)
  static ::System::Net::HttpRequestHeader const Via;

  /// @brief Field Warning value: I32(9)
  static ::System::Net::HttpRequestHeader const Warning;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9588 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Net::HttpRequestHeader, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::HttpRequestHeader, 0x4>, "Size mismatch!");

} // namespace System::Net
DEFINE_IL2CPP_ARG_TYPE(::System::Net::HttpRequestHeader, "System.Net", "HttpRequestHeader");
