#pragma once
// IWYU pragma private; include "System/Net/WebHeaderCollection.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Specialized/zzzz__NameValueCollection_def.hpp"
#include "System/Net/zzzz__WebHeaderCollectionType_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(WebHeaderCollection)
namespace System::Collections::Specialized {
class NameValueCollection;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Net {
class HeaderInfoTable;
}
namespace System::Net {
struct HttpRequestHeader;
}
namespace System::Net {
struct WebHeaderCollectionType;
}
namespace System::Net {
struct WebHeaderCollection_RfcChar;
}
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Net {
struct WebHeaderCollection_RfcChar;
}
namespace System::Net {
class WebHeaderCollection;
}
// Write type traits
MARK_VAL_T(::System::Net::WebHeaderCollection_RfcChar);
MARK_REF_PTR_T(::System::Net::WebHeaderCollection);
// Dependencies
namespace System::Net {
// Is value type: true
// CS Name: System.Net.WebHeaderCollection/RfcChar
struct CORDL_TYPE WebHeaderCollection_RfcChar {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint8_t;

  /// @brief Nested struct __WebHeaderCollection_RfcChar_Unwrapped
  enum struct __WebHeaderCollection_RfcChar_Unwrapped : uint8_t {
    __E_High = static_cast<uint8_t>(0x0u),
    __E_Reg = static_cast<uint8_t>(0x1u),
    __E_Ctl = static_cast<uint8_t>(0x2u),
    __E_CR = static_cast<uint8_t>(0x3u),
    __E_LF = static_cast<uint8_t>(0x4u),
    __E_WS = static_cast<uint8_t>(0x5u),
    __E_Colon = static_cast<uint8_t>(0x6u),
    __E_Delim = static_cast<uint8_t>(0x7u),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __WebHeaderCollection_RfcChar_Unwrapped() const noexcept {
    return static_cast<__WebHeaderCollection_RfcChar_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator uint8_t() const noexcept {
    return static_cast<uint8_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr WebHeaderCollection_RfcChar();

  // Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr WebHeaderCollection_RfcChar(uint8_t value__) noexcept;

  /// @brief Field CR value: U8(3)
  static ::System::Net::WebHeaderCollection_RfcChar const CR;

  /// @brief Field Colon value: U8(6)
  static ::System::Net::WebHeaderCollection_RfcChar const Colon;

  /// @brief Field Ctl value: U8(2)
  static ::System::Net::WebHeaderCollection_RfcChar const Ctl;

  /// @brief Field Delim value: U8(7)
  static ::System::Net::WebHeaderCollection_RfcChar const Delim;

  /// @brief Field High value: U8(0)
  static ::System::Net::WebHeaderCollection_RfcChar const High;

  /// @brief Field LF value: U8(4)
  static ::System::Net::WebHeaderCollection_RfcChar const LF;

  /// @brief Field Reg value: U8(1)
  static ::System::Net::WebHeaderCollection_RfcChar const Reg;

  /// @brief Field WS value: U8(5)
  static ::System::Net::WebHeaderCollection_RfcChar const WS;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11489 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Field value__, offset: 0x0, size: 0x1, def value: None
  uint8_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Net::WebHeaderCollection_RfcChar, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::WebHeaderCollection_RfcChar, 0x1>, "Size mismatch!");

} // namespace System::Net
// Dependencies System.Collections.Specialized.NameValueCollection, System.Net.WebHeaderCollectionType
namespace System::Net {
// Is value type: false
// CS Name: System.Net.WebHeaderCollection
class CORDL_TYPE WebHeaderCollection : public ::System::Collections::Specialized::NameValueCollection {
public:
  // Declarations
  using RfcChar = ::System::Net::WebHeaderCollection_RfcChar;

  __declspec(property(get = get_AllowHttpRequestHeader)) bool AllowHttpRequestHeader;

  __declspec(property(get = get_Count)) int32_t Count;

