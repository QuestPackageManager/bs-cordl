#pragma once
// IWYU pragma private; include "GlobalNamespace/PackPromoInfoSO.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__PackPromoInfoSO_def.hpp"
#include "GlobalNamespace/zzzz__PackPromoInfoSO_def.hpp"
#include "GlobalNamespace/zzzz__PromoBannerInfoSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PackPromoInfoSO_LevelPromoInfo.get_levelID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::PackPromoInfoSO_LevelPromoInfo::*)()>(
    &::GlobalNamespace::PackPromoInfoSO_LevelPromoInfo::get_levelID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3605250;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackPromoInfoSO_LevelPromoInfo*>::get(),
                                                                               "get_levelID", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PackPromoInfoSO_LevelPromoInfo.get_promoBannerInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::GlobalNamespace::PromoBannerInfoSO> (::GlobalNamespace::PackPromoInfoSO_LevelPromoInfo::*)()>(
    &::GlobalNamespace::PackPromoInfoSO_LevelPromoInfo::get_promoBannerInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3605258;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackPromoInfoSO_LevelPromoInfo*>::get(),
                                                                               "get_promoBannerInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PackPromoInfoSO_LevelPromoInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PackPromoInfoSO_LevelPromoInfo::*)()>(
    &::GlobalNamespace::PackPromoInfoSO_LevelPromoInfo::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3605260;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackPromoInfoSO_LevelPromoInfo*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::PackPromoInfoSO_LevelPromoInfo::__cordl_internal_get__levelID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelID;
}
constexpr ::StringW const& GlobalNamespace::PackPromoInfoSO_LevelPromoInfo::__cordl_internal_get__levelID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelID;
}
constexpr void GlobalNamespace::PackPromoInfoSO_LevelPromoInfo::__cordl_internal_set__levelID(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____levelID)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::PromoBannerInfoSO>& GlobalNamespace::PackPromoInfoSO_LevelPromoInfo::__cordl_internal_get__promoBannerInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____promoBannerInfo;
}
constexpr ::UnityW<::GlobalNamespace::PromoBannerInfoSO> const& GlobalNamespace::PackPromoInfoSO_LevelPromoInfo::__cordl_internal_get__promoBannerInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____promoBannerInfo;
}
constexpr void GlobalNamespace::PackPromoInfoSO_LevelPromoInfo::__cordl_internal_set__promoBannerInfo(::UnityW<::GlobalNamespace::PromoBannerInfoSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____promoBannerInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW GlobalNamespace::PackPromoInfoSO_LevelPromoInfo::get_levelID() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackPromoInfoSO_LevelPromoInfo*>::get(),
                                                                             "get_levelID", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::PromoBannerInfoSO> GlobalNamespace::PackPromoInfoSO_LevelPromoInfo::get_promoBannerInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackPromoInfoSO_LevelPromoInfo*>::get(),
                                                                             "get_promoBannerInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::PromoBannerInfoSO>, false>(this, ___internal_method);
}
inline void GlobalNamespace::PackPromoInfoSO_LevelPromoInfo::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackPromoInfoSO_LevelPromoInfo*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::PackPromoInfoSO_LevelPromoInfo* GlobalNamespace::PackPromoInfoSO_LevelPromoInfo::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::PackPromoInfoSO_LevelPromoInfo*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PackPromoInfoSO_LevelPromoInfo::PackPromoInfoSO_LevelPromoInfo() {}
//  Writing Method size for method: ::GlobalNamespace::PackPromoInfoSO.get_promoBannerInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::GlobalNamespace::PromoBannerInfoSO> (::GlobalNamespace::PackPromoInfoSO::*)()>(
    &::GlobalNamespace::PackPromoInfoSO::get_promoBannerInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3605218;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackPromoInfoSO*>::get(),
                                                                               "get_promoBannerInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PackPromoInfoSO.get_levelPromoInfos
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::GlobalNamespace::PackPromoInfoSO_LevelPromoInfo*, ::Array<::GlobalNamespace::PackPromoInfoSO_LevelPromoInfo*>*> (::GlobalNamespace::PackPromoInfoSO::*)()>(
        &::GlobalNamespace::PackPromoInfoSO::get_levelPromoInfos)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3605220;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackPromoInfoSO*>::get(),
                                                                               "get_levelPromoInfos", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PackPromoInfoSO.get_hasLevelPromos
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::PackPromoInfoSO::*)()>(&::GlobalNamespace::PackPromoInfoSO::get_hasLevelPromos)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x3605228;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackPromoInfoSO*>::get(), "get_hasLevelPromos",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PackPromoInfoSO._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PackPromoInfoSO::*)()>(&::GlobalNamespace::PackPromoInfoSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3605248;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackPromoInfoSO*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::PromoBannerInfoSO>& GlobalNamespace::PackPromoInfoSO::__cordl_internal_get__promoBannerInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____promoBannerInfo;
}
constexpr ::UnityW<::GlobalNamespace::PromoBannerInfoSO> const& GlobalNamespace::PackPromoInfoSO::__cordl_internal_get__promoBannerInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____promoBannerInfo;
}
constexpr void GlobalNamespace::PackPromoInfoSO::__cordl_internal_set__promoBannerInfo(::UnityW<::GlobalNamespace::PromoBannerInfoSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____promoBannerInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::GlobalNamespace::PackPromoInfoSO_LevelPromoInfo*, ::Array<::GlobalNamespace::PackPromoInfoSO_LevelPromoInfo*>*>&
GlobalNamespace::PackPromoInfoSO::__cordl_internal_get__levelsPromoInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelsPromoInfo;
}
constexpr ::ArrayW<::GlobalNamespace::PackPromoInfoSO_LevelPromoInfo*, ::Array<::GlobalNamespace::PackPromoInfoSO_LevelPromoInfo*>*> const&
GlobalNamespace::PackPromoInfoSO::__cordl_internal_get__levelsPromoInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelsPromoInfo;
}
constexpr void GlobalNamespace::PackPromoInfoSO::__cordl_internal_set__levelsPromoInfo(
    ::ArrayW<::GlobalNamespace::PackPromoInfoSO_LevelPromoInfo*, ::Array<::GlobalNamespace::PackPromoInfoSO_LevelPromoInfo*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____levelsPromoInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityW<::GlobalNamespace::PromoBannerInfoSO> GlobalNamespace::PackPromoInfoSO::get_promoBannerInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackPromoInfoSO*>::get(), "get_promoBannerInfo",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::PromoBannerInfoSO>, false>(this, ___internal_method);
}
inline ::ArrayW<::GlobalNamespace::PackPromoInfoSO_LevelPromoInfo*, ::Array<::GlobalNamespace::PackPromoInfoSO_LevelPromoInfo*>*> GlobalNamespace::PackPromoInfoSO::get_levelPromoInfos() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackPromoInfoSO*>::get(), "get_levelPromoInfos",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::PackPromoInfoSO_LevelPromoInfo*, ::Array<::GlobalNamespace::PackPromoInfoSO_LevelPromoInfo*>*>, false>(this,
                                                                                                                                                                                ___internal_method);
}
inline bool GlobalNamespace::PackPromoInfoSO::get_hasLevelPromos() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackPromoInfoSO*>::get(), "get_hasLevelPromos",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::PackPromoInfoSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackPromoInfoSO*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::PackPromoInfoSO* GlobalNamespace::PackPromoInfoSO::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::PackPromoInfoSO*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PackPromoInfoSO::PackPromoInfoSO() {}
