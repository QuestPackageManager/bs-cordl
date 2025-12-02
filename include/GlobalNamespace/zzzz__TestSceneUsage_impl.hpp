#pragma once
// IWYU pragma private; include "GlobalNamespace/TestSceneUsage.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Pose_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__TestSceneUsage_def.hpp"
#include "GlobalNamespace/zzzz__OVREyeGaze_def.hpp"
#include "System/zzzz__Tuple_2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TestSceneUsage.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TestSceneUsage::*)()>(&::GlobalNamespace::TestSceneUsage::Start)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x582941c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TestSceneUsage*>::get(), "Start",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TestSceneUsage.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TestSceneUsage::*)()>(&::GlobalNamespace::TestSceneUsage::Update)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x5829470;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TestSceneUsage*>::get(), "Update",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TestSceneUsage.TogglePassthrough
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TestSceneUsage::*)()>(&::GlobalNamespace::TestSceneUsage::TogglePassthrough)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58296bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TestSceneUsage*>::get(), "TogglePassthrough",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TestSceneUsage.TogglePassthroughStatic
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::GlobalNamespace::TestSceneUsage::TogglePassthroughStatic)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x58296c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TestSceneUsage*>::get(),
                                                                               "TogglePassthroughStatic", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TestSceneUsage._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TestSceneUsage::*)()>(&::GlobalNamespace::TestSceneUsage::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5829768;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TestSceneUsage*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::OVREyeGaze>& GlobalNamespace::TestSceneUsage::__cordl_internal_get__eyeGazeComponent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eyeGazeComponent;
}
constexpr ::UnityW<::GlobalNamespace::OVREyeGaze> const& GlobalNamespace::TestSceneUsage::__cordl_internal_get__eyeGazeComponent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eyeGazeComponent;
}
constexpr void GlobalNamespace::TestSceneUsage::__cordl_internal_set__eyeGazeComponent(::UnityW<::GlobalNamespace::OVREyeGaze> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____eyeGazeComponent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Pose& GlobalNamespace::TestSceneUsage::__cordl_internal_get__eyeGazePose() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eyeGazePose;
}
constexpr ::UnityEngine::Pose const& GlobalNamespace::TestSceneUsage::__cordl_internal_get__eyeGazePose() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eyeGazePose;
}
constexpr void GlobalNamespace::TestSceneUsage::__cordl_internal_set__eyeGazePose(::UnityEngine::Pose value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____eyeGazePose = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::TestSceneUsage::__cordl_internal_get__eyeGazePosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eyeGazePosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::TestSceneUsage::__cordl_internal_get__eyeGazePosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eyeGazePosition;
}
constexpr void GlobalNamespace::TestSceneUsage::__cordl_internal_set__eyeGazePosition(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____eyeGazePosition = value;
}
constexpr ::System::Tuple_2<::UnityEngine::Vector3, ::UnityEngine::Vector3>*& GlobalNamespace::TestSceneUsage::__cordl_internal_get__eyeGazeDirection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eyeGazeDirection;
}
constexpr ::System::Tuple_2<::UnityEngine::Vector3, ::UnityEngine::Vector3>* const& GlobalNamespace::TestSceneUsage::__cordl_internal_get__eyeGazeDirection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eyeGazeDirection;
}
constexpr void GlobalNamespace::TestSceneUsage::__cordl_internal_set__eyeGazeDirection(::System::Tuple_2<::UnityEngine::Vector3, ::UnityEngine::Vector3>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____eyeGazeDirection)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::TestSceneUsage::__cordl_internal_get__confidence() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____confidence;
}
constexpr float_t const& GlobalNamespace::TestSceneUsage::__cordl_internal_get__confidence() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____confidence;
}
constexpr void GlobalNamespace::TestSceneUsage::__cordl_internal_set__confidence(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____confidence = value;
}
constexpr float_t& GlobalNamespace::TestSceneUsage::__cordl_internal_get_drawingLineWidth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___drawingLineWidth;
}
constexpr float_t const& GlobalNamespace::TestSceneUsage::__cordl_internal_get_drawingLineWidth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___drawingLineWidth;
}
constexpr void GlobalNamespace::TestSceneUsage::__cordl_internal_set_drawingLineWidth(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___drawingLineWidth = value;
}
constexpr bool& GlobalNamespace::TestSceneUsage::__cordl_internal_get_passthroughEnabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___passthroughEnabled;
}
constexpr bool const& GlobalNamespace::TestSceneUsage::__cordl_internal_get_passthroughEnabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___passthroughEnabled;
}
constexpr void GlobalNamespace::TestSceneUsage::__cordl_internal_set_passthroughEnabled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___passthroughEnabled = value;
}
constexpr bool& GlobalNamespace::TestSceneUsage::__cordl_internal_get_previousPassthroughEnabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___previousPassthroughEnabled;
}
constexpr bool const& GlobalNamespace::TestSceneUsage::__cordl_internal_get_previousPassthroughEnabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___previousPassthroughEnabled;
}
constexpr void GlobalNamespace::TestSceneUsage::__cordl_internal_set_previousPassthroughEnabled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___previousPassthroughEnabled = value;
}
inline void GlobalNamespace::TestSceneUsage::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TestSceneUsage*>::get(), "Start",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::TestSceneUsage::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TestSceneUsage*>::get(), "Update",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::TestSceneUsage::TogglePassthrough() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TestSceneUsage*>::get(), "TogglePassthrough",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::TestSceneUsage::TogglePassthroughStatic() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TestSceneUsage*>::get(),
                                                                             "TogglePassthroughStatic", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::TestSceneUsage::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TestSceneUsage*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::TestSceneUsage* GlobalNamespace::TestSceneUsage::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::TestSceneUsage*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TestSceneUsage::TestSceneUsage() {}
