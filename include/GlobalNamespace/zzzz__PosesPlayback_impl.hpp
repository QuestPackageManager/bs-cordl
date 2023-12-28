#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PosesPlayback_def.hpp"
#include "GlobalNamespace/zzzz__AudioTimeSyncController_def.hpp"
#include "GlobalNamespace/zzzz__IBeatSaberLogger_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "GlobalNamespace/zzzz__PosesRecordingData_def.hpp"
#include "GlobalNamespace/zzzz__PoseObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PosesPlayback.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PosesPlayback::*)()>(&::GlobalNamespace::PosesPlayback::Update)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x23017c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PosesPlayback*>::get(), "Update",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PosesPlayback.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PosesPlayback::*)(
    ::ArrayW<::GlobalNamespace::PoseObject*, ::Array<::GlobalNamespace::PoseObject*>*>, ::GlobalNamespace::PosesRecordingData*, ::GlobalNamespace::IBeatSaberLogger*)>(
    &::GlobalNamespace::PosesPlayback::Init)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x22ff99c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PosesPlayback*>::get(), "Init", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::PoseObject*, ::Array<::GlobalNamespace::PoseObject*>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PosesRecordingData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatSaberLogger*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PosesPlayback.StartPlayback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PosesPlayback::*)()>(&::GlobalNamespace::PosesPlayback::StartPlayback)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2300040;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PosesPlayback*>::get(), "StartPlayback",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PosesPlayback.PlaybackTick
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PosesPlayback::*)(float_t)>(&::GlobalNamespace::PosesPlayback::PlaybackTick)> {
  constexpr static std::size_t size = 0x3a0;
  constexpr static std::size_t addrs = 0x23017dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PosesPlayback*>::get(), "PlaybackTick", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PosesPlayback.StopPlayback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PosesPlayback::*)()>(&::GlobalNamespace::PosesPlayback::StopPlayback)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x22fffb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PosesPlayback*>::get(), "StopPlayback",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PosesPlayback._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PosesPlayback::*)()>(&::GlobalNamespace::PosesPlayback::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2301b7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PosesPlayback*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::AudioTimeSyncController*& GlobalNamespace::PosesPlayback::__get__audioTimeSyncController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioTimeSyncController;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AudioTimeSyncController*> const& GlobalNamespace::PosesPlayback::__get__audioTimeSyncController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioTimeSyncController;
}
constexpr void GlobalNamespace::PosesPlayback::__set__audioTimeSyncController(::GlobalNamespace::AudioTimeSyncController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____audioTimeSyncController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IBeatSaberLogger*& GlobalNamespace::PosesPlayback::__get__logger() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____logger;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IBeatSaberLogger*> const& GlobalNamespace::PosesPlayback::__get__logger() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____logger;
}
constexpr void GlobalNamespace::PosesPlayback::__set__logger(::GlobalNamespace::IBeatSaberLogger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____logger)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*>& GlobalNamespace::PosesPlayback::__get__transforms() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transforms;
}
constexpr ::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> const& GlobalNamespace::PosesPlayback::__get__transforms() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transforms;
}
constexpr void GlobalNamespace::PosesPlayback::__set__transforms(::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____transforms)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::PosesRecordingData*& GlobalNamespace::PosesPlayback::__get__data() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____data;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PosesRecordingData*> const& GlobalNamespace::PosesPlayback::__get__data() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____data;
}
constexpr void GlobalNamespace::PosesPlayback::__set__data(::GlobalNamespace::PosesRecordingData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____data)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::PosesPlayback::__get__keyframeIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____keyframeIndex;
}
constexpr int32_t const& GlobalNamespace::PosesPlayback::__get__keyframeIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____keyframeIndex;
}
constexpr void GlobalNamespace::PosesPlayback::__set__keyframeIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____keyframeIndex = value;
}
inline void GlobalNamespace::PosesPlayback::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PosesPlayback*>::get(), "Update",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::PosesPlayback::Init(::ArrayW<::GlobalNamespace::PoseObject*, ::Array<::GlobalNamespace::PoseObject*>*> poseObjects, ::GlobalNamespace::PosesRecordingData* data,
                                                 ::GlobalNamespace::IBeatSaberLogger* logger) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PosesPlayback*>::get(), "Init", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::PoseObject*, ::Array<::GlobalNamespace::PoseObject*>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PosesRecordingData*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatSaberLogger*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, poseObjects, data, logger);
}
inline void GlobalNamespace::PosesPlayback::StartPlayback() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PosesPlayback*>::get(), "StartPlayback",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::PosesPlayback::PlaybackTick(float_t time) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PosesPlayback*>::get(), "PlaybackTick", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, time);
}
inline void GlobalNamespace::PosesPlayback::StopPlayback() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PosesPlayback*>::get(), "StopPlayback",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::PosesPlayback* GlobalNamespace::PosesPlayback::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::PosesPlayback*>());
}
inline void GlobalNamespace::PosesPlayback::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PosesPlayback*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PosesPlayback::PosesPlayback() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
