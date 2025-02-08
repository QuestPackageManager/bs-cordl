#pragma once
// IWYU pragma private; include "System/Net/HttpListenerRequestUriBuilder.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HttpListenerRequestUriBuilder)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Net {
struct HttpListenerRequestUriBuilder_EncodingType;
}
namespace System::Net {
struct HttpListenerRequestUriBuilder_ParsingResult;
}
namespace System::Text {
class Encoding;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
class Object;
}
namespace System {
class Uri;
}
// Forward declare root types
namespace System::Net {
struct HttpListenerRequestUriBuilder_EncodingType;
}
namespace System::Net {
struct HttpListenerRequestUriBuilder_ParsingResult;
}
namespace System::Net {
class HttpListenerRequestUriBuilder;
}
// Write type traits
MARK_VAL_T(::System::Net::HttpListenerRequestUriBuilder_EncodingType);
MARK_VAL_T(::System::Net::HttpListenerRequestUriBuilder_ParsingResult);
MARK_REF_PTR_T(::System::Net::HttpListenerRequestUriBuilder);
// Dependencies
namespace System::Net {
// Is value type: true
// CS Name: System.Net.HttpListenerRequestUriBuilder/ParsingResult
struct CORDL_TYPE HttpListenerRequestUriBuilder_ParsingResult {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __HttpListenerRequestUriBuilder_ParsingResult_Unwrapped
  enum struct __HttpListenerRequestUriBuilder_ParsingResult_Unwrapped : int32_t {
    __E_Success = static_cast<int32_t>(0x0),
    __E_InvalidString = static_cast<int32_t>(0x1),
    __E_EncodingError = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __HttpListenerRequestUriBuilder_ParsingResult_Unwrapped() const noexcept {
    return static_cast<__HttpListenerRequestUriBuilder_ParsingResult_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr HttpListenerRequestUriBuilder_ParsingResult();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr HttpListenerRequestUriBuilder_ParsingResult(int32_t value__) noexcept;

  /// @brief Field EncodingError value: I32(2)
  static ::System::Net::HttpListenerRequestUriBuilder_ParsingResult const EncodingError;

  /// @brief Field InvalidString value: I32(1)
  static ::System::Net::HttpListenerRequestUriBuilder_ParsingResult const InvalidString;

  /// @brief Field Success value: I32(0)
  static ::System::Net::HttpListenerRequestUriBuilder_ParsingResult const Success;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9584 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Net::HttpListenerRequestUriBuilder_ParsingResult, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::HttpListenerRequestUriBuilder_ParsingResult, 0x4>, "Size mismatch!");

} // namespace System::Net
// Dependencies
namespace System::Net {
// Is value type: true
// CS Name: System.Net.HttpListenerRequestUriBuilder/EncodingType
struct CORDL_TYPE HttpListenerRequestUriBuilder_EncodingType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __HttpListenerRequestUriBuilder_EncodingType_Unwrapped
  enum struct __HttpListenerRequestUriBuilder_EncodingType_Unwrapped : int32_t {
    __E_Primary = static_cast<int32_t>(0x0),
    __E_Secondary = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __HttpListenerRequestUriBuilder_EncodingType_Unwrapped() const noexcept {
    return static_cast<__HttpListenerRequestUriBuilder_EncodingType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr HttpListenerRequestUriBuilder_EncodingType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr HttpListenerRequestUriBuilder_EncodingType(int32_t value__) noexcept;

  /// @brief Field Primary value: I32(0)
  static ::System::Net::HttpListenerRequestUriBuilder_EncodingType const Primary;

  /// @brief Field Secondary value: I32(1)
  static ::System::Net::HttpListenerRequestUriBuilder_EncodingType const Secondary;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9585 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Net::HttpListenerRequestUriBuilder_EncodingType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::HttpListenerRequestUriBuilder_EncodingType, 0x4>, "Size mismatch!");

} // namespace System::Net
// Dependencies System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.HttpListenerRequestUriBuilder
class CORDL_TYPE HttpListenerRequestUriBuilder : public ::System::Object {
public:
  // Declarations
  using EncodingType = ::System::Net::HttpListenerRequestUriBuilder_EncodingType;

