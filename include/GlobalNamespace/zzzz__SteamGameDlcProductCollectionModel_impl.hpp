#pragma once
// IWYU pragma private; include "GlobalNamespace/SteamGameDlcProductCollectionModel.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__SteamGameDlcProductCollectionModel_def.hpp"
#include "GlobalNamespace/zzzz__SteamGameDlcProductSO_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SteamGameDlcProductCollectionModel._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SteamGameDlcProductCollectionModel::*)(
    ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::SteamGameDlcProductSO>>*)>(&::GlobalNamespace::SteamGameDlcProductCollectionModel::_ctor)> {
  constexpr static std::size_t size = 0x364;
  constexpr static std::size_t addrs = 0x39f6f24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SteamGameDlcProductCollectionModel*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::SteamGameDlcProductSO>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SteamGameDlcProductCollectionModel.GetGameDlcProductData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::SteamGameDlcProductSO> (::GlobalNamespace::SteamGameDlcProductCollectionModel::*)(::StringW)>(
    &::GlobalNamespace::SteamGameDlcProductCollectionModel::GetGameDlcProductData)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x39f7288;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SteamGameDlcProductCollectionModel*>(), { "GetGameDlcProductData", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::GlobalNamespace::SteamGameDlcProductSO>>*&
GlobalNamespace::SteamGameDlcProductCollectionModel::__cordl_internal_get__gameDlcIdToProductData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameDlcIdToProductData;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::GlobalNamespace::SteamGameDlcProductSO>>* const&
GlobalNamespace::SteamGameDlcProductCollectionModel::__cordl_internal_get__gameDlcIdToProductData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameDlcIdToProductData;
}
constexpr void GlobalNamespace::SteamGameDlcProductCollectionModel::__cordl_internal_set__gameDlcIdToProductData(
    ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::GlobalNamespace::SteamGameDlcProductSO>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____gameDlcIdToProductData = value;
}
inline void GlobalNamespace::SteamGameDlcProductCollectionModel::_ctor(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::SteamGameDlcProductSO>>* gameDlcProducts) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SteamGameDlcProductCollectionModel*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::SteamGameDlcProductSO>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gameDlcProducts);
}
inline ::UnityW<::GlobalNamespace::SteamGameDlcProductSO> GlobalNamespace::SteamGameDlcProductCollectionModel::GetGameDlcProductData(::StringW gameDlcId) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SteamGameDlcProductCollectionModel*>(), { "GetGameDlcProductData", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::SteamGameDlcProductSO>>(this, ___internal_method, gameDlcId);
}
inline ::GlobalNamespace::SteamGameDlcProductCollectionModel*
GlobalNamespace::SteamGameDlcProductCollectionModel::New_ctor(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::SteamGameDlcProductSO>>* gameDlcProducts) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SteamGameDlcProductCollectionModel*>(gameDlcProducts));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SteamGameDlcProductCollectionModel::SteamGameDlcProductCollectionModel() {}
