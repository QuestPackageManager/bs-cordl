#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Zenject/zzzz__Context_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "Zenject/zzzz__ZenjectBinding_def.hpp"
#include "Zenject/zzzz__MonoInstaller_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Zenject/zzzz__Context_def.hpp"
#include "Zenject/zzzz__ScriptableObjectInstaller_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Zenject/zzzz__InstallerBase_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Zenject::__Context____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::__Context____c::*)()>(&::Zenject::__Context____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2eedd08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__Context____c*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__Context____c._set_NormalInstallerTypes_b__16_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Zenject::__Context____c::*)(::System::Type*)>(
    &::Zenject::__Context____c::_set_NormalInstallerTypes_b__16_0)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2eedd10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__Context____c*>::get(), "<set_NormalInstallerTypes>b__16_0",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__Context____c.__zenCreate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*, ::Array<::System::Object*>*>)>(
    &::Zenject::__Context____c::__zenCreate)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2eeddc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__Context____c*>::get(), "__zenCreate", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__Context____c.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::__Context____c::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x2eede20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__Context____c*>::get(), "__zenCreateInjectTypeInfo",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline void Zenject::__Context____c::setStaticF___9(::Zenject::__Context____c* value) {
  ::cordl_internals::setStaticField<::Zenject::__Context____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__Context____c*>::get>(
      std::forward<::Zenject::__Context____c*>(value));
}
inline ::Zenject::__Context____c* Zenject::__Context____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::Zenject::__Context____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__Context____c*>::get>();
}
inline void Zenject::__Context____c::setStaticF___9__16_0(::System::Func_2<::System::Type*, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::System::Type*, bool>*, "<>9__16_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__Context____c*>::get>(
      std::forward<::System::Func_2<::System::Type*, bool>*>(value));
}
inline ::System::Func_2<::System::Type*, bool>* Zenject::__Context____c::getStaticF___9__16_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::System::Type*, bool>*, "<>9__16_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__Context____c*>::get>();
}
inline ::Zenject::__Context____c* Zenject::__Context____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Zenject::__Context____c*>());
}
inline void Zenject::__Context____c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__Context____c*>::get(), ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool Zenject::__Context____c::_set_NormalInstallerTypes_b__16_0(::System::Type* x) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__Context____c*>::get(), "<set_NormalInstallerTypes>b__16_0",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, x);
}
inline ::System::Object* Zenject::__Context____c::__zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__Context____c*>::get(), "__zenCreate", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::__Context____c::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__Context____c*>::get(), "__zenCreateInjectTypeInfo",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Zenject::__Context____c::__Context____c() {}
//  Writing Method size for method: ::Zenject::Context.get_Installers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::Zenject::MonoInstaller*>* (::Zenject::Context::*)()>(
    &::Zenject::Context::get_Installers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2eebd88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Context*>::get(), "get_Installers",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Context.set_Installers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::Context::*)(::System::Collections::Generic::IEnumerable_1<::Zenject::MonoInstaller*>*)>(
    &::Zenject::Context::set_Installers)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2eebd90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Context*>::get(), "set_Installers", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::Zenject::MonoInstaller*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Context.get_InstallerPrefabs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::Zenject::MonoInstaller*>* (::Zenject::Context::*)()>(
    &::Zenject::Context::get_InstallerPrefabs)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2eebe20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Context*>::get(), "get_InstallerPrefabs",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Context.set_InstallerPrefabs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::Context::*)(::System::Collections::Generic::IEnumerable_1<::Zenject::MonoInstaller*>*)>(
    &::Zenject::Context::set_InstallerPrefabs)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2eebe28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Context*>::get(), "set_InstallerPrefabs", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::Zenject::MonoInstaller*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Context.get_ScriptableObjectInstallers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::Zenject::ScriptableObjectInstaller*>* (::Zenject::Context::*)()>(
    &::Zenject::Context::get_ScriptableObjectInstallers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2eebeb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Context*>::get(), "get_ScriptableObjectInstallers",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Context.set_ScriptableObjectInstallers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::Context::*)(::System::Collections::Generic::IEnumerable_1<::Zenject::ScriptableObjectInstaller*>*)>(
    &::Zenject::Context::set_ScriptableObjectInstallers)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2eebec0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Context*>::get(), "set_ScriptableObjectInstallers", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::Zenject::ScriptableObjectInstaller*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Context.get_NormalInstallerTypes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::System::Type*>* (::Zenject::Context::*)()>(
    &::Zenject::Context::get_NormalInstallerTypes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2eebf50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Context*>::get(), "get_NormalInstallerTypes",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Context.set_NormalInstallerTypes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::Context::*)(::System::Collections::Generic::IEnumerable_1<::System::Type*>*)>(
    &::Zenject::Context::set_NormalInstallerTypes)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x2eebf58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Context*>::get(), "set_NormalInstallerTypes", std::vector<Il2CppClass*>{},
                                   ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::System::Type*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Context.get_NormalInstallers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::Zenject::InstallerBase*>* (::Zenject::Context::*)()>(
    &::Zenject::Context::get_NormalInstallers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2eec0c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Context*>::get(), "get_NormalInstallers",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Context.set_NormalInstallers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::Context::*)(::System::Collections::Generic::IEnumerable_1<::Zenject::InstallerBase*>*)>(
    &::Zenject::Context::set_NormalInstallers)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2eec0c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Context*>::get(), "set_NormalInstallers", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::Zenject::InstallerBase*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Context.get_Container
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::DiContainer* (::Zenject::Context::*)()>(&::Zenject::Context::get_Container)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Context*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Context*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Context.GetRootGameObjects
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::GameObject*>* (::Zenject::Context::*)()>(
    &::Zenject::Context::GetRootGameObjects)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Context*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Context*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Context.AddNormalInstallerType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::Context::*)(::System::Type*)>(&::Zenject::Context::AddNormalInstallerType)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x2eec158;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Context*>::get(), "AddNormalInstallerType", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Context.AddNormalInstaller
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::Context::*)(::Zenject::InstallerBase*)>(&::Zenject::Context::AddNormalInstaller)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2eec268;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Context*>::get(), "AddNormalInstaller", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InstallerBase*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Context.CheckInstallerPrefabTypes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::Context::*)(
    ::System::Collections::Generic::List_1<::Zenject::MonoInstaller*>*, ::System::Collections::Generic::List_1<::Zenject::MonoInstaller*>*)>(&::Zenject::Context::CheckInstallerPrefabTypes)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0x2eec310;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Context*>::get(), "CheckInstallerPrefabTypes", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::MonoInstaller*>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::MonoInstaller*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Context.InstallInstallers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::Context::*)()>(&::Zenject::Context::InstallInstallers)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2eec614;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Context*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Context*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Context.InstallInstallers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::Zenject::Context::*)(::System::Collections::Generic::List_1<::Zenject::InstallerBase*>*, ::System::Collections::Generic::List_1<::System::Type*>*,
                                             ::System::Collections::Generic::List_1<::Zenject::ScriptableObjectInstaller*>*, ::System::Collections::Generic::List_1<::Zenject::MonoInstaller*>*,
                                             ::System::Collections::Generic::List_1<::Zenject::MonoInstaller*>*)>(&::Zenject::Context::InstallInstallers)> {
  constexpr static std::size_t size = 0x78c;
  constexpr static std::size_t addrs = 0x2eec624;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Context*>::get(), "InstallInstallers", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::InstallerBase*>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Type*>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::ScriptableObjectInstaller*>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::MonoInstaller*>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::MonoInstaller*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Context.InstallSceneBindings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::Context::*)(::System::Collections::Generic::List_1<::UnityEngine::MonoBehaviour*>*)>(
    &::Zenject::Context::InstallSceneBindings)> {
  constexpr static std::size_t size = 0x554;
  constexpr static std::size_t addrs = 0x2eece7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Context*>::get(), "InstallSceneBindings", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::MonoBehaviour*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Context.InstallZenjectBinding
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::Context::*)(::Zenject::ZenjectBinding*)>(&::Zenject::Context::InstallZenjectBinding)> {
  constexpr static std::size_t size = 0x564;
  constexpr static std::size_t addrs = 0x2eed3d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Context*>::get(), "InstallZenjectBinding", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::ZenjectBinding*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Context.GetInjectableMonoBehaviours
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::Context::*)(::System::Collections::Generic::List_1<::UnityEngine::MonoBehaviour*>*)>(
    &::Zenject::Context::GetInjectableMonoBehaviours)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Context*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Context*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Context._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::Context::*)()>(&::Zenject::Context::_ctor)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x2eed9c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Context*>::get(), ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Context.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::Context::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x2eedb2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Context*>::get(), "__zenCreateInjectTypeInfo",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::Zenject::ScriptableObjectInstaller*>*& Zenject::Context::__get__scriptableObjectInstallers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scriptableObjectInstallers;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Zenject::ScriptableObjectInstaller*>*> const& Zenject::Context::__get__scriptableObjectInstallers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scriptableObjectInstallers;
}
constexpr void Zenject::Context::__set__scriptableObjectInstallers(::System::Collections::Generic::List_1<::Zenject::ScriptableObjectInstaller*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____scriptableObjectInstallers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::Zenject::MonoInstaller*>*& Zenject::Context::__get__monoInstallers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____monoInstallers;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Zenject::MonoInstaller*>*> const& Zenject::Context::__get__monoInstallers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____monoInstallers;
}
constexpr void Zenject::Context::__set__monoInstallers(::System::Collections::Generic::List_1<::Zenject::MonoInstaller*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____monoInstallers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::Zenject::MonoInstaller*>*& Zenject::Context::__get__installerPrefabs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____installerPrefabs;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Zenject::MonoInstaller*>*> const& Zenject::Context::__get__installerPrefabs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____installerPrefabs;
}
constexpr void Zenject::Context::__set__installerPrefabs(::System::Collections::Generic::List_1<::Zenject::MonoInstaller*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____installerPrefabs)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::Zenject::InstallerBase*>*& Zenject::Context::__get__normalInstallers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____normalInstallers;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Zenject::InstallerBase*>*> const& Zenject::Context::__get__normalInstallers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____normalInstallers;
}
constexpr void Zenject::Context::__set__normalInstallers(::System::Collections::Generic::List_1<::Zenject::InstallerBase*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____normalInstallers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::System::Type*>*& Zenject::Context::__get__normalInstallerTypes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____normalInstallerTypes;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Type*>*> const& Zenject::Context::__get__normalInstallerTypes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____normalInstallerTypes;
}
constexpr void Zenject::Context::__set__normalInstallerTypes(::System::Collections::Generic::List_1<::System::Type*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____normalInstallerTypes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Collections::Generic::IEnumerable_1<::Zenject::MonoInstaller*>* Zenject::Context::get_Installers() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Context*>::get(), "get_Installers",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Zenject::MonoInstaller*>*, false>(this, ___internal_method);
}
inline void Zenject::Context::set_Installers(::System::Collections::Generic::IEnumerable_1<::Zenject::MonoInstaller*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Context*>::get(), "set_Installers", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::Zenject::MonoInstaller*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::IEnumerable_1<::Zenject::MonoInstaller*>* Zenject::Context::get_InstallerPrefabs() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Context*>::get(), "get_InstallerPrefabs",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Zenject::MonoInstaller*>*, false>(this, ___internal_method);
}
inline void Zenject::Context::set_InstallerPrefabs(::System::Collections::Generic::IEnumerable_1<::Zenject::MonoInstaller*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Context*>::get(), "set_InstallerPrefabs", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::Zenject::MonoInstaller*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::IEnumerable_1<::Zenject::ScriptableObjectInstaller*>* Zenject::Context::get_ScriptableObjectInstallers() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Context*>::get(), "get_ScriptableObjectInstallers",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Zenject::ScriptableObjectInstaller*>*, false>(this, ___internal_method);
}
inline void Zenject::Context::set_ScriptableObjectInstallers(::System::Collections::Generic::IEnumerable_1<::Zenject::ScriptableObjectInstaller*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Context*>::get(), "set_ScriptableObjectInstallers", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::Zenject::ScriptableObjectInstaller*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::IEnumerable_1<::System::Type*>* Zenject::Context::get_NormalInstallerTypes() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Context*>::get(), "get_NormalInstallerTypes",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::System::Type*>*, false>(this, ___internal_method);
}
inline void Zenject::Context::set_NormalInstallerTypes(::System::Collections::Generic::IEnumerable_1<::System::Type*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Context*>::get(), "set_NormalInstallerTypes", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::System::Type*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::IEnumerable_1<::Zenject::InstallerBase*>* Zenject::Context::get_NormalInstallers() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Context*>::get(), "get_NormalInstallers",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Zenject::InstallerBase*>*, false>(this, ___internal_method);
}
inline void Zenject::Context::set_NormalInstallers(::System::Collections::Generic::IEnumerable_1<::Zenject::InstallerBase*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Context*>::get(), "set_NormalInstallers", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::Zenject::InstallerBase*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Zenject::DiContainer* Zenject::Context::get_Container() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Context*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::Zenject::DiContainer*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::GameObject*>* Zenject::Context::GetRootGameObjects() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Context*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityEngine::GameObject*>*, false>(this, ___internal_method);
}
inline void Zenject::Context::AddNormalInstallerType(::System::Type* installerType) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Context*>::get(), "AddNormalInstallerType", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, installerType);
}
inline void Zenject::Context::AddNormalInstaller(::Zenject::InstallerBase* installer) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Context*>::get(), "AddNormalInstaller", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InstallerBase*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, installer);
}
inline void Zenject::Context::CheckInstallerPrefabTypes(::System::Collections::Generic::List_1<::Zenject::MonoInstaller*>* installers,
                                                        ::System::Collections::Generic::List_1<::Zenject::MonoInstaller*>* installerPrefabs) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Context*>::get(), "CheckInstallerPrefabTypes", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::MonoInstaller*>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::MonoInstaller*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, installers, installerPrefabs);
}
inline void Zenject::Context::InstallInstallers() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Context*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Zenject::Context::InstallInstallers(::System::Collections::Generic::List_1<::Zenject::InstallerBase*>* normalInstallers,
                                                ::System::Collections::Generic::List_1<::System::Type*>* normalInstallerTypes,
                                                ::System::Collections::Generic::List_1<::Zenject::ScriptableObjectInstaller*>* scriptableObjectInstallers,
                                                ::System::Collections::Generic::List_1<::Zenject::MonoInstaller*>* installers,
                                                ::System::Collections::Generic::List_1<::Zenject::MonoInstaller*>* installerPrefabs) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Context*>::get(), "InstallInstallers", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::InstallerBase*>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Type*>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::ScriptableObjectInstaller*>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::MonoInstaller*>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::MonoInstaller*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, normalInstallers, normalInstallerTypes, scriptableObjectInstallers, installers, installerPrefabs);
}
inline void Zenject::Context::InstallSceneBindings(::System::Collections::Generic::List_1<::UnityEngine::MonoBehaviour*>* injectableMonoBehaviours) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Context*>::get(), "InstallSceneBindings", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::MonoBehaviour*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, injectableMonoBehaviours);
}
inline void Zenject::Context::InstallZenjectBinding(::Zenject::ZenjectBinding* binding) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Context*>::get(), "InstallZenjectBinding", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::ZenjectBinding*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, binding);
}
inline void Zenject::Context::GetInjectableMonoBehaviours(::System::Collections::Generic::List_1<::UnityEngine::MonoBehaviour*>* components) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Context*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, components);
}
inline ::Zenject::Context* Zenject::Context::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Zenject::Context*>());
}
inline void Zenject::Context::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Context*>::get(), ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Zenject::InjectTypeInfo* Zenject::Context::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Context*>::get(), "__zenCreateInjectTypeInfo",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Zenject::Context::Context() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
