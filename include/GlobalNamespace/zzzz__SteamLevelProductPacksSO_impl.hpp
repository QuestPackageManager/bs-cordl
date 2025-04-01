#pragma once
// IWYU pragma private; include "GlobalNamespace/SteamLevelProductPacksSO.hpp"
#include "GlobalNamespace/zzzz__ILevelPackProductDataContainer_2_impl.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__SteamLevelProductPacksSO_def.hpp"
#include "GlobalNamespace/zzzz__SteamLevelProductCollectionModel_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SteamLevelProductPacksSO.get_levelPackProductData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackProductData* (
    ::GlobalNamespace::SteamLevelProductPacksSO::*)()>(&::GlobalNamespace::SteamLevelProductPacksSO::get_levelPackProductData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26e7b14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SteamLevelProductPacksSO*>::get(),
                                                                               "get_levelPackProductData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SteamLevelProductPacksSO.get_levelPackRedirectionData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackRedirectionData*, ::Array<::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackRedirectionData*>*> (
        ::GlobalNamespace::SteamLevelProductPacksSO::*)()>(&::GlobalNamespace::SteamLevelProductPacksSO::get_levelPackRedirectionData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26e7b1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SteamLevelProductPacksSO*>::get(),
                                                                               "get_levelPackRedirectionData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::GlobalNamespace::SteamLevelProductPacksSO.ILevelPackProductDataContainer_SteamLevelProductCollectionModel_LevelPackProductData_SteamLevelProductCollectionModel_LevelProductData__SetLevelPackProductData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::SteamLevelProductPacksSO::*)(::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackProductData*)>(
        &::GlobalNamespace::SteamLevelProductPacksSO::
            ILevelPackProductDataContainer_SteamLevelProductCollectionModel_LevelPackProductData_SteamLevelProductCollectionModel_LevelProductData__SetLevelPackProductData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26e7b24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SteamLevelProductPacksSO*>::get(),
        "ILevelPackProductDataContainer<SteamLevelProductCollectionModel.LevelPackProductData,SteamLevelProductCollectionModel.LevelProductData>.SetLevelPackProductData",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackProductData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SteamLevelProductPacksSO._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SteamLevelProductPacksSO::*)()>(&::GlobalNamespace::SteamLevelProductPacksSO::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x26e7b2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SteamLevelProductPacksSO*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____levelPackProductData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackRedirectionData*, ::Array<::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackRedirectionData*>*>&
GlobalNamespace::SteamLevelProductPacksSO::__cordl_internal_get__levelPackRedirectionData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelPackRedirectionData;
}
constexpr ::ArrayW<::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackRedirectionData*, ::Array<::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackRedirectionData*>*> const&
GlobalNamespace::SteamLevelProductPacksSO::__cordl_internal_get__levelPackRedirectionData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelPackRedirectionData;
}
constexpr void GlobalNamespace::SteamLevelProductPacksSO::__cordl_internal_set__levelPackRedirectionData(
    ::ArrayW<::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackRedirectionData*, ::Array<::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackRedirectionData*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____levelPackRedirectionData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackProductData* GlobalNamespace::SteamLevelProductPacksSO::get_levelPackProductData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SteamLevelProductPacksSO*>::get(),
                                                                             "get_levelPackProductData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackProductData*, false>(this, ___internal_method);
}
inline ::ArrayW<::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackRedirectionData*, ::Array<::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackRedirectionData*>*>
GlobalNamespace::SteamLevelProductPacksSO::get_levelPackRedirectionData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SteamLevelProductPacksSO*>::get(),
                                                                             "get_levelPackRedirectionData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<
      ::ArrayW<::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackRedirectionData*, ::Array<::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackRedirectionData*>*>, false>(
      this, ___internal_method);
}
inline void GlobalNamespace::SteamLevelProductPacksSO::
    ILevelPackProductDataContainer_SteamLevelProductCollectionModel_LevelPackProductData_SteamLevelProductCollectionModel_LevelProductData__SetLevelPackProductData(
        ::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackProductData* newLevelPackProductData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SteamLevelProductPacksSO*>::get(),
      "ILevelPackProductDataContainer<SteamLevelProductCollectionModel.LevelPackProductData,SteamLevelProductCollectionModel.LevelProductData>.SetLevelPackProductData",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackProductData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newLevelPackProductData);
}
inline void GlobalNamespace::SteamLevelProductPacksSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SteamLevelProductPacksSO*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::SteamLevelProductPacksSO* GlobalNamespace::SteamLevelProductPacksSO::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::SteamLevelProductPacksSO*>());
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
