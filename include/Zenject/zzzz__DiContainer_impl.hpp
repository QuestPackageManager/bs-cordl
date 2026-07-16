#pragma once
// IWYU pragma private; include "Zenject/DiContainer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Lazy_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/zzzz__Component_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "Zenject/Internal/zzzz__IDecoratorProvider_def.hpp"
#include "Zenject/Internal/zzzz__LookupId_def.hpp"
#include "Zenject/Internal/zzzz__SingletonMarkRegistry_def.hpp"
#include "Zenject/zzzz__BindInfo_def.hpp"
#include "Zenject/zzzz__BindStatement_def.hpp"
#include "Zenject/zzzz__BindingCondition_def.hpp"
#include "Zenject/zzzz__BindingId_def.hpp"
#include "Zenject/zzzz__ConcreteBinderGeneric_1_def.hpp"
#include "Zenject/zzzz__ConcreteBinderNonGeneric_def.hpp"
#include "Zenject/zzzz__ConcreteIdBinderGeneric_1_def.hpp"
#include "Zenject/zzzz__ConcreteIdBinderNonGeneric_def.hpp"
#include "Zenject/zzzz__ConventionSelectTypesBinder_def.hpp"
#include "Zenject/zzzz__CopyNonLazyBinder_def.hpp"
#include "Zenject/zzzz__DecoratorToChoiceFromBinder_1_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__FactoryToChoiceIdBinder_11_def.hpp"
#include "Zenject/zzzz__FactoryToChoiceIdBinder_1_def.hpp"
#include "Zenject/zzzz__FactoryToChoiceIdBinder_2_def.hpp"
#include "Zenject/zzzz__FactoryToChoiceIdBinder_3_def.hpp"
#include "Zenject/zzzz__FactoryToChoiceIdBinder_4_def.hpp"
#include "Zenject/zzzz__FactoryToChoiceIdBinder_5_def.hpp"
#include "Zenject/zzzz__FactoryToChoiceIdBinder_6_def.hpp"
#include "Zenject/zzzz__FactoryToChoiceIdBinder_7_def.hpp"
#include "Zenject/zzzz__FromBinderNonGeneric_def.hpp"
#include "Zenject/zzzz__GameObjectCreationParameters_def.hpp"
#include "Zenject/zzzz__IInstantiator_def.hpp"
#include "Zenject/zzzz__IProvider_def.hpp"
#include "Zenject/zzzz__IValidatable_def.hpp"
#include "Zenject/zzzz__IdScopeConcreteIdArgConditionCopyNonLazyBinder_def.hpp"
#include "Zenject/zzzz__InjectContext_def.hpp"
#include "Zenject/zzzz__InjectSources_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
#include "Zenject/zzzz__InjectableInfo_def.hpp"
#include "Zenject/zzzz__LazyInstanceInjector_def.hpp"
#include "Zenject/zzzz__MemoryPoolIdInitialSizeMaxSizeBinder_1_def.hpp"
#include "Zenject/zzzz__TypeValuePair_def.hpp"
#include "Zenject/zzzz__ZenjectSettings_def.hpp"
//  Writing Method size for method: ::Zenject::DiContainer_ProviderInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::DiContainer_ProviderInfo::*)(::Zenject::IProvider*, ::Zenject::BindingCondition*, bool, ::Zenject::DiContainer*)>(
    &::Zenject::DiContainer_ProviderInfo::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6e7f394;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Zenject::DiContainer_ProviderInfo*>(),
            { ".ctor", {}, { ::i2c::type_of<::Zenject::IProvider*>(), ::i2c::type_of<::Zenject::BindingCondition*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Zenject::DiContainer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer_ProviderInfo.__zenCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*>)>(&::Zenject::DiContainer_ProviderInfo::__zenCreate)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x6e7f3a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer_ProviderInfo*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer_ProviderInfo.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::DiContainer_ProviderInfo::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x3d8;
  constexpr static std::size_t addrs = 0x6e7f540;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer_ProviderInfo*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Zenject::DiContainer*& Zenject::DiContainer_ProviderInfo::__cordl_internal_get_Container() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Container;
}
constexpr ::Zenject::DiContainer* const& Zenject::DiContainer_ProviderInfo::__cordl_internal_get_Container() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Container;
}
constexpr void Zenject::DiContainer_ProviderInfo::__cordl_internal_set_Container(::Zenject::DiContainer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Container = value;
}
constexpr bool& Zenject::DiContainer_ProviderInfo::__cordl_internal_get_NonLazy() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NonLazy;
}
constexpr bool const& Zenject::DiContainer_ProviderInfo::__cordl_internal_get_NonLazy() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NonLazy;
}
constexpr void Zenject::DiContainer_ProviderInfo::__cordl_internal_set_NonLazy(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___NonLazy = value;
}
constexpr ::Zenject::IProvider*& Zenject::DiContainer_ProviderInfo::__cordl_internal_get_Provider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Provider;
}
constexpr ::Zenject::IProvider* const& Zenject::DiContainer_ProviderInfo::__cordl_internal_get_Provider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Provider;
}
constexpr void Zenject::DiContainer_ProviderInfo::__cordl_internal_set_Provider(::Zenject::IProvider* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Provider = value;
}
constexpr ::Zenject::BindingCondition*& Zenject::DiContainer_ProviderInfo::__cordl_internal_get_Condition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Condition;
}
constexpr ::Zenject::BindingCondition* const& Zenject::DiContainer_ProviderInfo::__cordl_internal_get_Condition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Condition;
}
constexpr void Zenject::DiContainer_ProviderInfo::__cordl_internal_set_Condition(::Zenject::BindingCondition* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Condition = value;
}
inline void Zenject::DiContainer_ProviderInfo::_ctor(::Zenject::IProvider* provider, ::Zenject::BindingCondition* condition, bool nonLazy, ::Zenject::DiContainer* container) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Zenject::DiContainer_ProviderInfo*>(),
          { ".ctor", {}, { ::i2c::type_of<::Zenject::IProvider*>(), ::i2c::type_of<::Zenject::BindingCondition*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Zenject::DiContainer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, provider, condition, nonLazy, container);
}
inline ::System::Object* Zenject::DiContainer_ProviderInfo::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer_ProviderInfo*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::DiContainer_ProviderInfo::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer_ProviderInfo*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::DiContainer_ProviderInfo* Zenject::DiContainer_ProviderInfo::New_ctor(::Zenject::IProvider* provider, ::Zenject::BindingCondition* condition, bool nonLazy,
                                                                                        ::Zenject::DiContainer* container) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::DiContainer_ProviderInfo*>(provider, condition, nonLazy, container));
}
// Ctor Parameters []
constexpr ::Zenject::DiContainer_ProviderInfo::DiContainer_ProviderInfo() {}
//  Writing Method size for method: ::Zenject::DiContainer___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::DiContainer___c::*)()>(&::Zenject::DiContainer___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e7f96c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer___c._get_AllProviders_b__33_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::Zenject::DiContainer_ProviderInfo*>* (
    ::Zenject::DiContainer___c::*)(::System::Collections::Generic::List_1<::Zenject::DiContainer_ProviderInfo*>*)>(&::Zenject::DiContainer___c::_get_AllProviders_b__33_0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e7f970;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer___c*>(),
                                                { "<get_AllProviders>b__33_0", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::Zenject::DiContainer_ProviderInfo*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer___c._get_AllProviders_b__33_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::IProvider* (::Zenject::DiContainer___c::*)(::Zenject::DiContainer_ProviderInfo*)>(
    &::Zenject::DiContainer___c::_get_AllProviders_b__33_1)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6e7f978;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer___c*>(), { "<get_AllProviders>b__33_1", {}, { ::i2c::type_of<::Zenject::DiContainer_ProviderInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer___c._ResolveTypeAll_b__86_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Zenject::DiContainer___c::*)(::System::Type*)>(&::Zenject::DiContainer___c::_ResolveTypeAll_b__86_1)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6e7f98c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer___c*>(), { "<ResolveTypeAll>b__86_1", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer___c._InstantiateInternal_b__97_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Zenject::DiContainer___c::*)(::Zenject::TypeValuePair)>(&::Zenject::DiContainer___c::_InstantiateInternal_b__97_0)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6e7f9b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer___c*>(), { "<InstantiateInternal>b__97_0", {}, { ::i2c::type_of<::Zenject::TypeValuePair>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer___c._InjectExplicitInternal_b__102_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Zenject::DiContainer___c::*)(::Zenject::TypeValuePair)>(&::Zenject::DiContainer___c::_InjectExplicitInternal_b__102_0)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6e7fa14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer___c*>(), { "<InjectExplicitInternal>b__102_0", {}, { ::i2c::type_of<::Zenject::TypeValuePair>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer___c._BindInternal_b__197_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Zenject::DiContainer___c::*)(::System::Type*)>(&::Zenject::DiContainer___c::_BindInternal_b__197_0)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6e7fa70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer___c*>(), { "<BindInternal>b__197_0", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer___c._Bind_b__198_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Zenject::DiContainer___c::*)(::System::Type*)>(&::Zenject::DiContainer___c::_Bind_b__198_0)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6e7faf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer___c*>(), { "<Bind>b__198_0", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer___c.__zenCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*>)>(&::Zenject::DiContainer___c::__zenCreate)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e7fb70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer___c*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer___c.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::DiContainer___c::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x6e7fbb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer___c*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
inline void Zenject::DiContainer___c::setStaticF___9(::Zenject::DiContainer___c* value) {
  ::cordl_internals::setStaticField<::Zenject::DiContainer___c*, "<>9", ::Zenject::DiContainer___c*>(std::forward<::Zenject::DiContainer___c*>(value));
}
inline ::Zenject::DiContainer___c* Zenject::DiContainer___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::Zenject::DiContainer___c*, "<>9", ::Zenject::DiContainer___c*>();
}
inline void Zenject::DiContainer___c::setStaticF___9__33_0(
    ::System::Func_2<::System::Collections::Generic::List_1<::Zenject::DiContainer_ProviderInfo*>*, ::System::Collections::Generic::IEnumerable_1<::Zenject::DiContainer_ProviderInfo*>*>* value) {
  ::cordl_internals::setStaticField<
      ::System::Func_2<::System::Collections::Generic::List_1<::Zenject::DiContainer_ProviderInfo*>*, ::System::Collections::Generic::IEnumerable_1<::Zenject::DiContainer_ProviderInfo*>*>*,
      "<>9__33_0", ::Zenject::DiContainer___c*>(std::forward<::System::Func_2<::System::Collections::Generic::List_1<::Zenject::DiContainer_ProviderInfo*>*,
                                                                              ::System::Collections::Generic::IEnumerable_1<::Zenject::DiContainer_ProviderInfo*>*>*>(value));
}
inline ::System::Func_2<::System::Collections::Generic::List_1<::Zenject::DiContainer_ProviderInfo*>*, ::System::Collections::Generic::IEnumerable_1<::Zenject::DiContainer_ProviderInfo*>*>*
Zenject::DiContainer___c::getStaticF___9__33_0() {
  return ::cordl_internals::getStaticField<
      ::System::Func_2<::System::Collections::Generic::List_1<::Zenject::DiContainer_ProviderInfo*>*, ::System::Collections::Generic::IEnumerable_1<::Zenject::DiContainer_ProviderInfo*>*>*,
      "<>9__33_0", ::Zenject::DiContainer___c*>();
}
inline void Zenject::DiContainer___c::setStaticF___9__33_1(::System::Func_2<::Zenject::DiContainer_ProviderInfo*, ::Zenject::IProvider*>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::Zenject::DiContainer_ProviderInfo*, ::Zenject::IProvider*>*, "<>9__33_1", ::Zenject::DiContainer___c*>(
      std::forward<::System::Func_2<::Zenject::DiContainer_ProviderInfo*, ::Zenject::IProvider*>*>(value));
}
inline ::System::Func_2<::Zenject::DiContainer_ProviderInfo*, ::Zenject::IProvider*>* Zenject::DiContainer___c::getStaticF___9__33_1() {
  return ::cordl_internals::getStaticField<::System::Func_2<::Zenject::DiContainer_ProviderInfo*, ::Zenject::IProvider*>*, "<>9__33_1", ::Zenject::DiContainer___c*>();
}
inline void Zenject::DiContainer___c::setStaticF___9__86_1(::System::Func_2<::System::Type*, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::System::Type*, bool>*, "<>9__86_1", ::Zenject::DiContainer___c*>(std::forward<::System::Func_2<::System::Type*, bool>*>(value));
}
inline ::System::Func_2<::System::Type*, bool>* Zenject::DiContainer___c::getStaticF___9__86_1() {
  return ::cordl_internals::getStaticField<::System::Func_2<::System::Type*, bool>*, "<>9__86_1", ::Zenject::DiContainer___c*>();
}
inline void Zenject::DiContainer___c::setStaticF___9__97_0(::System::Func_2<::Zenject::TypeValuePair, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::Zenject::TypeValuePair, ::StringW>*, "<>9__97_0", ::Zenject::DiContainer___c*>(
      std::forward<::System::Func_2<::Zenject::TypeValuePair, ::StringW>*>(value));
}
inline ::System::Func_2<::Zenject::TypeValuePair, ::StringW>* Zenject::DiContainer___c::getStaticF___9__97_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::Zenject::TypeValuePair, ::StringW>*, "<>9__97_0", ::Zenject::DiContainer___c*>();
}
inline void Zenject::DiContainer___c::setStaticF___9__102_0(::System::Func_2<::Zenject::TypeValuePair, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::Zenject::TypeValuePair, ::StringW>*, "<>9__102_0", ::Zenject::DiContainer___c*>(
      std::forward<::System::Func_2<::Zenject::TypeValuePair, ::StringW>*>(value));
}
inline ::System::Func_2<::Zenject::TypeValuePair, ::StringW>* Zenject::DiContainer___c::getStaticF___9__102_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::Zenject::TypeValuePair, ::StringW>*, "<>9__102_0", ::Zenject::DiContainer___c*>();
}
inline void Zenject::DiContainer___c::setStaticF___9__197_0(::System::Func_2<::System::Type*, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::System::Type*, bool>*, "<>9__197_0", ::Zenject::DiContainer___c*>(std::forward<::System::Func_2<::System::Type*, bool>*>(value));
}
inline ::System::Func_2<::System::Type*, bool>* Zenject::DiContainer___c::getStaticF___9__197_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::System::Type*, bool>*, "<>9__197_0", ::Zenject::DiContainer___c*>();
}
inline void Zenject::DiContainer___c::setStaticF___9__198_0(::System::Func_2<::System::Type*, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::System::Type*, bool>*, "<>9__198_0", ::Zenject::DiContainer___c*>(std::forward<::System::Func_2<::System::Type*, bool>*>(value));
}
inline ::System::Func_2<::System::Type*, bool>* Zenject::DiContainer___c::getStaticF___9__198_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::System::Type*, bool>*, "<>9__198_0", ::Zenject::DiContainer___c*>();
}
inline void Zenject::DiContainer___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::Zenject::DiContainer_ProviderInfo*>*
Zenject::DiContainer___c::_get_AllProviders_b__33_0(::System::Collections::Generic::List_1<::Zenject::DiContainer_ProviderInfo*>* x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer___c*>(),
                                                           { "<get_AllProviders>b__33_0", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::Zenject::DiContainer_ProviderInfo*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Zenject::DiContainer_ProviderInfo*>*>(this, ___internal_method, x);
}
inline ::Zenject::IProvider* Zenject::DiContainer___c::_get_AllProviders_b__33_1(::Zenject::DiContainer_ProviderInfo* x) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer___c*>(), { "<get_AllProviders>b__33_1", {}, { ::i2c::type_of<::Zenject::DiContainer_ProviderInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::IProvider*>(this, ___internal_method, x);
}
inline bool Zenject::DiContainer___c::_ResolveTypeAll_b__86_1(::System::Type* x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer___c*>(), { "<ResolveTypeAll>b__86_1", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline ::StringW Zenject::DiContainer___c::_InstantiateInternal_b__97_0(::Zenject::TypeValuePair x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer___c*>(), { "<InstantiateInternal>b__97_0", {}, { ::i2c::type_of<::Zenject::TypeValuePair>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, x);
}
inline ::StringW Zenject::DiContainer___c::_InjectExplicitInternal_b__102_0(::Zenject::TypeValuePair x) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer___c*>(), { "<InjectExplicitInternal>b__102_0", {}, { ::i2c::type_of<::Zenject::TypeValuePair>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, x);
}
inline bool Zenject::DiContainer___c::_BindInternal_b__197_0(::System::Type* x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer___c*>(), { "<BindInternal>b__197_0", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline bool Zenject::DiContainer___c::_Bind_b__198_0(::System::Type* x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer___c*>(), { "<Bind>b__198_0", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline ::System::Object* Zenject::DiContainer___c::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer___c*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::DiContainer___c::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer___c*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::DiContainer___c* Zenject::DiContainer___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::DiContainer___c*>());
}
// Ctor Parameters []
constexpr ::Zenject::DiContainer___c::DiContainer___c() {}
//  Writing Method size for method: ::Zenject::DiContainer___c__DisplayClass178_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::DiContainer___c__DisplayClass178_0::*)()>(&::Zenject::DiContainer___c__DisplayClass178_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e7fd48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer___c__DisplayClass178_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer___c__DisplayClass178_0._UnbindId_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Zenject::DiContainer___c__DisplayClass178_0::*)(::Zenject::DiContainer_ProviderInfo*)>(
    &::Zenject::DiContainer___c__DisplayClass178_0::_UnbindId_b__0)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x6e7fd4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer___c__DisplayClass178_0*>(), { "<UnbindId>b__0", {}, { ::i2c::type_of<::Zenject::DiContainer_ProviderInfo*>() } })));
    return ___internal_method;
  }
};
constexpr ::Zenject::DiContainer*& Zenject::DiContainer___c__DisplayClass178_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::Zenject::DiContainer* const& Zenject::DiContainer___c__DisplayClass178_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void Zenject::DiContainer___c__DisplayClass178_0::__cordl_internal_set___4__this(::Zenject::DiContainer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
constexpr ::System::Type*& Zenject::DiContainer___c__DisplayClass178_0::__cordl_internal_get_contractType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___contractType;
}
constexpr ::System::Type* const& Zenject::DiContainer___c__DisplayClass178_0::__cordl_internal_get_contractType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___contractType;
}
constexpr void Zenject::DiContainer___c__DisplayClass178_0::__cordl_internal_set_contractType(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___contractType = value;
}
constexpr ::System::Object*& Zenject::DiContainer___c__DisplayClass178_0::__cordl_internal_get_identifier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___identifier;
}
constexpr ::System::Object* const& Zenject::DiContainer___c__DisplayClass178_0::__cordl_internal_get_identifier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___identifier;
}
constexpr void Zenject::DiContainer___c__DisplayClass178_0::__cordl_internal_set_identifier(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___identifier = value;
}
constexpr ::System::Type*& Zenject::DiContainer___c__DisplayClass178_0::__cordl_internal_get_concreteType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___concreteType;
}
constexpr ::System::Type* const& Zenject::DiContainer___c__DisplayClass178_0::__cordl_internal_get_concreteType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___concreteType;
}
constexpr void Zenject::DiContainer___c__DisplayClass178_0::__cordl_internal_set_concreteType(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___concreteType = value;
}
inline void Zenject::DiContainer___c__DisplayClass178_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer___c__DisplayClass178_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Zenject::DiContainer___c__DisplayClass178_0::_UnbindId_b__0(::Zenject::DiContainer_ProviderInfo* x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer___c__DisplayClass178_0*>(), { "<UnbindId>b__0", {}, { ::i2c::type_of<::Zenject::DiContainer_ProviderInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline ::Zenject::DiContainer___c__DisplayClass178_0* Zenject::DiContainer___c__DisplayClass178_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::DiContainer___c__DisplayClass178_0*>());
}
// Ctor Parameters []
constexpr ::Zenject::DiContainer___c__DisplayClass178_0::DiContainer___c__DisplayClass178_0() {}
template <typename TContract> constexpr TContract& Zenject::DiContainer___c__DisplayClass203_0_1<TContract>::__cordl_internal_get_instance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___instance;
}
template <typename TContract> constexpr TContract const& Zenject::DiContainer___c__DisplayClass203_0_1<TContract>::__cordl_internal_get_instance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___instance;
}
template <typename TContract> constexpr void Zenject::DiContainer___c__DisplayClass203_0_1<TContract>::__cordl_internal_set_instance(TContract value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___instance = value;
}
template <typename TContract> inline void Zenject::DiContainer___c__DisplayClass203_0_1<TContract>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer___c__DisplayClass203_0_1<TContract>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TContract> inline ::Zenject::IProvider* Zenject::DiContainer___c__DisplayClass203_0_1<TContract>::_BindInstance_b__0(::Zenject::DiContainer* container, ::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer___c__DisplayClass203_0_1<TContract>*>(),
                                                           { "<BindInstance>b__0", {}, { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::IProvider*>(this, ___internal_method, container, type);
}
template <typename TContract> inline ::Zenject::DiContainer___c__DisplayClass203_0_1<TContract>* Zenject::DiContainer___c__DisplayClass203_0_1<TContract>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::DiContainer___c__DisplayClass203_0_1<TContract>*>());
}
// Ctor Parameters []
template <typename TContract> constexpr ::Zenject::DiContainer___c__DisplayClass203_0_1<TContract>::DiContainer___c__DisplayClass203_0_1() {}
template <typename T> constexpr ::Zenject::DiContainer*& Zenject::DiContainer___c__DisplayClass244_0_1<T>::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename T> constexpr ::Zenject::DiContainer* const& Zenject::DiContainer___c__DisplayClass244_0_1<T>::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename T> constexpr void Zenject::DiContainer___c__DisplayClass244_0_1<T>::__cordl_internal_set___4__this(::Zenject::DiContainer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
template <typename T> constexpr ::System::Type*& Zenject::DiContainer___c__DisplayClass244_0_1<T>::__cordl_internal_get_concreteType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___concreteType;
}
template <typename T> constexpr ::System::Type* const& Zenject::DiContainer___c__DisplayClass244_0_1<T>::__cordl_internal_get_concreteType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___concreteType;
}
template <typename T> constexpr void Zenject::DiContainer___c__DisplayClass244_0_1<T>::__cordl_internal_set_concreteType(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___concreteType = value;
}
template <typename T> inline void Zenject::DiContainer___c__DisplayClass244_0_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer___c__DisplayClass244_0_1<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline T Zenject::DiContainer___c__DisplayClass244_0_1<T>::_InstantiateLazy_b__0() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer___c__DisplayClass244_0_1<T>*>(), { "<InstantiateLazy>b__0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template <typename T> inline ::Zenject::DiContainer___c__DisplayClass244_0_1<T>* Zenject::DiContainer___c__DisplayClass244_0_1<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::DiContainer___c__DisplayClass244_0_1<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::Zenject::DiContainer___c__DisplayClass244_0_1<T>::DiContainer___c__DisplayClass244_0_1() {}
template <typename T> constexpr ::Zenject::DiContainer*& Zenject::DiContainer___c__DisplayClass246_0_1<T>::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename T> constexpr ::Zenject::DiContainer* const& Zenject::DiContainer___c__DisplayClass246_0_1<T>::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename T> constexpr void Zenject::DiContainer___c__DisplayClass246_0_1<T>::__cordl_internal_set___4__this(::Zenject::DiContainer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
template <typename T> constexpr ::System::Type*& Zenject::DiContainer___c__DisplayClass246_0_1<T>::__cordl_internal_get_concreteType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___concreteType;
}
template <typename T> constexpr ::System::Type* const& Zenject::DiContainer___c__DisplayClass246_0_1<T>::__cordl_internal_get_concreteType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___concreteType;
}
template <typename T> constexpr void Zenject::DiContainer___c__DisplayClass246_0_1<T>::__cordl_internal_set_concreteType(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___concreteType = value;
}
template <typename T> inline void Zenject::DiContainer___c__DisplayClass246_0_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer___c__DisplayClass246_0_1<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline T Zenject::DiContainer___c__DisplayClass246_0_1<T>::_ResolveLazy_b__0() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer___c__DisplayClass246_0_1<T>*>(), { "<ResolveLazy>b__0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template <typename T> inline ::Zenject::DiContainer___c__DisplayClass246_0_1<T>* Zenject::DiContainer___c__DisplayClass246_0_1<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::DiContainer___c__DisplayClass246_0_1<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::Zenject::DiContainer___c__DisplayClass246_0_1<T>::DiContainer___c__DisplayClass246_0_1() {}
//  Writing Method size for method: ::Zenject::DiContainer___c__DisplayClass86_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::DiContainer___c__DisplayClass86_0::*)()>(&::Zenject::DiContainer___c__DisplayClass86_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e7fe98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer___c__DisplayClass86_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer___c__DisplayClass86_0._ResolveTypeAll_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::Zenject::DiContainer___c__DisplayClass86_0::*)(::Zenject::DiContainer_ProviderInfo*)>(
    &::Zenject::DiContainer___c__DisplayClass86_0::_ResolveTypeAll_b__0)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6e7fe9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer___c__DisplayClass86_0*>(),
                                                                                           { "<ResolveTypeAll>b__0", {}, { ::i2c::type_of<::Zenject::DiContainer_ProviderInfo*>() } })));
    return ___internal_method;
  }
};
constexpr ::Zenject::InjectContext*& Zenject::DiContainer___c__DisplayClass86_0::__cordl_internal_get_context() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___context;
}
constexpr ::Zenject::InjectContext* const& Zenject::DiContainer___c__DisplayClass86_0::__cordl_internal_get_context() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___context;
}
constexpr void Zenject::DiContainer___c__DisplayClass86_0::__cordl_internal_set_context(::Zenject::InjectContext* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___context = value;
}
inline void Zenject::DiContainer___c__DisplayClass86_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer___c__DisplayClass86_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Type* Zenject::DiContainer___c__DisplayClass86_0::_ResolveTypeAll_b__0(::Zenject::DiContainer_ProviderInfo* x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer___c__DisplayClass86_0*>(), { "<ResolveTypeAll>b__0", {}, { ::i2c::type_of<::Zenject::DiContainer_ProviderInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method, x);
}
inline ::Zenject::DiContainer___c__DisplayClass86_0* Zenject::DiContainer___c__DisplayClass86_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::DiContainer___c__DisplayClass86_0*>());
}
// Ctor Parameters []
constexpr ::Zenject::DiContainer___c__DisplayClass86_0::DiContainer___c__DisplayClass86_0() {}
//  Writing Method size for method: ::Zenject::DiContainer__GetDependencyContracts_d__96._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::DiContainer__GetDependencyContracts_d__96::*)(int32_t)>(&::Zenject::DiContainer__GetDependencyContracts_d__96::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6e7ff5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer__GetDependencyContracts_d__96*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer__GetDependencyContracts_d__96.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::DiContainer__GetDependencyContracts_d__96::*)()>(
    &::Zenject::DiContainer__GetDependencyContracts_d__96::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6e7ff7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer__GetDependencyContracts_d__96*>(), { "System.IDisposable.Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer__GetDependencyContracts_d__96.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Zenject::DiContainer__GetDependencyContracts_d__96::*)()>(&::Zenject::DiContainer__GetDependencyContracts_d__96::MoveNext)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x6e7ff98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer__GetDependencyContracts_d__96*>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer__GetDependencyContracts_d__96.__m__Finally1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::DiContainer__GetDependencyContracts_d__96::*)()>(&::Zenject::DiContainer__GetDependencyContracts_d__96::__m__Finally1)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6e80470;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer__GetDependencyContracts_d__96*>(), { "<>m__Finally1", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer__GetDependencyContracts_d__96.System_Collections_Generic_IEnumerator_System_Type__get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::Zenject::DiContainer__GetDependencyContracts_d__96::*)()>(
    &::Zenject::DiContainer__GetDependencyContracts_d__96::System_Collections_Generic_IEnumerator_System_Type__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e80524;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer__GetDependencyContracts_d__96*>(), { "System.Collections.Generic.IEnumerator<System.Type>.get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer__GetDependencyContracts_d__96.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::DiContainer__GetDependencyContracts_d__96::*)()>(
    &::Zenject::DiContainer__GetDependencyContracts_d__96::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6e8052c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer__GetDependencyContracts_d__96*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer__GetDependencyContracts_d__96.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Zenject::DiContainer__GetDependencyContracts_d__96::*)()>(
    &::Zenject::DiContainer__GetDependencyContracts_d__96::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e80564;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer__GetDependencyContracts_d__96*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer__GetDependencyContracts_d__96.System_Collections_Generic_IEnumerable_System_Type__GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerator_1<::System::Type*>* (::Zenject::DiContainer__GetDependencyContracts_d__96::*)()>(
    &::Zenject::DiContainer__GetDependencyContracts_d__96::System_Collections_Generic_IEnumerable_System_Type__GetEnumerator)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6e8056c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer__GetDependencyContracts_d__96*>(), { "System.Collections.Generic.IEnumerable<System.Type>.GetEnumerator", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer__GetDependencyContracts_d__96.System_Collections_IEnumerable_GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Zenject::DiContainer__GetDependencyContracts_d__96::*)()>(
    &::Zenject::DiContainer__GetDependencyContracts_d__96::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e8060c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer__GetDependencyContracts_d__96*>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& Zenject::DiContainer__GetDependencyContracts_d__96::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& Zenject::DiContainer__GetDependencyContracts_d__96::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void Zenject::DiContainer__GetDependencyContracts_d__96::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::System::Type*& Zenject::DiContainer__GetDependencyContracts_d__96::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::System::Type* const& Zenject::DiContainer__GetDependencyContracts_d__96::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void Zenject::DiContainer__GetDependencyContracts_d__96::__cordl_internal_set___2__current(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____2__current = value;
}
constexpr int32_t& Zenject::DiContainer__GetDependencyContracts_d__96::__cordl_internal_get___l__initialThreadId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
constexpr int32_t const& Zenject::DiContainer__GetDependencyContracts_d__96::__cordl_internal_get___l__initialThreadId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
constexpr void Zenject::DiContainer__GetDependencyContracts_d__96::__cordl_internal_set___l__initialThreadId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____l__initialThreadId = value;
}
constexpr ::Zenject::DiContainer*& Zenject::DiContainer__GetDependencyContracts_d__96::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::Zenject::DiContainer* const& Zenject::DiContainer__GetDependencyContracts_d__96::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void Zenject::DiContainer__GetDependencyContracts_d__96::__cordl_internal_set___4__this(::Zenject::DiContainer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
constexpr ::System::Type*& Zenject::DiContainer__GetDependencyContracts_d__96::__cordl_internal_get_contract() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___contract;
}
constexpr ::System::Type* const& Zenject::DiContainer__GetDependencyContracts_d__96::__cordl_internal_get_contract() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___contract;
}
constexpr void Zenject::DiContainer__GetDependencyContracts_d__96::__cordl_internal_set_contract(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___contract = value;
}
constexpr ::System::Type*& Zenject::DiContainer__GetDependencyContracts_d__96::__cordl_internal_get___3__contract() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__contract;
}
constexpr ::System::Type* const& Zenject::DiContainer__GetDependencyContracts_d__96::__cordl_internal_get___3__contract() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__contract;
}
constexpr void Zenject::DiContainer__GetDependencyContracts_d__96::__cordl_internal_set___3__contract(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____3__contract = value;
}
constexpr ::System::Collections::Generic::IEnumerator_1<::Zenject::InjectableInfo*>*& Zenject::DiContainer__GetDependencyContracts_d__96::__cordl_internal_get___7__wrap1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap1;
}
constexpr ::System::Collections::Generic::IEnumerator_1<::Zenject::InjectableInfo*>* const& Zenject::DiContainer__GetDependencyContracts_d__96::__cordl_internal_get___7__wrap1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap1;
}
constexpr void Zenject::DiContainer__GetDependencyContracts_d__96::__cordl_internal_set___7__wrap1(::System::Collections::Generic::IEnumerator_1<::Zenject::InjectableInfo*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____7__wrap1 = value;
}
inline void Zenject::DiContainer__GetDependencyContracts_d__96::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer__GetDependencyContracts_d__96*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void Zenject::DiContainer__GetDependencyContracts_d__96::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer__GetDependencyContracts_d__96*>(), { "System.IDisposable.Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Zenject::DiContainer__GetDependencyContracts_d__96::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer__GetDependencyContracts_d__96*>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Zenject::DiContainer__GetDependencyContracts_d__96::__m__Finally1() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer__GetDependencyContracts_d__96*>(), { "<>m__Finally1", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Type* Zenject::DiContainer__GetDependencyContracts_d__96::System_Collections_Generic_IEnumerator_System_Type__get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer__GetDependencyContracts_d__96*>(), { "System.Collections.Generic.IEnumerator<System.Type>.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline void Zenject::DiContainer__GetDependencyContracts_d__96::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer__GetDependencyContracts_d__96*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Zenject::DiContainer__GetDependencyContracts_d__96::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer__GetDependencyContracts_d__96*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::System::Type*>* Zenject::DiContainer__GetDependencyContracts_d__96::System_Collections_Generic_IEnumerable_System_Type__GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer__GetDependencyContracts_d__96*>(), { "System.Collections.Generic.IEnumerable<System.Type>.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::System::Type*>*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* Zenject::DiContainer__GetDependencyContracts_d__96::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer__GetDependencyContracts_d__96*>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline ::Zenject::DiContainer__GetDependencyContracts_d__96* Zenject::DiContainer__GetDependencyContracts_d__96::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::DiContainer__GetDependencyContracts_d__96*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Type*>"
constexpr Zenject::DiContainer__GetDependencyContracts_d__96::operator ::System::Collections::Generic::IEnumerable_1<::System::Type*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::System::Type*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::Type*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::System::Type*>*
Zenject::DiContainer__GetDependencyContracts_d__96::i___System__Collections__Generic__IEnumerable_1___System__Type__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::System::Type*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr Zenject::DiContainer__GetDependencyContracts_d__96::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* Zenject::DiContainer__GetDependencyContracts_d__96::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Type*>"
constexpr Zenject::DiContainer__GetDependencyContracts_d__96::operator ::System::Collections::Generic::IEnumerator_1<::System::Type*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Type*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Type*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Type*>*
Zenject::DiContainer__GetDependencyContracts_d__96::i___System__Collections__Generic__IEnumerator_1___System__Type__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Type*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr Zenject::DiContainer__GetDependencyContracts_d__96::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Zenject::DiContainer__GetDependencyContracts_d__96::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr Zenject::DiContainer__GetDependencyContracts_d__96::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Zenject::DiContainer__GetDependencyContracts_d__96::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Zenject::DiContainer__GetDependencyContracts_d__96::DiContainer__GetDependencyContracts_d__96() {}
//  Writing Method size for method: ::Zenject::DiContainer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::DiContainer::*)(::System::Collections::Generic::IEnumerable_1<::Zenject::DiContainer*>*, bool)>(
    &::Zenject::DiContainer::_ctor)> {
  constexpr static std::size_t size = 0x9f4;
  constexpr static std::size_t addrs = 0x6e6de28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::Zenject::DiContainer*>*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::DiContainer::*)(bool)>(&::Zenject::DiContainer::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6e74578;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::DiContainer::*)()>(&::Zenject::DiContainer::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6e72350;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::DiContainer::*)(::Zenject::DiContainer*, bool)>(&::Zenject::DiContainer::_ctor)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6e74628;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { ".ctor", {}, { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::DiContainer::*)(::Zenject::DiContainer*)>(&::Zenject::DiContainer::_ctor)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6e746d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { ".ctor", {}, { ::i2c::type_of<::Zenject::DiContainer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::DiContainer::*)(::System::Collections::Generic::IEnumerable_1<::Zenject::DiContainer*>*)>(&::Zenject::DiContainer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e7477c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::Zenject::DiContainer*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.get_Settings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::ZenjectSettings* (::Zenject::DiContainer::*)()>(&::Zenject::DiContainer::get_Settings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e74784;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "get_Settings", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.set_Settings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::DiContainer::*)(::Zenject::ZenjectSettings*)>(&::Zenject::DiContainer::set_Settings)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6e6eb9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "set_Settings", {}, { ::i2c::type_of<::Zenject::ZenjectSettings*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.get_SingletonMarkRegistry
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::Internal::SingletonMarkRegistry* (::Zenject::DiContainer::*)()>(&::Zenject::DiContainer::get_SingletonMarkRegistry)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e7478c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "get_SingletonMarkRegistry", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.get_AllProviders
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::Zenject::IProvider*>* (::Zenject::DiContainer::*)()>(
    &::Zenject::DiContainer::get_AllProviders)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x6e74794;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "get_AllProviders", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.InstallDefaultBindings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::DiContainer::*)()>(&::Zenject::DiContainer::InstallDefaultBindings)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x6e73e84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "InstallDefaultBindings", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.CreateLazyBinding
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Zenject::DiContainer::*)(::Zenject::InjectContext*)>(&::Zenject::DiContainer::CreateLazyBinding)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x6e749b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "CreateLazyBinding", {}, { ::i2c::type_of<::Zenject::InjectContext*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.QueueForValidate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::DiContainer::*)(::Zenject::IValidatable*)>(&::Zenject::DiContainer::QueueForValidate)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x6e74c28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "QueueForValidate", {}, { ::i2c::type_of<::Zenject::IValidatable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.ShouldInheritBinding
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Zenject::DiContainer::*)(::Zenject::BindStatement*, ::Zenject::DiContainer*)>(&::Zenject::DiContainer::ShouldInheritBinding)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6e7443c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "ShouldInheritBinding", {}, { ::i2c::type_of<::Zenject::BindStatement*>(), ::i2c::type_of<::Zenject::DiContainer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.get_ContextTransform
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::Zenject::DiContainer::*)()>(&::Zenject::DiContainer::get_ContextTransform)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6e74d90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "get_ContextTransform", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.get_AssertOnNewGameObjects
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Zenject::DiContainer::*)()>(&::Zenject::DiContainer::get_AssertOnNewGameObjects)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e74e50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "get_AssertOnNewGameObjects", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.set_AssertOnNewGameObjects
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::DiContainer::*)(bool)>(&::Zenject::DiContainer::set_AssertOnNewGameObjects)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e74e58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "set_AssertOnNewGameObjects", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.get_InheritedDefaultParent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::Zenject::DiContainer::*)()>(&::Zenject::DiContainer::get_InheritedDefaultParent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e74e60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "get_InheritedDefaultParent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.get_DefaultParent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::Zenject::DiContainer::*)()>(&::Zenject::DiContainer::get_DefaultParent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e74e68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "get_DefaultParent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.set_DefaultParent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::DiContainer::*)(::UnityEngine::Transform*)>(&::Zenject::DiContainer::set_DefaultParent)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6e6c7e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "set_DefaultParent", {}, { ::i2c::type_of<::UnityEngine::Transform*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.get_ParentContainers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Zenject::DiContainer*> (::Zenject::DiContainer::*)()>(&::Zenject::DiContainer::get_ParentContainers)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6e74d64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "get_ParentContainers", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.get_AncestorContainers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Zenject::DiContainer*> (::Zenject::DiContainer::*)()>(&::Zenject::DiContainer::get_AncestorContainers)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6e74e70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "get_AncestorContainers", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.get_ChecksForCircularDependencies
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Zenject::DiContainer::*)()>(&::Zenject::DiContainer::get_ChecksForCircularDependencies)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e74e9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "get_ChecksForCircularDependencies", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.get_IsValidating
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Zenject::DiContainer::*)()>(&::Zenject::DiContainer::get_IsValidating)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e74ea4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "get_IsValidating", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.get_IsInstalling
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Zenject::DiContainer::*)()>(&::Zenject::DiContainer::get_IsInstalling)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e74eac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "get_IsInstalling", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.set_IsInstalling
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::DiContainer::*)(bool)>(&::Zenject::DiContainer::set_IsInstalling)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e74eb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "set_IsInstalling", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.get_AllContracts
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::Zenject::BindingId>* (::Zenject::DiContainer::*)()>(&::Zenject::DiContainer::get_AllContracts)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6e74ebc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "get_AllContracts", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.ResolveRoots
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::DiContainer::*)()>(&::Zenject::DiContainer::ResolveRoots)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6e6c524;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "ResolveRoots", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.ResolveDependencyRoots
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::DiContainer::*)()>(&::Zenject::DiContainer::ResolveDependencyRoots)> {
  constexpr static std::size_t size = 0x860;
  constexpr static std::size_t addrs = 0x6e74f18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "ResolveDependencyRoots", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.ValidateFullResolve
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::DiContainer::*)()>(&::Zenject::DiContainer::ValidateFullResolve)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x6e75d94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "ValidateFullResolve", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.FlushValidationQueue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::DiContainer::*)()>(&::Zenject::DiContainer::FlushValidationQueue)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x6e75778;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "FlushValidationQueue", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.CreateSubContainer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::DiContainer* (::Zenject::DiContainer::*)()>(&::Zenject::DiContainer::CreateSubContainer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e6bea8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "CreateSubContainer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.QueueForInject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::DiContainer::*)(::System::Object*)>(&::Zenject::DiContainer::QueueForInject)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6e6c2ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "QueueForInject", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.CreateSubContainer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::DiContainer* (::Zenject::DiContainer::*)(bool)>(&::Zenject::DiContainer::CreateSubContainer)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x6e76200;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "CreateSubContainer", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.RegisterProvider
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::DiContainer::*)(::Zenject::BindingId, ::Zenject::BindingCondition*, ::Zenject::IProvider*, bool)>(
    &::Zenject::DiContainer::RegisterProvider)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x6e63238;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Zenject::DiContainer*>(),
            { "RegisterProvider", {}, { ::i2c::type_of<::Zenject::BindingId>(), ::i2c::type_of<::Zenject::BindingCondition*>(), ::i2c::type_of<::Zenject::IProvider*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.GetProviderMatches
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::DiContainer::*)(::Zenject::InjectContext*, ::System::Collections::Generic::List_1<::Zenject::DiContainer_ProviderInfo*>*)>(
    &::Zenject::DiContainer::GetProviderMatches)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x6e762d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Zenject::DiContainer*>(),
            { "GetProviderMatches", {}, { ::i2c::type_of<::Zenject::InjectContext*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Zenject::DiContainer_ProviderInfo*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.TryGetUniqueProvider
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::DiContainer_ProviderInfo* (::Zenject::DiContainer::*)(::Zenject::InjectContext*)>(&::Zenject::DiContainer::TryGetUniqueProvider)> {
  constexpr static std::size_t size = 0x5b0;
  constexpr static std::size_t addrs = 0x6e76620;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "TryGetUniqueProvider", {}, { ::i2c::type_of<::Zenject::InjectContext*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.FlattenInheritanceChain
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::Zenject::DiContainer*>* (::Zenject::DiContainer::*)()>(
    &::Zenject::DiContainer::FlattenInheritanceChain)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x6e741f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "FlattenInheritanceChain", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.GetLocalProviders
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::DiContainer::*)(::Zenject::BindingId, ::System::Collections::Generic::List_1<::Zenject::DiContainer_ProviderInfo*>*)>(
    &::Zenject::DiContainer::GetLocalProviders)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x6e76c40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(),
                            { "GetLocalProviders", {}, { ::i2c::type_of<::Zenject::BindingId>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Zenject::DiContainer_ProviderInfo*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.GetProvidersForContract
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::DiContainer::*)(
    ::Zenject::BindingId, ::Zenject::InjectSources, ::System::Collections::Generic::List_1<::Zenject::DiContainer_ProviderInfo*>*)>(&::Zenject::DiContainer::GetProvidersForContract)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x6e76558;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "GetProvidersForContract",
                                                                                              {},
                                                                                              { ::i2c::type_of<::Zenject::BindingId>(), ::i2c::type_of<::Zenject::InjectSources>(),
                                                                                                ::i2c::type_of<::System::Collections::Generic::List_1<::Zenject::DiContainer_ProviderInfo*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.ResolveAll
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IList* (::Zenject::DiContainer::*)(::Zenject::InjectContext*)>(&::Zenject::DiContainer::ResolveAll)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x6e760a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "ResolveAll", {}, { ::i2c::type_of<::Zenject::InjectContext*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.ResolveAll
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::DiContainer::*)(::Zenject::InjectContext*, ::System::Collections::Generic::List_1<::System::Object*>*)>(
    &::Zenject::DiContainer::ResolveAll)> {
  constexpr static std::size_t size = 0x6f0;
  constexpr static std::size_t addrs = 0x6e76d7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(),
                                                { "ResolveAll", {}, { ::i2c::type_of<::Zenject::InjectContext*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::Object*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.CheckForInstallWarning
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::DiContainer::*)(::Zenject::InjectContext*)>(&::Zenject::DiContainer::CheckForInstallWarning)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6e7746c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "CheckForInstallWarning", {}, { ::i2c::type_of<::Zenject::InjectContext*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.ResolveType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::Zenject::DiContainer::*)(::System::Type*)>(&::Zenject::DiContainer::ResolveType)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x6e77494;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "ResolveType", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.ResolveType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::Zenject::DiContainer::*)(::Zenject::InjectContext*)>(&::Zenject::DiContainer::ResolveType)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x6e775f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "ResolveType", {}, { ::i2c::type_of<::Zenject::InjectContext*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.ResolveTypeAll
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::System::Type*>* (::Zenject::DiContainer::*)(::System::Type*)>(
    &::Zenject::DiContainer::ResolveTypeAll)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e77864;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "ResolveTypeAll", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.ResolveTypeAll
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::System::Type*>* (::Zenject::DiContainer::*)(::System::Type*, ::System::Object*)>(
    &::Zenject::DiContainer::ResolveTypeAll)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x6e7786c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "ResolveTypeAll", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.ResolveTypeAll
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::System::Type*>* (::Zenject::DiContainer::*)(::Zenject::InjectContext*)>(
    &::Zenject::DiContainer::ResolveTypeAll)> {
  constexpr static std::size_t size = 0x37c;
  constexpr static std::size_t addrs = 0x6e779e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "ResolveTypeAll", {}, { ::i2c::type_of<::Zenject::InjectContext*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.Resolve
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Zenject::DiContainer::*)(::Zenject::BindingId)>(&::Zenject::DiContainer::Resolve)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x6e77d64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "Resolve", {}, { ::i2c::type_of<::Zenject::BindingId>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.Resolve
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Zenject::DiContainer::*)(::Zenject::InjectContext*)>(&::Zenject::DiContainer::Resolve)> {
  constexpr static std::size_t size = 0xbb8;
  constexpr static std::size_t addrs = 0x6e77ee0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "Resolve", {}, { ::i2c::type_of<::Zenject::InjectContext*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.SafeGetInstances
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::DiContainer::*)(::Zenject::DiContainer_ProviderInfo*, ::Zenject::InjectContext*,
                                                                                        ::System::Collections::Generic::List_1<::System::Object*>*)>(&::Zenject::DiContainer::SafeGetInstances)> {
  constexpr static std::size_t size = 0x3d4;
  constexpr static std::size_t addrs = 0x6e759c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "SafeGetInstances",
                                                                                              {},
                                                                                              { ::i2c::type_of<::Zenject::DiContainer_ProviderInfo*>(), ::i2c::type_of<::Zenject::InjectContext*>(),
                                                                                                ::i2c::type_of<::System::Collections::Generic::List_1<::System::Object*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.GetDecoratedInstances
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::DiContainer::*)(::Zenject::IProvider*, ::Zenject::InjectContext*, ::System::Collections::Generic::List_1<::System::Object*>*)>(
    &::Zenject::DiContainer::GetDecoratedInstances)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x6e78a98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "GetDecoratedInstances",
                                                                                                           {},
                                                                                                           { ::i2c::type_of<::Zenject::IProvider*>(), ::i2c::type_of<::Zenject::InjectContext*>(),
                                                                                                             ::i2c::type_of<::System::Collections::Generic::List_1<::System::Object*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.TryGetDecoratorProvider
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::Internal::IDecoratorProvider* (::Zenject::DiContainer::*)(::System::Type*)>(&::Zenject::DiContainer::TryGetDecoratorProvider)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x6e78bc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "TryGetDecoratorProvider", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.GetContainerHeirarchyDistance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Zenject::DiContainer::*)(::Zenject::DiContainer*)>(&::Zenject::DiContainer::GetContainerHeirarchyDistance)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6e76bd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "GetContainerHeirarchyDistance", {}, { ::i2c::type_of<::Zenject::DiContainer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.GetContainerHeirarchyDistance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<int32_t> (::Zenject::DiContainer::*)(::Zenject::DiContainer*, int32_t)>(
    &::Zenject::DiContainer::GetContainerHeirarchyDistance)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x6e78ca0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "GetContainerHeirarchyDistance", {}, { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.GetDependencyContracts
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::System::Type*>* (::Zenject::DiContainer::*)(::System::Type*)>(
    &::Zenject::DiContainer::GetDependencyContracts)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6e78de0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "GetDependencyContracts", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.InstantiateInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Zenject::DiContainer::*)(::System::Type*, bool, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*,
                                                                                                     ::Zenject::InjectContext*, ::System::Object*)>(&::Zenject::DiContainer::InstantiateInternal)> {
  constexpr static std::size_t size = 0xb18;
  constexpr static std::size_t addrs = 0x6e78e5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "InstantiateInternal",
                                                                                                           {},
                                                                                                           { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>(),
                                                                                                             ::i2c::type_of<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>(),
                                                                                                             ::i2c::type_of<::Zenject::InjectContext*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.InjectExplicit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::DiContainer::*)(::System::Object*, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*)>(
    &::Zenject::DiContainer::InjectExplicit)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x6e79b20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(),
                                         { "InjectExplicit", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.InjectExplicit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::DiContainer::*)(::System::Object*, ::System::Type*, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*,
                                                                                        ::Zenject::InjectContext*, ::System::Object*)>(&::Zenject::DiContainer::InjectExplicit)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x6e79974;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "InjectExplicit",
                                                                                                           {},
                                                                                                           { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Type*>(),
                                                                                                             ::i2c::type_of<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>(),
                                                                                                             ::i2c::type_of<::Zenject::InjectContext*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.CallInjectMethodsTopDown
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::DiContainer::*)(
    ::System::Object*, ::System::Type*, ::Zenject::InjectTypeInfo*, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*, ::Zenject::InjectContext*, ::System::Object*, bool)>(
    &::Zenject::DiContainer::CallInjectMethodsTopDown)> {
  constexpr static std::size_t size = 0x570;
  constexpr static std::size_t addrs = 0x6e7a0bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "CallInjectMethodsTopDown",
                                                                          {},
                                                                          { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::Zenject::InjectTypeInfo*>(),
                                                                            ::i2c::type_of<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>(),
                                                                            ::i2c::type_of<::Zenject::InjectContext*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.InjectMembersTopDown
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::DiContainer::*)(
    ::System::Object*, ::System::Type*, ::Zenject::InjectTypeInfo*, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*, ::Zenject::InjectContext*, ::System::Object*, bool)>(
    &::Zenject::DiContainer::InjectMembersTopDown)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0x6e7a62c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "InjectMembersTopDown",
                                                                          {},
                                                                          { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::Zenject::InjectTypeInfo*>(),
                                                                            ::i2c::type_of<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>(),
                                                                            ::i2c::type_of<::Zenject::InjectContext*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.InjectExplicitInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::DiContainer::*)(::System::Object*, ::System::Type*, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*,
                                                                                        ::Zenject::InjectContext*, ::System::Object*)>(&::Zenject::DiContainer::InjectExplicitInternal)> {
  constexpr static std::size_t size = 0x4b4;
  constexpr static std::size_t addrs = 0x6e79c08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "InjectExplicitInternal",
                                                                                                           {},
                                                                                                           { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Type*>(),
                                                                                                             ::i2c::type_of<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>(),
                                                                                                             ::i2c::type_of<::Zenject::InjectContext*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.CreateAndParentPrefabResource
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::Zenject::DiContainer::*)(::StringW, ::Zenject::GameObjectCreationParameters*, ::Zenject::InjectContext*,
                                                                                                                       ::by_ref<bool>)>(&::Zenject::DiContainer::CreateAndParentPrefabResource)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x6e7a8e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "CreateAndParentPrefabResource",
                                                                                                           {},
                                                                                                           { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Zenject::GameObjectCreationParameters*>(),
                                                                                                             ::i2c::type_of<::Zenject::InjectContext*>(), ::i2c::type_of<::by_ref<bool>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.GetPrefabAsGameObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::Zenject::DiContainer::*)(::UnityEngine::Object*)>(&::Zenject::DiContainer::GetPrefabAsGameObject)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x6e7ae00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "GetPrefabAsGameObject", {}, { ::i2c::type_of<::UnityEngine::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.CreateAndParentPrefab
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::Zenject::DiContainer::*)(
    ::UnityEngine::Object*, ::Zenject::GameObjectCreationParameters*, ::Zenject::InjectContext*, ::by_ref<bool>)>(&::Zenject::DiContainer::CreateAndParentPrefab)> {
  constexpr static std::size_t size = 0x3e0;
  constexpr static std::size_t addrs = 0x6e7aa20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "CreateAndParentPrefab",
                                                                                              {},
                                                                                              { ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::Zenject::GameObjectCreationParameters*>(),
                                                                                                ::i2c::type_of<::Zenject::InjectContext*>(), ::i2c::type_of<::by_ref<bool>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.CreateEmptyGameObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::Zenject::DiContainer::*)(::StringW)>(&::Zenject::DiContainer::CreateEmptyGameObject)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6e7b448;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "CreateEmptyGameObject", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.CreateEmptyGameObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::Zenject::DiContainer::*)(::Zenject::GameObjectCreationParameters*, ::Zenject::InjectContext*)>(
    &::Zenject::DiContainer::CreateEmptyGameObject)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x6e7b4b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(),
                                                { "CreateEmptyGameObject", {}, { ::i2c::type_of<::Zenject::GameObjectCreationParameters*>(), ::i2c::type_of<::Zenject::InjectContext*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.GetTransformGroup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::Zenject::DiContainer::*)(::Zenject::GameObjectCreationParameters*, ::Zenject::InjectContext*)>(
    &::Zenject::DiContainer::GetTransformGroup)> {
  constexpr static std::size_t size = 0x524;
  constexpr static std::size_t addrs = 0x6e7af24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(),
                                                { "GetTransformGroup", {}, { ::i2c::type_of<::Zenject::GameObjectCreationParameters*>(), ::i2c::type_of<::Zenject::InjectContext*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.CreateTransformGroup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::Zenject::DiContainer::*)(::StringW)>(&::Zenject::DiContainer::CreateTransformGroup)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x6e7b654;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "CreateTransformGroup", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.Instantiate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Zenject::DiContainer::*)(::System::Type*)>(&::Zenject::DiContainer::Instantiate)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6e6a5c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "Instantiate", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.Instantiate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Zenject::DiContainer::*)(::System::Type*, ::System::Collections::Generic::IEnumerable_1<::System::Object*>*)>(
    &::Zenject::DiContainer::Instantiate)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6e7b718;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(),
                                                { "Instantiate", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.InstantiateComponent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Component> (::Zenject::DiContainer::*)(::System::Type*, ::UnityEngine::GameObject*)>(
    &::Zenject::DiContainer::InstantiateComponent)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6e7b848;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "InstantiateComponent", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::UnityEngine::GameObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.InstantiateComponent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Component> (::Zenject::DiContainer::*)(
    ::System::Type*, ::UnityEngine::GameObject*, ::System::Collections::Generic::IEnumerable_1<::System::Object*>*)>(&::Zenject::DiContainer::InstantiateComponent)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6e7b8bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "InstantiateComponent",
                                                                                                           {},
                                                                                                           { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::UnityEngine::GameObject*>(),
                                                                                                             ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.InstantiatePrefab
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::Zenject::DiContainer::*)(::UnityEngine::Object*)>(&::Zenject::DiContainer::InstantiatePrefab)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6e7b9c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "InstantiatePrefab", {}, { ::i2c::type_of<::UnityEngine::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.InstantiatePrefab
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::Zenject::DiContainer::*)(::UnityEngine::Object*, ::UnityEngine::Transform*)>(
    &::Zenject::DiContainer::InstantiatePrefab)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6e7baf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "InstantiatePrefab", {}, { ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::UnityEngine::Transform*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.InstantiatePrefab
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::Zenject::DiContainer::*)(::UnityEngine::Object*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion,
                                                                                                                       ::UnityEngine::Transform*)>(&::Zenject::DiContainer::InstantiatePrefab)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x6e7bb64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "InstantiatePrefab",
                                                                                              {},
                                                                                              { ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                                                ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Transform*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.InstantiatePrefab
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::Zenject::DiContainer::*)(::UnityEngine::Object*, ::Zenject::GameObjectCreationParameters*)>(
    &::Zenject::DiContainer::InstantiatePrefab)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6e7ba74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(),
                                                             { "InstantiatePrefab", {}, { ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::Zenject::GameObjectCreationParameters*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.InstantiatePrefabResource
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::Zenject::DiContainer::*)(::StringW)>(&::Zenject::DiContainer::InstantiatePrefabResource)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6e7be18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "InstantiatePrefabResource", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.InstantiatePrefabResource
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::Zenject::DiContainer::*)(::StringW, ::UnityEngine::Transform*)>(
    &::Zenject::DiContainer::InstantiatePrefabResource)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6e7bfec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "InstantiatePrefabResource", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Transform*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.InstantiatePrefabResource
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::Zenject::DiContainer::*)(
    ::StringW, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Transform*)>(&::Zenject::DiContainer::InstantiatePrefabResource)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x6e7c060;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "InstantiatePrefabResource",
                                                                                              {},
                                                                                              { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                                                ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Transform*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.InstantiatePrefabResource
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::Zenject::DiContainer::*)(::StringW, ::Zenject::GameObjectCreationParameters*)>(
    &::Zenject::DiContainer::InstantiatePrefabResource)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x6e7bec4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(),
                                                             { "InstantiatePrefabResource", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Zenject::GameObjectCreationParameters*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.InstantiatePrefabForComponent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Object* (::Zenject::DiContainer::*)(::System::Type*, ::UnityEngine::Object*, ::UnityEngine::Transform*, ::System::Collections::Generic::IEnumerable_1<::System::Object*>*)>(
        &::Zenject::DiContainer::InstantiatePrefabForComponent)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6e7c160;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "InstantiatePrefabForComponent",
                                                                          {},
                                                                          { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::UnityEngine::Transform*>(),
                                                                            ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.InstantiatePrefabForComponent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (
    ::Zenject::DiContainer::*)(::System::Type*, ::UnityEngine::Object*, ::System::Collections::Generic::IEnumerable_1<::System::Object*>*, ::Zenject::GameObjectCreationParameters*)>(
    &::Zenject::DiContainer::InstantiatePrefabForComponent)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x6e7c1f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "InstantiatePrefabForComponent",
                                                                                                           {},
                                                                                                           { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::UnityEngine::Object*>(),
                                                                                                             ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>(),
                                                                                                             ::i2c::type_of<::Zenject::GameObjectCreationParameters*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.InstantiatePrefabResourceForComponent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Object* (::Zenject::DiContainer::*)(::System::Type*, ::StringW, ::UnityEngine::Transform*, ::System::Collections::Generic::IEnumerable_1<::System::Object*>*)>(
        &::Zenject::DiContainer::InstantiatePrefabResourceForComponent)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x6e7c2dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "InstantiatePrefabResourceForComponent",
                                                                                       {},
                                                                                       { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Transform*>(),
                                                                                         ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.InstantiateScriptableObjectResource
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Zenject::DiContainer::*)(::System::Type*, ::StringW)>(&::Zenject::DiContainer::InstantiateScriptableObjectResource)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6e7c46c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "InstantiateScriptableObjectResource", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.InstantiateScriptableObjectResource
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Zenject::DiContainer::*)(::System::Type*, ::StringW, ::System::Collections::Generic::IEnumerable_1<::System::Object*>*)>(
    &::Zenject::DiContainer::InstantiateScriptableObjectResource)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6e7c4dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "InstantiateScriptableObjectResource",
                                                                                                           {},
                                                                                                           { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>(),
                                                                                                             ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.InjectGameObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::DiContainer::*)(::UnityEngine::GameObject*)>(&::Zenject::DiContainer::InjectGameObject)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x6e7bc64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "InjectGameObject", {}, { ::i2c::type_of<::UnityEngine::GameObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.InjectGameObjectForComponent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Object* (::Zenject::DiContainer::*)(::UnityEngine::GameObject*, ::System::Type*, ::System::Collections::Generic::IEnumerable_1<::System::Object*>*)>(
        &::Zenject::DiContainer::InjectGameObjectForComponent)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6e7c6ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "InjectGameObjectForComponent",
                                                                                                           {},
                                                                                                           { ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::System::Type*>(),
                                                                                                             ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.InjectGameObjectForComponentExplicit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Component> (::Zenject::DiContainer::*)(
    ::UnityEngine::GameObject*, ::System::Type*, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*, ::Zenject::InjectContext*, ::System::Object*)>(
    &::Zenject::DiContainer::InjectGameObjectForComponentExplicit)> {
  constexpr static std::size_t size = 0x3d4;
  constexpr static std::size_t addrs = 0x6e7c750;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "InjectGameObjectForComponentExplicit",
                                                                                                           {},
                                                                                                           { ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::System::Type*>(),
                                                                                                             ::i2c::type_of<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>(),
                                                                                                             ::i2c::type_of<::Zenject::InjectContext*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.Inject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::DiContainer::*)(::System::Object*)>(&::Zenject::DiContainer::Inject)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6e6a62c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "Inject", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.Inject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::DiContainer::*)(::System::Object*, ::System::Collections::Generic::IEnumerable_1<::System::Object*>*)>(
    &::Zenject::DiContainer::Inject)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6e7cb24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(),
                                                { "Inject", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.Resolve
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Zenject::DiContainer::*)(::System::Type*)>(&::Zenject::DiContainer::Resolve)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e7cb54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "Resolve", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.ResolveId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Zenject::DiContainer::*)(::System::Type*, ::System::Object*)>(&::Zenject::DiContainer::ResolveId)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x6e7cb5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "ResolveId", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.TryResolve
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Zenject::DiContainer::*)(::System::Type*)>(&::Zenject::DiContainer::TryResolve)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e7ccd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "TryResolve", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.TryResolveId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Zenject::DiContainer::*)(::System::Type*, ::System::Object*)>(&::Zenject::DiContainer::TryResolveId)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x6e7cce0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "TryResolveId", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.ResolveAll
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IList* (::Zenject::DiContainer::*)(::System::Type*)>(&::Zenject::DiContainer::ResolveAll)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e7ce64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "ResolveAll", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.ResolveIdAll
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IList* (::Zenject::DiContainer::*)(::System::Type*, ::System::Object*)>(&::Zenject::DiContainer::ResolveIdAll)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x6e7ce6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "ResolveIdAll", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.UnbindAll
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::DiContainer::*)()>(&::Zenject::DiContainer::UnbindAll)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6e7cff0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "UnbindAll", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.Unbind
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Zenject::DiContainer::*)(::System::Type*)>(&::Zenject::DiContainer::Unbind)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e7d04c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "Unbind", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.UnbindId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Zenject::DiContainer::*)(::System::Type*, ::System::Object*)>(&::Zenject::DiContainer::UnbindId)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x6e7d054;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "UnbindId", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.UnbindInterfacesTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::DiContainer::*)(::System::Type*)>(&::Zenject::DiContainer::UnbindInterfacesTo)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6e7d0dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "UnbindInterfacesTo", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.Unbind
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Zenject::DiContainer::*)(::System::Type*, ::System::Type*)>(&::Zenject::DiContainer::Unbind)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e7d19c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "Unbind", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.UnbindId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Zenject::DiContainer::*)(::System::Type*, ::System::Type*, ::System::Object*)>(&::Zenject::DiContainer::UnbindId)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x6e7d1a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(),
                                                             { "UnbindId", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.HasBinding
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Zenject::DiContainer::*)(::System::Type*)>(&::Zenject::DiContainer::HasBinding)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6e7d41c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "HasBinding", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.HasBindingId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Zenject::DiContainer::*)(::System::Type*, ::System::Object*)>(&::Zenject::DiContainer::HasBindingId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e62f74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "HasBindingId", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.HasBindingId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Zenject::DiContainer::*)(::System::Type*, ::System::Object*, ::Zenject::InjectSources)>(&::Zenject::DiContainer::HasBindingId)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x6e7d428;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(),
                                                { "HasBindingId", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Zenject::InjectSources>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.HasBinding
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Zenject::DiContainer::*)(::Zenject::InjectContext*)>(&::Zenject::DiContainer::HasBinding)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x6e7d5b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "HasBinding", {}, { ::i2c::type_of<::Zenject::InjectContext*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.FlushBindings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::DiContainer::*)()>(&::Zenject::DiContainer::FlushBindings)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x6e740b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "FlushBindings", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.FinalizeBinding
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::DiContainer::*)(::Zenject::BindStatement*)>(&::Zenject::DiContainer::FinalizeBinding)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6e744fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "FinalizeBinding", {}, { ::i2c::type_of<::Zenject::BindStatement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.StartBinding
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::BindStatement* (::Zenject::DiContainer::*)(bool)>(&::Zenject::DiContainer::StartBinding)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x6e7d72c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "StartBinding", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.Rebind
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::ConcreteBinderNonGeneric* (::Zenject::DiContainer::*)(::System::Type*)>(&::Zenject::DiContainer::Rebind)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e7d80c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "Rebind", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.RebindId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::ConcreteBinderNonGeneric* (::Zenject::DiContainer::*)(::System::Type*, ::System::Object*)>(&::Zenject::DiContainer::RebindId)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6e7d814;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "RebindId", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.Bind
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::ConcreteIdBinderNonGeneric* (::Zenject::DiContainer::*)(::ArrayW<::System::Type*>)>(&::Zenject::DiContainer::Bind)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6e6b260;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "Bind", {}, { ::i2c::type_of<::ArrayW<::System::Type*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.Bind
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::ConcreteIdBinderNonGeneric* (::Zenject::DiContainer::*)(::System::Collections::Generic::IEnumerable_1<::System::Type*>*)>(
    &::Zenject::DiContainer::Bind)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6e7da50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "Bind", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Type*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.BindInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::ConcreteIdBinderNonGeneric* (::Zenject::DiContainer::*)(::Zenject::BindInfo*, ::Zenject::BindStatement*)>(
    &::Zenject::DiContainer::BindInternal)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x6e7d8e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "BindInternal", {}, { ::i2c::type_of<::Zenject::BindInfo*>(), ::i2c::type_of<::Zenject::BindStatement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.Bind
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::ConcreteIdBinderNonGeneric* (::Zenject::DiContainer::*)(::System::Action_1<::Zenject::ConventionSelectTypesBinder*>*)>(
    &::Zenject::DiContainer::Bind)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x6e7daf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "Bind", {}, { ::i2c::type_of<::System::Action_1<::Zenject::ConventionSelectTypesBinder*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.BindInterfacesTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::FromBinderNonGeneric* (::Zenject::DiContainer::*)(::System::Type*)>(&::Zenject::DiContainer::BindInterfacesTo)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x6e7dd24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "BindInterfacesTo", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.BindInterfacesAndSelfTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::FromBinderNonGeneric* (::Zenject::DiContainer::*)(::System::Type*)>(&::Zenject::DiContainer::BindInterfacesAndSelfTo)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x6e7defc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "BindInterfacesAndSelfTo", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.BindInstances
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::DiContainer::*)(::ArrayW<::System::Object*>)>(&::Zenject::DiContainer::BindInstances)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x6e7e0b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "BindInstances", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.InstantiateExplicit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Zenject::DiContainer::*)(::System::Type*, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*)>(
    &::Zenject::DiContainer::InstantiateExplicit)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x6e7b7c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(),
                                         { "InstantiateExplicit", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.InstantiateExplicit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Zenject::DiContainer::*)(::System::Type*, bool, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*,
                                                                                                     ::Zenject::InjectContext*, ::System::Object*)>(&::Zenject::DiContainer::InstantiateExplicit)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x6e7e218;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "InstantiateExplicit",
                                                                                                           {},
                                                                                                           { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>(),
                                                                                                             ::i2c::type_of<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>(),
                                                                                                             ::i2c::type_of<::Zenject::InjectContext*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.InstantiateComponentExplicit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Component> (::Zenject::DiContainer::*)(
    ::System::Type*, ::UnityEngine::GameObject*, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*)>(&::Zenject::DiContainer::InstantiateComponentExplicit)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x6e7b8f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "InstantiateComponentExplicit",
                                                                                                           {},
                                                                                                           { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::UnityEngine::GameObject*>(),
                                                                                                             ::i2c::type_of<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.InstantiateScriptableObjectResourceExplicit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Zenject::DiContainer::*)(::System::Type*, ::StringW, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*)>(
    &::Zenject::DiContainer::InstantiateScriptableObjectResourceExplicit)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x6e7c560;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "InstantiateScriptableObjectResourceExplicit",
                                                                                                           {},
                                                                                                           { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>(),
                                                                                                             ::i2c::type_of<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.InstantiatePrefabResourceForComponentExplicit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Object* (::Zenject::DiContainer::*)(::System::Type*, ::StringW, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*, ::Zenject::GameObjectCreationParameters*)>(
        &::Zenject::DiContainer::InstantiatePrefabResourceForComponentExplicit)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6e7c3d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "InstantiatePrefabResourceForComponentExplicit",
                                                                                                           {},
                                                                                                           { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>(),
                                                                                                             ::i2c::type_of<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>(),
                                                                                                             ::i2c::type_of<::Zenject::GameObjectCreationParameters*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.InstantiatePrefabResourceForComponentExplicit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Zenject::DiContainer::*)(::System::Type*, ::StringW, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*,
                                                                                                     ::Zenject::InjectContext*, ::System::Object*, ::Zenject::GameObjectCreationParameters*)>(
    &::Zenject::DiContainer::InstantiatePrefabResourceForComponentExplicit)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x6e7e314;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(),
                                                { "InstantiatePrefabResourceForComponentExplicit",
                                                  {},
                                                  { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>(),
                                                    ::i2c::type_of<::Zenject::InjectContext*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Zenject::GameObjectCreationParameters*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.InstantiatePrefabForComponentExplicit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Object* (::Zenject::DiContainer::*)(::System::Type*, ::UnityEngine::Object*, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*)>(
        &::Zenject::DiContainer::InstantiatePrefabForComponentExplicit)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x6e7e614;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "InstantiatePrefabForComponentExplicit",
                                                                                                           {},
                                                                                                           { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::UnityEngine::Object*>(),
                                                                                                             ::i2c::type_of<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.InstantiatePrefabForComponentExplicit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (
    ::Zenject::DiContainer::*)(::System::Type*, ::UnityEngine::Object*, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*, ::Zenject::GameObjectCreationParameters*)>(
    &::Zenject::DiContainer::InstantiatePrefabForComponentExplicit)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6e7c240;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "InstantiatePrefabForComponentExplicit",
                                                                                                           {},
                                                                                                           { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::UnityEngine::Object*>(),
                                                                                                             ::i2c::type_of<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>(),
                                                                                                             ::i2c::type_of<::Zenject::GameObjectCreationParameters*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.InstantiatePrefabForComponentExplicit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Object* (::Zenject::DiContainer::*)(::System::Type*, ::UnityEngine::Object*, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*, ::Zenject::InjectContext*,
                                                              ::System::Object*, ::Zenject::GameObjectCreationParameters*)>(&::Zenject::DiContainer::InstantiatePrefabForComponentExplicit)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x6e7e46c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(),
                            { "InstantiatePrefabForComponentExplicit",
                              {},
                              { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>(),
                                ::i2c::type_of<::Zenject::InjectContext*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Zenject::GameObjectCreationParameters*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.BindExecutionOrder
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::DiContainer::*)(::System::Type*, int32_t)>(&::Zenject::DiContainer::BindExecutionOrder)> {
  constexpr static std::size_t size = 0x38c;
  constexpr static std::size_t addrs = 0x6e7e6d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "BindExecutionOrder", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.BindTickableExecutionOrder
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::CopyNonLazyBinder* (::Zenject::DiContainer::*)(::System::Type*, int32_t)>(&::Zenject::DiContainer::BindTickableExecutionOrder)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x6e7ea64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "BindTickableExecutionOrder", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.BindInitializableExecutionOrder
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::CopyNonLazyBinder* (::Zenject::DiContainer::*)(::System::Type*, int32_t)>(&::Zenject::DiContainer::BindInitializableExecutionOrder)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x6e7eb8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "BindInitializableExecutionOrder", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.BindDisposableExecutionOrder
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::CopyNonLazyBinder* (::Zenject::DiContainer::*)(::System::Type*, int32_t)>(&::Zenject::DiContainer::BindDisposableExecutionOrder)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x6e7ecb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "BindDisposableExecutionOrder", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.BindLateDisposableExecutionOrder
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::CopyNonLazyBinder* (::Zenject::DiContainer::*)(::System::Type*, int32_t)>(
    &::Zenject::DiContainer::BindLateDisposableExecutionOrder)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x6e7eddc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "BindLateDisposableExecutionOrder", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.BindFixedTickableExecutionOrder
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::CopyNonLazyBinder* (::Zenject::DiContainer::*)(::System::Type*, int32_t)>(&::Zenject::DiContainer::BindFixedTickableExecutionOrder)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x6e7ef2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "BindFixedTickableExecutionOrder", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.BindLateTickableExecutionOrder
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::CopyNonLazyBinder* (::Zenject::DiContainer::*)(::System::Type*, int32_t)>(&::Zenject::DiContainer::BindLateTickableExecutionOrder)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x6e7f0b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "BindLateTickableExecutionOrder", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.BindPoolableExecutionOrder
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::CopyNonLazyBinder* (::Zenject::DiContainer::*)(::System::Type*, int32_t)>(&::Zenject::DiContainer::BindPoolableExecutionOrder)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x6e7f244;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "BindPoolableExecutionOrder", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*, ::Zenject::Internal::IDecoratorProvider*>*& Zenject::DiContainer::__cordl_internal_get__decorators() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____decorators;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*, ::Zenject::Internal::IDecoratorProvider*>* const& Zenject::DiContainer::__cordl_internal_get__decorators() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____decorators;
}
constexpr void Zenject::DiContainer::__cordl_internal_set__decorators(::System::Collections::Generic::Dictionary_2<::System::Type*, ::Zenject::Internal::IDecoratorProvider*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____decorators = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::Zenject::BindingId, ::System::Collections::Generic::List_1<::Zenject::DiContainer_ProviderInfo*>*>*&
Zenject::DiContainer::__cordl_internal_get__providers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____providers;
}
constexpr ::System::Collections::Generic::Dictionary_2<::Zenject::BindingId, ::System::Collections::Generic::List_1<::Zenject::DiContainer_ProviderInfo*>*>* const&
Zenject::DiContainer::__cordl_internal_get__providers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____providers;
}
constexpr void Zenject::DiContainer::__cordl_internal_set__providers(
    ::System::Collections::Generic::Dictionary_2<::Zenject::BindingId, ::System::Collections::Generic::List_1<::Zenject::DiContainer_ProviderInfo*>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____providers = value;
}
constexpr ::ArrayW<::ArrayW<::Zenject::DiContainer*>>& Zenject::DiContainer::__cordl_internal_get__containerLookups() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____containerLookups;
}
constexpr ::ArrayW<::ArrayW<::Zenject::DiContainer*>> const& Zenject::DiContainer::__cordl_internal_get__containerLookups() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____containerLookups;
}
constexpr void Zenject::DiContainer::__cordl_internal_set__containerLookups(::ArrayW<::ArrayW<::Zenject::DiContainer*>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____containerLookups = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::Zenject::Internal::LookupId*>*& Zenject::DiContainer::__cordl_internal_get__resolvesInProgress() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____resolvesInProgress;
}
constexpr ::System::Collections::Generic::HashSet_1<::Zenject::Internal::LookupId*>* const& Zenject::DiContainer::__cordl_internal_get__resolvesInProgress() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____resolvesInProgress;
}
constexpr void Zenject::DiContainer::__cordl_internal_set__resolvesInProgress(::System::Collections::Generic::HashSet_1<::Zenject::Internal::LookupId*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____resolvesInProgress = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::Zenject::Internal::LookupId*>*& Zenject::DiContainer::__cordl_internal_get__resolvesTwiceInProgress() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____resolvesTwiceInProgress;
}
constexpr ::System::Collections::Generic::HashSet_1<::Zenject::Internal::LookupId*>* const& Zenject::DiContainer::__cordl_internal_get__resolvesTwiceInProgress() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____resolvesTwiceInProgress;
}
constexpr void Zenject::DiContainer::__cordl_internal_set__resolvesTwiceInProgress(::System::Collections::Generic::HashSet_1<::Zenject::Internal::LookupId*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____resolvesTwiceInProgress = value;
}
constexpr ::Zenject::LazyInstanceInjector*& Zenject::DiContainer::__cordl_internal_get__lazyInjector() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lazyInjector;
}
constexpr ::Zenject::LazyInstanceInjector* const& Zenject::DiContainer::__cordl_internal_get__lazyInjector() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lazyInjector;
}
constexpr void Zenject::DiContainer::__cordl_internal_set__lazyInjector(::Zenject::LazyInstanceInjector* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lazyInjector = value;
}
constexpr ::Zenject::Internal::SingletonMarkRegistry*& Zenject::DiContainer::__cordl_internal_get__singletonMarkRegistry() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____singletonMarkRegistry;
}
constexpr ::Zenject::Internal::SingletonMarkRegistry* const& Zenject::DiContainer::__cordl_internal_get__singletonMarkRegistry() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____singletonMarkRegistry;
}
constexpr void Zenject::DiContainer::__cordl_internal_set__singletonMarkRegistry(::Zenject::Internal::SingletonMarkRegistry* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____singletonMarkRegistry = value;
}
constexpr ::System::Collections::Generic::Queue_1<::Zenject::BindStatement*>*& Zenject::DiContainer::__cordl_internal_get__currentBindings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentBindings;
}
constexpr ::System::Collections::Generic::Queue_1<::Zenject::BindStatement*>* const& Zenject::DiContainer::__cordl_internal_get__currentBindings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentBindings;
}
constexpr void Zenject::DiContainer::__cordl_internal_set__currentBindings(::System::Collections::Generic::Queue_1<::Zenject::BindStatement*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____currentBindings = value;
}
constexpr ::System::Collections::Generic::List_1<::Zenject::BindStatement*>*& Zenject::DiContainer::__cordl_internal_get__childBindings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____childBindings;
}
constexpr ::System::Collections::Generic::List_1<::Zenject::BindStatement*>* const& Zenject::DiContainer::__cordl_internal_get__childBindings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____childBindings;
}
constexpr void Zenject::DiContainer::__cordl_internal_set__childBindings(::System::Collections::Generic::List_1<::Zenject::BindStatement*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____childBindings = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::System::Type*>*& Zenject::DiContainer::__cordl_internal_get__validatedTypes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____validatedTypes;
}
constexpr ::System::Collections::Generic::HashSet_1<::System::Type*>* const& Zenject::DiContainer::__cordl_internal_get__validatedTypes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____validatedTypes;
}
constexpr void Zenject::DiContainer::__cordl_internal_set__validatedTypes(::System::Collections::Generic::HashSet_1<::System::Type*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____validatedTypes = value;
}
constexpr ::System::Collections::Generic::List_1<::Zenject::IValidatable*>*& Zenject::DiContainer::__cordl_internal_get__validationQueue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____validationQueue;
}
constexpr ::System::Collections::Generic::List_1<::Zenject::IValidatable*>* const& Zenject::DiContainer::__cordl_internal_get__validationQueue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____validationQueue;
}
constexpr void Zenject::DiContainer::__cordl_internal_set__validationQueue(::System::Collections::Generic::List_1<::Zenject::IValidatable*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____validationQueue = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Zenject::DiContainer::__cordl_internal_get__contextTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____contextTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Zenject::DiContainer::__cordl_internal_get__contextTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____contextTransform;
}
constexpr void Zenject::DiContainer::__cordl_internal_set__contextTransform(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____contextTransform = value;
}
constexpr bool& Zenject::DiContainer::__cordl_internal_get__hasLookedUpContextTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasLookedUpContextTransform;
}
constexpr bool const& Zenject::DiContainer::__cordl_internal_get__hasLookedUpContextTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasLookedUpContextTransform;
}
constexpr void Zenject::DiContainer::__cordl_internal_set__hasLookedUpContextTransform(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hasLookedUpContextTransform = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Zenject::DiContainer::__cordl_internal_get__inheritedDefaultParent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inheritedDefaultParent;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Zenject::DiContainer::__cordl_internal_get__inheritedDefaultParent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inheritedDefaultParent;
}
constexpr void Zenject::DiContainer::__cordl_internal_set__inheritedDefaultParent(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____inheritedDefaultParent = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Zenject::DiContainer::__cordl_internal_get__explicitDefaultParent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____explicitDefaultParent;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Zenject::DiContainer::__cordl_internal_get__explicitDefaultParent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____explicitDefaultParent;
}
constexpr void Zenject::DiContainer::__cordl_internal_set__explicitDefaultParent(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____explicitDefaultParent = value;
}
constexpr bool& Zenject::DiContainer::__cordl_internal_get__hasExplicitDefaultParent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasExplicitDefaultParent;
}
constexpr bool const& Zenject::DiContainer::__cordl_internal_get__hasExplicitDefaultParent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasExplicitDefaultParent;
}
constexpr void Zenject::DiContainer::__cordl_internal_set__hasExplicitDefaultParent(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hasExplicitDefaultParent = value;
}
constexpr ::Zenject::ZenjectSettings*& Zenject::DiContainer::__cordl_internal_get__settings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settings;
}
constexpr ::Zenject::ZenjectSettings* const& Zenject::DiContainer::__cordl_internal_get__settings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settings;
}
constexpr void Zenject::DiContainer::__cordl_internal_set__settings(::Zenject::ZenjectSettings* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____settings = value;
}
constexpr bool& Zenject::DiContainer::__cordl_internal_get__hasResolvedRoots() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasResolvedRoots;
}
constexpr bool const& Zenject::DiContainer::__cordl_internal_get__hasResolvedRoots() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasResolvedRoots;
}
constexpr void Zenject::DiContainer::__cordl_internal_set__hasResolvedRoots(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hasResolvedRoots = value;
}
constexpr bool& Zenject::DiContainer::__cordl_internal_get__isFinalizingBinding() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isFinalizingBinding;
}
constexpr bool const& Zenject::DiContainer::__cordl_internal_get__isFinalizingBinding() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isFinalizingBinding;
}
constexpr void Zenject::DiContainer::__cordl_internal_set__isFinalizingBinding(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isFinalizingBinding = value;
}
constexpr bool& Zenject::DiContainer::__cordl_internal_get__isValidating() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isValidating;
}
constexpr bool const& Zenject::DiContainer::__cordl_internal_get__isValidating() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isValidating;
}
constexpr void Zenject::DiContainer::__cordl_internal_set__isValidating(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isValidating = value;
}
constexpr bool& Zenject::DiContainer::__cordl_internal_get__isInstalling() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isInstalling;
}
constexpr bool const& Zenject::DiContainer::__cordl_internal_get__isInstalling() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isInstalling;
}
constexpr void Zenject::DiContainer::__cordl_internal_set__isInstalling(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isInstalling = value;
}
constexpr bool& Zenject::DiContainer::__cordl_internal_get__AssertOnNewGameObjects_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____AssertOnNewGameObjects_k__BackingField;
}
constexpr bool const& Zenject::DiContainer::__cordl_internal_get__AssertOnNewGameObjects_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____AssertOnNewGameObjects_k__BackingField;
}
constexpr void Zenject::DiContainer::__cordl_internal_set__AssertOnNewGameObjects_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____AssertOnNewGameObjects_k__BackingField = value;
}
inline void Zenject::DiContainer::_ctor(::System::Collections::Generic::IEnumerable_1<::Zenject::DiContainer*>* parentContainersEnumerable, bool isValidating) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::Zenject::DiContainer*>*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parentContainersEnumerable, isValidating);
}
inline void Zenject::DiContainer::_ctor(bool isValidating) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isValidating);
}
inline void Zenject::DiContainer::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Zenject::DiContainer::_ctor(::Zenject::DiContainer* parentContainer, bool isValidating) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { ".ctor", {}, { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parentContainer, isValidating);
}
inline void Zenject::DiContainer::_ctor(::Zenject::DiContainer* parentContainer) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { ".ctor", {}, { ::i2c::type_of<::Zenject::DiContainer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parentContainer);
}
inline void Zenject::DiContainer::_ctor(::System::Collections::Generic::IEnumerable_1<::Zenject::DiContainer*>* parentContainers) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::Zenject::DiContainer*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parentContainers);
}
inline ::Zenject::ZenjectSettings* Zenject::DiContainer::get_Settings() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "get_Settings", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ZenjectSettings*>(this, ___internal_method);
}
inline void Zenject::DiContainer::set_Settings(::Zenject::ZenjectSettings* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "set_Settings", {}, { ::i2c::type_of<::Zenject::ZenjectSettings*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Zenject::Internal::SingletonMarkRegistry* Zenject::DiContainer::get_SingletonMarkRegistry() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "get_SingletonMarkRegistry", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::Internal::SingletonMarkRegistry*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::Zenject::IProvider*>* Zenject::DiContainer::get_AllProviders() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "get_AllProviders", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Zenject::IProvider*>*>(this, ___internal_method);
}
inline void Zenject::DiContainer::InstallDefaultBindings() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "InstallDefaultBindings", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Zenject::DiContainer::CreateLazyBinding(::Zenject::InjectContext* context) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "CreateLazyBinding", {}, { ::i2c::type_of<::Zenject::InjectContext*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, context);
}
inline void Zenject::DiContainer::QueueForValidate(::Zenject::IValidatable* validatable) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "QueueForValidate", {}, { ::i2c::type_of<::Zenject::IValidatable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, validatable);
}
inline bool Zenject::DiContainer::ShouldInheritBinding(::Zenject::BindStatement* binding, ::Zenject::DiContainer* ancestorContainer) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "ShouldInheritBinding", {}, { ::i2c::type_of<::Zenject::BindStatement*>(), ::i2c::type_of<::Zenject::DiContainer*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, binding, ancestorContainer);
}
inline ::UnityW<::UnityEngine::Transform> Zenject::DiContainer::get_ContextTransform() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "get_ContextTransform", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline bool Zenject::DiContainer::get_AssertOnNewGameObjects() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "get_AssertOnNewGameObjects", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Zenject::DiContainer::set_AssertOnNewGameObjects(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "set_AssertOnNewGameObjects", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Transform> Zenject::DiContainer::get_InheritedDefaultParent() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "get_InheritedDefaultParent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Transform> Zenject::DiContainer::get_DefaultParent() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "get_DefaultParent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline void Zenject::DiContainer::set_DefaultParent(::UnityEngine::Transform* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "set_DefaultParent", {}, { ::i2c::type_of<::UnityEngine::Transform*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<::Zenject::DiContainer*> Zenject::DiContainer::get_ParentContainers() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "get_ParentContainers", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::Zenject::DiContainer*>>(this, ___internal_method);
}
inline ::ArrayW<::Zenject::DiContainer*> Zenject::DiContainer::get_AncestorContainers() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "get_AncestorContainers", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::Zenject::DiContainer*>>(this, ___internal_method);
}
inline bool Zenject::DiContainer::get_ChecksForCircularDependencies() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "get_ChecksForCircularDependencies", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Zenject::DiContainer::get_IsValidating() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "get_IsValidating", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Zenject::DiContainer::get_IsInstalling() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "get_IsInstalling", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Zenject::DiContainer::set_IsInstalling(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "set_IsInstalling", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::IEnumerable_1<::Zenject::BindingId>* Zenject::DiContainer::get_AllContracts() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "get_AllContracts", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Zenject::BindingId>*>(this, ___internal_method);
}
inline void Zenject::DiContainer::ResolveRoots() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "ResolveRoots", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Zenject::DiContainer::ResolveDependencyRoots() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "ResolveDependencyRoots", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Zenject::DiContainer::ValidateFullResolve() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "ValidateFullResolve", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Zenject::DiContainer::FlushValidationQueue() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "FlushValidationQueue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Zenject::DiContainer* Zenject::DiContainer::CreateSubContainer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "CreateSubContainer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::DiContainer*>(this, ___internal_method);
}
inline void Zenject::DiContainer::QueueForInject(::System::Object* instance) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "QueueForInject", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, instance);
}
template <typename T> inline T Zenject::DiContainer::LazyInject(T instance) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "LazyInject", { ::i2c::class_of<T>() }, { ::i2c::type_of<T>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, instance);
}
inline ::Zenject::DiContainer* Zenject::DiContainer::CreateSubContainer(bool isValidating) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "CreateSubContainer", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::DiContainer*>(this, ___internal_method, isValidating);
}
inline void Zenject::DiContainer::RegisterProvider(::Zenject::BindingId bindingId, ::Zenject::BindingCondition* condition, ::Zenject::IProvider* provider, bool nonLazy) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Zenject::DiContainer*>(),
          { "RegisterProvider", {}, { ::i2c::type_of<::Zenject::BindingId>(), ::i2c::type_of<::Zenject::BindingCondition*>(), ::i2c::type_of<::Zenject::IProvider*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bindingId, condition, provider, nonLazy);
}
inline void Zenject::DiContainer::GetProviderMatches(::Zenject::InjectContext* context, ::System::Collections::Generic::List_1<::Zenject::DiContainer_ProviderInfo*>* buffer) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Zenject::DiContainer*>(),
          { "GetProviderMatches", {}, { ::i2c::type_of<::Zenject::InjectContext*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Zenject::DiContainer_ProviderInfo*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context, buffer);
}
inline ::Zenject::DiContainer_ProviderInfo* Zenject::DiContainer::TryGetUniqueProvider(::Zenject::InjectContext* context) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "TryGetUniqueProvider", {}, { ::i2c::type_of<::Zenject::InjectContext*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::DiContainer_ProviderInfo*>(this, ___internal_method, context);
}
inline ::System::Collections::Generic::List_1<::Zenject::DiContainer*>* Zenject::DiContainer::FlattenInheritanceChain() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "FlattenInheritanceChain", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Zenject::DiContainer*>*>(this, ___internal_method);
}
inline void Zenject::DiContainer::GetLocalProviders(::Zenject::BindingId bindingId, ::System::Collections::Generic::List_1<::Zenject::DiContainer_ProviderInfo*>* buffer) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(),
                          { "GetLocalProviders", {}, { ::i2c::type_of<::Zenject::BindingId>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Zenject::DiContainer_ProviderInfo*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bindingId, buffer);
}
inline void Zenject::DiContainer::GetProvidersForContract(::Zenject::BindingId bindingId, ::Zenject::InjectSources sourceType,
                                                          ::System::Collections::Generic::List_1<::Zenject::DiContainer_ProviderInfo*>* buffer) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "GetProvidersForContract",
                                                                                            {},
                                                                                            { ::i2c::type_of<::Zenject::BindingId>(), ::i2c::type_of<::Zenject::InjectSources>(),
                                                                                              ::i2c::type_of<::System::Collections::Generic::List_1<::Zenject::DiContainer_ProviderInfo*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bindingId, sourceType, buffer);
}
template <typename TInstaller> inline void Zenject::DiContainer::Install() {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "Install", { ::i2c::class_of<TInstaller>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TInstaller>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TInstaller> inline void Zenject::DiContainer::Install(::ArrayW<::System::Object*> extraArgs) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "Install", { ::i2c::class_of<TInstaller>() }, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TInstaller>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, extraArgs);
}
inline ::System::Collections::IList* Zenject::DiContainer::ResolveAll(::Zenject::InjectContext* context) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "ResolveAll", {}, { ::i2c::type_of<::Zenject::InjectContext*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IList*>(this, ___internal_method, context);
}
inline void Zenject::DiContainer::ResolveAll(::Zenject::InjectContext* context, ::System::Collections::Generic::List_1<::System::Object*>* buffer) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(),
                                              { "ResolveAll", {}, { ::i2c::type_of<::Zenject::InjectContext*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::Object*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context, buffer);
}
inline void Zenject::DiContainer::CheckForInstallWarning(::Zenject::InjectContext* context) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "CheckForInstallWarning", {}, { ::i2c::type_of<::Zenject::InjectContext*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
template <typename T> inline ::System::Type* Zenject::DiContainer::ResolveType() {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "ResolveType", { ::i2c::class_of<T>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline ::System::Type* Zenject::DiContainer::ResolveType(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "ResolveType", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method, type);
}
inline ::System::Type* Zenject::DiContainer::ResolveType(::Zenject::InjectContext* context) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "ResolveType", {}, { ::i2c::type_of<::Zenject::InjectContext*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method, context);
}
inline ::System::Collections::Generic::List_1<::System::Type*>* Zenject::DiContainer::ResolveTypeAll(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "ResolveTypeAll", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::System::Type*>*>(this, ___internal_method, type);
}
inline ::System::Collections::Generic::List_1<::System::Type*>* Zenject::DiContainer::ResolveTypeAll(::System::Type* type, ::System::Object* identifier) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "ResolveTypeAll", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::System::Type*>*>(this, ___internal_method, type, identifier);
}
inline ::System::Collections::Generic::List_1<::System::Type*>* Zenject::DiContainer::ResolveTypeAll(::Zenject::InjectContext* context) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "ResolveTypeAll", {}, { ::i2c::type_of<::Zenject::InjectContext*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::System::Type*>*>(this, ___internal_method, context);
}
inline ::System::Object* Zenject::DiContainer::Resolve(::Zenject::BindingId id) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "Resolve", {}, { ::i2c::type_of<::Zenject::BindingId>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, id);
}
inline ::System::Object* Zenject::DiContainer::Resolve(::Zenject::InjectContext* context) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "Resolve", {}, { ::i2c::type_of<::Zenject::InjectContext*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, context);
}
inline void Zenject::DiContainer::SafeGetInstances(::Zenject::DiContainer_ProviderInfo* providerInfo, ::Zenject::InjectContext* context,
                                                   ::System::Collections::Generic::List_1<::System::Object*>* instances) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "SafeGetInstances",
                                                                                            {},
                                                                                            { ::i2c::type_of<::Zenject::DiContainer_ProviderInfo*>(), ::i2c::type_of<::Zenject::InjectContext*>(),
                                                                                              ::i2c::type_of<::System::Collections::Generic::List_1<::System::Object*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, providerInfo, context, instances);
}
template <typename TContract> inline ::Zenject::DecoratorToChoiceFromBinder_1<TContract>* Zenject::DiContainer::Decorate() {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "Decorate", { ::i2c::class_of<TContract>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TContract>() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::DecoratorToChoiceFromBinder_1<TContract>*>(this, ___internal_method);
}
inline void Zenject::DiContainer::GetDecoratedInstances(::Zenject::IProvider* provider, ::Zenject::InjectContext* context, ::System::Collections::Generic::List_1<::System::Object*>* buffer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "GetDecoratedInstances",
                                                                                                         {},
                                                                                                         { ::i2c::type_of<::Zenject::IProvider*>(), ::i2c::type_of<::Zenject::InjectContext*>(),
                                                                                                           ::i2c::type_of<::System::Collections::Generic::List_1<::System::Object*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, provider, context, buffer);
}
inline ::Zenject::Internal::IDecoratorProvider* Zenject::DiContainer::TryGetDecoratorProvider(::System::Type* contractType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "TryGetDecoratorProvider", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::Internal::IDecoratorProvider*>(this, ___internal_method, contractType);
}
inline int32_t Zenject::DiContainer::GetContainerHeirarchyDistance(::Zenject::DiContainer* container) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "GetContainerHeirarchyDistance", {}, { ::i2c::type_of<::Zenject::DiContainer*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, container);
}
inline ::System::Nullable_1<int32_t> Zenject::DiContainer::GetContainerHeirarchyDistance(::Zenject::DiContainer* container, int32_t depth) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "GetContainerHeirarchyDistance", {}, { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<int32_t>>(this, ___internal_method, container, depth);
}
template <typename TContract> inline ::System::Collections::Generic::IEnumerable_1<::System::Type*>* Zenject::DiContainer::GetDependencyContracts() {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "GetDependencyContracts", { ::i2c::class_of<TContract>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TContract>() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::System::Type*>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::System::Type*>* Zenject::DiContainer::GetDependencyContracts(::System::Type* contract) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "GetDependencyContracts", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::System::Type*>*>(this, ___internal_method, contract);
}
inline ::System::Object* Zenject::DiContainer::InstantiateInternal(::System::Type* concreteType, bool autoInject, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* extraArgs,
                                                                   ::Zenject::InjectContext* context, ::System::Object* concreteIdentifier) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "InstantiateInternal",
                                                                                                         {},
                                                                                                         { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>(),
                                                                                                           ::i2c::type_of<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>(),
                                                                                                           ::i2c::type_of<::Zenject::InjectContext*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, concreteType, autoInject, extraArgs, context, concreteIdentifier);
}
inline void Zenject::DiContainer::InjectExplicit(::System::Object* injectable, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* extraArgs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(),
                                              { "InjectExplicit", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, injectable, extraArgs);
}
inline void Zenject::DiContainer::InjectExplicit(::System::Object* injectable, ::System::Type* injectableType, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* extraArgs,
                                                 ::Zenject::InjectContext* context, ::System::Object* concreteIdentifier) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "InjectExplicit",
                                                                                                         {},
                                                                                                         { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Type*>(),
                                                                                                           ::i2c::type_of<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>(),
                                                                                                           ::i2c::type_of<::Zenject::InjectContext*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, injectable, injectableType, extraArgs, context, concreteIdentifier);
}
inline void Zenject::DiContainer::CallInjectMethodsTopDown(::System::Object* injectable, ::System::Type* injectableType, ::Zenject::InjectTypeInfo* typeInfo,
                                                           ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* extraArgs, ::Zenject::InjectContext* context,
                                                           ::System::Object* concreteIdentifier, bool isDryRun) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "CallInjectMethodsTopDown",
                                                                        {},
                                                                        { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::Zenject::InjectTypeInfo*>(),
                                                                          ::i2c::type_of<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>(),
                                                                          ::i2c::type_of<::Zenject::InjectContext*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, injectable, injectableType, typeInfo, extraArgs, context, concreteIdentifier, isDryRun);
}
inline void Zenject::DiContainer::InjectMembersTopDown(::System::Object* injectable, ::System::Type* injectableType, ::Zenject::InjectTypeInfo* typeInfo,
                                                       ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* extraArgs, ::Zenject::InjectContext* context,
                                                       ::System::Object* concreteIdentifier, bool isDryRun) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "InjectMembersTopDown",
                                                                        {},
                                                                        { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::Zenject::InjectTypeInfo*>(),
                                                                          ::i2c::type_of<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>(),
                                                                          ::i2c::type_of<::Zenject::InjectContext*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, injectable, injectableType, typeInfo, extraArgs, context, concreteIdentifier, isDryRun);
}
inline void Zenject::DiContainer::InjectExplicitInternal(::System::Object* injectable, ::System::Type* injectableType, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* extraArgs,
                                                         ::Zenject::InjectContext* context, ::System::Object* concreteIdentifier) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "InjectExplicitInternal",
                                                                                                         {},
                                                                                                         { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Type*>(),
                                                                                                           ::i2c::type_of<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>(),
                                                                                                           ::i2c::type_of<::Zenject::InjectContext*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, injectable, injectableType, extraArgs, context, concreteIdentifier);
}
inline ::UnityW<::UnityEngine::GameObject> Zenject::DiContainer::CreateAndParentPrefabResource(::StringW resourcePath, ::Zenject::GameObjectCreationParameters* gameObjectBindInfo,
                                                                                               ::Zenject::InjectContext* context, ::by_ref<bool> shouldMakeActive) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "CreateAndParentPrefabResource",
                                                                                                         {},
                                                                                                         { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Zenject::GameObjectCreationParameters*>(),
                                                                                                           ::i2c::type_of<::Zenject::InjectContext*>(), ::i2c::type_of<::by_ref<bool>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method, resourcePath, gameObjectBindInfo, context, shouldMakeActive);
}
inline ::UnityW<::UnityEngine::GameObject> Zenject::DiContainer::GetPrefabAsGameObject(::UnityEngine::Object* prefab) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "GetPrefabAsGameObject", {}, { ::i2c::type_of<::UnityEngine::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method, prefab);
}
inline ::UnityW<::UnityEngine::GameObject> Zenject::DiContainer::CreateAndParentPrefab(::UnityEngine::Object* prefab, ::Zenject::GameObjectCreationParameters* gameObjectBindInfo,
                                                                                       ::Zenject::InjectContext* context, ::by_ref<bool> shouldMakeActive) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "CreateAndParentPrefab",
                                                                                            {},
                                                                                            { ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::Zenject::GameObjectCreationParameters*>(),
                                                                                              ::i2c::type_of<::Zenject::InjectContext*>(), ::i2c::type_of<::by_ref<bool>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method, prefab, gameObjectBindInfo, context, shouldMakeActive);
}
inline ::UnityW<::UnityEngine::GameObject> Zenject::DiContainer::CreateEmptyGameObject(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "CreateEmptyGameObject", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method, name);
}
inline ::UnityW<::UnityEngine::GameObject> Zenject::DiContainer::CreateEmptyGameObject(::Zenject::GameObjectCreationParameters* gameObjectBindInfo, ::Zenject::InjectContext* context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(),
                                              { "CreateEmptyGameObject", {}, { ::i2c::type_of<::Zenject::GameObjectCreationParameters*>(), ::i2c::type_of<::Zenject::InjectContext*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method, gameObjectBindInfo, context);
}
inline ::UnityW<::UnityEngine::Transform> Zenject::DiContainer::GetTransformGroup(::Zenject::GameObjectCreationParameters* gameObjectBindInfo, ::Zenject::InjectContext* context) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(),
                                                           { "GetTransformGroup", {}, { ::i2c::type_of<::Zenject::GameObjectCreationParameters*>(), ::i2c::type_of<::Zenject::InjectContext*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method, gameObjectBindInfo, context);
}
inline ::UnityW<::UnityEngine::GameObject> Zenject::DiContainer::CreateTransformGroup(::StringW groupName) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "CreateTransformGroup", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method, groupName);
}
template <typename T> inline T Zenject::DiContainer::Instantiate() {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "Instantiate", { ::i2c::class_of<T>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template <typename T> inline T Zenject::DiContainer::Instantiate(::System::Collections::Generic::IEnumerable_1<::System::Object*>* extraArgs) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(),
                                                           { "Instantiate", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, extraArgs);
}
inline ::System::Object* Zenject::DiContainer::Instantiate(::System::Type* concreteType) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "Instantiate", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, concreteType);
}
inline ::System::Object* Zenject::DiContainer::Instantiate(::System::Type* concreteType, ::System::Collections::Generic::IEnumerable_1<::System::Object*>* extraArgs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(),
                                              { "Instantiate", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, concreteType, extraArgs);
}
template <typename TContract> inline TContract Zenject::DiContainer::InstantiateComponent(::UnityEngine::GameObject* gameObject) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "InstantiateComponent", { ::i2c::class_of<TContract>() }, { ::i2c::type_of<::UnityEngine::GameObject*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TContract>() })));
  return ::cordl_internals::RunMethodRethrow<TContract>(this, ___internal_method, gameObject);
}
template <typename TContract>
inline TContract Zenject::DiContainer::InstantiateComponent(::UnityEngine::GameObject* gameObject, ::System::Collections::Generic::IEnumerable_1<::System::Object*>* extraArgs) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(),
                                                           { "InstantiateComponent",
                                                             { ::i2c::class_of<TContract>() },
                                                             { ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TContract>() })));
  return ::cordl_internals::RunMethodRethrow<TContract>(this, ___internal_method, gameObject, extraArgs);
}
inline ::UnityW<::UnityEngine::Component> Zenject::DiContainer::InstantiateComponent(::System::Type* componentType, ::UnityEngine::GameObject* gameObject) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "InstantiateComponent", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::UnityEngine::GameObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Component>>(this, ___internal_method, componentType, gameObject);
}
inline ::UnityW<::UnityEngine::Component> Zenject::DiContainer::InstantiateComponent(::System::Type* componentType, ::UnityEngine::GameObject* gameObject,
                                                                                     ::System::Collections::Generic::IEnumerable_1<::System::Object*>* extraArgs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "InstantiateComponent",
                                                                                                         {},
                                                                                                         { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::UnityEngine::GameObject*>(),
                                                                                                           ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Component>>(this, ___internal_method, componentType, gameObject, extraArgs);
}
template <typename T> inline T Zenject::DiContainer::InstantiateComponentOnNewGameObject() {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "InstantiateComponentOnNewGameObject", { ::i2c::class_of<T>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template <typename T> inline T Zenject::DiContainer::InstantiateComponentOnNewGameObject(::System::Collections::Generic::IEnumerable_1<::System::Object*>* extraArgs) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(),
                                       { "InstantiateComponentOnNewGameObject", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, extraArgs);
}
template <typename T> inline T Zenject::DiContainer::InstantiateComponentOnNewGameObject(::StringW gameObjectName) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "InstantiateComponentOnNewGameObject", { ::i2c::class_of<T>() }, { ::i2c::type_of<::StringW>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, gameObjectName);
}
template <typename T> inline T Zenject::DiContainer::InstantiateComponentOnNewGameObject(::StringW gameObjectName, ::System::Collections::Generic::IEnumerable_1<::System::Object*>* extraArgs) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Zenject::DiContainer*>(),
          { "InstantiateComponentOnNewGameObject", { ::i2c::class_of<T>() }, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, gameObjectName, extraArgs);
}
inline ::UnityW<::UnityEngine::GameObject> Zenject::DiContainer::InstantiatePrefab(::UnityEngine::Object* prefab) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "InstantiatePrefab", {}, { ::i2c::type_of<::UnityEngine::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method, prefab);
}
inline ::UnityW<::UnityEngine::GameObject> Zenject::DiContainer::InstantiatePrefab(::UnityEngine::Object* prefab, ::UnityEngine::Transform* parentTransform) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "InstantiatePrefab", {}, { ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::UnityEngine::Transform*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method, prefab, parentTransform);
}
inline ::UnityW<::UnityEngine::GameObject> Zenject::DiContainer::InstantiatePrefab(::UnityEngine::Object* prefab, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation,
                                                                                   ::UnityEngine::Transform* parentTransform) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "InstantiatePrefab",
                                                                                            {},
                                                                                            { ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                                              ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Transform*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method, prefab, position, rotation, parentTransform);
}
inline ::UnityW<::UnityEngine::GameObject> Zenject::DiContainer::InstantiatePrefab(::UnityEngine::Object* prefab, ::Zenject::GameObjectCreationParameters* gameObjectBindInfo) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(),
                                                           { "InstantiatePrefab", {}, { ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::Zenject::GameObjectCreationParameters*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method, prefab, gameObjectBindInfo);
}
inline ::UnityW<::UnityEngine::GameObject> Zenject::DiContainer::InstantiatePrefabResource(::StringW resourcePath) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "InstantiatePrefabResource", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method, resourcePath);
}
inline ::UnityW<::UnityEngine::GameObject> Zenject::DiContainer::InstantiatePrefabResource(::StringW resourcePath, ::UnityEngine::Transform* parentTransform) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "InstantiatePrefabResource", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Transform*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method, resourcePath, parentTransform);
}
inline ::UnityW<::UnityEngine::GameObject> Zenject::DiContainer::InstantiatePrefabResource(::StringW resourcePath, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation,
                                                                                           ::UnityEngine::Transform* parentTransform) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "InstantiatePrefabResource",
                                                                                            {},
                                                                                            { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                                              ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Transform*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method, resourcePath, position, rotation, parentTransform);
}
inline ::UnityW<::UnityEngine::GameObject> Zenject::DiContainer::InstantiatePrefabResource(::StringW resourcePath, ::Zenject::GameObjectCreationParameters* creationInfo) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(),
                                                           { "InstantiatePrefabResource", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Zenject::GameObjectCreationParameters*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method, resourcePath, creationInfo);
}
template <typename T> inline T Zenject::DiContainer::InstantiatePrefabForComponent(::UnityEngine::Object* prefab) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "InstantiatePrefabForComponent", { ::i2c::class_of<T>() }, { ::i2c::type_of<::UnityEngine::Object*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, prefab);
}
template <typename T> inline T Zenject::DiContainer::InstantiatePrefabForComponent(::UnityEngine::Object* prefab, ::System::Collections::Generic::IEnumerable_1<::System::Object*>* extraArgs) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(),
                                                           { "InstantiatePrefabForComponent",
                                                             { ::i2c::class_of<T>() },
                                                             { ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, prefab, extraArgs);
}
template <typename T> inline T Zenject::DiContainer::InstantiatePrefabForComponent(::UnityEngine::Object* prefab, ::UnityEngine::Transform* parentTransform) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(),
                                       { "InstantiatePrefabForComponent", { ::i2c::class_of<T>() }, { ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::UnityEngine::Transform*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, prefab, parentTransform);
}
template <typename T>
inline T Zenject::DiContainer::InstantiatePrefabForComponent(::UnityEngine::Object* prefab, ::UnityEngine::Transform* parentTransform,
                                                             ::System::Collections::Generic::IEnumerable_1<::System::Object*>* extraArgs) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "InstantiatePrefabForComponent",
                                                                                                         { ::i2c::class_of<T>() },
                                                                                                         { ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::UnityEngine::Transform*>(),
                                                                                                           ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, prefab, parentTransform, extraArgs);
}
template <typename T>
inline T Zenject::DiContainer::InstantiatePrefabForComponent(::UnityEngine::Object* prefab, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation,
                                                             ::UnityEngine::Transform* parentTransform) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "InstantiatePrefabForComponent",
                                                                                            { ::i2c::class_of<T>() },
                                                                                            { ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                                              ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Transform*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, prefab, position, rotation, parentTransform);
}
template <typename T>
inline T Zenject::DiContainer::InstantiatePrefabForComponent(::UnityEngine::Object* prefab, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation,
                                                             ::UnityEngine::Transform* parentTransform, ::System::Collections::Generic::IEnumerable_1<::System::Object*>* extraArgs) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(),
                                                           { "InstantiatePrefabForComponent",
                                                             { ::i2c::class_of<T>() },
                                                             { ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(),
                                                               ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, prefab, position, rotation, parentTransform, extraArgs);
}
inline ::System::Object* Zenject::DiContainer::InstantiatePrefabForComponent(::System::Type* concreteType, ::UnityEngine::Object* prefab, ::UnityEngine::Transform* parentTransform,
                                                                             ::System::Collections::Generic::IEnumerable_1<::System::Object*>* extraArgs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "InstantiatePrefabForComponent",
                                                                        {},
                                                                        { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::UnityEngine::Transform*>(),
                                                                          ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, concreteType, prefab, parentTransform, extraArgs);
}
inline ::System::Object* Zenject::DiContainer::InstantiatePrefabForComponent(::System::Type* concreteType, ::UnityEngine::Object* prefab,
                                                                             ::System::Collections::Generic::IEnumerable_1<::System::Object*>* extraArgs,
                                                                             ::Zenject::GameObjectCreationParameters* creationInfo) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "InstantiatePrefabForComponent",
                                                                                                         {},
                                                                                                         { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::UnityEngine::Object*>(),
                                                                                                           ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>(),
                                                                                                           ::i2c::type_of<::Zenject::GameObjectCreationParameters*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, concreteType, prefab, extraArgs, creationInfo);
}
template <typename T> inline T Zenject::DiContainer::InstantiatePrefabResourceForComponent(::StringW resourcePath) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "InstantiatePrefabResourceForComponent", { ::i2c::class_of<T>() }, { ::i2c::type_of<::StringW>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, resourcePath);
}
template <typename T> inline T Zenject::DiContainer::InstantiatePrefabResourceForComponent(::StringW resourcePath, ::System::Collections::Generic::IEnumerable_1<::System::Object*>* extraArgs) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "InstantiatePrefabResourceForComponent",
                                                                        { ::i2c::class_of<T>() },
                                                                        { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, resourcePath, extraArgs);
}
template <typename T> inline T Zenject::DiContainer::InstantiatePrefabResourceForComponent(::StringW resourcePath, ::UnityEngine::Transform* parentTransform) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(),
                                              { "InstantiatePrefabResourceForComponent", { ::i2c::class_of<T>() }, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Transform*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, resourcePath, parentTransform);
}
template <typename T>
inline T Zenject::DiContainer::InstantiatePrefabResourceForComponent(::StringW resourcePath, ::UnityEngine::Transform* parentTransform,
                                                                     ::System::Collections::Generic::IEnumerable_1<::System::Object*>* extraArgs) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "InstantiatePrefabResourceForComponent",
                                                                                                         { ::i2c::class_of<T>() },
                                                                                                         { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Transform*>(),
                                                                                                           ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, resourcePath, parentTransform, extraArgs);
}
template <typename T>
inline T Zenject::DiContainer::InstantiatePrefabResourceForComponent(::StringW resourcePath, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation,
                                                                     ::UnityEngine::Transform* parentTransform) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "InstantiatePrefabResourceForComponent",
                                                                                            { ::i2c::class_of<T>() },
                                                                                            { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                                              ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Transform*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, resourcePath, position, rotation, parentTransform);
}
template <typename T>
inline T Zenject::DiContainer::InstantiatePrefabResourceForComponent(::StringW resourcePath, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation,
                                                                     ::UnityEngine::Transform* parentTransform, ::System::Collections::Generic::IEnumerable_1<::System::Object*>* extraArgs) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(),
                                                           { "InstantiatePrefabResourceForComponent",
                                                             { ::i2c::class_of<T>() },
                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(),
                                                               ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, resourcePath, position, rotation, parentTransform, extraArgs);
}
inline ::System::Object* Zenject::DiContainer::InstantiatePrefabResourceForComponent(::System::Type* concreteType, ::StringW resourcePath, ::UnityEngine::Transform* parentTransform,
                                                                                     ::System::Collections::Generic::IEnumerable_1<::System::Object*>* extraArgs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "InstantiatePrefabResourceForComponent",
                                                                                     {},
                                                                                     { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Transform*>(),
                                                                                       ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, concreteType, resourcePath, parentTransform, extraArgs);
}
template <typename T> inline T Zenject::DiContainer::InstantiateScriptableObjectResource(::StringW resourcePath) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "InstantiateScriptableObjectResource", { ::i2c::class_of<T>() }, { ::i2c::type_of<::StringW>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, resourcePath);
}
template <typename T> inline T Zenject::DiContainer::InstantiateScriptableObjectResource(::StringW resourcePath, ::System::Collections::Generic::IEnumerable_1<::System::Object*>* extraArgs) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Zenject::DiContainer*>(),
          { "InstantiateScriptableObjectResource", { ::i2c::class_of<T>() }, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, resourcePath, extraArgs);
}
inline ::System::Object* Zenject::DiContainer::InstantiateScriptableObjectResource(::System::Type* scriptableObjectType, ::StringW resourcePath) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "InstantiateScriptableObjectResource", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, scriptableObjectType, resourcePath);
}
inline ::System::Object* Zenject::DiContainer::InstantiateScriptableObjectResource(::System::Type* scriptableObjectType, ::StringW resourcePath,
                                                                                   ::System::Collections::Generic::IEnumerable_1<::System::Object*>* extraArgs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "InstantiateScriptableObjectResource",
                                                                                                         {},
                                                                                                         { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>(),
                                                                                                           ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, scriptableObjectType, resourcePath, extraArgs);
}
inline void Zenject::DiContainer::InjectGameObject(::UnityEngine::GameObject* gameObject) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "InjectGameObject", {}, { ::i2c::type_of<::UnityEngine::GameObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gameObject);
}
template <typename T> inline T Zenject::DiContainer::InjectGameObjectForComponent(::UnityEngine::GameObject* gameObject) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "InjectGameObjectForComponent", { ::i2c::class_of<T>() }, { ::i2c::type_of<::UnityEngine::GameObject*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, gameObject);
}
template <typename T> inline T Zenject::DiContainer::InjectGameObjectForComponent(::UnityEngine::GameObject* gameObject, ::System::Collections::Generic::IEnumerable_1<::System::Object*>* extraArgs) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(),
                                                           { "InjectGameObjectForComponent",
                                                             { ::i2c::class_of<T>() },
                                                             { ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, gameObject, extraArgs);
}
inline ::System::Object* Zenject::DiContainer::InjectGameObjectForComponent(::UnityEngine::GameObject* gameObject, ::System::Type* componentType,
                                                                            ::System::Collections::Generic::IEnumerable_1<::System::Object*>* extraArgs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "InjectGameObjectForComponent",
                                                                                                         {},
                                                                                                         { ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::System::Type*>(),
                                                                                                           ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, gameObject, componentType, extraArgs);
}
inline ::UnityW<::UnityEngine::Component> Zenject::DiContainer::InjectGameObjectForComponentExplicit(::UnityEngine::GameObject* gameObject, ::System::Type* componentType,
                                                                                                     ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* extraArgs,
                                                                                                     ::Zenject::InjectContext* context, ::System::Object* concreteIdentifier) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "InjectGameObjectForComponentExplicit",
                                                                                                         {},
                                                                                                         { ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::System::Type*>(),
                                                                                                           ::i2c::type_of<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>(),
                                                                                                           ::i2c::type_of<::Zenject::InjectContext*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Component>>(this, ___internal_method, gameObject, componentType, extraArgs, context, concreteIdentifier);
}
inline void Zenject::DiContainer::Inject(::System::Object* injectable) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "Inject", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, injectable);
}
inline void Zenject::DiContainer::Inject(::System::Object* injectable, ::System::Collections::Generic::IEnumerable_1<::System::Object*>* extraArgs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(),
                                              { "Inject", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, injectable, extraArgs);
}
template <typename TContract> inline TContract Zenject::DiContainer::Resolve() {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "Resolve", { ::i2c::class_of<TContract>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TContract>() })));
  return ::cordl_internals::RunMethodRethrow<TContract>(this, ___internal_method);
}
inline ::System::Object* Zenject::DiContainer::Resolve(::System::Type* contractType) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "Resolve", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, contractType);
}
template <typename TContract> inline TContract Zenject::DiContainer::ResolveId(::System::Object* identifier) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "ResolveId", { ::i2c::class_of<TContract>() }, { ::i2c::type_of<::System::Object*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TContract>() })));
  return ::cordl_internals::RunMethodRethrow<TContract>(this, ___internal_method, identifier);
}
inline ::System::Object* Zenject::DiContainer::ResolveId(::System::Type* contractType, ::System::Object* identifier) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "ResolveId", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, contractType, identifier);
}
template <typename TContract> inline TContract Zenject::DiContainer::TryResolve() {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "TryResolve", { ::i2c::class_of<TContract>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TContract>() })));
  return ::cordl_internals::RunMethodRethrow<TContract>(this, ___internal_method);
}
inline ::System::Object* Zenject::DiContainer::TryResolve(::System::Type* contractType) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "TryResolve", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, contractType);
}
template <typename TContract> inline TContract Zenject::DiContainer::TryResolveId(::System::Object* identifier) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "TryResolveId", { ::i2c::class_of<TContract>() }, { ::i2c::type_of<::System::Object*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TContract>() })));
  return ::cordl_internals::RunMethodRethrow<TContract>(this, ___internal_method, identifier);
}
inline ::System::Object* Zenject::DiContainer::TryResolveId(::System::Type* contractType, ::System::Object* identifier) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "TryResolveId", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, contractType, identifier);
}
template <typename TContract> inline ::System::Collections::Generic::List_1<TContract>* Zenject::DiContainer::ResolveAll() {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "ResolveAll", { ::i2c::class_of<TContract>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TContract>() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<TContract>*>(this, ___internal_method);
}
inline ::System::Collections::IList* Zenject::DiContainer::ResolveAll(::System::Type* contractType) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "ResolveAll", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IList*>(this, ___internal_method, contractType);
}
template <typename TContract> inline ::System::Collections::Generic::List_1<TContract>* Zenject::DiContainer::ResolveIdAll(::System::Object* identifier) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "ResolveIdAll", { ::i2c::class_of<TContract>() }, { ::i2c::type_of<::System::Object*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TContract>() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<TContract>*>(this, ___internal_method, identifier);
}
inline ::System::Collections::IList* Zenject::DiContainer::ResolveIdAll(::System::Type* contractType, ::System::Object* identifier) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "ResolveIdAll", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IList*>(this, ___internal_method, contractType, identifier);
}
inline void Zenject::DiContainer::UnbindAll() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "UnbindAll", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TContract> inline bool Zenject::DiContainer::Unbind() {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "Unbind", { ::i2c::class_of<TContract>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TContract>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Zenject::DiContainer::Unbind(::System::Type* contractType) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "Unbind", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, contractType);
}
template <typename TContract> inline bool Zenject::DiContainer::UnbindId(::System::Object* identifier) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "UnbindId", { ::i2c::class_of<TContract>() }, { ::i2c::type_of<::System::Object*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TContract>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, identifier);
}
inline bool Zenject::DiContainer::UnbindId(::System::Type* contractType, ::System::Object* identifier) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "UnbindId", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, contractType, identifier);
}
template <typename TConcrete> inline void Zenject::DiContainer::UnbindInterfacesTo() {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "UnbindInterfacesTo", { ::i2c::class_of<TConcrete>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TConcrete>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Zenject::DiContainer::UnbindInterfacesTo(::System::Type* concreteType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "UnbindInterfacesTo", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, concreteType);
}
template <typename TContract, typename TConcrete> inline bool Zenject::DiContainer::Unbind() {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "Unbind", { ::i2c::class_of<TContract>(), ::i2c::class_of<TConcrete>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TContract>(), ::i2c::class_of<TConcrete>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Zenject::DiContainer::Unbind(::System::Type* contractType, ::System::Type* concreteType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "Unbind", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, contractType, concreteType);
}
template <typename TContract, typename TConcrete> inline bool Zenject::DiContainer::UnbindId(::System::Object* identifier) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "UnbindId", { ::i2c::class_of<TContract>(), ::i2c::class_of<TConcrete>() }, { ::i2c::type_of<::System::Object*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TContract>(), ::i2c::class_of<TConcrete>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, identifier);
}
inline bool Zenject::DiContainer::UnbindId(::System::Type* contractType, ::System::Type* concreteType, ::System::Object* identifier) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(),
                                                           { "UnbindId", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, contractType, concreteType, identifier);
}
template <typename TContract> inline bool Zenject::DiContainer::HasBinding() {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "HasBinding", { ::i2c::class_of<TContract>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TContract>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Zenject::DiContainer::HasBinding(::System::Type* contractType) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "HasBinding", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, contractType);
}
template <typename TContract> inline bool Zenject::DiContainer::HasBindingId(::System::Object* identifier) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "HasBindingId", { ::i2c::class_of<TContract>() }, { ::i2c::type_of<::System::Object*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TContract>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, identifier);
}
inline bool Zenject::DiContainer::HasBindingId(::System::Type* contractType, ::System::Object* identifier) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "HasBindingId", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, contractType, identifier);
}
inline bool Zenject::DiContainer::HasBindingId(::System::Type* contractType, ::System::Object* identifier, ::Zenject::InjectSources sourceType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(),
                                              { "HasBindingId", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Zenject::InjectSources>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, contractType, identifier, sourceType);
}
inline bool Zenject::DiContainer::HasBinding(::Zenject::InjectContext* context) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "HasBinding", {}, { ::i2c::type_of<::Zenject::InjectContext*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, context);
}
inline void Zenject::DiContainer::FlushBindings() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "FlushBindings", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Zenject::DiContainer::FinalizeBinding(::Zenject::BindStatement* binding) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "FinalizeBinding", {}, { ::i2c::type_of<::Zenject::BindStatement*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, binding);
}
inline ::Zenject::BindStatement* Zenject::DiContainer::StartBinding(bool flush) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "StartBinding", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::BindStatement*>(this, ___internal_method, flush);
}
template <typename TContract> inline ::Zenject::ConcreteBinderGeneric_1<TContract>* Zenject::DiContainer::Rebind() {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "Rebind", { ::i2c::class_of<TContract>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TContract>() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ConcreteBinderGeneric_1<TContract>*>(this, ___internal_method);
}
template <typename TContract> inline ::Zenject::ConcreteBinderGeneric_1<TContract>* Zenject::DiContainer::RebindId(::System::Object* identifier) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "RebindId", { ::i2c::class_of<TContract>() }, { ::i2c::type_of<::System::Object*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TContract>() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ConcreteBinderGeneric_1<TContract>*>(this, ___internal_method, identifier);
}
inline ::Zenject::ConcreteBinderNonGeneric* Zenject::DiContainer::Rebind(::System::Type* contractType) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "Rebind", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ConcreteBinderNonGeneric*>(this, ___internal_method, contractType);
}
inline ::Zenject::ConcreteBinderNonGeneric* Zenject::DiContainer::RebindId(::System::Type* contractType, ::System::Object* identifier) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "RebindId", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ConcreteBinderNonGeneric*>(this, ___internal_method, contractType, identifier);
}
template <typename TContract> inline ::Zenject::ConcreteIdBinderGeneric_1<TContract>* Zenject::DiContainer::Bind() {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "Bind", { ::i2c::class_of<TContract>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TContract>() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ConcreteIdBinderGeneric_1<TContract>*>(this, ___internal_method);
}
template <typename TContract> inline ::Zenject::ConcreteIdBinderGeneric_1<TContract>* Zenject::DiContainer::BindNoFlush() {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "BindNoFlush", { ::i2c::class_of<TContract>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TContract>() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ConcreteIdBinderGeneric_1<TContract>*>(this, ___internal_method);
}
template <typename TContract> inline ::Zenject::ConcreteIdBinderGeneric_1<TContract>* Zenject::DiContainer::Bind(::Zenject::BindStatement* bindStatement) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "Bind", { ::i2c::class_of<TContract>() }, { ::i2c::type_of<::Zenject::BindStatement*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TContract>() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ConcreteIdBinderGeneric_1<TContract>*>(this, ___internal_method, bindStatement);
}
inline ::Zenject::ConcreteIdBinderNonGeneric* Zenject::DiContainer::Bind(::ArrayW<::System::Type*> contractTypes) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "Bind", {}, { ::i2c::type_of<::ArrayW<::System::Type*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ConcreteIdBinderNonGeneric*>(this, ___internal_method, contractTypes);
}
inline ::Zenject::ConcreteIdBinderNonGeneric* Zenject::DiContainer::Bind(::System::Collections::Generic::IEnumerable_1<::System::Type*>* contractTypes) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "Bind", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Type*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ConcreteIdBinderNonGeneric*>(this, ___internal_method, contractTypes);
}
inline ::Zenject::ConcreteIdBinderNonGeneric* Zenject::DiContainer::BindInternal(::Zenject::BindInfo* bindInfo, ::Zenject::BindStatement* bindingFinalizer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "BindInternal", {}, { ::i2c::type_of<::Zenject::BindInfo*>(), ::i2c::type_of<::Zenject::BindStatement*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ConcreteIdBinderNonGeneric*>(this, ___internal_method, bindInfo, bindingFinalizer);
}
inline ::Zenject::ConcreteIdBinderNonGeneric* Zenject::DiContainer::Bind(::System::Action_1<::Zenject::ConventionSelectTypesBinder*>* generator) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "Bind", {}, { ::i2c::type_of<::System::Action_1<::Zenject::ConventionSelectTypesBinder*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ConcreteIdBinderNonGeneric*>(this, ___internal_method, generator);
}
template <typename T> inline ::Zenject::FromBinderNonGeneric* Zenject::DiContainer::BindInterfacesTo() {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "BindInterfacesTo", { ::i2c::class_of<T>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FromBinderNonGeneric*>(this, ___internal_method);
}
inline ::Zenject::FromBinderNonGeneric* Zenject::DiContainer::BindInterfacesTo(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "BindInterfacesTo", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FromBinderNonGeneric*>(this, ___internal_method, type);
}
template <typename T> inline ::Zenject::FromBinderNonGeneric* Zenject::DiContainer::BindInterfacesAndSelfTo() {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "BindInterfacesAndSelfTo", { ::i2c::class_of<T>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FromBinderNonGeneric*>(this, ___internal_method);
}
inline ::Zenject::FromBinderNonGeneric* Zenject::DiContainer::BindInterfacesAndSelfTo(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "BindInterfacesAndSelfTo", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FromBinderNonGeneric*>(this, ___internal_method, type);
}
template <typename TContract> inline ::Zenject::IdScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::DiContainer::BindInstance(TContract instance) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "BindInstance", { ::i2c::class_of<TContract>() }, { ::i2c::type_of<TContract>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TContract>() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::IdScopeConcreteIdArgConditionCopyNonLazyBinder*>(this, ___internal_method, instance);
}
inline void Zenject::DiContainer::BindInstances(::ArrayW<::System::Object*> instances) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "BindInstances", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, instances);
}
template <typename TContract, typename TFactoryContract, typename TFactoryConcrete> inline ::Zenject::FactoryToChoiceIdBinder_1<TContract>* Zenject::DiContainer::BindFactoryInternal() {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(),
                                                           { "BindFactoryInternal", { ::i2c::class_of<TContract>(), ::i2c::class_of<TFactoryContract>(), ::i2c::class_of<TFactoryConcrete>() }, {} })));
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TContract>(), ::i2c::class_of<TFactoryContract>(), ::i2c::class_of<TFactoryConcrete>() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FactoryToChoiceIdBinder_1<TContract>*>(this, ___internal_method);
}
template <typename TContract> inline ::Zenject::FactoryToChoiceIdBinder_1<TContract>* Zenject::DiContainer::BindIFactory() {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "BindIFactory", { ::i2c::class_of<TContract>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TContract>() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FactoryToChoiceIdBinder_1<TContract>*>(this, ___internal_method);
}
template <typename TContract, typename TFactory> inline ::Zenject::FactoryToChoiceIdBinder_1<TContract>* Zenject::DiContainer::BindFactory() {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "BindFactory", { ::i2c::class_of<TContract>(), ::i2c::class_of<TFactory>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TContract>(), ::i2c::class_of<TFactory>() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FactoryToChoiceIdBinder_1<TContract>*>(this, ___internal_method);
}
template <typename TContract, typename TFactoryConcrete, typename TFactoryContract> inline ::Zenject::FactoryToChoiceIdBinder_1<TContract>* Zenject::DiContainer::BindFactoryCustomInterface() {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(),
                                              { "BindFactoryCustomInterface", { ::i2c::class_of<TContract>(), ::i2c::class_of<TFactoryConcrete>(), ::i2c::class_of<TFactoryContract>() }, {} })));
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TContract>(), ::i2c::class_of<TFactoryConcrete>(), ::i2c::class_of<TFactoryContract>() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FactoryToChoiceIdBinder_1<TContract>*>(this, ___internal_method);
}
template <typename TItemContract> inline ::Zenject::MemoryPoolIdInitialSizeMaxSizeBinder_1<TItemContract>* Zenject::DiContainer::BindMemoryPool() {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "BindMemoryPool", { ::i2c::class_of<TItemContract>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TItemContract>() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::MemoryPoolIdInitialSizeMaxSizeBinder_1<TItemContract>*>(this, ___internal_method);
}
template <typename TItemContract, typename TPool> inline ::Zenject::MemoryPoolIdInitialSizeMaxSizeBinder_1<TItemContract>* Zenject::DiContainer::BindMemoryPool() {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "BindMemoryPool", { ::i2c::class_of<TItemContract>(), ::i2c::class_of<TPool>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TItemContract>(), ::i2c::class_of<TPool>() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::MemoryPoolIdInitialSizeMaxSizeBinder_1<TItemContract>*>(this, ___internal_method);
}
template <typename TItemContract, typename TPoolConcrete, typename TPoolContract>
inline ::Zenject::MemoryPoolIdInitialSizeMaxSizeBinder_1<TItemContract>* Zenject::DiContainer::BindMemoryPoolCustomInterface(bool includeConcreteType) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(),
                          { "BindMemoryPoolCustomInterface", { ::i2c::class_of<TItemContract>(), ::i2c::class_of<TPoolConcrete>(), ::i2c::class_of<TPoolContract>() }, { ::i2c::type_of<bool>() } })));
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TItemContract>(), ::i2c::class_of<TPoolConcrete>(), ::i2c::class_of<TPoolContract>() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::MemoryPoolIdInitialSizeMaxSizeBinder_1<TItemContract>*>(this, ___internal_method, includeConcreteType);
}
template <typename TItemContract, typename TPoolConcrete, typename TPoolContract>
inline ::Zenject::MemoryPoolIdInitialSizeMaxSizeBinder_1<TItemContract>* Zenject::DiContainer::BindMemoryPoolCustomInterfaceNoFlush(bool includeConcreteType) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "BindMemoryPoolCustomInterfaceNoFlush",
                                                                                            { ::i2c::class_of<TItemContract>(), ::i2c::class_of<TPoolConcrete>(), ::i2c::class_of<TPoolContract>() },
                                                                                            { ::i2c::type_of<bool>() } })));
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TItemContract>(), ::i2c::class_of<TPoolConcrete>(), ::i2c::class_of<TPoolContract>() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::MemoryPoolIdInitialSizeMaxSizeBinder_1<TItemContract>*>(this, ___internal_method, includeConcreteType);
}
template <typename TItemContract, typename TPoolConcrete, typename TPoolContract>
inline ::Zenject::MemoryPoolIdInitialSizeMaxSizeBinder_1<TItemContract>* Zenject::DiContainer::BindMemoryPoolCustomInterfaceInternal(bool includeConcreteType, ::Zenject::BindStatement* statement) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "BindMemoryPoolCustomInterfaceInternal",
                                                                                            { ::i2c::class_of<TItemContract>(), ::i2c::class_of<TPoolConcrete>(), ::i2c::class_of<TPoolContract>() },
                                                                                            { ::i2c::type_of<bool>(), ::i2c::type_of<::Zenject::BindStatement*>() } })));
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TItemContract>(), ::i2c::class_of<TPoolConcrete>(), ::i2c::class_of<TPoolContract>() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::MemoryPoolIdInitialSizeMaxSizeBinder_1<TItemContract>*>(this, ___internal_method, includeConcreteType, statement);
}
template <typename TParam1, typename TContract, typename TFactoryContract, typename TFactoryConcrete>
inline ::Zenject::FactoryToChoiceIdBinder_2<TParam1, TContract>* Zenject::DiContainer::BindFactoryInternal() {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(),
                          { "BindFactoryInternal", { ::i2c::class_of<TParam1>(), ::i2c::class_of<TContract>(), ::i2c::class_of<TFactoryContract>(), ::i2c::class_of<TFactoryConcrete>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TParam1>(), ::i2c::class_of<TContract>(),
                                                                                                                     ::i2c::class_of<TFactoryContract>(), ::i2c::class_of<TFactoryConcrete>() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FactoryToChoiceIdBinder_2<TParam1, TContract>*>(this, ___internal_method);
}
template <typename TParam1, typename TContract> inline ::Zenject::FactoryToChoiceIdBinder_2<TParam1, TContract>* Zenject::DiContainer::BindIFactory() {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "BindIFactory", { ::i2c::class_of<TParam1>(), ::i2c::class_of<TContract>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TParam1>(), ::i2c::class_of<TContract>() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FactoryToChoiceIdBinder_2<TParam1, TContract>*>(this, ___internal_method);
}
template <typename TParam1, typename TContract, typename TFactory> inline ::Zenject::FactoryToChoiceIdBinder_2<TParam1, TContract>* Zenject::DiContainer::BindFactory() {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "BindFactory", { ::i2c::class_of<TParam1>(), ::i2c::class_of<TContract>(), ::i2c::class_of<TFactory>() }, {} })));
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TParam1>(), ::i2c::class_of<TContract>(), ::i2c::class_of<TFactory>() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FactoryToChoiceIdBinder_2<TParam1, TContract>*>(this, ___internal_method);
}
template <typename TParam1, typename TContract, typename TFactoryConcrete, typename TFactoryContract>
inline ::Zenject::FactoryToChoiceIdBinder_2<TParam1, TContract>* Zenject::DiContainer::BindFactoryCustomInterface() {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::Zenject::DiContainer*>(),
                       { "BindFactoryCustomInterface", { ::i2c::class_of<TParam1>(), ::i2c::class_of<TContract>(), ::i2c::class_of<TFactoryConcrete>(), ::i2c::class_of<TFactoryContract>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TParam1>(), ::i2c::class_of<TContract>(),
                                                                                                                     ::i2c::class_of<TFactoryConcrete>(), ::i2c::class_of<TFactoryContract>() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FactoryToChoiceIdBinder_2<TParam1, TContract>*>(this, ___internal_method);
}
template <typename TParam1, typename TParam2, typename TContract, typename TFactoryContract, typename TFactoryConcrete>
inline ::Zenject::FactoryToChoiceIdBinder_3<TParam1, TParam2, TContract>* Zenject::DiContainer::BindFactoryInternal() {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "BindFactoryInternal",
                                                                                                         { ::i2c::class_of<TParam1>(), ::i2c::class_of<TParam2>(), ::i2c::class_of<TContract>(),
                                                                                                           ::i2c::class_of<TFactoryContract>(), ::i2c::class_of<TFactoryConcrete>() },
                                                                                                         {} })));
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TParam1>(), ::i2c::class_of<TParam2>(), ::i2c::class_of<TContract>(),
                                                                                       ::i2c::class_of<TFactoryContract>(), ::i2c::class_of<TFactoryConcrete>() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FactoryToChoiceIdBinder_3<TParam1, TParam2, TContract>*>(this, ___internal_method);
}
template <typename TParam1, typename TParam2, typename TContract> inline ::Zenject::FactoryToChoiceIdBinder_3<TParam1, TParam2, TContract>* Zenject::DiContainer::BindIFactory() {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "BindIFactory", { ::i2c::class_of<TParam1>(), ::i2c::class_of<TParam2>(), ::i2c::class_of<TContract>() }, {} })));
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TParam1>(), ::i2c::class_of<TParam2>(), ::i2c::class_of<TContract>() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FactoryToChoiceIdBinder_3<TParam1, TParam2, TContract>*>(this, ___internal_method);
}
template <typename TParam1, typename TParam2, typename TContract, typename TFactory> inline ::Zenject::FactoryToChoiceIdBinder_3<TParam1, TParam2, TContract>* Zenject::DiContainer::BindFactory() {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(),
                                              { "BindFactory", { ::i2c::class_of<TParam1>(), ::i2c::class_of<TParam2>(), ::i2c::class_of<TContract>(), ::i2c::class_of<TFactory>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TParam1>(), ::i2c::class_of<TParam2>(), ::i2c::class_of<TContract>(), ::i2c::class_of<TFactory>() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FactoryToChoiceIdBinder_3<TParam1, TParam2, TContract>*>(this, ___internal_method);
}
template <typename TParam1, typename TParam2, typename TContract, typename TFactoryConcrete, typename TFactoryContract>
inline ::Zenject::FactoryToChoiceIdBinder_3<TParam1, TParam2, TContract>* Zenject::DiContainer::BindFactoryCustomInterface() {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "BindFactoryCustomInterface",
                                                                                                         { ::i2c::class_of<TParam1>(), ::i2c::class_of<TParam2>(), ::i2c::class_of<TContract>(),
                                                                                                           ::i2c::class_of<TFactoryConcrete>(), ::i2c::class_of<TFactoryContract>() },
                                                                                                         {} })));
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TParam1>(), ::i2c::class_of<TParam2>(), ::i2c::class_of<TContract>(),
                                                                                       ::i2c::class_of<TFactoryConcrete>(), ::i2c::class_of<TFactoryContract>() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FactoryToChoiceIdBinder_3<TParam1, TParam2, TContract>*>(this, ___internal_method);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TContract, typename TFactoryContract, typename TFactoryConcrete>
