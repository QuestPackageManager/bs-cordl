#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__RelativeSfxVolumePerLevelSO_def.hpp"
#include "GlobalNamespace/zzzz__RelativeSfxVolumePerLevelSO_def.hpp"
#include "GlobalNamespace/zzzz__PreviewBeatmapLevelSO_def.hpp"
#include "GlobalNamespace/zzzz__PreviewBeatmapLevelCollectionSO_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "GlobalNamespace/zzzz__IPreviewBeatmapLevel_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair.get_levelId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair::*)()>(
    &::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair::get_levelId)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x23732f0;

  inline static ::MethodInfo const* methodInfo() {
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
  constexpr static std::size_t addrs = 0x237330c;

  inline static ::MethodInfo const* methodInfo() {
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
  constexpr static std::size_t addrs = 0x2373314;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::PreviewBeatmapLevelSO*& GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair::__get__previewLevel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____previewLevel;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PreviewBeatmapLevelSO*> const& GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair::__get__previewLevel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____previewLevel;
}
constexpr void GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair::__set__previewLevel(::GlobalNamespace::PreviewBeatmapLevelSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____previewLevel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair::__get__relativeSfxVolume() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____relativeSfxVolume;
}
constexpr float_t const& GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair::__get__relativeSfxVolume() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____relativeSfxVolume;
}
constexpr void GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair::__set__relativeSfxVolume(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
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
//  Writing Method size for method: ::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePerPackPair____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePerPackPair____c::*)()>(
    &::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePerPackPair____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23734b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePerPackPair____c*>::get(),
                                                 ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePerPackPair____c._get_levelIds_b__5_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePerPackPair____c::*)(
    ::GlobalNamespace::IPreviewBeatmapLevel*)>(&::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePerPackPair____c::_get_levelIds_b__5_0)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x23734b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePerPackPair____c*>::get(), "<get_levelIds>b__5_0",
        std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPreviewBeatmapLevel*>::get() })));
    return ___internal_method;
  }
};
inline void
GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePerPackPair____c::setStaticF___9(::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePerPackPair____c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePerPackPair____c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePerPackPair____c*>::get>(
      std::forward<::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePerPackPair____c*>(value));
}
inline ::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePerPackPair____c* GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePerPackPair____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePerPackPair____c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePerPackPair____c*>::get>();
}
inline void GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePerPackPair____c::setStaticF___9__5_0(::System::Func_2<::GlobalNamespace::IPreviewBeatmapLevel*, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::GlobalNamespace::IPreviewBeatmapLevel*, ::StringW>*, "<>9__5_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePerPackPair____c*>::get>(
      std::forward<::System::Func_2<::GlobalNamespace::IPreviewBeatmapLevel*, ::StringW>*>(value));
}
inline ::System::Func_2<::GlobalNamespace::IPreviewBeatmapLevel*, ::StringW>* GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePerPackPair____c::getStaticF___9__5_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::GlobalNamespace::IPreviewBeatmapLevel*, ::StringW>*, "<>9__5_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePerPackPair____c*>::get>();
}
inline ::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePerPackPair____c* GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePerPackPair____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePerPackPair____c*>());
}
inline void GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePerPackPair____c::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePerPackPair____c*>::get(),
                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePerPackPair____c::_get_levelIds_b__5_0(::GlobalNamespace::IPreviewBeatmapLevel* a) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePerPackPair____c*>::get(), "<get_levelIds>b__5_0",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPreviewBeatmapLevel*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, a);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePerPackPair____c::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePerPackPair____c() {}
