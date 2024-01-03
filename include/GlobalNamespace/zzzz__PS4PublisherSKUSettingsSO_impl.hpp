#pragma once
#include "GlobalNamespace/zzzz__PS4ApplicationCategory_impl.hpp"
#include "GlobalNamespace/zzzz__SonyPublisherSKUSettingsSO_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__PS4PublisherSKUSettingsSO_def.hpp"
#include "GlobalNamespace/zzzz__PS4PublisherSKUSettingsSO_def.hpp"
#include "GlobalNamespace/zzzz__PS4ApplicationCategory_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__PS4PublisherSKUSettingsSO__PS4BuildVersion.get_masterVersion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::__PS4PublisherSKUSettingsSO__PS4BuildVersion::*)()>(
    &::GlobalNamespace::__PS4PublisherSKUSettingsSO__PS4BuildVersion::get_masterVersion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2368250;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PS4PublisherSKUSettingsSO__PS4BuildVersion*>::get(), "get_masterVersion",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PS4PublisherSKUSettingsSO__PS4BuildVersion.get_applicationVersion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::__PS4PublisherSKUSettingsSO__PS4BuildVersion::*)()>(
    &::GlobalNamespace::__PS4PublisherSKUSettingsSO__PS4BuildVersion::get_applicationVersion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2368258;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PS4PublisherSKUSettingsSO__PS4BuildVersion*>::get(),
                                                 "get_applicationVersion", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PS4PublisherSKUSettingsSO__PS4BuildVersion._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PS4PublisherSKUSettingsSO__PS4BuildVersion::*)()>(
    &::GlobalNamespace::__PS4PublisherSKUSettingsSO__PS4BuildVersion::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2368260;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PS4PublisherSKUSettingsSO__PS4BuildVersion*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::__PS4PublisherSKUSettingsSO__PS4BuildVersion::__get__masterVersion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____masterVersion;
}
constexpr ::StringW const& GlobalNamespace::__PS4PublisherSKUSettingsSO__PS4BuildVersion::__get__masterVersion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____masterVersion;
}
constexpr void GlobalNamespace::__PS4PublisherSKUSettingsSO__PS4BuildVersion::__set__masterVersion(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____masterVersion)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::__PS4PublisherSKUSettingsSO__PS4BuildVersion::__get__applicationVersion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____applicationVersion;
}
constexpr ::StringW const& GlobalNamespace::__PS4PublisherSKUSettingsSO__PS4BuildVersion::__get__applicationVersion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____applicationVersion;
}
constexpr void GlobalNamespace::__PS4PublisherSKUSettingsSO__PS4BuildVersion::__set__applicationVersion(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____applicationVersion)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW GlobalNamespace::__PS4PublisherSKUSettingsSO__PS4BuildVersion::get_masterVersion() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PS4PublisherSKUSettingsSO__PS4BuildVersion*>::get(), "get_masterVersion",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::__PS4PublisherSKUSettingsSO__PS4BuildVersion::get_applicationVersion() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PS4PublisherSKUSettingsSO__PS4BuildVersion*>::get(),
                                               "get_applicationVersion", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__PS4PublisherSKUSettingsSO__PS4BuildVersion* GlobalNamespace::__PS4PublisherSKUSettingsSO__PS4BuildVersion::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__PS4PublisherSKUSettingsSO__PS4BuildVersion*>());
}
inline void GlobalNamespace::__PS4PublisherSKUSettingsSO__PS4BuildVersion::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PS4PublisherSKUSettingsSO__PS4BuildVersion*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__PS4PublisherSKUSettingsSO__PS4BuildVersion::__PS4PublisherSKUSettingsSO__PS4BuildVersion() {}
//  Writing Method size for method: ::GlobalNamespace::PS4PublisherSKUSettingsSO.get_buildVersion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__PS4PublisherSKUSettingsSO__PS4BuildVersion* (::GlobalNamespace::PS4PublisherSKUSettingsSO::*)()>(
    &::GlobalNamespace::PS4PublisherSKUSettingsSO::get_buildVersion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2368210;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS4PublisherSKUSettingsSO*>::get(),
                                                                               "get_buildVersion", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PS4PublisherSKUSettingsSO.get_latestBuildVersion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__PS4PublisherSKUSettingsSO__PS4BuildVersion* (::GlobalNamespace::PS4PublisherSKUSettingsSO::*)()>(
    &::GlobalNamespace::PS4PublisherSKUSettingsSO::get_latestBuildVersion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2368218;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS4PublisherSKUSettingsSO*>::get(),
                                                                               "get_latestBuildVersion", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PS4PublisherSKUSettingsSO.get_parentalLockLevel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::PS4PublisherSKUSettingsSO::*)()>(
    &::GlobalNamespace::PS4PublisherSKUSettingsSO::get_parentalLockLevel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2368220;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS4PublisherSKUSettingsSO*>::get(),
                                                                               "get_parentalLockLevel", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PS4PublisherSKUSettingsSO.get_npTitleFilenamePath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::PS4PublisherSKUSettingsSO::*)()>(
    &::GlobalNamespace::PS4PublisherSKUSettingsSO::get_npTitleFilenamePath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2368228;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS4PublisherSKUSettingsSO*>::get(),
                                                                               "get_npTitleFilenamePath", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PS4PublisherSKUSettingsSO.get_defaultAgeRestriction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::PS4PublisherSKUSettingsSO::*)()>(
    &::GlobalNamespace::PS4PublisherSKUSettingsSO::get_defaultAgeRestriction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2368230;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS4PublisherSKUSettingsSO*>::get(),
                                                                               "get_defaultAgeRestriction", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PS4PublisherSKUSettingsSO.get_applicationCategory
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PS4ApplicationCategory (::GlobalNamespace::PS4PublisherSKUSettingsSO::*)()>(
    &::GlobalNamespace::PS4PublisherSKUSettingsSO::get_applicationCategory)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2368238;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS4PublisherSKUSettingsSO*>::get(),
                                                                               "get_applicationCategory", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PS4PublisherSKUSettingsSO._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PS4PublisherSKUSettingsSO::*)()>(&::GlobalNamespace::PS4PublisherSKUSettingsSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2368240;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS4PublisherSKUSettingsSO*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::__PS4PublisherSKUSettingsSO__PS4BuildVersion*& GlobalNamespace::PS4PublisherSKUSettingsSO::__get__buildVersion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buildVersion;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PS4PublisherSKUSettingsSO__PS4BuildVersion*> const& GlobalNamespace::PS4PublisherSKUSettingsSO::__get__buildVersion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buildVersion;
}
constexpr void GlobalNamespace::PS4PublisherSKUSettingsSO::__set__buildVersion(::GlobalNamespace::__PS4PublisherSKUSettingsSO__PS4BuildVersion* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____buildVersion)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__PS4PublisherSKUSettingsSO__PS4BuildVersion*& GlobalNamespace::PS4PublisherSKUSettingsSO::__get__latestBuildVersion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____latestBuildVersion;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PS4PublisherSKUSettingsSO__PS4BuildVersion*> const& GlobalNamespace::PS4PublisherSKUSettingsSO::__get__latestBuildVersion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____latestBuildVersion;
}
constexpr void GlobalNamespace::PS4PublisherSKUSettingsSO::__set__latestBuildVersion(::GlobalNamespace::__PS4PublisherSKUSettingsSO__PS4BuildVersion* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____latestBuildVersion)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::PS4PublisherSKUSettingsSO::__get__parentalLockLevel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parentalLockLevel;
}
constexpr int32_t const& GlobalNamespace::PS4PublisherSKUSettingsSO::__get__parentalLockLevel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parentalLockLevel;
}
constexpr void GlobalNamespace::PS4PublisherSKUSettingsSO::__set__parentalLockLevel(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____parentalLockLevel = value;
}
constexpr ::StringW& GlobalNamespace::PS4PublisherSKUSettingsSO::__get__npTitleFilenamePath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____npTitleFilenamePath;
}
constexpr ::StringW const& GlobalNamespace::PS4PublisherSKUSettingsSO::__get__npTitleFilenamePath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____npTitleFilenamePath;
}
constexpr void GlobalNamespace::PS4PublisherSKUSettingsSO::__set__npTitleFilenamePath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____npTitleFilenamePath)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::PS4PublisherSKUSettingsSO::__get__defaultAgeRestriction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultAgeRestriction;
}
constexpr int32_t const& GlobalNamespace::PS4PublisherSKUSettingsSO::__get__defaultAgeRestriction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultAgeRestriction;
}
constexpr void GlobalNamespace::PS4PublisherSKUSettingsSO::__set__defaultAgeRestriction(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____defaultAgeRestriction = value;
}
constexpr ::GlobalNamespace::PS4ApplicationCategory& GlobalNamespace::PS4PublisherSKUSettingsSO::__get__applicationCategory() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____applicationCategory;
}
constexpr ::GlobalNamespace::PS4ApplicationCategory const& GlobalNamespace::PS4PublisherSKUSettingsSO::__get__applicationCategory() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____applicationCategory;
}
constexpr void GlobalNamespace::PS4PublisherSKUSettingsSO::__set__applicationCategory(::GlobalNamespace::PS4ApplicationCategory value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____applicationCategory = value;
}
inline ::GlobalNamespace::__PS4PublisherSKUSettingsSO__PS4BuildVersion* GlobalNamespace::PS4PublisherSKUSettingsSO::get_buildVersion() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS4PublisherSKUSettingsSO*>::get(),
                                                                             "get_buildVersion", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__PS4PublisherSKUSettingsSO__PS4BuildVersion*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__PS4PublisherSKUSettingsSO__PS4BuildVersion* GlobalNamespace::PS4PublisherSKUSettingsSO::get_latestBuildVersion() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS4PublisherSKUSettingsSO*>::get(),
                                                                             "get_latestBuildVersion", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__PS4PublisherSKUSettingsSO__PS4BuildVersion*, false>(this, ___internal_method);
}
inline int32_t GlobalNamespace::PS4PublisherSKUSettingsSO::get_parentalLockLevel() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS4PublisherSKUSettingsSO*>::get(),
                                                                             "get_parentalLockLevel", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::PS4PublisherSKUSettingsSO::get_npTitleFilenamePath() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS4PublisherSKUSettingsSO*>::get(),
                                                                             "get_npTitleFilenamePath", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline int32_t GlobalNamespace::PS4PublisherSKUSettingsSO::get_defaultAgeRestriction() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS4PublisherSKUSettingsSO*>::get(),
                                                                             "get_defaultAgeRestriction", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::GlobalNamespace::PS4ApplicationCategory GlobalNamespace::PS4PublisherSKUSettingsSO::get_applicationCategory() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS4PublisherSKUSettingsSO*>::get(),
                                                                             "get_applicationCategory", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PS4ApplicationCategory, false>(this, ___internal_method);
}
inline ::GlobalNamespace::PS4PublisherSKUSettingsSO* GlobalNamespace::PS4PublisherSKUSettingsSO::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::PS4PublisherSKUSettingsSO*>());
}
inline void GlobalNamespace::PS4PublisherSKUSettingsSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS4PublisherSKUSettingsSO*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PS4PublisherSKUSettingsSO::PS4PublisherSKUSettingsSO() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
