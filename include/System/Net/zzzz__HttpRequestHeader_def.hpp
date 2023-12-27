#pragma once
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
// Type: System.Net::HttpRequestHeader
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9067))
// CS Name: ::System.Net::HttpRequestHeader
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr HttpRequestHeader(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr HttpRequestHeader();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field CacheControl value: static_cast<int32_t>(0x0)
  static ::System::Net::HttpRequestHeader const CacheControl;

  /// @brief Field Connection value: static_cast<int32_t>(0x1)
  static ::System::Net::HttpRequestHeader const Connection;

  /// @brief Field Date value: static_cast<int32_t>(0x2)
  static ::System::Net::HttpRequestHeader const Date;

  /// @brief Field KeepAlive value: static_cast<int32_t>(0x3)
  static ::System::Net::HttpRequestHeader const KeepAlive;

  /// @brief Field Pragma value: static_cast<int32_t>(0x4)
  static ::System::Net::HttpRequestHeader const Pragma;

  /// @brief Field Trailer value: static_cast<int32_t>(0x5)
  static ::System::Net::HttpRequestHeader const Trailer;

  /// @brief Field TransferEncoding value: static_cast<int32_t>(0x6)
  static ::System::Net::HttpRequestHeader const TransferEncoding;

  /// @brief Field Upgrade value: static_cast<int32_t>(0x7)
  static ::System::Net::HttpRequestHeader const Upgrade;

  /// @brief Field Via value: static_cast<int32_t>(0x8)
  static ::System::Net::HttpRequestHeader const Via;

  /// @brief Field Warning value: static_cast<int32_t>(0x9)
  static ::System::Net::HttpRequestHeader const Warning;

  /// @brief Field Allow value: static_cast<int32_t>(0xa)
  static ::System::Net::HttpRequestHeader const Allow;

  /// @brief Field ContentLength value: static_cast<int32_t>(0xb)
  static ::System::Net::HttpRequestHeader const ContentLength;

  /// @brief Field ContentType value: static_cast<int32_t>(0xc)
  static ::System::Net::HttpRequestHeader const ContentType;

  /// @brief Field ContentEncoding value: static_cast<int32_t>(0xd)
  static ::System::Net::HttpRequestHeader const ContentEncoding;

  /// @brief Field ContentLanguage value: static_cast<int32_t>(0xe)
  static ::System::Net::HttpRequestHeader const ContentLanguage;

  /// @brief Field ContentLocation value: static_cast<int32_t>(0xf)
  static ::System::Net::HttpRequestHeader const ContentLocation;

  /// @brief Field ContentMd5 value: static_cast<int32_t>(0x10)
  static ::System::Net::HttpRequestHeader const ContentMd5;

  /// @brief Field ContentRange value: static_cast<int32_t>(0x11)
  static ::System::Net::HttpRequestHeader const ContentRange;

  /// @brief Field Expires value: static_cast<int32_t>(0x12)
  static ::System::Net::HttpRequestHeader const Expires;

  /// @brief Field LastModified value: static_cast<int32_t>(0x13)
  static ::System::Net::HttpRequestHeader const LastModified;

  /// @brief Field Accept value: static_cast<int32_t>(0x14)
  static ::System::Net::HttpRequestHeader const Accept;

  /// @brief Field AcceptCharset value: static_cast<int32_t>(0x15)
  static ::System::Net::HttpRequestHeader const AcceptCharset;

  /// @brief Field AcceptEncoding value: static_cast<int32_t>(0x16)
  static ::System::Net::HttpRequestHeader const AcceptEncoding;

  /// @brief Field AcceptLanguage value: static_cast<int32_t>(0x17)
  static ::System::Net::HttpRequestHeader const AcceptLanguage;

  /// @brief Field Authorization value: static_cast<int32_t>(0x18)
  static ::System::Net::HttpRequestHeader const Authorization;

  /// @brief Field Cookie value: static_cast<int32_t>(0x19)
  static ::System::Net::HttpRequestHeader const Cookie;

  /// @brief Field Expect value: static_cast<int32_t>(0x1a)
  static ::System::Net::HttpRequestHeader const Expect;

  /// @brief Field From value: static_cast<int32_t>(0x1b)
  static ::System::Net::HttpRequestHeader const From;

  /// @brief Field Host value: static_cast<int32_t>(0x1c)
  static ::System::Net::HttpRequestHeader const Host;

  /// @brief Field IfMatch value: static_cast<int32_t>(0x1d)
  static ::System::Net::HttpRequestHeader const IfMatch;

  /// @brief Field IfModifiedSince value: static_cast<int32_t>(0x1e)
  static ::System::Net::HttpRequestHeader const IfModifiedSince;

  /// @brief Field IfNoneMatch value: static_cast<int32_t>(0x1f)
  static ::System::Net::HttpRequestHeader const IfNoneMatch;

  /// @brief Field IfRange value: static_cast<int32_t>(0x20)
  static ::System::Net::HttpRequestHeader const IfRange;

  /// @brief Field IfUnmodifiedSince value: static_cast<int32_t>(0x21)
  static ::System::Net::HttpRequestHeader const IfUnmodifiedSince;

  /// @brief Field MaxForwards value: static_cast<int32_t>(0x22)
  static ::System::Net::HttpRequestHeader const MaxForwards;

  /// @brief Field ProxyAuthorization value: static_cast<int32_t>(0x23)
  static ::System::Net::HttpRequestHeader const ProxyAuthorization;

  /// @brief Field Referer value: static_cast<int32_t>(0x24)
  static ::System::Net::HttpRequestHeader const Referer;

  /// @brief Field Range value: static_cast<int32_t>(0x25)
  static ::System::Net::HttpRequestHeader const Range;

  /// @brief Field Te value: static_cast<int32_t>(0x26)
  static ::System::Net::HttpRequestHeader const Te;

  /// @brief Field Translate value: static_cast<int32_t>(0x27)
  static ::System::Net::HttpRequestHeader const Translate;

  /// @brief Field UserAgent value: static_cast<int32_t>(0x28)
  static ::System::Net::HttpRequestHeader const UserAgent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::HttpRequestHeader, 0x4>, "Size mismatch!");

} // namespace System::Net
DEFINE_IL2CPP_ARG_TYPE(::System::Net::HttpRequestHeader, "System.Net", "HttpRequestHeader");
