#pragma once
// IWYU pragma private; include "GlobalNamespace\QuickPlaySetupData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__QuickPlaySetupData_def.hpp"
#include "GlobalNamespace/zzzz__QuickPlaySetupData_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_LocalizedCustomPackName._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_LocalizedCustomPackName::*)()>(
    &::GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_LocalizedCustomPackName::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x37323f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_LocalizedCustomPackName*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_LocalizedCustomPackName::__cordl_internal_get_language() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___language;
}
constexpr ::StringW const& GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_LocalizedCustomPackName::__cordl_internal_get_language() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___language;
}
constexpr void GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_LocalizedCustomPackName::__cordl_internal_set_language(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___language = value;
}
constexpr ::StringW& GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_LocalizedCustomPackName::__cordl_internal_get_packName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___packName;
}
constexpr ::StringW const& GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_LocalizedCustomPackName::__cordl_internal_get_packName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___packName;
}
constexpr void GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_LocalizedCustomPackName::__cordl_internal_set_packName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___packName = value;
}
inline void GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_LocalizedCustomPackName::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_LocalizedCustomPackName*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_LocalizedCustomPackName* GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_LocalizedCustomPackName::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_LocalizedCustomPackName*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_LocalizedCustomPackName::QuickPlaySongPacksOverride_QuickPlaySetupData_LocalizedCustomPackName() {}
//  Writing Method size for method: ::GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_LocalizedCustomPack._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_LocalizedCustomPack::*)()>(
    &::GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_LocalizedCustomPack::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x37323f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_LocalizedCustomPack*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_LocalizedCustomPack::__cordl_internal_get_serializedName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serializedName;
}
constexpr ::StringW const& GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_LocalizedCustomPack::__cordl_internal_get_serializedName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serializedName;
}
constexpr void GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_LocalizedCustomPack::__cordl_internal_set_serializedName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___serializedName = value;
}
constexpr int32_t& GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_LocalizedCustomPack::__cordl_internal_get_order() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___order;
}
constexpr int32_t const& GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_LocalizedCustomPack::__cordl_internal_get_order() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___order;
}
constexpr void GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_LocalizedCustomPack::__cordl_internal_set_order(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___order = value;
}
constexpr ::ArrayW<::GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_LocalizedCustomPackName*>&
GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_LocalizedCustomPack::__cordl_internal_get_localizedNames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___localizedNames;
}
constexpr ::ArrayW<::GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_LocalizedCustomPackName*> const&
GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_LocalizedCustomPack::__cordl_internal_get_localizedNames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___localizedNames;
}
constexpr void GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_LocalizedCustomPack::__cordl_internal_set_localizedNames(
    ::ArrayW<::GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_LocalizedCustomPackName*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___localizedNames = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_LocalizedCustomPack::__cordl_internal_get_packIds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___packIds;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_LocalizedCustomPack::__cordl_internal_get_packIds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___packIds;
}
constexpr void GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_LocalizedCustomPack::__cordl_internal_set_packIds(::System::Collections::Generic::List_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___packIds = value;
}
inline void GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_LocalizedCustomPack::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_LocalizedCustomPack*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_LocalizedCustomPack* GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_LocalizedCustomPack::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_LocalizedCustomPack*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_LocalizedCustomPack::QuickPlaySongPacksOverride_QuickPlaySetupData_LocalizedCustomPack() {}
//  Writing Method size for method: ::GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_PredefinedPack._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_PredefinedPack::*)()>(
    &::GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_PredefinedPack::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3732468;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_PredefinedPack*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_PredefinedPack::__cordl_internal_get_order() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___order;
}
constexpr int32_t const& GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_PredefinedPack::__cordl_internal_get_order() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___order;
}
constexpr void GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_PredefinedPack::__cordl_internal_set_order(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___order = value;
}
constexpr ::StringW& GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_PredefinedPack::__cordl_internal_get_packId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___packId;
}
constexpr ::StringW const& GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_PredefinedPack::__cordl_internal_get_packId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___packId;
}
constexpr void GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_PredefinedPack::__cordl_internal_set_packId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___packId = value;
}
inline void GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_PredefinedPack::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_PredefinedPack*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_PredefinedPack* GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_PredefinedPack::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_PredefinedPack*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_PredefinedPack::QuickPlaySongPacksOverride_QuickPlaySetupData_PredefinedPack() {}
//  Writing Method size for method: ::GlobalNamespace::QuickPlaySetupData_QuickPlaySongPacksOverride._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::QuickPlaySetupData_QuickPlaySongPacksOverride::*)()>(
    &::GlobalNamespace::QuickPlaySetupData_QuickPlaySongPacksOverride::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x3732334;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::QuickPlaySetupData_QuickPlaySongPacksOverride*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_PredefinedPack*>*&
