#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Specialized/zzzz__NameValueCollection_def.hpp"
#include "System/Net/zzzz__WebHeaderCollectionType_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
struct __WebHeaderCollection__RfcChar;
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
struct __WebHeaderCollection__RfcChar;
}
namespace System::Net {
class WebHeaderCollection;
}
// Write type traits
MARK_VAL_T(::System::Net::__WebHeaderCollection__RfcChar);
MARK_REF_PTR_T(::System::Net::WebHeaderCollection);
// Type: ::RfcChar
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 1, calculated_native_size: 17, minimum_alignment: 1, natural_alignment: 1, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9090))
// CS Name: ::WebHeaderCollection::RfcChar
struct CORDL_TYPE __WebHeaderCollection__RfcChar {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint8_t;

  /// @brief Nested struct ____WebHeaderCollection__RfcChar_Unwrapped
  enum struct ____WebHeaderCollection__RfcChar_Unwrapped : uint8_t {
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
  constexpr operator ____WebHeaderCollection__RfcChar_Unwrapped() const noexcept {
    return static_cast<____WebHeaderCollection__RfcChar_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr __WebHeaderCollection__RfcChar(uint8_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __WebHeaderCollection__RfcChar();

  /// @brief Field value__, offset: 0x0, size: 0x1, def value: None
  uint8_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Field High value: static_cast<uint8_t>(0x0u)
  static ::System::Net::__WebHeaderCollection__RfcChar const High;

  /// @brief Field Reg value: static_cast<uint8_t>(0x1u)
  static ::System::Net::__WebHeaderCollection__RfcChar const Reg;

  /// @brief Field Ctl value: static_cast<uint8_t>(0x2u)
  static ::System::Net::__WebHeaderCollection__RfcChar const Ctl;

  /// @brief Field CR value: static_cast<uint8_t>(0x3u)
  static ::System::Net::__WebHeaderCollection__RfcChar const CR;

  /// @brief Field LF value: static_cast<uint8_t>(0x4u)
  static ::System::Net::__WebHeaderCollection__RfcChar const LF;

  /// @brief Field WS value: static_cast<uint8_t>(0x5u)
  static ::System::Net::__WebHeaderCollection__RfcChar const WS;

  /// @brief Field Colon value: static_cast<uint8_t>(0x6u)
  static ::System::Net::__WebHeaderCollection__RfcChar const Colon;

  /// @brief Field Delim value: static_cast<uint8_t>(0x7u)
  static ::System::Net::__WebHeaderCollection__RfcChar const Delim;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::__WebHeaderCollection__RfcChar, 0x1>, "Size mismatch!");

static_assert(offsetof(::System::Net::__WebHeaderCollection__RfcChar, value__) == 0x0, "Offset mismatch!");

} // namespace System::Net
// Type: System.Net::WebHeaderCollection
// SizeInfo { instance_size: 128, native_size: -1, calculated_instance_size: 128, calculated_native_size: 122, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9513)), TypeDefinitionIndex(TypeDefinitionIndex(9089))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9091))
// CS Name: ::System.Net::WebHeaderCollection*
class CORDL_TYPE WebHeaderCollection : public ::System::Collections::Specialized::NameValueCollection {
public:
  // Declarations
  using RfcChar = ::System::Net::__WebHeaderCollection__RfcChar;

  /// @brief Field m_CommonHeaders, offset 0x60, size 0x8
  __declspec(property(get = __get_m_CommonHeaders, put = __set_m_CommonHeaders))::ArrayW<::StringW, ::Array<::StringW>*> m_CommonHeaders;

  /// @brief Field m_NumCommonHeaders, offset 0x68, size 0x4
  __declspec(property(get = __get_m_NumCommonHeaders, put = __set_m_NumCommonHeaders)) int32_t m_NumCommonHeaders;

  /// @brief Field m_InnerCollection, offset 0x70, size 0x8
  __declspec(property(get = __get_m_InnerCollection, put = __set_m_InnerCollection))::System::Collections::Specialized::NameValueCollection* m_InnerCollection;

  /// @brief Field m_Type, offset 0x78, size 0x2
  __declspec(property(get = __get_m_Type, put = __set_m_Type))::System::Net::WebHeaderCollectionType m_Type;

  /// @brief Field HInfo, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_HInfo, put = setStaticF_HInfo))::System::Net::HeaderInfoTable* HInfo;

  /// @brief Field s_CommonHeaderNames, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_CommonHeaderNames, put = setStaticF_s_CommonHeaderNames))::ArrayW<::StringW, ::Array<::StringW>*> s_CommonHeaderNames;

  /// @brief Field s_CommonHeaderHints, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_CommonHeaderHints, put = setStaticF_s_CommonHeaderHints))::ArrayW<int8_t, ::Array<int8_t>*> s_CommonHeaderHints;

