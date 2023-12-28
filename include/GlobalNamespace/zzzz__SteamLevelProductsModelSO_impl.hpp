#pragma once
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__SteamLevelProductsModelSO_def.hpp"
#include "GlobalNamespace/zzzz__SteamLevelProductsModelSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__SteamLevelProductsModelSO__LevelProductData.get_appId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::GlobalNamespace::__SteamLevelProductsModelSO__LevelProductData::*)()>(
    &::GlobalNamespace::__SteamLevelProductsModelSO__LevelProductData::get_appId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x236805c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SteamLevelProductsModelSO__LevelProductData*>::get(), "get_appId",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SteamLevelProductsModelSO__LevelProductData.get_levelId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::__SteamLevelProductsModelSO__LevelProductData::*)()>(
    &::GlobalNamespace::__SteamLevelProductsModelSO__LevelProductData::get_levelId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2368064;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SteamLevelProductsModelSO__LevelProductData*>::get(), "get_levelId",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SteamLevelProductsModelSO__LevelProductData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__SteamLevelProductsModelSO__LevelProductData::*)()>(
    &::GlobalNamespace::__SteamLevelProductsModelSO__LevelProductData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x236806c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SteamLevelProductsModelSO__LevelProductData*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr uint32_t& GlobalNamespace::__SteamLevelProductsModelSO__LevelProductData::__get__appId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____appId;
}
constexpr uint32_t const& GlobalNamespace::__SteamLevelProductsModelSO__LevelProductData::__get__appId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____appId;
}
constexpr void GlobalNamespace::__SteamLevelProductsModelSO__LevelProductData::__set__appId(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____appId = value;
}
constexpr ::StringW& GlobalNamespace::__SteamLevelProductsModelSO__LevelProductData::__get__levelId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelId;
}
constexpr ::StringW const& GlobalNamespace::__SteamLevelProductsModelSO__LevelProductData::__get__levelId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelId;
}
constexpr void GlobalNamespace::__SteamLevelProductsModelSO__LevelProductData::__set__levelId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____levelId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline uint32_t GlobalNamespace::__SteamLevelProductsModelSO__LevelProductData::get_appId() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SteamLevelProductsModelSO__LevelProductData*>::get(), "get_appId",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::__SteamLevelProductsModelSO__LevelProductData::get_levelId() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SteamLevelProductsModelSO__LevelProductData*>::get(), "get_levelId",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__SteamLevelProductsModelSO__LevelProductData* GlobalNamespace::__SteamLevelProductsModelSO__LevelProductData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__SteamLevelProductsModelSO__LevelProductData*>());
}
inline void GlobalNamespace::__SteamLevelProductsModelSO__LevelProductData::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SteamLevelProductsModelSO__LevelProductData*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__SteamLevelProductsModelSO__LevelProductData::__SteamLevelProductsModelSO__LevelProductData() {}
//  Writing Method size for method: ::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData.get_bundleId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData::*)()>(
    &::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData::get_bundleId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2368074;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData*>::get(), "get_bundleId",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData.get_levelPackId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData::*)()>(
    &::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData::get_levelPackId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x236807c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData*>::get(),
                                                 "get_levelPackId", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData.get_levelProductsData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::GlobalNamespace::__SteamLevelProductsModelSO__LevelProductData*, ::Array<::GlobalNamespace::__SteamLevelProductsModelSO__LevelProductData*>*> (
        ::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData::*)()>(&::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData::get_levelProductsData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2368084;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData*>::get(),
                                                 "get_levelProductsData", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData::*)()>(
    &::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x236808c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr uint32_t& GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData::__get__bundleId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bundleId;
}
constexpr uint32_t const& GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData::__get__bundleId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bundleId;
}
constexpr void GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData::__set__bundleId(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bundleId = value;
}
constexpr ::StringW& GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData::__get__levelPackId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelPackId;
}
constexpr ::StringW const& GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData::__get__levelPackId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelPackId;
}
constexpr void GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData::__set__levelPackId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____levelPackId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::GlobalNamespace::__SteamLevelProductsModelSO__LevelProductData*, ::Array<::GlobalNamespace::__SteamLevelProductsModelSO__LevelProductData*>*>&
GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData::__get__levelProductsData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelProductsData;
}
constexpr ::ArrayW<::GlobalNamespace::__SteamLevelProductsModelSO__LevelProductData*, ::Array<::GlobalNamespace::__SteamLevelProductsModelSO__LevelProductData*>*> const&
GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData::__get__levelProductsData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelProductsData;
}
constexpr void GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData::__set__levelProductsData(
    ::ArrayW<::GlobalNamespace::__SteamLevelProductsModelSO__LevelProductData*, ::Array<::GlobalNamespace::__SteamLevelProductsModelSO__LevelProductData*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____levelProductsData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline uint32_t GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData::get_bundleId() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData*>::get(), "get_bundleId",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData::get_levelPackId() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData*>::get(), "get_levelPackId",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::ArrayW<::GlobalNamespace::__SteamLevelProductsModelSO__LevelProductData*, ::Array<::GlobalNamespace::__SteamLevelProductsModelSO__LevelProductData*>*>
GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData::get_levelProductsData() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData*>::get(),
                                               "get_levelProductsData", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::__SteamLevelProductsModelSO__LevelProductData*, ::Array<::GlobalNamespace::__SteamLevelProductsModelSO__LevelProductData*>*>,
                                             false>(this, ___internal_method);
}
inline ::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData* GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData*>());
}
inline void GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData::__SteamLevelProductsModelSO__LevelPackProductData() {}
//  Writing Method size for method: ::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackRedirectionData.get_targetLevelPackId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackRedirectionData::*)()>(
    &::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackRedirectionData::get_targetLevelPackId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2368094;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackRedirectionData*>::get(),
                                                 "get_targetLevelPackId", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackRedirectionData.get_shouldOwnLevelPackId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackRedirectionData::*)()>(
    &::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackRedirectionData::get_shouldOwnLevelPackId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x236809c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackRedirectionData*>::get(),
                                                 "get_shouldOwnLevelPackId", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackRedirectionData.get_redirectedBundleId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackRedirectionData::*)()>(
    &::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackRedirectionData::get_redirectedBundleId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23680a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackRedirectionData*>::get(),
                                                 "get_redirectedBundleId", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackRedirectionData.get_validUntilDate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackRedirectionData::*)()>(
    &::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackRedirectionData::get_validUntilDate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23680ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackRedirectionData*>::get(),
                                                 "get_validUntilDate", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackRedirectionData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackRedirectionData::*)()>(
    &::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackRedirectionData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23680b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackRedirectionData*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::__SteamLevelProductsModelSO__LevelPackRedirectionData::__get__targetLevelPackId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____targetLevelPackId;
}
constexpr ::StringW const& GlobalNamespace::__SteamLevelProductsModelSO__LevelPackRedirectionData::__get__targetLevelPackId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____targetLevelPackId;
}
constexpr void GlobalNamespace::__SteamLevelProductsModelSO__LevelPackRedirectionData::__set__targetLevelPackId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____targetLevelPackId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::__SteamLevelProductsModelSO__LevelPackRedirectionData::__get__shouldOwnLevelPackId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shouldOwnLevelPackId;
}
constexpr ::StringW const& GlobalNamespace::__SteamLevelProductsModelSO__LevelPackRedirectionData::__get__shouldOwnLevelPackId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shouldOwnLevelPackId;
}
constexpr void GlobalNamespace::__SteamLevelProductsModelSO__LevelPackRedirectionData::__set__shouldOwnLevelPackId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____shouldOwnLevelPackId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr uint32_t& GlobalNamespace::__SteamLevelProductsModelSO__LevelPackRedirectionData::__get__redirectedBundleId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____redirectedBundleId;
}
constexpr uint32_t const& GlobalNamespace::__SteamLevelProductsModelSO__LevelPackRedirectionData::__get__redirectedBundleId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____redirectedBundleId;
}
constexpr void GlobalNamespace::__SteamLevelProductsModelSO__LevelPackRedirectionData::__set__redirectedBundleId(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____redirectedBundleId = value;
}
constexpr ::StringW& GlobalNamespace::__SteamLevelProductsModelSO__LevelPackRedirectionData::__get__validUntilDate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____validUntilDate;
}
constexpr ::StringW const& GlobalNamespace::__SteamLevelProductsModelSO__LevelPackRedirectionData::__get__validUntilDate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____validUntilDate;
}
constexpr void GlobalNamespace::__SteamLevelProductsModelSO__LevelPackRedirectionData::__set__validUntilDate(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____validUntilDate)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW GlobalNamespace::__SteamLevelProductsModelSO__LevelPackRedirectionData::get_targetLevelPackId() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackRedirectionData*>::get(),
                                               "get_targetLevelPackId", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::__SteamLevelProductsModelSO__LevelPackRedirectionData::get_shouldOwnLevelPackId() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackRedirectionData*>::get(),
                                               "get_shouldOwnLevelPackId", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline uint32_t GlobalNamespace::__SteamLevelProductsModelSO__LevelPackRedirectionData::get_redirectedBundleId() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackRedirectionData*>::get(),
                                               "get_redirectedBundleId", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::__SteamLevelProductsModelSO__LevelPackRedirectionData::get_validUntilDate() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackRedirectionData*>::get(),
                                               "get_validUntilDate", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackRedirectionData* GlobalNamespace::__SteamLevelProductsModelSO__LevelPackRedirectionData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackRedirectionData*>());
}
inline void GlobalNamespace::__SteamLevelProductsModelSO__LevelPackRedirectionData::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackRedirectionData*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackRedirectionData::__SteamLevelProductsModelSO__LevelPackRedirectionData() {}
//  Writing Method size for method: ::GlobalNamespace::SteamLevelProductsModelSO.get_levelPackProductsData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData*, ::Array<::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData*>*> (
        ::GlobalNamespace::SteamLevelProductsModelSO::*)()>(&::GlobalNamespace::SteamLevelProductsModelSO::get_levelPackProductsData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2368044;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SteamLevelProductsModelSO*>::get(),
                                                                               "get_levelPackProductsData", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SteamLevelProductsModelSO.get_levelPackRedirectionData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackRedirectionData*, ::Array<::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackRedirectionData*>*> (
        ::GlobalNamespace::SteamLevelProductsModelSO::*)()>(&::GlobalNamespace::SteamLevelProductsModelSO::get_levelPackRedirectionData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x236804c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SteamLevelProductsModelSO*>::get(),
                                                                               "get_levelPackRedirectionData", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SteamLevelProductsModelSO._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SteamLevelProductsModelSO::*)()>(&::GlobalNamespace::SteamLevelProductsModelSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2368054;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SteamLevelProductsModelSO*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData*, ::Array<::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData*>*>&
GlobalNamespace::SteamLevelProductsModelSO::__get__levelPackProductsData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelPackProductsData;
}
constexpr ::ArrayW<::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData*, ::Array<::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData*>*> const&
GlobalNamespace::SteamLevelProductsModelSO::__get__levelPackProductsData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelPackProductsData;
}
constexpr void GlobalNamespace::SteamLevelProductsModelSO::__set__levelPackProductsData(
    ::ArrayW<::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData*, ::Array<::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____levelPackProductsData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackRedirectionData*, ::Array<::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackRedirectionData*>*>&
GlobalNamespace::SteamLevelProductsModelSO::__get__levelPackRedirectionData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelPackRedirectionData;
}
constexpr ::ArrayW<::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackRedirectionData*, ::Array<::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackRedirectionData*>*> const&
GlobalNamespace::SteamLevelProductsModelSO::__get__levelPackRedirectionData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelPackRedirectionData;
}
constexpr void GlobalNamespace::SteamLevelProductsModelSO::__set__levelPackRedirectionData(
    ::ArrayW<::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackRedirectionData*, ::Array<::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackRedirectionData*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____levelPackRedirectionData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::ArrayW<::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData*, ::Array<::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData*>*>
GlobalNamespace::SteamLevelProductsModelSO::get_levelPackProductsData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SteamLevelProductsModelSO*>::get(),
                                                                             "get_levelPackProductsData", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<
      ::ArrayW<::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData*, ::Array<::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData*>*>, false>(this,
                                                                                                                                                                               ___internal_method);
}
inline ::ArrayW<::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackRedirectionData*, ::Array<::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackRedirectionData*>*>
GlobalNamespace::SteamLevelProductsModelSO::get_levelPackRedirectionData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SteamLevelProductsModelSO*>::get(),
                                                                             "get_levelPackRedirectionData", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<
      ::ArrayW<::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackRedirectionData*, ::Array<::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackRedirectionData*>*>, false>(
      this, ___internal_method);
}
inline ::GlobalNamespace::SteamLevelProductsModelSO* GlobalNamespace::SteamLevelProductsModelSO::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::SteamLevelProductsModelSO*>());
}
inline void GlobalNamespace::SteamLevelProductsModelSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SteamLevelProductsModelSO*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SteamLevelProductsModelSO::SteamLevelProductsModelSO() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
