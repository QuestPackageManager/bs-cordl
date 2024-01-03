#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HttpListenerRequestUriBuilder)
namespace System::Text {
class StringBuilder;
}
namespace System::Net {
struct __HttpListenerRequestUriBuilder__EncodingType;
}
namespace System {
class Object;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Text {
class Encoding;
}
namespace System::Net {
struct __HttpListenerRequestUriBuilder__ParsingResult;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System {
class Uri;
}
// Forward declare root types
namespace System::Net {
struct __HttpListenerRequestUriBuilder__EncodingType;
}
namespace System::Net {
struct __HttpListenerRequestUriBuilder__ParsingResult;
}
namespace System::Net {
class HttpListenerRequestUriBuilder;
}
// Write type traits
MARK_VAL_T(::System::Net::__HttpListenerRequestUriBuilder__EncodingType);
MARK_VAL_T(::System::Net::__HttpListenerRequestUriBuilder__ParsingResult);
MARK_REF_PTR_T(::System::Net::HttpListenerRequestUriBuilder);
// Type: ::ParsingResult
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9064))
// CS Name: ::HttpListenerRequestUriBuilder::ParsingResult
struct CORDL_TYPE __HttpListenerRequestUriBuilder__ParsingResult {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____HttpListenerRequestUriBuilder__ParsingResult_Unwrapped
  enum struct ____HttpListenerRequestUriBuilder__ParsingResult_Unwrapped : int32_t {
    __E_Success = static_cast<int32_t>(0x0),
    __E_InvalidString = static_cast<int32_t>(0x1),
    __E_EncodingError = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____HttpListenerRequestUriBuilder__ParsingResult_Unwrapped() const noexcept {
    return static_cast<____HttpListenerRequestUriBuilder__ParsingResult_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __HttpListenerRequestUriBuilder__ParsingResult(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __HttpListenerRequestUriBuilder__ParsingResult();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Success value: static_cast<int32_t>(0x0)
  static ::System::Net::__HttpListenerRequestUriBuilder__ParsingResult const Success;

  /// @brief Field InvalidString value: static_cast<int32_t>(0x1)
  static ::System::Net::__HttpListenerRequestUriBuilder__ParsingResult const InvalidString;

  /// @brief Field EncodingError value: static_cast<int32_t>(0x2)
  static ::System::Net::__HttpListenerRequestUriBuilder__ParsingResult const EncodingError;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::__HttpListenerRequestUriBuilder__ParsingResult, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Net::__HttpListenerRequestUriBuilder__ParsingResult, value__) == 0x0, "Offset mismatch!");

} // namespace System::Net
// Type: ::EncodingType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9065))
// CS Name: ::HttpListenerRequestUriBuilder::EncodingType
struct CORDL_TYPE __HttpListenerRequestUriBuilder__EncodingType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____HttpListenerRequestUriBuilder__EncodingType_Unwrapped
  enum struct ____HttpListenerRequestUriBuilder__EncodingType_Unwrapped : int32_t {
    __E_Primary = static_cast<int32_t>(0x0),
    __E_Secondary = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____HttpListenerRequestUriBuilder__EncodingType_Unwrapped() const noexcept {
    return static_cast<____HttpListenerRequestUriBuilder__EncodingType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __HttpListenerRequestUriBuilder__EncodingType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __HttpListenerRequestUriBuilder__EncodingType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Primary value: static_cast<int32_t>(0x0)
  static ::System::Net::__HttpListenerRequestUriBuilder__EncodingType const Primary;

  /// @brief Field Secondary value: static_cast<int32_t>(0x1)
  static ::System::Net::__HttpListenerRequestUriBuilder__EncodingType const Secondary;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::__HttpListenerRequestUriBuilder__EncodingType, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Net::__HttpListenerRequestUriBuilder__EncodingType, value__) == 0x0, "Offset mismatch!");

} // namespace System::Net
// Type: System.Net::HttpListenerRequestUriBuilder
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9066))
// CS Name: ::System.Net::HttpListenerRequestUriBuilder*
class CORDL_TYPE HttpListenerRequestUriBuilder : public ::System::Object {
public:
  // Declarations
  using EncodingType = ::System::Net::__HttpListenerRequestUriBuilder__EncodingType;

  using ParsingResult = ::System::Net::__HttpListenerRequestUriBuilder__ParsingResult;

  /// @brief Field rawUri, offset 0x10, size 0x8
  __declspec(property(get = __get_rawUri, put = __set_rawUri))::StringW rawUri;

  /// @brief Field cookedUriScheme, offset 0x18, size 0x8
  __declspec(property(get = __get_cookedUriScheme, put = __set_cookedUriScheme))::StringW cookedUriScheme;

  /// @brief Field cookedUriHost, offset 0x20, size 0x8
  __declspec(property(get = __get_cookedUriHost, put = __set_cookedUriHost))::StringW cookedUriHost;

