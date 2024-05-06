#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PlayerHeadAndObstacleInteraction_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectManager_def.hpp"
#include "GlobalNamespace/zzzz__ObstacleController_def.hpp"
#include "GlobalNamespace/zzzz__PlayerTransforms_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PlayerHeadAndObstacleInteraction.add_headDidEnterObstaclesEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerHeadAndObstacleInteraction::*)(::System::Action*)>(
    &::GlobalNamespace::PlayerHeadAndObstacleInteraction::add_headDidEnterObstaclesEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2721e5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerHeadAndObstacleInteraction*>::get(), "add_headDidEnterObstaclesEvent",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerHeadAndObstacleInteraction.remove_headDidEnterObstaclesEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerHeadAndObstacleInteraction::*)(::System::Action*)>(
    &::GlobalNamespace::PlayerHeadAndObstacleInteraction::remove_headDidEnterObstaclesEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2721ef8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerHeadAndObstacleInteraction*>::get(), "remove_headDidEnterObstaclesEvent",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerHeadAndObstacleInteraction.add_headDidEnterObstacleEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerHeadAndObstacleInteraction::*)(
    ::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>*)>(&::GlobalNamespace::PlayerHeadAndObstacleInteraction::add_headDidEnterObstacleEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2721f94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerHeadAndObstacleInteraction*>::get(), "add_headDidEnterObstacleEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerHeadAndObstacleInteraction.remove_headDidEnterObstacleEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerHeadAndObstacleInteraction::*)(
    ::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>*)>(&::GlobalNamespace::PlayerHeadAndObstacleInteraction::remove_headDidEnterObstacleEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2722044;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerHeadAndObstacleInteraction*>::get(), "remove_headDidEnterObstacleEvent",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerHeadAndObstacleInteraction.get_playerHeadIsInObstacle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::PlayerHeadAndObstacleInteraction::*)()>(
    &::GlobalNamespace::PlayerHeadAndObstacleInteraction::get_playerHeadIsInObstacle)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2721568;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerHeadAndObstacleInteraction*>::get(),
                                                                               "get_playerHeadIsInObstacle", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerHeadAndObstacleInteraction.RefreshIntersectingObstacles
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerHeadAndObstacleInteraction::*)(::UnityEngine::Vector3)>(
    &::GlobalNamespace::PlayerHeadAndObstacleInteraction::RefreshIntersectingObstacles)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x27220f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerHeadAndObstacleInteraction*>::get(), "RefreshIntersectingObstacles", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerHeadAndObstacleInteraction.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerHeadAndObstacleInteraction::*)()>(
    &::GlobalNamespace::PlayerHeadAndObstacleInteraction::Update)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x27223f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerHeadAndObstacleInteraction*>::get(),
                                                                               "Update", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerHeadAndObstacleInteraction._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerHeadAndObstacleInteraction::*)()>(
    &::GlobalNamespace::PlayerHeadAndObstacleInteraction::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2722480;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerHeadAndObstacleInteraction*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::PlayerTransforms>& GlobalNamespace::PlayerHeadAndObstacleInteraction::__cordl_internal_get__playerTransforms() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerTransforms;
}
constexpr ::UnityW<::GlobalNamespace::PlayerTransforms> const& GlobalNamespace::PlayerHeadAndObstacleInteraction::__cordl_internal_get__playerTransforms() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerTransforms;
}
constexpr void GlobalNamespace::PlayerHeadAndObstacleInteraction::__cordl_internal_set__playerTransforms(::UnityW<::GlobalNamespace::PlayerTransforms> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____playerTransforms)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapObjectManager*& GlobalNamespace::PlayerHeadAndObstacleInteraction::__cordl_internal_get__beatmapObjectManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapObjectManager;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapObjectManager*> const& GlobalNamespace::PlayerHeadAndObstacleInteraction::__cordl_internal_get__beatmapObjectManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapObjectManager;
}
constexpr void GlobalNamespace::PlayerHeadAndObstacleInteraction::__cordl_internal_set__beatmapObjectManager(::GlobalNamespace::BeatmapObjectManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapObjectManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& GlobalNamespace::PlayerHeadAndObstacleInteraction::__cordl_internal_get_headDidEnterObstaclesEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headDidEnterObstaclesEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& GlobalNamespace::PlayerHeadAndObstacleInteraction::__cordl_internal_get_headDidEnterObstaclesEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headDidEnterObstaclesEvent;
}
constexpr void GlobalNamespace::PlayerHeadAndObstacleInteraction::__cordl_internal_set_headDidEnterObstaclesEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___headDidEnterObstaclesEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>*& GlobalNamespace::PlayerHeadAndObstacleInteraction::__cordl_internal_get_headDidEnterObstacleEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headDidEnterObstacleEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>*> const&
GlobalNamespace::PlayerHeadAndObstacleInteraction::__cordl_internal_get_headDidEnterObstacleEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headDidEnterObstacleEvent;
}
constexpr void GlobalNamespace::PlayerHeadAndObstacleInteraction::__cordl_internal_set_headDidEnterObstacleEvent(::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___headDidEnterObstacleEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::PlayerHeadAndObstacleInteraction::__cordl_internal_get__lastFrameNumCheck() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastFrameNumCheck;
}
constexpr int32_t const& GlobalNamespace::PlayerHeadAndObstacleInteraction::__cordl_internal_get__lastFrameNumCheck() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastFrameNumCheck;
}
constexpr void GlobalNamespace::PlayerHeadAndObstacleInteraction::__cordl_internal_set__lastFrameNumCheck(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lastFrameNumCheck = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::ObstacleController>>*&
GlobalNamespace::PlayerHeadAndObstacleInteraction::__cordl_internal_get__intersectingObstacles() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____intersectingObstacles;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::ObstacleController>>*> const&
GlobalNamespace::PlayerHeadAndObstacleInteraction::__cordl_internal_get__intersectingObstacles() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____intersectingObstacles;
}
constexpr void
GlobalNamespace::PlayerHeadAndObstacleInteraction::__cordl_internal_set__intersectingObstacles(::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::ObstacleController>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____intersectingObstacles)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::PlayerHeadAndObstacleInteraction::__cordl_internal_get__prevFrameNumberOfIntersectingObstaclesCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prevFrameNumberOfIntersectingObstaclesCount;
}
constexpr int32_t const& GlobalNamespace::PlayerHeadAndObstacleInteraction::__cordl_internal_get__prevFrameNumberOfIntersectingObstaclesCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prevFrameNumberOfIntersectingObstaclesCount;
}
constexpr void GlobalNamespace::PlayerHeadAndObstacleInteraction::__cordl_internal_set__prevFrameNumberOfIntersectingObstaclesCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____prevFrameNumberOfIntersectingObstaclesCount = value;
}
inline void GlobalNamespace::PlayerHeadAndObstacleInteraction::add_headDidEnterObstaclesEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerHeadAndObstacleInteraction*>::get(), "add_headDidEnterObstaclesEvent",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::PlayerHeadAndObstacleInteraction::remove_headDidEnterObstaclesEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerHeadAndObstacleInteraction*>::get(), "remove_headDidEnterObstaclesEvent",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::PlayerHeadAndObstacleInteraction::add_headDidEnterObstacleEvent(::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerHeadAndObstacleInteraction*>::get(), "add_headDidEnterObstacleEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::PlayerHeadAndObstacleInteraction::remove_headDidEnterObstacleEvent(::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerHeadAndObstacleInteraction*>::get(), "remove_headDidEnterObstacleEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool GlobalNamespace::PlayerHeadAndObstacleInteraction::get_playerHeadIsInObstacle() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerHeadAndObstacleInteraction*>::get(),
                                                                             "get_playerHeadIsInObstacle", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerHeadAndObstacleInteraction::RefreshIntersectingObstacles(::UnityEngine::Vector3 worldPos) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerHeadAndObstacleInteraction*>::get(), "RefreshIntersectingObstacles", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, worldPos);
}
inline void GlobalNamespace::PlayerHeadAndObstacleInteraction::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerHeadAndObstacleInteraction*>::get(),
                                                                             "Update", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayerHeadAndObstacleInteraction* GlobalNamespace::PlayerHeadAndObstacleInteraction::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::PlayerHeadAndObstacleInteraction*>());
}
inline void GlobalNamespace::PlayerHeadAndObstacleInteraction::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerHeadAndObstacleInteraction*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerHeadAndObstacleInteraction::PlayerHeadAndObstacleInteraction() {}
