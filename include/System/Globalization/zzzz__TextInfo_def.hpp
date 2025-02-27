#pragma once
// IWYU pragma private; include "System/Globalization/TextInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Serialization/zzzz__IDeserializationCallback_def.hpp"
#include "System/zzzz__ICloneable_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TextInfo)
namespace System::Globalization {
class CultureData;
}
namespace System::Globalization {
struct UnicodeCategory;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
class Object;
}
namespace System {
template <typename T> struct ReadOnlySpan_1;
}
namespace System {
template <typename T> struct Span_1;
}
// Forward declare root types
namespace System::Globalization {
class TextInfo;
}
// Write type traits
MARK_REF_PTR_T(::System::Globalization::TextInfo);
// Dependencies System.ICloneable, System.Nullable`1<T>, System.Object, System.Runtime.Serialization.IDeserializationCallback
namespace System::Globalization {
// Is value type: false
// CS Name: System.Globalization.TextInfo
class CORDL_TYPE TextInfo : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_CultureName)) ::StringW CultureName;

  __declspec(property(get = get_IsAsciiCasingSameAsInvariant)) bool IsAsciiCasingSameAsInvariant;

  /// @brief Field customCultureName, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_customCultureName, put = __cordl_internal_set_customCultureName)) ::StringW customCultureName;

  /// @brief Field m_IsAsciiCasingSameAsInvariant, offset 0x38, size 0x2
  __declspec(property(get = __cordl_internal_get_m_IsAsciiCasingSameAsInvariant, put = __cordl_internal_set_m_IsAsciiCasingSameAsInvariant)) ::System::Nullable_1<bool> m_IsAsciiCasingSameAsInvariant;

  /// @brief Field m_cultureData, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_cultureData, put = __cordl_internal_set_m_cultureData)) ::System::Globalization::CultureData* m_cultureData;

  /// @brief Field m_cultureName, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_cultureName, put = __cordl_internal_set_m_cultureName)) ::StringW m_cultureName;

  /// @brief Field m_isReadOnly, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_m_isReadOnly, put = __cordl_internal_set_m_isReadOnly)) bool m_isReadOnly;

  /// @brief Field m_listSeparator, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_listSeparator, put = __cordl_internal_set_m_listSeparator)) ::StringW m_listSeparator;

  /// @brief Field m_nDataItem, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_m_nDataItem, put = __cordl_internal_set_m_nDataItem)) int32_t m_nDataItem;

  /// @brief Field m_textInfoName, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_textInfoName, put = __cordl_internal_set_m_textInfoName)) ::StringW m_textInfoName;

  /// @brief Field m_useUserOverride, offset 0x4c, size 0x1
  __declspec(property(get = __cordl_internal_get_m_useUserOverride, put = __cordl_internal_set_m_useUserOverride)) bool m_useUserOverride;

  /// @brief Field m_win32LangID, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get_m_win32LangID, put = __cordl_internal_set_m_win32LangID)) int32_t m_win32LangID;

  /// @brief Field s_Invariant, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_Invariant, put = setStaticF_s_Invariant)) ::System::Globalization::TextInfo* s_Invariant;

  /// @brief Convert operator to "::System::ICloneable"
  constexpr operator ::System::ICloneable*() noexcept;

  /// @brief Convert operator to "::System::Runtime::Serialization::IDeserializationCallback"
  constexpr operator ::System::Runtime::Serialization::IDeserializationCallback*() noexcept;

  /// @brief Method AddNonLetter, addr 0x3db32a0, size 0x9c, virtual false, abstract: false, final false
  static inline int32_t AddNonLetter(::ByRef<::System::Text::StringBuilder*> result, ::ByRef<::StringW> input, int32_t inputIndex, int32_t charLen);

  /// @brief Method AddTitlecaseLetter, addr 0x3db312c, size 0x14c, virtual false, abstract: false, final false
  inline int32_t AddTitlecaseLetter(::ByRef<::System::Text::StringBuilder*> result, ::ByRef<::StringW> input, int32_t inputIndex, int32_t charLen);

  /// @brief Method ChangeCase, addr 0x3db33c8, size 0x140, virtual false, abstract: false, final false
  inline void ChangeCase(::System::ReadOnlySpan_1<char16_t> source, ::System::Span_1<char16_t> destination, bool toUpper);

  /// @brief Method Clone, addr 0x3db1ec4, size 0x88, virtual true, abstract: false, final false
  inline ::System::Object* Clone();

  /// @brief Method Equals, addr 0x3db2ce0, size 0xa0, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x3db2d80, size 0x20, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method IsAscii, addr 0x3db1fb4, size 0x10, virtual false, abstract: false, final false
  static inline bool IsAscii(char16_t c);

  /// @brief Method IsLetterCategory, addr 0x3db3278, size 0xc, virtual false, abstract: false, final false
  static inline bool IsLetterCategory(::System::Globalization::UnicodeCategory uc);

  /// @brief Method IsWordSeparator, addr 0x3db3284, size 0x1c, virtual false, abstract: false, final false
  static inline bool IsWordSeparator(::System::Globalization::UnicodeCategory category);

  static inline ::System::Globalization::TextInfo* New_ctor();

  static inline ::System::Globalization::TextInfo* New_ctor(::System::Globalization::CultureData* cultureData);

  /// @brief Method OnDeserialized, addr 0x3db1d4c, size 0xec, virtual false, abstract: false, final false
  inline void OnDeserialized();

  /// @brief Method OnDeserialized, addr 0x3db1e38, size 0x4, virtual false, abstract: false, final false
  inline void OnDeserialized(::System::Runtime::Serialization::StreamingContext ctx);

  /// @brief Method OnDeserializing, addr 0x3db1d44, size 0x8, virtual false, abstract: false, final false
  inline void OnDeserializing(::System::Runtime::Serialization::StreamingContext ctx);

  /// @brief Method OnSerializing, addr 0x3db1e3c, size 0x80, virtual false, abstract: false, final false
  inline void OnSerializing(::System::Runtime::Serialization::StreamingContext ctx);

  /// @brief Method SetReadOnlyState, addr 0x3db1f4c, size 0xc, virtual false, abstract: false, final false
  inline void SetReadOnlyState(bool readOnly);

  /// @brief Method System.Runtime.Serialization.IDeserializationCallback.OnDeserialization, addr 0x3db333c, size 0x4, virtual true, abstract: false, final true
  inline void System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::System::Object* sender);

  /// @brief Method ToLower, addr 0x3db2564, size 0x54, virtual true, abstract: false, final false
  inline ::StringW ToLower(::StringW str);

  /// @brief Method ToLower, addr 0x3db1f58, size 0x5c, virtual true, abstract: false, final false
  inline char16_t ToLower(char16_t c);

  /// @brief Method ToLowerAsciiInvariant, addr 0x3db20c8, size 0x18, virtual false, abstract: false, final false
  static inline char16_t ToLowerAsciiInvariant(char16_t c);

  /// @brief Method ToLowerInternal, addr 0x3db25b8, size 0xe4, virtual false, abstract: false, final false
  inline ::StringW ToLowerInternal(::StringW str);

  /// @brief Method ToLowerInternal, addr 0x3db20e0, size 0x484, virtual false, abstract: false, final false
  inline char16_t ToLowerInternal(char16_t c);

  /// @brief Method ToString, addr 0x3db2da0, size 0x58, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToTitleCase, addr 0x3db2df8, size 0x334, virtual false, abstract: false, final false
  inline ::StringW ToTitleCase(::StringW str);

  /// @brief Method ToUpper, addr 0x3db2ba8, size 0x54, virtual true, abstract: false, final false
  inline ::StringW ToUpper(::StringW str);

  /// @brief Method ToUpper, addr 0x3db269c, size 0x5c, virtual true, abstract: false, final false
  inline char16_t ToUpper(char16_t c);

  /// @brief Method ToUpperAsciiInvariant, addr 0x3db26f8, size 0x18, virtual false, abstract: false, final false
  static inline char16_t ToUpperAsciiInvariant(char16_t c);

  /// @brief Method ToUpperAsciiInvariant, addr 0x3db3340, size 0x88, virtual false, abstract: false, final false
  inline void ToUpperAsciiInvariant(::System::ReadOnlySpan_1<char16_t> source, ::System::Span_1<char16_t> destination);

  /// @brief Method ToUpperInternal, addr 0x3db2bfc, size 0xe4, virtual false, abstract: false, final false
  inline ::StringW ToUpperInternal(::StringW str);

  /// @brief Method ToUpperInternal, addr 0x3db2710, size 0x498, virtual false, abstract: false, final false
  inline char16_t ToUpperInternal(char16_t c);

  constexpr ::StringW const& __cordl_internal_get_customCultureName() const;

  constexpr ::StringW& __cordl_internal_get_customCultureName();

  constexpr ::System::Nullable_1<bool> const& __cordl_internal_get_m_IsAsciiCasingSameAsInvariant() const;

  constexpr ::System::Nullable_1<bool>& __cordl_internal_get_m_IsAsciiCasingSameAsInvariant();

  constexpr ::System::Globalization::CultureData* const& __cordl_internal_get_m_cultureData() const;

  constexpr ::System::Globalization::CultureData*& __cordl_internal_get_m_cultureData();

  constexpr ::StringW const& __cordl_internal_get_m_cultureName() const;

  constexpr ::StringW& __cordl_internal_get_m_cultureName();

  constexpr bool const& __cordl_internal_get_m_isReadOnly() const;

  constexpr bool& __cordl_internal_get_m_isReadOnly();

  constexpr ::StringW const& __cordl_internal_get_m_listSeparator() const;

  constexpr ::StringW& __cordl_internal_get_m_listSeparator();

  constexpr int32_t const& __cordl_internal_get_m_nDataItem() const;

  constexpr int32_t& __cordl_internal_get_m_nDataItem();

  constexpr ::StringW const& __cordl_internal_get_m_textInfoName() const;

  constexpr ::StringW& __cordl_internal_get_m_textInfoName();

  constexpr bool const& __cordl_internal_get_m_useUserOverride() const;

  constexpr bool& __cordl_internal_get_m_useUserOverride();

  constexpr int32_t const& __cordl_internal_get_m_win32LangID() const;

  constexpr int32_t& __cordl_internal_get_m_win32LangID();

  constexpr void __cordl_internal_set_customCultureName(::StringW value);

  constexpr void __cordl_internal_set_m_IsAsciiCasingSameAsInvariant(::System::Nullable_1<bool> value);

  constexpr void __cordl_internal_set_m_cultureData(::System::Globalization::CultureData* value);

  constexpr void __cordl_internal_set_m_cultureName(::StringW value);

  constexpr void __cordl_internal_set_m_isReadOnly(bool value);

  constexpr void __cordl_internal_set_m_listSeparator(::StringW value);

  constexpr void __cordl_internal_set_m_nDataItem(int32_t value);

  constexpr void __cordl_internal_set_m_textInfoName(::StringW value);

  constexpr void __cordl_internal_set_m_useUserOverride(bool value);

  constexpr void __cordl_internal_set_m_win32LangID(int32_t value);

  /// @brief Method .ctor, addr 0x3db3508, size 0x38, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x3db1d08, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::System::Globalization::CultureData* cultureData);

  static inline ::System::Globalization::TextInfo* getStaticF_s_Invariant();

  /// @brief Method get_CultureName, addr 0x3db1ebc, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_CultureName();

  /// @brief Method get_Invariant, addr 0x3db1968, size 0x94, virtual false, abstract: false, final false
  static inline ::System::Globalization::TextInfo* get_Invariant();

  /// @brief Method get_IsAsciiCasingSameAsInvariant, addr 0x3db1fc4, size 0x104, virtual false, abstract: false, final false
  inline bool get_IsAsciiCasingSameAsInvariant();

  /// @brief Convert to "::System::ICloneable"
  constexpr ::System::ICloneable* i___System__ICloneable() noexcept;

  /// @brief Convert to "::System::Runtime::Serialization::IDeserializationCallback"
  constexpr ::System::Runtime::Serialization::IDeserializationCallback* i___System__Runtime__Serialization__IDeserializationCallback() noexcept;

  static inline void setStaticF_s_Invariant(::System::Globalization::TextInfo* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TextInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TextInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TextInfo(TextInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TextInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TextInfo(TextInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3712 };

  /// @brief Field wordSeparatorMask offset 0xffffffff size 0x4
  static constexpr int32_t wordSeparatorMask{ static_cast<int32_t>(0x1ffcf800) };

  /// @brief Field m_listSeparator, offset: 0x10, size: 0x8, def value: None
  ::StringW ___m_listSeparator;

  /// @brief Field m_isReadOnly, offset: 0x18, size: 0x1, def value: None
  bool ___m_isReadOnly;

  /// @brief Field m_cultureName, offset: 0x20, size: 0x8, def value: None
  ::StringW ___m_cultureName;

  /// @brief Field m_cultureData, offset: 0x28, size: 0x8, def value: None
  ::System::Globalization::CultureData* ___m_cultureData;

  /// @brief Field m_textInfoName, offset: 0x30, size: 0x8, def value: None
  ::StringW ___m_textInfoName;

  /// @brief Field m_IsAsciiCasingSameAsInvariant, offset: 0x38, size: 0x2, def value: None
  ::System::Nullable_1<bool> ___m_IsAsciiCasingSameAsInvariant;

  /// @brief Field customCultureName, offset: 0x40, size: 0x8, def value: None
  ::StringW ___customCultureName;

  /// @brief Field m_nDataItem, offset: 0x48, size: 0x4, def value: None
  int32_t ___m_nDataItem;

  /// @brief Field m_useUserOverride, offset: 0x4c, size: 0x1, def value: None
  bool ___m_useUserOverride;

  /// @brief Field m_win32LangID, offset: 0x50, size: 0x4, def value: None
  int32_t ___m_win32LangID;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Globalization::TextInfo, ___m_listSeparator) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::TextInfo, ___m_isReadOnly) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::TextInfo, ___m_cultureName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::TextInfo, ___m_cultureData) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::TextInfo, ___m_textInfoName) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::TextInfo, ___m_IsAsciiCasingSameAsInvariant) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::TextInfo, ___customCultureName) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::TextInfo, ___m_nDataItem) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::TextInfo, ___m_useUserOverride) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::TextInfo, ___m_win32LangID) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Globalization::TextInfo, 0x58>, "Size mismatch!");

} // namespace System::Globalization
NEED_NO_BOX(::System::Globalization::TextInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::TextInfo*, "System.Globalization", "TextInfo");
