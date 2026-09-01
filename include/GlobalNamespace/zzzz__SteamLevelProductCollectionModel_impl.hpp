#pragma once
// IWYU pragma private; include "GlobalNamespace\SteamLevelProductCollectionModel.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__SteamLevelProductCollectionModel_def.hpp"
#include "GlobalNamespace/zzzz__ILevelPackProductData_1_def.hpp"
#include "GlobalNamespace/zzzz__ILevelProductData_def.hpp"
#include "GlobalNamespace/zzzz__SteamLevelProductCollectionModel_def.hpp"
#include "GlobalNamespace/zzzz__SteamLevelProductPacksSO_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SteamLevelProductCollectionModel_LevelDepotData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SteamLevelProductCollectionModel_LevelDepotData::*)()>(
    &::GlobalNamespace::SteamLevelProductCollectionModel_LevelDepotData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x37456e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SteamLevelProductCollectionModel_LevelDepotData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::SteamLevelProductCollectionModel_LevelDepotData::__cordl_internal_get_checkDepots() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___checkDepots;
}
constexpr bool const& GlobalNamespace::SteamLevelProductCollectionModel_LevelDepotData::__cordl_internal_get_checkDepots() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___checkDepots;
}
constexpr void GlobalNamespace::SteamLevelProductCollectionModel_LevelDepotData::__cordl_internal_set_checkDepots(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___checkDepots = value;
}
constexpr uint32_t& GlobalNamespace::SteamLevelProductCollectionModel_LevelDepotData::__cordl_internal_get_noEnvironmentKeywordsDepotId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___noEnvironmentKeywordsDepotId;
}
constexpr uint32_t const& GlobalNamespace::SteamLevelProductCollectionModel_LevelDepotData::__cordl_internal_get_noEnvironmentKeywordsDepotId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___noEnvironmentKeywordsDepotId;
}
constexpr void GlobalNamespace::SteamLevelProductCollectionModel_LevelDepotData::__cordl_internal_set_noEnvironmentKeywordsDepotId(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___noEnvironmentKeywordsDepotId = value;
}
inline void GlobalNamespace::SteamLevelProductCollectionModel_LevelDepotData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SteamLevelProductCollectionModel_LevelDepotData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SteamLevelProductCollectionModel_LevelDepotData* GlobalNamespace::SteamLevelProductCollectionModel_LevelDepotData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SteamLevelProductCollectionModel_LevelDepotData*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SteamLevelProductCollectionModel_LevelDepotData::SteamLevelProductCollectionModel_LevelDepotData() {}
//  Writing Method size for method: ::GlobalNamespace::SteamLevelProductCollectionModel_LevelProductData.get_appId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::GlobalNamespace::SteamLevelProductCollectionModel_LevelProductData::*)()>(
    &::GlobalNamespace::SteamLevelProductCollectionModel_LevelProductData::get_appId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x37456ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SteamLevelProductCollectionModel_LevelProductData*>(), { "get_appId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SteamLevelProductCollectionModel_LevelProductData.get_levelId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::SteamLevelProductCollectionModel_LevelProductData::*)()>(
    &::GlobalNamespace::SteamLevelProductCollectionModel_LevelProductData::get_levelId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x37456f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SteamLevelProductCollectionModel_LevelProductData*>(), { "get_levelId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SteamLevelProductCollectionModel_LevelProductData.get_levelDepotData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SteamLevelProductCollectionModel_LevelDepotData* (::GlobalNamespace::SteamLevelProductCollectionModel_LevelProductData::*)()>(
    &::GlobalNamespace::SteamLevelProductCollectionModel_LevelProductData::get_levelDepotData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x37456fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SteamLevelProductCollectionModel_LevelProductData*>(), { "get_levelDepotData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SteamLevelProductCollectionModel_LevelProductData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SteamLevelProductCollectionModel_LevelProductData::*)(::StringW, uint32_t)>(
    &::GlobalNamespace::SteamLevelProductCollectionModel_LevelProductData::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3745704;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SteamLevelProductCollectionModel_LevelProductData*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::SteamLevelProductCollectionModel_LevelProductData::__cordl_internal_get__levelId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelId;
}
constexpr ::StringW const& GlobalNamespace::SteamLevelProductCollectionModel_LevelProductData::__cordl_internal_get__levelId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelId;
}
constexpr void GlobalNamespace::SteamLevelProductCollectionModel_LevelProductData::__cordl_internal_set__levelId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____levelId = value;
}
constexpr uint32_t& GlobalNamespace::SteamLevelProductCollectionModel_LevelProductData::__cordl_internal_get__appId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____appId;
}
constexpr uint32_t const& GlobalNamespace::SteamLevelProductCollectionModel_LevelProductData::__cordl_internal_get__appId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____appId;
}
constexpr void GlobalNamespace::SteamLevelProductCollectionModel_LevelProductData::__cordl_internal_set__appId(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____appId = value;
}
constexpr ::GlobalNamespace::SteamLevelProductCollectionModel_LevelDepotData*& GlobalNamespace::SteamLevelProductCollectionModel_LevelProductData::__cordl_internal_get__levelDepotData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelDepotData;
}
constexpr ::GlobalNamespace::SteamLevelProductCollectionModel_LevelDepotData* const& GlobalNamespace::SteamLevelProductCollectionModel_LevelProductData::__cordl_internal_get__levelDepotData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelDepotData;
}
constexpr void GlobalNamespace::SteamLevelProductCollectionModel_LevelProductData::__cordl_internal_set__levelDepotData(::GlobalNamespace::SteamLevelProductCollectionModel_LevelDepotData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____levelDepotData = value;
}
inline uint32_t GlobalNamespace::SteamLevelProductCollectionModel_LevelProductData::get_appId() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SteamLevelProductCollectionModel_LevelProductData*>(), { "get_appId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::SteamLevelProductCollectionModel_LevelProductData::get_levelId() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SteamLevelProductCollectionModel_LevelProductData*>(), { "get_levelId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::GlobalNamespace::SteamLevelProductCollectionModel_LevelDepotData* GlobalNamespace::SteamLevelProductCollectionModel_LevelProductData::get_levelDepotData() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SteamLevelProductCollectionModel_LevelProductData*>(), { "get_levelDepotData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SteamLevelProductCollectionModel_LevelDepotData*>(this, ___internal_method);
}
inline void GlobalNamespace::SteamLevelProductCollectionModel_LevelProductData::_ctor(::StringW levelId, uint32_t appId) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SteamLevelProductCollectionModel_LevelProductData*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, levelId, appId);
}
inline ::GlobalNamespace::SteamLevelProductCollectionModel_LevelProductData* GlobalNamespace::SteamLevelProductCollectionModel_LevelProductData::New_ctor(::StringW levelId, uint32_t appId) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SteamLevelProductCollectionModel_LevelProductData*>(levelId, appId));
}
/// @brief Convert operator to "::GlobalNamespace::ILevelProductData"
constexpr GlobalNamespace::SteamLevelProductCollectionModel_LevelProductData::operator ::GlobalNamespace::ILevelProductData*() noexcept {
  return static_cast<::GlobalNamespace::ILevelProductData*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ILevelProductData"
constexpr ::GlobalNamespace::ILevelProductData* GlobalNamespace::SteamLevelProductCollectionModel_LevelProductData::i___GlobalNamespace__ILevelProductData() noexcept {
  return static_cast<::GlobalNamespace::ILevelProductData*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SteamLevelProductCollectionModel_LevelProductData::SteamLevelProductCollectionModel_LevelProductData() {}
//  Writing Method size for method: ::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackProductData.get_bundleId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackProductData::*)()>(
    &::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackProductData::get_bundleId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3745710;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackProductData*>(), { "get_bundleId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackProductData.get_levelPackId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackProductData::*)()>(
    &::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackProductData::get_levelPackId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3745718;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackProductData*>(), { "get_levelPackId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackProductData.get_levelProductsData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::SteamLevelProductCollectionModel_LevelProductData*>* (
    ::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackProductData::*)()>(&::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackProductData::get_levelProductsData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3745720;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackProductData*>(), { "get_levelProductsData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackProductData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackProductData::*)(
    ::StringW, uint32_t, ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::SteamLevelProductCollectionModel_LevelProductData*>*)>(
    &::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackProductData::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x3745728;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackProductData*>(),
                                                { ".ctor",
                                                  {},
                                                  { ::i2c::type_of<::StringW>(), ::i2c::type_of<uint32_t>(),
                                                    ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::SteamLevelProductCollectionModel_LevelProductData*>*>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::SteamLevelProductCollectionModel_LevelPackProductData::__cordl_internal_get__levelPackId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelPackId;
}
constexpr ::StringW const& GlobalNamespace::SteamLevelProductCollectionModel_LevelPackProductData::__cordl_internal_get__levelPackId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelPackId;
}
constexpr void GlobalNamespace::SteamLevelProductCollectionModel_LevelPackProductData::__cordl_internal_set__levelPackId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____levelPackId = value;
}
constexpr uint32_t& GlobalNamespace::SteamLevelProductCollectionModel_LevelPackProductData::__cordl_internal_get__bundleId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bundleId;
}
constexpr uint32_t const& GlobalNamespace::SteamLevelProductCollectionModel_LevelPackProductData::__cordl_internal_get__bundleId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bundleId;
}
constexpr void GlobalNamespace::SteamLevelProductCollectionModel_LevelPackProductData::__cordl_internal_set__bundleId(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bundleId = value;
}
constexpr ::ArrayW<::GlobalNamespace::SteamLevelProductCollectionModel_LevelProductData*>&
GlobalNamespace::SteamLevelProductCollectionModel_LevelPackProductData::__cordl_internal_get__levelProductsData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelProductsData;
}
constexpr ::ArrayW<::GlobalNamespace::SteamLevelProductCollectionModel_LevelProductData*> const&
GlobalNamespace::SteamLevelProductCollectionModel_LevelPackProductData::__cordl_internal_get__levelProductsData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelProductsData;
}
constexpr void
GlobalNamespace::SteamLevelProductCollectionModel_LevelPackProductData::__cordl_internal_set__levelProductsData(::ArrayW<::GlobalNamespace::SteamLevelProductCollectionModel_LevelProductData*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____levelProductsData = value;
}
inline uint32_t GlobalNamespace::SteamLevelProductCollectionModel_LevelPackProductData::get_bundleId() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackProductData*>(), { "get_bundleId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::SteamLevelProductCollectionModel_LevelPackProductData::get_levelPackId() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackProductData*>(), { "get_levelPackId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::SteamLevelProductCollectionModel_LevelProductData*>*
GlobalNamespace::SteamLevelProductCollectionModel_LevelPackProductData::get_levelProductsData() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackProductData*>(), { "get_levelProductsData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::SteamLevelProductCollectionModel_LevelProductData*>*>(this, ___internal_method);
}
inline void GlobalNamespace::SteamLevelProductCollectionModel_LevelPackProductData::_ctor(
    ::StringW levelPackId, uint32_t bundleId, ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::SteamLevelProductCollectionModel_LevelProductData*>* levelProducts) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackProductData*>(),
                                              { ".ctor",
                                                {},
                                                { ::i2c::type_of<::StringW>(), ::i2c::type_of<uint32_t>(),
                                                  ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::SteamLevelProductCollectionModel_LevelProductData*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, levelPackId, bundleId, levelProducts);
}
inline ::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackProductData* GlobalNamespace::SteamLevelProductCollectionModel_LevelPackProductData::New_ctor(
    ::StringW levelPackId, uint32_t bundleId, ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::SteamLevelProductCollectionModel_LevelProductData*>* levelProducts) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackProductData*>(levelPackId, bundleId, levelProducts));
}
/// @brief Convert operator to "::GlobalNamespace::ILevelPackProductData_1<::GlobalNamespace::SteamLevelProductCollectionModel_LevelProductData*>"
constexpr GlobalNamespace::SteamLevelProductCollectionModel_LevelPackProductData::operator ::GlobalNamespace::ILevelPackProductData_1<
    ::GlobalNamespace::SteamLevelProductCollectionModel_LevelProductData*>*() noexcept {
  return static_cast<::GlobalNamespace::ILevelPackProductData_1<::GlobalNamespace::SteamLevelProductCollectionModel_LevelProductData*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ILevelPackProductData_1<::GlobalNamespace::SteamLevelProductCollectionModel_LevelProductData*>"
constexpr ::GlobalNamespace::ILevelPackProductData_1<::GlobalNamespace::SteamLevelProductCollectionModel_LevelProductData*>*
GlobalNamespace::SteamLevelProductCollectionModel_LevelPackProductData::i___GlobalNamespace__ILevelPackProductData_1___GlobalNamespace__SteamLevelProductCollectionModel_LevelProductData__() noexcept {
  return static_cast<::GlobalNamespace::ILevelPackProductData_1<::GlobalNamespace::SteamLevelProductCollectionModel_LevelProductData*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackProductData::SteamLevelProductCollectionModel_LevelPackProductData() {}
//  Writing Method size for method: ::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackRedirectionData.get_targetLevelPackId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackRedirectionData::*)()>(
    &::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackRedirectionData::get_targetLevelPackId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x37457a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackRedirectionData*>(), { "get_targetLevelPackId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackRedirectionData.get_shouldOwnLevelPackId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackRedirectionData::*)()>(
    &::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackRedirectionData::get_shouldOwnLevelPackId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x37457a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackRedirectionData*>(), { "get_shouldOwnLevelPackId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackRedirectionData.get_redirectedBundleId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackRedirectionData::*)()>(
    &::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackRedirectionData::get_redirectedBundleId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x37457b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackRedirectionData*>(), { "get_redirectedBundleId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackRedirectionData.get_validUntilDate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackRedirectionData::*)()>(
    &::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackRedirectionData::get_validUntilDate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x37457b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackRedirectionData*>(), { "get_validUntilDate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackRedirectionData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackRedirectionData::*)()>(
    &::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackRedirectionData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x37457c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackRedirectionData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::SteamLevelProductCollectionModel_LevelPackRedirectionData::__cordl_internal_get__targetLevelPackId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____targetLevelPackId;
}
constexpr ::StringW const& GlobalNamespace::SteamLevelProductCollectionModel_LevelPackRedirectionData::__cordl_internal_get__targetLevelPackId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____targetLevelPackId;
}
constexpr void GlobalNamespace::SteamLevelProductCollectionModel_LevelPackRedirectionData::__cordl_internal_set__targetLevelPackId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____targetLevelPackId = value;
}
constexpr ::StringW& GlobalNamespace::SteamLevelProductCollectionModel_LevelPackRedirectionData::__cordl_internal_get__shouldOwnLevelPackId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shouldOwnLevelPackId;
}
constexpr ::StringW const& GlobalNamespace::SteamLevelProductCollectionModel_LevelPackRedirectionData::__cordl_internal_get__shouldOwnLevelPackId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shouldOwnLevelPackId;
}
constexpr void GlobalNamespace::SteamLevelProductCollectionModel_LevelPackRedirectionData::__cordl_internal_set__shouldOwnLevelPackId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____shouldOwnLevelPackId = value;
}
constexpr uint32_t& GlobalNamespace::SteamLevelProductCollectionModel_LevelPackRedirectionData::__cordl_internal_get__redirectedBundleId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____redirectedBundleId;
}
constexpr uint32_t const& GlobalNamespace::SteamLevelProductCollectionModel_LevelPackRedirectionData::__cordl_internal_get__redirectedBundleId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____redirectedBundleId;
}
constexpr void GlobalNamespace::SteamLevelProductCollectionModel_LevelPackRedirectionData::__cordl_internal_set__redirectedBundleId(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____redirectedBundleId = value;
}
constexpr ::StringW& GlobalNamespace::SteamLevelProductCollectionModel_LevelPackRedirectionData::__cordl_internal_get__validUntilDate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____validUntilDate;
}
constexpr ::StringW const& GlobalNamespace::SteamLevelProductCollectionModel_LevelPackRedirectionData::__cordl_internal_get__validUntilDate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____validUntilDate;
}
constexpr void GlobalNamespace::SteamLevelProductCollectionModel_LevelPackRedirectionData::__cordl_internal_set__validUntilDate(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____validUntilDate = value;
}
inline ::StringW GlobalNamespace::SteamLevelProductCollectionModel_LevelPackRedirectionData::get_targetLevelPackId() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackRedirectionData*>(), { "get_targetLevelPackId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::SteamLevelProductCollectionModel_LevelPackRedirectionData::get_shouldOwnLevelPackId() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackRedirectionData*>(), { "get_shouldOwnLevelPackId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline uint32_t GlobalNamespace::SteamLevelProductCollectionModel_LevelPackRedirectionData::get_redirectedBundleId() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackRedirectionData*>(), { "get_redirectedBundleId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::SteamLevelProductCollectionModel_LevelPackRedirectionData::get_validUntilDate() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackRedirectionData*>(), { "get_validUntilDate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::SteamLevelProductCollectionModel_LevelPackRedirectionData::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackRedirectionData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackRedirectionData* GlobalNamespace::SteamLevelProductCollectionModel_LevelPackRedirectionData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackRedirectionData*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackRedirectionData::SteamLevelProductCollectionModel_LevelPackRedirectionData() {}
//  Writing Method size for method: ::GlobalNamespace::SteamLevelProductCollectionModel.get_levelProductDataCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::SteamLevelProductCollectionModel::*)()>(
    &::GlobalNamespace::SteamLevelProductCollectionModel::get_levelProductDataCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3744c78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SteamLevelProductCollectionModel*>(), { "get_levelProductDataCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SteamLevelProductCollectionModel._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SteamLevelProductCollectionModel::*)(
    ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::SteamLevelProductPacksSO>>*)>(&::GlobalNamespace::SteamLevelProductCollectionModel::_ctor)> {
  constexpr static std::size_t size = 0x900;
  constexpr static std::size_t addrs = 0x3744c80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SteamLevelProductCollectionModel*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::SteamLevelProductPacksSO>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SteamLevelProductCollectionModel.get_levelProductsData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::SteamLevelProductCollectionModel_LevelProductData*>* (
    ::GlobalNamespace::SteamLevelProductCollectionModel::*)()>(&::GlobalNamespace::SteamLevelProductCollectionModel::get_levelProductsData)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x3745580;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SteamLevelProductCollectionModel*>(), { "get_levelProductsData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SteamLevelProductCollectionModel.GetLevelProductData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SteamLevelProductCollectionModel_LevelProductData* (::GlobalNamespace::SteamLevelProductCollectionModel::*)(::StringW)>(
    &::GlobalNamespace::SteamLevelProductCollectionModel::GetLevelProductData)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x37455d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SteamLevelProductCollectionModel*>(), { "GetLevelProductData", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SteamLevelProductCollectionModel.GetLevelPackProductData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackProductData* (::GlobalNamespace::SteamLevelProductCollectionModel::*)(::StringW)>(
    &::GlobalNamespace::SteamLevelProductCollectionModel::GetLevelPackProductData)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x3745630;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SteamLevelProductCollectionModel*>(), { "GetLevelPackProductData", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SteamLevelProductCollectionModel.GetLevelPackRedirectionData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackRedirectionData* (
    ::GlobalNamespace::SteamLevelProductCollectionModel::*)(::StringW)>(&::GlobalNamespace::SteamLevelProductCollectionModel::GetLevelPackRedirectionData)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x374568c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SteamLevelProductCollectionModel*>(), { "GetLevelPackRedirectionData", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::SteamLevelProductCollectionModel_LevelProductData*>*&
GlobalNamespace::SteamLevelProductCollectionModel::__cordl_internal_get__levelIdToProductData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelIdToProductData;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::SteamLevelProductCollectionModel_LevelProductData*>* const&
GlobalNamespace::SteamLevelProductCollectionModel::__cordl_internal_get__levelIdToProductData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelIdToProductData;
}
constexpr void GlobalNamespace::SteamLevelProductCollectionModel::__cordl_internal_set__levelIdToProductData(
    ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::SteamLevelProductCollectionModel_LevelProductData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____levelIdToProductData = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackProductData*>*&
GlobalNamespace::SteamLevelProductCollectionModel::__cordl_internal_get__levelPackIdToProductData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelPackIdToProductData;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackProductData*>* const&
GlobalNamespace::SteamLevelProductCollectionModel::__cordl_internal_get__levelPackIdToProductData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelPackIdToProductData;
}
constexpr void GlobalNamespace::SteamLevelProductCollectionModel::__cordl_internal_set__levelPackIdToProductData(
    ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackProductData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____levelPackIdToProductData = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackRedirectionData*>*&
GlobalNamespace::SteamLevelProductCollectionModel::__cordl_internal_get__levelPackRedirectionData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelPackRedirectionData;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackRedirectionData*>* const&
GlobalNamespace::SteamLevelProductCollectionModel::__cordl_internal_get__levelPackRedirectionData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelPackRedirectionData;
}
constexpr void GlobalNamespace::SteamLevelProductCollectionModel::__cordl_internal_set__levelPackRedirectionData(
    ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackRedirectionData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____levelPackRedirectionData = value;
}
constexpr int32_t& GlobalNamespace::SteamLevelProductCollectionModel::__cordl_internal_get__maxPossibleInstalledDepots() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxPossibleInstalledDepots;
}
constexpr int32_t const& GlobalNamespace::SteamLevelProductCollectionModel::__cordl_internal_get__maxPossibleInstalledDepots() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxPossibleInstalledDepots;
}
constexpr void GlobalNamespace::SteamLevelProductCollectionModel::__cordl_internal_set__maxPossibleInstalledDepots(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____maxPossibleInstalledDepots = value;
}
inline int32_t GlobalNamespace::SteamLevelProductCollectionModel::get_levelProductDataCount() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SteamLevelProductCollectionModel*>(), { "get_levelProductDataCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::SteamLevelProductCollectionModel::_ctor(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::SteamLevelProductPacksSO>>* levelProductsSOs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SteamLevelProductCollectionModel*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::SteamLevelProductPacksSO>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, levelProductsSOs);
}
inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::SteamLevelProductCollectionModel_LevelProductData*>*
GlobalNamespace::SteamLevelProductCollectionModel::get_levelProductsData() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SteamLevelProductCollectionModel*>(), { "get_levelProductsData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::SteamLevelProductCollectionModel_LevelProductData*>*>(this, ___internal_method);
}
inline ::GlobalNamespace::SteamLevelProductCollectionModel_LevelProductData* GlobalNamespace::SteamLevelProductCollectionModel::GetLevelProductData(::StringW levelId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SteamLevelProductCollectionModel*>(), { "GetLevelProductData", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SteamLevelProductCollectionModel_LevelProductData*>(this, ___internal_method, levelId);
}
inline ::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackProductData* GlobalNamespace::SteamLevelProductCollectionModel::GetLevelPackProductData(::StringW levelPackId) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SteamLevelProductCollectionModel*>(), { "GetLevelPackProductData", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackProductData*>(this, ___internal_method, levelPackId);
}
inline ::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackRedirectionData* GlobalNamespace::SteamLevelProductCollectionModel::GetLevelPackRedirectionData(::StringW levelPackId) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SteamLevelProductCollectionModel*>(), { "GetLevelPackRedirectionData", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackRedirectionData*>(this, ___internal_method, levelPackId);
}
inline ::GlobalNamespace::SteamLevelProductCollectionModel*
GlobalNamespace::SteamLevelProductCollectionModel::New_ctor(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::SteamLevelProductPacksSO>>* levelProductsSOs) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SteamLevelProductCollectionModel*>(levelProductsSOs));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SteamLevelProductCollectionModel::SteamLevelProductCollectionModel() {}