//  Writing Method size for method: ::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePerPackPair.get_relativeSfxVolume
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePerPackPair::*)()>(
    &::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePerPackPair::get_relativeSfxVolume)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x237331c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePerPackPair*>::get(),
                                                 "get_relativeSfxVolume", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePerPackPair.get_levelIds
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW, ::Array<::StringW>*> (
    ::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePerPackPair::*)()>(&::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePerPackPair::get_levelIds)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x2373324;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePerPackPair*>::get(),
                                                 "get_levelIds", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePerPackPair._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePerPackPair::*)()>(
    &::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePerPackPair::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2373444;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePerPackPair*>::get(),
                                                 ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::PreviewBeatmapLevelCollectionSO*& GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePerPackPair::__get__previewLevelCollection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____previewLevelCollection;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PreviewBeatmapLevelCollectionSO*> const&
GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePerPackPair::__get__previewLevelCollection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____previewLevelCollection;
}
constexpr void GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePerPackPair::__set__previewLevelCollection(::GlobalNamespace::PreviewBeatmapLevelCollectionSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____previewLevelCollection)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePerPackPair::__get__relativeSfxVolume() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____relativeSfxVolume;
}
constexpr float_t const& GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePerPackPair::__get__relativeSfxVolume() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____relativeSfxVolume;
}
constexpr void GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePerPackPair::__set__relativeSfxVolume(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____relativeSfxVolume = value;
}
inline float_t GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePerPackPair::get_relativeSfxVolume() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePerPackPair*>::get(),
                                               "get_relativeSfxVolume", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePerPackPair::get_levelIds() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePerPackPair*>::get(),
                                               "get_levelIds", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW, ::Array<::StringW>*>, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePerPackPair* GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePerPackPair::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePerPackPair*>());
}
inline void GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePerPackPair::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePerPackPair*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePerPackPair::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePerPackPair() {}
//  Writing Method size for method: ::GlobalNamespace::RelativeSfxVolumePerLevelSO.get_relativeSfxVolumePerLevel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair*, ::Array<::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair*>*> (
        ::GlobalNamespace::RelativeSfxVolumePerLevelSO::*)()>(&::GlobalNamespace::RelativeSfxVolumePerLevelSO::get_relativeSfxVolumePerLevel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23732d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RelativeSfxVolumePerLevelSO*>::get(),
                                                                               "get_relativeSfxVolumePerLevel", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RelativeSfxVolumePerLevelSO.get_relativeSfxVolumePerPack
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePerPackPair*, ::Array<::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePerPackPair*>*> (
        ::GlobalNamespace::RelativeSfxVolumePerLevelSO::*)()>(&::GlobalNamespace::RelativeSfxVolumePerLevelSO::get_relativeSfxVolumePerPack)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23732e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RelativeSfxVolumePerLevelSO*>::get(),
                                                                               "get_relativeSfxVolumePerPack", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RelativeSfxVolumePerLevelSO._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RelativeSfxVolumePerLevelSO::*)()>(&::GlobalNamespace::RelativeSfxVolumePerLevelSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23732e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RelativeSfxVolumePerLevelSO*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePerPackPair*, ::Array<::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePerPackPair*>*>&
GlobalNamespace::RelativeSfxVolumePerLevelSO::__get__relativeSfxVolumePerPack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____relativeSfxVolumePerPack;
}
constexpr ::ArrayW<::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePerPackPair*, ::Array<::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePerPackPair*>*> const&
GlobalNamespace::RelativeSfxVolumePerLevelSO::__get__relativeSfxVolumePerPack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____relativeSfxVolumePerPack;
}
constexpr void GlobalNamespace::RelativeSfxVolumePerLevelSO::__set__relativeSfxVolumePerPack(
    ::ArrayW<::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePerPackPair*, ::Array<::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePerPackPair*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____relativeSfxVolumePerPack)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair*, ::Array<::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair*>*>&
GlobalNamespace::RelativeSfxVolumePerLevelSO::__get__relativeSfxVolumePerLevel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____relativeSfxVolumePerLevel;
}
constexpr ::ArrayW<::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair*, ::Array<::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair*>*> const&
GlobalNamespace::RelativeSfxVolumePerLevelSO::__get__relativeSfxVolumePerLevel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____relativeSfxVolumePerLevel;
}
constexpr void GlobalNamespace::RelativeSfxVolumePerLevelSO::__set__relativeSfxVolumePerLevel(
    ::ArrayW<::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair*, ::Array<::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
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
inline ::ArrayW<::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePerPackPair*, ::Array<::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePerPackPair*>*>
GlobalNamespace::RelativeSfxVolumePerLevelSO::get_relativeSfxVolumePerPack() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RelativeSfxVolumePerLevelSO*>::get(),
                                                                             "get_relativeSfxVolumePerPack", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<
      ::ArrayW<::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePerPackPair*, ::Array<::GlobalNamespace::__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePerPackPair*>*>, false>(
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
