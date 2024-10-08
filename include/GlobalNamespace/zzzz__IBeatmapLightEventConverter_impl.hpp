#pragma once
// IWYU pragma private; include "GlobalNamespace/IBeatmapLightEventConverter.hpp"
#include "GlobalNamespace/zzzz__IBeatmapLightEventConverter_def.hpp"
#include "GlobalNamespace/zzzz__BasicBeatmapEventType_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventData_def.hpp"
#include "GlobalNamespace/zzzz__EaseType_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentColorType_def.hpp"
#include "GlobalNamespace/zzzz__LightAxis_def.hpp"
#include "GlobalNamespace/zzzz__LightRotationDirection_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::IBeatmapLightEventConverter.ConvertBasicBeatmapEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::IBeatmapLightEventConverter::*)(
    ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapEventData*>*, int32_t, float_t, ::GlobalNamespace::BasicBeatmapEventType, int32_t, float_t)>(
    &::GlobalNamespace::IBeatmapLightEventConverter::ConvertBasicBeatmapEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IBeatmapLightEventConverter*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IBeatmapLightEventConverter*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IBeatmapLightEventConverter.ConvertLightColorBeatmapEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::IBeatmapLightEventConverter::*)(
    ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapEventData*>*, int32_t, float_t, int32_t, int32_t, bool, ::GlobalNamespace::EaseType, ::GlobalNamespace::EnvironmentColorType,
    float_t, int32_t, float_t, bool)>(&::GlobalNamespace::IBeatmapLightEventConverter::ConvertLightColorBeatmapEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IBeatmapLightEventConverter*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IBeatmapLightEventConverter*>::get(), 1));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IBeatmapLightEventConverter.ConvertLightRotationBeatmapEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::IBeatmapLightEventConverter::*)(
    ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapEventData*>*, int32_t, float_t, int32_t, int32_t, bool, ::GlobalNamespace::EaseType, ::GlobalNamespace::LightAxis, float_t,
    int32_t, ::GlobalNamespace::LightRotationDirection)>(&::GlobalNamespace::IBeatmapLightEventConverter::ConvertLightRotationBeatmapEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IBeatmapLightEventConverter*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IBeatmapLightEventConverter*>::get(), 2));
    return ___internal_method;
  }
};
inline void GlobalNamespace::IBeatmapLightEventConverter::ConvertBasicBeatmapEvent(::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapEventData*>* output, int32_t subtypeIdentifier,
                                                                                   float_t time, ::GlobalNamespace::BasicBeatmapEventType basicBeatmapEventType, int32_t value, float_t floatValue) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IBeatmapLightEventConverter*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, output, subtypeIdentifier, time, basicBeatmapEventType, value, floatValue);
}
inline void GlobalNamespace::IBeatmapLightEventConverter::ConvertLightColorBeatmapEvent(::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapEventData*>* output, int32_t subtypeIdentifier,
                                                                                        float_t time, int32_t groupId, int32_t elementId, bool usePreviousValue, ::GlobalNamespace::EaseType easeType,
                                                                                        ::GlobalNamespace::EnvironmentColorType colorType, float_t brightness, int32_t strobeBeatFrequency,
                                                                                        float_t strobeBrightness, bool strobeFade) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IBeatmapLightEventConverter*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, output, subtypeIdentifier, time, groupId, elementId, usePreviousValue, easeType, colorType, brightness,
                                                          strobeBeatFrequency, strobeBrightness, strobeFade);
}
inline void GlobalNamespace::IBeatmapLightEventConverter::ConvertLightRotationBeatmapEvent(::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapEventData*>* output,
                                                                                           int32_t subtypeIdentifier, float_t time, int32_t groupId, int32_t elementId, bool usePreviousEventValue,
                                                                                           ::GlobalNamespace::EaseType easeType, ::GlobalNamespace::LightAxis axis, float_t rotation, int32_t loopCount,
                                                                                           ::GlobalNamespace::LightRotationDirection rotationDirection) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IBeatmapLightEventConverter*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, output, subtypeIdentifier, time, groupId, elementId, usePreviousEventValue, easeType, axis, rotation, loopCount,
                                                          rotationDirection);
}