inline ::Zenject::FactoryToChoiceIdBinder_4<TParam1, TParam2, TParam3, TContract>* Zenject::DiContainer::BindFactoryInternal() {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "BindFactoryInternal",
                                                                                            { ::i2c::class_of<TParam1>(), ::i2c::class_of<TParam2>(), ::i2c::class_of<TParam3>(),
                                                                                              ::i2c::class_of<TContract>(), ::i2c::class_of<TFactoryContract>(), ::i2c::class_of<TFactoryConcrete>() },
                                                                                            {} })));
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TParam1>(), ::i2c::class_of<TParam2>(), ::i2c::class_of<TParam3>(), ::i2c::class_of<TContract>(),
                                                                                       ::i2c::class_of<TFactoryContract>(), ::i2c::class_of<TFactoryConcrete>() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FactoryToChoiceIdBinder_4<TParam1, TParam2, TParam3, TContract>*>(this, ___internal_method);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TContract>
inline ::Zenject::FactoryToChoiceIdBinder_4<TParam1, TParam2, TParam3, TContract>* Zenject::DiContainer::BindIFactory() {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(),
                                              { "BindIFactory", { ::i2c::class_of<TParam1>(), ::i2c::class_of<TParam2>(), ::i2c::class_of<TParam3>(), ::i2c::class_of<TContract>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TParam1>(), ::i2c::class_of<TParam2>(), ::i2c::class_of<TParam3>(), ::i2c::class_of<TContract>() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FactoryToChoiceIdBinder_4<TParam1, TParam2, TParam3, TContract>*>(this, ___internal_method);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TContract, typename TFactory>
inline ::Zenject::FactoryToChoiceIdBinder_4<TParam1, TParam2, TParam3, TContract>* Zenject::DiContainer::BindFactory() {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(),
                          { "BindFactory", { ::i2c::class_of<TParam1>(), ::i2c::class_of<TParam2>(), ::i2c::class_of<TParam3>(), ::i2c::class_of<TContract>(), ::i2c::class_of<TFactory>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TParam1>(), ::i2c::class_of<TParam2>(), ::i2c::class_of<TParam3>(),
                                                                                                                     ::i2c::class_of<TContract>(), ::i2c::class_of<TFactory>() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FactoryToChoiceIdBinder_4<TParam1, TParam2, TParam3, TContract>*>(this, ___internal_method);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TContract, typename TFactoryConcrete, typename TFactoryContract>
inline ::Zenject::FactoryToChoiceIdBinder_4<TParam1, TParam2, TParam3, TContract>* Zenject::DiContainer::BindFactoryCustomInterface() {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "BindFactoryCustomInterface",
                                                                                            { ::i2c::class_of<TParam1>(), ::i2c::class_of<TParam2>(), ::i2c::class_of<TParam3>(),
                                                                                              ::i2c::class_of<TContract>(), ::i2c::class_of<TFactoryConcrete>(), ::i2c::class_of<TFactoryContract>() },
                                                                                            {} })));
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TParam1>(), ::i2c::class_of<TParam2>(), ::i2c::class_of<TParam3>(), ::i2c::class_of<TContract>(),
                                                                                       ::i2c::class_of<TFactoryConcrete>(), ::i2c::class_of<TFactoryContract>() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FactoryToChoiceIdBinder_4<TParam1, TParam2, TParam3, TContract>*>(this, ___internal_method);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TContract, typename TFactoryContract, typename TFactoryConcrete>
inline ::Zenject::FactoryToChoiceIdBinder_5<TParam1, TParam2, TParam3, TParam4, TContract>* Zenject::DiContainer::BindFactoryInternal() {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "BindFactoryInternal",
                                                                                     { ::i2c::class_of<TParam1>(), ::i2c::class_of<TParam2>(), ::i2c::class_of<TParam3>(), ::i2c::class_of<TParam4>(),
                                                                                       ::i2c::class_of<TContract>(), ::i2c::class_of<TFactoryContract>(), ::i2c::class_of<TFactoryConcrete>() },
                                                                                     {} })));
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TParam1>(), ::i2c::class_of<TParam2>(), ::i2c::class_of<TParam3>(), ::i2c::class_of<TParam4>(),
                                                                                       ::i2c::class_of<TContract>(), ::i2c::class_of<TFactoryContract>(), ::i2c::class_of<TFactoryConcrete>() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FactoryToChoiceIdBinder_5<TParam1, TParam2, TParam3, TParam4, TContract>*>(this, ___internal_method);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TContract>
