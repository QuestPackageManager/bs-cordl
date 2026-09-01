#pragma once
// IWYU pragma private; include "Zenject\LazyInstanceInjector.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__LazyInstanceInjector_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
//  Writing Method size for method: ::Zenject::LazyInstanceInjector._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::LazyInstanceInjector::*)(::Zenject::DiContainer*)>(&::Zenject::LazyInstanceInjector::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6e83b98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::LazyInstanceInjector*>(), { ".ctor", {}, { ::i2c::type_of<::Zenject::DiContainer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::LazyInstanceInjector.get_Instances
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::System::Object*>* (::Zenject::LazyInstanceInjector::*)()>(
    &::Zenject::LazyInstanceInjector::get_Instances)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e83c18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::LazyInstanceInjector*>(), { "get_Instances", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::LazyInstanceInjector.AddInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::LazyInstanceInjector::*)(::System::Object*)>(&::Zenject::LazyInstanceInjector::AddInstance)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6e83c20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::LazyInstanceInjector*>(), { "AddInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::LazyInstanceInjector.AddInstances
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::LazyInstanceInjector::*)(::System::Collections::Generic::IEnumerable_1<::System::Object*>*)>(
    &::Zenject::LazyInstanceInjector::AddInstances)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6e83c90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Zenject::LazyInstanceInjector*>(), { "AddInstances", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::LazyInstanceInjector.LazyInject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::LazyInstanceInjector::*)(::System::Object*)>(&::Zenject::LazyInstanceInjector::LazyInject)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6e83cf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::LazyInstanceInjector*>(), { "LazyInject", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::LazyInstanceInjector.LazyInjectAll
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::LazyInstanceInjector::*)()>(&::Zenject::LazyInstanceInjector::LazyInjectAll)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x6e83d80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::LazyInstanceInjector*>(), { "LazyInjectAll", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Zenject::DiContainer*& Zenject::LazyInstanceInjector::__cordl_internal_get__container() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____container;
}
constexpr ::Zenject::DiContainer* const& Zenject::LazyInstanceInjector::__cordl_internal_get__container() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____container;
}
constexpr void Zenject::LazyInstanceInjector::__cordl_internal_set__container(::Zenject::DiContainer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____container = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::System::Object*>*& Zenject::LazyInstanceInjector::__cordl_internal_get__instancesToInject() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____instancesToInject;
}
constexpr ::System::Collections::Generic::HashSet_1<::System::Object*>* const& Zenject::LazyInstanceInjector::__cordl_internal_get__instancesToInject() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____instancesToInject;
}
constexpr void Zenject::LazyInstanceInjector::__cordl_internal_set__instancesToInject(::System::Collections::Generic::HashSet_1<::System::Object*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____instancesToInject = value;
}
inline void Zenject::LazyInstanceInjector::_ctor(::Zenject::DiContainer* container) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::LazyInstanceInjector*>(), { ".ctor", {}, { ::i2c::type_of<::Zenject::DiContainer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, container);
}
inline ::System::Collections::Generic::IEnumerable_1<::System::Object*>* Zenject::LazyInstanceInjector::get_Instances() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::LazyInstanceInjector*>(), { "get_Instances", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>(this, ___internal_method);
}
inline void Zenject::LazyInstanceInjector::AddInstance(::System::Object* instance) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::LazyInstanceInjector*>(), { "AddInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, instance);
}
inline void Zenject::LazyInstanceInjector::AddInstances(::System::Collections::Generic::IEnumerable_1<::System::Object*>* instances) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Zenject::LazyInstanceInjector*>(), { "AddInstances", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, instances);
}
inline void Zenject::LazyInstanceInjector::LazyInject(::System::Object* instance) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::LazyInstanceInjector*>(), { "LazyInject", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, instance);
}
inline void Zenject::LazyInstanceInjector::LazyInjectAll() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::LazyInstanceInjector*>(), { "LazyInjectAll", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Zenject::LazyInstanceInjector* Zenject::LazyInstanceInjector::New_ctor(::Zenject::DiContainer* container) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::LazyInstanceInjector*>(container));
}
// Ctor Parameters []
constexpr ::Zenject::LazyInstanceInjector::LazyInstanceInjector() {}
