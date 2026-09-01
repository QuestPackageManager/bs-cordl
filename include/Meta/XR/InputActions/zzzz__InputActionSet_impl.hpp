#pragma once
// IWYU pragma private; include "Meta\XR\InputActions\InputActionSet.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "Meta/XR/InputActions/zzzz__InputActionSet_def.hpp"
#include "Meta/XR/InputActions/zzzz__InputActionDefinition_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::Meta::XR::InputActions::InputActionSet.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::XR::InputActions::InputActionSet::*)()>(&::Meta::XR::InputActions::InputActionSet::ToString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e50d48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Meta::XR::InputActions::InputActionSet*>(), { ::i2c::class_of<::Meta::XR::InputActions::InputActionSet*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::InputActions::InputActionSet._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::InputActions::InputActionSet::*)()>(&::Meta::XR::InputActions::InputActionSet::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5e50d50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::InputActions::InputActionSet*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& Meta::XR::InputActions::InputActionSet::__cordl_internal_get_InteractionProfile() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InteractionProfile;
}
constexpr ::StringW const& Meta::XR::InputActions::InputActionSet::__cordl_internal_get_InteractionProfile() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InteractionProfile;
}
constexpr void Meta::XR::InputActions::InputActionSet::__cordl_internal_set_InteractionProfile(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___InteractionProfile = value;
}
constexpr ::System::Collections::Generic::List_1<::Meta::XR::InputActions::InputActionDefinition*>*& Meta::XR::InputActions::InputActionSet::__cordl_internal_get_InputActionDefinitions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InputActionDefinitions;
}
constexpr ::System::Collections::Generic::List_1<::Meta::XR::InputActions::InputActionDefinition*>* const& Meta::XR::InputActions::InputActionSet::__cordl_internal_get_InputActionDefinitions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InputActionDefinitions;
}
constexpr void Meta::XR::InputActions::InputActionSet::__cordl_internal_set_InputActionDefinitions(::System::Collections::Generic::List_1<::Meta::XR::InputActions::InputActionDefinition*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___InputActionDefinitions = value;
}
inline ::StringW Meta::XR::InputActions::InputActionSet::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Meta::XR::InputActions::InputActionSet*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Meta::XR::InputActions::InputActionSet::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::InputActions::InputActionSet*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::XR::InputActions::InputActionSet* Meta::XR::InputActions::InputActionSet::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::InputActions::InputActionSet*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::InputActions::InputActionSet::InputActionSet() {}
