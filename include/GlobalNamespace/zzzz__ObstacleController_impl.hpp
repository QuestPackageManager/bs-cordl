#pragma once
// IWYU pragma private; include "GlobalNamespace/ObstacleController.hpp"
#include "GlobalNamespace/zzzz__ObstacleControllerBase_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Bounds_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Zenject/zzzz__MonoMemoryPool_1_impl.hpp"
#include "GlobalNamespace/zzzz__ObstacleController_def.hpp"
#include "GlobalNamespace/zzzz__ColorManager_def.hpp"
#include "GlobalNamespace/zzzz__IAudioTimeSource_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapObjectController_def.hpp"
#include "GlobalNamespace/zzzz__ObstacleController_def.hpp"
#include "GlobalNamespace/zzzz__ObstacleData_def.hpp"
#include "GlobalNamespace/zzzz__PlayerTransforms_def.hpp"
#include "GlobalNamespace/zzzz__StretchableObstacle_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__ObstacleController__Pool._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ObstacleController__Pool::*)()>(&::GlobalNamespace::__ObstacleController__Pool::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x263cc08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ObstacleController__Pool*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__ObstacleController__Pool* GlobalNamespace::__ObstacleController__Pool::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__ObstacleController__Pool*>());
}
inline void GlobalNamespace::__ObstacleController__Pool::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ObstacleController__Pool*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__ObstacleController__Pool::__ObstacleController__Pool() {}
//  Writing Method size for method: ::GlobalNamespace::__ObstacleController___DissolveCoroutine_d__65._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ObstacleController___DissolveCoroutine_d__65::*)(int32_t)>(
    &::GlobalNamespace::__ObstacleController___DissolveCoroutine_d__65::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x263cb88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ObstacleController___DissolveCoroutine_d__65*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ObstacleController___DissolveCoroutine_d__65.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ObstacleController___DissolveCoroutine_d__65::*)()>(
    &::GlobalNamespace::__ObstacleController___DissolveCoroutine_d__65::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x263cc50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ObstacleController___DissolveCoroutine_d__65*>::get(),
                                                 "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ObstacleController___DissolveCoroutine_d__65.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__ObstacleController___DissolveCoroutine_d__65::*)()>(
    &::GlobalNamespace::__ObstacleController___DissolveCoroutine_d__65::MoveNext)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x263cc54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ObstacleController___DissolveCoroutine_d__65*>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ObstacleController___DissolveCoroutine_d__65.System_Collections_Generic_IEnumerator_System_Object__get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::__ObstacleController___DissolveCoroutine_d__65::*)()>(
    &::GlobalNamespace::__ObstacleController___DissolveCoroutine_d__65::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x263cd3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ObstacleController___DissolveCoroutine_d__65*>::get(),
                                    "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ObstacleController___DissolveCoroutine_d__65.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ObstacleController___DissolveCoroutine_d__65::*)()>(
    &::GlobalNamespace::__ObstacleController___DissolveCoroutine_d__65::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x263cd44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ObstacleController___DissolveCoroutine_d__65*>::get(),
                                                 "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ObstacleController___DissolveCoroutine_d__65.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::__ObstacleController___DissolveCoroutine_d__65::*)()>(
    &::GlobalNamespace::__ObstacleController___DissolveCoroutine_d__65::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x263cd84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ObstacleController___DissolveCoroutine_d__65*>::get(),
                                                 "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr GlobalNamespace::__ObstacleController___DissolveCoroutine_d__65::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>*
GlobalNamespace::__ObstacleController___DissolveCoroutine_d__65::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr GlobalNamespace::__ObstacleController___DissolveCoroutine_d__65::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::__ObstacleController___DissolveCoroutine_d__65::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::__ObstacleController___DissolveCoroutine_d__65::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::__ObstacleController___DissolveCoroutine_d__65::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr int32_t& GlobalNamespace::__ObstacleController___DissolveCoroutine_d__65::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::__ObstacleController___DissolveCoroutine_d__65::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void GlobalNamespace::__ObstacleController___DissolveCoroutine_d__65::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::__ObstacleController___DissolveCoroutine_d__65::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& GlobalNamespace::__ObstacleController___DissolveCoroutine_d__65::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void GlobalNamespace::__ObstacleController___DissolveCoroutine_d__65::__cordl_internal_set___2__current(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::ObstacleController>& GlobalNamespace::__ObstacleController___DissolveCoroutine_d__65::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::ObstacleController> const& GlobalNamespace::__ObstacleController___DissolveCoroutine_d__65::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::__ObstacleController___DissolveCoroutine_d__65::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::ObstacleController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::__ObstacleController___DissolveCoroutine_d__65::__cordl_internal_get_duration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___duration;
}
constexpr float_t const& GlobalNamespace::__ObstacleController___DissolveCoroutine_d__65::__cordl_internal_get_duration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___duration;
}
constexpr void GlobalNamespace::__ObstacleController___DissolveCoroutine_d__65::__cordl_internal_set_duration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___duration = value;
}
inline ::GlobalNamespace::__ObstacleController___DissolveCoroutine_d__65* GlobalNamespace::__ObstacleController___DissolveCoroutine_d__65::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__ObstacleController___DissolveCoroutine_d__65*>(__1__state));
}
inline void GlobalNamespace::__ObstacleController___DissolveCoroutine_d__65::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ObstacleController___DissolveCoroutine_d__65*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::__ObstacleController___DissolveCoroutine_d__65::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ObstacleController___DissolveCoroutine_d__65*>::get(),
                                               "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::__ObstacleController___DissolveCoroutine_d__65::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ObstacleController___DissolveCoroutine_d__65*>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::__ObstacleController___DissolveCoroutine_d__65::System_Collections_Generic_IEnumerator_System_Object__get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ObstacleController___DissolveCoroutine_d__65*>::get(),
                                  "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline void GlobalNamespace::__ObstacleController___DissolveCoroutine_d__65::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ObstacleController___DissolveCoroutine_d__65*>::get(),
                                               "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::__ObstacleController___DissolveCoroutine_d__65::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ObstacleController___DissolveCoroutine_d__65*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__ObstacleController___DissolveCoroutine_d__65::__ObstacleController___DissolveCoroutine_d__65() {}
