#pragma once
// IWYU pragma private; include "GlobalNamespace/OculusLevelProductPacksSO.hpp"
#include "GlobalNamespace/zzzz__ILevelPackProductDataContainer_2_impl.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__OculusLevelProductPacksSO_def.hpp"
#include "GlobalNamespace/zzzz__OculusLevelProductCollectionModel_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OculusLevelProductPacksSO.get_levelPackProductData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OculusLevelProductCollectionModel_LevelPackProductData* (
    ::GlobalNamespace::OculusLevelProductPacksSO::*)()>(&::GlobalNamespace::OculusLevelProductPacksSO::get_levelPackProductData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26ea25c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusLevelProductPacksSO*>::get(),
                                                                               "get_levelPackProductData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusLevelProductPacksSO.get_levelPackRedirectionData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::OculusLevelProductCollectionModel_LevelPackRedirectionData*>* (::GlobalNamespace::OculusLevelProductPacksSO::*)()>(
        &::GlobalNamespace::OculusLevelProductPacksSO::get_levelPackRedirectionData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26ea264;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusLevelProductPacksSO*>::get(),
                                                                               "get_levelPackRedirectionData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::GlobalNamespace::OculusLevelProductPacksSO.ILevelPackProductDataContainer_OculusLevelProductCollectionModel_LevelPackProductData_OculusLevelProductCollectionModel_LevelProductData__SetLevelPackProductData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::OculusLevelProductPacksSO::*)(::GlobalNamespace::OculusLevelProductCollectionModel_LevelPackProductData*)>(
        &::GlobalNamespace::OculusLevelProductPacksSO::
            ILevelPackProductDataContainer_OculusLevelProductCollectionModel_LevelPackProductData_OculusLevelProductCollectionModel_LevelProductData__SetLevelPackProductData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26ea26c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusLevelProductPacksSO*>::get(),
        "ILevelPackProductDataContainer<OculusLevelProductCollectionModel.LevelPackProductData,OculusLevelProductCollectionModel.LevelProductData>.SetLevelPackProductData",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OculusLevelProductCollectionModel_LevelPackProductData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusLevelProductPacksSO._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OculusLevelProductPacksSO::*)()>(&::GlobalNamespace::OculusLevelProductPacksSO::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x26ea274;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusLevelProductPacksSO*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____levelPackProductData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::GlobalNamespace::OculusLevelProductCollectionModel_LevelPackRedirectionData*, ::Array<::GlobalNamespace::OculusLevelProductCollectionModel_LevelPackRedirectionData*>*>&
GlobalNamespace::OculusLevelProductPacksSO::__cordl_internal_get__levelPackRedirectionData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelPackRedirectionData;
}
constexpr ::ArrayW<::GlobalNamespace::OculusLevelProductCollectionModel_LevelPackRedirectionData*, ::Array<::GlobalNamespace::OculusLevelProductCollectionModel_LevelPackRedirectionData*>*> const&
GlobalNamespace::OculusLevelProductPacksSO::__cordl_internal_get__levelPackRedirectionData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelPackRedirectionData;
}
constexpr void GlobalNamespace::OculusLevelProductPacksSO::__cordl_internal_set__levelPackRedirectionData(
    ::ArrayW<::GlobalNamespace::OculusLevelProductCollectionModel_LevelPackRedirectionData*, ::Array<::GlobalNamespace::OculusLevelProductCollectionModel_LevelPackRedirectionData*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____levelPackRedirectionData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::OculusLevelProductCollectionModel_LevelPackProductData* GlobalNamespace::OculusLevelProductPacksSO::get_levelPackProductData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusLevelProductPacksSO*>::get(),
                                                                             "get_levelPackProductData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OculusLevelProductCollectionModel_LevelPackProductData*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::OculusLevelProductCollectionModel_LevelPackRedirectionData*>*
GlobalNamespace::OculusLevelProductPacksSO::get_levelPackRedirectionData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusLevelProductPacksSO*>::get(),
                                                                             "get_levelPackRedirectionData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::OculusLevelProductCollectionModel_LevelPackRedirectionData*>*, false>(
      this, ___internal_method);
}
inline void GlobalNamespace::OculusLevelProductPacksSO::
    ILevelPackProductDataContainer_OculusLevelProductCollectionModel_LevelPackProductData_OculusLevelProductCollectionModel_LevelProductData__SetLevelPackProductData(
        ::GlobalNamespace::OculusLevelProductCollectionModel_LevelPackProductData* newLevelPackProductData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusLevelProductPacksSO*>::get(),
      "ILevelPackProductDataContainer<OculusLevelProductCollectionModel.LevelPackProductData,OculusLevelProductCollectionModel.LevelProductData>.SetLevelPackProductData",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OculusLevelProductCollectionModel_LevelPackProductData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newLevelPackProductData);
}
inline void GlobalNamespace::OculusLevelProductPacksSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusLevelProductPacksSO*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::OculusLevelProductPacksSO* GlobalNamespace::OculusLevelProductPacksSO::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::OculusLevelProductPacksSO*>());
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
