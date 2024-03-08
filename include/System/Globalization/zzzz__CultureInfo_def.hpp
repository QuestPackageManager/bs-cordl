#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CultureInfo)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Globalization {
class Calendar;
}
namespace System::Globalization {
class CompareInfo;
}
namespace System::Globalization {
class CultureData;
}
namespace System::Globalization {
struct CultureTypes;
}
namespace System::Globalization {
class DateTimeFormatInfo;
}
namespace System::Globalization {
class NumberFormatInfo;
}
namespace System::Globalization {
class TextInfo;
}
namespace System::Globalization {
struct __CultureInfo__Data;
}
namespace System::Globalization {
class __CultureInfo__OnCultureInfoChangedDelegate;
}
namespace System {
class Exception;
}
namespace System {
class ICloneable;
}
namespace System {
class IFormatProvider;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Globalization {
class CultureInfo;
}
namespace System::Globalization {
class __CultureInfo__OnCultureInfoChangedDelegate;
}
namespace System::Globalization {
struct __CultureInfo__Data;
}
// Write type traits
MARK_REF_PTR_T(::System::Globalization::CultureInfo);
MARK_REF_PTR_T(::System::Globalization::__CultureInfo__OnCultureInfoChangedDelegate);
MARK_VAL_T(::System::Globalization::__CultureInfo__Data);
// Type: ::Data
// SizeInfo { instance_size: 20, native_size: 24, calculated_instance_size: 20, calculated_native_size: 34, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Globalization {
// Is value type: true
// CS Name: ::CultureInfo::Data
struct CORDL_TYPE __CultureInfo__Data {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __CultureInfo__Data();

  // Ctor Parameters [CppParam { name: "ansi", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "ebcdic", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "mac", ty:
  // "int32_t", modifiers: "", def_value: None }, CppParam { name: "oem", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "right_to_left", ty: "bool", modifiers: "", def_value: None
  // }, CppParam { name: "list_sep", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr __CultureInfo__Data(int32_t ansi, int32_t ebcdic, int32_t mac, int32_t oem, bool right_to_left, uint8_t list_sep) noexcept;

  /// @brief Field ansi, offset: 0x0, size: 0x4, def value: None
  int32_t ansi;

  /// @brief Field ebcdic, offset: 0x4, size: 0x4, def value: None
  int32_t ebcdic;

  /// @brief Field mac, offset: 0x8, size: 0x4, def value: None
  int32_t mac;

  /// @brief Field oem, offset: 0xc, size: 0x4, def value: None
  int32_t oem;

  /// @brief Field right_to_left, offset: 0x10, size: 0x1, def value: None
  bool right_to_left;

  /// @brief Field list_sep, offset: 0x11, size: 0x1, def value: None
  uint8_t list_sep;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x14 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Globalization::__CultureInfo__Data, 0x14>, "Size mismatch!");

static_assert(offsetof(::System::Globalization::__CultureInfo__Data, ansi) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::__CultureInfo__Data, ebcdic) == 0x4, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::__CultureInfo__Data, mac) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::__CultureInfo__Data, oem) == 0xc, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::__CultureInfo__Data, right_to_left) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::__CultureInfo__Data, list_sep) == 0x11, "Offset mismatch!");

} // namespace System::Globalization
// Type: ::OnCultureInfoChangedDelegate
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Globalization {
// Is value type: false
// CS Name: ::CultureInfo::OnCultureInfoChangedDelegate*
class CORDL_TYPE __CultureInfo__OnCultureInfoChangedDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x26cc5cc, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::StringW language);

  static inline ::System::Globalization::__CultureInfo__OnCultureInfoChangedDelegate* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x26cc14c, size 0xd4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __CultureInfo__OnCultureInfoChangedDelegate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__CultureInfo__OnCultureInfoChangedDelegate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __CultureInfo__OnCultureInfoChangedDelegate(__CultureInfo__OnCultureInfoChangedDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__CultureInfo__OnCultureInfoChangedDelegate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __CultureInfo__OnCultureInfoChangedDelegate(__CultureInfo__OnCultureInfoChangedDelegate const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Globalization::__CultureInfo__OnCultureInfoChangedDelegate, 0x80>, "Size mismatch!");

} // namespace System::Globalization
// Type: System.Globalization::CultureInfo
// SizeInfo { instance_size: 208, native_size: -1, calculated_instance_size: 208, calculated_native_size: 201, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Globalization {
// Is value type: false
// CS Name: ::System.Globalization::CultureInfo*
class CORDL_TYPE CultureInfo : public ::System::Object {
public:
  // Declarations
  using Data = ::System::Globalization::__CultureInfo__Data;

  using OnCultureInfoChangedDelegate = ::System::Globalization::__CultureInfo__OnCultureInfoChangedDelegate;

  __declspec(property(get = get_Calendar))::System::Globalization::Calendar* Calendar;

  __declspec(property(get = get_CalendarType)) int32_t CalendarType;

  __declspec(property(get = get_CompareInfo))::System::Globalization::CompareInfo* CompareInfo;

