#pragma once
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
// Type: System.Globalization::RegionInfo
// SizeInfo { instance_size: 96, native_size: 80, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Globalization {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3726))
// CS Name: ::System.Globalization::RegionInfo*
class CORDL_TYPE RegionInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field regionId, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_regionId, put = __cordl_internal_set_regionId)) int32_t regionId;

  /// @brief Field iso2Name, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_iso2Name, put = __cordl_internal_set_iso2Name))::StringW iso2Name;

  /// @brief Field iso3Name, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_iso3Name, put = __cordl_internal_set_iso3Name))::StringW iso3Name;

  /// @brief Field win3Name, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_win3Name, put = __cordl_internal_set_win3Name))::StringW win3Name;

  /// @brief Field englishName, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_englishName, put = __cordl_internal_set_englishName))::StringW englishName;

  /// @brief Field nativeName, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_nativeName, put = __cordl_internal_set_nativeName))::StringW nativeName;

  /// @brief Field currencySymbol, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_currencySymbol, put = __cordl_internal_set_currencySymbol))::StringW currencySymbol;

  /// @brief Field isoCurrencySymbol, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_isoCurrencySymbol, put = __cordl_internal_set_isoCurrencySymbol))::StringW isoCurrencySymbol;

  /// @brief Field currencyEnglishName, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_currencyEnglishName, put = __cordl_internal_set_currencyEnglishName))::StringW currencyEnglishName;

  /// @brief Field currencyNativeName, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_currencyNativeName, put = __cordl_internal_set_currencyNativeName))::StringW currencyNativeName;

  /// @brief Field currentRegion, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_currentRegion, put = setStaticF_currentRegion))::System::Globalization::RegionInfo* currentRegion;

  __declspec(property(get = get_CurrencyEnglishName))::StringW CurrencyEnglishName;

  __declspec(property(get = get_CurrencySymbol))::StringW CurrencySymbol;

  __declspec(property(get = get_DisplayName))::StringW DisplayName;

  __declspec(property(get = get_EnglishName))::StringW EnglishName;

  __declspec(property(get = get_GeoId)) int32_t GeoId;

  __declspec(property(get = get_IsMetric)) bool IsMetric;

  __declspec(property(get = get_ISOCurrencySymbol))::StringW ISOCurrencySymbol;

  __declspec(property(get = get_NativeName))::StringW NativeName;

  __declspec(property(get = get_CurrencyNativeName))::StringW CurrencyNativeName;

  __declspec(property(get = get_Name))::StringW Name;

  __declspec(property(get = get_ThreeLetterISORegionName))::StringW ThreeLetterISORegionName;

  __declspec(property(get = get_ThreeLetterWindowsRegionName))::StringW ThreeLetterWindowsRegionName;

  __declspec(property(get = get_TwoLetterISORegionName))::StringW TwoLetterISORegionName;

  constexpr int32_t& __cordl_internal_get_regionId();

  constexpr int32_t const& __cordl_internal_get_regionId() const;

  constexpr void __cordl_internal_set_regionId(int32_t value);

  constexpr ::StringW& __cordl_internal_get_iso2Name();

  constexpr ::StringW const& __cordl_internal_get_iso2Name() const;

  constexpr void __cordl_internal_set_iso2Name(::StringW value);

  constexpr ::StringW& __cordl_internal_get_iso3Name();

  constexpr ::StringW const& __cordl_internal_get_iso3Name() const;

  constexpr void __cordl_internal_set_iso3Name(::StringW value);

  constexpr ::StringW& __cordl_internal_get_win3Name();

  constexpr ::StringW const& __cordl_internal_get_win3Name() const;

  constexpr void __cordl_internal_set_win3Name(::StringW value);

  constexpr ::StringW& __cordl_internal_get_englishName();

  constexpr ::StringW const& __cordl_internal_get_englishName() const;

  constexpr void __cordl_internal_set_englishName(::StringW value);

  constexpr ::StringW& __cordl_internal_get_nativeName();

  constexpr ::StringW const& __cordl_internal_get_nativeName() const;

  constexpr void __cordl_internal_set_nativeName(::StringW value);

  constexpr ::StringW& __cordl_internal_get_currencySymbol();

  constexpr ::StringW const& __cordl_internal_get_currencySymbol() const;

  constexpr void __cordl_internal_set_currencySymbol(::StringW value);

  constexpr ::StringW& __cordl_internal_get_isoCurrencySymbol();

  constexpr ::StringW const& __cordl_internal_get_isoCurrencySymbol() const;

  constexpr void __cordl_internal_set_isoCurrencySymbol(::StringW value);

  constexpr ::StringW& __cordl_internal_get_currencyEnglishName();

  constexpr ::StringW const& __cordl_internal_get_currencyEnglishName() const;

  constexpr void __cordl_internal_set_currencyEnglishName(::StringW value);

  constexpr ::StringW& __cordl_internal_get_currencyNativeName();

  constexpr ::StringW const& __cordl_internal_get_currencyNativeName() const;

  constexpr void __cordl_internal_set_currencyNativeName(::StringW value);

  static inline void setStaticF_currentRegion(::System::Globalization::RegionInfo* value);

  static inline ::System::Globalization::RegionInfo* getStaticF_currentRegion();

  /// @brief Method get_CurrentRegion, addr 0x2579448, size 0xc8, virtual false, abstract: false, final false
  static inline ::System::Globalization::RegionInfo* get_CurrentRegion();

  static inline ::System::Globalization::RegionInfo* New_ctor(int32_t culture);

  /// @brief Method .ctor, addr 0x25796a8, size 0x108, virtual false, abstract: false, final false
  inline void _ctor(int32_t culture);

  static inline ::System::Globalization::RegionInfo* New_ctor(::StringW name);

  /// @brief Method .ctor, addr 0x257985c, size 0x140, virtual false, abstract: false, final false
  inline void _ctor(::StringW name);

  static inline ::System::Globalization::RegionInfo* New_ctor(::System::Globalization::CultureInfo* ci);

  /// @brief Method .ctor, addr 0x2579510, size 0x198, virtual false, abstract: false, final false
  inline void _ctor(::System::Globalization::CultureInfo* ci);

  /// @brief Method GetByTerritory, addr 0x25797b0, size 0xac, virtual false, abstract: false, final false
  inline bool GetByTerritory(::System::Globalization::CultureInfo* ci);

  /// @brief Method construct_internal_region_from_name, addr 0x257999c, size 0x4, virtual false, abstract: false, final false
  inline bool construct_internal_region_from_name(::StringW name);

  /// @brief Method get_CurrencyEnglishName, addr 0x25799a0, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_CurrencyEnglishName();

  /// @brief Method get_CurrencySymbol, addr 0x25799a8, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_CurrencySymbol();

  /// @brief Method get_DisplayName, addr 0x25799b0, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_DisplayName();

  /// @brief Method get_EnglishName, addr 0x25799b8, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_EnglishName();

  /// @brief Method get_GeoId, addr 0x25799c0, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_GeoId();

  /// @brief Method get_IsMetric, addr 0x25799c8, size 0x8c, virtual true, abstract: false, final false
  inline bool get_IsMetric();

  /// @brief Method get_ISOCurrencySymbol, addr 0x2579a54, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_ISOCurrencySymbol();

  /// @brief Method get_NativeName, addr 0x2579a5c, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_NativeName();

  /// @brief Method get_CurrencyNativeName, addr 0x2579a64, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_CurrencyNativeName();

  /// @brief Method get_Name, addr 0x2579a6c, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_ThreeLetterISORegionName, addr 0x2579a74, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_ThreeLetterISORegionName();

  /// @brief Method get_ThreeLetterWindowsRegionName, addr 0x2579a7c, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_ThreeLetterWindowsRegionName();

  /// @brief Method get_TwoLetterISORegionName, addr 0x2579a84, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_TwoLetterISORegionName();

  /// @brief Method Equals, addr 0x2579a8c, size 0xc8, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* value);

  /// @brief Method GetHashCode, addr 0x2579b54, size 0x2c, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x2579b80, size 0x10, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ClearCachedData, addr 0x2579b90, size 0x48, virtual false, abstract: false, final false
  static inline void ClearCachedData();

  // Ctor Parameters [CppParam { name: "", ty: "RegionInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RegionInfo(RegionInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RegionInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RegionInfo(RegionInfo const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RegionInfo();

public:
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
static_assert(::cordl_internals::size_check_v<::System::Globalization::RegionInfo, 0x60>, "Size mismatch!");

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

} // namespace System::Globalization
NEED_NO_BOX(::System::Globalization::RegionInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::RegionInfo*, "System.Globalization", "RegionInfo");
