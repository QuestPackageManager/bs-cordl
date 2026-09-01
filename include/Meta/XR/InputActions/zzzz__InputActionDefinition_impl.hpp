#pragma once
// IWYU pragma private; include "Meta\XR\InputActions\InputActionDefinition.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/XR/InputActions/zzzz__InputActionDefinition_def.hpp"
//  Writing Method size for method: ::Meta::XR::InputActions::InputActionDefinition._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::InputActions::InputActionDefinition::*)()>(&::Meta::XR::InputActions::InputActionDefinition::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e51084;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::InputActions::InputActionDefinition*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& Meta::XR::InputActions::InputActionDefinition::__cordl_internal_get_ActionName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ActionName;
}
constexpr ::StringW const& Meta::XR::InputActions::InputActionDefinition::__cordl_internal_get_ActionName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ActionName;
}
constexpr void Meta::XR::InputActions::InputActionDefinition::__cordl_internal_set_ActionName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ActionName = value;
}
constexpr ::GlobalNamespace::OVRPlugin_ActionTypes& Meta::XR::InputActions::InputActionDefinition::__cordl_internal_get_Type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Type;
}
constexpr ::GlobalNamespace::OVRPlugin_ActionTypes const& Meta::XR::InputActions::InputActionDefinition::__cordl_internal_get_Type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Type;
}
constexpr void Meta::XR::InputActions::InputActionDefinition::__cordl_internal_set_Type(::GlobalNamespace::OVRPlugin_ActionTypes value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Type = value;
}
constexpr ::ArrayW<::StringW>& Meta::XR::InputActions::InputActionDefinition::__cordl_internal_get_Paths() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Paths;
}
constexpr ::ArrayW<::StringW> const& Meta::XR::InputActions::InputActionDefinition::__cordl_internal_get_Paths() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Paths;
}
constexpr void Meta::XR::InputActions::InputActionDefinition::__cordl_internal_set_Paths(::ArrayW<::StringW> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Paths = value;
}
inline void Meta::XR::InputActions::InputActionDefinition::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::InputActions::InputActionDefinition*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::XR::InputActions::InputActionDefinition* Meta::XR::InputActions::InputActionDefinition::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::InputActions::InputActionDefinition*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::InputActions::InputActionDefinition::InputActionDefinition() {}