  /// @brief Field HInfo, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_HInfo, put = setStaticF_HInfo)) ::System::Net::HeaderInfoTable* HInfo;

  /// @brief Field HttpTrimCharacters, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_HttpTrimCharacters, put = setStaticF_HttpTrimCharacters)) ::ArrayW<char16_t, ::Array<char16_t>*> HttpTrimCharacters;

  __declspec(property(get = get_InnerCollection)) ::System::Collections::Specialized::NameValueCollection* InnerCollection;

  /// @brief Field RfcCharMap, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_RfcCharMap, put = setStaticF_RfcCharMap)) ::ArrayW<::System::Net::WebHeaderCollection_RfcChar, ::Array<::System::Net::WebHeaderCollection_RfcChar>*> RfcCharMap;

  /// @brief Field m_CommonHeaders, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CommonHeaders, put = __cordl_internal_set_m_CommonHeaders)) ::ArrayW<::StringW, ::Array<::StringW>*> m_CommonHeaders;

  /// @brief Field m_InnerCollection, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_m_InnerCollection, put = __cordl_internal_set_m_InnerCollection)) ::System::Collections::Specialized::NameValueCollection* m_InnerCollection;

  /// @brief Field m_NumCommonHeaders, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get_m_NumCommonHeaders, put = __cordl_internal_set_m_NumCommonHeaders)) int32_t m_NumCommonHeaders;

  /// @brief Field m_Type, offset 0x78, size 0x2
  __declspec(property(get = __cordl_internal_get_m_Type, put = __cordl_internal_set_m_Type)) ::System::Net::WebHeaderCollectionType m_Type;

  /// @brief Field s_CommonHeaderHints, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_CommonHeaderHints, put = setStaticF_s_CommonHeaderHints)) ::ArrayW<int8_t, ::Array<int8_t>*> s_CommonHeaderHints;

  /// @brief Field s_CommonHeaderNames, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_CommonHeaderNames, put = setStaticF_s_CommonHeaderNames)) ::ArrayW<::StringW, ::Array<::StringW>*> s_CommonHeaderNames;

  /// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
  constexpr operator ::System::Runtime::Serialization::ISerializable*() noexcept;

  /// @brief Method Add, addr 0x625ac98, size 0x2c0, virtual false, abstract: false, final false
  inline void Add(::StringW header);

  /// @brief Method Add, addr 0x625aaf0, size 0x1a8, virtual true, abstract: false, final false
  inline void Add(::StringW name, ::StringW value);

  /// @brief Method AddInternal, addr 0x625a450, size 0x4c, virtual false, abstract: false, final false
  inline void AddInternal(::StringW name, ::StringW value);

  /// @brief Method AllowMultiValues, addr 0x625a180, size 0xac, virtual false, abstract: false, final false
  static inline bool AllowMultiValues(::StringW name);

  /// @brief Method ChangeInternal, addr 0x625a49c, size 0x4c, virtual false, abstract: false, final false
  inline void ChangeInternal(::StringW name, ::StringW value);

  /// @brief Method CheckBadChars, addr 0x625a530, size 0x3d8, virtual false, abstract: false, final false
  static inline ::StringW CheckBadChars(::StringW name, bool isHeaderValue);

  /// @brief Method ContainsNonAsciiChars, addr 0x625a908, size 0x74, virtual false, abstract: false, final false
  static inline bool ContainsNonAsciiChars(::StringW token);

  /// @brief Method Get, addr 0x625c1dc, size 0x40, virtual true, abstract: false, final false
  inline ::StringW Get(int32_t index);

  /// @brief Method Get, addr 0x625be20, size 0x30c, virtual true, abstract: false, final false
  inline ::StringW Get(::StringW name);

  /// @brief Method GetAsString, addr 0x625b734, size 0x2a8, virtual false, abstract: false, final false
  static inline ::StringW GetAsString(::System::Collections::Specialized::NameValueCollection* cc, bool winInetCompat, bool forTrace);

