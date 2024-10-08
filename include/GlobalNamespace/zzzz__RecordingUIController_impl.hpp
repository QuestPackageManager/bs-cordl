#pragma once
// IWYU pragma private; include "GlobalNamespace/RecordingUIController.hpp"
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
  constexpr static std::size_t addrs = 0x3b2e3cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RecordingUIController__InitData*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::__RecordingUIController__InitData::__cordl_internal_get_recordingEnabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___recordingEnabled;
}
constexpr bool const& GlobalNamespace::__RecordingUIController__InitData::__cordl_internal_get_recordingEnabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___recordingEnabled;
}
constexpr void GlobalNamespace::__RecordingUIController__InitData::__cordl_internal_set_recordingEnabled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___recordingEnabled = value;
}
inline ::GlobalNamespace::__RecordingUIController__InitData* GlobalNamespace::__RecordingUIController__InitData::New_ctor(bool recordingEnabled) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__RecordingUIController__InitData*>(recordingEnabled));
}
inline void GlobalNamespace::__RecordingUIController__InitData::_ctor(bool recordingEnabled) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RecordingUIController__InitData*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, recordingEnabled);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__RecordingUIController__InitData::__RecordingUIController__InitData() {}
//  Writing Method size for method: ::GlobalNamespace::RecordingUIController.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RecordingUIController::*)()>(&::GlobalNamespace::RecordingUIController::Init)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x3b2e2d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingUIController*>::get(), "Init",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RecordingUIController.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RecordingUIController::*)()>(&::GlobalNamespace::RecordingUIController::Update)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x3b2e350;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingUIController*>::get(), "Update",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RecordingUIController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RecordingUIController::*)()>(&::GlobalNamespace::RecordingUIController::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3b2e3bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingUIController*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::RecordingUIController::__cordl_internal_get__circle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____circle;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::RecordingUIController::__cordl_internal_get__circle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____circle;
}
constexpr void GlobalNamespace::RecordingUIController::__cordl_internal_set__circle(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____circle)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::RecordingUIController::__cordl_internal_get__updateTimeSpan() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____updateTimeSpan;
}
constexpr float_t const& GlobalNamespace::RecordingUIController::__cordl_internal_get__updateTimeSpan() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____updateTimeSpan;
}
constexpr void GlobalNamespace::RecordingUIController::__cordl_internal_set__updateTimeSpan(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____updateTimeSpan = value;
}
constexpr ::GlobalNamespace::__RecordingUIController__InitData*& GlobalNamespace::RecordingUIController::__cordl_internal_get__initData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initData;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__RecordingUIController__InitData*> const& GlobalNamespace::RecordingUIController::__cordl_internal_get__initData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initData;
}
constexpr void GlobalNamespace::RecordingUIController::__cordl_internal_set__initData(::GlobalNamespace::__RecordingUIController__InitData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____initData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::RecordingUIController::__cordl_internal_get__lastUpdateTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastUpdateTime;
}
constexpr float_t const& GlobalNamespace::RecordingUIController::__cordl_internal_get__lastUpdateTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastUpdateTime;
}
constexpr void GlobalNamespace::RecordingUIController::__cordl_internal_set__lastUpdateTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lastUpdateTime = value;
}
inline void GlobalNamespace::RecordingUIController::Init() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingUIController*>::get(), "Init",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::RecordingUIController::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingUIController*>::get(), "Update",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::RecordingUIController* GlobalNamespace::RecordingUIController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::RecordingUIController*>());
}
inline void GlobalNamespace::RecordingUIController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingUIController*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RecordingUIController::RecordingUIController() {}
