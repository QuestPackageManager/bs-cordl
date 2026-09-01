#pragma once
// IWYU pragma private; include "Zenject\AnimatorInstaller.hpp"
#include "Zenject/zzzz__Installer_2_impl.hpp"
#include "Zenject/zzzz__AnimatorInstaller_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Animator_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
//  Writing Method size for method: ::Zenject::AnimatorInstaller._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::AnimatorInstaller::*)(::UnityEngine::Animator*)>(&::Zenject::AnimatorInstaller::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6e8d83c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::AnimatorInstaller*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Animator*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::AnimatorInstaller.InstallBindings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::AnimatorInstaller::*)()>(&::Zenject::AnimatorInstaller::InstallBindings)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x6e8d88c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Zenject::AnimatorInstaller*>(), { ::i2c::class_of<::Zenject::AnimatorInstaller*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::AnimatorInstaller.__zenCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*>)>(&::Zenject::AnimatorInstaller::__zenCreate)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x6e8d948;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::AnimatorInstaller*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::AnimatorInstaller.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::AnimatorInstaller::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x6e8da38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::AnimatorInstaller*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Animator>& Zenject::AnimatorInstaller::__cordl_internal_get__animator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____animator;
}
constexpr ::UnityW<::UnityEngine::Animator> const& Zenject::AnimatorInstaller::__cordl_internal_get__animator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____animator;
}
constexpr void Zenject::AnimatorInstaller::__cordl_internal_set__animator(::UnityW<::UnityEngine::Animator> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____animator = value;
}
inline void Zenject::AnimatorInstaller::_ctor(::UnityEngine::Animator* animator) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::AnimatorInstaller*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Animator*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, animator);
}
inline void Zenject::AnimatorInstaller::InstallBindings() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Zenject::AnimatorInstaller*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Zenject::AnimatorInstaller::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::AnimatorInstaller*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::AnimatorInstaller::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::AnimatorInstaller*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::AnimatorInstaller* Zenject::AnimatorInstaller::New_ctor(::UnityEngine::Animator* animator) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::AnimatorInstaller*>(animator));
}
// Ctor Parameters []
constexpr ::Zenject::AnimatorInstaller::AnimatorInstaller() {}
