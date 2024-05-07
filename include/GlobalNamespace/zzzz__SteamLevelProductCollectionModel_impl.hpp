#pragma once
// IWYU pragma private; include "GlobalNamespace/SteamLevelProductCollectionModel.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__SteamLevelProductCollectionModel_def.hpp"
#include "GlobalNamespace/zzzz__ILevelPackProductData_1_def.hpp"
#include "GlobalNamespace/zzzz__ILevelProductData_def.hpp"
#include "GlobalNamespace/zzzz__SteamLevelProductCollectionModel_def.hpp"
#include "GlobalNamespace/zzzz__SteamLevelProductPacksSO_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__SteamLevelProductCollectionModel__LevelProductData.get_appId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::GlobalNamespace::__SteamLevelProductCollectionModel__LevelProductData::*)()>(
    &::GlobalNamespace::__SteamLevelProductCollectionModel__LevelProductData::get_appId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x14dd430;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SteamLevelProductCollectionModel__LevelProductData*>::get(), "get_appId",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SteamLevelProductCollectionModel__LevelProductData.get_levelId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::__SteamLevelProductCollectionModel__LevelProductData::*)()>(
    &::GlobalNamespace::__SteamLevelProductCollectionModel__LevelProductData::get_levelId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x14dd438;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SteamLevelProductCollectionModel__LevelProductData*>::get(), "get_levelId",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SteamLevelProductCollectionModel__LevelProductData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__SteamLevelProductCollectionModel__LevelProductData::*)(::StringW, uint32_t)>(
    &::GlobalNamespace::__SteamLevelProductCollectionModel__LevelProductData::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x14dd440;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SteamLevelProductCollectionModel__LevelProductData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::ILevelProductData"
constexpr GlobalNamespace::__SteamLevelProductCollectionModel__LevelProductData::operator ::GlobalNamespace::ILevelProductData*() noexcept {
  return static_cast<::GlobalNamespace::ILevelProductData*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ILevelProductData"
constexpr ::GlobalNamespace::ILevelProductData* GlobalNamespace::__SteamLevelProductCollectionModel__LevelProductData::i___GlobalNamespace__ILevelProductData() noexcept {
  return static_cast<::GlobalNamespace::ILevelProductData*>(static_cast<void*>(this));
}
constexpr ::StringW& GlobalNamespace::__SteamLevelProductCollectionModel__LevelProductData::__cordl_internal_get__levelId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelId;
}
constexpr ::StringW const& GlobalNamespace::__SteamLevelProductCollectionModel__LevelProductData::__cordl_internal_get__levelId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelId;
}
constexpr void GlobalNamespace::__SteamLevelProductCollectionModel__LevelProductData::__cordl_internal_set__levelId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____levelId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr uint32_t& GlobalNamespace::__SteamLevelProductCollectionModel__LevelProductData::__cordl_internal_get__appId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____appId;
}
constexpr uint32_t const& GlobalNamespace::__SteamLevelProductCollectionModel__LevelProductData::__cordl_internal_get__appId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____appId;
}
constexpr void GlobalNamespace::__SteamLevelProductCollectionModel__LevelProductData::__cordl_internal_set__appId(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____appId = value;
}
inline uint32_t GlobalNamespace::__SteamLevelProductCollectionModel__LevelProductData::get_appId() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SteamLevelProductCollectionModel__LevelProductData*>::get(), "get_appId",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::__SteamLevelProductCollectionModel__LevelProductData::get_levelId() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SteamLevelProductCollectionModel__LevelProductData*>::get(), "get_levelId",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__SteamLevelProductCollectionModel__LevelProductData* GlobalNamespace::__SteamLevelProductCollectionModel__LevelProductData::New_ctor(::StringW levelId, uint32_t appId) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__SteamLevelProductCollectionModel__LevelProductData*>(levelId, appId));
}
inline void GlobalNamespace::__SteamLevelProductCollectionModel__LevelProductData::_ctor(::StringW levelId, uint32_t appId) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SteamLevelProductCollectionModel__LevelProductData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, levelId, appId);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__SteamLevelProductCollectionModel__LevelProductData::__SteamLevelProductCollectionModel__LevelProductData() {}
//  Writing Method size for method: ::GlobalNamespace::__SteamLevelProductCollectionModel__LevelPackProductData.get_bundleId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::GlobalNamespace::__SteamLevelProductCollectionModel__LevelPackProductData::*)()>(
    &::GlobalNamespace::__SteamLevelProductCollectionModel__LevelPackProductData::get_bundleId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x14dd470;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SteamLevelProductCollectionModel__LevelPackProductData*>::get(),
                                                 "get_bundleId", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SteamLevelProductCollectionModel__LevelPackProductData.get_levelPackId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::__SteamLevelProductCollectionModel__LevelPackProductData::*)()>(
    &::GlobalNamespace::__SteamLevelProductCollectionModel__LevelPackProductData::get_levelPackId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x14dd478;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SteamLevelProductCollectionModel__LevelPackProductData*>::get(),
                                                 "get_levelPackId", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SteamLevelProductCollectionModel__LevelPackProductData.get_levelProductsData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::__SteamLevelProductCollectionModel__LevelProductData*>* (
        ::GlobalNamespace::__SteamLevelProductCollectionModel__LevelPackProductData::*)()>(&::GlobalNamespace::__SteamLevelProductCollectionModel__LevelPackProductData::get_levelProductsData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x14dd480;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SteamLevelProductCollectionModel__LevelPackProductData*>::get(),
                                                 "get_levelProductsData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SteamLevelProductCollectionModel__LevelPackProductData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__SteamLevelProductCollectionModel__LevelPackProductData::*)(
    ::StringW, uint32_t, ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::__SteamLevelProductCollectionModel__LevelProductData*>*)>(
    &::GlobalNamespace::__SteamLevelProductCollectionModel__LevelPackProductData::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x14dd488;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SteamLevelProductCollectionModel__LevelPackProductData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::__SteamLevelProductCollectionModel__LevelProductData*>*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::ILevelPackProductData_1<::GlobalNamespace::__SteamLevelProductCollectionModel__LevelProductData*>"
constexpr GlobalNamespace::__SteamLevelProductCollectionModel__LevelPackProductData::operator ::GlobalNamespace::ILevelPackProductData_1<
    ::GlobalNamespace::__SteamLevelProductCollectionModel__LevelProductData*>*() noexcept {
  return static_cast<::GlobalNamespace::ILevelPackProductData_1<::GlobalNamespace::__SteamLevelProductCollectionModel__LevelProductData*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ILevelPackProductData_1<::GlobalNamespace::__SteamLevelProductCollectionModel__LevelProductData*>"
constexpr ::GlobalNamespace::ILevelPackProductData_1<::GlobalNamespace::__SteamLevelProductCollectionModel__LevelProductData*>* GlobalNamespace::
    __SteamLevelProductCollectionModel__LevelPackProductData::i___GlobalNamespace__ILevelPackProductData_1___GlobalNamespace____SteamLevelProductCollectionModel__LevelProductData__() noexcept {
  return static_cast<::GlobalNamespace::ILevelPackProductData_1<::GlobalNamespace::__SteamLevelProductCollectionModel__LevelProductData*>*>(static_cast<void*>(this));
}
constexpr ::StringW& GlobalNamespace::__SteamLevelProductCollectionModel__LevelPackProductData::__cordl_internal_get__levelPackId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelPackId;
}
constexpr ::StringW const& GlobalNamespace::__SteamLevelProductCollectionModel__LevelPackProductData::__cordl_internal_get__levelPackId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelPackId;
}
constexpr void GlobalNamespace::__SteamLevelProductCollectionModel__LevelPackProductData::__cordl_internal_set__levelPackId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____levelPackId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr uint32_t& GlobalNamespace::__SteamLevelProductCollectionModel__LevelPackProductData::__cordl_internal_get__bundleId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bundleId;
}
constexpr uint32_t const& GlobalNamespace::__SteamLevelProductCollectionModel__LevelPackProductData::__cordl_internal_get__bundleId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bundleId;
}
constexpr void GlobalNamespace::__SteamLevelProductCollectionModel__LevelPackProductData::__cordl_internal_set__bundleId(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bundleId = value;
}
constexpr ::ArrayW<::GlobalNamespace::__SteamLevelProductCollectionModel__LevelProductData*, ::Array<::GlobalNamespace::__SteamLevelProductCollectionModel__LevelProductData*>*>&
GlobalNamespace::__SteamLevelProductCollectionModel__LevelPackProductData::__cordl_internal_get__levelProductsData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelProductsData;
}
constexpr ::ArrayW<::GlobalNamespace::__SteamLevelProductCollectionModel__LevelProductData*, ::Array<::GlobalNamespace::__SteamLevelProductCollectionModel__LevelProductData*>*> const&
GlobalNamespace::__SteamLevelProductCollectionModel__LevelPackProductData::__cordl_internal_get__levelProductsData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelProductsData;
}
constexpr void GlobalNamespace::__SteamLevelProductCollectionModel__LevelPackProductData::__cordl_internal_set__levelProductsData(
    ::ArrayW<::GlobalNamespace::__SteamLevelProductCollectionModel__LevelProductData*, ::Array<::GlobalNamespace::__SteamLevelProductCollectionModel__LevelProductData*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____levelProductsData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline uint32_t GlobalNamespace::__SteamLevelProductCollectionModel__LevelPackProductData::get_bundleId() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SteamLevelProductCollectionModel__LevelPackProductData*>::get(),
                                               "get_bundleId", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::__SteamLevelProductCollectionModel__LevelPackProductData::get_levelPackId() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SteamLevelProductCollectionModel__LevelPackProductData*>::get(),
                                               "get_levelPackId", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::__SteamLevelProductCollectionModel__LevelProductData*>*
GlobalNamespace::__SteamLevelProductCollectionModel__LevelPackProductData::get_levelProductsData() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SteamLevelProductCollectionModel__LevelPackProductData*>::get(),
                                               "get_levelProductsData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::__SteamLevelProductCollectionModel__LevelProductData*>*, false>(this,
                                                                                                                                                                                ___internal_method);
}
inline ::GlobalNamespace::__SteamLevelProductCollectionModel__LevelPackProductData* GlobalNamespace::__SteamLevelProductCollectionModel__LevelPackProductData::New_ctor(
    ::StringW levelPackId, uint32_t bundleId, ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::__SteamLevelProductCollectionModel__LevelProductData*>* levelProducts) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__SteamLevelProductCollectionModel__LevelPackProductData*>(levelPackId, bundleId, levelProducts));
}
inline void GlobalNamespace::__SteamLevelProductCollectionModel__LevelPackProductData::_ctor(
    ::StringW levelPackId, uint32_t bundleId, ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::__SteamLevelProductCollectionModel__LevelProductData*>* levelProducts) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SteamLevelProductCollectionModel__LevelPackProductData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::__SteamLevelProductCollectionModel__LevelProductData*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, levelPackId, bundleId, levelProducts);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__SteamLevelProductCollectionModel__LevelPackProductData::__SteamLevelProductCollectionModel__LevelPackProductData() {}
