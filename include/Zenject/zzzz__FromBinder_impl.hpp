#pragma once
// IWYU pragma private; include "Zenject/FromBinder.hpp"
#include "System/zzzz__Guid_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__InjectSources_impl.hpp"
#include "Zenject/zzzz__ScopeConcreteIdArgConditionCopyNonLazyBinder_impl.hpp"
#include "Zenject/zzzz__FromBinder_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Func_3_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/zzzz__Component_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "Zenject/zzzz__BindInfo_def.hpp"
#include "Zenject/zzzz__BindStatement_def.hpp"
#include "Zenject/zzzz__ConcreteBinderGeneric_1_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__FromBinder_def.hpp"
#include "Zenject/zzzz__GameObjectCreationParameters_def.hpp"
#include "Zenject/zzzz__IBindingFinalizer_def.hpp"
#include "Zenject/zzzz__IFactory_1_def.hpp"
#include "Zenject/zzzz__IPrefabInstantiator_def.hpp"
#include "Zenject/zzzz__IProvider_def.hpp"
#include "Zenject/zzzz__InjectContext_def.hpp"
#include "Zenject/zzzz__InjectSources_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
#include "Zenject/zzzz__NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder_def.hpp"
#include "Zenject/zzzz__ScopeConcreteIdArgConditionCopyNonLazyBinder_def.hpp"
#include "Zenject/zzzz__SubContainerBinder_def.hpp"
//  Writing Method size for method: ::Zenject::FromBinder___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::FromBinder___c::*)()>(&::Zenject::FromBinder___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x732f70c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder___c._FromComponentsOnRoot_b__33_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::Zenject::FromBinder___c::*)(::Zenject::InjectContext*)>(
    &::Zenject::FromBinder___c::_FromComponentsOnRoot_b__33_0)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x732f710;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c*>(), { "<FromComponentsOnRoot>b__33_0", {}, { ::i2c::type_of<::Zenject::InjectContext*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder___c._FromComponentOnRoot_b__34_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::Zenject::FromBinder___c::*)(::Zenject::InjectContext*)>(
    &::Zenject::FromBinder___c::_FromComponentOnRoot_b__34_0)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x732f774;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c*>(), { "<FromComponentOnRoot>b__34_0", {}, { ::i2c::type_of<::Zenject::InjectContext*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder___c._FromNewComponentOnRoot_b__38_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::Zenject::FromBinder___c::*)(::Zenject::InjectContext*)>(
    &::Zenject::FromBinder___c::_FromNewComponentOnRoot_b__38_0)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x732f7d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c*>(), { "<FromNewComponentOnRoot>b__38_0", {}, { ::i2c::type_of<::Zenject::InjectContext*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder___c._FromNewComponentOnNewPrefabResource_b__42_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::IProvider* (::Zenject::FromBinder___c::*)(::System::Type*, ::Zenject::IPrefabInstantiator*)>(
    &::Zenject::FromBinder___c::_FromNewComponentOnNewPrefabResource_b__42_0)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x732f83c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c*>(),
                                                { "<FromNewComponentOnNewPrefabResource>b__42_0", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::Zenject::IPrefabInstantiator*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder___c._FromNewComponentOnNewPrefab_b__44_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::IProvider* (::Zenject::FromBinder___c::*)(::System::Type*, ::Zenject::IPrefabInstantiator*)>(
    &::Zenject::FromBinder___c::_FromNewComponentOnNewPrefab_b__44_0)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x732f898;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c*>(),
                                                { "<FromNewComponentOnNewPrefab>b__44_0", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::Zenject::IPrefabInstantiator*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder___c._FromComponentInNewPrefab_b__46_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::IProvider* (::Zenject::FromBinder___c::*)(::System::Type*, ::Zenject::IPrefabInstantiator*)>(
    &::Zenject::FromBinder___c::_FromComponentInNewPrefab_b__46_0)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x732f8f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c*>(),
                                                             { "<FromComponentInNewPrefab>b__46_0", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::Zenject::IPrefabInstantiator*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder___c._FromComponentsInNewPrefab_b__48_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::IProvider* (::Zenject::FromBinder___c::*)(::System::Type*, ::Zenject::IPrefabInstantiator*)>(
    &::Zenject::FromBinder___c::_FromComponentsInNewPrefab_b__48_0)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x732f958;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c*>(),
                                                             { "<FromComponentsInNewPrefab>b__48_0", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::Zenject::IPrefabInstantiator*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder___c._FromComponentInNewPrefabResource_b__50_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::IProvider* (::Zenject::FromBinder___c::*)(::System::Type*, ::Zenject::IPrefabInstantiator*)>(
    &::Zenject::FromBinder___c::_FromComponentInNewPrefabResource_b__50_0)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x732f9b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c*>(),
                                                { "<FromComponentInNewPrefabResource>b__50_0", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::Zenject::IPrefabInstantiator*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder___c._FromComponentsInNewPrefabResource_b__52_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::IProvider* (::Zenject::FromBinder___c::*)(::System::Type*, ::Zenject::IPrefabInstantiator*)>(
    &::Zenject::FromBinder___c::_FromComponentsInNewPrefabResource_b__52_0)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x732fa1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c*>(),
                                                { "<FromComponentsInNewPrefabResource>b__52_0", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::Zenject::IPrefabInstantiator*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder___c._FromComponentSibling_b__65_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::IProvider* (::Zenject::FromBinder___c::*)(::Zenject::DiContainer*, ::System::Type*)>(
    &::Zenject::FromBinder___c::_FromComponentSibling_b__65_0)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x732fa7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c*>(), { "<FromComponentSibling>b__65_0", {}, { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder___c._FromComponentsSibling_b__66_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::IProvider* (::Zenject::FromBinder___c::*)(::Zenject::DiContainer*, ::System::Type*)>(
    &::Zenject::FromBinder___c::_FromComponentsSibling_b__66_0)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x732fb58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c*>(),
                                                             { "<FromComponentsSibling>b__66_0", {}, { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder___c.__zenCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*>)>(&::Zenject::FromBinder___c::__zenCreate)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x732fc34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder___c.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::FromBinder___c::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x732fc78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
inline void Zenject::FromBinder___c::setStaticF___9(::Zenject::FromBinder___c* value) {
  ::cordl_internals::setStaticField<::Zenject::FromBinder___c*, "<>9", ::Zenject::FromBinder___c*>(std::forward<::Zenject::FromBinder___c*>(value));
}
inline ::Zenject::FromBinder___c* Zenject::FromBinder___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::Zenject::FromBinder___c*, "<>9", ::Zenject::FromBinder___c*>();
}
inline void Zenject::FromBinder___c::setStaticF___9__33_0(::System::Func_2<::Zenject::InjectContext*, ::UnityW<::UnityEngine::GameObject>>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::Zenject::InjectContext*, ::UnityW<::UnityEngine::GameObject>>*, "<>9__33_0", ::Zenject::FromBinder___c*>(
      std::forward<::System::Func_2<::Zenject::InjectContext*, ::UnityW<::UnityEngine::GameObject>>*>(value));
}
inline ::System::Func_2<::Zenject::InjectContext*, ::UnityW<::UnityEngine::GameObject>>* Zenject::FromBinder___c::getStaticF___9__33_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::Zenject::InjectContext*, ::UnityW<::UnityEngine::GameObject>>*, "<>9__33_0", ::Zenject::FromBinder___c*>();
}
inline void Zenject::FromBinder___c::setStaticF___9__34_0(::System::Func_2<::Zenject::InjectContext*, ::UnityW<::UnityEngine::GameObject>>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::Zenject::InjectContext*, ::UnityW<::UnityEngine::GameObject>>*, "<>9__34_0", ::Zenject::FromBinder___c*>(
      std::forward<::System::Func_2<::Zenject::InjectContext*, ::UnityW<::UnityEngine::GameObject>>*>(value));
}
inline ::System::Func_2<::Zenject::InjectContext*, ::UnityW<::UnityEngine::GameObject>>* Zenject::FromBinder___c::getStaticF___9__34_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::Zenject::InjectContext*, ::UnityW<::UnityEngine::GameObject>>*, "<>9__34_0", ::Zenject::FromBinder___c*>();
}
inline void Zenject::FromBinder___c::setStaticF___9__38_0(::System::Func_2<::Zenject::InjectContext*, ::UnityW<::UnityEngine::GameObject>>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::Zenject::InjectContext*, ::UnityW<::UnityEngine::GameObject>>*, "<>9__38_0", ::Zenject::FromBinder___c*>(
      std::forward<::System::Func_2<::Zenject::InjectContext*, ::UnityW<::UnityEngine::GameObject>>*>(value));
}
inline ::System::Func_2<::Zenject::InjectContext*, ::UnityW<::UnityEngine::GameObject>>* Zenject::FromBinder___c::getStaticF___9__38_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::Zenject::InjectContext*, ::UnityW<::UnityEngine::GameObject>>*, "<>9__38_0", ::Zenject::FromBinder___c*>();
}
inline void Zenject::FromBinder___c::setStaticF___9__42_0(::System::Func_3<::System::Type*, ::Zenject::IPrefabInstantiator*, ::Zenject::IProvider*>* value) {
  ::cordl_internals::setStaticField<::System::Func_3<::System::Type*, ::Zenject::IPrefabInstantiator*, ::Zenject::IProvider*>*, "<>9__42_0", ::Zenject::FromBinder___c*>(
      std::forward<::System::Func_3<::System::Type*, ::Zenject::IPrefabInstantiator*, ::Zenject::IProvider*>*>(value));
}
inline ::System::Func_3<::System::Type*, ::Zenject::IPrefabInstantiator*, ::Zenject::IProvider*>* Zenject::FromBinder___c::getStaticF___9__42_0() {
  return ::cordl_internals::getStaticField<::System::Func_3<::System::Type*, ::Zenject::IPrefabInstantiator*, ::Zenject::IProvider*>*, "<>9__42_0", ::Zenject::FromBinder___c*>();
}
inline void Zenject::FromBinder___c::setStaticF___9__44_0(::System::Func_3<::System::Type*, ::Zenject::IPrefabInstantiator*, ::Zenject::IProvider*>* value) {
  ::cordl_internals::setStaticField<::System::Func_3<::System::Type*, ::Zenject::IPrefabInstantiator*, ::Zenject::IProvider*>*, "<>9__44_0", ::Zenject::FromBinder___c*>(
      std::forward<::System::Func_3<::System::Type*, ::Zenject::IPrefabInstantiator*, ::Zenject::IProvider*>*>(value));
}
inline ::System::Func_3<::System::Type*, ::Zenject::IPrefabInstantiator*, ::Zenject::IProvider*>* Zenject::FromBinder___c::getStaticF___9__44_0() {
  return ::cordl_internals::getStaticField<::System::Func_3<::System::Type*, ::Zenject::IPrefabInstantiator*, ::Zenject::IProvider*>*, "<>9__44_0", ::Zenject::FromBinder___c*>();
}
inline void Zenject::FromBinder___c::setStaticF___9__46_0(::System::Func_3<::System::Type*, ::Zenject::IPrefabInstantiator*, ::Zenject::IProvider*>* value) {
  ::cordl_internals::setStaticField<::System::Func_3<::System::Type*, ::Zenject::IPrefabInstantiator*, ::Zenject::IProvider*>*, "<>9__46_0", ::Zenject::FromBinder___c*>(
      std::forward<::System::Func_3<::System::Type*, ::Zenject::IPrefabInstantiator*, ::Zenject::IProvider*>*>(value));
}
inline ::System::Func_3<::System::Type*, ::Zenject::IPrefabInstantiator*, ::Zenject::IProvider*>* Zenject::FromBinder___c::getStaticF___9__46_0() {
  return ::cordl_internals::getStaticField<::System::Func_3<::System::Type*, ::Zenject::IPrefabInstantiator*, ::Zenject::IProvider*>*, "<>9__46_0", ::Zenject::FromBinder___c*>();
}
inline void Zenject::FromBinder___c::setStaticF___9__48_0(::System::Func_3<::System::Type*, ::Zenject::IPrefabInstantiator*, ::Zenject::IProvider*>* value) {
  ::cordl_internals::setStaticField<::System::Func_3<::System::Type*, ::Zenject::IPrefabInstantiator*, ::Zenject::IProvider*>*, "<>9__48_0", ::Zenject::FromBinder___c*>(
      std::forward<::System::Func_3<::System::Type*, ::Zenject::IPrefabInstantiator*, ::Zenject::IProvider*>*>(value));
}
inline ::System::Func_3<::System::Type*, ::Zenject::IPrefabInstantiator*, ::Zenject::IProvider*>* Zenject::FromBinder___c::getStaticF___9__48_0() {
  return ::cordl_internals::getStaticField<::System::Func_3<::System::Type*, ::Zenject::IPrefabInstantiator*, ::Zenject::IProvider*>*, "<>9__48_0", ::Zenject::FromBinder___c*>();
}
inline void Zenject::FromBinder___c::setStaticF___9__50_0(::System::Func_3<::System::Type*, ::Zenject::IPrefabInstantiator*, ::Zenject::IProvider*>* value) {
  ::cordl_internals::setStaticField<::System::Func_3<::System::Type*, ::Zenject::IPrefabInstantiator*, ::Zenject::IProvider*>*, "<>9__50_0", ::Zenject::FromBinder___c*>(
      std::forward<::System::Func_3<::System::Type*, ::Zenject::IPrefabInstantiator*, ::Zenject::IProvider*>*>(value));
}
inline ::System::Func_3<::System::Type*, ::Zenject::IPrefabInstantiator*, ::Zenject::IProvider*>* Zenject::FromBinder___c::getStaticF___9__50_0() {
  return ::cordl_internals::getStaticField<::System::Func_3<::System::Type*, ::Zenject::IPrefabInstantiator*, ::Zenject::IProvider*>*, "<>9__50_0", ::Zenject::FromBinder___c*>();
}
inline void Zenject::FromBinder___c::setStaticF___9__52_0(::System::Func_3<::System::Type*, ::Zenject::IPrefabInstantiator*, ::Zenject::IProvider*>* value) {
  ::cordl_internals::setStaticField<::System::Func_3<::System::Type*, ::Zenject::IPrefabInstantiator*, ::Zenject::IProvider*>*, "<>9__52_0", ::Zenject::FromBinder___c*>(
      std::forward<::System::Func_3<::System::Type*, ::Zenject::IPrefabInstantiator*, ::Zenject::IProvider*>*>(value));
}
inline ::System::Func_3<::System::Type*, ::Zenject::IPrefabInstantiator*, ::Zenject::IProvider*>* Zenject::FromBinder___c::getStaticF___9__52_0() {
  return ::cordl_internals::getStaticField<::System::Func_3<::System::Type*, ::Zenject::IPrefabInstantiator*, ::Zenject::IProvider*>*, "<>9__52_0", ::Zenject::FromBinder___c*>();
}
inline void Zenject::FromBinder___c::setStaticF___9__65_0(::System::Func_3<::Zenject::DiContainer*, ::System::Type*, ::Zenject::IProvider*>* value) {
  ::cordl_internals::setStaticField<::System::Func_3<::Zenject::DiContainer*, ::System::Type*, ::Zenject::IProvider*>*, "<>9__65_0", ::Zenject::FromBinder___c*>(
      std::forward<::System::Func_3<::Zenject::DiContainer*, ::System::Type*, ::Zenject::IProvider*>*>(value));
}
inline ::System::Func_3<::Zenject::DiContainer*, ::System::Type*, ::Zenject::IProvider*>* Zenject::FromBinder___c::getStaticF___9__65_0() {
  return ::cordl_internals::getStaticField<::System::Func_3<::Zenject::DiContainer*, ::System::Type*, ::Zenject::IProvider*>*, "<>9__65_0", ::Zenject::FromBinder___c*>();
}
inline void Zenject::FromBinder___c::setStaticF___9__66_0(::System::Func_3<::Zenject::DiContainer*, ::System::Type*, ::Zenject::IProvider*>* value) {
  ::cordl_internals::setStaticField<::System::Func_3<::Zenject::DiContainer*, ::System::Type*, ::Zenject::IProvider*>*, "<>9__66_0", ::Zenject::FromBinder___c*>(
      std::forward<::System::Func_3<::Zenject::DiContainer*, ::System::Type*, ::Zenject::IProvider*>*>(value));
}
inline ::System::Func_3<::Zenject::DiContainer*, ::System::Type*, ::Zenject::IProvider*>* Zenject::FromBinder___c::getStaticF___9__66_0() {
  return ::cordl_internals::getStaticField<::System::Func_3<::Zenject::DiContainer*, ::System::Type*, ::Zenject::IProvider*>*, "<>9__66_0", ::Zenject::FromBinder___c*>();
}
inline void Zenject::FromBinder___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::GameObject> Zenject::FromBinder___c::_FromComponentsOnRoot_b__33_0(::Zenject::InjectContext* ctx) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c*>(), { "<FromComponentsOnRoot>b__33_0", {}, { ::i2c::type_of<::Zenject::InjectContext*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method, ctx);
}
inline ::UnityW<::UnityEngine::GameObject> Zenject::FromBinder___c::_FromComponentOnRoot_b__34_0(::Zenject::InjectContext* ctx) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c*>(), { "<FromComponentOnRoot>b__34_0", {}, { ::i2c::type_of<::Zenject::InjectContext*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method, ctx);
}
inline ::UnityW<::UnityEngine::GameObject> Zenject::FromBinder___c::_FromNewComponentOnRoot_b__38_0(::Zenject::InjectContext* ctx) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c*>(), { "<FromNewComponentOnRoot>b__38_0", {}, { ::i2c::type_of<::Zenject::InjectContext*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method, ctx);
}
inline ::Zenject::IProvider* Zenject::FromBinder___c::_FromNewComponentOnNewPrefabResource_b__42_0(::System::Type* contractType, ::Zenject::IPrefabInstantiator* instantiator) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c*>(),
                                              { "<FromNewComponentOnNewPrefabResource>b__42_0", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::Zenject::IPrefabInstantiator*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::IProvider*>(this, ___internal_method, contractType, instantiator);
}
inline ::Zenject::IProvider* Zenject::FromBinder___c::_FromNewComponentOnNewPrefab_b__44_0(::System::Type* contractType, ::Zenject::IPrefabInstantiator* instantiator) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c*>(),
                                                           { "<FromNewComponentOnNewPrefab>b__44_0", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::Zenject::IPrefabInstantiator*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::IProvider*>(this, ___internal_method, contractType, instantiator);
}
inline ::Zenject::IProvider* Zenject::FromBinder___c::_FromComponentInNewPrefab_b__46_0(::System::Type* contractType, ::Zenject::IPrefabInstantiator* instantiator) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c*>(),
                                                           { "<FromComponentInNewPrefab>b__46_0", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::Zenject::IPrefabInstantiator*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::IProvider*>(this, ___internal_method, contractType, instantiator);
}
inline ::Zenject::IProvider* Zenject::FromBinder___c::_FromComponentsInNewPrefab_b__48_0(::System::Type* contractType, ::Zenject::IPrefabInstantiator* instantiator) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c*>(),
                                                           { "<FromComponentsInNewPrefab>b__48_0", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::Zenject::IPrefabInstantiator*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::IProvider*>(this, ___internal_method, contractType, instantiator);
}
inline ::Zenject::IProvider* Zenject::FromBinder___c::_FromComponentInNewPrefabResource_b__50_0(::System::Type* contractType, ::Zenject::IPrefabInstantiator* instantiator) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c*>(),
                                              { "<FromComponentInNewPrefabResource>b__50_0", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::Zenject::IPrefabInstantiator*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::IProvider*>(this, ___internal_method, contractType, instantiator);
}
inline ::Zenject::IProvider* Zenject::FromBinder___c::_FromComponentsInNewPrefabResource_b__52_0(::System::Type* contractType, ::Zenject::IPrefabInstantiator* instantiator) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c*>(),
                                              { "<FromComponentsInNewPrefabResource>b__52_0", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::Zenject::IPrefabInstantiator*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::IProvider*>(this, ___internal_method, contractType, instantiator);
}
inline ::Zenject::IProvider* Zenject::FromBinder___c::_FromComponentSibling_b__65_0(::Zenject::DiContainer* container, ::System::Type* concreteType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c*>(), { "<FromComponentSibling>b__65_0", {}, { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::IProvider*>(this, ___internal_method, container, concreteType);
}
inline ::Zenject::IProvider* Zenject::FromBinder___c::_FromComponentsSibling_b__66_0(::Zenject::DiContainer* container, ::System::Type* concreteType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c*>(), { "<FromComponentsSibling>b__66_0", {}, { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::IProvider*>(this, ___internal_method, container, concreteType);
}
inline ::System::Object* Zenject::FromBinder___c::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::FromBinder___c::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::FromBinder___c* Zenject::FromBinder___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::FromBinder___c*>());
}
// Ctor Parameters []
constexpr ::Zenject::FromBinder___c::FromBinder___c() {}
//  Writing Method size for method: ::Zenject::FromBinder___c__DisplayClass22_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::FromBinder___c__DisplayClass22_0::*)()>(&::Zenject::FromBinder___c__DisplayClass22_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x732cb68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass22_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder___c__DisplayClass22_0._FromResolveInternal_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::IProvider* (::Zenject::FromBinder___c__DisplayClass22_0::*)(::Zenject::DiContainer*, ::System::Type*)>(
    &::Zenject::FromBinder___c__DisplayClass22_0::_FromResolveInternal_b__0)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x732fe0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass22_0*>(),
                                                             { "<FromResolveInternal>b__0", {}, { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder___c__DisplayClass22_0.__zenCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*>)>(&::Zenject::FromBinder___c__DisplayClass22_0::__zenCreate)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x732fe88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass22_0*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder___c__DisplayClass22_0.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::FromBinder___c__DisplayClass22_0::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x732fecc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass22_0*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Object*& Zenject::FromBinder___c__DisplayClass22_0::__cordl_internal_get_subIdentifier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___subIdentifier;
}
constexpr ::System::Object* const& Zenject::FromBinder___c__DisplayClass22_0::__cordl_internal_get_subIdentifier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___subIdentifier;
}
constexpr void Zenject::FromBinder___c__DisplayClass22_0::__cordl_internal_set_subIdentifier(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___subIdentifier = value;
}
constexpr ::Zenject::InjectSources& Zenject::FromBinder___c__DisplayClass22_0::__cordl_internal_get_source() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___source;
}
constexpr ::Zenject::InjectSources const& Zenject::FromBinder___c__DisplayClass22_0::__cordl_internal_get_source() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___source;
}
constexpr void Zenject::FromBinder___c__DisplayClass22_0::__cordl_internal_set_source(::Zenject::InjectSources value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___source = value;
}
constexpr bool& Zenject::FromBinder___c__DisplayClass22_0::__cordl_internal_get_matchAll() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___matchAll;
}
constexpr bool const& Zenject::FromBinder___c__DisplayClass22_0::__cordl_internal_get_matchAll() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___matchAll;
}
constexpr void Zenject::FromBinder___c__DisplayClass22_0::__cordl_internal_set_matchAll(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___matchAll = value;
}
inline void Zenject::FromBinder___c__DisplayClass22_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass22_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Zenject::IProvider* Zenject::FromBinder___c__DisplayClass22_0::_FromResolveInternal_b__0(::Zenject::DiContainer* container, ::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass22_0*>(),
                                                           { "<FromResolveInternal>b__0", {}, { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::IProvider*>(this, ___internal_method, container, type);
}
inline ::System::Object* Zenject::FromBinder___c__DisplayClass22_0::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass22_0*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::FromBinder___c__DisplayClass22_0::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass22_0*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::FromBinder___c__DisplayClass22_0* Zenject::FromBinder___c__DisplayClass22_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::FromBinder___c__DisplayClass22_0*>());
}
// Ctor Parameters []
constexpr ::Zenject::FromBinder___c__DisplayClass22_0::FromBinder___c__DisplayClass22_0() {}
template <typename TContract> constexpr ::System::Guid& Zenject::FromBinder___c__DisplayClass28_0_1<TContract>::__cordl_internal_get_factoryId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___factoryId;
}
template <typename TContract> constexpr ::System::Guid const& Zenject::FromBinder___c__DisplayClass28_0_1<TContract>::__cordl_internal_get_factoryId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___factoryId;
}
template <typename TContract> constexpr void Zenject::FromBinder___c__DisplayClass28_0_1<TContract>::__cordl_internal_set_factoryId(::System::Guid value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___factoryId = value;
}
template <typename TContract> inline void Zenject::FromBinder___c__DisplayClass28_0_1<TContract>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass28_0_1<TContract>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TContract> inline ::Zenject::IProvider* Zenject::FromBinder___c__DisplayClass28_0_1<TContract>::_FromIFactoryBase_b__0(::Zenject::DiContainer* container, ::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass28_0_1<TContract>*>(),
                                                           { "<FromIFactoryBase>b__0", {}, { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::IProvider*>(this, ___internal_method, container, type);
}
template <typename TContract> inline ::System::Object* Zenject::FromBinder___c__DisplayClass28_0_1<TContract>::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass28_0_1<TContract>*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
template <typename TContract> inline ::Zenject::InjectTypeInfo* Zenject::FromBinder___c__DisplayClass28_0_1<TContract>::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass28_0_1<TContract>*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
template <typename TContract> inline ::Zenject::FromBinder___c__DisplayClass28_0_1<TContract>* Zenject::FromBinder___c__DisplayClass28_0_1<TContract>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::FromBinder___c__DisplayClass28_0_1<TContract>*>());
}
// Ctor Parameters []
template <typename TContract> constexpr ::Zenject::FromBinder___c__DisplayClass28_0_1<TContract>::FromBinder___c__DisplayClass28_0_1() {}
//  Writing Method size for method: ::Zenject::FromBinder___c__DisplayClass29_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::FromBinder___c__DisplayClass29_0::*)()>(&::Zenject::FromBinder___c__DisplayClass29_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x732cd70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass29_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder___c__DisplayClass29_0._FromComponentsOn_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::IProvider* (::Zenject::FromBinder___c__DisplayClass29_0::*)(::Zenject::DiContainer*, ::System::Type*)>(
    &::Zenject::FromBinder___c__DisplayClass29_0::_FromComponentsOn_b__0)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x7330060;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass29_0*>(),
                                                             { "<FromComponentsOn>b__0", {}, { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder___c__DisplayClass29_0.__zenCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*>)>(&::Zenject::FromBinder___c__DisplayClass29_0::__zenCreate)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x73300c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass29_0*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder___c__DisplayClass29_0.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::FromBinder___c__DisplayClass29_0::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x7330108;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass29_0*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& Zenject::FromBinder___c__DisplayClass29_0::__cordl_internal_get_gameObject() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameObject;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Zenject::FromBinder___c__DisplayClass29_0::__cordl_internal_get_gameObject() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameObject;
}
constexpr void Zenject::FromBinder___c__DisplayClass29_0::__cordl_internal_set_gameObject(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___gameObject = value;
}
inline void Zenject::FromBinder___c__DisplayClass29_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass29_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Zenject::IProvider* Zenject::FromBinder___c__DisplayClass29_0::_FromComponentsOn_b__0(::Zenject::DiContainer* container, ::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass29_0*>(),
                                                           { "<FromComponentsOn>b__0", {}, { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::IProvider*>(this, ___internal_method, container, type);
}
inline ::System::Object* Zenject::FromBinder___c__DisplayClass29_0::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass29_0*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::FromBinder___c__DisplayClass29_0::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass29_0*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::FromBinder___c__DisplayClass29_0* Zenject::FromBinder___c__DisplayClass29_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::FromBinder___c__DisplayClass29_0*>());
}
// Ctor Parameters []
constexpr ::Zenject::FromBinder___c__DisplayClass29_0::FromBinder___c__DisplayClass29_0() {}
//  Writing Method size for method: ::Zenject::FromBinder___c__DisplayClass30_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::FromBinder___c__DisplayClass30_0::*)()>(&::Zenject::FromBinder___c__DisplayClass30_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x732cec0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass30_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder___c__DisplayClass30_0._FromComponentOn_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::IProvider* (::Zenject::FromBinder___c__DisplayClass30_0::*)(::Zenject::DiContainer*, ::System::Type*)>(
    &::Zenject::FromBinder___c__DisplayClass30_0::_FromComponentOn_b__0)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x733029c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass30_0*>(),
                                                             { "<FromComponentOn>b__0", {}, { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder___c__DisplayClass30_0.__zenCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*>)>(&::Zenject::FromBinder___c__DisplayClass30_0::__zenCreate)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x7330304;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass30_0*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder___c__DisplayClass30_0.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::FromBinder___c__DisplayClass30_0::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x7330348;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass30_0*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& Zenject::FromBinder___c__DisplayClass30_0::__cordl_internal_get_gameObject() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameObject;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Zenject::FromBinder___c__DisplayClass30_0::__cordl_internal_get_gameObject() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameObject;
}
constexpr void Zenject::FromBinder___c__DisplayClass30_0::__cordl_internal_set_gameObject(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___gameObject = value;
}
inline void Zenject::FromBinder___c__DisplayClass30_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass30_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Zenject::IProvider* Zenject::FromBinder___c__DisplayClass30_0::_FromComponentOn_b__0(::Zenject::DiContainer* container, ::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass30_0*>(),
                                                           { "<FromComponentOn>b__0", {}, { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::IProvider*>(this, ___internal_method, container, type);
}
inline ::System::Object* Zenject::FromBinder___c__DisplayClass30_0::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass30_0*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::FromBinder___c__DisplayClass30_0::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass30_0*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::FromBinder___c__DisplayClass30_0* Zenject::FromBinder___c__DisplayClass30_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::FromBinder___c__DisplayClass30_0*>());
}
// Ctor Parameters []
constexpr ::Zenject::FromBinder___c__DisplayClass30_0::FromBinder___c__DisplayClass30_0() {}
//  Writing Method size for method: ::Zenject::FromBinder___c__DisplayClass31_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::FromBinder___c__DisplayClass31_0::*)()>(&::Zenject::FromBinder___c__DisplayClass31_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x732d000;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass31_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder___c__DisplayClass31_0._FromComponentsOn_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::IProvider* (::Zenject::FromBinder___c__DisplayClass31_0::*)(::Zenject::DiContainer*, ::System::Type*)>(
    &::Zenject::FromBinder___c__DisplayClass31_0::_FromComponentsOn_b__0)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x73304dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass31_0*>(),
                                                             { "<FromComponentsOn>b__0", {}, { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder___c__DisplayClass31_0.__zenCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*>)>(&::Zenject::FromBinder___c__DisplayClass31_0::__zenCreate)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x7330540;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass31_0*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder___c__DisplayClass31_0.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::FromBinder___c__DisplayClass31_0::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x7330584;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass31_0*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Func_2<::Zenject::InjectContext*, ::UnityW<::UnityEngine::GameObject>>*& Zenject::FromBinder___c__DisplayClass31_0::__cordl_internal_get_gameObjectGetter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameObjectGetter;
}
constexpr ::System::Func_2<::Zenject::InjectContext*, ::UnityW<::UnityEngine::GameObject>>* const& Zenject::FromBinder___c__DisplayClass31_0::__cordl_internal_get_gameObjectGetter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameObjectGetter;
}
constexpr void Zenject::FromBinder___c__DisplayClass31_0::__cordl_internal_set_gameObjectGetter(::System::Func_2<::Zenject::InjectContext*, ::UnityW<::UnityEngine::GameObject>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___gameObjectGetter = value;
}
inline void Zenject::FromBinder___c__DisplayClass31_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass31_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Zenject::IProvider* Zenject::FromBinder___c__DisplayClass31_0::_FromComponentsOn_b__0(::Zenject::DiContainer* container, ::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass31_0*>(),
                                                           { "<FromComponentsOn>b__0", {}, { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::IProvider*>(this, ___internal_method, container, type);
}
inline ::System::Object* Zenject::FromBinder___c__DisplayClass31_0::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass31_0*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::FromBinder___c__DisplayClass31_0::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass31_0*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::FromBinder___c__DisplayClass31_0* Zenject::FromBinder___c__DisplayClass31_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::FromBinder___c__DisplayClass31_0*>());
}
// Ctor Parameters []
constexpr ::Zenject::FromBinder___c__DisplayClass31_0::FromBinder___c__DisplayClass31_0() {}
//  Writing Method size for method: ::Zenject::FromBinder___c__DisplayClass32_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::FromBinder___c__DisplayClass32_0::*)()>(&::Zenject::FromBinder___c__DisplayClass32_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x732d140;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass32_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder___c__DisplayClass32_0._FromComponentOn_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::IProvider* (::Zenject::FromBinder___c__DisplayClass32_0::*)(::Zenject::DiContainer*, ::System::Type*)>(
    &::Zenject::FromBinder___c__DisplayClass32_0::_FromComponentOn_b__0)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x7330718;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass32_0*>(),
                                                             { "<FromComponentOn>b__0", {}, { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder___c__DisplayClass32_0.__zenCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*>)>(&::Zenject::FromBinder___c__DisplayClass32_0::__zenCreate)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x7330780;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass32_0*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder___c__DisplayClass32_0.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::FromBinder___c__DisplayClass32_0::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x73307c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass32_0*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Func_2<::Zenject::InjectContext*, ::UnityW<::UnityEngine::GameObject>>*& Zenject::FromBinder___c__DisplayClass32_0::__cordl_internal_get_gameObjectGetter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameObjectGetter;
}
constexpr ::System::Func_2<::Zenject::InjectContext*, ::UnityW<::UnityEngine::GameObject>>* const& Zenject::FromBinder___c__DisplayClass32_0::__cordl_internal_get_gameObjectGetter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameObjectGetter;
}
constexpr void Zenject::FromBinder___c__DisplayClass32_0::__cordl_internal_set_gameObjectGetter(::System::Func_2<::Zenject::InjectContext*, ::UnityW<::UnityEngine::GameObject>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___gameObjectGetter = value;
}
inline void Zenject::FromBinder___c__DisplayClass32_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass32_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Zenject::IProvider* Zenject::FromBinder___c__DisplayClass32_0::_FromComponentOn_b__0(::Zenject::DiContainer* container, ::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass32_0*>(),
                                                           { "<FromComponentOn>b__0", {}, { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::IProvider*>(this, ___internal_method, container, type);
}
inline ::System::Object* Zenject::FromBinder___c__DisplayClass32_0::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass32_0*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::FromBinder___c__DisplayClass32_0::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass32_0*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::FromBinder___c__DisplayClass32_0* Zenject::FromBinder___c__DisplayClass32_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::FromBinder___c__DisplayClass32_0*>());
}
// Ctor Parameters []
constexpr ::Zenject::FromBinder___c__DisplayClass32_0::FromBinder___c__DisplayClass32_0() {}
//  Writing Method size for method: ::Zenject::FromBinder___c__DisplayClass35_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::FromBinder___c__DisplayClass35_0::*)()>(&::Zenject::FromBinder___c__DisplayClass35_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x732d468;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass35_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder___c__DisplayClass35_0._FromNewComponentOn_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::IProvider* (::Zenject::FromBinder___c__DisplayClass35_0::*)(::Zenject::DiContainer*, ::System::Type*)>(
    &::Zenject::FromBinder___c__DisplayClass35_0::_FromNewComponentOn_b__0)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x7330958;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass35_0*>(),
                                                             { "<FromNewComponentOn>b__0", {}, { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder___c__DisplayClass35_0.__zenCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*>)>(&::Zenject::FromBinder___c__DisplayClass35_0::__zenCreate)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x7330a00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass35_0*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder___c__DisplayClass35_0.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::FromBinder___c__DisplayClass35_0::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x7330a44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass35_0*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& Zenject::FromBinder___c__DisplayClass35_0::__cordl_internal_get_gameObject() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameObject;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Zenject::FromBinder___c__DisplayClass35_0::__cordl_internal_get_gameObject() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameObject;
}
constexpr void Zenject::FromBinder___c__DisplayClass35_0::__cordl_internal_set_gameObject(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___gameObject = value;
}
constexpr ::Zenject::FromBinder*& Zenject::FromBinder___c__DisplayClass35_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::Zenject::FromBinder* const& Zenject::FromBinder___c__DisplayClass35_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void Zenject::FromBinder___c__DisplayClass35_0::__cordl_internal_set___4__this(::Zenject::FromBinder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
inline void Zenject::FromBinder___c__DisplayClass35_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass35_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Zenject::IProvider* Zenject::FromBinder___c__DisplayClass35_0::_FromNewComponentOn_b__0(::Zenject::DiContainer* container, ::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass35_0*>(),
                                                           { "<FromNewComponentOn>b__0", {}, { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::IProvider*>(this, ___internal_method, container, type);
}
inline ::System::Object* Zenject::FromBinder___c__DisplayClass35_0::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass35_0*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::FromBinder___c__DisplayClass35_0::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass35_0*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::FromBinder___c__DisplayClass35_0* Zenject::FromBinder___c__DisplayClass35_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::FromBinder___c__DisplayClass35_0*>());
}
// Ctor Parameters []
constexpr ::Zenject::FromBinder___c__DisplayClass35_0::FromBinder___c__DisplayClass35_0() {}
//  Writing Method size for method: ::Zenject::FromBinder___c__DisplayClass36_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::FromBinder___c__DisplayClass36_0::*)()>(&::Zenject::FromBinder___c__DisplayClass36_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x732d5ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass36_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder___c__DisplayClass36_0._FromNewComponentOn_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::IProvider* (::Zenject::FromBinder___c__DisplayClass36_0::*)(::Zenject::DiContainer*, ::System::Type*)>(
    &::Zenject::FromBinder___c__DisplayClass36_0::_FromNewComponentOn_b__0)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x7330bd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass36_0*>(),
                                                             { "<FromNewComponentOn>b__0", {}, { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder___c__DisplayClass36_0.__zenCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*>)>(&::Zenject::FromBinder___c__DisplayClass36_0::__zenCreate)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x7330c80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass36_0*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder___c__DisplayClass36_0.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::FromBinder___c__DisplayClass36_0::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x7330cc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass36_0*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Func_2<::Zenject::InjectContext*, ::UnityW<::UnityEngine::GameObject>>*& Zenject::FromBinder___c__DisplayClass36_0::__cordl_internal_get_gameObjectGetter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameObjectGetter;
}
constexpr ::System::Func_2<::Zenject::InjectContext*, ::UnityW<::UnityEngine::GameObject>>* const& Zenject::FromBinder___c__DisplayClass36_0::__cordl_internal_get_gameObjectGetter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameObjectGetter;
}
constexpr void Zenject::FromBinder___c__DisplayClass36_0::__cordl_internal_set_gameObjectGetter(::System::Func_2<::Zenject::InjectContext*, ::UnityW<::UnityEngine::GameObject>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___gameObjectGetter = value;
}
constexpr ::Zenject::FromBinder*& Zenject::FromBinder___c__DisplayClass36_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::Zenject::FromBinder* const& Zenject::FromBinder___c__DisplayClass36_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void Zenject::FromBinder___c__DisplayClass36_0::__cordl_internal_set___4__this(::Zenject::FromBinder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
inline void Zenject::FromBinder___c__DisplayClass36_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass36_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Zenject::IProvider* Zenject::FromBinder___c__DisplayClass36_0::_FromNewComponentOn_b__0(::Zenject::DiContainer* container, ::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass36_0*>(),
                                                           { "<FromNewComponentOn>b__0", {}, { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::IProvider*>(this, ___internal_method, container, type);
}
inline ::System::Object* Zenject::FromBinder___c__DisplayClass36_0::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass36_0*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::FromBinder___c__DisplayClass36_0::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass36_0*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::FromBinder___c__DisplayClass36_0* Zenject::FromBinder___c__DisplayClass36_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::FromBinder___c__DisplayClass36_0*>());
}
// Ctor Parameters []
constexpr ::Zenject::FromBinder___c__DisplayClass36_0::FromBinder___c__DisplayClass36_0() {}
//  Writing Method size for method: ::Zenject::FromBinder___c__DisplayClass40_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::FromBinder___c__DisplayClass40_0::*)()>(&::Zenject::FromBinder___c__DisplayClass40_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x732d940;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass40_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder___c__DisplayClass40_0._FromNewComponentOnNewGameObject_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::IProvider* (::Zenject::FromBinder___c__DisplayClass40_0::*)(::Zenject::DiContainer*, ::System::Type*)>(
    &::Zenject::FromBinder___c__DisplayClass40_0::_FromNewComponentOnNewGameObject_b__0)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x7330e58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass40_0*>(),
                                                             { "<FromNewComponentOnNewGameObject>b__0", {}, { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder___c__DisplayClass40_0.__zenCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*>)>(&::Zenject::FromBinder___c__DisplayClass40_0::__zenCreate)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x7330f00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass40_0*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder___c__DisplayClass40_0.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::FromBinder___c__DisplayClass40_0::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x7330f44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass40_0*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Zenject::FromBinder*& Zenject::FromBinder___c__DisplayClass40_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::Zenject::FromBinder* const& Zenject::FromBinder___c__DisplayClass40_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void Zenject::FromBinder___c__DisplayClass40_0::__cordl_internal_set___4__this(::Zenject::FromBinder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
constexpr ::Zenject::GameObjectCreationParameters*& Zenject::FromBinder___c__DisplayClass40_0::__cordl_internal_get_gameObjectInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameObjectInfo;
}
constexpr ::Zenject::GameObjectCreationParameters* const& Zenject::FromBinder___c__DisplayClass40_0::__cordl_internal_get_gameObjectInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameObjectInfo;
}
constexpr void Zenject::FromBinder___c__DisplayClass40_0::__cordl_internal_set_gameObjectInfo(::Zenject::GameObjectCreationParameters* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___gameObjectInfo = value;
}
inline void Zenject::FromBinder___c__DisplayClass40_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass40_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Zenject::IProvider* Zenject::FromBinder___c__DisplayClass40_0::_FromNewComponentOnNewGameObject_b__0(::Zenject::DiContainer* container, ::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass40_0*>(),
                                                           { "<FromNewComponentOnNewGameObject>b__0", {}, { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::IProvider*>(this, ___internal_method, container, type);
}
inline ::System::Object* Zenject::FromBinder___c__DisplayClass40_0::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass40_0*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::FromBinder___c__DisplayClass40_0::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass40_0*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::FromBinder___c__DisplayClass40_0* Zenject::FromBinder___c__DisplayClass40_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::FromBinder___c__DisplayClass40_0*>());
}
// Ctor Parameters []
constexpr ::Zenject::FromBinder___c__DisplayClass40_0::FromBinder___c__DisplayClass40_0() {}
//  Writing Method size for method: ::Zenject::FromBinder___c__DisplayClass55_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::FromBinder___c__DisplayClass55_0::*)()>(&::Zenject::FromBinder___c__DisplayClass55_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x732e608;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass55_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder___c__DisplayClass55_0._FromScriptableObjectInternal_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::IProvider* (::Zenject::FromBinder___c__DisplayClass55_0::*)(::Zenject::DiContainer*, ::System::Type*)>(
    &::Zenject::FromBinder___c__DisplayClass55_0::_FromScriptableObjectInternal_b__0)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x73310d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass55_0*>(),
                                                             { "<FromScriptableObjectInternal>b__0", {}, { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder___c__DisplayClass55_0.__zenCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*>)>(&::Zenject::FromBinder___c__DisplayClass55_0::__zenCreate)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x733119c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass55_0*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder___c__DisplayClass55_0.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::FromBinder___c__DisplayClass55_0::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x73311e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass55_0*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::ScriptableObject>& Zenject::FromBinder___c__DisplayClass55_0::__cordl_internal_get_resource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___resource;
}
constexpr ::UnityW<::UnityEngine::ScriptableObject> const& Zenject::FromBinder___c__DisplayClass55_0::__cordl_internal_get_resource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___resource;
}
constexpr void Zenject::FromBinder___c__DisplayClass55_0::__cordl_internal_set_resource(::UnityW<::UnityEngine::ScriptableObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___resource = value;
}
constexpr ::Zenject::FromBinder*& Zenject::FromBinder___c__DisplayClass55_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::Zenject::FromBinder* const& Zenject::FromBinder___c__DisplayClass55_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void Zenject::FromBinder___c__DisplayClass55_0::__cordl_internal_set___4__this(::Zenject::FromBinder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
constexpr bool& Zenject::FromBinder___c__DisplayClass55_0::__cordl_internal_get_createNew() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___createNew;
}
constexpr bool const& Zenject::FromBinder___c__DisplayClass55_0::__cordl_internal_get_createNew() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___createNew;
}
constexpr void Zenject::FromBinder___c__DisplayClass55_0::__cordl_internal_set_createNew(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___createNew = value;
}
inline void Zenject::FromBinder___c__DisplayClass55_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass55_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Zenject::IProvider* Zenject::FromBinder___c__DisplayClass55_0::_FromScriptableObjectInternal_b__0(::Zenject::DiContainer* container, ::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass55_0*>(),
                                                           { "<FromScriptableObjectInternal>b__0", {}, { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::IProvider*>(this, ___internal_method, container, type);
}
inline ::System::Object* Zenject::FromBinder___c__DisplayClass55_0::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass55_0*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::FromBinder___c__DisplayClass55_0::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass55_0*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::FromBinder___c__DisplayClass55_0* Zenject::FromBinder___c__DisplayClass55_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::FromBinder___c__DisplayClass55_0*>());
}
// Ctor Parameters []
constexpr ::Zenject::FromBinder___c__DisplayClass55_0::FromBinder___c__DisplayClass55_0() {}
//  Writing Method size for method: ::Zenject::FromBinder___c__DisplayClass58_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::FromBinder___c__DisplayClass58_0::*)()>(&::Zenject::FromBinder___c__DisplayClass58_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x732e764;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass58_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder___c__DisplayClass58_0._FromScriptableObjectResourceInternal_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::IProvider* (::Zenject::FromBinder___c__DisplayClass58_0::*)(::Zenject::DiContainer*, ::System::Type*)>(
    &::Zenject::FromBinder___c__DisplayClass58_0::_FromScriptableObjectResourceInternal_b__0)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x7331374;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass58_0*>(),
                                                             { "<FromScriptableObjectResourceInternal>b__0", {}, { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder___c__DisplayClass58_0.__zenCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*>)>(&::Zenject::FromBinder___c__DisplayClass58_0::__zenCreate)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x7331438;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass58_0*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder___c__DisplayClass58_0.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::FromBinder___c__DisplayClass58_0::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x733147c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass58_0*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& Zenject::FromBinder___c__DisplayClass58_0::__cordl_internal_get_resourcePath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___resourcePath;
}
constexpr ::StringW const& Zenject::FromBinder___c__DisplayClass58_0::__cordl_internal_get_resourcePath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___resourcePath;
}
constexpr void Zenject::FromBinder___c__DisplayClass58_0::__cordl_internal_set_resourcePath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___resourcePath = value;
}
constexpr ::Zenject::FromBinder*& Zenject::FromBinder___c__DisplayClass58_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::Zenject::FromBinder* const& Zenject::FromBinder___c__DisplayClass58_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void Zenject::FromBinder___c__DisplayClass58_0::__cordl_internal_set___4__this(::Zenject::FromBinder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
constexpr bool& Zenject::FromBinder___c__DisplayClass58_0::__cordl_internal_get_createNew() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___createNew;
}
constexpr bool const& Zenject::FromBinder___c__DisplayClass58_0::__cordl_internal_get_createNew() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___createNew;
}
constexpr void Zenject::FromBinder___c__DisplayClass58_0::__cordl_internal_set_createNew(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___createNew = value;
}
inline void Zenject::FromBinder___c__DisplayClass58_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass58_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Zenject::IProvider* Zenject::FromBinder___c__DisplayClass58_0::_FromScriptableObjectResourceInternal_b__0(::Zenject::DiContainer* container, ::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass58_0*>(),
                                                           { "<FromScriptableObjectResourceInternal>b__0", {}, { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::IProvider*>(this, ___internal_method, container, type);
}
inline ::System::Object* Zenject::FromBinder___c__DisplayClass58_0::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass58_0*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::FromBinder___c__DisplayClass58_0::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass58_0*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::FromBinder___c__DisplayClass58_0* Zenject::FromBinder___c__DisplayClass58_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::FromBinder___c__DisplayClass58_0*>());
}
// Ctor Parameters []
constexpr ::Zenject::FromBinder___c__DisplayClass58_0::FromBinder___c__DisplayClass58_0() {}
//  Writing Method size for method: ::Zenject::FromBinder___c__DisplayClass59_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::FromBinder___c__DisplayClass59_0::*)()>(&::Zenject::FromBinder___c__DisplayClass59_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x732e894;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass59_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder___c__DisplayClass59_0._FromResource_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::IProvider* (::Zenject::FromBinder___c__DisplayClass59_0::*)(::Zenject::DiContainer*, ::System::Type*)>(
    &::Zenject::FromBinder___c__DisplayClass59_0::_FromResource_b__0)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x7331610;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass59_0*>(),
                                                             { "<FromResource>b__0", {}, { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder___c__DisplayClass59_0.__zenCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*>)>(&::Zenject::FromBinder___c__DisplayClass59_0::__zenCreate)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x7331678;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass59_0*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder___c__DisplayClass59_0.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::FromBinder___c__DisplayClass59_0::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x73316bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass59_0*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& Zenject::FromBinder___c__DisplayClass59_0::__cordl_internal_get_resourcePath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___resourcePath;
}
constexpr ::StringW const& Zenject::FromBinder___c__DisplayClass59_0::__cordl_internal_get_resourcePath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___resourcePath;
}
constexpr void Zenject::FromBinder___c__DisplayClass59_0::__cordl_internal_set_resourcePath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___resourcePath = value;
}
inline void Zenject::FromBinder___c__DisplayClass59_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass59_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Zenject::IProvider* Zenject::FromBinder___c__DisplayClass59_0::_FromResource_b__0(::Zenject::DiContainer* _, ::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass59_0*>(),
                                                           { "<FromResource>b__0", {}, { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::IProvider*>(this, ___internal_method, _, type);
}
inline ::System::Object* Zenject::FromBinder___c__DisplayClass59_0::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass59_0*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::FromBinder___c__DisplayClass59_0::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass59_0*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::FromBinder___c__DisplayClass59_0* Zenject::FromBinder___c__DisplayClass59_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::FromBinder___c__DisplayClass59_0*>());
}
// Ctor Parameters []
constexpr ::Zenject::FromBinder___c__DisplayClass59_0::FromBinder___c__DisplayClass59_0() {}
//  Writing Method size for method: ::Zenject::FromBinder___c__DisplayClass60_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::FromBinder___c__DisplayClass60_0::*)()>(&::Zenject::FromBinder___c__DisplayClass60_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x732e9c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass60_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder___c__DisplayClass60_0._FromResources_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::IProvider* (::Zenject::FromBinder___c__DisplayClass60_0::*)(::Zenject::DiContainer*, ::System::Type*)>(
    &::Zenject::FromBinder___c__DisplayClass60_0::_FromResources_b__0)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x7331850;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass60_0*>(),
                                                             { "<FromResources>b__0", {}, { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder___c__DisplayClass60_0.__zenCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*>)>(&::Zenject::FromBinder___c__DisplayClass60_0::__zenCreate)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x73318b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass60_0*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder___c__DisplayClass60_0.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::FromBinder___c__DisplayClass60_0::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x73318f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass60_0*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& Zenject::FromBinder___c__DisplayClass60_0::__cordl_internal_get_resourcePath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___resourcePath;
}
constexpr ::StringW const& Zenject::FromBinder___c__DisplayClass60_0::__cordl_internal_get_resourcePath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___resourcePath;
}
constexpr void Zenject::FromBinder___c__DisplayClass60_0::__cordl_internal_set_resourcePath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___resourcePath = value;
}
inline void Zenject::FromBinder___c__DisplayClass60_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass60_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Zenject::IProvider* Zenject::FromBinder___c__DisplayClass60_0::_FromResources_b__0(::Zenject::DiContainer* _, ::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass60_0*>(),
                                                           { "<FromResources>b__0", {}, { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::IProvider*>(this, ___internal_method, _, type);
}
inline ::System::Object* Zenject::FromBinder___c__DisplayClass60_0::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass60_0*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::FromBinder___c__DisplayClass60_0::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass60_0*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::FromBinder___c__DisplayClass60_0* Zenject::FromBinder___c__DisplayClass60_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::FromBinder___c__DisplayClass60_0*>());
}
// Ctor Parameters []
constexpr ::Zenject::FromBinder___c__DisplayClass60_0::FromBinder___c__DisplayClass60_0() {}
//  Writing Method size for method: ::Zenject::FromBinder___c__DisplayClass61_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::FromBinder___c__DisplayClass61_0::*)()>(&::Zenject::FromBinder___c__DisplayClass61_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x732ead8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass61_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder___c__DisplayClass61_0._FromComponentInChildren_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::IProvider* (::Zenject::FromBinder___c__DisplayClass61_0::*)(::Zenject::DiContainer*, ::System::Type*)>(
    &::Zenject::FromBinder___c__DisplayClass61_0::_FromComponentInChildren_b__0)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x7331a8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass61_0*>(),
                                                             { "<FromComponentInChildren>b__0", {}, { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder___c__DisplayClass61_0.__zenCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*>)>(&::Zenject::FromBinder___c__DisplayClass61_0::__zenCreate)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x7331b6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass61_0*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder___c__DisplayClass61_0.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::FromBinder___c__DisplayClass61_0::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x7331bb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass61_0*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
constexpr bool& Zenject::FromBinder___c__DisplayClass61_0::__cordl_internal_get_includeInactive() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___includeInactive;
}
constexpr bool const& Zenject::FromBinder___c__DisplayClass61_0::__cordl_internal_get_includeInactive() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___includeInactive;
}
constexpr void Zenject::FromBinder___c__DisplayClass61_0::__cordl_internal_set_includeInactive(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___includeInactive = value;
}
inline void Zenject::FromBinder___c__DisplayClass61_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass61_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Zenject::IProvider* Zenject::FromBinder___c__DisplayClass61_0::_FromComponentInChildren_b__0(::Zenject::DiContainer* container, ::System::Type* concreteType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass61_0*>(),
                                                           { "<FromComponentInChildren>b__0", {}, { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::IProvider*>(this, ___internal_method, container, concreteType);
}
inline ::System::Object* Zenject::FromBinder___c__DisplayClass61_0::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass61_0*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::FromBinder___c__DisplayClass61_0::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass61_0*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::FromBinder___c__DisplayClass61_0* Zenject::FromBinder___c__DisplayClass61_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::FromBinder___c__DisplayClass61_0*>());
}
// Ctor Parameters []
constexpr ::Zenject::FromBinder___c__DisplayClass61_0::FromBinder___c__DisplayClass61_0() {}
//  Writing Method size for method: ::Zenject::FromBinder___c__DisplayClass61_1._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::FromBinder___c__DisplayClass61_1::*)()>(&::Zenject::FromBinder___c__DisplayClass61_1::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x7331b68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass61_1*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder___c__DisplayClass61_1._FromComponentInChildren_b__1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::System::Object*>* (::Zenject::FromBinder___c__DisplayClass61_1::*)(::Zenject::InjectContext*)>(
    &::Zenject::FromBinder___c__DisplayClass61_1::_FromComponentInChildren_b__1)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x7331d44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass61_1*>(), { "<FromComponentInChildren>b__1", {}, { ::i2c::type_of<::Zenject::InjectContext*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder___c__DisplayClass61_1.__zenCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*>)>(&::Zenject::FromBinder___c__DisplayClass61_1::__zenCreate)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x7331fb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass61_1*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder___c__DisplayClass61_1.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::FromBinder___c__DisplayClass61_1::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x7331ff8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass61_1*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Type*& Zenject::FromBinder___c__DisplayClass61_1::__cordl_internal_get_concreteType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___concreteType;
}
constexpr ::System::Type* const& Zenject::FromBinder___c__DisplayClass61_1::__cordl_internal_get_concreteType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___concreteType;
}
constexpr void Zenject::FromBinder___c__DisplayClass61_1::__cordl_internal_set_concreteType(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___concreteType = value;
}
constexpr ::Zenject::FromBinder___c__DisplayClass61_0*& Zenject::FromBinder___c__DisplayClass61_1::__cordl_internal_get_CS$__8__locals1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CS$__8__locals1;
}
constexpr ::Zenject::FromBinder___c__DisplayClass61_0* const& Zenject::FromBinder___c__DisplayClass61_1::__cordl_internal_get_CS$__8__locals1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CS$__8__locals1;
}
constexpr void Zenject::FromBinder___c__DisplayClass61_1::__cordl_internal_set_CS$__8__locals1(::Zenject::FromBinder___c__DisplayClass61_0* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___CS$__8__locals1 = value;
}
inline void Zenject::FromBinder___c__DisplayClass61_1::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass61_1*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::System::Object*>* Zenject::FromBinder___c__DisplayClass61_1::_FromComponentInChildren_b__1(::Zenject::InjectContext* ctx) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass61_1*>(), { "<FromComponentInChildren>b__1", {}, { ::i2c::type_of<::Zenject::InjectContext*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>(this, ___internal_method, ctx);
}
inline ::System::Object* Zenject::FromBinder___c__DisplayClass61_1::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass61_1*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::FromBinder___c__DisplayClass61_1::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass61_1*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::FromBinder___c__DisplayClass61_1* Zenject::FromBinder___c__DisplayClass61_1::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::FromBinder___c__DisplayClass61_1*>());
}
// Ctor Parameters []
constexpr ::Zenject::FromBinder___c__DisplayClass61_1::FromBinder___c__DisplayClass61_1() {}
//  Writing Method size for method: ::Zenject::FromBinder___c__DisplayClass62_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::FromBinder___c__DisplayClass62_0::*)()>(&::Zenject::FromBinder___c__DisplayClass62_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x732ec08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass62_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder___c__DisplayClass62_0._FromComponentsInChildrenBase_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::IProvider* (::Zenject::FromBinder___c__DisplayClass62_0::*)(::Zenject::DiContainer*, ::System::Type*)>(
    &::Zenject::FromBinder___c__DisplayClass62_0::_FromComponentsInChildrenBase_b__0)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x733218c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass62_0*>(),
                                                             { "<FromComponentsInChildrenBase>b__0", {}, { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder___c__DisplayClass62_0.__zenCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*>)>(&::Zenject::FromBinder___c__DisplayClass62_0::__zenCreate)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x733226c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass62_0*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder___c__DisplayClass62_0.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::FromBinder___c__DisplayClass62_0::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x73322b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass62_0*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
constexpr bool& Zenject::FromBinder___c__DisplayClass62_0::__cordl_internal_get_includeInactive() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___includeInactive;
}
constexpr bool const& Zenject::FromBinder___c__DisplayClass62_0::__cordl_internal_get_includeInactive() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___includeInactive;
}
constexpr void Zenject::FromBinder___c__DisplayClass62_0::__cordl_internal_set_includeInactive(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___includeInactive = value;
}
constexpr bool& Zenject::FromBinder___c__DisplayClass62_0::__cordl_internal_get_excludeSelf() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___excludeSelf;
}
constexpr bool const& Zenject::FromBinder___c__DisplayClass62_0::__cordl_internal_get_excludeSelf() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___excludeSelf;
}
constexpr void Zenject::FromBinder___c__DisplayClass62_0::__cordl_internal_set_excludeSelf(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___excludeSelf = value;
}
constexpr ::System::Func_2<::UnityW<::UnityEngine::Component>, bool>*& Zenject::FromBinder___c__DisplayClass62_0::__cordl_internal_get_predicate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___predicate;
}
constexpr ::System::Func_2<::UnityW<::UnityEngine::Component>, bool>* const& Zenject::FromBinder___c__DisplayClass62_0::__cordl_internal_get_predicate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___predicate;
}
constexpr void Zenject::FromBinder___c__DisplayClass62_0::__cordl_internal_set_predicate(::System::Func_2<::UnityW<::UnityEngine::Component>, bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___predicate = value;
}
inline void Zenject::FromBinder___c__DisplayClass62_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass62_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Zenject::IProvider* Zenject::FromBinder___c__DisplayClass62_0::_FromComponentsInChildrenBase_b__0(::Zenject::DiContainer* container, ::System::Type* concreteType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass62_0*>(),
                                                           { "<FromComponentsInChildrenBase>b__0", {}, { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::IProvider*>(this, ___internal_method, container, concreteType);
}
inline ::System::Object* Zenject::FromBinder___c__DisplayClass62_0::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass62_0*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::FromBinder___c__DisplayClass62_0::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass62_0*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::FromBinder___c__DisplayClass62_0* Zenject::FromBinder___c__DisplayClass62_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::FromBinder___c__DisplayClass62_0*>());
}
// Ctor Parameters []
constexpr ::Zenject::FromBinder___c__DisplayClass62_0::FromBinder___c__DisplayClass62_0() {}
//  Writing Method size for method: ::Zenject::FromBinder___c__DisplayClass62_1._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::FromBinder___c__DisplayClass62_1::*)()>(&::Zenject::FromBinder___c__DisplayClass62_1::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x7332268;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass62_1*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder___c__DisplayClass62_1._FromComponentsInChildrenBase_b__1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::System::Object*>* (::Zenject::FromBinder___c__DisplayClass62_1::*)(::Zenject::InjectContext*)>(
    &::Zenject::FromBinder___c__DisplayClass62_1::_FromComponentsInChildrenBase_b__1)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x7332444;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass62_1*>(),
                                                                                           { "<FromComponentsInChildrenBase>b__1", {}, { ::i2c::type_of<::Zenject::InjectContext*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder___c__DisplayClass62_1.__zenCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*>)>(&::Zenject::FromBinder___c__DisplayClass62_1::__zenCreate)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x73326f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass62_1*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder___c__DisplayClass62_1.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::FromBinder___c__DisplayClass62_1::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x733273c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass62_1*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Type*& Zenject::FromBinder___c__DisplayClass62_1::__cordl_internal_get_concreteType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___concreteType;
}
constexpr ::System::Type* const& Zenject::FromBinder___c__DisplayClass62_1::__cordl_internal_get_concreteType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___concreteType;
}
constexpr void Zenject::FromBinder___c__DisplayClass62_1::__cordl_internal_set_concreteType(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___concreteType = value;
}
constexpr ::Zenject::FromBinder___c__DisplayClass62_0*& Zenject::FromBinder___c__DisplayClass62_1::__cordl_internal_get_CS$__8__locals1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CS$__8__locals1;
}
constexpr ::Zenject::FromBinder___c__DisplayClass62_0* const& Zenject::FromBinder___c__DisplayClass62_1::__cordl_internal_get_CS$__8__locals1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CS$__8__locals1;
}
constexpr void Zenject::FromBinder___c__DisplayClass62_1::__cordl_internal_set_CS$__8__locals1(::Zenject::FromBinder___c__DisplayClass62_0* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___CS$__8__locals1 = value;
}
inline void Zenject::FromBinder___c__DisplayClass62_1::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass62_1*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::System::Object*>* Zenject::FromBinder___c__DisplayClass62_1::_FromComponentsInChildrenBase_b__1(::Zenject::InjectContext* ctx) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass62_1*>(),
                                                                                         { "<FromComponentsInChildrenBase>b__1", {}, { ::i2c::type_of<::Zenject::InjectContext*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>(this, ___internal_method, ctx);
}
inline ::System::Object* Zenject::FromBinder___c__DisplayClass62_1::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass62_1*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::FromBinder___c__DisplayClass62_1::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass62_1*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::FromBinder___c__DisplayClass62_1* Zenject::FromBinder___c__DisplayClass62_1::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::FromBinder___c__DisplayClass62_1*>());
}
// Ctor Parameters []
constexpr ::Zenject::FromBinder___c__DisplayClass62_1::FromBinder___c__DisplayClass62_1() {}
//  Writing Method size for method: ::Zenject::FromBinder___c__DisplayClass62_2._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::FromBinder___c__DisplayClass62_2::*)()>(&::Zenject::FromBinder___c__DisplayClass62_2::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x73326f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass62_2*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder___c__DisplayClass62_2._FromComponentsInChildrenBase_b__2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Zenject::FromBinder___c__DisplayClass62_2::*)(::UnityEngine::Component*)>(
    &::Zenject::FromBinder___c__DisplayClass62_2::_FromComponentsInChildrenBase_b__2)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x73328d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass62_2*>(),
                                                                                           { "<FromComponentsInChildrenBase>b__2", {}, { ::i2c::type_of<::UnityEngine::Component*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder___c__DisplayClass62_2._FromComponentsInChildrenBase_b__3
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Zenject::FromBinder___c__DisplayClass62_2::*)(::UnityEngine::Component*)>(
    &::Zenject::FromBinder___c__DisplayClass62_2::_FromComponentsInChildrenBase_b__3)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x73328f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass62_2*>(),
                                                                                           { "<FromComponentsInChildrenBase>b__3", {}, { ::i2c::type_of<::UnityEngine::Component*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder___c__DisplayClass62_2.__zenCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*>)>(&::Zenject::FromBinder___c__DisplayClass62_2::__zenCreate)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x7332990;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass62_2*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder___c__DisplayClass62_2.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::FromBinder___c__DisplayClass62_2::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x73329d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass62_2*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Zenject::InjectContext*& Zenject::FromBinder___c__DisplayClass62_2::__cordl_internal_get_ctx() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ctx;
}
constexpr ::Zenject::InjectContext* const& Zenject::FromBinder___c__DisplayClass62_2::__cordl_internal_get_ctx() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ctx;
}
constexpr void Zenject::FromBinder___c__DisplayClass62_2::__cordl_internal_set_ctx(::Zenject::InjectContext* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ctx = value;
}
constexpr ::UnityW<::UnityEngine::MonoBehaviour>& Zenject::FromBinder___c__DisplayClass62_2::__cordl_internal_get_monoBehaviour() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___monoBehaviour;
}
constexpr ::UnityW<::UnityEngine::MonoBehaviour> const& Zenject::FromBinder___c__DisplayClass62_2::__cordl_internal_get_monoBehaviour() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___monoBehaviour;
}
constexpr void Zenject::FromBinder___c__DisplayClass62_2::__cordl_internal_set_monoBehaviour(::UnityW<::UnityEngine::MonoBehaviour> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___monoBehaviour = value;
}
inline void Zenject::FromBinder___c__DisplayClass62_2::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass62_2*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Zenject::FromBinder___c__DisplayClass62_2::_FromComponentsInChildrenBase_b__2(::UnityEngine::Component* x) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass62_2*>(),
                                                                                         { "<FromComponentsInChildrenBase>b__2", {}, { ::i2c::type_of<::UnityEngine::Component*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline bool Zenject::FromBinder___c__DisplayClass62_2::_FromComponentsInChildrenBase_b__3(::UnityEngine::Component* x) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass62_2*>(),
                                                                                         { "<FromComponentsInChildrenBase>b__3", {}, { ::i2c::type_of<::UnityEngine::Component*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline ::System::Object* Zenject::FromBinder___c__DisplayClass62_2::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass62_2*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::FromBinder___c__DisplayClass62_2::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass62_2*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::FromBinder___c__DisplayClass62_2* Zenject::FromBinder___c__DisplayClass62_2::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::FromBinder___c__DisplayClass62_2*>());
}
// Ctor Parameters []
constexpr ::Zenject::FromBinder___c__DisplayClass62_2::FromBinder___c__DisplayClass62_2() {}
//  Writing Method size for method: ::Zenject::FromBinder___c__DisplayClass63_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::FromBinder___c__DisplayClass63_0::*)()>(&::Zenject::FromBinder___c__DisplayClass63_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x732ed28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass63_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder___c__DisplayClass63_0._FromComponentInParents_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::IProvider* (::Zenject::FromBinder___c__DisplayClass63_0::*)(::Zenject::DiContainer*, ::System::Type*)>(
    &::Zenject::FromBinder___c__DisplayClass63_0::_FromComponentInParents_b__0)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x7332b68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass63_0*>(),
                                                             { "<FromComponentInParents>b__0", {}, { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder___c__DisplayClass63_0.__zenCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*>)>(&::Zenject::FromBinder___c__DisplayClass63_0::__zenCreate)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x7332c48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass63_0*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder___c__DisplayClass63_0.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::FromBinder___c__DisplayClass63_0::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x7332c8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass63_0*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
constexpr bool& Zenject::FromBinder___c__DisplayClass63_0::__cordl_internal_get_includeInactive() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___includeInactive;
}
constexpr bool const& Zenject::FromBinder___c__DisplayClass63_0::__cordl_internal_get_includeInactive() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___includeInactive;
}
constexpr void Zenject::FromBinder___c__DisplayClass63_0::__cordl_internal_set_includeInactive(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___includeInactive = value;
}
constexpr bool& Zenject::FromBinder___c__DisplayClass63_0::__cordl_internal_get_excludeSelf() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___excludeSelf;
}
constexpr bool const& Zenject::FromBinder___c__DisplayClass63_0::__cordl_internal_get_excludeSelf() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___excludeSelf;
}
constexpr void Zenject::FromBinder___c__DisplayClass63_0::__cordl_internal_set_excludeSelf(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___excludeSelf = value;
}
inline void Zenject::FromBinder___c__DisplayClass63_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass63_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Zenject::IProvider* Zenject::FromBinder___c__DisplayClass63_0::_FromComponentInParents_b__0(::Zenject::DiContainer* container, ::System::Type* concreteType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass63_0*>(),
                                                           { "<FromComponentInParents>b__0", {}, { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::IProvider*>(this, ___internal_method, container, concreteType);
}
inline ::System::Object* Zenject::FromBinder___c__DisplayClass63_0::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass63_0*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::FromBinder___c__DisplayClass63_0::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass63_0*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::FromBinder___c__DisplayClass63_0* Zenject::FromBinder___c__DisplayClass63_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::FromBinder___c__DisplayClass63_0*>());
}
// Ctor Parameters []
constexpr ::Zenject::FromBinder___c__DisplayClass63_0::FromBinder___c__DisplayClass63_0() {}
//  Writing Method size for method: ::Zenject::FromBinder___c__DisplayClass63_1._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::FromBinder___c__DisplayClass63_1::*)()>(&::Zenject::FromBinder___c__DisplayClass63_1::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x7332c44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass63_1*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder___c__DisplayClass63_1._FromComponentInParents_b__1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::System::Object*>* (::Zenject::FromBinder___c__DisplayClass63_1::*)(::Zenject::InjectContext*)>(
    &::Zenject::FromBinder___c__DisplayClass63_1::_FromComponentInParents_b__1)> {
  constexpr static std::size_t size = 0x3e0;
  constexpr static std::size_t addrs = 0x7332e20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass63_1*>(), { "<FromComponentInParents>b__1", {}, { ::i2c::type_of<::Zenject::InjectContext*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder___c__DisplayClass63_1.__zenCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*>)>(&::Zenject::FromBinder___c__DisplayClass63_1::__zenCreate)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x7333204;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass63_1*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder___c__DisplayClass63_1.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::FromBinder___c__DisplayClass63_1::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x7333248;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass63_1*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Type*& Zenject::FromBinder___c__DisplayClass63_1::__cordl_internal_get_concreteType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___concreteType;
}
constexpr ::System::Type* const& Zenject::FromBinder___c__DisplayClass63_1::__cordl_internal_get_concreteType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___concreteType;
}
constexpr void Zenject::FromBinder___c__DisplayClass63_1::__cordl_internal_set_concreteType(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___concreteType = value;
}
constexpr ::Zenject::FromBinder___c__DisplayClass63_0*& Zenject::FromBinder___c__DisplayClass63_1::__cordl_internal_get_CS$__8__locals1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CS$__8__locals1;
}
constexpr ::Zenject::FromBinder___c__DisplayClass63_0* const& Zenject::FromBinder___c__DisplayClass63_1::__cordl_internal_get_CS$__8__locals1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CS$__8__locals1;
}
constexpr void Zenject::FromBinder___c__DisplayClass63_1::__cordl_internal_set_CS$__8__locals1(::Zenject::FromBinder___c__DisplayClass63_0* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___CS$__8__locals1 = value;
}
inline void Zenject::FromBinder___c__DisplayClass63_1::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass63_1*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::System::Object*>* Zenject::FromBinder___c__DisplayClass63_1::_FromComponentInParents_b__1(::Zenject::InjectContext* ctx) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass63_1*>(), { "<FromComponentInParents>b__1", {}, { ::i2c::type_of<::Zenject::InjectContext*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>(this, ___internal_method, ctx);
}
inline ::System::Object* Zenject::FromBinder___c__DisplayClass63_1::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass63_1*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::FromBinder___c__DisplayClass63_1::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass63_1*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::FromBinder___c__DisplayClass63_1* Zenject::FromBinder___c__DisplayClass63_1::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::FromBinder___c__DisplayClass63_1*>());
}
// Ctor Parameters []
constexpr ::Zenject::FromBinder___c__DisplayClass63_1::FromBinder___c__DisplayClass63_1() {}
//  Writing Method size for method: ::Zenject::FromBinder___c__DisplayClass63_2._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::FromBinder___c__DisplayClass63_2::*)()>(&::Zenject::FromBinder___c__DisplayClass63_2::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x7333200;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass63_2*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder___c__DisplayClass63_2._FromComponentInParents_b__2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Zenject::FromBinder___c__DisplayClass63_2::*)(::UnityEngine::Component*)>(
    &::Zenject::FromBinder___c__DisplayClass63_2::_FromComponentInParents_b__2)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x73333dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass63_2*>(), { "<FromComponentInParents>b__2", {}, { ::i2c::type_of<::UnityEngine::Component*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder___c__DisplayClass63_2._FromComponentInParents_b__3
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Zenject::FromBinder___c__DisplayClass63_2::*)(::UnityEngine::Component*)>(
    &::Zenject::FromBinder___c__DisplayClass63_2::_FromComponentInParents_b__3)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x73333fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass63_2*>(), { "<FromComponentInParents>b__3", {}, { ::i2c::type_of<::UnityEngine::Component*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder___c__DisplayClass63_2.__zenCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*>)>(&::Zenject::FromBinder___c__DisplayClass63_2::__zenCreate)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x733349c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass63_2*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder___c__DisplayClass63_2.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::FromBinder___c__DisplayClass63_2::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x73334e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass63_2*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Zenject::InjectContext*& Zenject::FromBinder___c__DisplayClass63_2::__cordl_internal_get_ctx() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ctx;
}
constexpr ::Zenject::InjectContext* const& Zenject::FromBinder___c__DisplayClass63_2::__cordl_internal_get_ctx() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ctx;
}
constexpr void Zenject::FromBinder___c__DisplayClass63_2::__cordl_internal_set_ctx(::Zenject::InjectContext* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ctx = value;
}
constexpr ::UnityW<::UnityEngine::MonoBehaviour>& Zenject::FromBinder___c__DisplayClass63_2::__cordl_internal_get_monoBehaviour() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___monoBehaviour;
}
constexpr ::UnityW<::UnityEngine::MonoBehaviour> const& Zenject::FromBinder___c__DisplayClass63_2::__cordl_internal_get_monoBehaviour() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___monoBehaviour;
}
constexpr void Zenject::FromBinder___c__DisplayClass63_2::__cordl_internal_set_monoBehaviour(::UnityW<::UnityEngine::MonoBehaviour> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___monoBehaviour = value;
}
inline void Zenject::FromBinder___c__DisplayClass63_2::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass63_2*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Zenject::FromBinder___c__DisplayClass63_2::_FromComponentInParents_b__2(::UnityEngine::Component* x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass63_2*>(), { "<FromComponentInParents>b__2", {}, { ::i2c::type_of<::UnityEngine::Component*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline bool Zenject::FromBinder___c__DisplayClass63_2::_FromComponentInParents_b__3(::UnityEngine::Component* x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass63_2*>(), { "<FromComponentInParents>b__3", {}, { ::i2c::type_of<::UnityEngine::Component*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline ::System::Object* Zenject::FromBinder___c__DisplayClass63_2::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass63_2*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::FromBinder___c__DisplayClass63_2::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass63_2*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::FromBinder___c__DisplayClass63_2* Zenject::FromBinder___c__DisplayClass63_2::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::FromBinder___c__DisplayClass63_2*>());
}
// Ctor Parameters []
constexpr ::Zenject::FromBinder___c__DisplayClass63_2::FromBinder___c__DisplayClass63_2() {}
//  Writing Method size for method: ::Zenject::FromBinder___c__DisplayClass64_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::FromBinder___c__DisplayClass64_0::*)()>(&::Zenject::FromBinder___c__DisplayClass64_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x732ee48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass64_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder___c__DisplayClass64_0._FromComponentsInParents_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::IProvider* (::Zenject::FromBinder___c__DisplayClass64_0::*)(::Zenject::DiContainer*, ::System::Type*)>(
    &::Zenject::FromBinder___c__DisplayClass64_0::_FromComponentsInParents_b__0)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x7333674;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass64_0*>(),
                                                             { "<FromComponentsInParents>b__0", {}, { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder___c__DisplayClass64_0.__zenCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*>)>(&::Zenject::FromBinder___c__DisplayClass64_0::__zenCreate)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x7333754;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass64_0*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder___c__DisplayClass64_0.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::FromBinder___c__DisplayClass64_0::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x7333798;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass64_0*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
constexpr bool& Zenject::FromBinder___c__DisplayClass64_0::__cordl_internal_get_includeInactive() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___includeInactive;
}
constexpr bool const& Zenject::FromBinder___c__DisplayClass64_0::__cordl_internal_get_includeInactive() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___includeInactive;
}
constexpr void Zenject::FromBinder___c__DisplayClass64_0::__cordl_internal_set_includeInactive(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___includeInactive = value;
}
constexpr bool& Zenject::FromBinder___c__DisplayClass64_0::__cordl_internal_get_excludeSelf() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___excludeSelf;
}
constexpr bool const& Zenject::FromBinder___c__DisplayClass64_0::__cordl_internal_get_excludeSelf() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___excludeSelf;
}
constexpr void Zenject::FromBinder___c__DisplayClass64_0::__cordl_internal_set_excludeSelf(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___excludeSelf = value;
}
inline void Zenject::FromBinder___c__DisplayClass64_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass64_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Zenject::IProvider* Zenject::FromBinder___c__DisplayClass64_0::_FromComponentsInParents_b__0(::Zenject::DiContainer* container, ::System::Type* concreteType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass64_0*>(),
                                                           { "<FromComponentsInParents>b__0", {}, { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::IProvider*>(this, ___internal_method, container, concreteType);
}
inline ::System::Object* Zenject::FromBinder___c__DisplayClass64_0::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass64_0*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::FromBinder___c__DisplayClass64_0::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass64_0*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::FromBinder___c__DisplayClass64_0* Zenject::FromBinder___c__DisplayClass64_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::FromBinder___c__DisplayClass64_0*>());
}
// Ctor Parameters []
constexpr ::Zenject::FromBinder___c__DisplayClass64_0::FromBinder___c__DisplayClass64_0() {}
//  Writing Method size for method: ::Zenject::FromBinder___c__DisplayClass64_1._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::FromBinder___c__DisplayClass64_1::*)()>(&::Zenject::FromBinder___c__DisplayClass64_1::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x7333750;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass64_1*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder___c__DisplayClass64_1._FromComponentsInParents_b__1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::System::Object*>* (::Zenject::FromBinder___c__DisplayClass64_1::*)(::Zenject::InjectContext*)>(
    &::Zenject::FromBinder___c__DisplayClass64_1::_FromComponentsInParents_b__1)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x733392c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass64_1*>(), { "<FromComponentsInParents>b__1", {}, { ::i2c::type_of<::Zenject::InjectContext*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder___c__DisplayClass64_1.__zenCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*>)>(&::Zenject::FromBinder___c__DisplayClass64_1::__zenCreate)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x7333bc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass64_1*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder___c__DisplayClass64_1.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::FromBinder___c__DisplayClass64_1::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x7333c04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass64_1*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Type*& Zenject::FromBinder___c__DisplayClass64_1::__cordl_internal_get_concreteType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___concreteType;
}
constexpr ::System::Type* const& Zenject::FromBinder___c__DisplayClass64_1::__cordl_internal_get_concreteType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___concreteType;
}
constexpr void Zenject::FromBinder___c__DisplayClass64_1::__cordl_internal_set_concreteType(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___concreteType = value;
}
constexpr ::Zenject::FromBinder___c__DisplayClass64_0*& Zenject::FromBinder___c__DisplayClass64_1::__cordl_internal_get_CS$__8__locals1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CS$__8__locals1;
}
constexpr ::Zenject::FromBinder___c__DisplayClass64_0* const& Zenject::FromBinder___c__DisplayClass64_1::__cordl_internal_get_CS$__8__locals1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CS$__8__locals1;
}
constexpr void Zenject::FromBinder___c__DisplayClass64_1::__cordl_internal_set_CS$__8__locals1(::Zenject::FromBinder___c__DisplayClass64_0* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___CS$__8__locals1 = value;
}
inline void Zenject::FromBinder___c__DisplayClass64_1::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass64_1*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::System::Object*>* Zenject::FromBinder___c__DisplayClass64_1::_FromComponentsInParents_b__1(::Zenject::InjectContext* ctx) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass64_1*>(), { "<FromComponentsInParents>b__1", {}, { ::i2c::type_of<::Zenject::InjectContext*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>(this, ___internal_method, ctx);
}
inline ::System::Object* Zenject::FromBinder___c__DisplayClass64_1::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass64_1*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::FromBinder___c__DisplayClass64_1::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass64_1*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::FromBinder___c__DisplayClass64_1* Zenject::FromBinder___c__DisplayClass64_1::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::FromBinder___c__DisplayClass64_1*>());
}
// Ctor Parameters []
constexpr ::Zenject::FromBinder___c__DisplayClass64_1::FromBinder___c__DisplayClass64_1() {}
//  Writing Method size for method: ::Zenject::FromBinder___c__DisplayClass64_2._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::FromBinder___c__DisplayClass64_2::*)()>(&::Zenject::FromBinder___c__DisplayClass64_2::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x7333bbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass64_2*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder___c__DisplayClass64_2._FromComponentsInParents_b__2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Zenject::FromBinder___c__DisplayClass64_2::*)(::UnityEngine::Component*)>(
    &::Zenject::FromBinder___c__DisplayClass64_2::_FromComponentsInParents_b__2)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x7333d98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass64_2*>(), { "<FromComponentsInParents>b__2", {}, { ::i2c::type_of<::UnityEngine::Component*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder___c__DisplayClass64_2._FromComponentsInParents_b__3
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Zenject::FromBinder___c__DisplayClass64_2::*)(::UnityEngine::Component*)>(
    &::Zenject::FromBinder___c__DisplayClass64_2::_FromComponentsInParents_b__3)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x7333db8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass64_2*>(), { "<FromComponentsInParents>b__3", {}, { ::i2c::type_of<::UnityEngine::Component*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder___c__DisplayClass64_2.__zenCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*>)>(&::Zenject::FromBinder___c__DisplayClass64_2::__zenCreate)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x7333e58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass64_2*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder___c__DisplayClass64_2.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::FromBinder___c__DisplayClass64_2::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x7333e9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass64_2*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Zenject::InjectContext*& Zenject::FromBinder___c__DisplayClass64_2::__cordl_internal_get_ctx() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ctx;
}
constexpr ::Zenject::InjectContext* const& Zenject::FromBinder___c__DisplayClass64_2::__cordl_internal_get_ctx() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ctx;
}
constexpr void Zenject::FromBinder___c__DisplayClass64_2::__cordl_internal_set_ctx(::Zenject::InjectContext* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ctx = value;
}
constexpr ::UnityW<::UnityEngine::MonoBehaviour>& Zenject::FromBinder___c__DisplayClass64_2::__cordl_internal_get_monoBehaviour() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___monoBehaviour;
}
constexpr ::UnityW<::UnityEngine::MonoBehaviour> const& Zenject::FromBinder___c__DisplayClass64_2::__cordl_internal_get_monoBehaviour() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___monoBehaviour;
}
constexpr void Zenject::FromBinder___c__DisplayClass64_2::__cordl_internal_set_monoBehaviour(::UnityW<::UnityEngine::MonoBehaviour> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___monoBehaviour = value;
}
inline void Zenject::FromBinder___c__DisplayClass64_2::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass64_2*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Zenject::FromBinder___c__DisplayClass64_2::_FromComponentsInParents_b__2(::UnityEngine::Component* x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass64_2*>(), { "<FromComponentsInParents>b__2", {}, { ::i2c::type_of<::UnityEngine::Component*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline bool Zenject::FromBinder___c__DisplayClass64_2::_FromComponentsInParents_b__3(::UnityEngine::Component* x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass64_2*>(), { "<FromComponentsInParents>b__3", {}, { ::i2c::type_of<::UnityEngine::Component*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline ::System::Object* Zenject::FromBinder___c__DisplayClass64_2::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass64_2*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::FromBinder___c__DisplayClass64_2::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass64_2*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::FromBinder___c__DisplayClass64_2* Zenject::FromBinder___c__DisplayClass64_2::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::FromBinder___c__DisplayClass64_2*>());
}
// Ctor Parameters []
constexpr ::Zenject::FromBinder___c__DisplayClass64_2::FromBinder___c__DisplayClass64_2() {}
//  Writing Method size for method: ::Zenject::FromBinder___c__DisplayClass65_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::FromBinder___c__DisplayClass65_0::*)()>(&::Zenject::FromBinder___c__DisplayClass65_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x732fb54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass65_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder___c__DisplayClass65_0._FromComponentSibling_b__1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::System::Object*>* (::Zenject::FromBinder___c__DisplayClass65_0::*)(::Zenject::InjectContext*)>(
    &::Zenject::FromBinder___c__DisplayClass65_0::_FromComponentSibling_b__1)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x7334030;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass65_0*>(), { "<FromComponentSibling>b__1", {}, { ::i2c::type_of<::Zenject::InjectContext*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder___c__DisplayClass65_0.__zenCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*>)>(&::Zenject::FromBinder___c__DisplayClass65_0::__zenCreate)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x733428c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass65_0*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder___c__DisplayClass65_0.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::FromBinder___c__DisplayClass65_0::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x73342d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass65_0*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Type*& Zenject::FromBinder___c__DisplayClass65_0::__cordl_internal_get_concreteType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___concreteType;
}
constexpr ::System::Type* const& Zenject::FromBinder___c__DisplayClass65_0::__cordl_internal_get_concreteType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___concreteType;
}
constexpr void Zenject::FromBinder___c__DisplayClass65_0::__cordl_internal_set_concreteType(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___concreteType = value;
}
inline void Zenject::FromBinder___c__DisplayClass65_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass65_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::System::Object*>* Zenject::FromBinder___c__DisplayClass65_0::_FromComponentSibling_b__1(::Zenject::InjectContext* ctx) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass65_0*>(), { "<FromComponentSibling>b__1", {}, { ::i2c::type_of<::Zenject::InjectContext*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>(this, ___internal_method, ctx);
}
inline ::System::Object* Zenject::FromBinder___c__DisplayClass65_0::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass65_0*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::FromBinder___c__DisplayClass65_0::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass65_0*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::FromBinder___c__DisplayClass65_0* Zenject::FromBinder___c__DisplayClass65_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::FromBinder___c__DisplayClass65_0*>());
}
// Ctor Parameters []
constexpr ::Zenject::FromBinder___c__DisplayClass65_0::FromBinder___c__DisplayClass65_0() {}
//  Writing Method size for method: ::Zenject::FromBinder___c__DisplayClass66_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::FromBinder___c__DisplayClass66_0::*)()>(&::Zenject::FromBinder___c__DisplayClass66_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x732fc30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass66_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder___c__DisplayClass66_0._FromComponentsSibling_b__1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::System::Object*>* (::Zenject::FromBinder___c__DisplayClass66_0::*)(::Zenject::InjectContext*)>(
    &::Zenject::FromBinder___c__DisplayClass66_0::_FromComponentsSibling_b__1)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x7334464;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass66_0*>(), { "<FromComponentsSibling>b__1", {}, { ::i2c::type_of<::Zenject::InjectContext*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder___c__DisplayClass66_0.__zenCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*>)>(&::Zenject::FromBinder___c__DisplayClass66_0::__zenCreate)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x7334670;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass66_0*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder___c__DisplayClass66_0.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::FromBinder___c__DisplayClass66_0::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x73346b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass66_0*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Type*& Zenject::FromBinder___c__DisplayClass66_0::__cordl_internal_get_concreteType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___concreteType;
}
constexpr ::System::Type* const& Zenject::FromBinder___c__DisplayClass66_0::__cordl_internal_get_concreteType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___concreteType;
}
constexpr void Zenject::FromBinder___c__DisplayClass66_0::__cordl_internal_set_concreteType(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___concreteType = value;
}
inline void Zenject::FromBinder___c__DisplayClass66_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass66_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::System::Object*>* Zenject::FromBinder___c__DisplayClass66_0::_FromComponentsSibling_b__1(::Zenject::InjectContext* ctx) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass66_0*>(), { "<FromComponentsSibling>b__1", {}, { ::i2c::type_of<::Zenject::InjectContext*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>(this, ___internal_method, ctx);
}
inline ::System::Object* Zenject::FromBinder___c__DisplayClass66_0::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass66_0*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::FromBinder___c__DisplayClass66_0::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass66_0*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::FromBinder___c__DisplayClass66_0* Zenject::FromBinder___c__DisplayClass66_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::FromBinder___c__DisplayClass66_0*>());
}
// Ctor Parameters []
constexpr ::Zenject::FromBinder___c__DisplayClass66_0::FromBinder___c__DisplayClass66_0() {}
//  Writing Method size for method: ::Zenject::FromBinder___c__DisplayClass66_1._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::FromBinder___c__DisplayClass66_1::*)()>(&::Zenject::FromBinder___c__DisplayClass66_1::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x733466c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass66_1*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder___c__DisplayClass66_1._FromComponentsSibling_b__2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Zenject::FromBinder___c__DisplayClass66_1::*)(::UnityEngine::Component*)>(
    &::Zenject::FromBinder___c__DisplayClass66_1::_FromComponentsSibling_b__2)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x7334848;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass66_1*>(), { "<FromComponentsSibling>b__2", {}, { ::i2c::type_of<::UnityEngine::Component*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder___c__DisplayClass66_1.__zenCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*>)>(&::Zenject::FromBinder___c__DisplayClass66_1::__zenCreate)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x7334858;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass66_1*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder___c__DisplayClass66_1.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::FromBinder___c__DisplayClass66_1::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x733489c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass66_1*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::MonoBehaviour>& Zenject::FromBinder___c__DisplayClass66_1::__cordl_internal_get_monoBehaviour() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___monoBehaviour;
}
constexpr ::UnityW<::UnityEngine::MonoBehaviour> const& Zenject::FromBinder___c__DisplayClass66_1::__cordl_internal_get_monoBehaviour() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___monoBehaviour;
}
constexpr void Zenject::FromBinder___c__DisplayClass66_1::__cordl_internal_set_monoBehaviour(::UnityW<::UnityEngine::MonoBehaviour> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___monoBehaviour = value;
}
inline void Zenject::FromBinder___c__DisplayClass66_1::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass66_1*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Zenject::FromBinder___c__DisplayClass66_1::_FromComponentsSibling_b__2(::UnityEngine::Component* x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass66_1*>(), { "<FromComponentsSibling>b__2", {}, { ::i2c::type_of<::UnityEngine::Component*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline ::System::Object* Zenject::FromBinder___c__DisplayClass66_1::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass66_1*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::FromBinder___c__DisplayClass66_1::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass66_1*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::FromBinder___c__DisplayClass66_1* Zenject::FromBinder___c__DisplayClass66_1::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::FromBinder___c__DisplayClass66_1*>());
}
// Ctor Parameters []
constexpr ::Zenject::FromBinder___c__DisplayClass66_1::FromBinder___c__DisplayClass66_1() {}
//  Writing Method size for method: ::Zenject::FromBinder___c__DisplayClass67_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::FromBinder___c__DisplayClass67_0::*)()>(&::Zenject::FromBinder___c__DisplayClass67_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x7334b98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass67_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder___c__DisplayClass67_0._FromComponentInHierarchy_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::IProvider* (::Zenject::FromBinder___c__DisplayClass67_0::*)(::Zenject::DiContainer*, ::System::Type*)>(
    &::Zenject::FromBinder___c__DisplayClass67_0::_FromComponentInHierarchy_b__0)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x7334b9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass67_0*>(),
                                                             { "<FromComponentInHierarchy>b__0", {}, { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder___c__DisplayClass67_0.__zenCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*>)>(&::Zenject::FromBinder___c__DisplayClass67_0::__zenCreate)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x7334c84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass67_0*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder___c__DisplayClass67_0.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::FromBinder___c__DisplayClass67_0::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x7334cc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass67_0*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
constexpr bool& Zenject::FromBinder___c__DisplayClass67_0::__cordl_internal_get_includeInactive() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___includeInactive;
}
constexpr bool const& Zenject::FromBinder___c__DisplayClass67_0::__cordl_internal_get_includeInactive() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___includeInactive;
}
constexpr void Zenject::FromBinder___c__DisplayClass67_0::__cordl_internal_set_includeInactive(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___includeInactive = value;
}
inline void Zenject::FromBinder___c__DisplayClass67_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass67_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Zenject::IProvider* Zenject::FromBinder___c__DisplayClass67_0::_FromComponentInHierarchy_b__0(::Zenject::DiContainer* container, ::System::Type* concreteType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass67_0*>(),
                                                           { "<FromComponentInHierarchy>b__0", {}, { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::IProvider*>(this, ___internal_method, container, concreteType);
}
inline ::System::Object* Zenject::FromBinder___c__DisplayClass67_0::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass67_0*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::FromBinder___c__DisplayClass67_0::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass67_0*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::FromBinder___c__DisplayClass67_0* Zenject::FromBinder___c__DisplayClass67_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::FromBinder___c__DisplayClass67_0*>());
}
// Ctor Parameters []
constexpr ::Zenject::FromBinder___c__DisplayClass67_0::FromBinder___c__DisplayClass67_0() {}
//  Writing Method size for method: ::Zenject::FromBinder___c__DisplayClass67_1._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::FromBinder___c__DisplayClass67_1::*)()>(&::Zenject::FromBinder___c__DisplayClass67_1::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x7334c80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass67_1*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder___c__DisplayClass67_1._FromComponentInHierarchy_b__1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::System::Object*>* (::Zenject::FromBinder___c__DisplayClass67_1::*)(::Zenject::InjectContext*)>(
    &::Zenject::FromBinder___c__DisplayClass67_1::_FromComponentInHierarchy_b__1)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x7334e5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass67_1*>(), { "<FromComponentInHierarchy>b__1", {}, { ::i2c::type_of<::Zenject::InjectContext*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder___c__DisplayClass67_1._FromComponentInHierarchy_b__2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Component> (::Zenject::FromBinder___c__DisplayClass67_1::*)(::UnityEngine::GameObject*)>(
    &::Zenject::FromBinder___c__DisplayClass67_1::_FromComponentInHierarchy_b__2)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x7335170;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass67_1*>(), { "<FromComponentInHierarchy>b__2", {}, { ::i2c::type_of<::UnityEngine::GameObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder___c__DisplayClass67_1.__zenCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*>)>(&::Zenject::FromBinder___c__DisplayClass67_1::__zenCreate)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x73351a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass67_1*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder___c__DisplayClass67_1.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::FromBinder___c__DisplayClass67_1::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x73351e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass67_1*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Zenject::DiContainer*& Zenject::FromBinder___c__DisplayClass67_1::__cordl_internal_get_container() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___container;
}
constexpr ::Zenject::DiContainer* const& Zenject::FromBinder___c__DisplayClass67_1::__cordl_internal_get_container() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___container;
}
constexpr void Zenject::FromBinder___c__DisplayClass67_1::__cordl_internal_set_container(::Zenject::DiContainer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___container = value;
}
constexpr ::System::Type*& Zenject::FromBinder___c__DisplayClass67_1::__cordl_internal_get_concreteType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___concreteType;
}
constexpr ::System::Type* const& Zenject::FromBinder___c__DisplayClass67_1::__cordl_internal_get_concreteType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___concreteType;
}
constexpr void Zenject::FromBinder___c__DisplayClass67_1::__cordl_internal_set_concreteType(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___concreteType = value;
}
constexpr ::Zenject::FromBinder___c__DisplayClass67_0*& Zenject::FromBinder___c__DisplayClass67_1::__cordl_internal_get_CS$__8__locals1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CS$__8__locals1;
}
constexpr ::Zenject::FromBinder___c__DisplayClass67_0* const& Zenject::FromBinder___c__DisplayClass67_1::__cordl_internal_get_CS$__8__locals1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CS$__8__locals1;
}
constexpr void Zenject::FromBinder___c__DisplayClass67_1::__cordl_internal_set_CS$__8__locals1(::Zenject::FromBinder___c__DisplayClass67_0* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___CS$__8__locals1 = value;
}
constexpr ::System::Func_2<::UnityW<::UnityEngine::GameObject>, ::UnityW<::UnityEngine::Component>>*& Zenject::FromBinder___c__DisplayClass67_1::__cordl_internal_get___9__2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____9__2;
}
constexpr ::System::Func_2<::UnityW<::UnityEngine::GameObject>, ::UnityW<::UnityEngine::Component>>* const& Zenject::FromBinder___c__DisplayClass67_1::__cordl_internal_get___9__2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____9__2;
}
constexpr void Zenject::FromBinder___c__DisplayClass67_1::__cordl_internal_set___9__2(::System::Func_2<::UnityW<::UnityEngine::GameObject>, ::UnityW<::UnityEngine::Component>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____9__2 = value;
}
inline void Zenject::FromBinder___c__DisplayClass67_1::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass67_1*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::System::Object*>* Zenject::FromBinder___c__DisplayClass67_1::_FromComponentInHierarchy_b__1(::Zenject::InjectContext* ctx) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass67_1*>(), { "<FromComponentInHierarchy>b__1", {}, { ::i2c::type_of<::Zenject::InjectContext*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>(this, ___internal_method, ctx);
}
inline ::UnityW<::UnityEngine::Component> Zenject::FromBinder___c__DisplayClass67_1::_FromComponentInHierarchy_b__2(::UnityEngine::GameObject* x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass67_1*>(), { "<FromComponentInHierarchy>b__2", {}, { ::i2c::type_of<::UnityEngine::GameObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Component>>(this, ___internal_method, x);
}
inline ::System::Object* Zenject::FromBinder___c__DisplayClass67_1::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass67_1*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::FromBinder___c__DisplayClass67_1::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass67_1*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::FromBinder___c__DisplayClass67_1* Zenject::FromBinder___c__DisplayClass67_1::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::FromBinder___c__DisplayClass67_1*>());
}
// Ctor Parameters []
constexpr ::Zenject::FromBinder___c__DisplayClass67_1::FromBinder___c__DisplayClass67_1() {}
//  Writing Method size for method: ::Zenject::FromBinder___c__DisplayClass67_2._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::FromBinder___c__DisplayClass67_2::*)()>(&::Zenject::FromBinder___c__DisplayClass67_2::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x733516c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass67_2*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder___c__DisplayClass67_2._FromComponentInHierarchy_b__3
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Zenject::FromBinder___c__DisplayClass67_2::*)(::UnityEngine::Component*)>(
    &::Zenject::FromBinder___c__DisplayClass67_2::_FromComponentInHierarchy_b__3)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x7335378;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass67_2*>(), { "<FromComponentInHierarchy>b__3", {}, { ::i2c::type_of<::UnityEngine::Component*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder___c__DisplayClass67_2.__zenCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*>)>(&::Zenject::FromBinder___c__DisplayClass67_2::__zenCreate)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x733540c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass67_2*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder___c__DisplayClass67_2.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::FromBinder___c__DisplayClass67_2::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x7335450;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass67_2*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Zenject::InjectContext*& Zenject::FromBinder___c__DisplayClass67_2::__cordl_internal_get_ctx() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ctx;
}
constexpr ::Zenject::InjectContext* const& Zenject::FromBinder___c__DisplayClass67_2::__cordl_internal_get_ctx() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ctx;
}
constexpr void Zenject::FromBinder___c__DisplayClass67_2::__cordl_internal_set_ctx(::Zenject::InjectContext* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ctx = value;
}
inline void Zenject::FromBinder___c__DisplayClass67_2::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass67_2*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Zenject::FromBinder___c__DisplayClass67_2::_FromComponentInHierarchy_b__3(::UnityEngine::Component* x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass67_2*>(), { "<FromComponentInHierarchy>b__3", {}, { ::i2c::type_of<::UnityEngine::Component*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline ::System::Object* Zenject::FromBinder___c__DisplayClass67_2::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass67_2*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::FromBinder___c__DisplayClass67_2::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass67_2*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::FromBinder___c__DisplayClass67_2* Zenject::FromBinder___c__DisplayClass67_2::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::FromBinder___c__DisplayClass67_2*>());
}
// Ctor Parameters []
constexpr ::Zenject::FromBinder___c__DisplayClass67_2::FromBinder___c__DisplayClass67_2() {}
//  Writing Method size for method: ::Zenject::FromBinder___c__DisplayClass68_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::FromBinder___c__DisplayClass68_0::*)()>(&::Zenject::FromBinder___c__DisplayClass68_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x73355e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass68_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder___c__DisplayClass68_0._FromComponentsInHierarchyBase_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::IProvider* (::Zenject::FromBinder___c__DisplayClass68_0::*)(::Zenject::DiContainer*, ::System::Type*)>(
    &::Zenject::FromBinder___c__DisplayClass68_0::_FromComponentsInHierarchyBase_b__0)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x73355e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass68_0*>(),
                                                             { "<FromComponentsInHierarchyBase>b__0", {}, { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder___c__DisplayClass68_0.__zenCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*>)>(&::Zenject::FromBinder___c__DisplayClass68_0::__zenCreate)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x73356d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass68_0*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder___c__DisplayClass68_0.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::FromBinder___c__DisplayClass68_0::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x7335714;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass68_0*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
constexpr bool& Zenject::FromBinder___c__DisplayClass68_0::__cordl_internal_get_includeInactive() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___includeInactive;
}
constexpr bool const& Zenject::FromBinder___c__DisplayClass68_0::__cordl_internal_get_includeInactive() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___includeInactive;
}
constexpr void Zenject::FromBinder___c__DisplayClass68_0::__cordl_internal_set_includeInactive(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___includeInactive = value;
}
constexpr ::System::Func_2<::UnityW<::UnityEngine::Component>, bool>*& Zenject::FromBinder___c__DisplayClass68_0::__cordl_internal_get_predicate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___predicate;
}
constexpr ::System::Func_2<::UnityW<::UnityEngine::Component>, bool>* const& Zenject::FromBinder___c__DisplayClass68_0::__cordl_internal_get_predicate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___predicate;
}
constexpr void Zenject::FromBinder___c__DisplayClass68_0::__cordl_internal_set_predicate(::System::Func_2<::UnityW<::UnityEngine::Component>, bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___predicate = value;
}
inline void Zenject::FromBinder___c__DisplayClass68_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass68_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Zenject::IProvider* Zenject::FromBinder___c__DisplayClass68_0::_FromComponentsInHierarchyBase_b__0(::Zenject::DiContainer* container, ::System::Type* concreteType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass68_0*>(),
                                                           { "<FromComponentsInHierarchyBase>b__0", {}, { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::IProvider*>(this, ___internal_method, container, concreteType);
}
inline ::System::Object* Zenject::FromBinder___c__DisplayClass68_0::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass68_0*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::FromBinder___c__DisplayClass68_0::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass68_0*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::FromBinder___c__DisplayClass68_0* Zenject::FromBinder___c__DisplayClass68_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::FromBinder___c__DisplayClass68_0*>());
}
// Ctor Parameters []
constexpr ::Zenject::FromBinder___c__DisplayClass68_0::FromBinder___c__DisplayClass68_0() {}
//  Writing Method size for method: ::Zenject::FromBinder___c__DisplayClass68_1._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::FromBinder___c__DisplayClass68_1::*)()>(&::Zenject::FromBinder___c__DisplayClass68_1::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x73356cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass68_1*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder___c__DisplayClass68_1._FromComponentsInHierarchyBase_b__1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::System::Object*>* (::Zenject::FromBinder___c__DisplayClass68_1::*)(::Zenject::InjectContext*)>(
    &::Zenject::FromBinder___c__DisplayClass68_1::_FromComponentsInHierarchyBase_b__1)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x73358a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass68_1*>(),
                                                                                           { "<FromComponentsInHierarchyBase>b__1", {}, { ::i2c::type_of<::Zenject::InjectContext*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder___c__DisplayClass68_1._FromComponentsInHierarchyBase_b__2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Component>>* (
    ::Zenject::FromBinder___c__DisplayClass68_1::*)(::UnityEngine::GameObject*)>(&::Zenject::FromBinder___c__DisplayClass68_1::_FromComponentsInHierarchyBase_b__2)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x7335a80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass68_1*>(),
                                                                                           { "<FromComponentsInHierarchyBase>b__2", {}, { ::i2c::type_of<::UnityEngine::GameObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder___c__DisplayClass68_1.__zenCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*>)>(&::Zenject::FromBinder___c__DisplayClass68_1::__zenCreate)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x7335ab0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass68_1*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder___c__DisplayClass68_1.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::FromBinder___c__DisplayClass68_1::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x7335af4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass68_1*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Zenject::DiContainer*& Zenject::FromBinder___c__DisplayClass68_1::__cordl_internal_get_container() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___container;
}
constexpr ::Zenject::DiContainer* const& Zenject::FromBinder___c__DisplayClass68_1::__cordl_internal_get_container() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___container;
}
constexpr void Zenject::FromBinder___c__DisplayClass68_1::__cordl_internal_set_container(::Zenject::DiContainer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___container = value;
}
constexpr ::System::Type*& Zenject::FromBinder___c__DisplayClass68_1::__cordl_internal_get_concreteType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___concreteType;
}
constexpr ::System::Type* const& Zenject::FromBinder___c__DisplayClass68_1::__cordl_internal_get_concreteType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___concreteType;
}
constexpr void Zenject::FromBinder___c__DisplayClass68_1::__cordl_internal_set_concreteType(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___concreteType = value;
}
constexpr ::Zenject::FromBinder___c__DisplayClass68_0*& Zenject::FromBinder___c__DisplayClass68_1::__cordl_internal_get_CS$__8__locals1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CS$__8__locals1;
}
constexpr ::Zenject::FromBinder___c__DisplayClass68_0* const& Zenject::FromBinder___c__DisplayClass68_1::__cordl_internal_get_CS$__8__locals1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CS$__8__locals1;
}
constexpr void Zenject::FromBinder___c__DisplayClass68_1::__cordl_internal_set_CS$__8__locals1(::Zenject::FromBinder___c__DisplayClass68_0* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___CS$__8__locals1 = value;
}
constexpr ::System::Func_2<::UnityW<::UnityEngine::GameObject>, ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Component>>*>*&
Zenject::FromBinder___c__DisplayClass68_1::__cordl_internal_get___9__2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____9__2;
}
constexpr ::System::Func_2<::UnityW<::UnityEngine::GameObject>, ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Component>>*>* const&
Zenject::FromBinder___c__DisplayClass68_1::__cordl_internal_get___9__2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____9__2;
}
constexpr void Zenject::FromBinder___c__DisplayClass68_1::__cordl_internal_set___9__2(
    ::System::Func_2<::UnityW<::UnityEngine::GameObject>, ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Component>>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____9__2 = value;
}
inline void Zenject::FromBinder___c__DisplayClass68_1::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass68_1*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::System::Object*>* Zenject::FromBinder___c__DisplayClass68_1::_FromComponentsInHierarchyBase_b__1(::Zenject::InjectContext* ctx) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass68_1*>(),
                                                                                         { "<FromComponentsInHierarchyBase>b__1", {}, { ::i2c::type_of<::Zenject::InjectContext*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>(this, ___internal_method, ctx);
}
inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Component>>* Zenject::FromBinder___c__DisplayClass68_1::_FromComponentsInHierarchyBase_b__2(::UnityEngine::GameObject* x) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass68_1*>(),
                                                                                         { "<FromComponentsInHierarchyBase>b__2", {}, { ::i2c::type_of<::UnityEngine::GameObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Component>>*>(this, ___internal_method, x);
}
inline ::System::Object* Zenject::FromBinder___c__DisplayClass68_1::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass68_1*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::FromBinder___c__DisplayClass68_1::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass68_1*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::FromBinder___c__DisplayClass68_1* Zenject::FromBinder___c__DisplayClass68_1::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::FromBinder___c__DisplayClass68_1*>());
}
// Ctor Parameters []
constexpr ::Zenject::FromBinder___c__DisplayClass68_1::FromBinder___c__DisplayClass68_1() {}
//  Writing Method size for method: ::Zenject::FromBinder___c__DisplayClass68_2._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::FromBinder___c__DisplayClass68_2::*)()>(&::Zenject::FromBinder___c__DisplayClass68_2::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x7335a7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass68_2*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder___c__DisplayClass68_2._FromComponentsInHierarchyBase_b__3
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Zenject::FromBinder___c__DisplayClass68_2::*)(::UnityEngine::Component*)>(
    &::Zenject::FromBinder___c__DisplayClass68_2::_FromComponentsInHierarchyBase_b__3)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x7335c88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass68_2*>(),
                                                                                           { "<FromComponentsInHierarchyBase>b__3", {}, { ::i2c::type_of<::UnityEngine::Component*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder___c__DisplayClass68_2.__zenCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*>)>(&::Zenject::FromBinder___c__DisplayClass68_2::__zenCreate)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x7335ca8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass68_2*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder___c__DisplayClass68_2.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::FromBinder___c__DisplayClass68_2::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x7335cec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass68_2*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Zenject::InjectContext*& Zenject::FromBinder___c__DisplayClass68_2::__cordl_internal_get_ctx() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ctx;
}
constexpr ::Zenject::InjectContext* const& Zenject::FromBinder___c__DisplayClass68_2::__cordl_internal_get_ctx() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ctx;
}
constexpr void Zenject::FromBinder___c__DisplayClass68_2::__cordl_internal_set_ctx(::Zenject::InjectContext* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ctx = value;
}
inline void Zenject::FromBinder___c__DisplayClass68_2::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass68_2*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Zenject::FromBinder___c__DisplayClass68_2::_FromComponentsInHierarchyBase_b__3(::UnityEngine::Component* x) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass68_2*>(),
                                                                                         { "<FromComponentsInHierarchyBase>b__3", {}, { ::i2c::type_of<::UnityEngine::Component*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline ::System::Object* Zenject::FromBinder___c__DisplayClass68_2::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass68_2*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::FromBinder___c__DisplayClass68_2::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass68_2*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::FromBinder___c__DisplayClass68_2* Zenject::FromBinder___c__DisplayClass68_2::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::FromBinder___c__DisplayClass68_2*>());
}
// Ctor Parameters []
constexpr ::Zenject::FromBinder___c__DisplayClass68_2::FromBinder___c__DisplayClass68_2() {}
//  Writing Method size for method: ::Zenject::FromBinder___c__DisplayClass69_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::FromBinder___c__DisplayClass69_0::*)()>(&::Zenject::FromBinder___c__DisplayClass69_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x7335e80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass69_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder___c__DisplayClass69_0._FromMethodUntyped_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::IProvider* (::Zenject::FromBinder___c__DisplayClass69_0::*)(::Zenject::DiContainer*, ::System::Type*)>(
    &::Zenject::FromBinder___c__DisplayClass69_0::_FromMethodUntyped_b__0)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x7335e84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass69_0*>(),
                                                             { "<FromMethodUntyped>b__0", {}, { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder___c__DisplayClass69_0.__zenCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*>)>(&::Zenject::FromBinder___c__DisplayClass69_0::__zenCreate)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x7335ee4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass69_0*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder___c__DisplayClass69_0.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::FromBinder___c__DisplayClass69_0::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x7335f28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass69_0*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Func_2<::Zenject::InjectContext*, ::System::Object*>*& Zenject::FromBinder___c__DisplayClass69_0::__cordl_internal_get_method() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___method;
}
constexpr ::System::Func_2<::Zenject::InjectContext*, ::System::Object*>* const& Zenject::FromBinder___c__DisplayClass69_0::__cordl_internal_get_method() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___method;
}
constexpr void Zenject::FromBinder___c__DisplayClass69_0::__cordl_internal_set_method(::System::Func_2<::Zenject::InjectContext*, ::System::Object*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___method = value;
}
inline void Zenject::FromBinder___c__DisplayClass69_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass69_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Zenject::IProvider* Zenject::FromBinder___c__DisplayClass69_0::_FromMethodUntyped_b__0(::Zenject::DiContainer* container, ::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass69_0*>(),
                                                           { "<FromMethodUntyped>b__0", {}, { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::IProvider*>(this, ___internal_method, container, type);
}
inline ::System::Object* Zenject::FromBinder___c__DisplayClass69_0::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass69_0*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::FromBinder___c__DisplayClass69_0::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass69_0*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::FromBinder___c__DisplayClass69_0* Zenject::FromBinder___c__DisplayClass69_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::FromBinder___c__DisplayClass69_0*>());
}
// Ctor Parameters []
constexpr ::Zenject::FromBinder___c__DisplayClass69_0::FromBinder___c__DisplayClass69_0() {}
//  Writing Method size for method: ::Zenject::FromBinder___c__DisplayClass70_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::FromBinder___c__DisplayClass70_0::*)()>(&::Zenject::FromBinder___c__DisplayClass70_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x73360bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass70_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder___c__DisplayClass70_0._FromMethodMultipleUntyped_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::IProvider* (::Zenject::FromBinder___c__DisplayClass70_0::*)(::Zenject::DiContainer*, ::System::Type*)>(
    &::Zenject::FromBinder___c__DisplayClass70_0::_FromMethodMultipleUntyped_b__0)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x73360c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass70_0*>(),
                                                             { "<FromMethodMultipleUntyped>b__0", {}, { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder___c__DisplayClass70_0.__zenCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*>)>(&::Zenject::FromBinder___c__DisplayClass70_0::__zenCreate)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x7336120;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass70_0*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder___c__DisplayClass70_0.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::FromBinder___c__DisplayClass70_0::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x7336164;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass70_0*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Func_2<::Zenject::InjectContext*, ::System::Collections::Generic::IEnumerable_1<::System::Object*>*>*& Zenject::FromBinder___c__DisplayClass70_0::__cordl_internal_get_method() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___method;
}
constexpr ::System::Func_2<::Zenject::InjectContext*, ::System::Collections::Generic::IEnumerable_1<::System::Object*>*>* const&
Zenject::FromBinder___c__DisplayClass70_0::__cordl_internal_get_method() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___method;
}
constexpr void
Zenject::FromBinder___c__DisplayClass70_0::__cordl_internal_set_method(::System::Func_2<::Zenject::InjectContext*, ::System::Collections::Generic::IEnumerable_1<::System::Object*>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___method = value;
}
inline void Zenject::FromBinder___c__DisplayClass70_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass70_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Zenject::IProvider* Zenject::FromBinder___c__DisplayClass70_0::_FromMethodMultipleUntyped_b__0(::Zenject::DiContainer* container, ::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass70_0*>(),
                                                           { "<FromMethodMultipleUntyped>b__0", {}, { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::IProvider*>(this, ___internal_method, container, type);
}
inline ::System::Object* Zenject::FromBinder___c__DisplayClass70_0::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass70_0*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::FromBinder___c__DisplayClass70_0::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass70_0*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::FromBinder___c__DisplayClass70_0* Zenject::FromBinder___c__DisplayClass70_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::FromBinder___c__DisplayClass70_0*>());
}
// Ctor Parameters []
constexpr ::Zenject::FromBinder___c__DisplayClass70_0::FromBinder___c__DisplayClass70_0() {}
template <typename TConcrete> constexpr ::System::Func_2<::Zenject::InjectContext*, TConcrete>*& Zenject::FromBinder___c__DisplayClass71_0_1<TConcrete>::__cordl_internal_get_method() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___method;
}
template <typename TConcrete> constexpr ::System::Func_2<::Zenject::InjectContext*, TConcrete>* const& Zenject::FromBinder___c__DisplayClass71_0_1<TConcrete>::__cordl_internal_get_method() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___method;
}
template <typename TConcrete> constexpr void Zenject::FromBinder___c__DisplayClass71_0_1<TConcrete>::__cordl_internal_set_method(::System::Func_2<::Zenject::InjectContext*, TConcrete>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___method = value;
}
template <typename TConcrete> inline void Zenject::FromBinder___c__DisplayClass71_0_1<TConcrete>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass71_0_1<TConcrete>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TConcrete> inline ::Zenject::IProvider* Zenject::FromBinder___c__DisplayClass71_0_1<TConcrete>::_FromMethodBase_b__0(::Zenject::DiContainer* container, ::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass71_0_1<TConcrete>*>(),
                                                           { "<FromMethodBase>b__0", {}, { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::IProvider*>(this, ___internal_method, container, type);
}
template <typename TConcrete> inline ::System::Object* Zenject::FromBinder___c__DisplayClass71_0_1<TConcrete>::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass71_0_1<TConcrete>*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
template <typename TConcrete> inline ::Zenject::InjectTypeInfo* Zenject::FromBinder___c__DisplayClass71_0_1<TConcrete>::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass71_0_1<TConcrete>*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
template <typename TConcrete> inline ::Zenject::FromBinder___c__DisplayClass71_0_1<TConcrete>* Zenject::FromBinder___c__DisplayClass71_0_1<TConcrete>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::FromBinder___c__DisplayClass71_0_1<TConcrete>*>());
}
// Ctor Parameters []
template <typename TConcrete> constexpr ::Zenject::FromBinder___c__DisplayClass71_0_1<TConcrete>::FromBinder___c__DisplayClass71_0_1() {}
template <typename TConcrete>
constexpr ::System::Func_2<::Zenject::InjectContext*, ::System::Collections::Generic::IEnumerable_1<TConcrete>*>*&
Zenject::FromBinder___c__DisplayClass72_0_1<TConcrete>::__cordl_internal_get_method() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___method;
}
template <typename TConcrete>
constexpr ::System::Func_2<::Zenject::InjectContext*, ::System::Collections::Generic::IEnumerable_1<TConcrete>*>* const&
Zenject::FromBinder___c__DisplayClass72_0_1<TConcrete>::__cordl_internal_get_method() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___method;
}
template <typename TConcrete>
constexpr void
Zenject::FromBinder___c__DisplayClass72_0_1<TConcrete>::__cordl_internal_set_method(::System::Func_2<::Zenject::InjectContext*, ::System::Collections::Generic::IEnumerable_1<TConcrete>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___method = value;
}
template <typename TConcrete> inline void Zenject::FromBinder___c__DisplayClass72_0_1<TConcrete>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass72_0_1<TConcrete>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TConcrete>
inline ::Zenject::IProvider* Zenject::FromBinder___c__DisplayClass72_0_1<TConcrete>::_FromMethodMultipleBase_b__0(::Zenject::DiContainer* container, ::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass72_0_1<TConcrete>*>(),
                                                           { "<FromMethodMultipleBase>b__0", {}, { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::IProvider*>(this, ___internal_method, container, type);
}
template <typename TConcrete> inline ::System::Object* Zenject::FromBinder___c__DisplayClass72_0_1<TConcrete>::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass72_0_1<TConcrete>*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
template <typename TConcrete> inline ::Zenject::InjectTypeInfo* Zenject::FromBinder___c__DisplayClass72_0_1<TConcrete>::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass72_0_1<TConcrete>*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
template <typename TConcrete> inline ::Zenject::FromBinder___c__DisplayClass72_0_1<TConcrete>* Zenject::FromBinder___c__DisplayClass72_0_1<TConcrete>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::FromBinder___c__DisplayClass72_0_1<TConcrete>*>());
}
// Ctor Parameters []
template <typename TConcrete> constexpr ::Zenject::FromBinder___c__DisplayClass72_0_1<TConcrete>::FromBinder___c__DisplayClass72_0_1() {}
template <typename TObj, typename TResult> constexpr ::System::Object*& Zenject::FromBinder___c__DisplayClass73_0_2<TObj, TResult>::__cordl_internal_get_identifier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___identifier;
}
template <typename TObj, typename TResult> constexpr ::System::Object* const& Zenject::FromBinder___c__DisplayClass73_0_2<TObj, TResult>::__cordl_internal_get_identifier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___identifier;
}
template <typename TObj, typename TResult> constexpr void Zenject::FromBinder___c__DisplayClass73_0_2<TObj, TResult>::__cordl_internal_set_identifier(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___identifier = value;
}
template <typename TObj, typename TResult> constexpr ::System::Func_2<TObj, TResult>*& Zenject::FromBinder___c__DisplayClass73_0_2<TObj, TResult>::__cordl_internal_get_method() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___method;
}
template <typename TObj, typename TResult> constexpr ::System::Func_2<TObj, TResult>* const& Zenject::FromBinder___c__DisplayClass73_0_2<TObj, TResult>::__cordl_internal_get_method() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___method;
}
template <typename TObj, typename TResult> constexpr void Zenject::FromBinder___c__DisplayClass73_0_2<TObj, TResult>::__cordl_internal_set_method(::System::Func_2<TObj, TResult>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___method = value;
}
template <typename TObj, typename TResult> constexpr ::Zenject::InjectSources& Zenject::FromBinder___c__DisplayClass73_0_2<TObj, TResult>::__cordl_internal_get_source() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___source;
}
template <typename TObj, typename TResult> constexpr ::Zenject::InjectSources const& Zenject::FromBinder___c__DisplayClass73_0_2<TObj, TResult>::__cordl_internal_get_source() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___source;
}
template <typename TObj, typename TResult> constexpr void Zenject::FromBinder___c__DisplayClass73_0_2<TObj, TResult>::__cordl_internal_set_source(::Zenject::InjectSources value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___source = value;
}
template <typename TObj, typename TResult> constexpr bool& Zenject::FromBinder___c__DisplayClass73_0_2<TObj, TResult>::__cordl_internal_get_matchMultiple() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___matchMultiple;
}
template <typename TObj, typename TResult> constexpr bool const& Zenject::FromBinder___c__DisplayClass73_0_2<TObj, TResult>::__cordl_internal_get_matchMultiple() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___matchMultiple;
}
template <typename TObj, typename TResult> constexpr void Zenject::FromBinder___c__DisplayClass73_0_2<TObj, TResult>::__cordl_internal_set_matchMultiple(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___matchMultiple = value;
}
template <typename TObj, typename TResult> inline void Zenject::FromBinder___c__DisplayClass73_0_2<TObj, TResult>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass73_0_2<TObj, TResult>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TObj, typename TResult>
inline ::Zenject::IProvider* Zenject::FromBinder___c__DisplayClass73_0_2<TObj, TResult>::_FromResolveGetterBase_b__0(::Zenject::DiContainer* container, ::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass73_0_2<TObj, TResult>*>(),
                                                           { "<FromResolveGetterBase>b__0", {}, { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::IProvider*>(this, ___internal_method, container, type);
}
template <typename TObj, typename TResult> inline ::System::Object* Zenject::FromBinder___c__DisplayClass73_0_2<TObj, TResult>::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass73_0_2<TObj, TResult>*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
template <typename TObj, typename TResult> inline ::Zenject::InjectTypeInfo* Zenject::FromBinder___c__DisplayClass73_0_2<TObj, TResult>::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass73_0_2<TObj, TResult>*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
template <typename TObj, typename TResult> inline ::Zenject::FromBinder___c__DisplayClass73_0_2<TObj, TResult>* Zenject::FromBinder___c__DisplayClass73_0_2<TObj, TResult>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::FromBinder___c__DisplayClass73_0_2<TObj, TResult>*>());
}
// Ctor Parameters []
template <typename TObj, typename TResult> constexpr ::Zenject::FromBinder___c__DisplayClass73_0_2<TObj, TResult>::FromBinder___c__DisplayClass73_0_2() {}
//  Writing Method size for method: ::Zenject::FromBinder___c__DisplayClass74_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::FromBinder___c__DisplayClass74_0::*)()>(&::Zenject::FromBinder___c__DisplayClass74_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x73362f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass74_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder___c__DisplayClass74_0._FromInstanceBase_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::IProvider* (::Zenject::FromBinder___c__DisplayClass74_0::*)(::Zenject::DiContainer*, ::System::Type*)>(
    &::Zenject::FromBinder___c__DisplayClass74_0::_FromInstanceBase_b__0)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x73362fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass74_0*>(),
                                                             { "<FromInstanceBase>b__0", {}, { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder___c__DisplayClass74_0.__zenCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*>)>(&::Zenject::FromBinder___c__DisplayClass74_0::__zenCreate)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x7336364;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass74_0*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder___c__DisplayClass74_0.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::FromBinder___c__DisplayClass74_0::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x73363a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass74_0*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Object*& Zenject::FromBinder___c__DisplayClass74_0::__cordl_internal_get_instance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___instance;
}
constexpr ::System::Object* const& Zenject::FromBinder___c__DisplayClass74_0::__cordl_internal_get_instance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___instance;
}
constexpr void Zenject::FromBinder___c__DisplayClass74_0::__cordl_internal_set_instance(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___instance = value;
}
inline void Zenject::FromBinder___c__DisplayClass74_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass74_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Zenject::IProvider* Zenject::FromBinder___c__DisplayClass74_0::_FromInstanceBase_b__0(::Zenject::DiContainer* container, ::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass74_0*>(),
                                                           { "<FromInstanceBase>b__0", {}, { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::IProvider*>(this, ___internal_method, container, type);
}
inline ::System::Object* Zenject::FromBinder___c__DisplayClass74_0::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass74_0*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::FromBinder___c__DisplayClass74_0::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder___c__DisplayClass74_0*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::FromBinder___c__DisplayClass74_0* Zenject::FromBinder___c__DisplayClass74_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::FromBinder___c__DisplayClass74_0*>());
}
// Ctor Parameters []
constexpr ::Zenject::FromBinder___c__DisplayClass74_0::FromBinder___c__DisplayClass74_0() {}
//  Writing Method size for method: ::Zenject::FromBinder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::FromBinder::*)(::Zenject::DiContainer*, ::Zenject::BindInfo*, ::Zenject::BindStatement*)>(&::Zenject::FromBinder::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x732c88c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::Zenject::BindInfo*>(), ::i2c::type_of<::Zenject::BindStatement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder.get_BindContainer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::DiContainer* (::Zenject::FromBinder::*)()>(&::Zenject::FromBinder::get_BindContainer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x732c898;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder*>(), { "get_BindContainer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder.set_BindContainer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::FromBinder::*)(::Zenject::DiContainer*)>(&::Zenject::FromBinder::set_BindContainer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x732c8a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder*>(), { "set_BindContainer", {}, { ::i2c::type_of<::Zenject::DiContainer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder.get_BindStatement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::BindStatement* (::Zenject::FromBinder::*)()>(&::Zenject::FromBinder::get_BindStatement)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x732c8a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder*>(), { "get_BindStatement", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder.set_BindStatement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::FromBinder::*)(::Zenject::BindStatement*)>(&::Zenject::FromBinder::set_BindStatement)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x732c8b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder*>(), { "set_BindStatement", {}, { ::i2c::type_of<::Zenject::BindStatement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder.set_SubFinalizer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::FromBinder::*)(::Zenject::IBindingFinalizer*)>(&::Zenject::FromBinder::set_SubFinalizer)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x7324390;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder*>(), { "set_SubFinalizer", {}, { ::i2c::type_of<::Zenject::IBindingFinalizer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder.get_AllParentTypes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::System::Type*>* (::Zenject::FromBinder::*)()>(&::Zenject::FromBinder::get_AllParentTypes)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x732c8b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder*>(), { "get_AllParentTypes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder.get_ConcreteTypes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::System::Type*>* (::Zenject::FromBinder::*)()>(&::Zenject::FromBinder::get_ConcreteTypes)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x732c914;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder*>(), { "get_ConcreteTypes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder.FromNew
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* (::Zenject::FromBinder::*)()>(&::Zenject::FromBinder::FromNew)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x732c9ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder*>(), { "FromNew", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder.FromResolve
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* (::Zenject::FromBinder::*)()>(&::Zenject::FromBinder::FromResolve)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x732c9dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder*>(), { "FromResolve", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder.FromResolve
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* (::Zenject::FromBinder::*)(::System::Object*)>(&::Zenject::FromBinder::FromResolve)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x732c9ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder*>(), { "FromResolve", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder.FromResolve
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* (::Zenject::FromBinder::*)(::System::Object*, ::Zenject::InjectSources)>(
    &::Zenject::FromBinder::FromResolve)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x732c9f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder*>(), { "FromResolve", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Zenject::InjectSources>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder.FromResolveAll
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* (::Zenject::FromBinder::*)()>(&::Zenject::FromBinder::FromResolveAll)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x732cb40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder*>(), { "FromResolveAll", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder.FromResolveAll
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* (::Zenject::FromBinder::*)(::System::Object*)>(
    &::Zenject::FromBinder::FromResolveAll)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x732cb50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder*>(), { "FromResolveAll", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder.FromResolveAll
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* (::Zenject::FromBinder::*)(::System::Object*, ::Zenject::InjectSources)>(
    &::Zenject::FromBinder::FromResolveAll)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x732cb5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder*>(), { "FromResolveAll", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Zenject::InjectSources>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder.FromResolveInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* (::Zenject::FromBinder::*)(::System::Object*, bool, ::Zenject::InjectSources)>(
    &::Zenject::FromBinder::FromResolveInternal)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x732ca04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder*>(),
                                                { "FromResolveInternal", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Zenject::InjectSources>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder.FromSubContainerResolveAll
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::SubContainerBinder* (::Zenject::FromBinder::*)()>(&::Zenject::FromBinder::FromSubContainerResolveAll)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x732cb6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder*>(), { "FromSubContainerResolveAll", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder.FromSubContainerResolveAll
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::SubContainerBinder* (::Zenject::FromBinder::*)(::System::Object*)>(&::Zenject::FromBinder::FromSubContainerResolveAll)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x732cb78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder*>(), { "FromSubContainerResolveAll", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder.FromSubContainerResolve
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::SubContainerBinder* (::Zenject::FromBinder::*)()>(&::Zenject::FromBinder::FromSubContainerResolve)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x732cc10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder*>(), { "FromSubContainerResolve", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder.FromSubContainerResolve
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::SubContainerBinder* (::Zenject::FromBinder::*)(::System::Object*)>(&::Zenject::FromBinder::FromSubContainerResolve)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x732cc1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder*>(), { "FromSubContainerResolve", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder.FromSubContainerResolveInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::SubContainerBinder* (::Zenject::FromBinder::*)(::System::Object*, bool)>(&::Zenject::FromBinder::FromSubContainerResolveInternal)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x732cb80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder*>(), { "FromSubContainerResolveInternal", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder.FromComponentsOn
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* (::Zenject::FromBinder::*)(::UnityEngine::GameObject*)>(
    &::Zenject::FromBinder::FromComponentsOn)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x732cc24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder*>(), { "FromComponentsOn", {}, { ::i2c::type_of<::UnityEngine::GameObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder.FromComponentOn
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* (::Zenject::FromBinder::*)(::UnityEngine::GameObject*)>(
    &::Zenject::FromBinder::FromComponentOn)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x732cd74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder*>(), { "FromComponentOn", {}, { ::i2c::type_of<::UnityEngine::GameObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder.FromComponentsOn
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* (
    ::Zenject::FromBinder::*)(::System::Func_2<::Zenject::InjectContext*, ::UnityW<::UnityEngine::GameObject>>*)>(&::Zenject::FromBinder::FromComponentsOn)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x732cec4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder*>(),
                                                             { "FromComponentsOn", {}, { ::i2c::type_of<::System::Func_2<::Zenject::InjectContext*, ::UnityW<::UnityEngine::GameObject>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder.FromComponentOn
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* (
    ::Zenject::FromBinder::*)(::System::Func_2<::Zenject::InjectContext*, ::UnityW<::UnityEngine::GameObject>>*)>(&::Zenject::FromBinder::FromComponentOn)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x732d004;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder*>(),
                                                             { "FromComponentOn", {}, { ::i2c::type_of<::System::Func_2<::Zenject::InjectContext*, ::UnityW<::UnityEngine::GameObject>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder.FromComponentsOnRoot
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* (::Zenject::FromBinder::*)()>(&::Zenject::FromBinder::FromComponentsOnRoot)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x732d144;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder*>(), { "FromComponentsOnRoot", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder.FromComponentOnRoot
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* (::Zenject::FromBinder::*)()>(&::Zenject::FromBinder::FromComponentOnRoot)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x732d230;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder*>(), { "FromComponentOnRoot", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder.FromNewComponentOn
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* (::Zenject::FromBinder::*)(::UnityEngine::GameObject*)>(
    &::Zenject::FromBinder::FromNewComponentOn)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x732d31c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder*>(), { "FromNewComponentOn", {}, { ::i2c::type_of<::UnityEngine::GameObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder.FromNewComponentOn
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* (
    ::Zenject::FromBinder::*)(::System::Func_2<::Zenject::InjectContext*, ::UnityW<::UnityEngine::GameObject>>*)>(&::Zenject::FromBinder::FromNewComponentOn)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x732d46c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder*>(),
                                                             { "FromNewComponentOn", {}, { ::i2c::type_of<::System::Func_2<::Zenject::InjectContext*, ::UnityW<::UnityEngine::GameObject>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder.FromNewComponentSibling
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* (::Zenject::FromBinder::*)()>(&::Zenject::FromBinder::FromNewComponentSibling)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x732d5b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder*>(), { "FromNewComponentSibling", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder.FromNewComponentOnRoot
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* (::Zenject::FromBinder::*)()>(&::Zenject::FromBinder::FromNewComponentOnRoot)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x732d6b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder*>(), { "FromNewComponentOnRoot", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder.FromNewComponentOnNewGameObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* (::Zenject::FromBinder::*)()>(
    &::Zenject::FromBinder::FromNewComponentOnNewGameObject)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x732d7a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder*>(), { "FromNewComponentOnNewGameObject", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder.FromNewComponentOnNewGameObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* (::Zenject::FromBinder::*)(::Zenject::GameObjectCreationParameters*)>(
    &::Zenject::FromBinder::FromNewComponentOnNewGameObject)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x732d7f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder*>(), { "FromNewComponentOnNewGameObject", {}, { ::i2c::type_of<::Zenject::GameObjectCreationParameters*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder.FromNewComponentOnNewPrefabResource
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* (::Zenject::FromBinder::*)(::StringW)>(
    &::Zenject::FromBinder::FromNewComponentOnNewPrefabResource)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x732d944;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder*>(), { "FromNewComponentOnNewPrefabResource", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder.FromNewComponentOnNewPrefabResource
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* (
    ::Zenject::FromBinder::*)(::StringW, ::Zenject::GameObjectCreationParameters*)>(&::Zenject::FromBinder::FromNewComponentOnNewPrefabResource)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x732d9a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder*>(),
                                                { "FromNewComponentOnNewPrefabResource", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Zenject::GameObjectCreationParameters*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder.FromNewComponentOnNewPrefab
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* (::Zenject::FromBinder::*)(::UnityEngine::Object*)>(
    &::Zenject::FromBinder::FromNewComponentOnNewPrefab)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x732db38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder*>(), { "FromNewComponentOnNewPrefab", {}, { ::i2c::type_of<::UnityEngine::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder.FromNewComponentOnNewPrefab
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* (
    ::Zenject::FromBinder::*)(::UnityEngine::Object*, ::Zenject::GameObjectCreationParameters*)>(&::Zenject::FromBinder::FromNewComponentOnNewPrefab)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x732db9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder*>(),
                                                { "FromNewComponentOnNewPrefab", {}, { ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::Zenject::GameObjectCreationParameters*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder.FromComponentInNewPrefab
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* (::Zenject::FromBinder::*)(::UnityEngine::Object*)>(
    &::Zenject::FromBinder::FromComponentInNewPrefab)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x732dd2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder*>(), { "FromComponentInNewPrefab", {}, { ::i2c::type_of<::UnityEngine::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder.FromComponentInNewPrefab
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* (
    ::Zenject::FromBinder::*)(::UnityEngine::Object*, ::Zenject::GameObjectCreationParameters*)>(&::Zenject::FromBinder::FromComponentInNewPrefab)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x732dd90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder*>(),
                                                { "FromComponentInNewPrefab", {}, { ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::Zenject::GameObjectCreationParameters*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder.FromComponentsInNewPrefab
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* (::Zenject::FromBinder::*)(::UnityEngine::Object*)>(
    &::Zenject::FromBinder::FromComponentsInNewPrefab)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x732df10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder*>(), { "FromComponentsInNewPrefab", {}, { ::i2c::type_of<::UnityEngine::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder.FromComponentsInNewPrefab
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* (
    ::Zenject::FromBinder::*)(::UnityEngine::Object*, ::Zenject::GameObjectCreationParameters*)>(&::Zenject::FromBinder::FromComponentsInNewPrefab)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x732df74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder*>(),
                                                { "FromComponentsInNewPrefab", {}, { ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::Zenject::GameObjectCreationParameters*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder.FromComponentInNewPrefabResource
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* (::Zenject::FromBinder::*)(::StringW)>(
    &::Zenject::FromBinder::FromComponentInNewPrefabResource)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x732e0f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder*>(), { "FromComponentInNewPrefabResource", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder.FromComponentInNewPrefabResource
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* (
    ::Zenject::FromBinder::*)(::StringW, ::Zenject::GameObjectCreationParameters*)>(&::Zenject::FromBinder::FromComponentInNewPrefabResource)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x732e158;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder*>(),
                                                             { "FromComponentInNewPrefabResource", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Zenject::GameObjectCreationParameters*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder.FromComponentsInNewPrefabResource
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* (::Zenject::FromBinder::*)(::StringW)>(
    &::Zenject::FromBinder::FromComponentsInNewPrefabResource)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x732e2d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder*>(), { "FromComponentsInNewPrefabResource", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder.FromComponentsInNewPrefabResource
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* (
    ::Zenject::FromBinder::*)(::StringW, ::Zenject::GameObjectCreationParameters*)>(&::Zenject::FromBinder::FromComponentsInNewPrefabResource)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x732e33c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder*>(),
                                                { "FromComponentsInNewPrefabResource", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Zenject::GameObjectCreationParameters*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder.FromNewScriptableObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* (::Zenject::FromBinder::*)(::UnityEngine::ScriptableObject*)>(
    &::Zenject::FromBinder::FromNewScriptableObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x732e4bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder*>(), { "FromNewScriptableObject", {}, { ::i2c::type_of<::UnityEngine::ScriptableObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder.FromScriptableObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* (::Zenject::FromBinder::*)(::UnityEngine::ScriptableObject*)>(
    &::Zenject::FromBinder::FromScriptableObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x732e600;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder*>(), { "FromScriptableObject", {}, { ::i2c::type_of<::UnityEngine::ScriptableObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder.FromScriptableObjectInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* (::Zenject::FromBinder::*)(::UnityEngine::ScriptableObject*, bool)>(
    &::Zenject::FromBinder::FromScriptableObjectInternal)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x732e4c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder*>(), { "FromScriptableObjectInternal", {}, { ::i2c::type_of<::UnityEngine::ScriptableObject*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder.FromNewScriptableObjectResource
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* (::Zenject::FromBinder::*)(::StringW)>(
    &::Zenject::FromBinder::FromNewScriptableObjectResource)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x732e60c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder*>(), { "FromNewScriptableObjectResource", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder.FromScriptableObjectResource
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* (::Zenject::FromBinder::*)(::StringW)>(
    &::Zenject::FromBinder::FromScriptableObjectResource)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x732e75c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder*>(), { "FromScriptableObjectResource", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder.FromScriptableObjectResourceInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* (::Zenject::FromBinder::*)(::StringW, bool)>(
    &::Zenject::FromBinder::FromScriptableObjectResourceInternal)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x732e614;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder*>(), { "FromScriptableObjectResourceInternal", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder.FromResource
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* (::Zenject::FromBinder::*)(::StringW)>(&::Zenject::FromBinder::FromResource)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x732e768;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder*>(), { "FromResource", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder.FromResources
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* (::Zenject::FromBinder::*)(::StringW)>(&::Zenject::FromBinder::FromResources)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x732e898;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder*>(), { "FromResources", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder.FromComponentInChildren
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* (::Zenject::FromBinder::*)(bool)>(&::Zenject::FromBinder::FromComponentInChildren)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x732e9c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder*>(), { "FromComponentInChildren", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder.FromComponentsInChildrenBase
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* (
    ::Zenject::FromBinder::*)(bool, ::System::Func_2<::UnityW<::UnityEngine::Component>, bool>*, bool)>(&::Zenject::FromBinder::FromComponentsInChildrenBase)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x732eadc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::Zenject::FromBinder*>(),
                         { "FromComponentsInChildrenBase", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::System::Func_2<::UnityW<::UnityEngine::Component>, bool>*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder.FromComponentInParents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* (::Zenject::FromBinder::*)(bool, bool)>(
    &::Zenject::FromBinder::FromComponentInParents)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x732ec0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder*>(), { "FromComponentInParents", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder.FromComponentsInParents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* (::Zenject::FromBinder::*)(bool, bool)>(
    &::Zenject::FromBinder::FromComponentsInParents)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x732ed2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder*>(), { "FromComponentsInParents", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder.FromComponentSibling
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* (::Zenject::FromBinder::*)()>(&::Zenject::FromBinder::FromComponentSibling)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x732ee4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder*>(), { "FromComponentSibling", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder.FromComponentsSibling
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* (::Zenject::FromBinder::*)()>(&::Zenject::FromBinder::FromComponentsSibling)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x732ef84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder*>(), { "FromComponentsSibling", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder.FromComponentInHierarchy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* (::Zenject::FromBinder::*)(bool)>(&::Zenject::FromBinder::FromComponentInHierarchy)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x732f0bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder*>(), { "FromComponentInHierarchy", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder.FromComponentsInHierarchyBase
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* (
    ::Zenject::FromBinder::*)(::System::Func_2<::UnityW<::UnityEngine::Component>, bool>*, bool)>(&::Zenject::FromBinder::FromComponentsInHierarchyBase)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x732f1d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder*>(),
                                                { "FromComponentsInHierarchyBase", {}, { ::i2c::type_of<::System::Func_2<::UnityW<::UnityEngine::Component>, bool>*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder.FromMethodUntyped
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* (
    ::Zenject::FromBinder::*)(::System::Func_2<::Zenject::InjectContext*, ::System::Object*>*)>(&::Zenject::FromBinder::FromMethodUntyped)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x732f2ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder*>(), { "FromMethodUntyped", {}, { ::i2c::type_of<::System::Func_2<::Zenject::InjectContext*, ::System::Object*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder.FromMethodMultipleUntyped
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* (
    ::Zenject::FromBinder::*)(::System::Func_2<::Zenject::InjectContext*, ::System::Collections::Generic::IEnumerable_1<::System::Object*>*>*)>(&::Zenject::FromBinder::FromMethodMultipleUntyped)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x732f3e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::Zenject::FromBinder*>(),
                         { "FromMethodMultipleUntyped", {}, { ::i2c::type_of<::System::Func_2<::Zenject::InjectContext*, ::System::Collections::Generic::IEnumerable_1<::System::Object*>*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder.FromInstanceBase
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* (::Zenject::FromBinder::*)(::System::Object*)>(
    &::Zenject::FromBinder::FromInstanceBase)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x732f4e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder*>(), { "FromInstanceBase", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinder._FromNewComponentSibling_b__37_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::IProvider* (::Zenject::FromBinder::*)(::Zenject::DiContainer*, ::System::Type*)>(
    &::Zenject::FromBinder::_FromNewComponentSibling_b__37_0)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x732f61c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder*>(), { "<FromNewComponentSibling>b__37_0", {}, { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
constexpr ::Zenject::DiContainer*& Zenject::FromBinder::__cordl_internal_get__BindContainer_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____BindContainer_k__BackingField;
}
constexpr ::Zenject::DiContainer* const& Zenject::FromBinder::__cordl_internal_get__BindContainer_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____BindContainer_k__BackingField;
}
constexpr void Zenject::FromBinder::__cordl_internal_set__BindContainer_k__BackingField(::Zenject::DiContainer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____BindContainer_k__BackingField = value;
}
constexpr ::Zenject::BindStatement*& Zenject::FromBinder::__cordl_internal_get__BindStatement_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____BindStatement_k__BackingField;
}
constexpr ::Zenject::BindStatement* const& Zenject::FromBinder::__cordl_internal_get__BindStatement_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____BindStatement_k__BackingField;
}
constexpr void Zenject::FromBinder::__cordl_internal_set__BindStatement_k__BackingField(::Zenject::BindStatement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____BindStatement_k__BackingField = value;
}
inline void Zenject::FromBinder::_ctor(::Zenject::DiContainer* bindContainer, ::Zenject::BindInfo* bindInfo, ::Zenject::BindStatement* bindStatement) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::Zenject::BindInfo*>(), ::i2c::type_of<::Zenject::BindStatement*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bindContainer, bindInfo, bindStatement);
}
inline ::Zenject::DiContainer* Zenject::FromBinder::get_BindContainer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder*>(), { "get_BindContainer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::DiContainer*>(this, ___internal_method);
}
inline void Zenject::FromBinder::set_BindContainer(::Zenject::DiContainer* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder*>(), { "set_BindContainer", {}, { ::i2c::type_of<::Zenject::DiContainer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Zenject::BindStatement* Zenject::FromBinder::get_BindStatement() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder*>(), { "get_BindStatement", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::BindStatement*>(this, ___internal_method);
}
inline void Zenject::FromBinder::set_BindStatement(::Zenject::BindStatement* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder*>(), { "set_BindStatement", {}, { ::i2c::type_of<::Zenject::BindStatement*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Zenject::FromBinder::set_SubFinalizer(::Zenject::IBindingFinalizer* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder*>(), { "set_SubFinalizer", {}, { ::i2c::type_of<::Zenject::IBindingFinalizer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::IEnumerable_1<::System::Type*>* Zenject::FromBinder::get_AllParentTypes() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder*>(), { "get_AllParentTypes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::System::Type*>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::System::Type*>* Zenject::FromBinder::get_ConcreteTypes() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder*>(), { "get_ConcreteTypes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::System::Type*>*>(this, ___internal_method);
}
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::FromBinder::FromNew() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder*>(), { "FromNew", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*>(this, ___internal_method);
}
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::FromBinder::FromResolve() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder*>(), { "FromResolve", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*>(this, ___internal_method);
}
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::FromBinder::FromResolve(::System::Object* subIdentifier) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder*>(), { "FromResolve", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*>(this, ___internal_method, subIdentifier);
}
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::FromBinder::FromResolve(::System::Object* subIdentifier, ::Zenject::InjectSources source) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder*>(), { "FromResolve", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Zenject::InjectSources>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*>(this, ___internal_method, subIdentifier, source);
}
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::FromBinder::FromResolveAll() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder*>(), { "FromResolveAll", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*>(this, ___internal_method);
}
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::FromBinder::FromResolveAll(::System::Object* subIdentifier) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder*>(), { "FromResolveAll", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*>(this, ___internal_method, subIdentifier);
}
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::FromBinder::FromResolveAll(::System::Object* subIdentifier, ::Zenject::InjectSources source) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder*>(), { "FromResolveAll", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Zenject::InjectSources>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*>(this, ___internal_method, subIdentifier, source);
}
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::FromBinder::FromResolveInternal(::System::Object* subIdentifier, bool matchAll, ::Zenject::InjectSources source) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder*>(),
                                              { "FromResolveInternal", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Zenject::InjectSources>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*>(this, ___internal_method, subIdentifier, matchAll, source);
}
inline ::Zenject::SubContainerBinder* Zenject::FromBinder::FromSubContainerResolveAll() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder*>(), { "FromSubContainerResolveAll", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::SubContainerBinder*>(this, ___internal_method);
}
inline ::Zenject::SubContainerBinder* Zenject::FromBinder::FromSubContainerResolveAll(::System::Object* subIdentifier) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder*>(), { "FromSubContainerResolveAll", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::SubContainerBinder*>(this, ___internal_method, subIdentifier);
}
inline ::Zenject::SubContainerBinder* Zenject::FromBinder::FromSubContainerResolve() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder*>(), { "FromSubContainerResolve", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::SubContainerBinder*>(this, ___internal_method);
}
inline ::Zenject::SubContainerBinder* Zenject::FromBinder::FromSubContainerResolve(::System::Object* subIdentifier) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder*>(), { "FromSubContainerResolve", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::SubContainerBinder*>(this, ___internal_method, subIdentifier);
}
inline ::Zenject::SubContainerBinder* Zenject::FromBinder::FromSubContainerResolveInternal(::System::Object* subIdentifier, bool resolveAll) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder*>(), { "FromSubContainerResolveInternal", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::SubContainerBinder*>(this, ___internal_method, subIdentifier, resolveAll);
}
template <typename TContract>
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*
Zenject::FromBinder::FromIFactoryBase(::System::Action_1<::Zenject::ConcreteBinderGeneric_1<::Zenject::IFactory_1<TContract>*>*>* factoryBindGenerator) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::Zenject::FromBinder*>(),
                       { "FromIFactoryBase", { ::i2c::class_of<TContract>() }, { ::i2c::type_of<::System::Action_1<::Zenject::ConcreteBinderGeneric_1<::Zenject::IFactory_1<TContract>*>*>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TContract>() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*>(this, ___internal_method, factoryBindGenerator);
}
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::FromBinder::FromComponentsOn(::UnityEngine::GameObject* gameObject) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder*>(), { "FromComponentsOn", {}, { ::i2c::type_of<::UnityEngine::GameObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*>(this, ___internal_method, gameObject);
}
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::FromBinder::FromComponentOn(::UnityEngine::GameObject* gameObject) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder*>(), { "FromComponentOn", {}, { ::i2c::type_of<::UnityEngine::GameObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*>(this, ___internal_method, gameObject);
}
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*
Zenject::FromBinder::FromComponentsOn(::System::Func_2<::Zenject::InjectContext*, ::UnityW<::UnityEngine::GameObject>>* gameObjectGetter) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder*>(),
                                                           { "FromComponentsOn", {}, { ::i2c::type_of<::System::Func_2<::Zenject::InjectContext*, ::UnityW<::UnityEngine::GameObject>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*>(this, ___internal_method, gameObjectGetter);
}
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*
Zenject::FromBinder::FromComponentOn(::System::Func_2<::Zenject::InjectContext*, ::UnityW<::UnityEngine::GameObject>>* gameObjectGetter) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder*>(),
                                                           { "FromComponentOn", {}, { ::i2c::type_of<::System::Func_2<::Zenject::InjectContext*, ::UnityW<::UnityEngine::GameObject>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*>(this, ___internal_method, gameObjectGetter);
}
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::FromBinder::FromComponentsOnRoot() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder*>(), { "FromComponentsOnRoot", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*>(this, ___internal_method);
}
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::FromBinder::FromComponentOnRoot() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder*>(), { "FromComponentOnRoot", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*>(this, ___internal_method);
}
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::FromBinder::FromNewComponentOn(::UnityEngine::GameObject* gameObject) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder*>(), { "FromNewComponentOn", {}, { ::i2c::type_of<::UnityEngine::GameObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*>(this, ___internal_method, gameObject);
}
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*
Zenject::FromBinder::FromNewComponentOn(::System::Func_2<::Zenject::InjectContext*, ::UnityW<::UnityEngine::GameObject>>* gameObjectGetter) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder*>(),
                                                           { "FromNewComponentOn", {}, { ::i2c::type_of<::System::Func_2<::Zenject::InjectContext*, ::UnityW<::UnityEngine::GameObject>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*>(this, ___internal_method, gameObjectGetter);
}
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::FromBinder::FromNewComponentSibling() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder*>(), { "FromNewComponentSibling", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*>(this, ___internal_method);
}
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::FromBinder::FromNewComponentOnRoot() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder*>(), { "FromNewComponentOnRoot", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*>(this, ___internal_method);
}
inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::FromBinder::FromNewComponentOnNewGameObject() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder*>(), { "FromNewComponentOnNewGameObject", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder*>(this, ___internal_method);
}
inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::FromBinder::FromNewComponentOnNewGameObject(::Zenject::GameObjectCreationParameters* gameObjectInfo) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder*>(), { "FromNewComponentOnNewGameObject", {}, { ::i2c::type_of<::Zenject::GameObjectCreationParameters*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder*>(this, ___internal_method, gameObjectInfo);
}
inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::FromBinder::FromNewComponentOnNewPrefabResource(::StringW resourcePath) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder*>(), { "FromNewComponentOnNewPrefabResource", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder*>(this, ___internal_method, resourcePath);
}
inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::FromBinder::FromNewComponentOnNewPrefabResource(::StringW resourcePath,
                                                                                                                                      ::Zenject::GameObjectCreationParameters* gameObjectInfo) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder*>(),
                                              { "FromNewComponentOnNewPrefabResource", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Zenject::GameObjectCreationParameters*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder*>(this, ___internal_method, resourcePath, gameObjectInfo);
}
inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::FromBinder::FromNewComponentOnNewPrefab(::UnityEngine::Object* prefab) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder*>(), { "FromNewComponentOnNewPrefab", {}, { ::i2c::type_of<::UnityEngine::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder*>(this, ___internal_method, prefab);
}
inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::FromBinder::FromNewComponentOnNewPrefab(::UnityEngine::Object* prefab,
                                                                                                                              ::Zenject::GameObjectCreationParameters* gameObjectInfo) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder*>(),
                                              { "FromNewComponentOnNewPrefab", {}, { ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::Zenject::GameObjectCreationParameters*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder*>(this, ___internal_method, prefab, gameObjectInfo);
}
inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::FromBinder::FromComponentInNewPrefab(::UnityEngine::Object* prefab) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder*>(), { "FromComponentInNewPrefab", {}, { ::i2c::type_of<::UnityEngine::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder*>(this, ___internal_method, prefab);
}
inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::FromBinder::FromComponentInNewPrefab(::UnityEngine::Object* prefab,
                                                                                                                           ::Zenject::GameObjectCreationParameters* gameObjectInfo) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder*>(),
                                              { "FromComponentInNewPrefab", {}, { ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::Zenject::GameObjectCreationParameters*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder*>(this, ___internal_method, prefab, gameObjectInfo);
}
inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::FromBinder::FromComponentsInNewPrefab(::UnityEngine::Object* prefab) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder*>(), { "FromComponentsInNewPrefab", {}, { ::i2c::type_of<::UnityEngine::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder*>(this, ___internal_method, prefab);
}
inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::FromBinder::FromComponentsInNewPrefab(::UnityEngine::Object* prefab,
                                                                                                                            ::Zenject::GameObjectCreationParameters* gameObjectInfo) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder*>(),
                                              { "FromComponentsInNewPrefab", {}, { ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::Zenject::GameObjectCreationParameters*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder*>(this, ___internal_method, prefab, gameObjectInfo);
}
inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::FromBinder::FromComponentInNewPrefabResource(::StringW resourcePath) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder*>(), { "FromComponentInNewPrefabResource", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder*>(this, ___internal_method, resourcePath);
}
inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::FromBinder::FromComponentInNewPrefabResource(::StringW resourcePath,
                                                                                                                                   ::Zenject::GameObjectCreationParameters* gameObjectInfo) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder*>(),
                                                           { "FromComponentInNewPrefabResource", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Zenject::GameObjectCreationParameters*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder*>(this, ___internal_method, resourcePath, gameObjectInfo);
}
inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::FromBinder::FromComponentsInNewPrefabResource(::StringW resourcePath) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder*>(), { "FromComponentsInNewPrefabResource", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder*>(this, ___internal_method, resourcePath);
}
inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::FromBinder::FromComponentsInNewPrefabResource(::StringW resourcePath,
                                                                                                                                    ::Zenject::GameObjectCreationParameters* gameObjectInfo) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder*>(),
                                                           { "FromComponentsInNewPrefabResource", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Zenject::GameObjectCreationParameters*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder*>(this, ___internal_method, resourcePath, gameObjectInfo);
}
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::FromBinder::FromNewScriptableObject(::UnityEngine::ScriptableObject* resource) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder*>(), { "FromNewScriptableObject", {}, { ::i2c::type_of<::UnityEngine::ScriptableObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*>(this, ___internal_method, resource);
}
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::FromBinder::FromScriptableObject(::UnityEngine::ScriptableObject* resource) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder*>(), { "FromScriptableObject", {}, { ::i2c::type_of<::UnityEngine::ScriptableObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*>(this, ___internal_method, resource);
}
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::FromBinder::FromScriptableObjectInternal(::UnityEngine::ScriptableObject* resource, bool createNew) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder*>(), { "FromScriptableObjectInternal", {}, { ::i2c::type_of<::UnityEngine::ScriptableObject*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*>(this, ___internal_method, resource, createNew);
}
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::FromBinder::FromNewScriptableObjectResource(::StringW resourcePath) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder*>(), { "FromNewScriptableObjectResource", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*>(this, ___internal_method, resourcePath);
}
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::FromBinder::FromScriptableObjectResource(::StringW resourcePath) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder*>(), { "FromScriptableObjectResource", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*>(this, ___internal_method, resourcePath);
}
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::FromBinder::FromScriptableObjectResourceInternal(::StringW resourcePath, bool createNew) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder*>(), { "FromScriptableObjectResourceInternal", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*>(this, ___internal_method, resourcePath, createNew);
}
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::FromBinder::FromResource(::StringW resourcePath) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder*>(), { "FromResource", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*>(this, ___internal_method, resourcePath);
}
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::FromBinder::FromResources(::StringW resourcePath) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder*>(), { "FromResources", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*>(this, ___internal_method, resourcePath);
}
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::FromBinder::FromComponentInChildren(bool includeInactive) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder*>(), { "FromComponentInChildren", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*>(this, ___internal_method, includeInactive);
}
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*
Zenject::FromBinder::FromComponentsInChildrenBase(bool excludeSelf, ::System::Func_2<::UnityW<::UnityEngine::Component>, bool>* predicate, bool includeInactive) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder*>(),
                          { "FromComponentsInChildrenBase", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::System::Func_2<::UnityW<::UnityEngine::Component>, bool>*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*>(this, ___internal_method, excludeSelf, predicate, includeInactive);
}
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::FromBinder::FromComponentInParents(bool excludeSelf, bool includeInactive) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder*>(), { "FromComponentInParents", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*>(this, ___internal_method, excludeSelf, includeInactive);
}
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::FromBinder::FromComponentsInParents(bool excludeSelf, bool includeInactive) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder*>(), { "FromComponentsInParents", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*>(this, ___internal_method, excludeSelf, includeInactive);
}
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::FromBinder::FromComponentSibling() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder*>(), { "FromComponentSibling", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*>(this, ___internal_method);
}
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::FromBinder::FromComponentsSibling() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder*>(), { "FromComponentsSibling", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*>(this, ___internal_method);
}
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::FromBinder::FromComponentInHierarchy(bool includeInactive) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder*>(), { "FromComponentInHierarchy", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*>(this, ___internal_method, includeInactive);
}
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::FromBinder::FromComponentsInHierarchyBase(::System::Func_2<::UnityW<::UnityEngine::Component>, bool>* predicate,
                                                                                                                   bool includeInactive) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder*>(),
                                              { "FromComponentsInHierarchyBase", {}, { ::i2c::type_of<::System::Func_2<::UnityW<::UnityEngine::Component>, bool>*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*>(this, ___internal_method, predicate, includeInactive);
}
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::FromBinder::FromMethodUntyped(::System::Func_2<::Zenject::InjectContext*, ::System::Object*>* method) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder*>(), { "FromMethodUntyped", {}, { ::i2c::type_of<::System::Func_2<::Zenject::InjectContext*, ::System::Object*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*>(this, ___internal_method, method);
}
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*
Zenject::FromBinder::FromMethodMultipleUntyped(::System::Func_2<::Zenject::InjectContext*, ::System::Collections::Generic::IEnumerable_1<::System::Object*>*>* method) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder*>(),
                          { "FromMethodMultipleUntyped", {}, { ::i2c::type_of<::System::Func_2<::Zenject::InjectContext*, ::System::Collections::Generic::IEnumerable_1<::System::Object*>*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*>(this, ___internal_method, method);
}
template <typename TConcrete> inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::FromBinder::FromMethodBase(::System::Func_2<::Zenject::InjectContext*, TConcrete>* method) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder*>(),
                                                           { "FromMethodBase", { ::i2c::class_of<TConcrete>() }, { ::i2c::type_of<::System::Func_2<::Zenject::InjectContext*, TConcrete>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TConcrete>() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*>(this, ___internal_method, method);
}
template <typename TConcrete>
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*
Zenject::FromBinder::FromMethodMultipleBase(::System::Func_2<::Zenject::InjectContext*, ::System::Collections::Generic::IEnumerable_1<TConcrete>*>* method) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder*>(),
                                                           { "FromMethodMultipleBase",
                                                             { ::i2c::class_of<TConcrete>() },
                                                             { ::i2c::type_of<::System::Func_2<::Zenject::InjectContext*, ::System::Collections::Generic::IEnumerable_1<TConcrete>*>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TConcrete>() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*>(this, ___internal_method, method);
}
template <typename TObj, typename TResult>
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::FromBinder::FromResolveGetterBase(::System::Object* identifier, ::System::Func_2<TObj, TResult>* method,
                                                                                                           ::Zenject::InjectSources source, bool matchMultiple) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder*>(), { "FromResolveGetterBase",
                                                                                                        { ::i2c::class_of<TObj>(), ::i2c::class_of<TResult>() },
                                                                                                        { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Func_2<TObj, TResult>*>(),
                                                                                                          ::i2c::type_of<::Zenject::InjectSources>(), ::i2c::type_of<bool>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TObj>(), ::i2c::class_of<TResult>() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*>(this, ___internal_method, identifier, method, source, matchMultiple);
}
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::FromBinder::FromInstanceBase(::System::Object* instance) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder*>(), { "FromInstanceBase", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*>(this, ___internal_method, instance);
}
inline ::Zenject::IProvider* Zenject::FromBinder::_FromNewComponentSibling_b__37_0(::Zenject::DiContainer* container, ::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Zenject::FromBinder*>(), { "<FromNewComponentSibling>b__37_0", {}, { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::IProvider*>(this, ___internal_method, container, type);
}
inline ::Zenject::FromBinder* Zenject::FromBinder::New_ctor(::Zenject::DiContainer* bindContainer, ::Zenject::BindInfo* bindInfo, ::Zenject::BindStatement* bindStatement) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::FromBinder*>(bindContainer, bindInfo, bindStatement));
}
// Ctor Parameters []
constexpr ::Zenject::FromBinder::FromBinder() {}
