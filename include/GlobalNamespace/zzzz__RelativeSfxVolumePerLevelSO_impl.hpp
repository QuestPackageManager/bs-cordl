#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__RelativeSfxVolumePerLevelSO_def.hpp"
#include "GlobalNamespace/zzzz__RelativeSfxVolumePerLevelSO_def.hpp"
#include "GlobalNamespace/zzzz__PreviewBeatmapLevelSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair.get_levelId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair::*)()>(
    &::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair::get_levelId)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x223ee20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair*>::get(), "get_levelId",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair.get_relativeSfxVolume
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair::*)()>(
    &::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair::get_relativeSfxVolume)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x223ee3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair*>::get(),
                                                 "get_relativeSfxVolume", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair::*)()>(
    &::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x223ee44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::PreviewBeatmapLevelSO*& GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair::__get__previewLevel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____previewLevel;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PreviewBeatmapLevelSO*> const& GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair::__get__previewLevel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____previewLevel;
}
constexpr void GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair::__set__previewLevel(::GlobalNamespace::PreviewBeatmapLevelSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____previewLevel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair::__get__relativeSfxVolume() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____relativeSfxVolume;
}
constexpr float_t const& GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair::__get__relativeSfxVolume() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____relativeSfxVolume;
}
constexpr void GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair::__set__relativeSfxVolume(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____relativeSfxVolume = value;
}
inline ::StringW GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair::get_levelId() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair*>::get(), "get_levelId",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair::get_relativeSfxVolume() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair*>::get(),
                                               "get_relativeSfxVolume", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair* GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair*>());
}
inline void GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair() {}
//  Writing Method size for method: ::GlobalNamespace::RelativeSfxVolumePerLevelSO.get_relativeSfxVolumePerLevel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair*, ::Array<::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair*>*> (
        ::GlobalNamespace::RelativeSfxVolumePerLevelSO::*)()>(&::GlobalNamespace::RelativeSfxVolumePerLevelSO::get_relativeSfxVolumePerLevel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x223ee10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RelativeSfxVolumePerLevelSO*>::get(),
                                                                               "get_relativeSfxVolumePerLevel", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RelativeSfxVolumePerLevelSO._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RelativeSfxVolumePerLevelSO::*)()>(&::GlobalNamespace::RelativeSfxVolumePerLevelSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x223ee18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RelativeSfxVolumePerLevelSO*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair*, ::Array<::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair*>*>&
GlobalNamespace::RelativeSfxVolumePerLevelSO::__get__relativeSfxVolumePerLevel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____relativeSfxVolumePerLevel;
}
constexpr ::ArrayW<::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair*, ::Array<::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair*>*> const&
GlobalNamespace::RelativeSfxVolumePerLevelSO::__get__relativeSfxVolumePerLevel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____relativeSfxVolumePerLevel;
}
constexpr void GlobalNamespace::RelativeSfxVolumePerLevelSO::__set__relativeSfxVolumePerLevel(
    ::ArrayW<::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair*, ::Array<::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____relativeSfxVolumePerLevel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::ArrayW<::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair*, ::Array<::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair*>*>
GlobalNamespace::RelativeSfxVolumePerLevelSO::get_relativeSfxVolumePerLevel() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RelativeSfxVolumePerLevelSO*>::get(),
                                                                             "get_relativeSfxVolumePerLevel", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<
      ::ArrayW<::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair*, ::Array<::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair*>*>, false>(
      this, ___internal_method);
}
inline ::GlobalNamespace::RelativeSfxVolumePerLevelSO* GlobalNamespace::RelativeSfxVolumePerLevelSO::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::RelativeSfxVolumePerLevelSO*>());
}
inline void GlobalNamespace::RelativeSfxVolumePerLevelSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RelativeSfxVolumePerLevelSO*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RelativeSfxVolumePerLevelSO::RelativeSfxVolumePerLevelSO() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