  /// @brief Method GetEnumerator, addr 0x625c12c, size 0x80, virtual true, abstract: false, final false
  inline ::System::Collections::IEnumerator* GetEnumerator();

  /// @brief Method GetKey, addr 0x625c25c, size 0x40, virtual true, abstract: false, final false
  inline ::StringW GetKey(int32_t index);

  /// @brief Method GetObjectData, addr 0x625bc98, size 0x17c, virtual true, abstract: false, final false
  inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext);

  /// @brief Method GetValues, addr 0x625b4c0, size 0x214, virtual true, abstract: false, final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> GetValues(::StringW header);

  /// @brief Method GetValues, addr 0x625c21c, size 0x40, virtual true, abstract: false, final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> GetValues(int32_t index);

  static inline ::System::Net::WebHeaderCollection* New_ctor();

  static inline ::System::Net::WebHeaderCollection* New_ctor(::System::Runtime::Serialization::SerializationInfo* serializationInfo,
                                                             ::System::Runtime::Serialization::StreamingContext streamingContext);

  static inline ::System::Net::WebHeaderCollection* New_ctor(::System::Net::WebHeaderCollectionType type);

  /// @brief Method NormalizeCommonHeaders, addr 0x6259fd8, size 0x104, virtual false, abstract: false, final false
  inline void NormalizeCommonHeaders();

  /// @brief Method OnDeserialization, addr 0x625bc94, size 0x4, virtual true, abstract: false, final false
  inline void OnDeserialization(::System::Object* sender);

  /// @brief Method Remove, addr 0x625a354, size 0xfc, virtual false, abstract: false, final false
  inline void Remove(::System::Net::HttpRequestHeader header);

  /// @brief Method Remove, addr 0x625b394, size 0x12c, virtual true, abstract: false, final false
  inline void Remove(::StringW name);

  /// @brief Method RemoveInternal, addr 0x625a4e8, size 0x48, virtual false, abstract: false, final false
  inline void RemoveInternal(::StringW name);

  /// @brief Method Set, addr 0x625af58, size 0x224, virtual true, abstract: false, final false
  inline void Set(::StringW name, ::StringW value);

  /// @brief Method SetInternal, addr 0x625b17c, size 0x218, virtual false, abstract: false, final false
  inline void SetInternal(::StringW name, ::StringW value);

  /// @brief Method System.Runtime.Serialization.ISerializable.GetObjectData, addr 0x625be14, size 0xc, virtual true, abstract: false, final true
  inline void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* serializationInfo,
                                                                       ::System::Runtime::Serialization::StreamingContext streamingContext);

  /// @brief Method ThrowOnRestrictedHeader, addr 0x625a97c, size 0x174, virtual false, abstract: false, final false
  inline void ThrowOnRestrictedHeader(::StringW headerName);

  /// @brief Method ToString, addr 0x625b6d4, size 0x60, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_m_CommonHeaders() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_m_CommonHeaders();

  constexpr ::System::Collections::Specialized::NameValueCollection* const& __cordl_internal_get_m_InnerCollection() const;

  constexpr ::System::Collections::Specialized::NameValueCollection*& __cordl_internal_get_m_InnerCollection();

  constexpr int32_t const& __cordl_internal_get_m_NumCommonHeaders() const;

  constexpr int32_t& __cordl_internal_get_m_NumCommonHeaders();

  constexpr ::System::Net::WebHeaderCollectionType const& __cordl_internal_get_m_Type() const;

  constexpr ::System::Net::WebHeaderCollectionType& __cordl_internal_get_m_Type();

