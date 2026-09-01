#pragma once
// IWYU pragma private; include "GlobalNamespace\OculusLevelProductPacksSO.hpp"
#include "GlobalNamespace/zzzz__OculusLevelProductCollectionModel_impl.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__OculusLevelProductPacksSO_def.hpp"
#include "GlobalNamespace/zzzz__ILevelPackProductDataContainer_2_def.hpp"
#include "GlobalNamespace/zzzz__OculusLevelProductCollectionModel_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OculusLevelProductPacksSO.get_levelPackProductData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OculusLevelProductCollectionModel_LevelPackProductData* (::GlobalNamespace::OculusLevelProductPacksSO::*)()>(
    &::GlobalNamespace::OculusLevelProductPacksSO::get_levelPackProductData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3744bb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusLevelProductPacksSO*>(), { "get_levelPackProductData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusLevelProductPacksSO.get_levelPackRedirectionData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::OculusLevelProductCollectionModel_LevelPackRedirectionData*>* (
    ::GlobalNamespace::OculusLevelProductPacksSO::*)()>(&::GlobalNamespace::OculusLevelProductPacksSO::get_levelPackRedirectionData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3744bc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusLevelProductPacksSO*>(), { "get_levelPackRedirectionData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::GlobalNamespace::OculusLevelProductPacksSO.ILevelPackProductDataContainer_OculusLevelProductCollectionModel_LevelPackProductData_OculusLevelProductCollectionModel_LevelProductData__SetLevelPackProductData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OculusLevelProductPacksSO::*)(::GlobalNamespace::OculusLevelProductCollectionModel_LevelPackProductData*)>(
    &::GlobalNamespace::OculusLevelProductPacksSO::
        ILevelPackProductDataContainer_OculusLevelProductCollectionModel_LevelPackProductData_OculusLevelProductCollectionModel_LevelProductData__SetLevelPackProductData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3744bc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusLevelProductPacksSO*>(),
                            { "ILevelPackProductDataContainer<OculusLevelProductCollectionModel.LevelPackProductData,OculusLevelProductCollectionModel.LevelProductData>.SetLevelPackProductData",
                              {},
                              { ::i2c::type_of<::GlobalNamespace::OculusLevelProductCollectionModel_LevelPackProductData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusLevelProductPacksSO._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OculusLevelProductPacksSO::*)()>(&::GlobalNamespace::OculusLevelProductPacksSO::_ctor)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x3744bd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusLevelProductPacksSO*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::OculusLevelProductCollectionModel_LevelPackProductData*& GlobalNamespace::OculusLevelProductPacksSO::__cordl_internal_get__levelPackProductData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelPackProductData;
}
constexpr ::GlobalNamespace::OculusLevelProductCollectionModel_LevelPackProductData* const& GlobalNamespace::OculusLevelProductPacksSO::__cordl_internal_get__levelPackProductData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelPackProductData;
}
constexpr void GlobalNamespace::OculusLevelProductPacksSO::__cordl_internal_set__levelPackProductData(::GlobalNamespace::OculusLevelProductCollectionModel_LevelPackProductData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____levelPackProductData = value;
}
constexpr ::ArrayW<::GlobalNamespace::OculusLevelProductCollectionModel_LevelPackRedirectionData*>& GlobalNamespace::OculusLevelProductPacksSO::__cordl_internal_get__levelPackRedirectionData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelPackRedirectionData;
}
constexpr ::ArrayW<::GlobalNamespace::OculusLevelProductCollectionModel_LevelPackRedirectionData*> const&
GlobalNamespace::OculusLevelProductPacksSO::__cordl_internal_get__levelPackRedirectionData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelPackRedirectionData;
}
constexpr void
GlobalNamespace::OculusLevelProductPacksSO::__cordl_internal_set__levelPackRedirectionData(::ArrayW<::GlobalNamespace::OculusLevelProductCollectionModel_LevelPackRedirectionData*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____levelPackRedirectionData = value;
}
inline ::GlobalNamespace::OculusLevelProductCollectionModel_LevelPackProductData* GlobalNamespace::OculusLevelProductPacksSO::get_levelPackProductData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusLevelProductPacksSO*>(), { "get_levelPackProductData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OculusLevelProductCollectionModel_LevelPackProductData*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::OculusLevelProductCollectionModel_LevelPackRedirectionData*>*
GlobalNamespace::OculusLevelProductPacksSO::get_levelPackRedirectionData() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusLevelProductPacksSO*>(), { "get_levelPackRedirectionData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::OculusLevelProductCollectionModel_LevelPackRedirectionData*>*>(this,
                                                                                                                                                                               ___internal_method);
}
inline void GlobalNamespace::OculusLevelProductPacksSO::
    ILevelPackProductDataContainer_OculusLevelProductCollectionModel_LevelPackProductData_OculusLevelProductCollectionModel_LevelProductData__SetLevelPackProductData(
        ::GlobalNamespace::OculusLevelProductCollectionModel_LevelPackProductData* newLevelPackProductData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusLevelProductPacksSO*>(),
                          { "ILevelPackProductDataContainer<OculusLevelProductCollectionModel.LevelPackProductData,OculusLevelProductCollectionModel.LevelProductData>.SetLevelPackProductData",
                            {},
                            { ::i2c::type_of<::GlobalNamespace::OculusLevelProductCollectionModel_LevelPackProductData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newLevelPackProductData);
}
inline void GlobalNamespace::OculusLevelProductPacksSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusLevelProductPacksSO*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::OculusLevelProductPacksSO* GlobalNamespace::OculusLevelProductPacksSO::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OculusLevelProductPacksSO*>());
}
/// @brief Convert operator to
/// "::GlobalNamespace::ILevelPackProductDataContainer_2<::GlobalNamespace::OculusLevelProductCollectionModel_LevelPackProductData*,::GlobalNamespace::OculusLevelProductCollectionModel_LevelProductData*>"
constexpr GlobalNamespace::OculusLevelProductPacksSO::operator ::GlobalNamespace::ILevelPackProductDataContainer_2<::GlobalNamespace::OculusLevelProductCollectionModel_LevelPackProductData*,
                                                                                                                   ::GlobalNamespace::OculusLevelProductCollectionModel_LevelProductData*>*() noexcept {
  return static_cast<::GlobalNamespace::ILevelPackProductDataContainer_2<::GlobalNamespace::OculusLevelProductCollectionModel_LevelPackProductData*,
                                                                         ::GlobalNamespace::OculusLevelProductCollectionModel_LevelProductData*>*>(static_cast<void*>(this));
}
/// @brief Convert to
/// "::GlobalNamespace::ILevelPackProductDataContainer_2<::GlobalNamespace::OculusLevelProductCollectionModel_LevelPackProductData*,::GlobalNamespace::OculusLevelProductCollectionModel_LevelProductData*>"
constexpr ::GlobalNamespace::ILevelPackProductDataContainer_2<::GlobalNamespace::OculusLevelProductCollectionModel_LevelPackProductData*,
                                                              ::GlobalNamespace::OculusLevelProductCollectionModel_LevelProductData*>*
GlobalNamespace::OculusLevelProductPacksSO::
    i___GlobalNamespace__ILevelPackProductDataContainer_2___GlobalNamespace__OculusLevelProductCollectionModel_LevelPackProductData____GlobalNamespace__OculusLevelProductCollectionModel_LevelProductData__() noexcept {
  return static_cast<::GlobalNamespace::ILevelPackProductDataContainer_2<::GlobalNamespace::OculusLevelProductCollectionModel_LevelPackProductData*,
                                                                         ::GlobalNamespace::OculusLevelProductCollectionModel_LevelProductData*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OculusLevelProductPacksSO::OculusLevelProductPacksSO() {}