inline ::Zenject::FactoryToChoiceIdBinder_5<TParam1, TParam2, TParam3, TParam4, TContract>* Zenject::DiContainer::BindIFactory() {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(),
                          { "BindIFactory", { ::i2c::class_of<TParam1>(), ::i2c::class_of<TParam2>(), ::i2c::class_of<TParam3>(), ::i2c::class_of<TParam4>(), ::i2c::class_of<TContract>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TParam1>(), ::i2c::class_of<TParam2>(), ::i2c::class_of<TParam3>(),
                                                                                                                     ::i2c::class_of<TParam4>(), ::i2c::class_of<TContract>() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FactoryToChoiceIdBinder_5<TParam1, TParam2, TParam3, TParam4, TContract>*>(this, ___internal_method);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TContract, typename TFactory>
inline ::Zenject::FactoryToChoiceIdBinder_5<TParam1, TParam2, TParam3, TParam4, TContract>* Zenject::DiContainer::BindFactory() {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "BindFactory",
                                                                                                         { ::i2c::class_of<TParam1>(), ::i2c::class_of<TParam2>(), ::i2c::class_of<TParam3>(),
                                                                                                           ::i2c::class_of<TParam4>(), ::i2c::class_of<TContract>(), ::i2c::class_of<TFactory>() },
                                                                                                         {} })));
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TParam1>(), ::i2c::class_of<TParam2>(), ::i2c::class_of<TParam3>(), ::i2c::class_of<TParam4>(),
                                                                                       ::i2c::class_of<TContract>(), ::i2c::class_of<TFactory>() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FactoryToChoiceIdBinder_5<TParam1, TParam2, TParam3, TParam4, TContract>*>(this, ___internal_method);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TContract, typename TFactoryConcrete, typename TFactoryContract>
