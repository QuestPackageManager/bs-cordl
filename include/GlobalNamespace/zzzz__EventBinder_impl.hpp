#pragma once
// IWYU pragma private; include "GlobalNamespace/EventBinder.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__EventBinder_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::EventBinder.Bind
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EventBinder::*)(::System::Action*, ::System::Action*)>(&::GlobalNamespace::EventBinder::Bind)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x585908c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EventBinder*>(), { "Bind", {}, { ::i2c::type_of<::System::Action*>(), ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EventBinder.ClearAllBindings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EventBinder::*)()>(&::GlobalNamespace::EventBinder::ClearAllBindings)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x5859158;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EventBinder*>(), { "ClearAllBindings", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EventBinder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EventBinder::*)()>(&::GlobalNamespace::EventBinder::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x58592b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EventBinder*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::System::Action*>*& GlobalNamespace::EventBinder::__cordl_internal_get__unsubscribes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____unsubscribes;
}
constexpr ::System::Collections::Generic::List_1<::System::Action*>* const& GlobalNamespace::EventBinder::__cordl_internal_get__unsubscribes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____unsubscribes;
}
constexpr void GlobalNamespace::EventBinder::__cordl_internal_set__unsubscribes(::System::Collections::Generic::List_1<::System::Action*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____unsubscribes = value;
}
inline void GlobalNamespace::EventBinder::Bind(::System::Action* subscribe, ::System::Action* unsubscribe) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EventBinder*>(), { "Bind", {}, { ::i2c::type_of<::System::Action*>(), ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, subscribe, unsubscribe);
}
inline void GlobalNamespace::EventBinder::ClearAllBindings() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EventBinder*>(), { "ClearAllBindings", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::EventBinder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EventBinder*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::EventBinder* GlobalNamespace::EventBinder::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::EventBinder*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EventBinder::EventBinder() {}
