#pragma once
// IWYU pragma private; include "System\Globalization\RegionInfo.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Globalization/zzzz__RegionInfo_def.hpp"
#include "System/Globalization/zzzz__CultureInfo_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Globalization::RegionInfo.get_CurrentRegion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Globalization::RegionInfo* (*)()>(&::System::Globalization::RegionInfo::get_CurrentRegion)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5be030c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::RegionInfo*>(), { "get_CurrentRegion", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::RegionInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Globalization::RegionInfo::*)(int32_t)>(&::System::Globalization::RegionInfo::_ctor)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5be0588;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::RegionInfo*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::RegionInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Globalization::RegionInfo::*)(::StringW)>(&::System::Globalization::RegionInfo::_ctor)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x5be072c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::RegionInfo*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::RegionInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Globalization::RegionInfo::*)(::System::Globalization::CultureInfo*)>(&::System::Globalization::RegionInfo::_ctor)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x5be03e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::RegionInfo*>(), { ".ctor", {}, { ::i2c::type_of<::System::Globalization::CultureInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::RegionInfo.GetByTerritory
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Globalization::RegionInfo::*)(::System::Globalization::CultureInfo*)>(&::System::Globalization::RegionInfo::GetByTerritory)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5be0684;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::RegionInfo*>(), { "GetByTerritory", {}, { ::i2c::type_of<::System::Globalization::CultureInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::RegionInfo.construct_internal_region_from_name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Globalization::RegionInfo::*)(::StringW)>(&::System::Globalization::RegionInfo::construct_internal_region_from_name)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5be0864;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::RegionInfo*>(), { "construct_internal_region_from_name", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::RegionInfo.get_CurrencyEnglishName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Globalization::RegionInfo::*)()>(&::System::Globalization::RegionInfo::get_CurrencyEnglishName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5be0868;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Globalization::RegionInfo*>(), { ::i2c::class_of<::System::Globalization::RegionInfo*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::RegionInfo.get_CurrencySymbol
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Globalization::RegionInfo::*)()>(&::System::Globalization::RegionInfo::get_CurrencySymbol)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5be0870;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Globalization::RegionInfo*>(), { ::i2c::class_of<::System::Globalization::RegionInfo*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::RegionInfo.get_DisplayName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Globalization::RegionInfo::*)()>(&::System::Globalization::RegionInfo::get_DisplayName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5be0878;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Globalization::RegionInfo*>(), { ::i2c::class_of<::System::Globalization::RegionInfo*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::RegionInfo.get_EnglishName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Globalization::RegionInfo::*)()>(&::System::Globalization::RegionInfo::get_EnglishName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5be0880;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Globalization::RegionInfo*>(), { ::i2c::class_of<::System::Globalization::RegionInfo*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::RegionInfo.get_GeoId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Globalization::RegionInfo::*)()>(&::System::Globalization::RegionInfo::get_GeoId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5be0888;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Globalization::RegionInfo*>(), { ::i2c::class_of<::System::Globalization::RegionInfo*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::RegionInfo.get_IsMetric
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Globalization::RegionInfo::*)()>(&::System::Globalization::RegionInfo::get_IsMetric)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5be0890;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Globalization::RegionInfo*>(), { ::i2c::class_of<::System::Globalization::RegionInfo*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::RegionInfo.get_ISOCurrencySymbol
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Globalization::RegionInfo::*)()>(&::System::Globalization::RegionInfo::get_ISOCurrencySymbol)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5be091c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Globalization::RegionInfo*>(), { ::i2c::class_of<::System::Globalization::RegionInfo*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::RegionInfo.get_NativeName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Globalization::RegionInfo::*)()>(&::System::Globalization::RegionInfo::get_NativeName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5be0924;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Globalization::RegionInfo*>(), { ::i2c::class_of<::System::Globalization::RegionInfo*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::RegionInfo.get_CurrencyNativeName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Globalization::RegionInfo::*)()>(&::System::Globalization::RegionInfo::get_CurrencyNativeName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5be092c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Globalization::RegionInfo*>(), { ::i2c::class_of<::System::Globalization::RegionInfo*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::RegionInfo.get_Name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Globalization::RegionInfo::*)()>(&::System::Globalization::RegionInfo::get_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5be0934;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Globalization::RegionInfo*>(), { ::i2c::class_of<::System::Globalization::RegionInfo*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::RegionInfo.get_ThreeLetterISORegionName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Globalization::RegionInfo::*)()>(&::System::Globalization::RegionInfo::get_ThreeLetterISORegionName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5be093c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Globalization::RegionInfo*>(), { ::i2c::class_of<::System::Globalization::RegionInfo*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::RegionInfo.get_ThreeLetterWindowsRegionName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Globalization::RegionInfo::*)()>(&::System::Globalization::RegionInfo::get_ThreeLetterWindowsRegionName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5be0944;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Globalization::RegionInfo*>(), { ::i2c::class_of<::System::Globalization::RegionInfo*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::RegionInfo.get_TwoLetterISORegionName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Globalization::RegionInfo::*)()>(&::System::Globalization::RegionInfo::get_TwoLetterISORegionName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5be094c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Globalization::RegionInfo*>(), { ::i2c::class_of<::System::Globalization::RegionInfo*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::RegionInfo.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Globalization::RegionInfo::*)(::System::Object*)>(&::System::Globalization::RegionInfo::Equals)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5be0954;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Globalization::RegionInfo*>(), { ::i2c::class_of<::System::Globalization::RegionInfo*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::RegionInfo.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Globalization::RegionInfo::*)()>(&::System::Globalization::RegionInfo::GetHashCode)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5be0a1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Globalization::RegionInfo*>(), { ::i2c::class_of<::System::Globalization::RegionInfo*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::RegionInfo.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Globalization::RegionInfo::*)()>(&::System::Globalization::RegionInfo::ToString)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5be0a48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Globalization::RegionInfo*>(), { ::i2c::class_of<::System::Globalization::RegionInfo*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::RegionInfo.ClearCachedData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::System::Globalization::RegionInfo::ClearCachedData)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5be0a58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::RegionInfo*>(), { "ClearCachedData", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& System::Globalization::RegionInfo::__cordl_internal_get_regionId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___regionId;
}
constexpr int32_t const& System::Globalization::RegionInfo::__cordl_internal_get_regionId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___regionId;
}
constexpr void System::Globalization::RegionInfo::__cordl_internal_set_regionId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___regionId = value;
}
constexpr ::StringW& System::Globalization::RegionInfo::__cordl_internal_get_iso2Name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___iso2Name;
}
constexpr ::StringW const& System::Globalization::RegionInfo::__cordl_internal_get_iso2Name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___iso2Name;
}
constexpr void System::Globalization::RegionInfo::__cordl_internal_set_iso2Name(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___iso2Name = value;
}
constexpr ::StringW& System::Globalization::RegionInfo::__cordl_internal_get_iso3Name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___iso3Name;
}
constexpr ::StringW const& System::Globalization::RegionInfo::__cordl_internal_get_iso3Name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___iso3Name;
}
constexpr void System::Globalization::RegionInfo::__cordl_internal_set_iso3Name(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___iso3Name = value;
}
constexpr ::StringW& System::Globalization::RegionInfo::__cordl_internal_get_win3Name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___win3Name;
}
constexpr ::StringW const& System::Globalization::RegionInfo::__cordl_internal_get_win3Name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___win3Name;
}
constexpr void System::Globalization::RegionInfo::__cordl_internal_set_win3Name(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___win3Name = value;
}
constexpr ::StringW& System::Globalization::RegionInfo::__cordl_internal_get_englishName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___englishName;
}
constexpr ::StringW const& System::Globalization::RegionInfo::__cordl_internal_get_englishName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___englishName;
}
constexpr void System::Globalization::RegionInfo::__cordl_internal_set_englishName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___englishName = value;
}
constexpr ::StringW& System::Globalization::RegionInfo::__cordl_internal_get_nativeName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nativeName;
}
constexpr ::StringW const& System::Globalization::RegionInfo::__cordl_internal_get_nativeName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nativeName;
}
constexpr void System::Globalization::RegionInfo::__cordl_internal_set_nativeName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___nativeName = value;
}
constexpr ::StringW& System::Globalization::RegionInfo::__cordl_internal_get_currencySymbol() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currencySymbol;
}
constexpr ::StringW const& System::Globalization::RegionInfo::__cordl_internal_get_currencySymbol() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currencySymbol;
}
constexpr void System::Globalization::RegionInfo::__cordl_internal_set_currencySymbol(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___currencySymbol = value;
}
constexpr ::StringW& System::Globalization::RegionInfo::__cordl_internal_get_isoCurrencySymbol() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isoCurrencySymbol;
}
constexpr ::StringW const& System::Globalization::RegionInfo::__cordl_internal_get_isoCurrencySymbol() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isoCurrencySymbol;
}
constexpr void System::Globalization::RegionInfo::__cordl_internal_set_isoCurrencySymbol(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isoCurrencySymbol = value;
}
constexpr ::StringW& System::Globalization::RegionInfo::__cordl_internal_get_currencyEnglishName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currencyEnglishName;
}
constexpr ::StringW const& System::Globalization::RegionInfo::__cordl_internal_get_currencyEnglishName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currencyEnglishName;
}
constexpr void System::Globalization::RegionInfo::__cordl_internal_set_currencyEnglishName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___currencyEnglishName = value;
}
constexpr ::StringW& System::Globalization::RegionInfo::__cordl_internal_get_currencyNativeName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currencyNativeName;
}
constexpr ::StringW const& System::Globalization::RegionInfo::__cordl_internal_get_currencyNativeName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currencyNativeName;
}
constexpr void System::Globalization::RegionInfo::__cordl_internal_set_currencyNativeName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___currencyNativeName = value;
}
inline void System::Globalization::RegionInfo::setStaticF_currentRegion(::System::Globalization::RegionInfo* value) {
  ::cordl_internals::setStaticField<::System::Globalization::RegionInfo*, "currentRegion", ::System::Globalization::RegionInfo*>(std::forward<::System::Globalization::RegionInfo*>(value));
}
inline ::System::Globalization::RegionInfo* System::Globalization::RegionInfo::getStaticF_currentRegion() {
  return ::cordl_internals::getStaticField<::System::Globalization::RegionInfo*, "currentRegion", ::System::Globalization::RegionInfo*>();
}
inline ::System::Globalization::RegionInfo* System::Globalization::RegionInfo::get_CurrentRegion() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::RegionInfo*>(), { "get_CurrentRegion", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Globalization::RegionInfo*>(nullptr, ___internal_method);
}
inline void System::Globalization::RegionInfo::_ctor(int32_t culture) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::RegionInfo*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, culture);
}
inline void System::Globalization::RegionInfo::_ctor(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::RegionInfo*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
inline void System::Globalization::RegionInfo::_ctor(::System::Globalization::CultureInfo* ci) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::RegionInfo*>(), { ".ctor", {}, { ::i2c::type_of<::System::Globalization::CultureInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ci);
}
inline bool System::Globalization::RegionInfo::GetByTerritory(::System::Globalization::CultureInfo* ci) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::RegionInfo*>(), { "GetByTerritory", {}, { ::i2c::type_of<::System::Globalization::CultureInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, ci);
}
inline bool System::Globalization::RegionInfo::construct_internal_region_from_name(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::RegionInfo*>(), { "construct_internal_region_from_name", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, name);
}
inline ::StringW System::Globalization::RegionInfo::get_CurrencyEnglishName() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Globalization::RegionInfo*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Globalization::RegionInfo::get_CurrencySymbol() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Globalization::RegionInfo*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Globalization::RegionInfo::get_DisplayName() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Globalization::RegionInfo*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Globalization::RegionInfo::get_EnglishName() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Globalization::RegionInfo*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline int32_t System::Globalization::RegionInfo::get_GeoId() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Globalization::RegionInfo*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool System::Globalization::RegionInfo::get_IsMetric() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Globalization::RegionInfo*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::StringW System::Globalization::RegionInfo::get_ISOCurrencySymbol() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Globalization::RegionInfo*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Globalization::RegionInfo::get_NativeName() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Globalization::RegionInfo*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Globalization::RegionInfo::get_CurrencyNativeName() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Globalization::RegionInfo*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Globalization::RegionInfo::get_Name() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Globalization::RegionInfo*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Globalization::RegionInfo::get_ThreeLetterISORegionName() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Globalization::RegionInfo*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Globalization::RegionInfo::get_ThreeLetterWindowsRegionName() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Globalization::RegionInfo*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Globalization::RegionInfo::get_TwoLetterISORegionName() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Globalization::RegionInfo*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool System::Globalization::RegionInfo::Equals(::System::Object* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Globalization::RegionInfo*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline int32_t System::Globalization::RegionInfo::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Globalization::RegionInfo*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::StringW System::Globalization::RegionInfo::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Globalization::RegionInfo*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Globalization::RegionInfo::ClearCachedData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::RegionInfo*>(), { "ClearCachedData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::System::Globalization::RegionInfo* System::Globalization::RegionInfo::New_ctor(int32_t culture) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Globalization::RegionInfo*>(culture));
}
inline ::System::Globalization::RegionInfo* System::Globalization::RegionInfo::New_ctor(::StringW name) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Globalization::RegionInfo*>(name));
}
inline ::System::Globalization::RegionInfo* System::Globalization::RegionInfo::New_ctor(::System::Globalization::CultureInfo* ci) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Globalization::RegionInfo*>(ci));
}
// Ctor Parameters []
constexpr ::System::Globalization::RegionInfo::RegionInfo() {}