inline ::Zenject::FactoryToChoiceIdBinder_5<TParam1, TParam2, TParam3, TParam4, TContract>* Zenject::DiContainer::BindFactoryCustomInterface() {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "BindFactoryCustomInterface",
                                                                                     { ::i2c::class_of<TParam1>(), ::i2c::class_of<TParam2>(), ::i2c::class_of<TParam3>(), ::i2c::class_of<TParam4>(),
                                                                                       ::i2c::class_of<TContract>(), ::i2c::class_of<TFactoryConcrete>(), ::i2c::class_of<TFactoryContract>() },
                                                                                     {} })));
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TParam1>(), ::i2c::class_of<TParam2>(), ::i2c::class_of<TParam3>(), ::i2c::class_of<TParam4>(),
                                                                                       ::i2c::class_of<TContract>(), ::i2c::class_of<TFactoryConcrete>(), ::i2c::class_of<TFactoryContract>() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FactoryToChoiceIdBinder_5<TParam1, TParam2, TParam3, TParam4, TContract>*>(this, ___internal_method);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TContract, typename TFactoryContract, typename TFactoryConcrete>
inline ::Zenject::FactoryToChoiceIdBinder_6<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>* Zenject::DiContainer::BindFactoryInternal() {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(),
                                                           { "BindFactoryInternal",
                                                             { ::i2c::class_of<TParam1>(), ::i2c::class_of<TParam2>(), ::i2c::class_of<TParam3>(), ::i2c::class_of<TParam4>(),
                                                               ::i2c::class_of<TParam5>(), ::i2c::class_of<TContract>(), ::i2c::class_of<TFactoryContract>(), ::i2c::class_of<TFactoryConcrete>() },
                                                             {} })));
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TParam1>(), ::i2c::class_of<TParam2>(), ::i2c::class_of<TParam3>(), ::i2c::class_of<TParam4>(), ::i2c::class_of<TParam5>(),
                                                      ::i2c::class_of<TContract>(), ::i2c::class_of<TFactoryContract>(), ::i2c::class_of<TFactoryConcrete>() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FactoryToChoiceIdBinder_6<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>*>(this, ___internal_method);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TContract>
