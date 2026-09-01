#pragma once
// IWYU pragma private; include "Zenject\ActionInstaller.hpp"
#include "Zenject/zzzz__Installer_1_impl.hpp"
#include "Zenject/zzzz__ActionInstaller_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
//  Writing Method size for method: ::Zenject::ActionInstaller._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::ActionInstaller::*)(::System::Action_1<::Zenject::DiContainer*>*)>(&::Zenject::ActionInstaller::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6e8aef4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ActionInstaller*>(), { ".ctor", {}, { ::i2c::type_of<::System::Action_1<::Zenject::DiContainer*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ActionInstaller.InstallBindings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::ActionInstaller::*)()>(&::Zenject::ActionInstaller::InstallBindings)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6e9b2e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Zenject::ActionInstaller*>(), { ::i2c::class_of<::Zenject::ActionInstaller*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ActionInstaller.__zenCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*>)>(&::Zenject::ActionInstaller::__zenCreate)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x6e9b304;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ActionInstaller*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ActionInstaller.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::ActionInstaller::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x6e9b3e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ActionInstaller*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Action_1<::Zenject::DiContainer*>*& Zenject::ActionInstaller::__cordl_internal_get__installMethod() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____installMethod;
}
constexpr ::System::Action_1<::Zenject::DiContainer*>* const& Zenject::ActionInstaller::__cordl_internal_get__installMethod() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____installMethod;
}
constexpr void Zenject::ActionInstaller::__cordl_internal_set__installMethod(::System::Action_1<::Zenject::DiContainer*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____installMethod = value;
}
inline void Zenject::ActionInstaller::_ctor(::System::Action_1<::Zenject::DiContainer*>* installMethod) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ActionInstaller*>(), { ".ctor", {}, { ::i2c::type_of<::System::Action_1<::Zenject::DiContainer*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, installMethod);
}
inline void Zenject::ActionInstaller::InstallBindings() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Zenject::ActionInstaller*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Zenject::ActionInstaller::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ActionInstaller*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::ActionInstaller::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ActionInstaller*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::ActionInstaller* Zenject::ActionInstaller::New_ctor(::System::Action_1<::Zenject::DiContainer*>* installMethod) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::ActionInstaller*>(installMethod));
}
// Ctor Parameters []
constexpr ::Zenject::ActionInstaller::ActionInstaller() {}