//  Writing Method size for method: ::GlobalNamespace::__SteamLevelProductCollectionModel__LevelPackRedirectionData.get_targetLevelPackId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::__SteamLevelProductCollectionModel__LevelPackRedirectionData::*)()>(
    &::GlobalNamespace::__SteamLevelProductCollectionModel__LevelPackRedirectionData::get_targetLevelPackId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x14dd508;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SteamLevelProductCollectionModel__LevelPackRedirectionData*>::get(),
                                                 "get_targetLevelPackId", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SteamLevelProductCollectionModel__LevelPackRedirectionData.get_shouldOwnLevelPackId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::__SteamLevelProductCollectionModel__LevelPackRedirectionData::*)()>(
    &::GlobalNamespace::__SteamLevelProductCollectionModel__LevelPackRedirectionData::get_shouldOwnLevelPackId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x14dd510;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SteamLevelProductCollectionModel__LevelPackRedirectionData*>::get(),
                                                 "get_shouldOwnLevelPackId", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SteamLevelProductCollectionModel__LevelPackRedirectionData.get_redirectedBundleId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::GlobalNamespace::__SteamLevelProductCollectionModel__LevelPackRedirectionData::*)()>(
    &::GlobalNamespace::__SteamLevelProductCollectionModel__LevelPackRedirectionData::get_redirectedBundleId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x14dd518;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SteamLevelProductCollectionModel__LevelPackRedirectionData*>::get(),
                                                 "get_redirectedBundleId", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SteamLevelProductCollectionModel__LevelPackRedirectionData.get_validUntilDate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::__SteamLevelProductCollectionModel__LevelPackRedirectionData::*)()>(
    &::GlobalNamespace::__SteamLevelProductCollectionModel__LevelPackRedirectionData::get_validUntilDate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x14dd520;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SteamLevelProductCollectionModel__LevelPackRedirectionData*>::get(),
                                                 "get_validUntilDate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SteamLevelProductCollectionModel__LevelPackRedirectionData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__SteamLevelProductCollectionModel__LevelPackRedirectionData::*)()>(
    &::GlobalNamespace::__SteamLevelProductCollectionModel__LevelPackRedirectionData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x14dd528;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SteamLevelProductCollectionModel__LevelPackRedirectionData*>::get(),
                                                 ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::__SteamLevelProductCollectionModel__LevelPackRedirectionData::__cordl_internal_get__targetLevelPackId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____targetLevelPackId;
}
constexpr ::StringW const& GlobalNamespace::__SteamLevelProductCollectionModel__LevelPackRedirectionData::__cordl_internal_get__targetLevelPackId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____targetLevelPackId;
}
constexpr void GlobalNamespace::__SteamLevelProductCollectionModel__LevelPackRedirectionData::__cordl_internal_set__targetLevelPackId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____targetLevelPackId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::__SteamLevelProductCollectionModel__LevelPackRedirectionData::__cordl_internal_get__shouldOwnLevelPackId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shouldOwnLevelPackId;
}
constexpr ::StringW const& GlobalNamespace::__SteamLevelProductCollectionModel__LevelPackRedirectionData::__cordl_internal_get__shouldOwnLevelPackId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shouldOwnLevelPackId;
}
constexpr void GlobalNamespace::__SteamLevelProductCollectionModel__LevelPackRedirectionData::__cordl_internal_set__shouldOwnLevelPackId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____shouldOwnLevelPackId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr uint32_t& GlobalNamespace::__SteamLevelProductCollectionModel__LevelPackRedirectionData::__cordl_internal_get__redirectedBundleId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____redirectedBundleId;
}
constexpr uint32_t const& GlobalNamespace::__SteamLevelProductCollectionModel__LevelPackRedirectionData::__cordl_internal_get__redirectedBundleId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____redirectedBundleId;
}
constexpr void GlobalNamespace::__SteamLevelProductCollectionModel__LevelPackRedirectionData::__cordl_internal_set__redirectedBundleId(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____redirectedBundleId = value;
}
constexpr ::StringW& GlobalNamespace::__SteamLevelProductCollectionModel__LevelPackRedirectionData::__cordl_internal_get__validUntilDate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____validUntilDate;
}
constexpr ::StringW const& GlobalNamespace::__SteamLevelProductCollectionModel__LevelPackRedirectionData::__cordl_internal_get__validUntilDate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____validUntilDate;
}
constexpr void GlobalNamespace::__SteamLevelProductCollectionModel__LevelPackRedirectionData::__cordl_internal_set__validUntilDate(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____validUntilDate)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW GlobalNamespace::__SteamLevelProductCollectionModel__LevelPackRedirectionData::get_targetLevelPackId() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SteamLevelProductCollectionModel__LevelPackRedirectionData*>::get(),
                                               "get_targetLevelPackId", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::__SteamLevelProductCollectionModel__LevelPackRedirectionData::get_shouldOwnLevelPackId() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SteamLevelProductCollectionModel__LevelPackRedirectionData*>::get(),
                                               "get_shouldOwnLevelPackId", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline uint32_t GlobalNamespace::__SteamLevelProductCollectionModel__LevelPackRedirectionData::get_redirectedBundleId() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SteamLevelProductCollectionModel__LevelPackRedirectionData*>::get(),
                                               "get_redirectedBundleId", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::__SteamLevelProductCollectionModel__LevelPackRedirectionData::get_validUntilDate() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SteamLevelProductCollectionModel__LevelPackRedirectionData*>::get(),
                                               "get_validUntilDate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__SteamLevelProductCollectionModel__LevelPackRedirectionData* GlobalNamespace::__SteamLevelProductCollectionModel__LevelPackRedirectionData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__SteamLevelProductCollectionModel__LevelPackRedirectionData*>());
}
inline void GlobalNamespace::__SteamLevelProductCollectionModel__LevelPackRedirectionData::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SteamLevelProductCollectionModel__LevelPackRedirectionData*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__SteamLevelProductCollectionModel__LevelPackRedirectionData::__SteamLevelProductCollectionModel__LevelPackRedirectionData() {}
//  Writing Method size for method: ::GlobalNamespace::SteamLevelProductCollectionModel._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SteamLevelProductCollectionModel::*)(
    ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::SteamLevelProductPacksSO>>*)>(&::GlobalNamespace::SteamLevelProductCollectionModel::_ctor)> {
  constexpr static std::size_t size = 0x794;
  constexpr static std::size_t addrs = 0x14dcae4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SteamLevelProductCollectionModel*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::SteamLevelProductPacksSO>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SteamLevelProductCollectionModel.get_levelProductsData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::__SteamLevelProductCollectionModel__LevelProductData*>* (::GlobalNamespace::SteamLevelProductCollectionModel::*)()>(
        &::GlobalNamespace::SteamLevelProductCollectionModel::get_levelProductsData)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x14dd278;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SteamLevelProductCollectionModel*>::get(),
                                                                               "get_levelProductsData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SteamLevelProductCollectionModel.GetLevelProductData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__SteamLevelProductCollectionModel__LevelProductData* (
    ::GlobalNamespace::SteamLevelProductCollectionModel::*)(::StringW)>(&::GlobalNamespace::SteamLevelProductCollectionModel::GetLevelProductData)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x14dd2c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SteamLevelProductCollectionModel*>::get(), "GetLevelProductData",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SteamLevelProductCollectionModel.GetLevelPackProductData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__SteamLevelProductCollectionModel__LevelPackProductData* (
    ::GlobalNamespace::SteamLevelProductCollectionModel::*)(::StringW)>(&::GlobalNamespace::SteamLevelProductCollectionModel::GetLevelPackProductData)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x14dd340;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SteamLevelProductCollectionModel*>::get(), "GetLevelPackProductData",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SteamLevelProductCollectionModel.GetLevelPackRedirectionData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__SteamLevelProductCollectionModel__LevelPackRedirectionData* (
    ::GlobalNamespace::SteamLevelProductCollectionModel::*)(::StringW)>(&::GlobalNamespace::SteamLevelProductCollectionModel::GetLevelPackRedirectionData)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x14dd3b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SteamLevelProductCollectionModel*>::get(), "GetLevelPackRedirectionData",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__SteamLevelProductCollectionModel__LevelProductData*>*&