  constexpr void __cordl_internal_set_m_CommonHeaders(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set_m_InnerCollection(::System::Collections::Specialized::NameValueCollection* value);

  constexpr void __cordl_internal_set_m_NumCommonHeaders(int32_t value);

  constexpr void __cordl_internal_set_m_Type(::System::Net::WebHeaderCollectionType value);

  /// @brief Method .ctor, addr 0x6254b88, size 0x68, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x625bacc, size 0x1c8, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext);

  /// @brief Method .ctor, addr 0x625b9dc, size 0xf0, virtual false, abstract: false, final false
  inline void _ctor(::System::Net::WebHeaderCollectionType type);

  static inline ::System::Net::HeaderInfoTable* getStaticF_HInfo();

  static inline ::ArrayW<char16_t, ::Array<char16_t>*> getStaticF_HttpTrimCharacters();

  static inline ::ArrayW<::System::Net::WebHeaderCollection_RfcChar, ::Array<::System::Net::WebHeaderCollection_RfcChar>*> getStaticF_RfcCharMap();

  static inline ::ArrayW<int8_t, ::Array<int8_t>*> getStaticF_s_CommonHeaderHints();

  static inline ::ArrayW<::StringW, ::Array<::StringW>*> getStaticF_s_CommonHeaderNames();

  /// @brief Method get_AllowHttpRequestHeader, addr 0x625a310, size 0x44, virtual false, abstract: false, final false
  inline bool get_AllowHttpRequestHeader();

  /// @brief Method get_Count, addr 0x625c1ac, size 0x30, virtual true, abstract: false, final false
  inline int32_t get_Count();

  /// @brief Method get_InnerCollection, addr 0x625a0dc, size 0xa4, virtual false, abstract: false, final false
  inline ::System::Collections::Specialized::NameValueCollection* get_InnerCollection();

  /// @brief Convert to "::System::Runtime::Serialization::ISerializable"
  constexpr ::System::Runtime::Serialization::ISerializable* i___System__Runtime__Serialization__ISerializable() noexcept;

  static inline void setStaticF_HInfo(::System::Net::HeaderInfoTable* value);

  static inline void setStaticF_HttpTrimCharacters(::ArrayW<char16_t, ::Array<char16_t>*> value);

  static inline void setStaticF_RfcCharMap(::ArrayW<::System::Net::WebHeaderCollection_RfcChar, ::Array<::System::Net::WebHeaderCollection_RfcChar>*> value);

  static inline void setStaticF_s_CommonHeaderHints(::ArrayW<int8_t, ::Array<int8_t>*> value);

  static inline void setStaticF_s_CommonHeaderNames(::ArrayW<::StringW, ::Array<::StringW>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WebHeaderCollection();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WebHeaderCollection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WebHeaderCollection(WebHeaderCollection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WebHeaderCollection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WebHeaderCollection(WebHeaderCollection const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11490 };

  /// @brief Field m_CommonHeaders, offset: 0x60, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___m_CommonHeaders;

  /// @brief Field m_NumCommonHeaders, offset: 0x68, size: 0x4, def value: None
  int32_t ___m_NumCommonHeaders;

  /// @brief Field m_InnerCollection, offset: 0x70, size: 0x8, def value: None
  ::System::Collections::Specialized::NameValueCollection* ___m_InnerCollection;

  /// @brief Field m_Type, offset: 0x78, size: 0x2, def value: None
  ::System::Net::WebHeaderCollectionType ___m_Type;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::WebHeaderCollection, ___m_CommonHeaders) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebHeaderCollection, ___m_NumCommonHeaders) == 0x68, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebHeaderCollection, ___m_InnerCollection) == 0x70, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebHeaderCollection, ___m_Type) == 0x78, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::WebHeaderCollection, 0x80>, "Size mismatch!");

} // namespace System::Net
DEFINE_IL2CPP_ARG_TYPE(::System::Net::WebHeaderCollection_RfcChar, "System.Net", "WebHeaderCollection/RfcChar");
NEED_NO_BOX(::System::Net::WebHeaderCollection);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::WebHeaderCollection*, "System.Net", "WebHeaderCollection");
