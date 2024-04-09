#pragma once
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Zenject/zzzz__MonoMemoryPool_1_impl.hpp"
#include "GlobalNamespace/zzzz__NoteLineConnectionController_def.hpp"
#include "GlobalNamespace/zzzz__AudioTimeSyncController_def.hpp"
#include "GlobalNamespace/zzzz__ColorManager_def.hpp"
#include "GlobalNamespace/zzzz__NoteController_def.hpp"
#include "GlobalNamespace/zzzz__NoteLineConnectionController_def.hpp"
#include "GlobalNamespace/zzzz__PlayerTransforms_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/zzzz__LineRenderer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__NoteLineConnectionController__Pool._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__NoteLineConnectionController__Pool::*)()>(
    &::GlobalNamespace::__NoteLineConnectionController__Pool::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x25238fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__NoteLineConnectionController__Pool*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__NoteLineConnectionController__Pool* GlobalNamespace::__NoteLineConnectionController__Pool::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__NoteLineConnectionController__Pool*>());
}
inline void GlobalNamespace::__NoteLineConnectionController__Pool::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__NoteLineConnectionController__Pool*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__NoteLineConnectionController__Pool::__NoteLineConnectionController__Pool() {}
//  Writing Method size for method: ::GlobalNamespace::NoteLineConnectionController.add_didFinishEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NoteLineConnectionController::*)(
    ::System::Action_1<::UnityW<::GlobalNamespace::NoteLineConnectionController>>*)>(&::GlobalNamespace::NoteLineConnectionController::add_didFinishEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x25234d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteLineConnectionController*>::get(), "add_didFinishEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::GlobalNamespace::NoteLineConnectionController>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteLineConnectionController.remove_didFinishEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NoteLineConnectionController::*)(
    ::System::Action_1<::UnityW<::GlobalNamespace::NoteLineConnectionController>>*)>(&::GlobalNamespace::NoteLineConnectionController::remove_didFinishEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2523580;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteLineConnectionController*>::get(), "remove_didFinishEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::GlobalNamespace::NoteLineConnectionController>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteLineConnectionController.Setup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NoteLineConnectionController::*)(
    ::GlobalNamespace::NoteController*, ::GlobalNamespace::NoteController*, float_t, float_t, float_t)>(&::GlobalNamespace::NoteLineConnectionController::Setup)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2523630;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteLineConnectionController*>::get(), "Setup", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteController*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteController*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteLineConnectionController.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NoteLineConnectionController::*)()>(
    &::GlobalNamespace::NoteLineConnectionController::Update)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2523890;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteLineConnectionController*>::get(),
                                                                               "Update", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteLineConnectionController.UpdatePositionsAndColors
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NoteLineConnectionController::*)()>(
    &::GlobalNamespace::NoteLineConnectionController::UpdatePositionsAndColors)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x25236d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteLineConnectionController*>::get(),
                                                                               "UpdatePositionsAndColors", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteLineConnectionController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NoteLineConnectionController::*)()>(
    &::GlobalNamespace::NoteLineConnectionController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25238f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteLineConnectionController*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::LineRenderer>& GlobalNamespace::NoteLineConnectionController::__cordl_internal_get__lineRenderer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lineRenderer;
}
constexpr ::UnityW<::UnityEngine::LineRenderer> const& GlobalNamespace::NoteLineConnectionController::__cordl_internal_get__lineRenderer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lineRenderer;
}
constexpr void GlobalNamespace::NoteLineConnectionController::__cordl_internal_set__lineRenderer(::UnityW<::UnityEngine::LineRenderer> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____lineRenderer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::PlayerTransforms>& GlobalNamespace::NoteLineConnectionController::__cordl_internal_get__playerTransforms() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerTransforms;
}
constexpr ::UnityW<::GlobalNamespace::PlayerTransforms> const& GlobalNamespace::NoteLineConnectionController::__cordl_internal_get__playerTransforms() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerTransforms;
}
constexpr void GlobalNamespace::NoteLineConnectionController::__cordl_internal_set__playerTransforms(::UnityW<::GlobalNamespace::PlayerTransforms> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____playerTransforms)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::AudioTimeSyncController>& GlobalNamespace::NoteLineConnectionController::__cordl_internal_get__audioTimeSyncController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioTimeSyncController;
}
constexpr ::UnityW<::GlobalNamespace::AudioTimeSyncController> const& GlobalNamespace::NoteLineConnectionController::__cordl_internal_get__audioTimeSyncController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioTimeSyncController;
}
constexpr void GlobalNamespace::NoteLineConnectionController::__cordl_internal_set__audioTimeSyncController(::UnityW<::GlobalNamespace::AudioTimeSyncController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____audioTimeSyncController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::ColorManager*& GlobalNamespace::NoteLineConnectionController::__cordl_internal_get__colorManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorManager;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorManager*> const& GlobalNamespace::NoteLineConnectionController::__cordl_internal_get__colorManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorManager;
}
constexpr void GlobalNamespace::NoteLineConnectionController::__cordl_internal_set__colorManager(::GlobalNamespace::ColorManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____colorManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::UnityW<::GlobalNamespace::NoteLineConnectionController>>*& GlobalNamespace::NoteLineConnectionController::__cordl_internal_get_didFinishEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didFinishEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityW<::GlobalNamespace::NoteLineConnectionController>>*> const&
GlobalNamespace::NoteLineConnectionController::__cordl_internal_get_didFinishEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didFinishEvent;
}
constexpr void GlobalNamespace::NoteLineConnectionController::__cordl_internal_set_didFinishEvent(::System::Action_1<::UnityW<::GlobalNamespace::NoteLineConnectionController>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___didFinishEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::NoteController>& GlobalNamespace::NoteLineConnectionController::__cordl_internal_get__noteController0() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteController0;
}
constexpr ::UnityW<::GlobalNamespace::NoteController> const& GlobalNamespace::NoteLineConnectionController::__cordl_internal_get__noteController0() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteController0;
}
constexpr void GlobalNamespace::NoteLineConnectionController::__cordl_internal_set__noteController0(::UnityW<::GlobalNamespace::NoteController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____noteController0)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::NoteController>& GlobalNamespace::NoteLineConnectionController::__cordl_internal_get__noteController1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteController1;
}
constexpr ::UnityW<::GlobalNamespace::NoteController> const& GlobalNamespace::NoteLineConnectionController::__cordl_internal_get__noteController1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteController1;
}
constexpr void GlobalNamespace::NoteLineConnectionController::__cordl_internal_set__noteController1(::UnityW<::GlobalNamespace::NoteController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____noteController1)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Color& GlobalNamespace::NoteLineConnectionController::__cordl_internal_get__color0() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____color0;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::NoteLineConnectionController::__cordl_internal_get__color0() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____color0;
}
constexpr void GlobalNamespace::NoteLineConnectionController::__cordl_internal_set__color0(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____color0 = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::NoteLineConnectionController::__cordl_internal_get__color1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____color1;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::NoteLineConnectionController::__cordl_internal_get__color1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____color1;
}
constexpr void GlobalNamespace::NoteLineConnectionController::__cordl_internal_set__color1(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____color1 = value;
}
constexpr float_t& GlobalNamespace::NoteLineConnectionController::__cordl_internal_get__fadeOutStartDistance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fadeOutStartDistance;
}
constexpr float_t const& GlobalNamespace::NoteLineConnectionController::__cordl_internal_get__fadeOutStartDistance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fadeOutStartDistance;
}
constexpr void GlobalNamespace::NoteLineConnectionController::__cordl_internal_set__fadeOutStartDistance(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fadeOutStartDistance = value;
}
constexpr float_t& GlobalNamespace::NoteLineConnectionController::__cordl_internal_get__fadeOutEndDistance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fadeOutEndDistance;
}
constexpr float_t const& GlobalNamespace::NoteLineConnectionController::__cordl_internal_get__fadeOutEndDistance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fadeOutEndDistance;
}
constexpr void GlobalNamespace::NoteLineConnectionController::__cordl_internal_set__fadeOutEndDistance(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fadeOutEndDistance = value;
}
constexpr float_t& GlobalNamespace::NoteLineConnectionController::__cordl_internal_get__noteTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteTime;
}
constexpr float_t const& GlobalNamespace::NoteLineConnectionController::__cordl_internal_get__noteTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteTime;
}
constexpr void GlobalNamespace::NoteLineConnectionController::__cordl_internal_set__noteTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____noteTime = value;
}
constexpr bool& GlobalNamespace::NoteLineConnectionController::__cordl_internal_get__didFinish() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____didFinish;
}
constexpr bool const& GlobalNamespace::NoteLineConnectionController::__cordl_internal_get__didFinish() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____didFinish;
}
constexpr void GlobalNamespace::NoteLineConnectionController::__cordl_internal_set__didFinish(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____didFinish = value;
}
inline void GlobalNamespace::NoteLineConnectionController::add_didFinishEvent(::System::Action_1<::UnityW<::GlobalNamespace::NoteLineConnectionController>>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteLineConnectionController*>::get(), "add_didFinishEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::GlobalNamespace::NoteLineConnectionController>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::NoteLineConnectionController::remove_didFinishEvent(::System::Action_1<::UnityW<::GlobalNamespace::NoteLineConnectionController>>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteLineConnectionController*>::get(), "remove_didFinishEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::GlobalNamespace::NoteLineConnectionController>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::NoteLineConnectionController::Setup(::GlobalNamespace::NoteController* noteController0, ::GlobalNamespace::NoteController* noteController1, float_t fadeOutStartDistance,
                                                                 float_t fadeOutEndDistance, float_t noteTime) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteLineConnectionController*>::get(), "Setup", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteController*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteController*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, noteController0, noteController1, fadeOutStartDistance, fadeOutEndDistance, noteTime);
}
inline void GlobalNamespace::NoteLineConnectionController::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteLineConnectionController*>::get(), "Update",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::NoteLineConnectionController::UpdatePositionsAndColors() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteLineConnectionController*>::get(),
                                                                             "UpdatePositionsAndColors", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::NoteLineConnectionController* GlobalNamespace::NoteLineConnectionController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::NoteLineConnectionController*>());
}
inline void GlobalNamespace::NoteLineConnectionController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteLineConnectionController*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NoteLineConnectionController::NoteLineConnectionController() {}