inline ::Zenject::FactoryToChoiceIdBinder_6<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>* Zenject::DiContainer::BindIFactory() {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "BindIFactory",
                                                                                                         { ::i2c::class_of<TParam1>(), ::i2c::class_of<TParam2>(), ::i2c::class_of<TParam3>(),
                                                                                                           ::i2c::class_of<TParam4>(), ::i2c::class_of<TParam5>(), ::i2c::class_of<TContract>() },
                                                                                                         {} })));
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TParam1>(), ::i2c::class_of<TParam2>(), ::i2c::class_of<TParam3>(), ::i2c::class_of<TParam4>(),
                                                                                       ::i2c::class_of<TParam5>(), ::i2c::class_of<TContract>() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FactoryToChoiceIdBinder_6<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>*>(this, ___internal_method);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TContract, typename TFactory>
inline ::Zenject::FactoryToChoiceIdBinder_6<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>* Zenject::DiContainer::BindFactory() {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "BindFactory",
                                                                                     { ::i2c::class_of<TParam1>(), ::i2c::class_of<TParam2>(), ::i2c::class_of<TParam3>(), ::i2c::class_of<TParam4>(),
                                                                                       ::i2c::class_of<TParam5>(), ::i2c::class_of<TContract>(), ::i2c::class_of<TFactory>() },
                                                                                     {} })));
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TParam1>(), ::i2c::class_of<TParam2>(), ::i2c::class_of<TParam3>(), ::i2c::class_of<TParam4>(),
                                                                                       ::i2c::class_of<TParam5>(), ::i2c::class_of<TContract>(), ::i2c::class_of<TFactory>() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FactoryToChoiceIdBinder_6<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>*>(this, ___internal_method);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TContract, typename TFactoryConcrete, typename TFactoryContract>
