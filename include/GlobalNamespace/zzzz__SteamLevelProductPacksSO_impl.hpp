#pragma once
// IWYU pragma private; include "GlobalNamespace/SteamLevelProductPacksSO.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__SteamLevelProductCollectionModel_impl.hpp"
#include "GlobalNamespace/zzzz__SteamLevelProductPacksSO_def.hpp"
#include "GlobalNamespace/zzzz__ILevelPackProductDataContainer_2_def.hpp"
#include "GlobalNamespace/zzzz__SteamLevelProductCollectionModel_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SteamLevelProductPacksSO.get_levelPackProductData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackProductData* (::GlobalNamespace::SteamLevelProductPacksSO::*)()>(
    &::GlobalNamespace::SteamLevelProductPacksSO::get_levelPackProductData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3741214;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SteamLevelProductPacksSO*>(), { "get_levelPackProductData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SteamLevelProductPacksSO.get_levelPackRedirectionData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackRedirectionData*> (::GlobalNamespace::SteamLevelProductPacksSO::*)()>(
    &::GlobalNamespace::SteamLevelProductPacksSO::get_levelPackRedirectionData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x374121c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SteamLevelProductPacksSO*>(), { "get_levelPackRedirectionData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::GlobalNamespace::SteamLevelProductPacksSO.ILevelPackProductDataContainer_SteamLevelProductCollectionModel_LevelPackProductData_SteamLevelProductCollectionModel_LevelProductData__SetLevelPackProductData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SteamLevelProductPacksSO::*)(::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackProductData*)>(
    &::GlobalNamespace::SteamLevelProductPacksSO::
        ILevelPackProductDataContainer_SteamLevelProductCollectionModel_LevelPackProductData_SteamLevelProductCollectionModel_LevelProductData__SetLevelPackProductData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3741224;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SteamLevelProductPacksSO*>(),
                            { "ILevelPackProductDataContainer<SteamLevelProductCollectionModel.LevelPackProductData,SteamLevelProductCollectionModel.LevelProductData>.SetLevelPackProductData",
                              {},
                              { ::i2c::type_of<::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackProductData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SteamLevelProductPacksSO._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SteamLevelProductPacksSO::*)()>(&::GlobalNamespace::SteamLevelProductPacksSO::_ctor)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x374122c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SteamLevelProductPacksSO*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackProductData*& GlobalNamespace::SteamLevelProductPacksSO::__cordl_internal_get__levelPackProductData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelPackProductData;
}
constexpr ::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackProductData* const& GlobalNamespace::SteamLevelProductPacksSO::__cordl_internal_get__levelPackProductData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelPackProductData;
}
constexpr void GlobalNamespace::SteamLevelProductPacksSO::__cordl_internal_set__levelPackProductData(::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackProductData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____levelPackProductData = value;
}
constexpr ::ArrayW<::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackRedirectionData*>& GlobalNamespace::SteamLevelProductPacksSO::__cordl_internal_get__levelPackRedirectionData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelPackRedirectionData;
}
constexpr ::ArrayW<::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackRedirectionData*> const&
GlobalNamespace::SteamLevelProductPacksSO::__cordl_internal_get__levelPackRedirectionData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelPackRedirectionData;
}
constexpr void
GlobalNamespace::SteamLevelProductPacksSO::__cordl_internal_set__levelPackRedirectionData(::ArrayW<::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackRedirectionData*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____levelPackRedirectionData = value;
}
inline ::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackProductData* GlobalNamespace::SteamLevelProductPacksSO::get_levelPackProductData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SteamLevelProductPacksSO*>(), { "get_levelPackProductData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackProductData*>(this, ___internal_method);
}
inline ::ArrayW<::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackRedirectionData*> GlobalNamespace::SteamLevelProductPacksSO::get_levelPackRedirectionData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SteamLevelProductPacksSO*>(), { "get_levelPackRedirectionData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackRedirectionData*>>(this, ___internal_method);
}
inline void GlobalNamespace::SteamLevelProductPacksSO::
    ILevelPackProductDataContainer_SteamLevelProductCollectionModel_LevelPackProductData_SteamLevelProductCollectionModel_LevelProductData__SetLevelPackProductData(
        ::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackProductData* newLevelPackProductData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SteamLevelProductPacksSO*>(),
                          { "ILevelPackProductDataContainer<SteamLevelProductCollectionModel.LevelPackProductData,SteamLevelProductCollectionModel.LevelProductData>.SetLevelPackProductData",
                            {},
                            { ::i2c::type_of<::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackProductData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newLevelPackProductData);
}
inline void GlobalNamespace::SteamLevelProductPacksSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SteamLevelProductPacksSO*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SteamLevelProductPacksSO* GlobalNamespace::SteamLevelProductPacksSO::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SteamLevelProductPacksSO*>());
}
/// @brief Convert operator to
/// "::GlobalNamespace::ILevelPackProductDataContainer_2<::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackProductData*,::GlobalNamespace::SteamLevelProductCollectionModel_LevelProductData*>"
constexpr GlobalNamespace::SteamLevelProductPacksSO::operator ::GlobalNamespace::ILevelPackProductDataContainer_2<::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackProductData*,
                                                                                                                  ::GlobalNamespace::SteamLevelProductCollectionModel_LevelProductData*>*() noexcept {
  return static_cast<::GlobalNamespace::ILevelPackProductDataContainer_2<::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackProductData*,
                                                                         ::GlobalNamespace::SteamLevelProductCollectionModel_LevelProductData*>*>(static_cast<void*>(this));
}
/// @brief Convert to
/// "::GlobalNamespace::ILevelPackProductDataContainer_2<::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackProductData*,::GlobalNamespace::SteamLevelProductCollectionModel_LevelProductData*>"
constexpr ::GlobalNamespace::ILevelPackProductDataContainer_2<::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackProductData*,
                                                              ::GlobalNamespace::SteamLevelProductCollectionModel_LevelProductData*>*
GlobalNamespace::SteamLevelProductPacksSO::
    i___GlobalNamespace__ILevelPackProductDataContainer_2___GlobalNamespace__SteamLevelProductCollectionModel_LevelPackProductData____GlobalNamespace__SteamLevelProductCollectionModel_LevelProductData__() noexcept {
  return static_cast<::GlobalNamespace::ILevelPackProductDataContainer_2<::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackProductData*,
                                                                         ::GlobalNamespace::SteamLevelProductCollectionModel_LevelProductData*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SteamLevelProductPacksSO::SteamLevelProductPacksSO() {}
