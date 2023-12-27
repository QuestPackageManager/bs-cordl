#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__RecordingUIController_def.hpp"
#include "GlobalNamespace/zzzz__RecordingUIController_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__RecordingUIController__InitData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__RecordingUIController__InitData::*)(bool)>(
    &::GlobalNamespace::__RecordingUIController__InitData::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x23c2334;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RecordingUIController__InitData*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::__RecordingUIController__InitData::__get_recordingEnabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___recordingEnabled;
}
constexpr bool const& GlobalNamespace::__RecordingUIController__InitData::__get_recordingEnabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___recordingEnabled;
}
constexpr void GlobalNamespace::__RecordingUIController__InitData::__set_recordingEnabled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___recordingEnabled = value;
}
inline ::GlobalNamespace::__RecordingUIController__InitData* GlobalNamespace::__RecordingUIController__InitData::New_ctor(bool recordingEnabled) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__RecordingUIController__InitData*>(recordingEnabled));
}
inline void GlobalNamespace::__RecordingUIController__InitData::_ctor(bool recordingEnabled) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RecordingUIController__InitData*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, recordingEnabled);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__RecordingUIController__InitData::__RecordingUIController__InitData() {}
//  Writing Method size for method: ::GlobalNamespace::RecordingUIController.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RecordingUIController::*)()>(&::GlobalNamespace::RecordingUIController::Init)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x23c2238;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingUIController*>::get(), "Init",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RecordingUIController.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RecordingUIController::*)()>(&::GlobalNamespace::RecordingUIController::Update)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x23c22b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingUIController*>::get(), "Update",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RecordingUIController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RecordingUIController::*)()>(&::GlobalNamespace::RecordingUIController::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x23c2324;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingUIController*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::GameObject*& GlobalNamespace::RecordingUIController::__get__circle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____circle;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& GlobalNamespace::RecordingUIController::__get__circle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____circle;
}
constexpr void GlobalNamespace::RecordingUIController::__set__circle(::UnityEngine::GameObject* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____circle)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::RecordingUIController::__get__updateTimeSpan() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____updateTimeSpan;
}
constexpr float_t const& GlobalNamespace::RecordingUIController::__get__updateTimeSpan() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____updateTimeSpan;
}
constexpr void GlobalNamespace::RecordingUIController::__set__updateTimeSpan(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____updateTimeSpan = value;
}
constexpr ::GlobalNamespace::__RecordingUIController__InitData*& GlobalNamespace::RecordingUIController::__get__initData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____initData;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__RecordingUIController__InitData*> const& GlobalNamespace::RecordingUIController::__get__initData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____initData;
}
constexpr void GlobalNamespace::RecordingUIController::__set__initData(::GlobalNamespace::__RecordingUIController__InitData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____initData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::RecordingUIController::__get__lastUpdateTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____lastUpdateTime;
}
constexpr float_t const& GlobalNamespace::RecordingUIController::__get__lastUpdateTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____lastUpdateTime;
}
constexpr void GlobalNamespace::RecordingUIController::__set__lastUpdateTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____lastUpdateTime = value;
}
inline void GlobalNamespace::RecordingUIController::Init() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingUIController*>::get(), "Init",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::RecordingUIController::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingUIController*>::get(), "Update",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::RecordingUIController* GlobalNamespace::RecordingUIController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::RecordingUIController*>());
}
inline void GlobalNamespace::RecordingUIController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingUIController*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RecordingUIController::RecordingUIController() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