inline ::Zenject::FactoryToChoiceIdBinder_6<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>* Zenject::DiContainer::BindFactoryCustomInterface() {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(),
                                                           { "BindFactoryCustomInterface",
                                                             { ::i2c::class_of<TParam1>(), ::i2c::class_of<TParam2>(), ::i2c::class_of<TParam3>(), ::i2c::class_of<TParam4>(),
                                                               ::i2c::class_of<TParam5>(), ::i2c::class_of<TContract>(), ::i2c::class_of<TFactoryConcrete>(), ::i2c::class_of<TFactoryContract>() },
                                                             {} })));
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TParam1>(), ::i2c::class_of<TParam2>(), ::i2c::class_of<TParam3>(), ::i2c::class_of<TParam4>(), ::i2c::class_of<TParam5>(),
                                                      ::i2c::class_of<TContract>(), ::i2c::class_of<TFactoryConcrete>(), ::i2c::class_of<TFactoryContract>() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FactoryToChoiceIdBinder_6<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>*>(this, ___internal_method);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TContract, typename TFactoryContract, typename TFactoryConcrete>
inline ::Zenject::FactoryToChoiceIdBinder_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>* Zenject::DiContainer::BindFactoryInternal() {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(),
                                              { "BindFactoryInternal",
                                                { ::i2c::class_of<TParam1>(), ::i2c::class_of<TParam2>(), ::i2c::class_of<TParam3>(), ::i2c::class_of<TParam4>(), ::i2c::class_of<TParam5>(),
                                                  ::i2c::class_of<TParam6>(), ::i2c::class_of<TContract>(), ::i2c::class_of<TFactoryContract>(), ::i2c::class_of<TFactoryConcrete>() },
                                                {} })));
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TParam1>(), ::i2c::class_of<TParam2>(), ::i2c::class_of<TParam3>(), ::i2c::class_of<TParam4>(), ::i2c::class_of<TParam5>(),
                                                      ::i2c::class_of<TParam6>(), ::i2c::class_of<TContract>(), ::i2c::class_of<TFactoryContract>(), ::i2c::class_of<TFactoryConcrete>() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FactoryToChoiceIdBinder_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>*>(this, ___internal_method);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TContract>
