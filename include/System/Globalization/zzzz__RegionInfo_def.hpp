#pragma once
// IWYU pragma private; include "System/Globalization/RegionInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RegionInfo)
namespace System::Globalization {
class CultureInfo;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Globalization {
class RegionInfo;
}
// Write type traits
MARK_REF_PTR_T(::System::Globalization::RegionInfo);
// Dependencies System.Object
namespace System::Globalization {
// Is value type: false
// CS Name: System.Globalization.RegionInfo
class CORDL_TYPE RegionInfo : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_CurrencyEnglishName)) ::StringW CurrencyEnglishName;

  __declspec(property(get = get_CurrencyNativeName)) ::StringW CurrencyNativeName;

  __declspec(property(get = get_CurrencySymbol)) ::StringW CurrencySymbol;

  __declspec(property(get = get_DisplayName)) ::StringW DisplayName;

  __declspec(property(get = get_EnglishName)) ::StringW EnglishName;

  __declspec(property(get = get_GeoId)) int32_t GeoId;

  __declspec(property(get = get_ISOCurrencySymbol)) ::StringW ISOCurrencySymbol;

  __declspec(property(get = get_IsMetric)) bool IsMetric;

  __declspec(property(get = get_Name)) ::StringW Name;

  __declspec(property(get = get_NativeName)) ::StringW NativeName;

  __declspec(property(get = get_ThreeLetterISORegionName)) ::StringW ThreeLetterISORegionName;

  __declspec(property(get = get_ThreeLetterWindowsRegionName)) ::StringW ThreeLetterWindowsRegionName;

  __declspec(property(get = get_TwoLetterISORegionName)) ::StringW TwoLetterISORegionName;

  /// @brief Field currencyEnglishName, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_currencyEnglishName, put = __cordl_internal_set_currencyEnglishName)) ::StringW currencyEnglishName;

  /// @brief Field currencyNativeName, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_currencyNativeName, put = __cordl_internal_set_currencyNativeName)) ::StringW currencyNativeName;

  /// @brief Field currencySymbol, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_currencySymbol, put = __cordl_internal_set_currencySymbol)) ::StringW currencySymbol;

  /// @brief Field currentRegion, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_currentRegion, put = setStaticF_currentRegion)) ::System::Globalization::RegionInfo* currentRegion;

  /// @brief Field englishName, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_englishName, put = __cordl_internal_set_englishName)) ::StringW englishName;

  /// @brief Field iso2Name, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_iso2Name, put = __cordl_internal_set_iso2Name)) ::StringW iso2Name;

  /// @brief Field iso3Name, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_iso3Name, put = __cordl_internal_set_iso3Name)) ::StringW iso3Name;

  /// @brief Field isoCurrencySymbol, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_isoCurrencySymbol, put = __cordl_internal_set_isoCurrencySymbol)) ::StringW isoCurrencySymbol;

  /// @brief Field nativeName, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_nativeName, put = __cordl_internal_set_nativeName)) ::StringW nativeName;

  /// @brief Field regionId, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_regionId, put = __cordl_internal_set_regionId)) int32_t regionId;

  /// @brief Field win3Name, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_win3Name, put = __cordl_internal_set_win3Name)) ::StringW win3Name;

  /// @brief Method ClearCachedData, addr 0x3db62f4, size 0x48, virtual false, abstract: false, final false
  static inline void ClearCachedData();

  /// @brief Method Equals, addr 0x3db61f0, size 0xc8, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* value);

  /// @brief Method GetByTerritory, addr 0x3db5f20, size 0xa8, virtual false, abstract: false, final false
  inline bool GetByTerritory(::System::Globalization::CultureInfo* ci);

  /// @brief Method GetHashCode, addr 0x3db62b8, size 0x2c, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::System::Globalization::RegionInfo* New_ctor(::System::Globalization::CultureInfo* ci);

  static inline ::System::Globalization::RegionInfo* New_ctor(int32_t culture);

  static inline ::System::Globalization::RegionInfo* New_ctor(::StringW name);

  /// @brief Method ToString, addr 0x3db62e4, size 0x10, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr ::StringW const& __cordl_internal_get_currencyEnglishName() const;

  constexpr ::StringW& __cordl_internal_get_currencyEnglishName();

  constexpr ::StringW const& __cordl_internal_get_currencyNativeName() const;

  constexpr ::StringW& __cordl_internal_get_currencyNativeName();

  constexpr ::StringW const& __cordl_internal_get_currencySymbol() const;

  constexpr ::StringW& __cordl_internal_get_currencySymbol();

  constexpr ::StringW const& __cordl_internal_get_englishName() const;

  constexpr ::StringW& __cordl_internal_get_englishName();

  constexpr ::StringW const& __cordl_internal_get_iso2Name() const;

  constexpr ::StringW& __cordl_internal_get_iso2Name();

  constexpr ::StringW const& __cordl_internal_get_iso3Name() const;

  constexpr ::StringW& __cordl_internal_get_iso3Name();

  constexpr ::StringW const& __cordl_internal_get_isoCurrencySymbol() const;

  constexpr ::StringW& __cordl_internal_get_isoCurrencySymbol();

  constexpr ::StringW const& __cordl_internal_get_nativeName() const;

  constexpr ::StringW& __cordl_internal_get_nativeName();

  constexpr int32_t const& __cordl_internal_get_regionId() const;

  constexpr int32_t& __cordl_internal_get_regionId();

  constexpr ::StringW const& __cordl_internal_get_win3Name() const;

  constexpr ::StringW& __cordl_internal_get_win3Name();

  constexpr void __cordl_internal_set_currencyEnglishName(::StringW value);

  constexpr void __cordl_internal_set_currencyNativeName(::StringW value);

  constexpr void __cordl_internal_set_currencySymbol(::StringW value);

  constexpr void __cordl_internal_set_englishName(::StringW value);

  constexpr void __cordl_internal_set_iso2Name(::StringW value);

  constexpr void __cordl_internal_set_iso3Name(::StringW value);

  constexpr void __cordl_internal_set_isoCurrencySymbol(::StringW value);

  constexpr void __cordl_internal_set_nativeName(::StringW value);

  constexpr void __cordl_internal_set_regionId(int32_t value);

  constexpr void __cordl_internal_set_win3Name(::StringW value);

  /// @brief Method .ctor, addr 0x3db5c84, size 0x194, virtual false, abstract: false, final false
  inline void _ctor(::System::Globalization::CultureInfo* ci);

  /// @brief Method .ctor, addr 0x3db5e18, size 0x108, virtual false, abstract: false, final false
  inline void _ctor(int32_t culture);

  /// @brief Method .ctor, addr 0x3db5fc8, size 0x138, virtual false, abstract: false, final false
  inline void _ctor(::StringW name);

  /// @brief Method construct_internal_region_from_name, addr 0x3db6100, size 0x4, virtual false, abstract: false, final false
  inline bool construct_internal_region_from_name(::StringW name);

  static inline ::System::Globalization::RegionInfo* getStaticF_currentRegion();

  /// @brief Method get_CurrencyEnglishName, addr 0x3db6104, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_CurrencyEnglishName();

  /// @brief Method get_CurrencyNativeName, addr 0x3db61c8, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_CurrencyNativeName();

  /// @brief Method get_CurrencySymbol, addr 0x3db610c, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_CurrencySymbol();

  /// @brief Method get_CurrentRegion, addr 0x3db5bc0, size 0xc4, virtual false, abstract: false, final false
  static inline ::System::Globalization::RegionInfo* get_CurrentRegion();

  /// @brief Method get_DisplayName, addr 0x3db6114, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_DisplayName();

  /// @brief Method get_EnglishName, addr 0x3db611c, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_EnglishName();

  /// @brief Method get_GeoId, addr 0x3db6124, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_GeoId();

  /// @brief Method get_ISOCurrencySymbol, addr 0x3db61b8, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_ISOCurrencySymbol();

  /// @brief Method get_IsMetric, addr 0x3db612c, size 0x8c, virtual true, abstract: false, final false
  inline bool get_IsMetric();

  /// @brief Method get_Name, addr 0x3db61d0, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_NativeName, addr 0x3db61c0, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_NativeName();

  /// @brief Method get_ThreeLetterISORegionName, addr 0x3db61d8, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_ThreeLetterISORegionName();

  /// @brief Method get_ThreeLetterWindowsRegionName, addr 0x3db61e0, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_ThreeLetterWindowsRegionName();

  /// @brief Method get_TwoLetterISORegionName, addr 0x3db61e8, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_TwoLetterISORegionName();

  static inline void setStaticF_currentRegion(::System::Globalization::RegionInfo* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RegionInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RegionInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RegionInfo(RegionInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RegionInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RegionInfo(RegionInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3732 };

  /// @brief Field regionId, offset: 0x10, size: 0x4, def value: None
  int32_t ___regionId;

  /// @brief Field iso2Name, offset: 0x18, size: 0x8, def value: None
  ::StringW ___iso2Name;

  /// @brief Field iso3Name, offset: 0x20, size: 0x8, def value: None
  ::StringW ___iso3Name;

  /// @brief Field win3Name, offset: 0x28, size: 0x8, def value: None
  ::StringW ___win3Name;

  /// @brief Field englishName, offset: 0x30, size: 0x8, def value: None
  ::StringW ___englishName;

  /// @brief Field nativeName, offset: 0x38, size: 0x8, def value: None
  ::StringW ___nativeName;

  /// @brief Field currencySymbol, offset: 0x40, size: 0x8, def value: None
  ::StringW ___currencySymbol;

  /// @brief Field isoCurrencySymbol, offset: 0x48, size: 0x8, def value: None
  ::StringW ___isoCurrencySymbol;

  /// @brief Field currencyEnglishName, offset: 0x50, size: 0x8, def value: None
  ::StringW ___currencyEnglishName;

  /// @brief Field currencyNativeName, offset: 0x58, size: 0x8, def value: None
  ::StringW ___currencyNativeName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Globalization::RegionInfo, ___regionId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::RegionInfo, ___iso2Name) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::RegionInfo, ___iso3Name) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::RegionInfo, ___win3Name) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::RegionInfo, ___englishName) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::RegionInfo, ___nativeName) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::RegionInfo, ___currencySymbol) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::RegionInfo, ___isoCurrencySymbol) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::RegionInfo, ___currencyEnglishName) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::RegionInfo, ___currencyNativeName) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Globalization::RegionInfo, 0x60>, "Size mismatch!");

} // namespace System::Globalization
NEED_NO_BOX(::System::Globalization::RegionInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::RegionInfo*, "System.Globalization", "RegionInfo");
