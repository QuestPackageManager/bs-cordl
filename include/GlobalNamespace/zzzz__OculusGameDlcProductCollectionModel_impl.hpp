#pragma once
// IWYU pragma private; include "GlobalNamespace/OculusGameDlcProductCollectionModel.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__OculusGameDlcProductCollectionModel_def.hpp"
#include "GlobalNamespace/zzzz__OculusGameDlcProductSO_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OculusGameDlcProductCollectionModel._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OculusGameDlcProductCollectionModel::*)(
    ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::OculusGameDlcProductSO>>*)>(&::GlobalNamespace::OculusGameDlcProductCollectionModel::_ctor)> {
  constexpr static std::size_t size = 0x364;
  constexpr static std::size_t addrs = 0x39f5bb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusGameDlcProductCollectionModel*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::OculusGameDlcProductSO>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusGameDlcProductCollectionModel.GetGameDlcProductData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::OculusGameDlcProductSO> (::GlobalNamespace::OculusGameDlcProductCollectionModel::*)(::StringW)>(
    &::GlobalNamespace::OculusGameDlcProductCollectionModel::GetGameDlcProductData)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x39f5f1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusGameDlcProductCollectionModel*>(), { "GetGameDlcProductData", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::GlobalNamespace::OculusGameDlcProductSO>>*&
GlobalNamespace::OculusGameDlcProductCollectionModel::__cordl_internal_get__gameDlcIdToProductData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameDlcIdToProductData;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::GlobalNamespace::OculusGameDlcProductSO>>* const&
GlobalNamespace::OculusGameDlcProductCollectionModel::__cordl_internal_get__gameDlcIdToProductData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameDlcIdToProductData;
}
constexpr void GlobalNamespace::OculusGameDlcProductCollectionModel::__cordl_internal_set__gameDlcIdToProductData(
    ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::GlobalNamespace::OculusGameDlcProductSO>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____gameDlcIdToProductData = value;
}
inline void GlobalNamespace::OculusGameDlcProductCollectionModel::_ctor(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::OculusGameDlcProductSO>>* gameDlcProducts) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusGameDlcProductCollectionModel*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::OculusGameDlcProductSO>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gameDlcProducts);
}
inline ::UnityW<::GlobalNamespace::OculusGameDlcProductSO> GlobalNamespace::OculusGameDlcProductCollectionModel::GetGameDlcProductData(::StringW gameDlcId) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusGameDlcProductCollectionModel*>(), { "GetGameDlcProductData", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::OculusGameDlcProductSO>>(this, ___internal_method, gameDlcId);
}
inline ::GlobalNamespace::OculusGameDlcProductCollectionModel*
GlobalNamespace::OculusGameDlcProductCollectionModel::New_ctor(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::OculusGameDlcProductSO>>* gameDlcProducts) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OculusGameDlcProductCollectionModel*>(gameDlcProducts));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OculusGameDlcProductCollectionModel::OculusGameDlcProductCollectionModel() {}