  __declspec(property(get = get_DateTimeFormat, put = set_DateTimeFormat))::System::Globalization::DateTimeFormatInfo* DateTimeFormat;

  __declspec(property(get = get_EnglishName))::StringW EnglishName;

  __declspec(property(get = get_IsNeutralCulture)) bool IsNeutralCulture;

  /// @brief Field IsTaiwanSku, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_IsTaiwanSku, put = setStaticF_IsTaiwanSku)) bool IsTaiwanSku;

  __declspec(property(get = get_LCID)) int32_t LCID;

  __declspec(property(get = get_Name))::StringW Name;

  __declspec(property(get = get_NumberFormat, put = set_NumberFormat))::System::Globalization::NumberFormatInfo* NumberFormat;

  __declspec(property(get = get_Parent))::System::Globalization::CultureInfo* Parent;

  __declspec(property(get = get_SortName))::StringW SortName;

  __declspec(property(get = get_Territory))::StringW Territory;

  __declspec(property(get = get_TextInfo))::System::Globalization::TextInfo* TextInfo;

  __declspec(property(get = get__cultureData))::System::Globalization::CultureData* _cultureData;

  __declspec(property(get = get__isInherited)) bool _isInherited;

  __declspec(property(get = get__name))::StringW _name;

  /// @brief Field cached_serialized_form, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get_cached_serialized_form, put = __cordl_internal_set_cached_serialized_form))::ArrayW<uint8_t, ::Array<uint8_t>*> cached_serialized_form;

  /// @brief Field calendar, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_calendar, put = __cordl_internal_set_calendar))::System::Globalization::Calendar* calendar;

  /// @brief Field compareInfo, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_compareInfo, put = __cordl_internal_set_compareInfo))::System::Globalization::CompareInfo* compareInfo;

  /// @brief Field constructed, offset 0xb0, size 0x1
  __declspec(property(get = __cordl_internal_get_constructed, put = __cordl_internal_set_constructed)) bool constructed;

  /// @brief Field cultureID, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_cultureID, put = __cordl_internal_set_cultureID)) int32_t cultureID;

  /// @brief Field dateTimeInfo, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_dateTimeInfo, put = __cordl_internal_set_dateTimeInfo))::System::Globalization::DateTimeFormatInfo* dateTimeInfo;

  /// @brief Field datetime_index, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_datetime_index, put = __cordl_internal_set_datetime_index)) int32_t datetime_index;

  /// @brief Field default_calendar_type, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_default_calendar_type, put = __cordl_internal_set_default_calendar_type)) int32_t default_calendar_type;

  /// @brief Field default_current_culture, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_default_current_culture, put = setStaticF_default_current_culture))::System::Globalization::CultureInfo* default_current_culture;

  /// @brief Field englishname, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_englishname, put = __cordl_internal_set_englishname))::StringW englishname;

  /// @brief Field invariant_culture_info, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_invariant_culture_info, put = setStaticF_invariant_culture_info))::System::Globalization::CultureInfo* invariant_culture_info;

  /// @brief Field iso2lang, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_iso2lang, put = __cordl_internal_set_iso2lang))::StringW iso2lang;

  /// @brief Field iso3lang, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_iso3lang, put = __cordl_internal_set_iso3lang))::StringW iso3lang;

  /// @brief Field m_cultureData, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_cultureData, put = __cordl_internal_set_m_cultureData))::System::Globalization::CultureData* m_cultureData;

  /// @brief Field m_dataItem, offset 0x98, size 0x4
  __declspec(property(get = __cordl_internal_get_m_dataItem, put = __cordl_internal_set_m_dataItem)) int32_t m_dataItem;

  /// @brief Field m_isInherited, offset 0xc8, size 0x1
  __declspec(property(get = __cordl_internal_get_m_isInherited, put = __cordl_internal_set_m_isInherited)) bool m_isInherited;

  /// @brief Field m_isReadOnly, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_m_isReadOnly, put = __cordl_internal_set_m_isReadOnly)) bool m_isReadOnly;

  /// @brief Field m_name, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_name, put = __cordl_internal_set_m_name))::StringW m_name;

  /// @brief Field m_useUserOverride, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get_m_useUserOverride, put = __cordl_internal_set_m_useUserOverride)) bool m_useUserOverride;

  /// @brief Field native_calendar_names, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_native_calendar_names, put = __cordl_internal_set_native_calendar_names))::ArrayW<::StringW, ::Array<::StringW>*> native_calendar_names;

  /// @brief Field nativename, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_nativename, put = __cordl_internal_set_nativename))::StringW nativename;

  /// @brief Field numInfo, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_numInfo, put = __cordl_internal_set_numInfo))::System::Globalization::NumberFormatInfo* numInfo;

  /// @brief Field number_index, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_number_index, put = __cordl_internal_set_number_index)) int32_t number_index;

  /// @brief Field parent_culture, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_parent_culture, put = __cordl_internal_set_parent_culture))::System::Globalization::CultureInfo* parent_culture;

  /// @brief Field parent_lcid, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_parent_lcid, put = __cordl_internal_set_parent_lcid)) int32_t parent_lcid;

