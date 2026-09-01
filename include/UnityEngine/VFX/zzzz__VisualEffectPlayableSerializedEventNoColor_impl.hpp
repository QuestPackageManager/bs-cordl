#pragma once
// IWYU pragma private; include "UnityEngine\VFX\VisualEffectPlayableSerializedEventNoColor.hpp"
#include "UnityEngine/VFX/zzzz__EventAttributes_impl.hpp"
#include "UnityEngine/VFX/zzzz__PlayableTimeSpace_impl.hpp"
#include "UnityEngine/VFX/zzzz__VisualEffectPlayableSerializedEventNoColor_def.hpp"
#include "UnityEngine/VFX/Utility/zzzz__ExposedProperty_def.hpp"
#include "UnityEngine/VFX/zzzz__VisualEffectPlayableSerializedEvent_def.hpp"
//  Writing Method size for method: ::UnityEngine::VFX::VisualEffectPlayableSerializedEventNoColor.op_Implicit___UnityEngine__VFX__VisualEffectPlayableSerializedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::VFX::VisualEffectPlayableSerializedEvent (*)(::UnityEngine::VFX::VisualEffectPlayableSerializedEventNoColor)>(
    &::UnityEngine::VFX::VisualEffectPlayableSerializedEventNoColor::op_Implicit___UnityEngine__VFX__VisualEffectPlayableSerializedEvent)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x69d288c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VisualEffectPlayableSerializedEventNoColor>(),
                                                             { "op_Implicit", {}, { ::i2c::type_of<::UnityEngine::VFX::VisualEffectPlayableSerializedEventNoColor>() } })));
    return ___internal_method;
  }
};
inline ::UnityEngine::VFX::VisualEffectPlayableSerializedEvent
UnityEngine::VFX::VisualEffectPlayableSerializedEventNoColor::op_Implicit___UnityEngine__VFX__VisualEffectPlayableSerializedEvent(::UnityEngine::VFX::VisualEffectPlayableSerializedEventNoColor evt) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VisualEffectPlayableSerializedEventNoColor>(),
                                                                                         { "op_Implicit", {}, { ::i2c::type_of<::UnityEngine::VFX::VisualEffectPlayableSerializedEventNoColor>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::VFX::VisualEffectPlayableSerializedEvent>(nullptr, ___internal_method, evt);
}
// Ctor Parameters [CppParam { name: "time", ty: "double_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "timeSpace", ty: "::UnityEngine::VFX::PlayableTimeSpace", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "name", ty: "::UnityEngine::VFX::Utility::ExposedProperty*", modifiers: "", def_value: Some("{}") }, CppParam { name: "eventAttributes", ty:
// "::UnityEngine::VFX::EventAttributes", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::VFX::VisualEffectPlayableSerializedEventNoColor::VisualEffectPlayableSerializedEventNoColor(double_t time, ::UnityEngine::VFX::PlayableTimeSpace timeSpace,
                                                                                                                     ::UnityEngine::VFX::Utility::ExposedProperty* name,
                                                                                                                     ::UnityEngine::VFX::EventAttributes eventAttributes) noexcept {
  this->time = time;
  this->timeSpace = timeSpace;
  this->name = name;
  this->eventAttributes = eventAttributes;
}
// Ctor Parameters []
constexpr ::UnityEngine::VFX::VisualEffectPlayableSerializedEventNoColor::VisualEffectPlayableSerializedEventNoColor() {}