  using ParsingResult = ::System::Net::HttpListenerRequestUriBuilder_ParsingResult;

  /// @brief Field ansiEncoding, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ansiEncoding, put = setStaticF_ansiEncoding)) ::System::Text::Encoding* ansiEncoding;

  /// @brief Field cookedUriHost, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_cookedUriHost, put = __cordl_internal_set_cookedUriHost)) ::StringW cookedUriHost;

  /// @brief Field cookedUriPath, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_cookedUriPath, put = __cordl_internal_set_cookedUriPath)) ::StringW cookedUriPath;

  /// @brief Field cookedUriQuery, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_cookedUriQuery, put = __cordl_internal_set_cookedUriQuery)) ::StringW cookedUriQuery;

  /// @brief Field cookedUriScheme, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_cookedUriScheme, put = __cordl_internal_set_cookedUriScheme)) ::StringW cookedUriScheme;

  /// @brief Field rawOctets, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_rawOctets, put = __cordl_internal_set_rawOctets)) ::System::Collections::Generic::List_1<uint8_t>* rawOctets;

  /// @brief Field rawPath, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_rawPath, put = __cordl_internal_set_rawPath)) ::StringW rawPath;

  /// @brief Field rawUri, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_rawUri, put = __cordl_internal_set_rawUri)) ::StringW rawUri;

  /// @brief Field requestUri, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_requestUri, put = __cordl_internal_set_requestUri)) ::System::Uri* requestUri;

  /// @brief Field requestUriString, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_requestUriString, put = __cordl_internal_set_requestUriString)) ::System::Text::StringBuilder* requestUriString;

  /// @brief Field useCookedRequestUrl, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF_useCookedRequestUrl, put = setStaticF_useCookedRequestUrl)) bool useCookedRequestUrl;

  /// @brief Field utf8Encoding, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_utf8Encoding, put = setStaticF_utf8Encoding)) ::System::Text::Encoding* utf8Encoding;

  /// @brief Method AddPercentEncodedOctetToRawOctetsList, addr 0x44a4a8c, size 0x150, virtual false, abstract: false, final false
  inline bool AddPercentEncodedOctetToRawOctetsList(::System::Text::Encoding* encoding, ::StringW escapedCharacter);

  /// @brief Method AddSlashToAsteriskOnlyPath, addr 0x44a3760, size 0x7c, virtual false, abstract: false, final false
  static inline ::StringW AddSlashToAsteriskOnlyPath(::StringW path);

  /// @brief Method AppendOctetsPercentEncoded, addr 0x44a4bdc, size 0x368, virtual false, abstract: false, final false
  static inline void AppendOctetsPercentEncoded(::System::Text::StringBuilder* target, ::System::Collections::Generic::IEnumerable_1<uint8_t>* octets);

  /// @brief Method AppendUnicodeCodePointValuePercentEncoded, addr 0x44a4780, size 0x30c, virtual false, abstract: false, final false
  inline bool AppendUnicodeCodePointValuePercentEncoded(::StringW codePoint);

  /// @brief Method Build, addr 0x44a386c, size 0xe8, virtual false, abstract: false, final false
  inline ::System::Uri* Build();

  /// @brief Method BuildRequestUriUsingCookedPath, addr 0x44a3954, size 0x204, virtual false, abstract: false, final false
  inline void BuildRequestUriUsingCookedPath();

  /// @brief Method BuildRequestUriUsingRawPath, addr 0x44a403c, size 0x254, virtual false, abstract: false, final false
  inline ::System::Net::HttpListenerRequestUriBuilder_ParsingResult BuildRequestUriUsingRawPath(::System::Text::Encoding* encoding);

