#pragma once
// IWYU pragma private; include "UnityEngine\InputSystem\Touchscreen.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_impl.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__ReadOnlyArray_1_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__Pointer_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__Touchscreen_def.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__TouchControl_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__ICustomDeviceReset_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__IEventMerger_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__IInputStateCallbackReceiver_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEventPtr_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__TouchState_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__ReadOnlyArray_1_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::Touchscreen.get_primaryTouch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::TouchControl* (::UnityEngine::InputSystem::Touchscreen::*)()>(
    &::UnityEngine::InputSystem::Touchscreen::get_primaryTouch)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6567570;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Touchscreen*>(), { "get_primaryTouch", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Touchscreen.set_primaryTouch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Touchscreen::*)(::UnityEngine::InputSystem::Controls::TouchControl*)>(
    &::UnityEngine::InputSystem::Touchscreen::set_primaryTouch)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6567578;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Touchscreen*>(),
                                                                                           { "set_primaryTouch", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::TouchControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Touchscreen.get_touches
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Controls::TouchControl*> (
    ::UnityEngine::InputSystem::Touchscreen::*)()>(&::UnityEngine::InputSystem::Touchscreen::get_touches)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6567580;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Touchscreen*>(), { "get_touches", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Touchscreen.set_touches
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Touchscreen::*)(
    ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Controls::TouchControl*>)>(&::UnityEngine::InputSystem::Touchscreen::set_touches)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x656758c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Touchscreen*>(),
                                         { "set_touches", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Controls::TouchControl*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Touchscreen.get_touchControlArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::InputSystem::Controls::TouchControl*> (::UnityEngine::InputSystem::Touchscreen::*)()>(
    &::UnityEngine::InputSystem::Touchscreen::get_touchControlArray)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6567594;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Touchscreen*>(), { "get_touchControlArray", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Touchscreen.set_touchControlArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Touchscreen::*)(::ArrayW<::UnityEngine::InputSystem::Controls::TouchControl*>)>(
    &::UnityEngine::InputSystem::Touchscreen::set_touchControlArray)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x656759c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Touchscreen*>(),
                                                             { "set_touchControlArray", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::InputSystem::Controls::TouchControl*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Touchscreen.get_current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Touchscreen* (*)()>(&::UnityEngine::InputSystem::Touchscreen::get_current)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6567600;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Touchscreen*>(), { "get_current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Touchscreen.set_current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::InputSystem::Touchscreen*)>(&::UnityEngine::InputSystem::Touchscreen::set_current)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x656765c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Touchscreen*>(), { "set_current", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Touchscreen*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Touchscreen.MakeCurrent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Touchscreen::*)()>(&::UnityEngine::InputSystem::Touchscreen::MakeCurrent)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x65676bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Touchscreen*>(), { ::i2c::class_of<::UnityEngine::InputSystem::Touchscreen*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Touchscreen.OnRemoved
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Touchscreen::*)()>(&::UnityEngine::InputSystem::Touchscreen::OnRemoved)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x6567794;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Touchscreen*>(), { ::i2c::class_of<::UnityEngine::InputSystem::Touchscreen*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Touchscreen.FinishSetup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Touchscreen::*)()>(&::UnityEngine::InputSystem::Touchscreen::FinishSetup)> {
  constexpr static std::size_t size = 0x380;
  constexpr static std::size_t addrs = 0x6567898;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Touchscreen*>(), { ::i2c::class_of<::UnityEngine::InputSystem::Touchscreen*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Touchscreen.OnNextUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Touchscreen::*)()>(&::UnityEngine::InputSystem::Touchscreen::OnNextUpdate)> {
  constexpr static std::size_t size = 0x38c;
  constexpr static std::size_t addrs = 0x6567c18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Touchscreen*>(), { "OnNextUpdate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Touchscreen.OnStateEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Touchscreen::*)(::UnityEngine::InputSystem::LowLevel::InputEventPtr)>(
    &::UnityEngine::InputSystem::Touchscreen::OnStateEvent)> {
  constexpr static std::size_t size = 0x758;
  constexpr static std::size_t addrs = 0x6567fa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Touchscreen*>(),
                                                                                           { "OnStateEvent", {}, { ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Touchscreen.UnityEngine_InputSystem_LowLevel_IInputStateCallbackReceiver_OnNextUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Touchscreen::*)()>(
    &::UnityEngine::InputSystem::Touchscreen::UnityEngine_InputSystem_LowLevel_IInputStateCallbackReceiver_OnNextUpdate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x65687ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Touchscreen*>(), { "UnityEngine.InputSystem.LowLevel.IInputStateCallbackReceiver.OnNextUpdate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Touchscreen.UnityEngine_InputSystem_LowLevel_IInputStateCallbackReceiver_OnStateEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Touchscreen::*)(::UnityEngine::InputSystem::LowLevel::InputEventPtr)>(
    &::UnityEngine::InputSystem::Touchscreen::UnityEngine_InputSystem_LowLevel_IInputStateCallbackReceiver_OnStateEvent)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x65687b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Touchscreen*>(),
                            { "UnityEngine.InputSystem.LowLevel.IInputStateCallbackReceiver.OnStateEvent", {}, { ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Touchscreen.UnityEngine_InputSystem_LowLevel_IInputStateCallbackReceiver_GetStateOffsetForEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<bool (::UnityEngine::InputSystem::Touchscreen::*)(::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::by_ref<uint32_t>)>(
        &::UnityEngine::InputSystem::Touchscreen::UnityEngine_InputSystem_LowLevel_IInputStateCallbackReceiver_GetStateOffsetForEvent)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x65687b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Touchscreen*>(),
                                                             { "UnityEngine.InputSystem.LowLevel.IInputStateCallbackReceiver.GetStateOffsetForEvent",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>(),
                                                                 ::i2c::type_of<::by_ref<uint32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Touchscreen.UnityEngine_InputSystem_LowLevel_ICustomDeviceReset_Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Touchscreen::*)()>(
    &::UnityEngine::InputSystem::Touchscreen::UnityEngine_InputSystem_LowLevel_ICustomDeviceReset_Reset)> {
  constexpr static std::size_t size = 0x484;
  constexpr static std::size_t addrs = 0x6568a54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Touchscreen*>(), { "UnityEngine.InputSystem.LowLevel.ICustomDeviceReset.Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Touchscreen.MergeForward
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::LowLevel::InputEventPtr)>(
    &::UnityEngine::InputSystem::Touchscreen::MergeForward)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6568ed8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Touchscreen*>(),
                            { "MergeForward", {}, { ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>(), ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Touchscreen.UnityEngine_InputSystem_LowLevel_IEventMerger_MergeForward
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<bool (::UnityEngine::InputSystem::Touchscreen::*)(::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::LowLevel::InputEventPtr)>(
        &::UnityEngine::InputSystem::Touchscreen::UnityEngine_InputSystem_LowLevel_IEventMerger_MergeForward)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6568f78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Touchscreen*>(),
                                                { "UnityEngine.InputSystem.LowLevel.IEventMerger.MergeForward",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>(), ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Touchscreen.TriggerTap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::InputSystem::Controls::TouchControl*, ::by_ref<::UnityEngine::InputSystem::LowLevel::TouchState>,
                                                                ::UnityEngine::InputSystem::LowLevel::InputEventPtr)>(&::UnityEngine::InputSystem::Touchscreen::TriggerTap)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x65686fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Touchscreen*>(),
                                                { "TriggerTap",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::Controls::TouchControl*>(), ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::LowLevel::TouchState>>(),
                                                    ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Touchscreen._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Touchscreen::*)()>(&::UnityEngine::InputSystem::Touchscreen::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6568fe0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Touchscreen*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::InputSystem::Controls::TouchControl*& UnityEngine::InputSystem::Touchscreen::__cordl_internal_get__primaryTouch_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____primaryTouch_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::TouchControl* const& UnityEngine::InputSystem::Touchscreen::__cordl_internal_get__primaryTouch_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____primaryTouch_k__BackingField;
}
constexpr void UnityEngine::InputSystem::Touchscreen::__cordl_internal_set__primaryTouch_k__BackingField(::UnityEngine::InputSystem::Controls::TouchControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____primaryTouch_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Controls::TouchControl*>&
UnityEngine::InputSystem::Touchscreen::__cordl_internal_get__touches_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____touches_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Controls::TouchControl*> const&
UnityEngine::InputSystem::Touchscreen::__cordl_internal_get__touches_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____touches_k__BackingField;
}
constexpr void UnityEngine::InputSystem::Touchscreen::__cordl_internal_set__touches_k__BackingField(
    ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Controls::TouchControl*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____touches_k__BackingField = value;
}
inline void UnityEngine::InputSystem::Touchscreen::setStaticF_k_TouchscreenUpdateMarker(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "k_TouchscreenUpdateMarker", ::UnityEngine::InputSystem::Touchscreen*>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::InputSystem::Touchscreen::getStaticF_k_TouchscreenUpdateMarker() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "k_TouchscreenUpdateMarker", ::UnityEngine::InputSystem::Touchscreen*>();
}
inline void UnityEngine::InputSystem::Touchscreen::setStaticF_k_TouchAllocateMarker(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "k_TouchAllocateMarker", ::UnityEngine::InputSystem::Touchscreen*>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::InputSystem::Touchscreen::getStaticF_k_TouchAllocateMarker() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "k_TouchAllocateMarker", ::UnityEngine::InputSystem::Touchscreen*>();
}
inline void UnityEngine::InputSystem::Touchscreen::setStaticF__current_k__BackingField(::UnityEngine::InputSystem::Touchscreen* value) {
  ::cordl_internals::setStaticField<::UnityEngine::InputSystem::Touchscreen*, "<current>k__BackingField", ::UnityEngine::InputSystem::Touchscreen*>(
      std::forward<::UnityEngine::InputSystem::Touchscreen*>(value));
}
inline ::UnityEngine::InputSystem::Touchscreen* UnityEngine::InputSystem::Touchscreen::getStaticF__current_k__BackingField() {
  return ::cordl_internals::getStaticField<::UnityEngine::InputSystem::Touchscreen*, "<current>k__BackingField", ::UnityEngine::InputSystem::Touchscreen*>();
}
inline void UnityEngine::InputSystem::Touchscreen::setStaticF_s_TapTime(float_t value) {
  ::cordl_internals::setStaticField<float_t, "s_TapTime", ::UnityEngine::InputSystem::Touchscreen*>(std::forward<float_t>(value));
}
inline float_t UnityEngine::InputSystem::Touchscreen::getStaticF_s_TapTime() {
  return ::cordl_internals::getStaticField<float_t, "s_TapTime", ::UnityEngine::InputSystem::Touchscreen*>();
}
inline void UnityEngine::InputSystem::Touchscreen::setStaticF_s_TapDelayTime(float_t value) {
  ::cordl_internals::setStaticField<float_t, "s_TapDelayTime", ::UnityEngine::InputSystem::Touchscreen*>(std::forward<float_t>(value));
}
inline float_t UnityEngine::InputSystem::Touchscreen::getStaticF_s_TapDelayTime() {
  return ::cordl_internals::getStaticField<float_t, "s_TapDelayTime", ::UnityEngine::InputSystem::Touchscreen*>();
}
inline void UnityEngine::InputSystem::Touchscreen::setStaticF_s_TapRadiusSquared(float_t value) {
  ::cordl_internals::setStaticField<float_t, "s_TapRadiusSquared", ::UnityEngine::InputSystem::Touchscreen*>(std::forward<float_t>(value));
}
inline float_t UnityEngine::InputSystem::Touchscreen::getStaticF_s_TapRadiusSquared() {
  return ::cordl_internals::getStaticField<float_t, "s_TapRadiusSquared", ::UnityEngine::InputSystem::Touchscreen*>();
}
inline ::UnityEngine::InputSystem::Controls::TouchControl* UnityEngine::InputSystem::Touchscreen::get_primaryTouch() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Touchscreen*>(), { "get_primaryTouch", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::TouchControl*>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Touchscreen::set_primaryTouch(::UnityEngine::InputSystem::Controls::TouchControl* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Touchscreen*>(),
                                                                                         { "set_primaryTouch", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::TouchControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Controls::TouchControl*> UnityEngine::InputSystem::Touchscreen::get_touches() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Touchscreen*>(), { "get_touches", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Controls::TouchControl*>>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Touchscreen::set_touches(::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Controls::TouchControl*> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Touchscreen*>(),
                                       { "set_touches", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Controls::TouchControl*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<::UnityEngine::InputSystem::Controls::TouchControl*> UnityEngine::InputSystem::Touchscreen::get_touchControlArray() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Touchscreen*>(), { "get_touchControlArray", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::InputSystem::Controls::TouchControl*>>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Touchscreen::set_touchControlArray(::ArrayW<::UnityEngine::InputSystem::Controls::TouchControl*> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Touchscreen*>(),
                                                           { "set_touchControlArray", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::InputSystem::Controls::TouchControl*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Touchscreen* UnityEngine::InputSystem::Touchscreen::get_current() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Touchscreen*>(), { "get_current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Touchscreen*>(nullptr, ___internal_method);
}
inline void UnityEngine::InputSystem::Touchscreen::set_current(::UnityEngine::InputSystem::Touchscreen* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Touchscreen*>(), { "set_current", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Touchscreen*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::InputSystem::Touchscreen::MakeCurrent() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::Touchscreen*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Touchscreen::OnRemoved() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::Touchscreen*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Touchscreen::FinishSetup() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::Touchscreen*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Touchscreen::OnNextUpdate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Touchscreen*>(), { "OnNextUpdate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Touchscreen::OnStateEvent(::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Touchscreen*>(),
                                                                                         { "OnStateEvent", {}, { ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventPtr);
}
inline void UnityEngine::InputSystem::Touchscreen::UnityEngine_InputSystem_LowLevel_IInputStateCallbackReceiver_OnNextUpdate() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Touchscreen*>(), { "UnityEngine.InputSystem.LowLevel.IInputStateCallbackReceiver.OnNextUpdate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Touchscreen::UnityEngine_InputSystem_LowLevel_IInputStateCallbackReceiver_OnStateEvent(::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Touchscreen*>(),
                          { "UnityEngine.InputSystem.LowLevel.IInputStateCallbackReceiver.OnStateEvent", {}, { ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventPtr);
}
inline bool UnityEngine::InputSystem::Touchscreen::UnityEngine_InputSystem_LowLevel_IInputStateCallbackReceiver_GetStateOffsetForEvent(::UnityEngine::InputSystem::InputControl* control,
                                                                                                                                       ::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr,
                                                                                                                                       ::by_ref<uint32_t> offset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Touchscreen*>(),
                                                           { "UnityEngine.InputSystem.LowLevel.IInputStateCallbackReceiver.GetStateOffsetForEvent",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>(),
                                                               ::i2c::type_of<::by_ref<uint32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, control, eventPtr, offset);
}
inline void UnityEngine::InputSystem::Touchscreen::UnityEngine_InputSystem_LowLevel_ICustomDeviceReset_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Touchscreen*>(), { "UnityEngine.InputSystem.LowLevel.ICustomDeviceReset.Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::Touchscreen::MergeForward(::UnityEngine::InputSystem::LowLevel::InputEventPtr currentEventPtr, ::UnityEngine::InputSystem::LowLevel::InputEventPtr nextEventPtr) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Touchscreen*>(),
                          { "MergeForward", {}, { ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>(), ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, currentEventPtr, nextEventPtr);
}
inline bool UnityEngine::InputSystem::Touchscreen::UnityEngine_InputSystem_LowLevel_IEventMerger_MergeForward(::UnityEngine::InputSystem::LowLevel::InputEventPtr currentEventPtr,
                                                                                                              ::UnityEngine::InputSystem::LowLevel::InputEventPtr nextEventPtr) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Touchscreen*>(),
                                              { "UnityEngine.InputSystem.LowLevel.IEventMerger.MergeForward",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>(), ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, currentEventPtr, nextEventPtr);
}
inline void UnityEngine::InputSystem::Touchscreen::TriggerTap(::UnityEngine::InputSystem::Controls::TouchControl* control, ::by_ref<::UnityEngine::InputSystem::LowLevel::TouchState> state,
                                                              ::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Touchscreen*>(),
                                              { "TriggerTap",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::Controls::TouchControl*>(), ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::LowLevel::TouchState>>(),
                                                  ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, control, state, eventPtr);
}
inline void UnityEngine::InputSystem::Touchscreen::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Touchscreen*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Touchscreen* UnityEngine::InputSystem::Touchscreen::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::Touchscreen*>());
}
/// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputStateCallbackReceiver"
constexpr UnityEngine::InputSystem::Touchscreen::operator ::UnityEngine::InputSystem::LowLevel::IInputStateCallbackReceiver*() noexcept {
  return static_cast<::UnityEngine::InputSystem::LowLevel::IInputStateCallbackReceiver*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::InputSystem::LowLevel::IInputStateCallbackReceiver"
constexpr ::UnityEngine::InputSystem::LowLevel::IInputStateCallbackReceiver* UnityEngine::InputSystem::Touchscreen::i___UnityEngine__InputSystem__LowLevel__IInputStateCallbackReceiver() noexcept {
  return static_cast<::UnityEngine::InputSystem::LowLevel::IInputStateCallbackReceiver*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IEventMerger"
constexpr UnityEngine::InputSystem::Touchscreen::operator ::UnityEngine::InputSystem::LowLevel::IEventMerger*() noexcept {
  return static_cast<::UnityEngine::InputSystem::LowLevel::IEventMerger*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::InputSystem::LowLevel::IEventMerger"
constexpr ::UnityEngine::InputSystem::LowLevel::IEventMerger* UnityEngine::InputSystem::Touchscreen::i___UnityEngine__InputSystem__LowLevel__IEventMerger() noexcept {
  return static_cast<::UnityEngine::InputSystem::LowLevel::IEventMerger*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::ICustomDeviceReset"
constexpr UnityEngine::InputSystem::Touchscreen::operator ::UnityEngine::InputSystem::LowLevel::ICustomDeviceReset*() noexcept {
  return static_cast<::UnityEngine::InputSystem::LowLevel::ICustomDeviceReset*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::InputSystem::LowLevel::ICustomDeviceReset"
constexpr ::UnityEngine::InputSystem::LowLevel::ICustomDeviceReset* UnityEngine::InputSystem::Touchscreen::i___UnityEngine__InputSystem__LowLevel__ICustomDeviceReset() noexcept {
  return static_cast<::UnityEngine::InputSystem::LowLevel::ICustomDeviceReset*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Touchscreen::Touchscreen() {}
