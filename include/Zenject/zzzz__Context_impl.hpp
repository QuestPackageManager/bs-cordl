#pragma once
// IWYU pragma private; include "Zenject\Context.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Zenject/zzzz__Context_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "Zenject/zzzz__Context_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
#include "Zenject/zzzz__InstallerBase_def.hpp"
#include "Zenject/zzzz__MonoInstaller_def.hpp"
#include "Zenject/zzzz__ScriptableObjectInstaller_def.hpp"
#include "Zenject/zzzz__ZenjectBinding_def.hpp"
//  Writing Method size for method: ::Zenject::Context___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::Context___c::*)()>(&::Zenject::Context___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e6eb84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Context___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Context___c._set_NormalInstallerTypes_b__16_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Zenject::Context___c::*)(::System::Type*)>(&::Zenject::Context___c::_set_NormalInstallerTypes_b__16_0)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6e6eb88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Context___c*>(), { "<set_NormalInstallerTypes>b__16_0", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Context___c.__zenCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*>)>(&::Zenject::Context___c::__zenCreate)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e6ec28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Context___c*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Context___c.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::Context___c::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x6e6ec6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Context___c*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
inline void Zenject::Context___c::setStaticF___9(::Zenject::Context___c* value) {
  ::cordl_internals::setStaticField<::Zenject::Context___c*, "<>9", ::Zenject::Context___c*>(std::forward<::Zenject::Context___c*>(value));
}
inline ::Zenject::Context___c* Zenject::Context___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::Zenject::Context___c*, "<>9", ::Zenject::Context___c*>();
}
inline void Zenject::Context___c::setStaticF___9__16_0(::System::Func_2<::System::Type*, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::System::Type*, bool>*, "<>9__16_0", ::Zenject::Context___c*>(std::forward<::System::Func_2<::System::Type*, bool>*>(value));
}
inline ::System::Func_2<::System::Type*, bool>* Zenject::Context___c::getStaticF___9__16_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::System::Type*, bool>*, "<>9__16_0", ::Zenject::Context___c*>();
}
inline void Zenject::Context___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Context___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Zenject::Context___c::_set_NormalInstallerTypes_b__16_0(::System::Type* x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Context___c*>(), { "<set_NormalInstallerTypes>b__16_0", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline ::System::Object* Zenject::Context___c::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Context___c*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::Context___c::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Context___c*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::Context___c* Zenject::Context___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::Context___c*>());
}
// Ctor Parameters []
constexpr ::Zenject::Context___c::Context___c() {}
//  Writing Method size for method: ::Zenject::Context.get_Installers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityW<::Zenject::MonoInstaller>>* (::Zenject::Context::*)()>(
    &::Zenject::Context::get_Installers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e6ca70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Context*>(), { "get_Installers", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Context.set_Installers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::Context::*)(::System::Collections::Generic::IEnumerable_1<::UnityW<::Zenject::MonoInstaller>>*)>(
    &::Zenject::Context::set_Installers)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x6e6ca78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Context*>(),
                                                             { "set_Installers", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityW<::Zenject::MonoInstaller>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Context.get_InstallerPrefabs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityW<::Zenject::MonoInstaller>>* (::Zenject::Context::*)()>(
    &::Zenject::Context::get_InstallerPrefabs)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e6cb34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Context*>(), { "get_InstallerPrefabs", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Context.set_InstallerPrefabs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::Context::*)(::System::Collections::Generic::IEnumerable_1<::UnityW<::Zenject::MonoInstaller>>*)>(
    &::Zenject::Context::set_InstallerPrefabs)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x6e6cb3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Context*>(),
                                                { "set_InstallerPrefabs", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityW<::Zenject::MonoInstaller>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Context.get_ScriptableObjectInstallers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityW<::Zenject::ScriptableObjectInstaller>>* (::Zenject::Context::*)()>(
    &::Zenject::Context::get_ScriptableObjectInstallers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e6cbf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Context*>(), { "get_ScriptableObjectInstallers", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Context.set_ScriptableObjectInstallers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::Context::*)(::System::Collections::Generic::IEnumerable_1<::UnityW<::Zenject::ScriptableObjectInstaller>>*)>(
    &::Zenject::Context::set_ScriptableObjectInstallers)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x6e6cc00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Zenject::Context*>(),
                            { "set_ScriptableObjectInstallers", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityW<::Zenject::ScriptableObjectInstaller>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Context.get_NormalInstallerTypes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::System::Type*>* (::Zenject::Context::*)()>(&::Zenject::Context::get_NormalInstallerTypes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e6ccbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Context*>(), { "get_NormalInstallerTypes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Context.set_NormalInstallerTypes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::Context::*)(::System::Collections::Generic::IEnumerable_1<::System::Type*>*)>(&::Zenject::Context::set_NormalInstallerTypes)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x6e6ccc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Zenject::Context*>(), { "set_NormalInstallerTypes", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Type*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Context.get_NormalInstallers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::Zenject::InstallerBase*>* (::Zenject::Context::*)()>(
    &::Zenject::Context::get_NormalInstallers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e6ce5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Context*>(), { "get_NormalInstallers", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Context.set_NormalInstallers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::Context::*)(::System::Collections::Generic::IEnumerable_1<::Zenject::InstallerBase*>*)>(
    &::Zenject::Context::set_NormalInstallers)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x6e6ce64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Zenject::Context*>(), { "set_NormalInstallers", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::Zenject::InstallerBase*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Context.get_Container
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::DiContainer* (::Zenject::Context::*)()>(&::Zenject::Context::get_Container)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Zenject::Context*>(), { ::i2c::class_of<::Zenject::Context*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Context.GetRootGameObjects
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::GameObject>>* (::Zenject::Context::*)()>(
    &::Zenject::Context::GetRootGameObjects)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Zenject::Context*>(), { ::i2c::class_of<::Zenject::Context*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Context.AddNormalInstallerType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::Context::*)(::System::Type*)>(&::Zenject::Context::AddNormalInstallerType)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x6e6cf20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Context*>(), { "AddNormalInstallerType", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Context.AddNormalInstaller
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::Context::*)(::Zenject::InstallerBase*)>(&::Zenject::Context::AddNormalInstaller)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6e6d038;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Context*>(), { "AddNormalInstaller", {}, { ::i2c::type_of<::Zenject::InstallerBase*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Context.CheckInstallerPrefabTypes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::Zenject::Context::*)(::System::Collections::Generic::List_1<::UnityW<::Zenject::MonoInstaller>>*, ::System::Collections::Generic::List_1<::UnityW<::Zenject::MonoInstaller>>*)>(
        &::Zenject::Context::CheckInstallerPrefabTypes)> {
  constexpr static std::size_t size = 0x3dc;
  constexpr static std::size_t addrs = 0x6e6d0ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Context*>(), { "CheckInstallerPrefabTypes",
                                                                                          {},
                                                                                          { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::Zenject::MonoInstaller>>*>(),
                                                                                            ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::Zenject::MonoInstaller>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Context.InstallInstallers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::Context::*)()>(&::Zenject::Context::InstallInstallers)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6e6d4c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Zenject::Context*>(), { ::i2c::class_of<::Zenject::Context*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Context.InstallInstallers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::Context::*)(
    ::System::Collections::Generic::List_1<::Zenject::InstallerBase*>*, ::System::Collections::Generic::List_1<::System::Type*>*,
    ::System::Collections::Generic::List_1<::UnityW<::Zenject::ScriptableObjectInstaller>>*, ::System::Collections::Generic::List_1<::UnityW<::Zenject::MonoInstaller>>*,
    ::System::Collections::Generic::List_1<::UnityW<::Zenject::MonoInstaller>>*)>(&::Zenject::Context::InstallInstallers)> {
  constexpr static std::size_t size = 0x674;
  constexpr static std::size_t addrs = 0x6e6d4d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Context*>(), { "InstallInstallers",
                                                                                          {},
                                                                                          { ::i2c::type_of<::System::Collections::Generic::List_1<::Zenject::InstallerBase*>*>(),
                                                                                            ::i2c::type_of<::System::Collections::Generic::List_1<::System::Type*>*>(),
                                                                                            ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::Zenject::ScriptableObjectInstaller>>*>(),
                                                                                            ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::Zenject::MonoInstaller>>*>(),
                                                                                            ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::Zenject::MonoInstaller>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Context.InstallSceneBindings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::Context::*)(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MonoBehaviour>>*)>(
    &::Zenject::Context::InstallSceneBindings)> {
  constexpr static std::size_t size = 0x53c;
  constexpr static std::size_t addrs = 0x6e6dc20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Context*>(),
                                                             { "InstallSceneBindings", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MonoBehaviour>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Context.InstallZenjectBinding
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::Context::*)(::Zenject::ZenjectBinding*)>(&::Zenject::Context::InstallZenjectBinding)> {
  constexpr static std::size_t size = 0x68c;
  constexpr static std::size_t addrs = 0x6e6e15c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Context*>(), { "InstallZenjectBinding", {}, { ::i2c::type_of<::Zenject::ZenjectBinding*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Context.GetInjectableMonoBehaviours
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::Context::*)(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MonoBehaviour>>*)>(
    &::Zenject::Context::GetInjectableMonoBehaviours)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Zenject::Context*>(), { ::i2c::class_of<::Zenject::Context*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Context._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::Context::*)()>(&::Zenject::Context::_ctor)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x6e6e878;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Context*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Context.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::Context::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x6e6e9e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Context*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityW<::Zenject::ScriptableObjectInstaller>>*& Zenject::Context::__cordl_internal_get__scriptableObjectInstallers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scriptableObjectInstallers;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::Zenject::ScriptableObjectInstaller>>* const& Zenject::Context::__cordl_internal_get__scriptableObjectInstallers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scriptableObjectInstallers;
}
constexpr void Zenject::Context::__cordl_internal_set__scriptableObjectInstallers(::System::Collections::Generic::List_1<::UnityW<::Zenject::ScriptableObjectInstaller>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____scriptableObjectInstallers = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::Zenject::MonoInstaller>>*& Zenject::Context::__cordl_internal_get__monoInstallers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____monoInstallers;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::Zenject::MonoInstaller>>* const& Zenject::Context::__cordl_internal_get__monoInstallers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____monoInstallers;
}
constexpr void Zenject::Context::__cordl_internal_set__monoInstallers(::System::Collections::Generic::List_1<::UnityW<::Zenject::MonoInstaller>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____monoInstallers = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::Zenject::MonoInstaller>>*& Zenject::Context::__cordl_internal_get__installerPrefabs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____installerPrefabs;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::Zenject::MonoInstaller>>* const& Zenject::Context::__cordl_internal_get__installerPrefabs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____installerPrefabs;
}
constexpr void Zenject::Context::__cordl_internal_set__installerPrefabs(::System::Collections::Generic::List_1<::UnityW<::Zenject::MonoInstaller>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____installerPrefabs = value;
}
constexpr ::System::Collections::Generic::List_1<::Zenject::InstallerBase*>*& Zenject::Context::__cordl_internal_get__normalInstallers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____normalInstallers;
}
constexpr ::System::Collections::Generic::List_1<::Zenject::InstallerBase*>* const& Zenject::Context::__cordl_internal_get__normalInstallers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____normalInstallers;
}
constexpr void Zenject::Context::__cordl_internal_set__normalInstallers(::System::Collections::Generic::List_1<::Zenject::InstallerBase*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____normalInstallers = value;
}
constexpr ::System::Collections::Generic::List_1<::System::Type*>*& Zenject::Context::__cordl_internal_get__normalInstallerTypes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____normalInstallerTypes;
}
constexpr ::System::Collections::Generic::List_1<::System::Type*>* const& Zenject::Context::__cordl_internal_get__normalInstallerTypes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____normalInstallerTypes;
}
constexpr void Zenject::Context::__cordl_internal_set__normalInstallerTypes(::System::Collections::Generic::List_1<::System::Type*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____normalInstallerTypes = value;
}
inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::Zenject::MonoInstaller>>* Zenject::Context::get_Installers() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Context*>(), { "get_Installers", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityW<::Zenject::MonoInstaller>>*>(this, ___internal_method);
}
inline void Zenject::Context::set_Installers(::System::Collections::Generic::IEnumerable_1<::UnityW<::Zenject::MonoInstaller>>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Zenject::Context*>(), { "set_Installers", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityW<::Zenject::MonoInstaller>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::Zenject::MonoInstaller>>* Zenject::Context::get_InstallerPrefabs() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Context*>(), { "get_InstallerPrefabs", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityW<::Zenject::MonoInstaller>>*>(this, ___internal_method);
}
inline void Zenject::Context::set_InstallerPrefabs(::System::Collections::Generic::IEnumerable_1<::UnityW<::Zenject::MonoInstaller>>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Context*>(),
                                                           { "set_InstallerPrefabs", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityW<::Zenject::MonoInstaller>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::Zenject::ScriptableObjectInstaller>>* Zenject::Context::get_ScriptableObjectInstallers() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Context*>(), { "get_ScriptableObjectInstallers", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityW<::Zenject::ScriptableObjectInstaller>>*>(this, ___internal_method);
}
inline void Zenject::Context::set_ScriptableObjectInstallers(::System::Collections::Generic::IEnumerable_1<::UnityW<::Zenject::ScriptableObjectInstaller>>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Zenject::Context*>(),
                          { "set_ScriptableObjectInstallers", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityW<::Zenject::ScriptableObjectInstaller>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::IEnumerable_1<::System::Type*>* Zenject::Context::get_NormalInstallerTypes() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Context*>(), { "get_NormalInstallerTypes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::System::Type*>*>(this, ___internal_method);
}
inline void Zenject::Context::set_NormalInstallerTypes(::System::Collections::Generic::IEnumerable_1<::System::Type*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Zenject::Context*>(), { "set_NormalInstallerTypes", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Type*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::IEnumerable_1<::Zenject::InstallerBase*>* Zenject::Context::get_NormalInstallers() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Context*>(), { "get_NormalInstallers", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Zenject::InstallerBase*>*>(this, ___internal_method);
}
inline void Zenject::Context::set_NormalInstallers(::System::Collections::Generic::IEnumerable_1<::Zenject::InstallerBase*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Zenject::Context*>(), { "set_NormalInstallers", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::Zenject::InstallerBase*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Zenject::DiContainer* Zenject::Context::get_Container() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Zenject::Context*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::DiContainer*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::GameObject>>* Zenject::Context::GetRootGameObjects() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Zenject::Context*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::GameObject>>*>(this, ___internal_method);
}
inline void Zenject::Context::AddNormalInstallerType(::System::Type* installerType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Context*>(), { "AddNormalInstallerType", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, installerType);
}
inline void Zenject::Context::AddNormalInstaller(::Zenject::InstallerBase* installer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Context*>(), { "AddNormalInstaller", {}, { ::i2c::type_of<::Zenject::InstallerBase*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, installer);
}
inline void Zenject::Context::CheckInstallerPrefabTypes(::System::Collections::Generic::List_1<::UnityW<::Zenject::MonoInstaller>>* installers,
                                                        ::System::Collections::Generic::List_1<::UnityW<::Zenject::MonoInstaller>>* installerPrefabs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Context*>(), { "CheckInstallerPrefabTypes",
                                                                                        {},
                                                                                        { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::Zenject::MonoInstaller>>*>(),
                                                                                          ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::Zenject::MonoInstaller>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, installers, installerPrefabs);
}
inline void Zenject::Context::InstallInstallers() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Zenject::Context*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Zenject::Context::InstallInstallers(::System::Collections::Generic::List_1<::Zenject::InstallerBase*>* normalInstallers,
                                                ::System::Collections::Generic::List_1<::System::Type*>* normalInstallerTypes,
                                                ::System::Collections::Generic::List_1<::UnityW<::Zenject::ScriptableObjectInstaller>>* scriptableObjectInstallers,
                                                ::System::Collections::Generic::List_1<::UnityW<::Zenject::MonoInstaller>>* installers,
                                                ::System::Collections::Generic::List_1<::UnityW<::Zenject::MonoInstaller>>* installerPrefabs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Context*>(), { "InstallInstallers",
                                                                                        {},
                                                                                        { ::i2c::type_of<::System::Collections::Generic::List_1<::Zenject::InstallerBase*>*>(),
                                                                                          ::i2c::type_of<::System::Collections::Generic::List_1<::System::Type*>*>(),
                                                                                          ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::Zenject::ScriptableObjectInstaller>>*>(),
                                                                                          ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::Zenject::MonoInstaller>>*>(),
                                                                                          ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::Zenject::MonoInstaller>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, normalInstallers, normalInstallerTypes, scriptableObjectInstallers, installers, installerPrefabs);
}
inline void Zenject::Context::InstallSceneBindings(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MonoBehaviour>>* injectableMonoBehaviours) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Context*>(),
                                                           { "InstallSceneBindings", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MonoBehaviour>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, injectableMonoBehaviours);
}
inline void Zenject::Context::InstallZenjectBinding(::Zenject::ZenjectBinding* binding) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Context*>(), { "InstallZenjectBinding", {}, { ::i2c::type_of<::Zenject::ZenjectBinding*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, binding);
}
inline void Zenject::Context::GetInjectableMonoBehaviours(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MonoBehaviour>>* components) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Zenject::Context*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, components);
}
inline void Zenject::Context::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Context*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Zenject::InjectTypeInfo* Zenject::Context::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Context*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::Context* Zenject::Context::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::Context*>());
}
// Ctor Parameters []
constexpr ::Zenject::Context::Context() {}