  /// @brief Field s_DefaultThreadCurrentCulture, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_DefaultThreadCurrentCulture, put = setStaticF_s_DefaultThreadCurrentCulture))::System::Globalization::CultureInfo* s_DefaultThreadCurrentCulture;

  /// @brief Field s_DefaultThreadCurrentUICulture, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_DefaultThreadCurrentUICulture, put = setStaticF_s_DefaultThreadCurrentUICulture))::System::Globalization::CultureInfo* s_DefaultThreadCurrentUICulture;

  /// @brief Field s_UserPreferredCultureInfoInAppX, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_UserPreferredCultureInfoInAppX,
                             put = setStaticF_s_UserPreferredCultureInfoInAppX))::System::Globalization::CultureInfo* s_UserPreferredCultureInfoInAppX;

  /// @brief Field shared_by_name, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_shared_by_name,
                             put = setStaticF_shared_by_name))::System::Collections::Generic::Dictionary_2<::StringW, ::System::Globalization::CultureInfo*>* shared_by_name;

  /// @brief Field shared_by_number, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_shared_by_number,
                             put = setStaticF_shared_by_number))::System::Collections::Generic::Dictionary_2<int32_t, ::System::Globalization::CultureInfo*>* shared_by_number;

  /// @brief Field shared_table_lock, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_shared_table_lock, put = setStaticF_shared_table_lock))::System::Object* shared_table_lock;

  /// @brief Field territory, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_territory, put = __cordl_internal_set_territory))::StringW territory;

  /// @brief Field textInfo, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_textInfo, put = __cordl_internal_set_textInfo))::System::Globalization::TextInfo* textInfo;

  /// @brief Field textinfo_data, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_textinfo_data, put = __cordl_internal_set_textinfo_data))::cordl_internals::Ptr<void> textinfo_data;

  /// @brief Field win3lang, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_win3lang, put = __cordl_internal_set_win3lang))::StringW win3lang;

  /// @brief Convert operator to "::System::ICloneable"
  constexpr operator ::System::ICloneable*() noexcept;

  /// @brief Convert operator to "::System::IFormatProvider"
  constexpr operator ::System::IFormatProvider*() noexcept;

  /// @brief Method CheckNeutral, addr 0x26c841c, size 0x4, virtual false, abstract: false, final false
  inline void CheckNeutral();

  /// @brief Method Clone, addr 0x26c7d50, size 0x19c, virtual true, abstract: false, final false
  inline ::System::Object* Clone();

  /// @brief Method Construct, addr 0x26c770c, size 0x20, virtual false, abstract: false, final false
  inline void Construct();

  /// @brief Method ConstructCurrentCulture, addr 0x26c7218, size 0x1e4, virtual false, abstract: false, final false
  static inline ::System::Globalization::CultureInfo* ConstructCurrentCulture();

  /// @brief Method ConstructCurrentUICulture, addr 0x26c761c, size 0x4c, virtual false, abstract: false, final false
  static inline ::System::Globalization::CultureInfo* ConstructCurrentUICulture();

  /// @brief Method ConstructInvariant, addr 0x26c88f8, size 0x158, virtual false, abstract: false, final false
  inline void ConstructInvariant(bool read_only);

  /// @brief Method ConstructLocaleFromName, addr 0x26c8efc, size 0x8c, virtual false, abstract: false, final false
  inline bool ConstructLocaleFromName(::StringW name);

  /// @brief Method CreateCalendar, addr 0x26c772c, size 0x238, virtual false, abstract: false, final false
  static inline ::System::Globalization::Calendar* CreateCalendar(int32_t calendarType);

  /// @brief Method CreateCulture, addr 0x26c9668, size 0x74, virtual false, abstract: false, final false
  static inline ::System::Globalization::CultureInfo* CreateCulture(::StringW name, bool reference);

  /// @brief Method CreateNotFoundException, addr 0x26c8f88, size 0xc8, virtual false, abstract: false, final false
  static inline ::System::Exception* CreateNotFoundException(::StringW name);

  /// @brief Method CreateSpecificCulture, addr 0x26c7400, size 0x21c, virtual false, abstract: false, final false
  static inline ::System::Globalization::CultureInfo* CreateSpecificCulture(::StringW name);

  /// @brief Method CreateSpecificCultureFromNeutral, addr 0x26c96dc, size 0x2754, virtual false, abstract: false, final false
  static inline ::System::Globalization::CultureInfo* CreateSpecificCultureFromNeutral(::StringW name);

  /// @brief Method CreateTextInfo, addr 0x26c7cd4, size 0x7c, virtual false, abstract: false, final false
  inline ::System::Globalization::TextInfo* CreateTextInfo(bool readOnly);

  /// @brief Method Equals, addr 0x26c7eec, size 0xac, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* value);

  /// @brief Method GetCultureInfo, addr 0x26c91f8, size 0x244, virtual false, abstract: false, final false
  static inline ::System::Globalization::CultureInfo* GetCultureInfo(int32_t culture);

  /// @brief Method GetCultureInfo, addr 0x26c943c, size 0x22c, virtual false, abstract: false, final false
  static inline ::System::Globalization::CultureInfo* GetCultureInfo(::StringW name);

  /// @brief Method GetCultureInfoForUserPreferredLanguageInAppX, addr 0x26cc070, size 0xdc, virtual false, abstract: false, final false
  static inline ::System::Globalization::CultureInfo* GetCultureInfoForUserPreferredLanguageInAppX();

  /// @brief Method GetCultures, addr 0x26c7f98, size 0x230, virtual false, abstract: false, final false
  static inline ::ArrayW<::System::Globalization::CultureInfo*, ::Array<::System::Globalization::CultureInfo*>*> GetCultures(::System::Globalization::CultureTypes types);

  /// @brief Method GetFormat, addr 0x26c87e0, size 0x110, virtual true, abstract: false, final false
  inline ::System::Object* GetFormat(::System::Type* formatType);

  /// @brief Method GetHashCode, addr 0x26c8268, size 0xc, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetTextInfoData, addr 0x26c81d8, size 0x18, virtual false, abstract: false, final false
  inline ::System::Globalization::__CultureInfo__Data GetTextInfoData();

  /// @brief Method InitializeUserPreferredCultureInfoInAppX, addr 0x26cc050, size 0x10, virtual false, abstract: false, final false
  static inline void InitializeUserPreferredCultureInfoInAppX(::System::Globalization::__CultureInfo__OnCultureInfoChangedDelegate* onCultureInfoChangedInAppX);

  static inline ::System::Globalization::CultureInfo* New_ctor();

  static inline ::System::Globalization::CultureInfo* New_ctor(int32_t culture);

  static inline ::System::Globalization::CultureInfo* New_ctor(int32_t culture, bool useUserOverride);

  static inline ::System::Globalization::CultureInfo* New_ctor(int32_t culture, bool useUserOverride, bool read_only);

  static inline ::System::Globalization::CultureInfo* New_ctor(::StringW name);

  static inline ::System::Globalization::CultureInfo* New_ctor(::StringW name, bool useUserOverride);

  static inline ::System::Globalization::CultureInfo* New_ctor(::StringW name, bool useUserOverride, bool read_only);

  /// @brief Method OnCultureInfoChangedInAppX, addr 0x26c7078, size 0xa0, virtual false, abstract: false, final false
  static inline void OnCultureInfoChangedInAppX(::StringW language);

  /// @brief Method SetCultureInfoForUserPreferredLanguageInAppX, addr 0x26cc220, size 0x10c, virtual false, abstract: false, final false
  static inline void SetCultureInfoForUserPreferredLanguageInAppX(::System::Globalization::CultureInfo* cultureInfo);

  /// @brief Method SetUserPreferredCultureInfoInAppX, addr 0x26cc060, size 0x10, virtual false, abstract: false, final false
  static inline void SetUserPreferredCultureInfoInAppX(::StringW name);

  /// @brief Method ToString, addr 0x26c8274, size 0x8, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method VerifyCultureName, addr 0x26cc490, size 0x94, virtual false, abstract: false, final false
  static inline bool VerifyCultureName(::System::Globalization::CultureInfo* culture, bool throwException);

  /// @brief Method VerifyCultureName, addr 0x26cc32c, size 0x164, virtual false, abstract: false, final false
  static inline bool VerifyCultureName(::StringW cultureName, bool throwException);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_cached_serialized_form() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_cached_serialized_form();

  constexpr ::System::Globalization::Calendar*& __cordl_internal_get_calendar();

  constexpr ::cordl_internals::to_const_pointer<::System::Globalization::Calendar*> const& __cordl_internal_get_calendar() const;

  constexpr ::System::Globalization::CompareInfo*& __cordl_internal_get_compareInfo();

  constexpr ::cordl_internals::to_const_pointer<::System::Globalization::CompareInfo*> const& __cordl_internal_get_compareInfo() const;

  constexpr bool const& __cordl_internal_get_constructed() const;

  constexpr bool& __cordl_internal_get_constructed();

  constexpr int32_t const& __cordl_internal_get_cultureID() const;

  constexpr int32_t& __cordl_internal_get_cultureID();

  constexpr ::System::Globalization::DateTimeFormatInfo*& __cordl_internal_get_dateTimeInfo();

  constexpr ::cordl_internals::to_const_pointer<::System::Globalization::DateTimeFormatInfo*> const& __cordl_internal_get_dateTimeInfo() const;

  constexpr int32_t const& __cordl_internal_get_datetime_index() const;

  constexpr int32_t& __cordl_internal_get_datetime_index();

  constexpr int32_t const& __cordl_internal_get_default_calendar_type() const;

  constexpr int32_t& __cordl_internal_get_default_calendar_type();

  constexpr ::StringW const& __cordl_internal_get_englishname() const;

  constexpr ::StringW& __cordl_internal_get_englishname();

  constexpr ::StringW const& __cordl_internal_get_iso2lang() const;

  constexpr ::StringW& __cordl_internal_get_iso2lang();

  constexpr ::StringW const& __cordl_internal_get_iso3lang() const;

  constexpr ::StringW& __cordl_internal_get_iso3lang();

  constexpr ::System::Globalization::CultureData*& __cordl_internal_get_m_cultureData();

  constexpr ::cordl_internals::to_const_pointer<::System::Globalization::CultureData*> const& __cordl_internal_get_m_cultureData() const;

  constexpr int32_t const& __cordl_internal_get_m_dataItem() const;

  constexpr int32_t& __cordl_internal_get_m_dataItem();

  constexpr bool const& __cordl_internal_get_m_isInherited() const;

  constexpr bool& __cordl_internal_get_m_isInherited();

  constexpr bool const& __cordl_internal_get_m_isReadOnly() const;

  constexpr bool& __cordl_internal_get_m_isReadOnly();

  constexpr ::StringW const& __cordl_internal_get_m_name() const;

  constexpr ::StringW& __cordl_internal_get_m_name();

  constexpr bool const& __cordl_internal_get_m_useUserOverride() const;

  constexpr bool& __cordl_internal_get_m_useUserOverride();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_native_calendar_names() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_native_calendar_names();

  constexpr ::StringW const& __cordl_internal_get_nativename() const;

  constexpr ::StringW& __cordl_internal_get_nativename();

  constexpr ::System::Globalization::NumberFormatInfo*& __cordl_internal_get_numInfo();

  constexpr ::cordl_internals::to_const_pointer<::System::Globalization::NumberFormatInfo*> const& __cordl_internal_get_numInfo() const;

  constexpr int32_t const& __cordl_internal_get_number_index() const;

  constexpr int32_t& __cordl_internal_get_number_index();

  constexpr ::System::Globalization::CultureInfo*& __cordl_internal_get_parent_culture();

  constexpr ::cordl_internals::to_const_pointer<::System::Globalization::CultureInfo*> const& __cordl_internal_get_parent_culture() const;

  constexpr int32_t const& __cordl_internal_get_parent_lcid() const;

  constexpr int32_t& __cordl_internal_get_parent_lcid();

  constexpr ::StringW const& __cordl_internal_get_territory() const;

  constexpr ::StringW& __cordl_internal_get_territory();

  constexpr ::System::Globalization::TextInfo*& __cordl_internal_get_textInfo();

  constexpr ::cordl_internals::to_const_pointer<::System::Globalization::TextInfo*> const& __cordl_internal_get_textInfo() const;

  constexpr ::cordl_internals::Ptr<void> const& __cordl_internal_get_textinfo_data() const;

  constexpr ::cordl_internals::Ptr<void>& __cordl_internal_get_textinfo_data();

  constexpr ::StringW const& __cordl_internal_get_win3lang() const;

  constexpr ::StringW& __cordl_internal_get_win3lang();

  constexpr void __cordl_internal_set_cached_serialized_form(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_calendar(::System::Globalization::Calendar* value);

  constexpr void __cordl_internal_set_compareInfo(::System::Globalization::CompareInfo* value);

  constexpr void __cordl_internal_set_constructed(bool value);

  constexpr void __cordl_internal_set_cultureID(int32_t value);

  constexpr void __cordl_internal_set_dateTimeInfo(::System::Globalization::DateTimeFormatInfo* value);

  constexpr void __cordl_internal_set_datetime_index(int32_t value);

  constexpr void __cordl_internal_set_default_calendar_type(int32_t value);

  constexpr void __cordl_internal_set_englishname(::StringW value);

  constexpr void __cordl_internal_set_iso2lang(::StringW value);

  constexpr void __cordl_internal_set_iso3lang(::StringW value);

  constexpr void __cordl_internal_set_m_cultureData(::System::Globalization::CultureData* value);

  constexpr void __cordl_internal_set_m_dataItem(int32_t value);

  constexpr void __cordl_internal_set_m_isInherited(bool value);

  constexpr void __cordl_internal_set_m_isReadOnly(bool value);

  constexpr void __cordl_internal_set_m_name(::StringW value);

  constexpr void __cordl_internal_set_m_useUserOverride(bool value);

  constexpr void __cordl_internal_set_native_calendar_names(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set_nativename(::StringW value);

  constexpr void __cordl_internal_set_numInfo(::System::Globalization::NumberFormatInfo* value);

  constexpr void __cordl_internal_set_number_index(int32_t value);

  constexpr void __cordl_internal_set_parent_culture(::System::Globalization::CultureInfo* value);

  constexpr void __cordl_internal_set_parent_lcid(int32_t value);

  constexpr void __cordl_internal_set_territory(::StringW value);

  constexpr void __cordl_internal_set_textInfo(::System::Globalization::TextInfo* value);

  constexpr void __cordl_internal_set_textinfo_data(::cordl_internals::Ptr<void> value);

  constexpr void __cordl_internal_set_win3lang(::StringW value);

  /// @brief Method .ctor, addr 0x26c9050, size 0x20, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x26c7bac, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(int32_t culture);

  /// @brief Method .ctor, addr 0x26c8a50, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(int32_t culture, bool useUserOverride);

  /// @brief Method .ctor, addr 0x26c8a5c, size 0x264, virtual false, abstract: false, final false
  inline void _ctor(int32_t culture, bool useUserOverride, bool read_only);

  /// @brief Method .ctor, addr 0x26c7ba0, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::StringW name);

  /// @brief Method .ctor, addr 0x26c8cc0, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::StringW name, bool useUserOverride);

  /// @brief Method .ctor, addr 0x26c8ccc, size 0x230, virtual false, abstract: false, final false
  inline void _ctor(::StringW name, bool useUserOverride, bool read_only);

  /// @brief Method construct_internal_locale_from_lcid, addr 0x26c88f0, size 0x4, virtual false, abstract: false, final false
  inline bool construct_internal_locale_from_lcid(int32_t lcid);

  /// @brief Method construct_internal_locale_from_name, addr 0x26c88f4, size 0x4, virtual false, abstract: false, final false
  inline bool construct_internal_locale_from_name(::StringW name);

  static inline bool getStaticF_IsTaiwanSku();

  static inline ::System::Globalization::CultureInfo* getStaticF_default_current_culture();

  static inline ::System::Globalization::CultureInfo* getStaticF_invariant_culture_info();

  static inline ::System::Globalization::CultureInfo* getStaticF_s_DefaultThreadCurrentCulture();

  static inline ::System::Globalization::CultureInfo* getStaticF_s_DefaultThreadCurrentUICulture();

  static inline ::System::Globalization::CultureInfo* getStaticF_s_UserPreferredCultureInfoInAppX();

  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Globalization::CultureInfo*>* getStaticF_shared_by_name();

  static inline ::System::Collections::Generic::Dictionary_2<int32_t, ::System::Globalization::CultureInfo*>* getStaticF_shared_by_number();

  static inline ::System::Object* getStaticF_shared_table_lock();

  /// @brief Method get_Calendar, addr 0x26c7688, size 0x84, virtual true, abstract: false, final false
  inline ::System::Globalization::Calendar* get_Calendar();

  /// @brief Method get_CalendarType, addr 0x26c81f0, size 0x78, virtual false, abstract: false, final false
  inline int32_t get_CalendarType();

  /// @brief Method get_CompareInfo, addr 0x26c827c, size 0x158, virtual true, abstract: false, final false
  inline ::System::Globalization::CompareInfo* get_CompareInfo();

  /// @brief Method get_CurrentCulture, addr 0x26c7188, size 0x20, virtual false, abstract: false, final false
  static inline ::System::Globalization::CultureInfo* get_CurrentCulture();

  /// @brief Method get_CurrentUICulture, addr 0x26c71d0, size 0x20, virtual false, abstract: false, final false
  static inline ::System::Globalization::CultureInfo* get_CurrentUICulture();

  /// @brief Method get_DateTimeFormat, addr 0x26c8580, size 0x160, virtual true, abstract: false, final false
  inline ::System::Globalization::DateTimeFormatInfo* get_DateTimeFormat();

  /// @brief Method get_DefaultThreadCurrentCulture, addr 0x26cbe30, size 0x60, virtual false, abstract: false, final false
  static inline ::System::Globalization::CultureInfo* get_DefaultThreadCurrentCulture();

  /// @brief Method get_DefaultThreadCurrentUICulture, addr 0x26cbef0, size 0x60, virtual false, abstract: false, final false
  static inline ::System::Globalization::CultureInfo* get_DefaultThreadCurrentUICulture();

  /// @brief Method get_EnglishName, addr 0x26c87b0, size 0x30, virtual true, abstract: false, final false
  inline ::StringW get_EnglishName();

  /// @brief Method get_InvariantCulture, addr 0x26c7128, size 0x60, virtual false, abstract: false, final false
  static inline ::System::Globalization::CultureInfo* get_InvariantCulture();

  /// @brief Method get_IsNeutralCulture, addr 0x26c83d4, size 0x48, virtual true, abstract: false, final false
  inline bool get_IsNeutralCulture();

  /// @brief Method get_LCID, addr 0x26c7678, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_LCID();

  /// @brief Method get_Name, addr 0x26c7680, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_NumberFormat, addr 0x26c8420, size 0x90, virtual true, abstract: false, final false
  inline ::System::Globalization::NumberFormatInfo* get_NumberFormat();

  /// @brief Method get_Parent, addr 0x26c7964, size 0x23c, virtual true, abstract: false, final false
  inline ::System::Globalization::CultureInfo* get_Parent();

  /// @brief Method get_SortName, addr 0x26cbfb0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_SortName();

  /// @brief Method get_Territory, addr 0x26c7668, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Territory();

  /// @brief Method get_TextInfo, addr 0x26c7bb8, size 0x11c, virtual true, abstract: false, final false
  inline ::System::Globalization::TextInfo* get_TextInfo();

  /// @brief Method get_UserDefaultCulture, addr 0x26cc004, size 0x4c, virtual false, abstract: false, final false
  static inline ::System::Globalization::CultureInfo* get_UserDefaultCulture();

  /// @brief Method get_UserDefaultUICulture, addr 0x26cbfb8, size 0x4c, virtual false, abstract: false, final false
  static inline ::System::Globalization::CultureInfo* get_UserDefaultUICulture();

  /// @brief Method get__cultureData, addr 0x26c7118, size 0x8, virtual false, abstract: false, final false
  inline ::System::Globalization::CultureData* get__cultureData();

  /// @brief Method get__isInherited, addr 0x26c7120, size 0x8, virtual false, abstract: false, final false
  inline bool get__isInherited();

  /// @brief Method get__name, addr 0x26c7670, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get__name();

  /// @brief Method get_current_locale_name, addr 0x26c73fc, size 0x4, virtual false, abstract: false, final false
  static inline ::StringW get_current_locale_name();

  /// @brief Convert to "::System::ICloneable"
  constexpr ::System::ICloneable* i___System__ICloneable() noexcept;

  /// @brief Convert to "::System::IFormatProvider"
  constexpr ::System::IFormatProvider* i___System__IFormatProvider() noexcept;

  /// @brief Method insert_into_shared_tables, addr 0x26c9070, size 0x188, virtual false, abstract: false, final false
  static inline void insert_into_shared_tables(::System::Globalization::CultureInfo* c);

  /// @brief Method internal_get_cultures, addr 0x26c81c8, size 0x10, virtual false, abstract: false, final false
  static inline ::ArrayW<::System::Globalization::CultureInfo*, ::Array<::System::Globalization::CultureInfo*>*> internal_get_cultures(bool neutral, bool specific, bool installed);

  static inline void setStaticF_IsTaiwanSku(bool value);

  static inline void setStaticF_default_current_culture(::System::Globalization::CultureInfo* value);

  static inline void setStaticF_invariant_culture_info(::System::Globalization::CultureInfo* value);

  static inline void setStaticF_s_DefaultThreadCurrentCulture(::System::Globalization::CultureInfo* value);

  static inline void setStaticF_s_DefaultThreadCurrentUICulture(::System::Globalization::CultureInfo* value);

  static inline void setStaticF_s_UserPreferredCultureInfoInAppX(::System::Globalization::CultureInfo* value);

  static inline void setStaticF_shared_by_name(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Globalization::CultureInfo*>* value);

  static inline void setStaticF_shared_by_number(::System::Collections::Generic::Dictionary_2<int32_t, ::System::Globalization::CultureInfo*>* value);

  static inline void setStaticF_shared_table_lock(::System::Object* value);

  /// @brief Method set_CurrentCulture, addr 0x26c71a8, size 0x28, virtual false, abstract: false, final false
  static inline void set_CurrentCulture(::System::Globalization::CultureInfo* value);

  /// @brief Method set_CurrentUICulture, addr 0x26c71f0, size 0x28, virtual false, abstract: false, final false
  static inline void set_CurrentUICulture(::System::Globalization::CultureInfo* value);

  /// @brief Method set_DateTimeFormat, addr 0x26c86e0, size 0xd0, virtual true, abstract: false, final false
  inline void set_DateTimeFormat(::System::Globalization::DateTimeFormatInfo* value);

  /// @brief Method set_DefaultThreadCurrentCulture, addr 0x26cbe90, size 0x60, virtual false, abstract: false, final false
  static inline void set_DefaultThreadCurrentCulture(::System::Globalization::CultureInfo* value);

  /// @brief Method set_DefaultThreadCurrentUICulture, addr 0x26cbf50, size 0x60, virtual false, abstract: false, final false
  static inline void set_DefaultThreadCurrentUICulture(::System::Globalization::CultureInfo* value);

  /// @brief Method set_NumberFormat, addr 0x26c84b0, size 0xd0, virtual true, abstract: false, final false
  inline void set_NumberFormat(::System::Globalization::NumberFormatInfo* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CultureInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CultureInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CultureInfo(CultureInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CultureInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CultureInfo(CultureInfo const&) = delete;

  /// @brief Field m_isReadOnly, offset: 0x10, size: 0x1, def value: None
  bool ___m_isReadOnly;

  /// @brief Field cultureID, offset: 0x14, size: 0x4, def value: None
  int32_t ___cultureID;

  /// @brief Field parent_lcid, offset: 0x18, size: 0x4, def value: None
  int32_t ___parent_lcid;

  /// @brief Field datetime_index, offset: 0x1c, size: 0x4, def value: None
  int32_t ___datetime_index;

  /// @brief Field number_index, offset: 0x20, size: 0x4, def value: None
  int32_t ___number_index;

  /// @brief Field default_calendar_type, offset: 0x24, size: 0x4, def value: None
  int32_t ___default_calendar_type;

  /// @brief Field m_useUserOverride, offset: 0x28, size: 0x1, def value: None
  bool ___m_useUserOverride;

  /// @brief Field numInfo, offset: 0x30, size: 0x8, def value: None
  ::System::Globalization::NumberFormatInfo* ___numInfo;

  /// @brief Field dateTimeInfo, offset: 0x38, size: 0x8, def value: None
  ::System::Globalization::DateTimeFormatInfo* ___dateTimeInfo;

  /// @brief Field textInfo, offset: 0x40, size: 0x8, def value: None
  ::System::Globalization::TextInfo* ___textInfo;

  /// @brief Field m_name, offset: 0x48, size: 0x8, def value: None
  ::StringW ___m_name;

  /// @brief Field englishname, offset: 0x50, size: 0x8, def value: None
  ::StringW ___englishname;

  /// @brief Field nativename, offset: 0x58, size: 0x8, def value: None
  ::StringW ___nativename;

  /// @brief Field iso3lang, offset: 0x60, size: 0x8, def value: None
  ::StringW ___iso3lang;

  /// @brief Field iso2lang, offset: 0x68, size: 0x8, def value: None
  ::StringW ___iso2lang;

  /// @brief Field win3lang, offset: 0x70, size: 0x8, def value: None
  ::StringW ___win3lang;

  /// @brief Field territory, offset: 0x78, size: 0x8, def value: None
  ::StringW ___territory;

  /// @brief Field native_calendar_names, offset: 0x80, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___native_calendar_names;

  /// @brief Field compareInfo, offset: 0x88, size: 0x8, def value: None
  ::System::Globalization::CompareInfo* ___compareInfo;

  /// @brief Field textinfo_data, offset: 0x90, size: 0x8, def value: None
  ::cordl_internals::Ptr<void> ___textinfo_data;

  /// @brief Field m_dataItem, offset: 0x98, size: 0x4, def value: None
  int32_t ___m_dataItem;

  /// @brief Field calendar, offset: 0xa0, size: 0x8, def value: None
  ::System::Globalization::Calendar* ___calendar;

  /// @brief Field parent_culture, offset: 0xa8, size: 0x8, def value: None
  ::System::Globalization::CultureInfo* ___parent_culture;

  /// @brief Field constructed, offset: 0xb0, size: 0x1, def value: None
  bool ___constructed;

  /// @brief Field cached_serialized_form, offset: 0xb8, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___cached_serialized_form;

  /// @brief Field m_cultureData, offset: 0xc0, size: 0x8, def value: None
  ::System::Globalization::CultureData* ___m_cultureData;

  /// @brief Field m_isInherited, offset: 0xc8, size: 0x1, def value: None
  bool ___m_isInherited;

  /// @brief Field CalendarTypeBits offset 0xffffffff size 0x4
  static constexpr int32_t CalendarTypeBits{ static_cast<int32_t>(0x8) };

  /// @brief Field InvariantCultureId offset 0xffffffff size 0x4
  static constexpr int32_t InvariantCultureId{ static_cast<int32_t>(0x7f) };

  /// @brief Field LOCALE_INVARIANT offset 0xffffffff size 0x4
  static constexpr int32_t LOCALE_INVARIANT{ static_cast<int32_t>(0x7f) };

  /// @brief Field MSG_READONLY offset 0xffffffff size 0x8
  static constexpr ::ConstString MSG_READONLY{ u"This instance is read only" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Globalization::CultureInfo, 0xd0>, "Size mismatch!");

static_assert(offsetof(::System::Globalization::CultureInfo, ___m_isReadOnly) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::CultureInfo, ___cultureID) == 0x14, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::CultureInfo, ___parent_lcid) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::CultureInfo, ___datetime_index) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::CultureInfo, ___number_index) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::CultureInfo, ___default_calendar_type) == 0x24, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::CultureInfo, ___m_useUserOverride) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::CultureInfo, ___numInfo) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::CultureInfo, ___dateTimeInfo) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::CultureInfo, ___textInfo) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::CultureInfo, ___m_name) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::CultureInfo, ___englishname) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::CultureInfo, ___nativename) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::CultureInfo, ___iso3lang) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::CultureInfo, ___iso2lang) == 0x68, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::CultureInfo, ___win3lang) == 0x70, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::CultureInfo, ___territory) == 0x78, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::CultureInfo, ___native_calendar_names) == 0x80, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::CultureInfo, ___compareInfo) == 0x88, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::CultureInfo, ___textinfo_data) == 0x90, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::CultureInfo, ___m_dataItem) == 0x98, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::CultureInfo, ___calendar) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::CultureInfo, ___parent_culture) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::CultureInfo, ___constructed) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::CultureInfo, ___cached_serialized_form) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::CultureInfo, ___m_cultureData) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::CultureInfo, ___m_isInherited) == 0xc8, "Offset mismatch!");

} // namespace System::Globalization
NEED_NO_BOX(::System::Globalization::CultureInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::CultureInfo*, "System.Globalization", "CultureInfo");
NEED_NO_BOX(::System::Globalization::__CultureInfo__OnCultureInfoChangedDelegate);
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::__CultureInfo__OnCultureInfoChangedDelegate*, "System.Globalization", "CultureInfo/OnCultureInfoChangedDelegate");
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::__CultureInfo__Data, "System.Globalization", "CultureInfo/Data");
