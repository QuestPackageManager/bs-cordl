#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__RelativeSfxVolumeSO_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelSO_def.hpp"
#include "GlobalNamespace/zzzz__RelativeSfxVolumeSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__RelativeSfxVolumeSO__RelativeSfxVolumePair.get_levelId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::__RelativeSfxVolumeSO__RelativeSfxVolumePair::*)()>(
    &::GlobalNamespace::__RelativeSfxVolumeSO__RelativeSfxVolumePair::get_levelId)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1321acc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RelativeSfxVolumeSO__RelativeSfxVolumePair*>::get(), "get_levelId",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RelativeSfxVolumeSO__RelativeSfxVolumePair.get_relativeSfxVolume
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::__RelativeSfxVolumeSO__RelativeSfxVolumePair::*)()>(
    &::GlobalNamespace::__RelativeSfxVolumeSO__RelativeSfxVolumePair::get_relativeSfxVolume)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1321ae8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RelativeSfxVolumeSO__RelativeSfxVolumePair*>::get(),
                                                 "get_relativeSfxVolume", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RelativeSfxVolumeSO__RelativeSfxVolumePair._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__RelativeSfxVolumeSO__RelativeSfxVolumePair::*)()>(
    &::GlobalNamespace::__RelativeSfxVolumeSO__RelativeSfxVolumePair::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1321af0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RelativeSfxVolumeSO__RelativeSfxVolumePair*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::BeatmapLevelSO>& GlobalNamespace::__RelativeSfxVolumeSO__RelativeSfxVolumePair::__cordl_internal_get__beatmapLevelSo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevelSo;
}
constexpr ::UnityW<::GlobalNamespace::BeatmapLevelSO> const& GlobalNamespace::__RelativeSfxVolumeSO__RelativeSfxVolumePair::__cordl_internal_get__beatmapLevelSo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevelSo;
}
constexpr void GlobalNamespace::__RelativeSfxVolumeSO__RelativeSfxVolumePair::__cordl_internal_set__beatmapLevelSo(::UnityW<::GlobalNamespace::BeatmapLevelSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapLevelSo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::__RelativeSfxVolumeSO__RelativeSfxVolumePair::__cordl_internal_get__relativeSfxVolume() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____relativeSfxVolume;
}
constexpr float_t const& GlobalNamespace::__RelativeSfxVolumeSO__RelativeSfxVolumePair::__cordl_internal_get__relativeSfxVolume() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____relativeSfxVolume;
}
constexpr void GlobalNamespace::__RelativeSfxVolumeSO__RelativeSfxVolumePair::__cordl_internal_set__relativeSfxVolume(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____relativeSfxVolume = value;
}
inline ::StringW GlobalNamespace::__RelativeSfxVolumeSO__RelativeSfxVolumePair::get_levelId() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RelativeSfxVolumeSO__RelativeSfxVolumePair*>::get(), "get_levelId",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::__RelativeSfxVolumeSO__RelativeSfxVolumePair::get_relativeSfxVolume() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RelativeSfxVolumeSO__RelativeSfxVolumePair*>::get(), "get_relativeSfxVolume",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__RelativeSfxVolumeSO__RelativeSfxVolumePair* GlobalNamespace::__RelativeSfxVolumeSO__RelativeSfxVolumePair::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__RelativeSfxVolumeSO__RelativeSfxVolumePair*>());
}
inline void GlobalNamespace::__RelativeSfxVolumeSO__RelativeSfxVolumePair::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RelativeSfxVolumeSO__RelativeSfxVolumePair*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__RelativeSfxVolumeSO__RelativeSfxVolumePair::__RelativeSfxVolumeSO__RelativeSfxVolumePair() {}
//  Writing Method size for method: ::GlobalNamespace::RelativeSfxVolumeSO.get_relativeSfxVolumePerPack
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::RelativeSfxVolumeSO::*)()>(
    &::GlobalNamespace::RelativeSfxVolumeSO::get_relativeSfxVolumePerPack)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1321ab4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RelativeSfxVolumeSO*>::get(),
                                                                               "get_relativeSfxVolumePerPack", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RelativeSfxVolumeSO.get_relativeSfxVolumePerLevel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::GlobalNamespace::__RelativeSfxVolumeSO__RelativeSfxVolumePair*, ::Array<::GlobalNamespace::__RelativeSfxVolumeSO__RelativeSfxVolumePair*>*> (
        ::GlobalNamespace::RelativeSfxVolumeSO::*)()>(&::GlobalNamespace::RelativeSfxVolumeSO::get_relativeSfxVolumePerLevel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1321abc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RelativeSfxVolumeSO*>::get(),
                                                                               "get_relativeSfxVolumePerLevel", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RelativeSfxVolumeSO._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RelativeSfxVolumeSO::*)()>(&::GlobalNamespace::RelativeSfxVolumeSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1321ac4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RelativeSfxVolumeSO*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::RelativeSfxVolumeSO::__cordl_internal_get__relativeSfxVolumePerPack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____relativeSfxVolumePerPack;
}
constexpr float_t const& GlobalNamespace::RelativeSfxVolumeSO::__cordl_internal_get__relativeSfxVolumePerPack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____relativeSfxVolumePerPack;
}
constexpr void GlobalNamespace::RelativeSfxVolumeSO::__cordl_internal_set__relativeSfxVolumePerPack(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____relativeSfxVolumePerPack = value;
}
constexpr ::ArrayW<::GlobalNamespace::__RelativeSfxVolumeSO__RelativeSfxVolumePair*, ::Array<::GlobalNamespace::__RelativeSfxVolumeSO__RelativeSfxVolumePair*>*>&
GlobalNamespace::RelativeSfxVolumeSO::__cordl_internal_get__relativeSfxVolumePerLevel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____relativeSfxVolumePerLevel;
}
constexpr ::ArrayW<::GlobalNamespace::__RelativeSfxVolumeSO__RelativeSfxVolumePair*, ::Array<::GlobalNamespace::__RelativeSfxVolumeSO__RelativeSfxVolumePair*>*> const&
GlobalNamespace::RelativeSfxVolumeSO::__cordl_internal_get__relativeSfxVolumePerLevel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____relativeSfxVolumePerLevel;
}
constexpr void GlobalNamespace::RelativeSfxVolumeSO::__cordl_internal_set__relativeSfxVolumePerLevel(
    ::ArrayW<::GlobalNamespace::__RelativeSfxVolumeSO__RelativeSfxVolumePair*, ::Array<::GlobalNamespace::__RelativeSfxVolumeSO__RelativeSfxVolumePair*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____relativeSfxVolumePerLevel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline float_t GlobalNamespace::RelativeSfxVolumeSO::get_relativeSfxVolumePerPack() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RelativeSfxVolumeSO*>::get(),
                                                                             "get_relativeSfxVolumePerPack", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline ::ArrayW<::GlobalNamespace::__RelativeSfxVolumeSO__RelativeSfxVolumePair*, ::Array<::GlobalNamespace::__RelativeSfxVolumeSO__RelativeSfxVolumePair*>*>
GlobalNamespace::RelativeSfxVolumeSO::get_relativeSfxVolumePerLevel() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RelativeSfxVolumeSO*>::get(),
                                                                             "get_relativeSfxVolumePerLevel", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::__RelativeSfxVolumeSO__RelativeSfxVolumePair*, ::Array<::GlobalNamespace::__RelativeSfxVolumeSO__RelativeSfxVolumePair*>*>,
                                             false>(this, ___internal_method);
}
inline ::GlobalNamespace::RelativeSfxVolumeSO* GlobalNamespace::RelativeSfxVolumeSO::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::RelativeSfxVolumeSO*>());
}
inline void GlobalNamespace::RelativeSfxVolumeSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RelativeSfxVolumeSO*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RelativeSfxVolumeSO::RelativeSfxVolumeSO() {}