//  Writing Method size for method: ::GlobalNamespace::ObstacleController.add_finishedMovementEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ObstacleController::*)(
    ::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>*)>(&::GlobalNamespace::ObstacleController::add_finishedMovementEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x262d08c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObstacleController*>::get(), "add_finishedMovementEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ObstacleController.remove_finishedMovementEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ObstacleController::*)(
    ::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>*)>(&::GlobalNamespace::ObstacleController::remove_finishedMovementEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x262d49c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObstacleController*>::get(), "remove_finishedMovementEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ObstacleController.add_passedThreeQuartersOfMove2Event
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ObstacleController::*)(
    ::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>*)>(&::GlobalNamespace::ObstacleController::add_passedThreeQuartersOfMove2Event)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x262d13c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObstacleController*>::get(), "add_passedThreeQuartersOfMove2Event", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ObstacleController.remove_passedThreeQuartersOfMove2Event
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ObstacleController::*)(
    ::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>*)>(&::GlobalNamespace::ObstacleController::remove_passedThreeQuartersOfMove2Event)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x262d54c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObstacleController*>::get(), "remove_passedThreeQuartersOfMove2Event", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ObstacleController.add_passedAvoidedMarkEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ObstacleController::*)(
    ::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>*)>(&::GlobalNamespace::ObstacleController::add_passedAvoidedMarkEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x262d1ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObstacleController*>::get(), "add_passedAvoidedMarkEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ObstacleController.remove_passedAvoidedMarkEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ObstacleController::*)(
    ::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>*)>(&::GlobalNamespace::ObstacleController::remove_passedAvoidedMarkEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x262d5fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObstacleController*>::get(), "remove_passedAvoidedMarkEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ObstacleController.add_didDissolveEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::ObstacleController::*)(::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>*)>(&::GlobalNamespace::ObstacleController::add_didDissolveEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x262d29c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObstacleController*>::get(), "add_didDissolveEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ObstacleController.remove_didDissolveEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ObstacleController::*)(
    ::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>*)>(&::GlobalNamespace::ObstacleController::remove_didDissolveEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x262d6ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObstacleController*>::get(), "remove_didDissolveEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ObstacleController.add_didUpdateProgress
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ObstacleController::*)(
    ::System::Action_2<::UnityW<::GlobalNamespace::ObstacleController>, float_t>*)>(&::GlobalNamespace::ObstacleController::add_didUpdateProgress)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x263c364;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObstacleController*>::get(), "add_didUpdateProgress", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityW<::GlobalNamespace::ObstacleController>, float_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ObstacleController.remove_didUpdateProgress
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ObstacleController::*)(
    ::System::Action_2<::UnityW<::GlobalNamespace::ObstacleController>, float_t>*)>(&::GlobalNamespace::ObstacleController::remove_didUpdateProgress)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x263c414;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObstacleController*>::get(), "remove_didUpdateProgress", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityW<::GlobalNamespace::ObstacleController>, float_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ObstacleController.get_bounds
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Bounds (::GlobalNamespace::ObstacleController::*)()>(
    &::GlobalNamespace::ObstacleController::get_bounds)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x263c4c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObstacleController*>::get(), "get_bounds",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ObstacleController.get_obstacleData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::ObstacleData* (::GlobalNamespace::ObstacleController::*)()>(
    &::GlobalNamespace::ObstacleController::get_obstacleData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x263c4d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObstacleController*>::get(),
                                                                               "get_obstacleData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ObstacleController.get_hasPassedAvoidedMark
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::ObstacleController::*)()>(
    &::GlobalNamespace::ObstacleController::get_hasPassedAvoidedMark)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x263c4e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObstacleController*>::get(),
                                                                               "get_hasPassedAvoidedMark", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ObstacleController.get_move1Duration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::ObstacleController::*)()>(&::GlobalNamespace::ObstacleController::get_move1Duration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x263c4e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObstacleController*>::get(),
                                                                               "get_move1Duration", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ObstacleController.get_move2Duration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::ObstacleController::*)()>(&::GlobalNamespace::ObstacleController::get_move2Duration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x263c4f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObstacleController*>::get(),
                                                                               "get_move2Duration", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ObstacleController.get_width
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::ObstacleController::*)()>(&::GlobalNamespace::ObstacleController::get_width)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x263c4f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObstacleController*>::get(), "get_width",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ObstacleController.get_height
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::ObstacleController::*)()>(&::GlobalNamespace::ObstacleController::get_height)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x263c500;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObstacleController*>::get(), "get_height",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ObstacleController.get_length
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::ObstacleController::*)()>(&::GlobalNamespace::ObstacleController::get_length)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x263c508;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObstacleController*>::get(), "get_length",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ObstacleController.get_color
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (::GlobalNamespace::ObstacleController::*)()>(
    &::GlobalNamespace::ObstacleController::get_color)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x263c510;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObstacleController*>::get(), "get_color",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ObstacleController.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ObstacleController::*)(
    ::GlobalNamespace::ObstacleData*, float_t, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, float_t, float_t, float_t)>(
    &::GlobalNamespace::ObstacleController::Init)> {
  constexpr static std::size_t size = 0x2d8;
  constexpr static std::size_t addrs = 0x263c51c;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObstacleController*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObstacleController*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ObstacleController.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ObstacleController::*)()>(&::GlobalNamespace::ObstacleController::Update)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x263c7f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObstacleController*>::get(), "Update",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ObstacleController.ManualUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ObstacleController::*)()>(&::GlobalNamespace::ObstacleController::ManualUpdate)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x263c800;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObstacleController*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObstacleController*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ObstacleController.GetPosForTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::ObstacleController::*)(float_t)>(
    &::GlobalNamespace::ObstacleController::GetPosForTime)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x263c9ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObstacleController*>::get(), "GetPosForTime", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ObstacleController.DissolveCoroutine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::ObstacleController::*)(float_t)>(
    &::GlobalNamespace::ObstacleController::DissolveCoroutine)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x263cb10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObstacleController*>::get(), "DissolveCoroutine",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ObstacleController.Dissolve
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ObstacleController::*)(float_t)>(&::GlobalNamespace::ObstacleController::Dissolve)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x263cbb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObstacleController*>::get(), "Dissolve", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ObstacleController.Hide
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ObstacleController::*)(bool)>(&::GlobalNamespace::ObstacleController::Hide)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x262c420;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObstacleController*>::get(), "Hide",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ObstacleController.Pause
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ObstacleController::*)(bool)>(&::GlobalNamespace::ObstacleController::Pause)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x263cbe8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObstacleController*>::get(), "Pause",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ObstacleController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ObstacleController::*)()>(&::GlobalNamespace::ObstacleController::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x263cbf8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObstacleController*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::IBeatmapObjectController"
constexpr GlobalNamespace::ObstacleController::operator ::GlobalNamespace::IBeatmapObjectController*() noexcept {
  return static_cast<::GlobalNamespace::IBeatmapObjectController*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IBeatmapObjectController"
constexpr ::GlobalNamespace::IBeatmapObjectController* GlobalNamespace::ObstacleController::i___GlobalNamespace__IBeatmapObjectController() noexcept {
  return static_cast<::GlobalNamespace::IBeatmapObjectController*>(static_cast<void*>(this));
}
constexpr ::UnityW<::GlobalNamespace::StretchableObstacle>& GlobalNamespace::ObstacleController::__cordl_internal_get__stretchableObstacle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stretchableObstacle;
}
constexpr ::UnityW<::GlobalNamespace::StretchableObstacle> const& GlobalNamespace::ObstacleController::__cordl_internal_get__stretchableObstacle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stretchableObstacle;
}
constexpr void GlobalNamespace::ObstacleController::__cordl_internal_set__stretchableObstacle(::UnityW<::GlobalNamespace::StretchableObstacle> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____stretchableObstacle)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::ObstacleController::__cordl_internal_get__endDistanceOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____endDistanceOffset;
}
constexpr float_t const& GlobalNamespace::ObstacleController::__cordl_internal_get__endDistanceOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____endDistanceOffset;
}
constexpr void GlobalNamespace::ObstacleController::__cordl_internal_set__endDistanceOffset(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____endDistanceOffset = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*>& GlobalNamespace::ObstacleController::__cordl_internal_get__visualWrappers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____visualWrappers;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> const& GlobalNamespace::ObstacleController::__cordl_internal_get__visualWrappers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____visualWrappers;
}
constexpr void GlobalNamespace::ObstacleController::__cordl_internal_set__visualWrappers(::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____visualWrappers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::PlayerTransforms>& GlobalNamespace::ObstacleController::__cordl_internal_get__playerTransforms() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerTransforms;
}
constexpr ::UnityW<::GlobalNamespace::PlayerTransforms> const& GlobalNamespace::ObstacleController::__cordl_internal_get__playerTransforms() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerTransforms;
}
constexpr void GlobalNamespace::ObstacleController::__cordl_internal_set__playerTransforms(::UnityW<::GlobalNamespace::PlayerTransforms> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____playerTransforms)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IAudioTimeSource*& GlobalNamespace::ObstacleController::__cordl_internal_get__audioTimeSyncController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioTimeSyncController;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAudioTimeSource*> const& GlobalNamespace::ObstacleController::__cordl_internal_get__audioTimeSyncController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioTimeSyncController;
}
constexpr void GlobalNamespace::ObstacleController::__cordl_internal_set__audioTimeSyncController(::GlobalNamespace::IAudioTimeSource* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____audioTimeSyncController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::ColorManager*& GlobalNamespace::ObstacleController::__cordl_internal_get__colorManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorManager;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorManager*> const& GlobalNamespace::ObstacleController::__cordl_internal_get__colorManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorManager;
}
constexpr void GlobalNamespace::ObstacleController::__cordl_internal_set__colorManager(::GlobalNamespace::ColorManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____colorManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>*& GlobalNamespace::ObstacleController::__cordl_internal_get_finishedMovementEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___finishedMovementEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>*> const&
GlobalNamespace::ObstacleController::__cordl_internal_get_finishedMovementEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___finishedMovementEvent;
}
constexpr void GlobalNamespace::ObstacleController::__cordl_internal_set_finishedMovementEvent(::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___finishedMovementEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>*& GlobalNamespace::ObstacleController::__cordl_internal_get_passedThreeQuartersOfMove2Event() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___passedThreeQuartersOfMove2Event;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>*> const&
GlobalNamespace::ObstacleController::__cordl_internal_get_passedThreeQuartersOfMove2Event() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___passedThreeQuartersOfMove2Event;
}
constexpr void GlobalNamespace::ObstacleController::__cordl_internal_set_passedThreeQuartersOfMove2Event(::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___passedThreeQuartersOfMove2Event)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>*& GlobalNamespace::ObstacleController::__cordl_internal_get_passedAvoidedMarkEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___passedAvoidedMarkEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>*> const&
GlobalNamespace::ObstacleController::__cordl_internal_get_passedAvoidedMarkEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___passedAvoidedMarkEvent;
}
constexpr void GlobalNamespace::ObstacleController::__cordl_internal_set_passedAvoidedMarkEvent(::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___passedAvoidedMarkEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>*& GlobalNamespace::ObstacleController::__cordl_internal_get_didDissolveEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didDissolveEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>*> const&
GlobalNamespace::ObstacleController::__cordl_internal_get_didDissolveEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didDissolveEvent;
}
constexpr void GlobalNamespace::ObstacleController::__cordl_internal_set_didDissolveEvent(::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___didDissolveEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_2<::UnityW<::GlobalNamespace::ObstacleController>, float_t>*& GlobalNamespace::ObstacleController::__cordl_internal_get_didUpdateProgress() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didUpdateProgress;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::UnityW<::GlobalNamespace::ObstacleController>, float_t>*> const&
GlobalNamespace::ObstacleController::__cordl_internal_get_didUpdateProgress() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didUpdateProgress;
}
constexpr void GlobalNamespace::ObstacleController::__cordl_internal_set_didUpdateProgress(::System::Action_2<::UnityW<::GlobalNamespace::ObstacleController>, float_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___didUpdateProgress)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::ObstacleController::__cordl_internal_get__width() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____width;
}
constexpr float_t const& GlobalNamespace::ObstacleController::__cordl_internal_get__width() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____width;
}
constexpr void GlobalNamespace::ObstacleController::__cordl_internal_set__width(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____width = value;
}
constexpr float_t& GlobalNamespace::ObstacleController::__cordl_internal_get__height() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____height;
}
constexpr float_t const& GlobalNamespace::ObstacleController::__cordl_internal_get__height() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____height;
}
constexpr void GlobalNamespace::ObstacleController::__cordl_internal_set__height(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____height = value;
}
constexpr float_t& GlobalNamespace::ObstacleController::__cordl_internal_get__length() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____length;
}
constexpr float_t const& GlobalNamespace::ObstacleController::__cordl_internal_get__length() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____length;
}
constexpr void GlobalNamespace::ObstacleController::__cordl_internal_set__length(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____length = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::ObstacleController::__cordl_internal_get__startPos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startPos;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::ObstacleController::__cordl_internal_get__startPos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startPos;
}
constexpr void GlobalNamespace::ObstacleController::__cordl_internal_set__startPos(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____startPos = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::ObstacleController::__cordl_internal_get__midPos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____midPos;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::ObstacleController::__cordl_internal_get__midPos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____midPos;
}
constexpr void GlobalNamespace::ObstacleController::__cordl_internal_set__midPos(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____midPos = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::ObstacleController::__cordl_internal_get__endPos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____endPos;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::ObstacleController::__cordl_internal_get__endPos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____endPos;
}
constexpr void GlobalNamespace::ObstacleController::__cordl_internal_set__endPos(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____endPos = value;
}
constexpr float_t& GlobalNamespace::ObstacleController::__cordl_internal_get__move1Duration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____move1Duration;
}
constexpr float_t const& GlobalNamespace::ObstacleController::__cordl_internal_get__move1Duration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____move1Duration;
}
constexpr void GlobalNamespace::ObstacleController::__cordl_internal_set__move1Duration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____move1Duration = value;
}
constexpr float_t& GlobalNamespace::ObstacleController::__cordl_internal_get__move2Duration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____move2Duration;
}
constexpr float_t const& GlobalNamespace::ObstacleController::__cordl_internal_get__move2Duration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____move2Duration;
}
constexpr void GlobalNamespace::ObstacleController::__cordl_internal_set__move2Duration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____move2Duration = value;
}
constexpr float_t& GlobalNamespace::ObstacleController::__cordl_internal_get__startTimeOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startTimeOffset;
}
constexpr float_t const& GlobalNamespace::ObstacleController::__cordl_internal_get__startTimeOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startTimeOffset;
}
constexpr void GlobalNamespace::ObstacleController::__cordl_internal_set__startTimeOffset(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____startTimeOffset = value;
}
constexpr float_t& GlobalNamespace::ObstacleController::__cordl_internal_get__obstacleDuration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____obstacleDuration;
}
constexpr float_t const& GlobalNamespace::ObstacleController::__cordl_internal_get__obstacleDuration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____obstacleDuration;
}
constexpr void GlobalNamespace::ObstacleController::__cordl_internal_set__obstacleDuration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____obstacleDuration = value;
}
constexpr bool& GlobalNamespace::ObstacleController::__cordl_internal_get__passedThreeQuartersOfMove2Reported() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____passedThreeQuartersOfMove2Reported;
}
constexpr bool const& GlobalNamespace::ObstacleController::__cordl_internal_get__passedThreeQuartersOfMove2Reported() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____passedThreeQuartersOfMove2Reported;
}
constexpr void GlobalNamespace::ObstacleController::__cordl_internal_set__passedThreeQuartersOfMove2Reported(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____passedThreeQuartersOfMove2Reported = value;
}
constexpr bool& GlobalNamespace::ObstacleController::__cordl_internal_get__passedAvoidedMarkReported() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____passedAvoidedMarkReported;
}
constexpr bool const& GlobalNamespace::ObstacleController::__cordl_internal_get__passedAvoidedMarkReported() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____passedAvoidedMarkReported;
}
constexpr void GlobalNamespace::ObstacleController::__cordl_internal_set__passedAvoidedMarkReported(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____passedAvoidedMarkReported = value;
}
constexpr float_t& GlobalNamespace::ObstacleController::__cordl_internal_get__passedAvoidedMarkTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____passedAvoidedMarkTime;
}
constexpr float_t const& GlobalNamespace::ObstacleController::__cordl_internal_get__passedAvoidedMarkTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____passedAvoidedMarkTime;
}
constexpr void GlobalNamespace::ObstacleController::__cordl_internal_set__passedAvoidedMarkTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____passedAvoidedMarkTime = value;
}
constexpr float_t& GlobalNamespace::ObstacleController::__cordl_internal_get__finishMovementTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____finishMovementTime;
}
constexpr float_t const& GlobalNamespace::ObstacleController::__cordl_internal_get__finishMovementTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____finishMovementTime;
}
constexpr void GlobalNamespace::ObstacleController::__cordl_internal_set__finishMovementTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____finishMovementTime = value;
}
constexpr ::UnityEngine::Bounds& GlobalNamespace::ObstacleController::__cordl_internal_get__bounds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bounds;
}
constexpr ::UnityEngine::Bounds const& GlobalNamespace::ObstacleController::__cordl_internal_get__bounds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bounds;
}
constexpr void GlobalNamespace::ObstacleController::__cordl_internal_set__bounds(::UnityEngine::Bounds value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bounds = value;
}
constexpr bool& GlobalNamespace::ObstacleController::__cordl_internal_get__dissolving() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dissolving;
}
constexpr bool const& GlobalNamespace::ObstacleController::__cordl_internal_get__dissolving() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dissolving;
}
constexpr void GlobalNamespace::ObstacleController::__cordl_internal_set__dissolving(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____dissolving = value;
}
constexpr ::GlobalNamespace::ObstacleData*& GlobalNamespace::ObstacleController::__cordl_internal_get__obstacleData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____obstacleData;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ObstacleData*> const& GlobalNamespace::ObstacleController::__cordl_internal_get__obstacleData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____obstacleData;
}
constexpr void GlobalNamespace::ObstacleController::__cordl_internal_set__obstacleData(::GlobalNamespace::ObstacleData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____obstacleData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Color& GlobalNamespace::ObstacleController::__cordl_internal_get__color() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____color;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::ObstacleController::__cordl_internal_get__color() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____color;
}
constexpr void GlobalNamespace::ObstacleController::__cordl_internal_set__color(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____color = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::ObstacleController::__cordl_internal_get__worldRotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____worldRotation;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::ObstacleController::__cordl_internal_get__worldRotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____worldRotation;
}
constexpr void GlobalNamespace::ObstacleController::__cordl_internal_set__worldRotation(::UnityEngine::Quaternion value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____worldRotation = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::ObstacleController::__cordl_internal_get__inverseWorldRotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inverseWorldRotation;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::ObstacleController::__cordl_internal_get__inverseWorldRotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inverseWorldRotation;
}
constexpr void GlobalNamespace::ObstacleController::__cordl_internal_set__inverseWorldRotation(::UnityEngine::Quaternion value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____inverseWorldRotation = value;
}
inline void GlobalNamespace::ObstacleController::add_finishedMovementEvent(::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObstacleController*>::get(), "add_finishedMovementEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::ObstacleController::remove_finishedMovementEvent(::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObstacleController*>::get(), "remove_finishedMovementEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::ObstacleController::add_passedThreeQuartersOfMove2Event(::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObstacleController*>::get(), "add_passedThreeQuartersOfMove2Event", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::ObstacleController::remove_passedThreeQuartersOfMove2Event(::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObstacleController*>::get(), "remove_passedThreeQuartersOfMove2Event", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::ObstacleController::add_passedAvoidedMarkEvent(::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObstacleController*>::get(), "add_passedAvoidedMarkEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::ObstacleController::remove_passedAvoidedMarkEvent(::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObstacleController*>::get(), "remove_passedAvoidedMarkEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::ObstacleController::add_didDissolveEvent(::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObstacleController*>::get(), "add_didDissolveEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::ObstacleController::remove_didDissolveEvent(::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObstacleController*>::get(), "remove_didDissolveEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::ObstacleController::add_didUpdateProgress(::System::Action_2<::UnityW<::GlobalNamespace::ObstacleController>, float_t>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObstacleController*>::get(), "add_didUpdateProgress", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityW<::GlobalNamespace::ObstacleController>, float_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::ObstacleController::remove_didUpdateProgress(::System::Action_2<::UnityW<::GlobalNamespace::ObstacleController>, float_t>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObstacleController*>::get(), "remove_didUpdateProgress", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityW<::GlobalNamespace::ObstacleController>, float_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Bounds GlobalNamespace::ObstacleController::get_bounds() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObstacleController*>::get(), "get_bounds",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds, false>(this, ___internal_method);
}
inline ::GlobalNamespace::ObstacleData* GlobalNamespace::ObstacleController::get_obstacleData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObstacleController*>::get(), "get_obstacleData",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ObstacleData*, false>(this, ___internal_method);
}
inline bool GlobalNamespace::ObstacleController::get_hasPassedAvoidedMark() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObstacleController*>::get(),
                                                                             "get_hasPassedAvoidedMark", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::ObstacleController::get_move1Duration() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObstacleController*>::get(), "get_move1Duration",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::ObstacleController::get_move2Duration() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObstacleController*>::get(), "get_move2Duration",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::ObstacleController::get_width() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObstacleController*>::get(), "get_width",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::ObstacleController::get_height() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObstacleController*>::get(), "get_height",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::ObstacleController::get_length() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObstacleController*>::get(), "get_length",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline ::UnityEngine::Color GlobalNamespace::ObstacleController::get_color() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObstacleController*>::get(), "get_color",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(this, ___internal_method);
}
inline void GlobalNamespace::ObstacleController::Init(::GlobalNamespace::ObstacleData* obstacleData, float_t worldRotation, ::UnityEngine::Vector3 startPos, ::UnityEngine::Vector3 midPos,
                                                      ::UnityEngine::Vector3 endPos, float_t move1Duration, float_t move2Duration, float_t singleLineWidth, float_t height) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObstacleController*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, obstacleData, worldRotation, startPos, midPos, endPos, move1Duration, move2Duration, singleLineWidth, height);
}
inline void GlobalNamespace::ObstacleController::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObstacleController*>::get(), "Update",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::ObstacleController::ManualUpdate() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObstacleController*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 GlobalNamespace::ObstacleController::GetPosForTime(float_t time) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObstacleController*>::get(), "GetPosForTime",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method, time);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::ObstacleController::DissolveCoroutine(float_t duration) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObstacleController*>::get(), "DissolveCoroutine",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method, duration);
}
inline void GlobalNamespace::ObstacleController::Dissolve(float_t duration) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObstacleController*>::get(), "Dissolve",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, duration);
}
inline void GlobalNamespace::ObstacleController::Hide(bool hide) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObstacleController*>::get(), "Hide", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, hide);
}
inline void GlobalNamespace::ObstacleController::Pause(bool pause) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObstacleController*>::get(), "Pause", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pause);
}
inline ::GlobalNamespace::ObstacleController* GlobalNamespace::ObstacleController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::ObstacleController*>());
}
inline void GlobalNamespace::ObstacleController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObstacleController*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ObstacleController::ObstacleController() {}
