#pragma once
// IWYU pragma private; include "Zenject\ScriptableObjectInstallerBase.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "Zenject/zzzz__ScriptableObjectInstallerBase_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__IInstaller_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
//  Writing Method size for method: ::Zenject::ScriptableObjectInstallerBase.get_Container
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::DiContainer* (::Zenject::ScriptableObjectInstallerBase::*)()>(&::Zenject::ScriptableObjectInstallerBase::get_Container)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e76570;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ScriptableObjectInstallerBase*>(), { "get_Container", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ScriptableObjectInstallerBase.Zenject_IInstaller_get_IsEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Zenject::ScriptableObjectInstallerBase::*)()>(&::Zenject::ScriptableObjectInstallerBase::Zenject_IInstaller_get_IsEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e76578;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ScriptableObjectInstallerBase*>(), { "Zenject.IInstaller.get_IsEnabled", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ScriptableObjectInstallerBase.InstallBindings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::ScriptableObjectInstallerBase::*)()>(&::Zenject::ScriptableObjectInstallerBase::InstallBindings)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6e76580;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Zenject::ScriptableObjectInstallerBase*>(), { ::i2c::class_of<::Zenject::ScriptableObjectInstallerBase*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ScriptableObjectInstallerBase._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::ScriptableObjectInstallerBase::*)()>(&::Zenject::ScriptableObjectInstallerBase::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e7637c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ScriptableObjectInstallerBase*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ScriptableObjectInstallerBase.__zenCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*>)>(&::Zenject::ScriptableObjectInstallerBase::__zenCreate)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6e765b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ScriptableObjectInstallerBase*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ScriptableObjectInstallerBase.__zenFieldSetter0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*, ::System::Object*)>(&::Zenject::ScriptableObjectInstallerBase::__zenFieldSetter0)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x6e76610;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ScriptableObjectInstallerBase*>(),
                                                                                           { "__zenFieldSetter0", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ScriptableObjectInstallerBase.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::ScriptableObjectInstallerBase::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x6e76734;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ScriptableObjectInstallerBase*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Zenject::DiContainer*& Zenject::ScriptableObjectInstallerBase::__cordl_internal_get__container() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____container;
}
constexpr ::Zenject::DiContainer* const& Zenject::ScriptableObjectInstallerBase::__cordl_internal_get__container() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____container;
}
constexpr void Zenject::ScriptableObjectInstallerBase::__cordl_internal_set__container(::Zenject::DiContainer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____container = value;
}
inline ::Zenject::DiContainer* Zenject::ScriptableObjectInstallerBase::get_Container() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ScriptableObjectInstallerBase*>(), { "get_Container", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::DiContainer*>(this, ___internal_method);
}
inline bool Zenject::ScriptableObjectInstallerBase::Zenject_IInstaller_get_IsEnabled() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ScriptableObjectInstallerBase*>(), { "Zenject.IInstaller.get_IsEnabled", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Zenject::ScriptableObjectInstallerBase::InstallBindings() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Zenject::ScriptableObjectInstallerBase*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Zenject::ScriptableObjectInstallerBase::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ScriptableObjectInstallerBase*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Zenject::ScriptableObjectInstallerBase::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ScriptableObjectInstallerBase*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
inline void Zenject::ScriptableObjectInstallerBase::__zenFieldSetter0(::System::Object* P_0, ::System::Object* P_1) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ScriptableObjectInstallerBase*>(),
                                                                                         { "__zenFieldSetter0", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, P_0, P_1);
}
inline ::Zenject::InjectTypeInfo* Zenject::ScriptableObjectInstallerBase::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ScriptableObjectInstallerBase*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::ScriptableObjectInstallerBase* Zenject::ScriptableObjectInstallerBase::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::ScriptableObjectInstallerBase*>());
}
/// @brief Convert operator to "::Zenject::IInstaller"
constexpr Zenject::ScriptableObjectInstallerBase::operator ::Zenject::IInstaller*() noexcept {
  return static_cast<::Zenject::IInstaller*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::IInstaller"
constexpr ::Zenject::IInstaller* Zenject::ScriptableObjectInstallerBase::i___Zenject__IInstaller() noexcept {
  return static_cast<::Zenject::IInstaller*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Zenject::ScriptableObjectInstallerBase::ScriptableObjectInstallerBase() {}