inline ::Zenject::FactoryToChoiceIdBinder_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>* Zenject::DiContainer::BindIFactory() {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "BindIFactory",
                                                                                     { ::i2c::class_of<TParam1>(), ::i2c::class_of<TParam2>(), ::i2c::class_of<TParam3>(), ::i2c::class_of<TParam4>(),
                                                                                       ::i2c::class_of<TParam5>(), ::i2c::class_of<TParam6>(), ::i2c::class_of<TContract>() },
                                                                                     {} })));
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TParam1>(), ::i2c::class_of<TParam2>(), ::i2c::class_of<TParam3>(), ::i2c::class_of<TParam4>(),
                                                                                       ::i2c::class_of<TParam5>(), ::i2c::class_of<TParam6>(), ::i2c::class_of<TContract>() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FactoryToChoiceIdBinder_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>*>(this, ___internal_method);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TContract, typename TFactory>
inline ::Zenject::FactoryToChoiceIdBinder_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>* Zenject::DiContainer::BindFactory() {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "BindFactory",
                                                                        { ::i2c::class_of<TParam1>(), ::i2c::class_of<TParam2>(), ::i2c::class_of<TParam3>(), ::i2c::class_of<TParam4>(),
                                                                          ::i2c::class_of<TParam5>(), ::i2c::class_of<TParam6>(), ::i2c::class_of<TContract>(), ::i2c::class_of<TFactory>() },
                                                                        {} })));
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TParam1>(), ::i2c::class_of<TParam2>(), ::i2c::class_of<TParam3>(), ::i2c::class_of<TParam4>(),
                                                                          ::i2c::class_of<TParam5>(), ::i2c::class_of<TParam6>(), ::i2c::class_of<TContract>(), ::i2c::class_of<TFactory>() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FactoryToChoiceIdBinder_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>*>(this, ___internal_method);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TContract, typename TFactoryConcrete, typename TFactoryContract>
