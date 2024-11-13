#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapCallbacksController.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapCallbacksController_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCallbacksController_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataCallbackWrapper_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataCallback_1_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataItem_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventData_def.hpp"
#include "GlobalNamespace/zzzz__CallbacksInTime_def.hpp"
#include "GlobalNamespace/zzzz__IReadonlyBeatmapData_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__LinkedListNode_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__BeatmapCallbacksController__InitData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapCallbacksController__InitData::*)(
    ::GlobalNamespace::IReadonlyBeatmapData*, float_t, bool)>(&::GlobalNamespace::__BeatmapCallbacksController__InitData::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x3a8356c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapCallbacksController__InitData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IReadonlyBeatmapData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::IReadonlyBeatmapData*& GlobalNamespace::__BeatmapCallbacksController__InitData::__cordl_internal_get_beatmapData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapData;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IReadonlyBeatmapData*> const& GlobalNamespace::__BeatmapCallbacksController__InitData::__cordl_internal_get_beatmapData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapData;
}
constexpr void GlobalNamespace::__BeatmapCallbacksController__InitData::__cordl_internal_set_beatmapData(::GlobalNamespace::IReadonlyBeatmapData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___beatmapData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::__BeatmapCallbacksController__InitData::__cordl_internal_get_startFilterTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___startFilterTime;
}
constexpr float_t const& GlobalNamespace::__BeatmapCallbacksController__InitData::__cordl_internal_get_startFilterTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___startFilterTime;
}
constexpr void GlobalNamespace::__BeatmapCallbacksController__InitData::__cordl_internal_set_startFilterTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___startFilterTime = value;
}
constexpr bool& GlobalNamespace::__BeatmapCallbacksController__InitData::__cordl_internal_get_shouldKeepReplayState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shouldKeepReplayState;
}
constexpr bool const& GlobalNamespace::__BeatmapCallbacksController__InitData::__cordl_internal_get_shouldKeepReplayState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shouldKeepReplayState;
}
constexpr void GlobalNamespace::__BeatmapCallbacksController__InitData::__cordl_internal_set_shouldKeepReplayState(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___shouldKeepReplayState = value;
}
inline ::GlobalNamespace::__BeatmapCallbacksController__InitData* GlobalNamespace::__BeatmapCallbacksController__InitData::New_ctor(::GlobalNamespace::IReadonlyBeatmapData* beatmapData,
                                                                                                                                    float_t startFilterTime, bool shouldKeepReplayState) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__BeatmapCallbacksController__InitData*>(beatmapData, startFilterTime, shouldKeepReplayState));
}
inline void GlobalNamespace::__BeatmapCallbacksController__InitData::_ctor(::GlobalNamespace::IReadonlyBeatmapData* beatmapData, float_t startFilterTime, bool shouldKeepReplayState) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapCallbacksController__InitData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IReadonlyBeatmapData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, beatmapData, startFilterTime, shouldKeepReplayState);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__BeatmapCallbacksController__InitData::__BeatmapCallbacksController__InitData() {}
//  Writing Method size for method: ::GlobalNamespace::__BeatmapCallbacksController__ICallCallbacksBehavior.CallCallbacks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapCallbacksController__ICallCallbacksBehavior::*)(
    ::GlobalNamespace::CallbacksInTime*, ::GlobalNamespace::BeatmapDataItem*)>(&::GlobalNamespace::__BeatmapCallbacksController__ICallCallbacksBehavior::CallCallbacks)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapCallbacksController__ICallCallbacksBehavior*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapCallbacksController__ICallCallbacksBehavior*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapCallbacksController__ICallCallbacksBehavior.Replay
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapCallbacksController__ICallCallbacksBehavior::*)(
    ::System::Collections::Generic::Dictionary_2<float_t, ::GlobalNamespace::CallbacksInTime*>*)>(&::GlobalNamespace::__BeatmapCallbacksController__ICallCallbacksBehavior::Replay)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapCallbacksController__ICallCallbacksBehavior*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapCallbacksController__ICallCallbacksBehavior*>::get(), 1));
    return ___internal_method;
  }
};
inline void GlobalNamespace::__BeatmapCallbacksController__ICallCallbacksBehavior::CallCallbacks(::GlobalNamespace::CallbacksInTime* callbacksInTime,
                                                                                                 ::GlobalNamespace::BeatmapDataItem* beatmapDataItem) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapCallbacksController__ICallCallbacksBehavior*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, callbacksInTime, beatmapDataItem);
}
inline void
GlobalNamespace::__BeatmapCallbacksController__ICallCallbacksBehavior::Replay(::System::Collections::Generic::Dictionary_2<float_t, ::GlobalNamespace::CallbacksInTime*>* callbacksInTimes) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapCallbacksController__ICallCallbacksBehavior*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, callbacksInTimes);
}
//  Writing Method size for method: ::GlobalNamespace::__BeatmapCallbacksController__CallCallbacksBehavior.CallCallbacks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapCallbacksController__CallCallbacksBehavior::*)(
    ::GlobalNamespace::CallbacksInTime*, ::GlobalNamespace::BeatmapDataItem*)>(&::GlobalNamespace::__BeatmapCallbacksController__CallCallbacksBehavior::CallCallbacks)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3a835ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapCallbacksController__CallCallbacksBehavior*>::get(),
                                                 "CallCallbacks", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::CallbacksInTime*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDataItem*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapCallbacksController__CallCallbacksBehavior.Replay
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapCallbacksController__CallCallbacksBehavior::*)(
    ::System::Collections::Generic::Dictionary_2<float_t, ::GlobalNamespace::CallbacksInTime*>*)>(&::GlobalNamespace::__BeatmapCallbacksController__CallCallbacksBehavior::Replay)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3a835c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapCallbacksController__CallCallbacksBehavior*>::get(), "Replay", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<float_t, ::GlobalNamespace::CallbacksInTime*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapCallbacksController__CallCallbacksBehavior._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapCallbacksController__CallCallbacksBehavior::*)()>(
    &::GlobalNamespace::__BeatmapCallbacksController__CallCallbacksBehavior::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3a81c38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapCallbacksController__CallCallbacksBehavior*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::__BeatmapCallbacksController__ICallCallbacksBehavior"
constexpr GlobalNamespace::__BeatmapCallbacksController__CallCallbacksBehavior::operator ::GlobalNamespace::__BeatmapCallbacksController__ICallCallbacksBehavior*() noexcept {
  return static_cast<::GlobalNamespace::__BeatmapCallbacksController__ICallCallbacksBehavior*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::__BeatmapCallbacksController__ICallCallbacksBehavior"
constexpr ::GlobalNamespace::__BeatmapCallbacksController__ICallCallbacksBehavior*
GlobalNamespace::__BeatmapCallbacksController__CallCallbacksBehavior::i___GlobalNamespace____BeatmapCallbacksController__ICallCallbacksBehavior() noexcept {
  return static_cast<::GlobalNamespace::__BeatmapCallbacksController__ICallCallbacksBehavior*>(static_cast<void*>(this));
}
inline void GlobalNamespace::__BeatmapCallbacksController__CallCallbacksBehavior::CallCallbacks(::GlobalNamespace::CallbacksInTime* callbacksInTime,
                                                                                                ::GlobalNamespace::BeatmapDataItem* beatmapDataItem) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapCallbacksController__CallCallbacksBehavior*>::get(), "CallCallbacks", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::CallbacksInTime*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDataItem*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, callbacksInTime, beatmapDataItem);
}
inline void GlobalNamespace::__BeatmapCallbacksController__CallCallbacksBehavior::Replay(::System::Collections::Generic::Dictionary_2<float_t, ::GlobalNamespace::CallbacksInTime*>* callbacksInTimes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapCallbacksController__CallCallbacksBehavior*>::get(), "Replay", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<float_t, ::GlobalNamespace::CallbacksInTime*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, callbacksInTimes);
}
inline ::GlobalNamespace::__BeatmapCallbacksController__CallCallbacksBehavior* GlobalNamespace::__BeatmapCallbacksController__CallCallbacksBehavior::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__BeatmapCallbacksController__CallCallbacksBehavior*>());
}
inline void GlobalNamespace::__BeatmapCallbacksController__CallCallbacksBehavior::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapCallbacksController__CallCallbacksBehavior*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__BeatmapCallbacksController__CallCallbacksBehavior::__BeatmapCallbacksController__CallCallbacksBehavior() {}
//  Writing Method size for method: ::GlobalNamespace::__BeatmapCallbacksController__CallCallbacksBehaviorWithLastState.CallCallbacks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapCallbacksController__CallCallbacksBehaviorWithLastState::*)(
    ::GlobalNamespace::CallbacksInTime*, ::GlobalNamespace::BeatmapDataItem*)>(&::GlobalNamespace::__BeatmapCallbacksController__CallCallbacksBehaviorWithLastState::CallCallbacks)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x3a835c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapCallbacksController__CallCallbacksBehaviorWithLastState*>::get(),
                                                 "CallCallbacks", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::CallbacksInTime*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDataItem*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapCallbacksController__CallCallbacksBehaviorWithLastState.Replay
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapCallbacksController__CallCallbacksBehaviorWithLastState::*)(
    ::System::Collections::Generic::Dictionary_2<float_t, ::GlobalNamespace::CallbacksInTime*>*)>(&::GlobalNamespace::__BeatmapCallbacksController__CallCallbacksBehaviorWithLastState::Replay)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x3a8368c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapCallbacksController__CallCallbacksBehaviorWithLastState*>::get(), "Replay",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<float_t, ::GlobalNamespace::CallbacksInTime*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapCallbacksController__CallCallbacksBehaviorWithLastState._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapCallbacksController__CallCallbacksBehaviorWithLastState::*)()>(
    &::GlobalNamespace::__BeatmapCallbacksController__CallCallbacksBehaviorWithLastState::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x3a81c40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapCallbacksController__CallCallbacksBehaviorWithLastState*>::get(),
                                                 ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::__BeatmapCallbacksController__ICallCallbacksBehavior"
constexpr GlobalNamespace::__BeatmapCallbacksController__CallCallbacksBehaviorWithLastState::operator ::GlobalNamespace::__BeatmapCallbacksController__ICallCallbacksBehavior*() noexcept {
  return static_cast<::GlobalNamespace::__BeatmapCallbacksController__ICallCallbacksBehavior*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::__BeatmapCallbacksController__ICallCallbacksBehavior"
constexpr ::GlobalNamespace::__BeatmapCallbacksController__ICallCallbacksBehavior*
GlobalNamespace::__BeatmapCallbacksController__CallCallbacksBehaviorWithLastState::i___GlobalNamespace____BeatmapCallbacksController__ICallCallbacksBehavior() noexcept {
  return static_cast<::GlobalNamespace::__BeatmapCallbacksController__ICallCallbacksBehavior*>(static_cast<void*>(this));
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Type*, int32_t>, ::GlobalNamespace::BeatmapDataItem*>*&
GlobalNamespace::__BeatmapCallbacksController__CallCallbacksBehaviorWithLastState::__cordl_internal_get__replayState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____replayState;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Type*, int32_t>, ::GlobalNamespace::BeatmapDataItem*>*> const&
GlobalNamespace::__BeatmapCallbacksController__CallCallbacksBehaviorWithLastState::__cordl_internal_get__replayState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____replayState;
}
constexpr void GlobalNamespace::__BeatmapCallbacksController__CallCallbacksBehaviorWithLastState::__cordl_internal_set__replayState(
    ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Type*, int32_t>, ::GlobalNamespace::BeatmapDataItem*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____replayState)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::__BeatmapCallbacksController__CallCallbacksBehaviorWithLastState::CallCallbacks(::GlobalNamespace::CallbacksInTime* callbacksInTime,
                                                                                                             ::GlobalNamespace::BeatmapDataItem* beatmapDataItem) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapCallbacksController__CallCallbacksBehaviorWithLastState*>::get(),
                                               "CallCallbacks", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::CallbacksInTime*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDataItem*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, callbacksInTime, beatmapDataItem);
}
inline void GlobalNamespace::__BeatmapCallbacksController__CallCallbacksBehaviorWithLastState::Replay(
    ::System::Collections::Generic::Dictionary_2<float_t, ::GlobalNamespace::CallbacksInTime*>* callbacksInTimes) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapCallbacksController__CallCallbacksBehaviorWithLastState*>::get(), "Replay",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<float_t, ::GlobalNamespace::CallbacksInTime*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, callbacksInTimes);
}
inline ::GlobalNamespace::__BeatmapCallbacksController__CallCallbacksBehaviorWithLastState* GlobalNamespace::__BeatmapCallbacksController__CallCallbacksBehaviorWithLastState::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__BeatmapCallbacksController__CallCallbacksBehaviorWithLastState*>());
}
inline void GlobalNamespace::__BeatmapCallbacksController__CallCallbacksBehaviorWithLastState::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapCallbacksController__CallCallbacksBehaviorWithLastState*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__BeatmapCallbacksController__CallCallbacksBehaviorWithLastState::__BeatmapCallbacksController__CallCallbacksBehaviorWithLastState() {}
//  Writing Method size for method: ::GlobalNamespace::BeatmapCallbacksController.get_sendCallbacksOnBeatmapDataChange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::BeatmapCallbacksController::*)()>(
    &::GlobalNamespace::BeatmapCallbacksController::get_sendCallbacksOnBeatmapDataChange)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3a817d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapCallbacksController*>::get(), "get_sendCallbacksOnBeatmapDataChange",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapCallbacksController.set_sendCallbacksOnBeatmapDataChange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapCallbacksController::*)(bool)>(
    &::GlobalNamespace::BeatmapCallbacksController::set_sendCallbacksOnBeatmapDataChange)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3a817e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapCallbacksController*>::get(), "set_sendCallbacksOnBeatmapDataChange",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapCallbacksController.get_songTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::BeatmapCallbacksController::*)()>(
    &::GlobalNamespace::BeatmapCallbacksController::get_songTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3a817ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapCallbacksController*>::get(),
                                                                               "get_songTime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapCallbacksController.add_didProcessAllCallbacksThisFrameEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapCallbacksController::*)(::System::Action*)>(
    &::GlobalNamespace::BeatmapCallbacksController::add_didProcessAllCallbacksThisFrameEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3a817f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapCallbacksController*>::get(), "add_didProcessAllCallbacksThisFrameEvent",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapCallbacksController.remove_didProcessAllCallbacksThisFrameEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapCallbacksController::*)(::System::Action*)>(
    &::GlobalNamespace::BeatmapCallbacksController::remove_didProcessAllCallbacksThisFrameEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3a81890;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapCallbacksController*>::get(), "remove_didProcessAllCallbacksThisFrameEvent",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapCallbacksController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapCallbacksController::*)(::GlobalNamespace::__BeatmapCallbacksController__InitData*)>(
    &::GlobalNamespace::BeatmapCallbacksController::_ctor)> {
  constexpr static std::size_t size = 0x30c;
  constexpr static std::size_t addrs = 0x3a8192c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapCallbacksController*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapCallbacksController__InitData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapCallbacksController.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapCallbacksController::*)()>(&::GlobalNamespace::BeatmapCallbacksController::Dispose)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x3a81cbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapCallbacksController*>::get(), "Dispose",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapCallbacksController.ReplayState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapCallbacksController::*)()>(
    &::GlobalNamespace::BeatmapCallbacksController::ReplayState)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x3a81f10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapCallbacksController*>::get(),
                                                                               "ReplayState", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapCallbacksController.ManualUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapCallbacksController::*)(float_t)>(
    &::GlobalNamespace::BeatmapCallbacksController::ManualUpdate)> {
  constexpr static std::size_t size = 0x5f8;
  constexpr static std::size_t addrs = 0x3a81fbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapCallbacksController*>::get(), "ManualUpdate",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapCallbacksController.RemoveBeatmapCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapCallbacksController::*)(::GlobalNamespace::BeatmapDataCallbackWrapper*)>(
    &::GlobalNamespace::BeatmapCallbacksController::RemoveBeatmapCallback)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x3a825b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapCallbacksController*>::get(), "RemoveBeatmapCallback", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDataCallbackWrapper*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapCallbacksController.TriggerBeatmapEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapCallbacksController::*)(::GlobalNamespace::BeatmapEventData*)>(
    &::GlobalNamespace::BeatmapCallbacksController::TriggerBeatmapEvent)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x3a828ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapCallbacksController*>::get(), "TriggerBeatmapEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapEventData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapCallbacksController.HandleBeatmapEventDataWasInserted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::BeatmapCallbacksController::*)(::GlobalNamespace::BeatmapEventData*, ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*)>(
        &::GlobalNamespace::BeatmapCallbacksController::HandleBeatmapEventDataWasInserted)> {
  constexpr static std::size_t size = 0x5f4;
  constexpr static std::size_t addrs = 0x3a82b18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapCallbacksController*>::get(), "HandleBeatmapEventDataWasInserted", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapEventData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapCallbacksController.HandleBeatmapEventDataWillBeRemoved
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::BeatmapCallbacksController::*)(::GlobalNamespace::BeatmapEventData*, ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*)>(
        &::GlobalNamespace::BeatmapCallbacksController::HandleBeatmapEventDataWillBeRemoved)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x3a8310c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapCallbacksController*>::get(), "HandleBeatmapEventDataWillBeRemoved", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapEventData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapCallbacksController.HandleBeatmapEventDataWasRemoved
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapCallbacksController::*)(::GlobalNamespace::BeatmapEventData*)>(
    &::GlobalNamespace::BeatmapCallbacksController::HandleBeatmapEventDataWasRemoved)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x3a83360;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapCallbacksController*>::get(), "HandleBeatmapEventDataWasRemoved", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapEventData*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::BeatmapCallbacksController::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::BeatmapCallbacksController::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr ::System::Action*& GlobalNamespace::BeatmapCallbacksController::__cordl_internal_get_didProcessAllCallbacksThisFrameEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didProcessAllCallbacksThisFrameEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& GlobalNamespace::BeatmapCallbacksController::__cordl_internal_get_didProcessAllCallbacksThisFrameEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didProcessAllCallbacksThisFrameEvent;
}
constexpr void GlobalNamespace::BeatmapCallbacksController::__cordl_internal_set_didProcessAllCallbacksThisFrameEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___didProcessAllCallbacksThisFrameEvent)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<float_t, ::GlobalNamespace::CallbacksInTime*>*& GlobalNamespace::BeatmapCallbacksController::__cordl_internal_get__callbacksInTimes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____callbacksInTimes;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<float_t, ::GlobalNamespace::CallbacksInTime*>*> const&
GlobalNamespace::BeatmapCallbacksController::__cordl_internal_get__callbacksInTimes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____callbacksInTimes;
}
constexpr void GlobalNamespace::BeatmapCallbacksController::__cordl_internal_set__callbacksInTimes(::System::Collections::Generic::Dictionary_2<float_t, ::GlobalNamespace::CallbacksInTime*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____callbacksInTimes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IReadonlyBeatmapData*& GlobalNamespace::BeatmapCallbacksController::__cordl_internal_get__beatmapData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapData;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IReadonlyBeatmapData*> const& GlobalNamespace::BeatmapCallbacksController::__cordl_internal_get__beatmapData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapData;
}
constexpr void GlobalNamespace::BeatmapCallbacksController::__cordl_internal_set__beatmapData(::GlobalNamespace::IReadonlyBeatmapData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__BeatmapCallbacksController__ICallCallbacksBehavior*& GlobalNamespace::BeatmapCallbacksController::__cordl_internal_get__callCallbacksBehavior() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____callCallbacksBehavior;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__BeatmapCallbacksController__ICallCallbacksBehavior*> const&
GlobalNamespace::BeatmapCallbacksController::__cordl_internal_get__callCallbacksBehavior() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____callCallbacksBehavior;
}
constexpr void GlobalNamespace::BeatmapCallbacksController::__cordl_internal_set__callCallbacksBehavior(::GlobalNamespace::__BeatmapCallbacksController__ICallCallbacksBehavior* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____callCallbacksBehavior)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::BeatmapCallbacksController::__cordl_internal_get__startFilterTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startFilterTime;
}
constexpr float_t const& GlobalNamespace::BeatmapCallbacksController::__cordl_internal_get__startFilterTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startFilterTime;
}
constexpr void GlobalNamespace::BeatmapCallbacksController::__cordl_internal_set__startFilterTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____startFilterTime = value;
}
constexpr float_t& GlobalNamespace::BeatmapCallbacksController::__cordl_internal_get__prevSongTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prevSongTime;
}
constexpr float_t const& GlobalNamespace::BeatmapCallbacksController::__cordl_internal_get__prevSongTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prevSongTime;
}
constexpr void GlobalNamespace::BeatmapCallbacksController::__cordl_internal_set__prevSongTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____prevSongTime = value;
}
constexpr float_t& GlobalNamespace::BeatmapCallbacksController::__cordl_internal_get__songTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songTime;
}
constexpr float_t const& GlobalNamespace::BeatmapCallbacksController::__cordl_internal_get__songTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songTime;
}
constexpr void GlobalNamespace::BeatmapCallbacksController::__cordl_internal_set__songTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____songTime = value;
}
constexpr bool& GlobalNamespace::BeatmapCallbacksController::__cordl_internal_get__sendCallbacksOnBeatmapDataChangeChange() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sendCallbacksOnBeatmapDataChangeChange;
}
constexpr bool const& GlobalNamespace::BeatmapCallbacksController::__cordl_internal_get__sendCallbacksOnBeatmapDataChangeChange() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sendCallbacksOnBeatmapDataChangeChange;
}
constexpr void GlobalNamespace::BeatmapCallbacksController::__cordl_internal_set__sendCallbacksOnBeatmapDataChangeChange(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sendCallbacksOnBeatmapDataChangeChange = value;
}
constexpr bool& GlobalNamespace::BeatmapCallbacksController::__cordl_internal_get__processingCallbacks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____processingCallbacks;
}
constexpr bool const& GlobalNamespace::BeatmapCallbacksController::__cordl_internal_get__processingCallbacks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____processingCallbacks;
}
constexpr void GlobalNamespace::BeatmapCallbacksController::__cordl_internal_set__processingCallbacks(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____processingCallbacks = value;
}
inline bool GlobalNamespace::BeatmapCallbacksController::get_sendCallbacksOnBeatmapDataChange() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapCallbacksController*>::get(), "get_sendCallbacksOnBeatmapDataChange",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::BeatmapCallbacksController::set_sendCallbacksOnBeatmapDataChange(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapCallbacksController*>::get(), "set_sendCallbacksOnBeatmapDataChange",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::BeatmapCallbacksController::get_songTime() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapCallbacksController*>::get(),
                                                                             "get_songTime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::BeatmapCallbacksController::add_didProcessAllCallbacksThisFrameEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapCallbacksController*>::get(), "add_didProcessAllCallbacksThisFrameEvent",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::BeatmapCallbacksController::remove_didProcessAllCallbacksThisFrameEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapCallbacksController*>::get(), "remove_didProcessAllCallbacksThisFrameEvent",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::BeatmapCallbacksController* GlobalNamespace::BeatmapCallbacksController::New_ctor(::GlobalNamespace::__BeatmapCallbacksController__InitData* initData) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::BeatmapCallbacksController*>(initData));
}
inline void GlobalNamespace::BeatmapCallbacksController::_ctor(::GlobalNamespace::__BeatmapCallbacksController__InitData* initData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapCallbacksController*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapCallbacksController__InitData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, initData);
}
inline void GlobalNamespace::BeatmapCallbacksController::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapCallbacksController*>::get(), "Dispose",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::BeatmapCallbacksController::ReplayState() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapCallbacksController*>::get(),
                                                                             "ReplayState", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::BeatmapCallbacksController::ManualUpdate(float_t songTime) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapCallbacksController*>::get(), "ManualUpdate",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, songTime);
}
template <typename T>
inline ::GlobalNamespace::BeatmapDataCallbackWrapper* GlobalNamespace::BeatmapCallbacksController::AddBeatmapCallback(float_t aheadTime, ::GlobalNamespace::BeatmapDataCallback_1<T>* callback) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapCallbacksController*>::get(), "AddBeatmapCallback",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDataCallback_1<T>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapDataCallbackWrapper*, false>(this, ___internal_method, aheadTime, callback);
}
template <typename T> inline ::GlobalNamespace::BeatmapDataCallbackWrapper* GlobalNamespace::BeatmapCallbacksController::AddBeatmapCallback(::GlobalNamespace::BeatmapDataCallback_1<T>* callback) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapCallbacksController*>::get(), "AddBeatmapCallback",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDataCallback_1<T>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapDataCallbackWrapper*, false>(this, ___internal_method, callback);
}
template <typename T>
inline ::GlobalNamespace::BeatmapDataCallbackWrapper* GlobalNamespace::BeatmapCallbacksController::AddBeatmapCallback(::GlobalNamespace::BeatmapDataCallback_1<T>* callback,
                                                                                                                      ::ArrayW<int32_t, ::Array<int32_t>*> beatmapDataSubtypeIdentifiers) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapCallbacksController*>::get(), "AddBeatmapCallback",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDataCallback_1<T>*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapDataCallbackWrapper*, false>(this, ___internal_method, callback, beatmapDataSubtypeIdentifiers);
}
template <typename T>
inline ::GlobalNamespace::BeatmapDataCallbackWrapper* GlobalNamespace::BeatmapCallbacksController::AddBeatmapCallback(float_t aheadTime, ::GlobalNamespace::BeatmapDataCallback_1<T>* callback,
                                                                                                                      ::ArrayW<int32_t, ::Array<int32_t>*> beatmapDataSubtypeIdentifiers) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapCallbacksController*>::get(), "AddBeatmapCallback",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDataCallback_1<T>*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapDataCallbackWrapper*, false>(this, ___internal_method, aheadTime, callback, beatmapDataSubtypeIdentifiers);
}
inline void GlobalNamespace::BeatmapCallbacksController::RemoveBeatmapCallback(::GlobalNamespace::BeatmapDataCallbackWrapper* callbackWrapper) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapCallbacksController*>::get(), "RemoveBeatmapCallback", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDataCallbackWrapper*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, callbackWrapper);
}
inline void GlobalNamespace::BeatmapCallbacksController::TriggerBeatmapEvent(::GlobalNamespace::BeatmapEventData* beatmapEventData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapCallbacksController*>::get(), "TriggerBeatmapEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapEventData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, beatmapEventData);
}
inline void GlobalNamespace::BeatmapCallbacksController::HandleBeatmapEventDataWasInserted(::GlobalNamespace::BeatmapEventData* beatmapEventData,
                                                                                           ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>* node) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapCallbacksController*>::get(), "HandleBeatmapEventDataWasInserted", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapEventData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, beatmapEventData, node);
}
inline void GlobalNamespace::BeatmapCallbacksController::HandleBeatmapEventDataWillBeRemoved(::GlobalNamespace::BeatmapEventData* beatmapEventDataToRemove,
                                                                                             ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>* nodeToRemove) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapCallbacksController*>::get(), "HandleBeatmapEventDataWillBeRemoved", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapEventData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, beatmapEventDataToRemove, nodeToRemove);
}
inline void GlobalNamespace::BeatmapCallbacksController::HandleBeatmapEventDataWasRemoved(::GlobalNamespace::BeatmapEventData* beatmapEventData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapCallbacksController*>::get(), "HandleBeatmapEventDataWasRemoved", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapEventData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, beatmapEventData);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapCallbacksController::BeatmapCallbacksController() {}
