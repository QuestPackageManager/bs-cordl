#pragma once
// IWYU pragma private; include "Zenject/SceneDecoratorContext.hpp"
#include "Zenject/zzzz__Context_impl.hpp"
#include "Zenject/zzzz__SceneDecoratorContext_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
#include "Zenject/zzzz__MonoInstaller_def.hpp"
#include "Zenject/zzzz__ScriptableObjectInstaller_def.hpp"
//  Writing Method size for method: ::Zenject::SceneDecoratorContext.get_LateInstallers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityW<::Zenject::MonoInstaller>>* (::Zenject::SceneDecoratorContext::*)()>(
    &::Zenject::SceneDecoratorContext::get_LateInstallers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e71d0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SceneDecoratorContext*>(), { "get_LateInstallers", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SceneDecoratorContext.set_LateInstallers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::SceneDecoratorContext::*)(::System::Collections::Generic::IEnumerable_1<::UnityW<::Zenject::MonoInstaller>>*)>(
    &::Zenject::SceneDecoratorContext::set_LateInstallers)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x6e71d14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SceneDecoratorContext*>(),
                                                             { "set_LateInstallers", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityW<::Zenject::MonoInstaller>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SceneDecoratorContext.get_LateInstallerPrefabs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityW<::Zenject::MonoInstaller>>* (::Zenject::SceneDecoratorContext::*)()>(
    &::Zenject::SceneDecoratorContext::get_LateInstallerPrefabs)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e71dd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SceneDecoratorContext*>(), { "get_LateInstallerPrefabs", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SceneDecoratorContext.set_LateInstallerPrefabs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::SceneDecoratorContext::*)(::System::Collections::Generic::IEnumerable_1<::UnityW<::Zenject::MonoInstaller>>*)>(
    &::Zenject::SceneDecoratorContext::set_LateInstallerPrefabs)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x6e71dd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SceneDecoratorContext*>(),
                                                { "set_LateInstallerPrefabs", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityW<::Zenject::MonoInstaller>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SceneDecoratorContext.get_LateScriptableObjectInstallers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityW<::Zenject::ScriptableObjectInstaller>>* (::Zenject::SceneDecoratorContext::*)()>(
    &::Zenject::SceneDecoratorContext::get_LateScriptableObjectInstallers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e71e94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SceneDecoratorContext*>(), { "get_LateScriptableObjectInstallers", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SceneDecoratorContext.set_LateScriptableObjectInstallers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::SceneDecoratorContext::*)(::System::Collections::Generic::IEnumerable_1<::UnityW<::Zenject::ScriptableObjectInstaller>>*)>(
    &::Zenject::SceneDecoratorContext::set_LateScriptableObjectInstallers)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x6e71e9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Zenject::SceneDecoratorContext*>(),
                            { "set_LateScriptableObjectInstallers", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityW<::Zenject::ScriptableObjectInstaller>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SceneDecoratorContext.get_DecoratedContractName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Zenject::SceneDecoratorContext::*)()>(&::Zenject::SceneDecoratorContext::get_DecoratedContractName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e71f58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SceneDecoratorContext*>(), { "get_DecoratedContractName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SceneDecoratorContext.get_Container
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::DiContainer* (::Zenject::SceneDecoratorContext::*)()>(&::Zenject::SceneDecoratorContext::get_Container)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6e71f60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Zenject::SceneDecoratorContext*>(), { ::i2c::class_of<::Zenject::SceneDecoratorContext*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SceneDecoratorContext.GetRootGameObjects
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::GameObject>>* (::Zenject::SceneDecoratorContext::*)()>(
    &::Zenject::SceneDecoratorContext::GetRootGameObjects)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6e71f80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Zenject::SceneDecoratorContext*>(), { ::i2c::class_of<::Zenject::SceneDecoratorContext*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SceneDecoratorContext.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::SceneDecoratorContext::*)(::Zenject::DiContainer*)>(&::Zenject::SceneDecoratorContext::Initialize)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x6e707f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SceneDecoratorContext*>(), { "Initialize", {}, { ::i2c::type_of<::Zenject::DiContainer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SceneDecoratorContext.InstallDecoratorSceneBindings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::SceneDecoratorContext::*)()>(&::Zenject::SceneDecoratorContext::InstallDecoratorSceneBindings)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6e70f50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SceneDecoratorContext*>(), { "InstallDecoratorSceneBindings", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SceneDecoratorContext.InstallDecoratorInstallers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::SceneDecoratorContext::*)()>(&::Zenject::SceneDecoratorContext::InstallDecoratorInstallers)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6e70fd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SceneDecoratorContext*>(), { "InstallDecoratorInstallers", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SceneDecoratorContext.GetInjectableMonoBehaviours
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::SceneDecoratorContext::*)(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MonoBehaviour>>*)>(
    &::Zenject::SceneDecoratorContext::GetInjectableMonoBehaviours)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6e71fa8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Zenject::SceneDecoratorContext*>(), { ::i2c::class_of<::Zenject::SceneDecoratorContext*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SceneDecoratorContext.InstallLateDecoratorInstallers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::SceneDecoratorContext::*)()>(&::Zenject::SceneDecoratorContext::InstallLateDecoratorInstallers)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x6e70fe0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SceneDecoratorContext*>(), { "InstallLateDecoratorInstallers", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SceneDecoratorContext._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::SceneDecoratorContext::*)()>(&::Zenject::SceneDecoratorContext::_ctor)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x6e71ff4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SceneDecoratorContext*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SceneDecoratorContext.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::SceneDecoratorContext::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x6e7211c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SceneDecoratorContext*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityW<::Zenject::MonoInstaller>>*& Zenject::SceneDecoratorContext::__cordl_internal_get__lateInstallers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lateInstallers;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::Zenject::MonoInstaller>>* const& Zenject::SceneDecoratorContext::__cordl_internal_get__lateInstallers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lateInstallers;
}
constexpr void Zenject::SceneDecoratorContext::__cordl_internal_set__lateInstallers(::System::Collections::Generic::List_1<::UnityW<::Zenject::MonoInstaller>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lateInstallers = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::Zenject::MonoInstaller>>*& Zenject::SceneDecoratorContext::__cordl_internal_get__lateInstallerPrefabs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lateInstallerPrefabs;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::Zenject::MonoInstaller>>* const& Zenject::SceneDecoratorContext::__cordl_internal_get__lateInstallerPrefabs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lateInstallerPrefabs;
}
constexpr void Zenject::SceneDecoratorContext::__cordl_internal_set__lateInstallerPrefabs(::System::Collections::Generic::List_1<::UnityW<::Zenject::MonoInstaller>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lateInstallerPrefabs = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::Zenject::ScriptableObjectInstaller>>*& Zenject::SceneDecoratorContext::__cordl_internal_get__lateScriptableObjectInstallers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lateScriptableObjectInstallers;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::Zenject::ScriptableObjectInstaller>>* const& Zenject::SceneDecoratorContext::__cordl_internal_get__lateScriptableObjectInstallers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lateScriptableObjectInstallers;
}
constexpr void Zenject::SceneDecoratorContext::__cordl_internal_set__lateScriptableObjectInstallers(::System::Collections::Generic::List_1<::UnityW<::Zenject::ScriptableObjectInstaller>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lateScriptableObjectInstallers = value;
}
constexpr ::StringW& Zenject::SceneDecoratorContext::__cordl_internal_get__decoratedContractName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____decoratedContractName;
}
constexpr ::StringW const& Zenject::SceneDecoratorContext::__cordl_internal_get__decoratedContractName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____decoratedContractName;
}
constexpr void Zenject::SceneDecoratorContext::__cordl_internal_set__decoratedContractName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____decoratedContractName = value;
}
constexpr ::Zenject::DiContainer*& Zenject::SceneDecoratorContext::__cordl_internal_get__container() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____container;
}
constexpr ::Zenject::DiContainer* const& Zenject::SceneDecoratorContext::__cordl_internal_get__container() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____container;
}
constexpr void Zenject::SceneDecoratorContext::__cordl_internal_set__container(::Zenject::DiContainer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____container = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MonoBehaviour>>*& Zenject::SceneDecoratorContext::__cordl_internal_get__injectableMonoBehaviours() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____injectableMonoBehaviours;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MonoBehaviour>>* const& Zenject::SceneDecoratorContext::__cordl_internal_get__injectableMonoBehaviours() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____injectableMonoBehaviours;
}
constexpr void Zenject::SceneDecoratorContext::__cordl_internal_set__injectableMonoBehaviours(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MonoBehaviour>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____injectableMonoBehaviours = value;
}
inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::Zenject::MonoInstaller>>* Zenject::SceneDecoratorContext::get_LateInstallers() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SceneDecoratorContext*>(), { "get_LateInstallers", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityW<::Zenject::MonoInstaller>>*>(this, ___internal_method);
}
inline void Zenject::SceneDecoratorContext::set_LateInstallers(::System::Collections::Generic::IEnumerable_1<::UnityW<::Zenject::MonoInstaller>>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SceneDecoratorContext*>(),
                                                           { "set_LateInstallers", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityW<::Zenject::MonoInstaller>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::Zenject::MonoInstaller>>* Zenject::SceneDecoratorContext::get_LateInstallerPrefabs() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SceneDecoratorContext*>(), { "get_LateInstallerPrefabs", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityW<::Zenject::MonoInstaller>>*>(this, ___internal_method);
}
inline void Zenject::SceneDecoratorContext::set_LateInstallerPrefabs(::System::Collections::Generic::IEnumerable_1<::UnityW<::Zenject::MonoInstaller>>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SceneDecoratorContext*>(),
                                              { "set_LateInstallerPrefabs", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityW<::Zenject::MonoInstaller>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::Zenject::ScriptableObjectInstaller>>* Zenject::SceneDecoratorContext::get_LateScriptableObjectInstallers() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SceneDecoratorContext*>(), { "get_LateScriptableObjectInstallers", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityW<::Zenject::ScriptableObjectInstaller>>*>(this, ___internal_method);
}
inline void Zenject::SceneDecoratorContext::set_LateScriptableObjectInstallers(::System::Collections::Generic::IEnumerable_1<::UnityW<::Zenject::ScriptableObjectInstaller>>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Zenject::SceneDecoratorContext*>(),
                          { "set_LateScriptableObjectInstallers", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityW<::Zenject::ScriptableObjectInstaller>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Zenject::SceneDecoratorContext::get_DecoratedContractName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SceneDecoratorContext*>(), { "get_DecoratedContractName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Zenject::DiContainer* Zenject::SceneDecoratorContext::get_Container() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Zenject::SceneDecoratorContext*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::DiContainer*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::GameObject>>* Zenject::SceneDecoratorContext::GetRootGameObjects() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Zenject::SceneDecoratorContext*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::GameObject>>*>(this, ___internal_method);
}
inline void Zenject::SceneDecoratorContext::Initialize(::Zenject::DiContainer* container) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SceneDecoratorContext*>(), { "Initialize", {}, { ::i2c::type_of<::Zenject::DiContainer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, container);
}
inline void Zenject::SceneDecoratorContext::InstallDecoratorSceneBindings() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SceneDecoratorContext*>(), { "InstallDecoratorSceneBindings", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Zenject::SceneDecoratorContext::InstallDecoratorInstallers() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SceneDecoratorContext*>(), { "InstallDecoratorInstallers", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Zenject::SceneDecoratorContext::GetInjectableMonoBehaviours(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MonoBehaviour>>* monoBehaviours) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Zenject::SceneDecoratorContext*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, monoBehaviours);
}
inline void Zenject::SceneDecoratorContext::InstallLateDecoratorInstallers() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SceneDecoratorContext*>(), { "InstallLateDecoratorInstallers", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Zenject::SceneDecoratorContext::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SceneDecoratorContext*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Zenject::InjectTypeInfo* Zenject::SceneDecoratorContext::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SceneDecoratorContext*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::SceneDecoratorContext* Zenject::SceneDecoratorContext::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::SceneDecoratorContext*>());
}
// Ctor Parameters []
constexpr ::Zenject::SceneDecoratorContext::SceneDecoratorContext() {}