GlobalNamespace::SteamLevelProductCollectionModel::__cordl_internal_get__levelIdToProductData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelIdToProductData;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__SteamLevelProductCollectionModel__LevelProductData*>*> const&
GlobalNamespace::SteamLevelProductCollectionModel::__cordl_internal_get__levelIdToProductData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelIdToProductData;
}
constexpr void GlobalNamespace::SteamLevelProductCollectionModel::__cordl_internal_set__levelIdToProductData(
    ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__SteamLevelProductCollectionModel__LevelProductData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____levelIdToProductData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__SteamLevelProductCollectionModel__LevelPackProductData*>*&
GlobalNamespace::SteamLevelProductCollectionModel::__cordl_internal_get__levelPackIdToProductData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelPackIdToProductData;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__SteamLevelProductCollectionModel__LevelPackProductData*>*> const&
GlobalNamespace::SteamLevelProductCollectionModel::__cordl_internal_get__levelPackIdToProductData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelPackIdToProductData;
}
constexpr void GlobalNamespace::SteamLevelProductCollectionModel::__cordl_internal_set__levelPackIdToProductData(
    ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__SteamLevelProductCollectionModel__LevelPackProductData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____levelPackIdToProductData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__SteamLevelProductCollectionModel__LevelPackRedirectionData*>*&
GlobalNamespace::SteamLevelProductCollectionModel::__cordl_internal_get__levelPackRedirectionData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelPackRedirectionData;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__SteamLevelProductCollectionModel__LevelPackRedirectionData*>*> const&
GlobalNamespace::SteamLevelProductCollectionModel::__cordl_internal_get__levelPackRedirectionData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelPackRedirectionData;
}
constexpr void GlobalNamespace::SteamLevelProductCollectionModel::__cordl_internal_set__levelPackRedirectionData(
    ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__SteamLevelProductCollectionModel__LevelPackRedirectionData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____levelPackRedirectionData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::SteamLevelProductCollectionModel*
GlobalNamespace::SteamLevelProductCollectionModel::New_ctor(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::SteamLevelProductPacksSO>>* levelProductsSOs) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::SteamLevelProductCollectionModel*>(levelProductsSOs));
}
inline void GlobalNamespace::SteamLevelProductCollectionModel::_ctor(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::SteamLevelProductPacksSO>>* levelProductsSOs) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SteamLevelProductCollectionModel*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::SteamLevelProductPacksSO>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, levelProductsSOs);
}
inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::__SteamLevelProductCollectionModel__LevelProductData*>*
GlobalNamespace::SteamLevelProductCollectionModel::get_levelProductsData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SteamLevelProductCollectionModel*>::get(),
                                                                             "get_levelProductsData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::__SteamLevelProductCollectionModel__LevelProductData*>*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__SteamLevelProductCollectionModel__LevelProductData* GlobalNamespace::SteamLevelProductCollectionModel::GetLevelProductData(::StringW levelId) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SteamLevelProductCollectionModel*>::get(), "GetLevelProductData",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__SteamLevelProductCollectionModel__LevelProductData*, false>(this, ___internal_method, levelId);
}
inline ::GlobalNamespace::__SteamLevelProductCollectionModel__LevelPackProductData* GlobalNamespace::SteamLevelProductCollectionModel::GetLevelPackProductData(::StringW levelPackId) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SteamLevelProductCollectionModel*>::get(), "GetLevelPackProductData",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__SteamLevelProductCollectionModel__LevelPackProductData*, false>(this, ___internal_method, levelPackId);
}
inline ::GlobalNamespace::__SteamLevelProductCollectionModel__LevelPackRedirectionData* GlobalNamespace::SteamLevelProductCollectionModel::GetLevelPackRedirectionData(::StringW levelPackId) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SteamLevelProductCollectionModel*>::get(), "GetLevelPackRedirectionData",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__SteamLevelProductCollectionModel__LevelPackRedirectionData*, false>(this, ___internal_method, levelPackId);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SteamLevelProductCollectionModel::SteamLevelProductCollectionModel() {}
