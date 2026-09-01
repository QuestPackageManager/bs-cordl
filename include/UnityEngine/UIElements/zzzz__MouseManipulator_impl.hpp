#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\MouseManipulator.hpp"
#include "UnityEngine/UIElements/zzzz__Manipulator_impl.hpp"
#include "UnityEngine/UIElements/zzzz__MouseManipulator_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__ManipulatorActivationFilter_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::MouseManipulator.get_activators
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::UIElements::ManipulatorActivationFilter>* (
    ::UnityEngine::UIElements::MouseManipulator::*)()>(&::UnityEngine::UIElements::MouseManipulator::get_activators)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6db6920;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MouseManipulator*>(), { "get_activators", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MouseManipulator.set_activators
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::MouseManipulator::*)(
    ::System::Collections::Generic::List_1<::UnityEngine::UIElements::ManipulatorActivationFilter>*)>(&::UnityEngine::UIElements::MouseManipulator::set_activators)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6db6928;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MouseManipulator*>(),
                                                { "set_activators", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::UIElements::ManipulatorActivationFilter>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MouseManipulator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::MouseManipulator::*)()>(&::UnityEngine::UIElements::MouseManipulator::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6db6930;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MouseManipulator*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::ManipulatorActivationFilter>*&
UnityEngine::UIElements::MouseManipulator::__cordl_internal_get__activators_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activators_k__BackingField;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::ManipulatorActivationFilter>* const&
UnityEngine::UIElements::MouseManipulator::__cordl_internal_get__activators_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activators_k__BackingField;
}
constexpr void
UnityEngine::UIElements::MouseManipulator::__cordl_internal_set__activators_k__BackingField(::System::Collections::Generic::List_1<::UnityEngine::UIElements::ManipulatorActivationFilter>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____activators_k__BackingField = value;
}
inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::ManipulatorActivationFilter>* UnityEngine::UIElements::MouseManipulator::get_activators() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MouseManipulator*>(), { "get_activators", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::UIElements::ManipulatorActivationFilter>*>(this, ___internal_method);
}
inline void UnityEngine::UIElements::MouseManipulator::set_activators(::System::Collections::Generic::List_1<::UnityEngine::UIElements::ManipulatorActivationFilter>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MouseManipulator*>(),
                                              { "set_activators", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::UIElements::ManipulatorActivationFilter>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::MouseManipulator::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MouseManipulator*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::MouseManipulator* UnityEngine::UIElements::MouseManipulator::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::MouseManipulator*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::MouseManipulator::MouseManipulator() {}