  /// @brief Field HttpTrimCharacters, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_HttpTrimCharacters, put = setStaticF_HttpTrimCharacters))::ArrayW<char16_t, ::Array<char16_t>*> HttpTrimCharacters;

  /// @brief Field RfcCharMap, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_RfcCharMap,
                             put = setStaticF_RfcCharMap))::ArrayW<::System::Net::__WebHeaderCollection__RfcChar, ::Array<::System::Net::__WebHeaderCollection__RfcChar>*> RfcCharMap;

  __declspec(property(get = get_InnerCollection))::System::Collections::Specialized::NameValueCollection* InnerCollection;

  __declspec(property(get = get_AllowHttpRequestHeader)) bool AllowHttpRequestHeader;

  __declspec(property(get = get_Count)) int32_t Count;

  /// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
  constexpr operator ::System::Runtime::Serialization::ISerializable*() noexcept;

  /// @brief Convert to "::System::Runtime::Serialization::ISerializable"
  constexpr ::System::Runtime::Serialization::ISerializable* i___System__Runtime__Serialization__ISerializable() noexcept;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __get_m_CommonHeaders();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __get_m_CommonHeaders() const;

  constexpr void __set_m_CommonHeaders(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr int32_t& __get_m_NumCommonHeaders();

  constexpr int32_t const& __get_m_NumCommonHeaders() const;

  constexpr void __set_m_NumCommonHeaders(int32_t value);

  constexpr ::System::Collections::Specialized::NameValueCollection*& __get_m_InnerCollection();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Specialized::NameValueCollection*> const& __get_m_InnerCollection() const;

  constexpr void __set_m_InnerCollection(::System::Collections::Specialized::NameValueCollection* value);

  constexpr ::System::Net::WebHeaderCollectionType& __get_m_Type();

  constexpr ::System::Net::WebHeaderCollectionType const& __get_m_Type() const;

  constexpr void __set_m_Type(::System::Net::WebHeaderCollectionType value);

  static inline void setStaticF_HInfo(::System::Net::HeaderInfoTable* value);

  static inline ::System::Net::HeaderInfoTable* getStaticF_HInfo();

  static inline void setStaticF_s_CommonHeaderNames(::ArrayW<::StringW, ::Array<::StringW>*> value);

  static inline ::ArrayW<::StringW, ::Array<::StringW>*> getStaticF_s_CommonHeaderNames();

  static inline void setStaticF_s_CommonHeaderHints(::ArrayW<int8_t, ::Array<int8_t>*> value);

  static inline ::ArrayW<int8_t, ::Array<int8_t>*> getStaticF_s_CommonHeaderHints();

  static inline void setStaticF_HttpTrimCharacters(::ArrayW<char16_t, ::Array<char16_t>*> value);

  static inline ::ArrayW<char16_t, ::Array<char16_t>*> getStaticF_HttpTrimCharacters();

  static inline void setStaticF_RfcCharMap(::ArrayW<::System::Net::__WebHeaderCollection__RfcChar, ::Array<::System::Net::__WebHeaderCollection__RfcChar>*> value);

  static inline ::ArrayW<::System::Net::__WebHeaderCollection__RfcChar, ::Array<::System::Net::__WebHeaderCollection__RfcChar>*> getStaticF_RfcCharMap();

  /// @brief Method NormalizeCommonHeaders, addr 0x299fd38, size 0x100, virtual false, abstract: false, final false
  inline void NormalizeCommonHeaders();

  /// @brief Method get_InnerCollection, addr 0x299fe38, size 0xa4, virtual false, abstract: false, final false
  inline ::System::Collections::Specialized::NameValueCollection* get_InnerCollection();

  /// @brief Method AllowMultiValues, addr 0x299fedc, size 0xa8, virtual false, abstract: false, final false
  static inline bool AllowMultiValues(::StringW name);

  /// @brief Method get_AllowHttpRequestHeader, addr 0x29a0060, size 0x38, virtual false, abstract: false, final false
  inline bool get_AllowHttpRequestHeader();

  /// @brief Method Remove, addr 0x29a0098, size 0xf8, virtual false, abstract: false, final false
  inline void Remove(::System::Net::HttpRequestHeader header);

  /// @brief Method AddInternal, addr 0x29a0190, size 0x54, virtual false, abstract: false, final false
  inline void AddInternal(::StringW name, ::StringW value);

  /// @brief Method ChangeInternal, addr 0x29a01e4, size 0x54, virtual false, abstract: false, final false
  inline void ChangeInternal(::StringW name, ::StringW value);

  /// @brief Method RemoveInternal, addr 0x29a0238, size 0x5c, virtual false, abstract: false, final false
  inline void RemoveInternal(::StringW name);

  /// @brief Method CheckBadChars, addr 0x29a0294, size 0x394, virtual false, abstract: false, final false
  static inline ::StringW CheckBadChars(::StringW name, bool isHeaderValue);

  /// @brief Method ContainsNonAsciiChars, addr 0x29a0628, size 0x84, virtual false, abstract: false, final false
  static inline bool ContainsNonAsciiChars(::StringW token);

  /// @brief Method ThrowOnRestrictedHeader, addr 0x29a06ac, size 0x168, virtual false, abstract: false, final false
  inline void ThrowOnRestrictedHeader(::StringW headerName);

  /// @brief Method Add, addr 0x29a0814, size 0x1b4, virtual true, abstract: false, final false
  inline void Add(::StringW name, ::StringW value);

  /// @brief Method Add, addr 0x29a09c8, size 0x2dc, virtual false, abstract: false, final false
  inline void Add(::StringW header);

  /// @brief Method Set, addr 0x29a0ca4, size 0x230, virtual true, abstract: false, final false
  inline void Set(::StringW name, ::StringW value);

  /// @brief Method SetInternal, addr 0x29a0ed4, size 0x224, virtual false, abstract: false, final false
  inline void SetInternal(::StringW name, ::StringW value);

  /// @brief Method Remove, addr 0x29a10f8, size 0x13c, virtual true, abstract: false, final false
  inline void Remove(::StringW name);

  /// @brief Method GetValues, addr 0x29a1234, size 0x208, virtual true, abstract: false, final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> GetValues(::StringW header);

  /// @brief Method ToString, addr 0x29a143c, size 0x5c, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method GetAsString, addr 0x29a1498, size 0x2a4, virtual false, abstract: false, final false
  static inline ::StringW GetAsString(::System::Collections::Specialized::NameValueCollection* cc, bool winInetCompat, bool forTrace);

  static inline ::System::Net::WebHeaderCollection* New_ctor();

  /// @brief Method .ctor, addr 0x29a173c, size 0x64, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Net::WebHeaderCollection* New_ctor(::System::Net::WebHeaderCollectionType type);

  /// @brief Method .ctor, addr 0x29a17a0, size 0xe4, virtual false, abstract: false, final false
  inline void _ctor(::System::Net::WebHeaderCollectionType type);

  static inline ::System::Net::WebHeaderCollection* New_ctor(::System::Runtime::Serialization::SerializationInfo* serializationInfo,
                                                             ::System::Runtime::Serialization::StreamingContext streamingContext);

  /// @brief Method .ctor, addr 0x29a1884, size 0x1c4, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext);

  /// @brief Method OnDeserialization, addr 0x29a1a48, size 0x4, virtual true, abstract: false, final false
  inline void OnDeserialization(::System::Object* sender);

  /// @brief Method GetObjectData, addr 0x29a1a4c, size 0x180, virtual true, abstract: false, final false
  inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext);

