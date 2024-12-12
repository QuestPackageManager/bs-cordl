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
