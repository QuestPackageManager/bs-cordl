#pragma once
// IWYU pragma private; include "GlobalNamespace\VisualEffectActivationBehaviour.hpp"
#include "UnityEngine/Playables/zzzz__PlayableBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__VisualEffectActivationBehaviour_def.hpp"
#include "GlobalNamespace/zzzz__VisualEffectActivationBehaviour_def.hpp"
#include "UnityEngine/VFX/Utility/zzzz__ExposedProperty_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::VisualEffectActivationBehaviour_AttributeType::VisualEffectActivationBehaviour_AttributeType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VisualEffectActivationBehaviour_AttributeType::VisualEffectActivationBehaviour_AttributeType() {}
constexpr ::GlobalNamespace::VisualEffectActivationBehaviour_AttributeType GlobalNamespace::VisualEffectActivationBehaviour_AttributeType::Float{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::VisualEffectActivationBehaviour_AttributeType GlobalNamespace::VisualEffectActivationBehaviour_AttributeType::Float2{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::VisualEffectActivationBehaviour_AttributeType GlobalNamespace::VisualEffectActivationBehaviour_AttributeType::Float3{ static_cast<int32_t>(0x3) };
constexpr ::GlobalNamespace::VisualEffectActivationBehaviour_AttributeType GlobalNamespace::VisualEffectActivationBehaviour_AttributeType::Float4{ static_cast<int32_t>(0x4) };
constexpr ::GlobalNamespace::VisualEffectActivationBehaviour_AttributeType GlobalNamespace::VisualEffectActivationBehaviour_AttributeType::Int32{ static_cast<int32_t>(0x5) };
constexpr ::GlobalNamespace::VisualEffectActivationBehaviour_AttributeType GlobalNamespace::VisualEffectActivationBehaviour_AttributeType::Uint32{ static_cast<int32_t>(0x6) };
constexpr ::GlobalNamespace::VisualEffectActivationBehaviour_AttributeType GlobalNamespace::VisualEffectActivationBehaviour_AttributeType::Boolean{ static_cast<int32_t>(0x11) };
// Ctor Parameters [CppParam { name: "attribute", ty: "::UnityEngine::VFX::Utility::ExposedProperty*", modifiers: "", def_value: Some("{}") }, CppParam { name: "type", ty:
// "::GlobalNamespace::VisualEffectActivationBehaviour_AttributeType", modifiers: "", def_value: Some("{}") }, CppParam { name: "values", ty: "::ArrayW<float_t>", modifiers: "", def_value: Some("{}")
// }]
constexpr ::GlobalNamespace::VisualEffectActivationBehaviour_EventState::VisualEffectActivationBehaviour_EventState(::UnityEngine::VFX::Utility::ExposedProperty* attribute,
                                                                                                                    ::GlobalNamespace::VisualEffectActivationBehaviour_AttributeType type,
                                                                                                                    ::ArrayW<float_t> values) noexcept {
  this->attribute = attribute;
  this->type = type;
  this->values = values;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VisualEffectActivationBehaviour_EventState::VisualEffectActivationBehaviour_EventState() {}
//  Writing Method size for method: ::GlobalNamespace::VisualEffectActivationBehaviour._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VisualEffectActivationBehaviour::*)()>(&::GlobalNamespace::VisualEffectActivationBehaviour::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x69d1434;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VisualEffectActivationBehaviour*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::VFX::Utility::ExposedProperty*& GlobalNamespace::VisualEffectActivationBehaviour::__cordl_internal_get_onClipEnter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onClipEnter;
}
constexpr ::UnityEngine::VFX::Utility::ExposedProperty* const& GlobalNamespace::VisualEffectActivationBehaviour::__cordl_internal_get_onClipEnter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onClipEnter;
}
constexpr void GlobalNamespace::VisualEffectActivationBehaviour::__cordl_internal_set_onClipEnter(::UnityEngine::VFX::Utility::ExposedProperty* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___onClipEnter = value;
}
constexpr ::UnityEngine::VFX::Utility::ExposedProperty*& GlobalNamespace::VisualEffectActivationBehaviour::__cordl_internal_get_onClipExit() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onClipExit;
}
constexpr ::UnityEngine::VFX::Utility::ExposedProperty* const& GlobalNamespace::VisualEffectActivationBehaviour::__cordl_internal_get_onClipExit() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onClipExit;
}
constexpr void GlobalNamespace::VisualEffectActivationBehaviour::__cordl_internal_set_onClipExit(::UnityEngine::VFX::Utility::ExposedProperty* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___onClipExit = value;
}
constexpr ::ArrayW<::GlobalNamespace::VisualEffectActivationBehaviour_EventState>& GlobalNamespace::VisualEffectActivationBehaviour::__cordl_internal_get_clipEnterEventAttributes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___clipEnterEventAttributes;
}
constexpr ::ArrayW<::GlobalNamespace::VisualEffectActivationBehaviour_EventState> const& GlobalNamespace::VisualEffectActivationBehaviour::__cordl_internal_get_clipEnterEventAttributes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___clipEnterEventAttributes;
}
constexpr void GlobalNamespace::VisualEffectActivationBehaviour::__cordl_internal_set_clipEnterEventAttributes(::ArrayW<::GlobalNamespace::VisualEffectActivationBehaviour_EventState> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___clipEnterEventAttributes = value;
}
constexpr ::ArrayW<::GlobalNamespace::VisualEffectActivationBehaviour_EventState>& GlobalNamespace::VisualEffectActivationBehaviour::__cordl_internal_get_clipExitEventAttributes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___clipExitEventAttributes;
}
constexpr ::ArrayW<::GlobalNamespace::VisualEffectActivationBehaviour_EventState> const& GlobalNamespace::VisualEffectActivationBehaviour::__cordl_internal_get_clipExitEventAttributes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___clipExitEventAttributes;
}
constexpr void GlobalNamespace::VisualEffectActivationBehaviour::__cordl_internal_set_clipExitEventAttributes(::ArrayW<::GlobalNamespace::VisualEffectActivationBehaviour_EventState> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___clipExitEventAttributes = value;
}
inline void GlobalNamespace::VisualEffectActivationBehaviour::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VisualEffectActivationBehaviour*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::VisualEffectActivationBehaviour* GlobalNamespace::VisualEffectActivationBehaviour::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::VisualEffectActivationBehaviour*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VisualEffectActivationBehaviour::VisualEffectActivationBehaviour() {}