  /// @brief Field cookedUriPath, offset 0x28, size 0x8
  __declspec(property(get = __get_cookedUriPath, put = __set_cookedUriPath))::StringW cookedUriPath;

  /// @brief Field cookedUriQuery, offset 0x30, size 0x8
  __declspec(property(get = __get_cookedUriQuery, put = __set_cookedUriQuery))::StringW cookedUriQuery;

  /// @brief Field requestUriString, offset 0x38, size 0x8
  __declspec(property(get = __get_requestUriString, put = __set_requestUriString))::System::Text::StringBuilder* requestUriString;

  /// @brief Field rawOctets, offset 0x40, size 0x8
  __declspec(property(get = __get_rawOctets, put = __set_rawOctets))::System::Collections::Generic::List_1<uint8_t>* rawOctets;

  /// @brief Field rawPath, offset 0x48, size 0x8
  __declspec(property(get = __get_rawPath, put = __set_rawPath))::StringW rawPath;

  /// @brief Field requestUri, offset 0x50, size 0x8
  __declspec(property(get = __get_requestUri, put = __set_requestUri))::System::Uri* requestUri;

  /// @brief Field useCookedRequestUrl, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_useCookedRequestUrl, put = setStaticF_useCookedRequestUrl)) bool useCookedRequestUrl;

  /// @brief Field utf8Encoding, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_utf8Encoding, put = setStaticF_utf8Encoding))::System::Text::Encoding* utf8Encoding;

  /// @brief Field ansiEncoding, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ansiEncoding, put = setStaticF_ansiEncoding))::System::Text::Encoding* ansiEncoding;

  constexpr ::StringW& __get_rawUri();

  constexpr ::StringW const& __get_rawUri() const;

  constexpr void __set_rawUri(::StringW value);

  constexpr ::StringW& __get_cookedUriScheme();

  constexpr ::StringW const& __get_cookedUriScheme() const;

  constexpr void __set_cookedUriScheme(::StringW value);

  constexpr ::StringW& __get_cookedUriHost();

  constexpr ::StringW const& __get_cookedUriHost() const;

  constexpr void __set_cookedUriHost(::StringW value);

  constexpr ::StringW& __get_cookedUriPath();

  constexpr ::StringW const& __get_cookedUriPath() const;

  constexpr void __set_cookedUriPath(::StringW value);

  constexpr ::StringW& __get_cookedUriQuery();

  constexpr ::StringW const& __get_cookedUriQuery() const;

  constexpr void __set_cookedUriQuery(::StringW value);

  constexpr ::System::Text::StringBuilder*& __get_requestUriString();

  constexpr ::cordl_internals::to_const_pointer<::System::Text::StringBuilder*> const& __get_requestUriString() const;

  constexpr void __set_requestUriString(::System::Text::StringBuilder* value);

  constexpr ::System::Collections::Generic::List_1<uint8_t>*& __get_rawOctets();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<uint8_t>*> const& __get_rawOctets() const;

  constexpr void __set_rawOctets(::System::Collections::Generic::List_1<uint8_t>* value);

  constexpr ::StringW& __get_rawPath();

  constexpr ::StringW const& __get_rawPath() const;

  constexpr void __set_rawPath(::StringW value);

  constexpr ::System::Uri*& __get_requestUri();

  constexpr ::cordl_internals::to_const_pointer<::System::Uri*> const& __get_requestUri() const;

  constexpr void __set_requestUri(::System::Uri* value);

  static inline void setStaticF_useCookedRequestUrl(bool value);

  static inline bool getStaticF_useCookedRequestUrl();

  static inline void setStaticF_utf8Encoding(::System::Text::Encoding* value);

  static inline ::System::Text::Encoding* getStaticF_utf8Encoding();

  static inline void setStaticF_ansiEncoding(::System::Text::Encoding* value);

  static inline ::System::Text::Encoding* getStaticF_ansiEncoding();

  static inline ::System::Net::HttpListenerRequestUriBuilder* New_ctor(::StringW rawUri, ::StringW cookedUriScheme, ::StringW cookedUriHost, ::StringW cookedUriPath, ::StringW cookedUriQuery);

  /// @brief Method .ctor, addr 0x299b934, size 0xcc, virtual false, abstract: false, final false
  inline void _ctor(::StringW rawUri, ::StringW cookedUriScheme, ::StringW cookedUriHost, ::StringW cookedUriPath, ::StringW cookedUriQuery);

  /// @brief Method GetRequestUri, addr 0x299ba7c, size 0x90, virtual false, abstract: false, final false
  static inline ::System::Uri* GetRequestUri(::StringW rawUri, ::StringW cookedUriScheme, ::StringW cookedUriHost, ::StringW cookedUriPath, ::StringW cookedUriQuery);

  /// @brief Method Build, addr 0x299bb0c, size 0xe8, virtual false, abstract: false, final false
  inline ::System::Uri* Build();

