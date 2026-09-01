#pragma once
// IWYU pragma private; include "Meta\XR\InputActions\UserInputActionSet.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/XR/InputActions/zzzz__UserInputActionSet_def.hpp"
#include "Meta/XR/InputActions/zzzz__InputActionDefinition_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::Meta::XR::InputActions::UserInputActionSet.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::XR::InputActions::UserInputActionSet::*)()>(&::Meta::XR::InputActions::UserInputActionSet::ToString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e51008;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Meta::XR::InputActions::UserInputActionSet*>(), { ::i2c::class_of<::Meta::XR::InputActions::UserInputActionSet*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::InputActions::UserInputActionSet._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::InputActions::UserInputActionSet::*)()>(&::Meta::XR::InputActions::UserInputActionSet::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5e51010;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::InputActions::UserInputActionSet*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& Meta::XR::InputActions::UserInputActionSet::__cordl_internal_get_InteractionProfile() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InteractionProfile;
}
constexpr ::StringW const& Meta::XR::InputActions::UserInputActionSet::__cordl_internal_get_InteractionProfile() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InteractionProfile;
}
constexpr void Meta::XR::InputActions::UserInputActionSet::__cordl_internal_set_InteractionProfile(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___InteractionProfile = value;
}
constexpr ::System::Collections::Generic::List_1<::Meta::XR::InputActions::InputActionDefinition*>*& Meta::XR::InputActions::UserInputActionSet::__cordl_internal_get_InputActionDefinitions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InputActionDefinitions;
}
constexpr ::System::Collections::Generic::List_1<::Meta::XR::InputActions::InputActionDefinition*>* const&
Meta::XR::InputActions::UserInputActionSet::__cordl_internal_get_InputActionDefinitions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InputActionDefinitions;
}
constexpr void
Meta::XR::InputActions::UserInputActionSet::__cordl_internal_set_InputActionDefinitions(::System::Collections::Generic::List_1<::Meta::XR::InputActions::InputActionDefinition*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___InputActionDefinitions = value;
}
inline ::StringW Meta::XR::InputActions::UserInputActionSet::ToString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Meta::XR::InputActions::UserInputActionSet*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Meta::XR::InputActions::UserInputActionSet::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::InputActions::UserInputActionSet*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::XR::InputActions::UserInputActionSet* Meta::XR::InputActions::UserInputActionSet::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::InputActions::UserInputActionSet*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::InputActions::UserInputActionSet::UserInputActionSet() {}
