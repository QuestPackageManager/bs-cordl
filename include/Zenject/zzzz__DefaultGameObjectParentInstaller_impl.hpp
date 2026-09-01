#pragma once
// IWYU pragma private; include "Zenject\DefaultGameObjectParentInstaller.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__Installer_2_impl.hpp"
#include "Zenject/zzzz__DefaultGameObjectParentInstaller_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "Zenject/zzzz__DefaultGameObjectParentInstaller_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
//  Writing Method size for method: ::Zenject::DefaultGameObjectParentInstaller_DefaultParentObjectDestroyer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::DefaultGameObjectParentInstaller_DefaultParentObjectDestroyer::*)(::UnityEngine::GameObject*)>(
    &::Zenject::DefaultGameObjectParentInstaller_DefaultParentObjectDestroyer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e9bad4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DefaultGameObjectParentInstaller_DefaultParentObjectDestroyer*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::GameObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DefaultGameObjectParentInstaller_DefaultParentObjectDestroyer.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::DefaultGameObjectParentInstaller_DefaultParentObjectDestroyer::*)()>(
    &::Zenject::DefaultGameObjectParentInstaller_DefaultParentObjectDestroyer::Dispose)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6e9badc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DefaultGameObjectParentInstaller_DefaultParentObjectDestroyer*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DefaultGameObjectParentInstaller_DefaultParentObjectDestroyer.__zenCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*>)>(&::Zenject::DefaultGameObjectParentInstaller_DefaultParentObjectDestroyer::__zenCreate)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6e9bb3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DefaultGameObjectParentInstaller_DefaultParentObjectDestroyer*>(),
                                                                                           { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DefaultGameObjectParentInstaller_DefaultParentObjectDestroyer.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::DefaultGameObjectParentInstaller_DefaultParentObjectDestroyer::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x6e9bbd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DefaultGameObjectParentInstaller_DefaultParentObjectDestroyer*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& Zenject::DefaultGameObjectParentInstaller_DefaultParentObjectDestroyer::__cordl_internal_get__gameObject() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameObject;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Zenject::DefaultGameObjectParentInstaller_DefaultParentObjectDestroyer::__cordl_internal_get__gameObject() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameObject;
}
constexpr void Zenject::DefaultGameObjectParentInstaller_DefaultParentObjectDestroyer::__cordl_internal_set__gameObject(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____gameObject = value;
}
inline void Zenject::DefaultGameObjectParentInstaller_DefaultParentObjectDestroyer::_ctor(::UnityEngine::GameObject* gameObject) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DefaultGameObjectParentInstaller_DefaultParentObjectDestroyer*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::UnityEngine::GameObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gameObject);
}
inline void Zenject::DefaultGameObjectParentInstaller_DefaultParentObjectDestroyer::Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DefaultGameObjectParentInstaller_DefaultParentObjectDestroyer*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Zenject::DefaultGameObjectParentInstaller_DefaultParentObjectDestroyer::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DefaultGameObjectParentInstaller_DefaultParentObjectDestroyer*>(),
                                                                                         { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::DefaultGameObjectParentInstaller_DefaultParentObjectDestroyer::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DefaultGameObjectParentInstaller_DefaultParentObjectDestroyer*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::DefaultGameObjectParentInstaller_DefaultParentObjectDestroyer*
Zenject::DefaultGameObjectParentInstaller_DefaultParentObjectDestroyer::New_ctor(::UnityEngine::GameObject* gameObject) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::DefaultGameObjectParentInstaller_DefaultParentObjectDestroyer*>(gameObject));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr Zenject::DefaultGameObjectParentInstaller_DefaultParentObjectDestroyer::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Zenject::DefaultGameObjectParentInstaller_DefaultParentObjectDestroyer::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Zenject::DefaultGameObjectParentInstaller_DefaultParentObjectDestroyer::DefaultGameObjectParentInstaller_DefaultParentObjectDestroyer() {}
//  Writing Method size for method: ::Zenject::DefaultGameObjectParentInstaller._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::DefaultGameObjectParentInstaller::*)(::StringW)>(&::Zenject::DefaultGameObjectParentInstaller::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6e9b630;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DefaultGameObjectParentInstaller*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DefaultGameObjectParentInstaller.InstallBindings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::DefaultGameObjectParentInstaller::*)()>(&::Zenject::DefaultGameObjectParentInstaller::InstallBindings)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x6e9b680;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Zenject::DefaultGameObjectParentInstaller*>(), { ::i2c::class_of<::Zenject::DefaultGameObjectParentInstaller*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DefaultGameObjectParentInstaller.__zenCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*>)>(&::Zenject::DefaultGameObjectParentInstaller::__zenCreate)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6e9b7e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DefaultGameObjectParentInstaller*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DefaultGameObjectParentInstaller.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::DefaultGameObjectParentInstaller::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x6e9b8a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DefaultGameObjectParentInstaller*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& Zenject::DefaultGameObjectParentInstaller::__cordl_internal_get__name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____name;
}
constexpr ::StringW const& Zenject::DefaultGameObjectParentInstaller::__cordl_internal_get__name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____name;
}
constexpr void Zenject::DefaultGameObjectParentInstaller::__cordl_internal_set__name(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____name = value;
}
inline void Zenject::DefaultGameObjectParentInstaller::_ctor(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DefaultGameObjectParentInstaller*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
inline void Zenject::DefaultGameObjectParentInstaller::InstallBindings() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Zenject::DefaultGameObjectParentInstaller*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Zenject::DefaultGameObjectParentInstaller::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DefaultGameObjectParentInstaller*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::DefaultGameObjectParentInstaller::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DefaultGameObjectParentInstaller*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::DefaultGameObjectParentInstaller* Zenject::DefaultGameObjectParentInstaller::New_ctor(::StringW name) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::DefaultGameObjectParentInstaller*>(name));
}
// Ctor Parameters []
constexpr ::Zenject::DefaultGameObjectParentInstaller::DefaultGameObjectParentInstaller() {}