  /// @brief Method System.Runtime.Serialization.ISerializable.GetObjectData, addr 0x29a1bcc, size 0xc, virtual true, abstract: false, final true
  inline void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* serializationInfo,
                                                                       ::System::Runtime::Serialization::StreamingContext streamingContext);

  /// @brief Method Get, addr 0x29a1bd8, size 0x328, virtual true, abstract: false, final false
  inline ::StringW Get(::StringW name);

  /// @brief Method GetEnumerator, addr 0x29a1f00, size 0x7c, virtual true, abstract: false, final false
  inline ::System::Collections::IEnumerator* GetEnumerator();

  /// @brief Method get_Count, addr 0x29a1f7c, size 0x30, virtual true, abstract: false, final false
  inline int32_t get_Count();

  /// @brief Method Get, addr 0x29a1fac, size 0x40, virtual true, abstract: false, final false
  inline ::StringW Get(int32_t index);

  /// @brief Method GetValues, addr 0x29a1fec, size 0x40, virtual true, abstract: false, final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> GetValues(int32_t index);

  /// @brief Method GetKey, addr 0x29a202c, size 0x40, virtual true, abstract: false, final false
  inline ::StringW GetKey(int32_t index);

  // Ctor Parameters [CppParam { name: "", ty: "WebHeaderCollection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WebHeaderCollection(WebHeaderCollection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WebHeaderCollection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WebHeaderCollection(WebHeaderCollection const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WebHeaderCollection();

public:
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
static_assert(::cordl_internals::size_check_v<::System::Net::WebHeaderCollection, 0x80>, "Size mismatch!");

static_assert(offsetof(::System::Net::WebHeaderCollection, ___m_CommonHeaders) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebHeaderCollection, ___m_NumCommonHeaders) == 0x68, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebHeaderCollection, ___m_InnerCollection) == 0x70, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebHeaderCollection, ___m_Type) == 0x78, "Offset mismatch!");

} // namespace System::Net
DEFINE_IL2CPP_ARG_TYPE(::System::Net::__WebHeaderCollection__RfcChar, "System.Net", "WebHeaderCollection/RfcChar");
NEED_NO_BOX(::System::Net::WebHeaderCollection);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::WebHeaderCollection*, "System.Net", "WebHeaderCollection");