  /// @brief Method BuildRequestUriUsingCookedPath, addr 0x299bbf4, size 0x294, virtual false, abstract: false, final false
  inline void BuildRequestUriUsingCookedPath();

  /// @brief Method BuildRequestUriUsingRawPath, addr 0x299be88, size 0x384, virtual false, abstract: false, final false
  inline void BuildRequestUriUsingRawPath();

  /// @brief Method GetEncoding, addr 0x299c384, size 0x6c, virtual false, abstract: false, final false
  static inline ::System::Text::Encoding* GetEncoding(::System::Net::__HttpListenerRequestUriBuilder__EncodingType type);

  /// @brief Method BuildRequestUriUsingRawPath, addr 0x299c3f0, size 0x250, virtual false, abstract: false, final false
  inline ::System::Net::__HttpListenerRequestUriBuilder__ParsingResult BuildRequestUriUsingRawPath(::System::Text::Encoding* encoding);

  /// @brief Method ParseRawPath, addr 0x299c640, size 0x150, virtual false, abstract: false, final false
  inline ::System::Net::__HttpListenerRequestUriBuilder__ParsingResult ParseRawPath(::System::Text::Encoding* encoding);

  /// @brief Method AppendUnicodeCodePointValuePercentEncoded, addr 0x299cb38, size 0x314, virtual false, abstract: false, final false
  inline bool AppendUnicodeCodePointValuePercentEncoded(::StringW codePoint);

  /// @brief Method AddPercentEncodedOctetToRawOctetsList, addr 0x299ce4c, size 0x154, virtual false, abstract: false, final false
  inline bool AddPercentEncodedOctetToRawOctetsList(::System::Text::Encoding* encoding, ::StringW escapedCharacter);

  /// @brief Method EmptyDecodeAndAppendRawOctetsList, addr 0x299c790, size 0x3a8, virtual false, abstract: false, final false
  inline bool EmptyDecodeAndAppendRawOctetsList(::System::Text::Encoding* encoding);

  /// @brief Method AppendOctetsPercentEncoded, addr 0x299cfa0, size 0x36c, virtual false, abstract: false, final false
  static inline void AppendOctetsPercentEncoded(::System::Text::StringBuilder* target, ::System::Collections::Generic::IEnumerable_1<uint8_t>* octets);

  /// @brief Method GetOctetsAsString, addr 0x299d30c, size 0x3d8, virtual false, abstract: false, final false
  static inline ::StringW GetOctetsAsString(::System::Collections::Generic::IEnumerable_1<uint8_t>* octets);

  /// @brief Method GetPath, addr 0x299c214, size 0x170, virtual false, abstract: false, final false
  static inline ::StringW GetPath(::StringW uriString);

  /// @brief Method AddSlashToAsteriskOnlyPath, addr 0x299ba00, size 0x7c, virtual false, abstract: false, final false
  static inline ::StringW AddSlashToAsteriskOnlyPath(::StringW path);

  /// @brief Method LogWarning, addr 0x299c20c, size 0x8, virtual false, abstract: false, final false
  inline void LogWarning(::StringW methodName, ::StringW message, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  // Ctor Parameters [CppParam { name: "", ty: "HttpListenerRequestUriBuilder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HttpListenerRequestUriBuilder(HttpListenerRequestUriBuilder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HttpListenerRequestUriBuilder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HttpListenerRequestUriBuilder(HttpListenerRequestUriBuilder const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HttpListenerRequestUriBuilder();

public:
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
static_assert(::cordl_internals::size_check_v<::System::Net::HttpListenerRequestUriBuilder, 0x58>, "Size mismatch!");

static_assert(offsetof(::System::Net::HttpListenerRequestUriBuilder, ___rawUri) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpListenerRequestUriBuilder, ___cookedUriScheme) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpListenerRequestUriBuilder, ___cookedUriHost) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpListenerRequestUriBuilder, ___cookedUriPath) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpListenerRequestUriBuilder, ___cookedUriQuery) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpListenerRequestUriBuilder, ___requestUriString) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpListenerRequestUriBuilder, ___rawOctets) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpListenerRequestUriBuilder, ___rawPath) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpListenerRequestUriBuilder, ___requestUri) == 0x50, "Offset mismatch!");

} // namespace System::Net
DEFINE_IL2CPP_ARG_TYPE(::System::Net::__HttpListenerRequestUriBuilder__EncodingType, "System.Net", "HttpListenerRequestUriBuilder/EncodingType");
DEFINE_IL2CPP_ARG_TYPE(::System::Net::__HttpListenerRequestUriBuilder__ParsingResult, "System.Net", "HttpListenerRequestUriBuilder/ParsingResult");
NEED_NO_BOX(::System::Net::HttpListenerRequestUriBuilder);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::HttpListenerRequestUriBuilder*, "System.Net", "HttpListenerRequestUriBuilder");