  /// @brief Method BuildRequestUriUsingRawPath, addr 0x44a3b58, size 0x300, virtual false, abstract: false, final false
  inline void BuildRequestUriUsingRawPath();

  /// @brief Method EmptyDecodeAndAppendRawOctetsList, addr 0x44a43e0, size 0x3a0, virtual false, abstract: false, final false
  inline bool EmptyDecodeAndAppendRawOctetsList(::System::Text::Encoding* encoding);

  /// @brief Method GetEncoding, addr 0x44a3fd0, size 0x6c, virtual false, abstract: false, final false
  static inline ::System::Text::Encoding* GetEncoding(::System::Net::HttpListenerRequestUriBuilder_EncodingType type);

  /// @brief Method GetOctetsAsString, addr 0x44a4f44, size 0x3ec, virtual false, abstract: false, final false
  static inline ::StringW GetOctetsAsString(::System::Collections::Generic::IEnumerable_1<uint8_t>* octets);

  /// @brief Method GetPath, addr 0x44a3e60, size 0x170, virtual false, abstract: false, final false
  static inline ::StringW GetPath(::StringW uriString);

  /// @brief Method GetRequestUri, addr 0x44a37dc, size 0x90, virtual false, abstract: false, final false
  static inline ::System::Uri* GetRequestUri(::StringW rawUri, ::StringW cookedUriScheme, ::StringW cookedUriHost, ::StringW cookedUriPath, ::StringW cookedUriQuery);

