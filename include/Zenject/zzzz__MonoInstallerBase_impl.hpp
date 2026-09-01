#pragma once
// IWYU pragma private; include "Zenject\MonoInstallerBase.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Zenject/zzzz__MonoInstallerBase_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__IInstaller_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
//  Writing Method size for method: ::Zenject::MonoInstallerBase.get_Container
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::DiContainer* (::Zenject::MonoInstallerBase::*)()>(&::Zenject::MonoInstallerBase::get_Container)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e75fc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::MonoInstallerBase*>(), { "get_Container", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::MonoInstallerBase.set_Container
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::MonoInstallerBase::*)(::Zenject::DiContainer*)>(&::Zenject::MonoInstallerBase::set_Container)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e75fd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::MonoInstallerBase*>(), { "set_Container", {}, { ::i2c::type_of<::Zenject::DiContainer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::MonoInstallerBase.get_IsEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Zenject::MonoInstallerBase::*)()>(&::Zenject::MonoInstallerBase::get_IsEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e75fd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Zenject::MonoInstallerBase*>(), { ::i2c::class_of<::Zenject::MonoInstallerBase*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::MonoInstallerBase.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::MonoInstallerBase::*)()>(&::Zenject::MonoInstallerBase::Start)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e75fe0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Zenject::MonoInstallerBase*>(), { ::i2c::class_of<::Zenject::MonoInstallerBase*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::MonoInstallerBase.InstallBindings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::MonoInstallerBase::*)()>(&::Zenject::MonoInstallerBase::InstallBindings)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6e75fe4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Zenject::MonoInstallerBase*>(), { ::i2c::class_of<::Zenject::MonoInstallerBase*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::MonoInstallerBase._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::MonoInstallerBase::*)()>(&::Zenject::MonoInstallerBase::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e75e7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::MonoInstallerBase*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::MonoInstallerBase.__zenPropertySetter0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*, ::System::Object*)>(&::Zenject::MonoInstallerBase::__zenPropertySetter0)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x6e7601c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Zenject::MonoInstallerBase*>(), { "__zenPropertySetter0", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::MonoInstallerBase.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::MonoInstallerBase::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x6e760fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::MonoInstallerBase*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Zenject::DiContainer*& Zenject::MonoInstallerBase::__cordl_internal_get__Container_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Container_k__BackingField;
}
constexpr ::Zenject::DiContainer* const& Zenject::MonoInstallerBase::__cordl_internal_get__Container_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Container_k__BackingField;
}
constexpr void Zenject::MonoInstallerBase::__cordl_internal_set__Container_k__BackingField(::Zenject::DiContainer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Container_k__BackingField = value;
}
inline ::Zenject::DiContainer* Zenject::MonoInstallerBase::get_Container() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::MonoInstallerBase*>(), { "get_Container", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::DiContainer*>(this, ___internal_method);
}
inline void Zenject::MonoInstallerBase::set_Container(::Zenject::DiContainer* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::MonoInstallerBase*>(), { "set_Container", {}, { ::i2c::type_of<::Zenject::DiContainer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Zenject::MonoInstallerBase::get_IsEnabled() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Zenject::MonoInstallerBase*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Zenject::MonoInstallerBase::Start() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Zenject::MonoInstallerBase*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Zenject::MonoInstallerBase::InstallBindings() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Zenject::MonoInstallerBase*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Zenject::MonoInstallerBase::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::MonoInstallerBase*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Zenject::MonoInstallerBase::__zenPropertySetter0(::System::Object* P_0, ::System::Object* P_1) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Zenject::MonoInstallerBase*>(), { "__zenPropertySetter0", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, P_0, P_1);
}
inline ::Zenject::InjectTypeInfo* Zenject::MonoInstallerBase::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::MonoInstallerBase*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::MonoInstallerBase* Zenject::MonoInstallerBase::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::MonoInstallerBase*>());
}
/// @brief Convert operator to "::Zenject::IInstaller"
constexpr Zenject::MonoInstallerBase::operator ::Zenject::IInstaller*() noexcept {
  return static_cast<::Zenject::IInstaller*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::IInstaller"
constexpr ::Zenject::IInstaller* Zenject::MonoInstallerBase::i___Zenject__IInstaller() noexcept {
  return static_cast<::Zenject::IInstaller*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Zenject::MonoInstallerBase::MonoInstallerBase() {}