GlobalNamespace::QuickPlaySetupData_QuickPlaySongPacksOverride::__cordl_internal_get_predefinedPackIds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___predefinedPackIds;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_PredefinedPack*>* const&
GlobalNamespace::QuickPlaySetupData_QuickPlaySongPacksOverride::__cordl_internal_get_predefinedPackIds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___predefinedPackIds;
}
constexpr void GlobalNamespace::QuickPlaySetupData_QuickPlaySongPacksOverride::__cordl_internal_set_predefinedPackIds(
    ::System::Collections::Generic::List_1<::GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_PredefinedPack*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___predefinedPackIds = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_LocalizedCustomPack*>*&
GlobalNamespace::QuickPlaySetupData_QuickPlaySongPacksOverride::__cordl_internal_get_localizedCustomPacks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___localizedCustomPacks;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_LocalizedCustomPack*>* const&
GlobalNamespace::QuickPlaySetupData_QuickPlaySongPacksOverride::__cordl_internal_get_localizedCustomPacks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___localizedCustomPacks;
}
constexpr void GlobalNamespace::QuickPlaySetupData_QuickPlaySongPacksOverride::__cordl_internal_set_localizedCustomPacks(
    ::System::Collections::Generic::List_1<::GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_LocalizedCustomPack*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___localizedCustomPacks = value;
}
inline void GlobalNamespace::QuickPlaySetupData_QuickPlaySongPacksOverride::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::QuickPlaySetupData_QuickPlaySongPacksOverride*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::QuickPlaySetupData_QuickPlaySongPacksOverride* GlobalNamespace::QuickPlaySetupData_QuickPlaySongPacksOverride::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::QuickPlaySetupData_QuickPlaySongPacksOverride*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::QuickPlaySetupData_QuickPlaySongPacksOverride::QuickPlaySetupData_QuickPlaySongPacksOverride() {}
//  Writing Method size for method: ::GlobalNamespace::QuickPlaySetupData.get_hasOverride
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::QuickPlaySetupData::*)()>(&::GlobalNamespace::QuickPlaySetupData::get_hasOverride)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x3732298;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::QuickPlaySetupData*>(), { "get_hasOverride", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::QuickPlaySetupData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::QuickPlaySetupData::*)()>(&::GlobalNamespace::QuickPlaySetupData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3732330;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::QuickPlaySetupData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::QuickPlaySetupData_QuickPlaySongPacksOverride*& GlobalNamespace::QuickPlaySetupData::__cordl_internal_get_quickPlayAvailablePacksOverride() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___quickPlayAvailablePacksOverride;
}
constexpr ::GlobalNamespace::QuickPlaySetupData_QuickPlaySongPacksOverride* const& GlobalNamespace::QuickPlaySetupData::__cordl_internal_get_quickPlayAvailablePacksOverride() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___quickPlayAvailablePacksOverride;
}
constexpr void GlobalNamespace::QuickPlaySetupData::__cordl_internal_set_quickPlayAvailablePacksOverride(::GlobalNamespace::QuickPlaySetupData_QuickPlaySongPacksOverride* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___quickPlayAvailablePacksOverride = value;
}
inline bool GlobalNamespace::QuickPlaySetupData::get_hasOverride() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::QuickPlaySetupData*>(), { "get_hasOverride", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::QuickPlaySetupData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::QuickPlaySetupData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::QuickPlaySetupData* GlobalNamespace::QuickPlaySetupData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::QuickPlaySetupData*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::QuickPlaySetupData::QuickPlaySetupData() {}
