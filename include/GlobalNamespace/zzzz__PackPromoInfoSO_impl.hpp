#pragma once
// IWYU pragma private; include "GlobalNamespace/PackPromoInfoSO.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__PackPromoInfoSO_def.hpp"
#include "GlobalNamespace/zzzz__PackPromoInfoSO_def.hpp"
#include "GlobalNamespace/zzzz__PromoBannerInfoSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PackPromoInfoSO_LevelPromoInfo.get_levelID
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::PackPromoInfoSO_LevelPromoInfo::*)()>(&::GlobalNamespace::PackPromoInfoSO_LevelPromoInfo::get_levelID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x366df34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackPromoInfoSO_LevelPromoInfo*>::get(),
                        "get_levelID",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PackPromoInfoSO_LevelPromoInfo.get_promoBannerInfo
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::GlobalNamespace::PromoBannerInfoSO> (::GlobalNamespace::PackPromoInfoSO_LevelPromoInfo::*)()>(&::GlobalNamespace::PackPromoInfoSO_LevelPromoInfo::get_promoBannerInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x366df3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackPromoInfoSO_LevelPromoInfo*>::get(),
                        "get_promoBannerInfo",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PackPromoInfoSO_LevelPromoInfo.set_promoBannerInfo
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PackPromoInfoSO_LevelPromoInfo::*)(::GlobalNamespace::PromoBannerInfoSO*)>(&::GlobalNamespace::PackPromoInfoSO_LevelPromoInfo::set_promoBannerInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x366df44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackPromoInfoSO_LevelPromoInfo*>::get(),
                        "set_promoBannerInfo",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PromoBannerInfoSO*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PackPromoInfoSO_LevelPromoInfo._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PackPromoInfoSO_LevelPromoInfo::*)(::StringW, ::GlobalNamespace::PromoBannerInfoSO*)>(&::GlobalNamespace::PackPromoInfoSO_LevelPromoInfo::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x366df4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackPromoInfoSO_LevelPromoInfo*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PromoBannerInfoSO*>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::PackPromoInfoSO_LevelPromoInfo::__cordl_internal_get__levelID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____levelID;
}
constexpr ::StringW const& GlobalNamespace::PackPromoInfoSO_LevelPromoInfo::__cordl_internal_get__levelID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____levelID;
}
constexpr void GlobalNamespace::PackPromoInfoSO_LevelPromoInfo::__cordl_internal_set__levelID(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____levelID)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::PromoBannerInfoSO>& GlobalNamespace::PackPromoInfoSO_LevelPromoInfo::__cordl_internal_get__promoBannerInfo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____promoBannerInfo;
}
constexpr ::UnityW<::GlobalNamespace::PromoBannerInfoSO> const& GlobalNamespace::PackPromoInfoSO_LevelPromoInfo::__cordl_internal_get__promoBannerInfo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____promoBannerInfo;
}
constexpr void GlobalNamespace::PackPromoInfoSO_LevelPromoInfo::__cordl_internal_set__promoBannerInfo(::UnityW<::GlobalNamespace::PromoBannerInfoSO>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____promoBannerInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW GlobalNamespace::PackPromoInfoSO_LevelPromoInfo::get_levelID()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackPromoInfoSO_LevelPromoInfo*>::get(),
                        "get_levelID",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::PromoBannerInfoSO> GlobalNamespace::PackPromoInfoSO_LevelPromoInfo::get_promoBannerInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackPromoInfoSO_LevelPromoInfo*>::get(),
                        "get_promoBannerInfo",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::PromoBannerInfoSO>, false>(this, ___internal_method);
}
inline void GlobalNamespace::PackPromoInfoSO_LevelPromoInfo::set_promoBannerInfo(::GlobalNamespace::PromoBannerInfoSO*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackPromoInfoSO_LevelPromoInfo*>::get(),
                        "set_promoBannerInfo",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PromoBannerInfoSO*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::PackPromoInfoSO_LevelPromoInfo::_ctor(::StringW  levelID, ::GlobalNamespace::PromoBannerInfoSO*  promoBannerInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackPromoInfoSO_LevelPromoInfo*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PromoBannerInfoSO*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, levelID, promoBannerInfo);
}
inline ::GlobalNamespace::PackPromoInfoSO_LevelPromoInfo* GlobalNamespace::PackPromoInfoSO_LevelPromoInfo::New_ctor(::StringW  levelID, ::GlobalNamespace::PromoBannerInfoSO*  promoBannerInfo)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::PackPromoInfoSO_LevelPromoInfo*>(levelID, promoBannerInfo));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PackPromoInfoSO_LevelPromoInfo::PackPromoInfoSO_LevelPromoInfo()   {
}
//  Writing Method size for method: ::GlobalNamespace::PackPromoInfoSO.get_promoBannerInfo
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::GlobalNamespace::PromoBannerInfoSO> (::GlobalNamespace::PackPromoInfoSO::*)()>(&::GlobalNamespace::PackPromoInfoSO::get_promoBannerInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x366dd60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackPromoInfoSO*>::get(),
                        "get_promoBannerInfo",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PackPromoInfoSO.set_promoBannerInfo
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PackPromoInfoSO::*)(::GlobalNamespace::PromoBannerInfoSO*)>(&::GlobalNamespace::PackPromoInfoSO::set_promoBannerInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x366dd68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackPromoInfoSO*>::get(),
                        "set_promoBannerInfo",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PromoBannerInfoSO*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PackPromoInfoSO.get_levelPromoInfos
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::GlobalNamespace::PackPromoInfoSO_LevelPromoInfo*,::Array<::GlobalNamespace::PackPromoInfoSO_LevelPromoInfo*>*> (::GlobalNamespace::PackPromoInfoSO::*)()>(&::GlobalNamespace::PackPromoInfoSO::get_levelPromoInfos)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x366dd70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackPromoInfoSO*>::get(),
                        "get_levelPromoInfos",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PackPromoInfoSO.get_hasLevelPromos
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::PackPromoInfoSO::*)()>(&::GlobalNamespace::PackPromoInfoSO::get_hasLevelPromos)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x366de14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackPromoInfoSO*>::get(),
                        "get_hasLevelPromos",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PackPromoInfoSO.AddLevelPromoInfo
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PackPromoInfoSO::*)(::GlobalNamespace::PackPromoInfoSO_LevelPromoInfo*)>(&::GlobalNamespace::PackPromoInfoSO::AddLevelPromoInfo)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x366de34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackPromoInfoSO*>::get(),
                        "AddLevelPromoInfo",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PackPromoInfoSO_LevelPromoInfo*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PackPromoInfoSO._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PackPromoInfoSO::*)()>(&::GlobalNamespace::PackPromoInfoSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x366df2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackPromoInfoSO*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::PromoBannerInfoSO>& GlobalNamespace::PackPromoInfoSO::__cordl_internal_get__promoBannerInfo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____promoBannerInfo;
}
constexpr ::UnityW<::GlobalNamespace::PromoBannerInfoSO> const& GlobalNamespace::PackPromoInfoSO::__cordl_internal_get__promoBannerInfo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____promoBannerInfo;
}
constexpr void GlobalNamespace::PackPromoInfoSO::__cordl_internal_set__promoBannerInfo(::UnityW<::GlobalNamespace::PromoBannerInfoSO>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____promoBannerInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::GlobalNamespace::PackPromoInfoSO_LevelPromoInfo*,::Array<::GlobalNamespace::PackPromoInfoSO_LevelPromoInfo*>*>& GlobalNamespace::PackPromoInfoSO::__cordl_internal_get__levelsPromoInfo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____levelsPromoInfo;
}
constexpr ::ArrayW<::GlobalNamespace::PackPromoInfoSO_LevelPromoInfo*,::Array<::GlobalNamespace::PackPromoInfoSO_LevelPromoInfo*>*> const& GlobalNamespace::PackPromoInfoSO::__cordl_internal_get__levelsPromoInfo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____levelsPromoInfo;
}
constexpr void GlobalNamespace::PackPromoInfoSO::__cordl_internal_set__levelsPromoInfo(::ArrayW<::GlobalNamespace::PackPromoInfoSO_LevelPromoInfo*,::Array<::GlobalNamespace::PackPromoInfoSO_LevelPromoInfo*>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____levelsPromoInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityW<::GlobalNamespace::PromoBannerInfoSO> GlobalNamespace::PackPromoInfoSO::get_promoBannerInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackPromoInfoSO*>::get(),
                        "get_promoBannerInfo",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::PromoBannerInfoSO>, false>(this, ___internal_method);
}
inline void GlobalNamespace::PackPromoInfoSO::set_promoBannerInfo(::GlobalNamespace::PromoBannerInfoSO*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackPromoInfoSO*>::get(),
                        "set_promoBannerInfo",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PromoBannerInfoSO*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::ArrayW<::GlobalNamespace::PackPromoInfoSO_LevelPromoInfo*,::Array<::GlobalNamespace::PackPromoInfoSO_LevelPromoInfo*>*> GlobalNamespace::PackPromoInfoSO::get_levelPromoInfos()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackPromoInfoSO*>::get(),
                        "get_levelPromoInfos",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::PackPromoInfoSO_LevelPromoInfo*,::Array<::GlobalNamespace::PackPromoInfoSO_LevelPromoInfo*>*>, false>(this, ___internal_method);
}
inline bool GlobalNamespace::PackPromoInfoSO::get_hasLevelPromos()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackPromoInfoSO*>::get(),
                        "get_hasLevelPromos",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::PackPromoInfoSO::AddLevelPromoInfo(::GlobalNamespace::PackPromoInfoSO_LevelPromoInfo*  levelPromoInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackPromoInfoSO*>::get(),
                        "AddLevelPromoInfo",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PackPromoInfoSO_LevelPromoInfo*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, levelPromoInfo);
}
inline void GlobalNamespace::PackPromoInfoSO::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackPromoInfoSO*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::PackPromoInfoSO* GlobalNamespace::PackPromoInfoSO::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::PackPromoInfoSO*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PackPromoInfoSO::PackPromoInfoSO()   {
}