  /// @brief Method LogWarning, addr 0x44a3e58, size 0x8, virtual false, abstract: false, final false
  inline void LogWarning(::StringW methodName, ::StringW message, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  static inline ::System::Net::HttpListenerRequestUriBuilder* New_ctor(::StringW rawUri, ::StringW cookedUriScheme, ::StringW cookedUriHost, ::StringW cookedUriPath, ::StringW cookedUriQuery);

  /// @brief Method ParseRawPath, addr 0x44a4290, size 0x150, virtual false, abstract: false, final false
  inline ::System::Net::HttpListenerRequestUriBuilder_ParsingResult ParseRawPath(::System::Text::Encoding* encoding);

  constexpr ::StringW const& __cordl_internal_get_cookedUriHost() const;

  constexpr ::StringW& __cordl_internal_get_cookedUriHost();

  constexpr ::StringW const& __cordl_internal_get_cookedUriPath() const;

  constexpr ::StringW& __cordl_internal_get_cookedUriPath();

  constexpr ::StringW const& __cordl_internal_get_cookedUriQuery() const;

  constexpr ::StringW& __cordl_internal_get_cookedUriQuery();

  constexpr ::StringW const& __cordl_internal_get_cookedUriScheme() const;

  constexpr ::StringW& __cordl_internal_get_cookedUriScheme();

  constexpr ::System::Collections::Generic::List_1<uint8_t>* const& __cordl_internal_get_rawOctets() const;

  constexpr ::System::Collections::Generic::List_1<uint8_t>*& __cordl_internal_get_rawOctets();

  constexpr ::StringW const& __cordl_internal_get_rawPath() const;

  constexpr ::StringW& __cordl_internal_get_rawPath();

  constexpr ::StringW const& __cordl_internal_get_rawUri() const;

  constexpr ::StringW& __cordl_internal_get_rawUri();

  constexpr ::System::Uri* const& __cordl_internal_get_requestUri() const;

  constexpr ::System::Uri*& __cordl_internal_get_requestUri();

  constexpr ::System::Text::StringBuilder* const& __cordl_internal_get_requestUriString() const;

  constexpr ::System::Text::StringBuilder*& __cordl_internal_get_requestUriString();

  constexpr void __cordl_internal_set_cookedUriHost(::StringW value);

  constexpr void __cordl_internal_set_cookedUriPath(::StringW value);

  constexpr void __cordl_internal_set_cookedUriQuery(::StringW value);

  constexpr void __cordl_internal_set_cookedUriScheme(::StringW value);

  constexpr void __cordl_internal_set_rawOctets(::System::Collections::Generic::List_1<uint8_t>* value);

  constexpr void __cordl_internal_set_rawPath(::StringW value);

  constexpr void __cordl_internal_set_rawUri(::StringW value);

  constexpr void __cordl_internal_set_requestUri(::System::Uri* value);

  constexpr void __cordl_internal_set_requestUriString(::System::Text::StringBuilder* value);

  /// @brief Method .ctor, addr 0x44a369c, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::StringW rawUri, ::StringW cookedUriScheme, ::StringW cookedUriHost, ::StringW cookedUriPath, ::StringW cookedUriQuery);

  static inline ::System::Text::Encoding* getStaticF_ansiEncoding();

  static inline bool getStaticF_useCookedRequestUrl();

  static inline ::System::Text::Encoding* getStaticF_utf8Encoding();

  static inline void setStaticF_ansiEncoding(::System::Text::Encoding* value);

  static inline void setStaticF_useCookedRequestUrl(bool value);

  static inline void setStaticF_utf8Encoding(::System::Text::Encoding* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HttpListenerRequestUriBuilder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HttpListenerRequestUriBuilder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HttpListenerRequestUriBuilder(HttpListenerRequestUriBuilder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HttpListenerRequestUriBuilder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HttpListenerRequestUriBuilder(HttpListenerRequestUriBuilder const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9586 };

  /// @brief Field rawUri, offset: 0x10, size: 0x8, def value: None
  ::StringW ___rawUri;

  /// @brief Field cookedUriScheme, offset: 0x18, size: 0x8, def value: None
  ::StringW ___cookedUriScheme;

  /// @brief Field cookedUriHost, offset: 0x20, size: 0x8, def value: None
  ::StringW ___cookedUriHost;

  /// @brief Field cookedUriPath, offset: 0x28, size: 0x8, def value: None
  ::StringW ___cookedUriPath;

  /// @brief Field cookedUriQuery, offset: 0x30, size: 0x8, def value: None
  ::StringW ___cookedUriQuery;

  /// @brief Field requestUriString, offset: 0x38, size: 0x8, def value: None
  ::System::Text::StringBuilder* ___requestUriString;

  /// @brief Field rawOctets, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<uint8_t>* ___rawOctets;

  /// @brief Field rawPath, offset: 0x48, size: 0x8, def value: None
  ::StringW ___rawPath;

  /// @brief Field requestUri, offset: 0x50, size: 0x8, def value: None
  ::System::Uri* ___requestUri;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::HttpListenerRequestUriBuilder, ___rawUri) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpListenerRequestUriBuilder, ___cookedUriScheme) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpListenerRequestUriBuilder, ___cookedUriHost) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpListenerRequestUriBuilder, ___cookedUriPath) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpListenerRequestUriBuilder, ___cookedUriQuery) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpListenerRequestUriBuilder, ___requestUriString) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpListenerRequestUriBuilder, ___rawOctets) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpListenerRequestUriBuilder, ___rawPath) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpListenerRequestUriBuilder, ___requestUri) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::HttpListenerRequestUriBuilder, 0x58>, "Size mismatch!");

} // namespace System::Net
DEFINE_IL2CPP_ARG_TYPE(::System::Net::HttpListenerRequestUriBuilder_EncodingType, "System.Net", "HttpListenerRequestUriBuilder/EncodingType");
DEFINE_IL2CPP_ARG_TYPE(::System::Net::HttpListenerRequestUriBuilder_ParsingResult, "System.Net", "HttpListenerRequestUriBuilder/ParsingResult");
NEED_NO_BOX(::System::Net::HttpListenerRequestUriBuilder);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::HttpListenerRequestUriBuilder*, "System.Net", "HttpListenerRequestUriBuilder");