inline ::Zenject::FactoryToChoiceIdBinder_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>* Zenject::DiContainer::BindFactoryCustomInterface() {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(),
                                              { "BindFactoryCustomInterface",
                                                { ::i2c::class_of<TParam1>(), ::i2c::class_of<TParam2>(), ::i2c::class_of<TParam3>(), ::i2c::class_of<TParam4>(), ::i2c::class_of<TParam5>(),
                                                  ::i2c::class_of<TParam6>(), ::i2c::class_of<TContract>(), ::i2c::class_of<TFactoryConcrete>(), ::i2c::class_of<TFactoryContract>() },
                                                {} })));
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TParam1>(), ::i2c::class_of<TParam2>(), ::i2c::class_of<TParam3>(), ::i2c::class_of<TParam4>(), ::i2c::class_of<TParam5>(),
                                                      ::i2c::class_of<TParam6>(), ::i2c::class_of<TContract>(), ::i2c::class_of<TFactoryConcrete>(), ::i2c::class_of<TFactoryContract>() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FactoryToChoiceIdBinder_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>*>(this, ___internal_method);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TParam7, typename TParam8, typename TParam9, typename TParam10,
          typename TContract, typename TFactoryContract, typename TFactoryConcrete>
inline ::Zenject::FactoryToChoiceIdBinder_11<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TContract>* Zenject::DiContainer::BindFactoryInternal() {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(),
                                              { "BindFactoryInternal",
                                                { ::i2c::class_of<TParam1>(), ::i2c::class_of<TParam2>(), ::i2c::class_of<TParam3>(), ::i2c::class_of<TParam4>(), ::i2c::class_of<TParam5>(),
                                                  ::i2c::class_of<TParam6>(), ::i2c::class_of<TParam7>(), ::i2c::class_of<TParam8>(), ::i2c::class_of<TParam9>(), ::i2c::class_of<TParam10>(),
                                                  ::i2c::class_of<TContract>(), ::i2c::class_of<TFactoryContract>(), ::i2c::class_of<TFactoryConcrete>() },
                                                {} })));
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TParam1>(), ::i2c::class_of<TParam2>(), ::i2c::class_of<TParam3>(), ::i2c::class_of<TParam4>(), ::i2c::class_of<TParam5>(),
                                                      ::i2c::class_of<TParam6>(), ::i2c::class_of<TParam7>(), ::i2c::class_of<TParam8>(), ::i2c::class_of<TParam9>(), ::i2c::class_of<TParam10>(),
                                                      ::i2c::class_of<TContract>(), ::i2c::class_of<TFactoryContract>(), ::i2c::class_of<TFactoryConcrete>() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FactoryToChoiceIdBinder_11<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TContract>*>(
      this, ___internal_method);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TParam7, typename TParam8, typename TParam9, typename TParam10,
          typename TContract>
inline ::Zenject::FactoryToChoiceIdBinder_11<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TContract>* Zenject::DiContainer::BindIFactory() {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "BindIFactory",
                                                                                     { ::i2c::class_of<TParam1>(), ::i2c::class_of<TParam2>(), ::i2c::class_of<TParam3>(), ::i2c::class_of<TParam4>(),
                                                                                       ::i2c::class_of<TParam5>(), ::i2c::class_of<TParam6>(), ::i2c::class_of<TParam7>(), ::i2c::class_of<TParam8>(),
                                                                                       ::i2c::class_of<TParam9>(), ::i2c::class_of<TParam10>(), ::i2c::class_of<TContract>() },
                                                                                     {} })));
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TParam1>(), ::i2c::class_of<TParam2>(), ::i2c::class_of<TParam3>(), ::i2c::class_of<TParam4>(),
                                                                                       ::i2c::class_of<TParam5>(), ::i2c::class_of<TParam6>(), ::i2c::class_of<TParam7>(), ::i2c::class_of<TParam8>(),
                                                                                       ::i2c::class_of<TParam9>(), ::i2c::class_of<TParam10>(), ::i2c::class_of<TContract>() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FactoryToChoiceIdBinder_11<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TContract>*>(
      this, ___internal_method);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TParam7, typename TParam8, typename TParam9, typename TParam10,
          typename TContract, typename TFactory>
inline ::Zenject::FactoryToChoiceIdBinder_11<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TContract>* Zenject::DiContainer::BindFactory() {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "BindFactory",
                                                                        { ::i2c::class_of<TParam1>(), ::i2c::class_of<TParam2>(), ::i2c::class_of<TParam3>(), ::i2c::class_of<TParam4>(),
                                                                          ::i2c::class_of<TParam5>(), ::i2c::class_of<TParam6>(), ::i2c::class_of<TParam7>(), ::i2c::class_of<TParam8>(),
                                                                          ::i2c::class_of<TParam9>(), ::i2c::class_of<TParam10>(), ::i2c::class_of<TContract>(), ::i2c::class_of<TFactory>() },
                                                                        {} })));
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TParam1>(), ::i2c::class_of<TParam2>(), ::i2c::class_of<TParam3>(), ::i2c::class_of<TParam4>(),
                                                                          ::i2c::class_of<TParam5>(), ::i2c::class_of<TParam6>(), ::i2c::class_of<TParam7>(), ::i2c::class_of<TParam8>(),
                                                                          ::i2c::class_of<TParam9>(), ::i2c::class_of<TParam10>(), ::i2c::class_of<TContract>(), ::i2c::class_of<TFactory>() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FactoryToChoiceIdBinder_11<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TContract>*>(
      this, ___internal_method);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TParam7, typename TParam8, typename TParam9, typename TParam10,
          typename TContract, typename TFactoryConcrete, typename TFactoryContract>
inline ::Zenject::FactoryToChoiceIdBinder_11<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TContract>* Zenject::DiContainer::BindFactoryCustomInterface() {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(),
                                              { "BindFactoryCustomInterface",
                                                { ::i2c::class_of<TParam1>(), ::i2c::class_of<TParam2>(), ::i2c::class_of<TParam3>(), ::i2c::class_of<TParam4>(), ::i2c::class_of<TParam5>(),
                                                  ::i2c::class_of<TParam6>(), ::i2c::class_of<TParam7>(), ::i2c::class_of<TParam8>(), ::i2c::class_of<TParam9>(), ::i2c::class_of<TParam10>(),
                                                  ::i2c::class_of<TContract>(), ::i2c::class_of<TFactoryConcrete>(), ::i2c::class_of<TFactoryContract>() },
                                                {} })));
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TParam1>(), ::i2c::class_of<TParam2>(), ::i2c::class_of<TParam3>(), ::i2c::class_of<TParam4>(), ::i2c::class_of<TParam5>(),
                                                      ::i2c::class_of<TParam6>(), ::i2c::class_of<TParam7>(), ::i2c::class_of<TParam8>(), ::i2c::class_of<TParam9>(), ::i2c::class_of<TParam10>(),
                                                      ::i2c::class_of<TContract>(), ::i2c::class_of<TFactoryConcrete>(), ::i2c::class_of<TFactoryContract>() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FactoryToChoiceIdBinder_11<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TContract>*>(
      this, ___internal_method);
}
template <typename T> inline T Zenject::DiContainer::InstantiateExplicit(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* extraArgs) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(),
                                              { "InstantiateExplicit", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, extraArgs);
}
template <typename T> inline ::System::Lazy_1<T>* Zenject::DiContainer::InstantiateLazy() {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "InstantiateLazy", { ::i2c::class_of<T>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::System::Lazy_1<T>*>(this, ___internal_method);
}
template <typename T> inline ::System::Lazy_1<T>* Zenject::DiContainer::InstantiateLazy(::System::Type* concreteType) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "InstantiateLazy", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Type*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::System::Lazy_1<T>*>(this, ___internal_method, concreteType);
}
template <typename T> inline ::System::Lazy_1<T>* Zenject::DiContainer::ResolveLazy() {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "ResolveLazy", { ::i2c::class_of<T>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::System::Lazy_1<T>*>(this, ___internal_method);
}
template <typename T> inline ::System::Lazy_1<T>* Zenject::DiContainer::ResolveLazy(::System::Type* concreteType) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "ResolveLazy", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Type*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::System::Lazy_1<T>*>(this, ___internal_method, concreteType);
}
inline ::System::Object* Zenject::DiContainer::InstantiateExplicit(::System::Type* concreteType, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* extraArgs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(),
                                       { "InstantiateExplicit", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, concreteType, extraArgs);
}
inline ::System::Object* Zenject::DiContainer::InstantiateExplicit(::System::Type* concreteType, bool autoInject, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* extraArgs,
                                                                   ::Zenject::InjectContext* context, ::System::Object* concreteIdentifier) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "InstantiateExplicit",
                                                                                                         {},
                                                                                                         { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>(),
                                                                                                           ::i2c::type_of<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>(),
                                                                                                           ::i2c::type_of<::Zenject::InjectContext*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, concreteType, autoInject, extraArgs, context, concreteIdentifier);
}
inline ::UnityW<::UnityEngine::Component> Zenject::DiContainer::InstantiateComponentExplicit(::System::Type* componentType, ::UnityEngine::GameObject* gameObject,
                                                                                             ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* extraArgs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "InstantiateComponentExplicit",
                                                                                                         {},
                                                                                                         { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::UnityEngine::GameObject*>(),
                                                                                                           ::i2c::type_of<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Component>>(this, ___internal_method, componentType, gameObject, extraArgs);
}
inline ::System::Object* Zenject::DiContainer::InstantiateScriptableObjectResourceExplicit(::System::Type* scriptableObjectType, ::StringW resourcePath,
                                                                                           ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* extraArgs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "InstantiateScriptableObjectResourceExplicit",
                                                                                                         {},
                                                                                                         { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>(),
                                                                                                           ::i2c::type_of<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, scriptableObjectType, resourcePath, extraArgs);
}
inline ::System::Object* Zenject::DiContainer::InstantiatePrefabResourceForComponentExplicit(::System::Type* componentType, ::StringW resourcePath,
                                                                                             ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* extraArgs,
                                                                                             ::Zenject::GameObjectCreationParameters* creationInfo) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "InstantiatePrefabResourceForComponentExplicit",
                                                                                                         {},
                                                                                                         { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>(),
                                                                                                           ::i2c::type_of<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>(),
                                                                                                           ::i2c::type_of<::Zenject::GameObjectCreationParameters*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, componentType, resourcePath, extraArgs, creationInfo);
}
inline ::System::Object* Zenject::DiContainer::InstantiatePrefabResourceForComponentExplicit(::System::Type* componentType, ::StringW resourcePath,
                                                                                             ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* extraArgs,
                                                                                             ::Zenject::InjectContext* context, ::System::Object* concreteIdentifier,
                                                                                             ::Zenject::GameObjectCreationParameters* creationInfo) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(),
                                              { "InstantiatePrefabResourceForComponentExplicit",
                                                {},
                                                { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>(),
                                                  ::i2c::type_of<::Zenject::InjectContext*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Zenject::GameObjectCreationParameters*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, componentType, resourcePath, extraArgs, context, concreteIdentifier, creationInfo);
}
inline ::System::Object* Zenject::DiContainer::InstantiatePrefabForComponentExplicit(::System::Type* componentType, ::UnityEngine::Object* prefab,
                                                                                     ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* extraArgs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "InstantiatePrefabForComponentExplicit",
                                                                                                         {},
                                                                                                         { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::UnityEngine::Object*>(),
                                                                                                           ::i2c::type_of<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, componentType, prefab, extraArgs);
}
inline ::System::Object* Zenject::DiContainer::InstantiatePrefabForComponentExplicit(::System::Type* componentType, ::UnityEngine::Object* prefab,
                                                                                     ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* extraArgs,
                                                                                     ::Zenject::GameObjectCreationParameters* gameObjectBindInfo) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "InstantiatePrefabForComponentExplicit",
                                                                                                         {},
                                                                                                         { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::UnityEngine::Object*>(),
                                                                                                           ::i2c::type_of<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>(),
                                                                                                           ::i2c::type_of<::Zenject::GameObjectCreationParameters*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, componentType, prefab, extraArgs, gameObjectBindInfo);
}
inline ::System::Object* Zenject::DiContainer::InstantiatePrefabForComponentExplicit(::System::Type* componentType, ::UnityEngine::Object* prefab,
                                                                                     ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* extraArgs, ::Zenject::InjectContext* context,
                                                                                     ::System::Object* concreteIdentifier, ::Zenject::GameObjectCreationParameters* gameObjectBindInfo) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(),
                          { "InstantiatePrefabForComponentExplicit",
                            {},
                            { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>(),
                              ::i2c::type_of<::Zenject::InjectContext*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Zenject::GameObjectCreationParameters*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, componentType, prefab, extraArgs, context, concreteIdentifier, gameObjectBindInfo);
}
template <typename T> inline void Zenject::DiContainer::BindExecutionOrder(int32_t order) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "BindExecutionOrder", { ::i2c::class_of<T>() }, { ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, order);
}
inline void Zenject::DiContainer::BindExecutionOrder(::System::Type* type, int32_t order) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "BindExecutionOrder", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, order);
}
template <typename T> inline ::Zenject::CopyNonLazyBinder* Zenject::DiContainer::BindTickableExecutionOrder(int32_t order) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "BindTickableExecutionOrder", { ::i2c::class_of<T>() }, { ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::CopyNonLazyBinder*>(this, ___internal_method, order);
}
inline ::Zenject::CopyNonLazyBinder* Zenject::DiContainer::BindTickableExecutionOrder(::System::Type* type, int32_t order) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "BindTickableExecutionOrder", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::CopyNonLazyBinder*>(this, ___internal_method, type, order);
}
template <typename T> inline ::Zenject::CopyNonLazyBinder* Zenject::DiContainer::BindInitializableExecutionOrder(int32_t order) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "BindInitializableExecutionOrder", { ::i2c::class_of<T>() }, { ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::CopyNonLazyBinder*>(this, ___internal_method, order);
}
inline ::Zenject::CopyNonLazyBinder* Zenject::DiContainer::BindInitializableExecutionOrder(::System::Type* type, int32_t order) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "BindInitializableExecutionOrder", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::CopyNonLazyBinder*>(this, ___internal_method, type, order);
}
template <typename T> inline ::Zenject::CopyNonLazyBinder* Zenject::DiContainer::BindDisposableExecutionOrder(int32_t order) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "BindDisposableExecutionOrder", { ::i2c::class_of<T>() }, { ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::CopyNonLazyBinder*>(this, ___internal_method, order);
}
template <typename T> inline ::Zenject::CopyNonLazyBinder* Zenject::DiContainer::BindLateDisposableExecutionOrder(int32_t order) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "BindLateDisposableExecutionOrder", { ::i2c::class_of<T>() }, { ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::CopyNonLazyBinder*>(this, ___internal_method, order);
}
inline ::Zenject::CopyNonLazyBinder* Zenject::DiContainer::BindDisposableExecutionOrder(::System::Type* type, int32_t order) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "BindDisposableExecutionOrder", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::CopyNonLazyBinder*>(this, ___internal_method, type, order);
}
inline ::Zenject::CopyNonLazyBinder* Zenject::DiContainer::BindLateDisposableExecutionOrder(::System::Type* type, int32_t order) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "BindLateDisposableExecutionOrder", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::CopyNonLazyBinder*>(this, ___internal_method, type, order);
}
template <typename T> inline ::Zenject::CopyNonLazyBinder* Zenject::DiContainer::BindFixedTickableExecutionOrder(int32_t order) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "BindFixedTickableExecutionOrder", { ::i2c::class_of<T>() }, { ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::CopyNonLazyBinder*>(this, ___internal_method, order);
}
inline ::Zenject::CopyNonLazyBinder* Zenject::DiContainer::BindFixedTickableExecutionOrder(::System::Type* type, int32_t order) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "BindFixedTickableExecutionOrder", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::CopyNonLazyBinder*>(this, ___internal_method, type, order);
}
template <typename T> inline ::Zenject::CopyNonLazyBinder* Zenject::DiContainer::BindLateTickableExecutionOrder(int32_t order) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "BindLateTickableExecutionOrder", { ::i2c::class_of<T>() }, { ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::CopyNonLazyBinder*>(this, ___internal_method, order);
}
inline ::Zenject::CopyNonLazyBinder* Zenject::DiContainer::BindLateTickableExecutionOrder(::System::Type* type, int32_t order) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "BindLateTickableExecutionOrder", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::CopyNonLazyBinder*>(this, ___internal_method, type, order);
}
template <typename T> inline ::Zenject::CopyNonLazyBinder* Zenject::DiContainer::BindPoolableExecutionOrder(int32_t order) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "BindPoolableExecutionOrder", { ::i2c::class_of<T>() }, { ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::CopyNonLazyBinder*>(this, ___internal_method, order);
}
inline ::Zenject::CopyNonLazyBinder* Zenject::DiContainer::BindPoolableExecutionOrder(::System::Type* type, int32_t order) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DiContainer*>(), { "BindPoolableExecutionOrder", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::CopyNonLazyBinder*>(this, ___internal_method, type, order);
}
inline ::Zenject::DiContainer* Zenject::DiContainer::New_ctor(::System::Collections::Generic::IEnumerable_1<::Zenject::DiContainer*>* parentContainersEnumerable, bool isValidating) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::DiContainer*>(parentContainersEnumerable, isValidating));
}
inline ::Zenject::DiContainer* Zenject::DiContainer::New_ctor(bool isValidating) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::DiContainer*>(isValidating));
}
inline ::Zenject::DiContainer* Zenject::DiContainer::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::DiContainer*>());
}
inline ::Zenject::DiContainer* Zenject::DiContainer::New_ctor(::Zenject::DiContainer* parentContainer, bool isValidating) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::DiContainer*>(parentContainer, isValidating));
}
inline ::Zenject::DiContainer* Zenject::DiContainer::New_ctor(::Zenject::DiContainer* parentContainer) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::DiContainer*>(parentContainer));
}
inline ::Zenject::DiContainer* Zenject::DiContainer::New_ctor(::System::Collections::Generic::IEnumerable_1<::Zenject::DiContainer*>* parentContainers) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::DiContainer*>(parentContainers));
}
/// @brief Convert operator to "::Zenject::IInstantiator"
constexpr Zenject::DiContainer::operator ::Zenject::IInstantiator*() noexcept {
  return static_cast<::Zenject::IInstantiator*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::IInstantiator"
constexpr ::Zenject::IInstantiator* Zenject::DiContainer::i___Zenject__IInstantiator() noexcept {
  return static_cast<::Zenject::IInstantiator*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Zenject::DiContainer::DiContainer() {}
