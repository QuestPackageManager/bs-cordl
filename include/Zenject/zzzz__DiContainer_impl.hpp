#pragma once
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
//  Writing Method size for method: ::Zenject::__DiContainer__ProviderInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::Zenject::__DiContainer__ProviderInfo::*)(::Zenject::IProvider*, ::Zenject::BindingCondition*, bool, ::Zenject::DiContainer*)>(&::Zenject::__DiContainer__ProviderInfo::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x3655cc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__DiContainer__ProviderInfo*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::IProvider*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::BindingCondition*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__DiContainer__ProviderInfo.__zenCreate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*, ::Array<::System::Object*>*>)>(
    &::Zenject::__DiContainer__ProviderInfo::__zenCreate)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x3655d04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__DiContainer__ProviderInfo*>::get(), "__zenCreate", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__DiContainer__ProviderInfo.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::__DiContainer__ProviderInfo::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x424;
  constexpr static std::size_t addrs = 0x3655eb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__DiContainer__ProviderInfo*>::get(),
                                                                               "__zenCreateInjectTypeInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::Zenject::DiContainer*& Zenject::__DiContainer__ProviderInfo::__cordl_internal_get_Container() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Container;
}
constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> const& Zenject::__DiContainer__ProviderInfo::__cordl_internal_get_Container() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Container;
}
constexpr void Zenject::__DiContainer__ProviderInfo::__cordl_internal_set_Container(::Zenject::DiContainer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Container)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& Zenject::__DiContainer__ProviderInfo::__cordl_internal_get_NonLazy() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NonLazy;
}
constexpr bool const& Zenject::__DiContainer__ProviderInfo::__cordl_internal_get_NonLazy() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NonLazy;
}
constexpr void Zenject::__DiContainer__ProviderInfo::__cordl_internal_set_NonLazy(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___NonLazy = value;
}
constexpr ::Zenject::IProvider*& Zenject::__DiContainer__ProviderInfo::__cordl_internal_get_Provider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Provider;
}
constexpr ::cordl_internals::to_const_pointer<::Zenject::IProvider*> const& Zenject::__DiContainer__ProviderInfo::__cordl_internal_get_Provider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Provider;
}
constexpr void Zenject::__DiContainer__ProviderInfo::__cordl_internal_set_Provider(::Zenject::IProvider* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Provider)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Zenject::BindingCondition*& Zenject::__DiContainer__ProviderInfo::__cordl_internal_get_Condition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Condition;
}
constexpr ::cordl_internals::to_const_pointer<::Zenject::BindingCondition*> const& Zenject::__DiContainer__ProviderInfo::__cordl_internal_get_Condition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Condition;
}
constexpr void Zenject::__DiContainer__ProviderInfo::__cordl_internal_set_Condition(::Zenject::BindingCondition* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Condition)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Zenject::__DiContainer__ProviderInfo* Zenject::__DiContainer__ProviderInfo::New_ctor(::Zenject::IProvider* provider, ::Zenject::BindingCondition* condition, bool nonLazy,
                                                                                              ::Zenject::DiContainer* container) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::__DiContainer__ProviderInfo*>(provider, condition, nonLazy, container));
}
inline void Zenject::__DiContainer__ProviderInfo::_ctor(::Zenject::IProvider* provider, ::Zenject::BindingCondition* condition, bool nonLazy, ::Zenject::DiContainer* container) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__DiContainer__ProviderInfo*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::IProvider*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::BindingCondition*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, provider, condition, nonLazy, container);
}
inline ::System::Object* Zenject::__DiContainer__ProviderInfo::__zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__DiContainer__ProviderInfo*>::get(), "__zenCreate", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::__DiContainer__ProviderInfo::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__DiContainer__ProviderInfo*>::get(),
                                                                             "__zenCreateInjectTypeInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Zenject::__DiContainer__ProviderInfo::__DiContainer__ProviderInfo() {}
//  Writing Method size for method: ::Zenject::__DiContainer____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::__DiContainer____c::*)()>(&::Zenject::__DiContainer____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x365633c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__DiContainer____c*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__DiContainer____c._get_AllProviders_b__33_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::Zenject::__DiContainer__ProviderInfo*>* (
    ::Zenject::__DiContainer____c::*)(::System::Collections::Generic::List_1<::Zenject::__DiContainer__ProviderInfo*>*)>(&::Zenject::__DiContainer____c::_get_AllProviders_b__33_0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3656344;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__DiContainer____c*>::get(), "<get_AllProviders>b__33_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::__DiContainer__ProviderInfo*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__DiContainer____c._get_AllProviders_b__33_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::IProvider* (::Zenject::__DiContainer____c::*)(::Zenject::__DiContainer__ProviderInfo*)>(
    &::Zenject::__DiContainer____c::_get_AllProviders_b__33_1)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x365634c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__DiContainer____c*>::get(), "<get_AllProviders>b__33_1", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::__DiContainer__ProviderInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__DiContainer____c._ResolveTypeAll_b__86_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Zenject::__DiContainer____c::*)(::System::Type*)>(&::Zenject::__DiContainer____c::_ResolveTypeAll_b__86_1)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x3656364;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__DiContainer____c*>::get(), "<ResolveTypeAll>b__86_1", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__DiContainer____c._InstantiateInternal_b__97_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Zenject::__DiContainer____c::*)(::Zenject::TypeValuePair)>(
    &::Zenject::__DiContainer____c::_InstantiateInternal_b__97_0)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x36563c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__DiContainer____c*>::get(), "<InstantiateInternal>b__97_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::TypeValuePair>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__DiContainer____c._InjectExplicitInternal_b__102_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Zenject::__DiContainer____c::*)(::Zenject::TypeValuePair)>(
    &::Zenject::__DiContainer____c::_InjectExplicitInternal_b__102_0)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x3656418;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__DiContainer____c*>::get(), "<InjectExplicitInternal>b__102_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::TypeValuePair>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__DiContainer____c._BindInternal_b__197_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Zenject::__DiContainer____c::*)(::System::Type*)>(&::Zenject::__DiContainer____c::_BindInternal_b__197_0)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x3656470;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__DiContainer____c*>::get(), "<BindInternal>b__197_0", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__DiContainer____c._Bind_b__198_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Zenject::__DiContainer____c::*)(::System::Type*)>(&::Zenject::__DiContainer____c::_Bind_b__198_0)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x36564e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__DiContainer____c*>::get(), "<Bind>b__198_0", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__DiContainer____c.__zenCreate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*, ::Array<::System::Object*>*>)>(
    &::Zenject::__DiContainer____c::__zenCreate)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x3656560;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__DiContainer____c*>::get(), "__zenCreate", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__DiContainer____c.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::__DiContainer____c::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x36565bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__DiContainer____c*>::get(),
                                                                               "__zenCreateInjectTypeInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void Zenject::__DiContainer____c::setStaticF___9(::Zenject::__DiContainer____c* value) {
  ::cordl_internals::setStaticField<::Zenject::__DiContainer____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__DiContainer____c*>::get>(
      std::forward<::Zenject::__DiContainer____c*>(value));
}
inline ::Zenject::__DiContainer____c* Zenject::__DiContainer____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::Zenject::__DiContainer____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__DiContainer____c*>::get>();
}
inline void Zenject::__DiContainer____c::setStaticF___9__33_0(::System::Func_2<::System::Collections::Generic::List_1<::Zenject::__DiContainer__ProviderInfo*>*,
                                                                               ::System::Collections::Generic::IEnumerable_1<::Zenject::__DiContainer__ProviderInfo*>*>* value) {
  ::cordl_internals::setStaticField<
      ::System::Func_2<::System::Collections::Generic::List_1<::Zenject::__DiContainer__ProviderInfo*>*, ::System::Collections::Generic::IEnumerable_1<::Zenject::__DiContainer__ProviderInfo*>*>*,
      "<>9__33_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__DiContainer____c*>::get>(
      std::forward<
          ::System::Func_2<::System::Collections::Generic::List_1<::Zenject::__DiContainer__ProviderInfo*>*, ::System::Collections::Generic::IEnumerable_1<::Zenject::__DiContainer__ProviderInfo*>*>*>(
          value));
}
inline ::System::Func_2<::System::Collections::Generic::List_1<::Zenject::__DiContainer__ProviderInfo*>*, ::System::Collections::Generic::IEnumerable_1<::Zenject::__DiContainer__ProviderInfo*>*>*
Zenject::__DiContainer____c::getStaticF___9__33_0() {
  return ::cordl_internals::getStaticField<
      ::System::Func_2<::System::Collections::Generic::List_1<::Zenject::__DiContainer__ProviderInfo*>*, ::System::Collections::Generic::IEnumerable_1<::Zenject::__DiContainer__ProviderInfo*>*>*,
      "<>9__33_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__DiContainer____c*>::get>();
}
inline void Zenject::__DiContainer____c::setStaticF___9__33_1(::System::Func_2<::Zenject::__DiContainer__ProviderInfo*, ::Zenject::IProvider*>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::Zenject::__DiContainer__ProviderInfo*, ::Zenject::IProvider*>*, "<>9__33_1",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__DiContainer____c*>::get>(
      std::forward<::System::Func_2<::Zenject::__DiContainer__ProviderInfo*, ::Zenject::IProvider*>*>(value));
}
inline ::System::Func_2<::Zenject::__DiContainer__ProviderInfo*, ::Zenject::IProvider*>* Zenject::__DiContainer____c::getStaticF___9__33_1() {
  return ::cordl_internals::getStaticField<::System::Func_2<::Zenject::__DiContainer__ProviderInfo*, ::Zenject::IProvider*>*, "<>9__33_1",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__DiContainer____c*>::get>();
}
inline void Zenject::__DiContainer____c::setStaticF___9__86_1(::System::Func_2<::System::Type*, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::System::Type*, bool>*, "<>9__86_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__DiContainer____c*>::get>(
      std::forward<::System::Func_2<::System::Type*, bool>*>(value));
}
inline ::System::Func_2<::System::Type*, bool>* Zenject::__DiContainer____c::getStaticF___9__86_1() {
  return ::cordl_internals::getStaticField<::System::Func_2<::System::Type*, bool>*, "<>9__86_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__DiContainer____c*>::get>();
}
inline void Zenject::__DiContainer____c::setStaticF___9__97_0(::System::Func_2<::Zenject::TypeValuePair, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::Zenject::TypeValuePair, ::StringW>*, "<>9__97_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__DiContainer____c*>::get>(
      std::forward<::System::Func_2<::Zenject::TypeValuePair, ::StringW>*>(value));
}
inline ::System::Func_2<::Zenject::TypeValuePair, ::StringW>* Zenject::__DiContainer____c::getStaticF___9__97_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::Zenject::TypeValuePair, ::StringW>*, "<>9__97_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__DiContainer____c*>::get>();
}
inline void Zenject::__DiContainer____c::setStaticF___9__102_0(::System::Func_2<::Zenject::TypeValuePair, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::Zenject::TypeValuePair, ::StringW>*, "<>9__102_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__DiContainer____c*>::get>(
      std::forward<::System::Func_2<::Zenject::TypeValuePair, ::StringW>*>(value));
}
inline ::System::Func_2<::Zenject::TypeValuePair, ::StringW>* Zenject::__DiContainer____c::getStaticF___9__102_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::Zenject::TypeValuePair, ::StringW>*, "<>9__102_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__DiContainer____c*>::get>();
}
inline void Zenject::__DiContainer____c::setStaticF___9__197_0(::System::Func_2<::System::Type*, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::System::Type*, bool>*, "<>9__197_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__DiContainer____c*>::get>(
      std::forward<::System::Func_2<::System::Type*, bool>*>(value));
}
inline ::System::Func_2<::System::Type*, bool>* Zenject::__DiContainer____c::getStaticF___9__197_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::System::Type*, bool>*, "<>9__197_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__DiContainer____c*>::get>();
}
inline void Zenject::__DiContainer____c::setStaticF___9__198_0(::System::Func_2<::System::Type*, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::System::Type*, bool>*, "<>9__198_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__DiContainer____c*>::get>(
      std::forward<::System::Func_2<::System::Type*, bool>*>(value));
}
inline ::System::Func_2<::System::Type*, bool>* Zenject::__DiContainer____c::getStaticF___9__198_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::System::Type*, bool>*, "<>9__198_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__DiContainer____c*>::get>();
}
inline ::Zenject::__DiContainer____c* Zenject::__DiContainer____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::__DiContainer____c*>());
}
inline void Zenject::__DiContainer____c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__DiContainer____c*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::Zenject::__DiContainer__ProviderInfo*>*
Zenject::__DiContainer____c::_get_AllProviders_b__33_0(::System::Collections::Generic::List_1<::Zenject::__DiContainer__ProviderInfo*>* x) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__DiContainer____c*>::get(), "<get_AllProviders>b__33_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::__DiContainer__ProviderInfo*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Zenject::__DiContainer__ProviderInfo*>*, false>(this, ___internal_method, x);
}
inline ::Zenject::IProvider* Zenject::__DiContainer____c::_get_AllProviders_b__33_1(::Zenject::__DiContainer__ProviderInfo* x) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__DiContainer____c*>::get(), "<get_AllProviders>b__33_1", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::__DiContainer__ProviderInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::IProvider*, false>(this, ___internal_method, x);
}
inline bool Zenject::__DiContainer____c::_ResolveTypeAll_b__86_1(::System::Type* x) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__DiContainer____c*>::get(), "<ResolveTypeAll>b__86_1", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, x);
}
inline ::StringW Zenject::__DiContainer____c::_InstantiateInternal_b__97_0(::Zenject::TypeValuePair x) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__DiContainer____c*>::get(), "<InstantiateInternal>b__97_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::TypeValuePair>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, x);
}
inline ::StringW Zenject::__DiContainer____c::_InjectExplicitInternal_b__102_0(::Zenject::TypeValuePair x) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__DiContainer____c*>::get(), "<InjectExplicitInternal>b__102_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::TypeValuePair>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, x);
}
inline bool Zenject::__DiContainer____c::_BindInternal_b__197_0(::System::Type* x) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__DiContainer____c*>::get(), "<BindInternal>b__197_0", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, x);
}
inline bool Zenject::__DiContainer____c::_Bind_b__198_0(::System::Type* x) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__DiContainer____c*>::get(), "<Bind>b__198_0", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, x);
}
inline ::System::Object* Zenject::__DiContainer____c::__zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__DiContainer____c*>::get(), "__zenCreate", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::__DiContainer____c::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__DiContainer____c*>::get(), "__zenCreateInjectTypeInfo",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Zenject::__DiContainer____c::__DiContainer____c() {}
//  Writing Method size for method: ::Zenject::__DiContainer____c__DisplayClass86_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::__DiContainer____c__DisplayClass86_0::*)()>(
    &::Zenject::__DiContainer____c__DisplayClass86_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x365677c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__DiContainer____c__DisplayClass86_0*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__DiContainer____c__DisplayClass86_0._ResolveTypeAll_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (::Zenject::__DiContainer____c__DisplayClass86_0::*)(::Zenject::__DiContainer__ProviderInfo*)>(
    &::Zenject::__DiContainer____c__DisplayClass86_0::_ResolveTypeAll_b__0)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x3656784;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__DiContainer____c__DisplayClass86_0*>::get(), "<ResolveTypeAll>b__0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::__DiContainer__ProviderInfo*>::get() })));
    return ___internal_method;
  }
};
constexpr ::Zenject::InjectContext*& Zenject::__DiContainer____c__DisplayClass86_0::__cordl_internal_get_context() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___context;
}
constexpr ::cordl_internals::to_const_pointer<::Zenject::InjectContext*> const& Zenject::__DiContainer____c__DisplayClass86_0::__cordl_internal_get_context() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___context;
}
constexpr void Zenject::__DiContainer____c__DisplayClass86_0::__cordl_internal_set_context(::Zenject::InjectContext* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___context)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Zenject::__DiContainer____c__DisplayClass86_0* Zenject::__DiContainer____c__DisplayClass86_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::__DiContainer____c__DisplayClass86_0*>());
}
inline void Zenject::__DiContainer____c__DisplayClass86_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__DiContainer____c__DisplayClass86_0*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Type* Zenject::__DiContainer____c__DisplayClass86_0::_ResolveTypeAll_b__0(::Zenject::__DiContainer__ProviderInfo* x) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__DiContainer____c__DisplayClass86_0*>::get(), "<ResolveTypeAll>b__0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::__DiContainer__ProviderInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method, x);
}
// Ctor Parameters []
constexpr ::Zenject::__DiContainer____c__DisplayClass86_0::__DiContainer____c__DisplayClass86_0() {}
//  Writing Method size for method: ::Zenject::__DiContainer___GetDependencyContracts_d__96._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::__DiContainer___GetDependencyContracts_d__96::*)(int32_t)>(
    &::Zenject::__DiContainer___GetDependencyContracts_d__96::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x3656838;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__DiContainer___GetDependencyContracts_d__96*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__DiContainer___GetDependencyContracts_d__96.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::__DiContainer___GetDependencyContracts_d__96::*)()>(
    &::Zenject::__DiContainer___GetDependencyContracts_d__96::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x365686c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__DiContainer___GetDependencyContracts_d__96*>::get(),
                                                                               "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__DiContainer___GetDependencyContracts_d__96.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Zenject::__DiContainer___GetDependencyContracts_d__96::*)()>(
    &::Zenject::__DiContainer___GetDependencyContracts_d__96::MoveNext)> {
  constexpr static std::size_t size = 0x2fc;
  constexpr static std::size_t addrs = 0x3656888;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__DiContainer___GetDependencyContracts_d__96*>::get(),
                                                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__DiContainer___GetDependencyContracts_d__96.__m__Finally1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::__DiContainer___GetDependencyContracts_d__96::*)()>(
    &::Zenject::__DiContainer___GetDependencyContracts_d__96::__m__Finally1)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3656d58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__DiContainer___GetDependencyContracts_d__96*>::get(),
                                                                               "<>m__Finally1", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__DiContainer___GetDependencyContracts_d__96.System_Collections_Generic_IEnumerator_System_Type__get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (::Zenject::__DiContainer___GetDependencyContracts_d__96::*)()>(
    &::Zenject::__DiContainer___GetDependencyContracts_d__96::System_Collections_Generic_IEnumerator_System_Type__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3656e08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__DiContainer___GetDependencyContracts_d__96*>::get(),
                                    "System.Collections.Generic.IEnumerator<System.Type>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__DiContainer___GetDependencyContracts_d__96.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::__DiContainer___GetDependencyContracts_d__96::*)()>(
    &::Zenject::__DiContainer___GetDependencyContracts_d__96::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x3656e10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__DiContainer___GetDependencyContracts_d__96*>::get(),
                                                 "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__DiContainer___GetDependencyContracts_d__96.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::Zenject::__DiContainer___GetDependencyContracts_d__96::*)()>(
    &::Zenject::__DiContainer___GetDependencyContracts_d__96::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3656e50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__DiContainer___GetDependencyContracts_d__96*>::get(),
                                                 "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__DiContainer___GetDependencyContracts_d__96.System_Collections_Generic_IEnumerable_System_Type__GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerator_1<::System::Type*>* (
    ::Zenject::__DiContainer___GetDependencyContracts_d__96::*)()>(&::Zenject::__DiContainer___GetDependencyContracts_d__96::System_Collections_Generic_IEnumerable_System_Type__GetEnumerator)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x3656e58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__DiContainer___GetDependencyContracts_d__96*>::get(),
                                    "System.Collections.Generic.IEnumerable<System.Type>.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__DiContainer___GetDependencyContracts_d__96.System_Collections_IEnumerable_GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::Zenject::__DiContainer___GetDependencyContracts_d__96::*)()>(
    &::Zenject::__DiContainer___GetDependencyContracts_d__96::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3656f04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__DiContainer___GetDependencyContracts_d__96*>::get(),
                                                 "System.Collections.IEnumerable.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Type*>"
constexpr Zenject::__DiContainer___GetDependencyContracts_d__96::operator ::System::Collections::Generic::IEnumerable_1<::System::Type*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::System::Type*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::Type*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::System::Type*>*
Zenject::__DiContainer___GetDependencyContracts_d__96::i___System__Collections__Generic__IEnumerable_1___System__Type__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::System::Type*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr Zenject::__DiContainer___GetDependencyContracts_d__96::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* Zenject::__DiContainer___GetDependencyContracts_d__96::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Type*>"
constexpr Zenject::__DiContainer___GetDependencyContracts_d__96::operator ::System::Collections::Generic::IEnumerator_1<::System::Type*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Type*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Type*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Type*>*
Zenject::__DiContainer___GetDependencyContracts_d__96::i___System__Collections__Generic__IEnumerator_1___System__Type__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Type*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr Zenject::__DiContainer___GetDependencyContracts_d__96::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Zenject::__DiContainer___GetDependencyContracts_d__96::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr Zenject::__DiContainer___GetDependencyContracts_d__96::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Zenject::__DiContainer___GetDependencyContracts_d__96::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr int32_t& Zenject::__DiContainer___GetDependencyContracts_d__96::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& Zenject::__DiContainer___GetDependencyContracts_d__96::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void Zenject::__DiContainer___GetDependencyContracts_d__96::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::System::Type*& Zenject::__DiContainer___GetDependencyContracts_d__96::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& Zenject::__DiContainer___GetDependencyContracts_d__96::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void Zenject::__DiContainer___GetDependencyContracts_d__96::__cordl_internal_set___2__current(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& Zenject::__DiContainer___GetDependencyContracts_d__96::__cordl_internal_get___l__initialThreadId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
constexpr int32_t const& Zenject::__DiContainer___GetDependencyContracts_d__96::__cordl_internal_get___l__initialThreadId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
constexpr void Zenject::__DiContainer___GetDependencyContracts_d__96::__cordl_internal_set___l__initialThreadId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____l__initialThreadId = value;
}
constexpr ::Zenject::DiContainer*& Zenject::__DiContainer___GetDependencyContracts_d__96::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> const& Zenject::__DiContainer___GetDependencyContracts_d__96::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void Zenject::__DiContainer___GetDependencyContracts_d__96::__cordl_internal_set___4__this(::Zenject::DiContainer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Type*& Zenject::__DiContainer___GetDependencyContracts_d__96::__cordl_internal_get_contract() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___contract;
}
constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& Zenject::__DiContainer___GetDependencyContracts_d__96::__cordl_internal_get_contract() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___contract;
}
constexpr void Zenject::__DiContainer___GetDependencyContracts_d__96::__cordl_internal_set_contract(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___contract)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Type*& Zenject::__DiContainer___GetDependencyContracts_d__96::__cordl_internal_get___3__contract() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__contract;
}
constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& Zenject::__DiContainer___GetDependencyContracts_d__96::__cordl_internal_get___3__contract() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__contract;
}
constexpr void Zenject::__DiContainer___GetDependencyContracts_d__96::__cordl_internal_set___3__contract(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____3__contract)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::IEnumerator_1<::Zenject::InjectableInfo*>*& Zenject::__DiContainer___GetDependencyContracts_d__96::__cordl_internal_get___7__wrap1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap1;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerator_1<::Zenject::InjectableInfo*>*> const&
Zenject::__DiContainer___GetDependencyContracts_d__96::__cordl_internal_get___7__wrap1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap1;
}
constexpr void Zenject::__DiContainer___GetDependencyContracts_d__96::__cordl_internal_set___7__wrap1(::System::Collections::Generic::IEnumerator_1<::Zenject::InjectableInfo*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____7__wrap1)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Zenject::__DiContainer___GetDependencyContracts_d__96* Zenject::__DiContainer___GetDependencyContracts_d__96::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::__DiContainer___GetDependencyContracts_d__96*>(__1__state));
}
inline void Zenject::__DiContainer___GetDependencyContracts_d__96::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__DiContainer___GetDependencyContracts_d__96*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
inline void Zenject::__DiContainer___GetDependencyContracts_d__96::System_IDisposable_Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__DiContainer___GetDependencyContracts_d__96*>::get(),
                                                                             "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool Zenject::__DiContainer___GetDependencyContracts_d__96::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__DiContainer___GetDependencyContracts_d__96*>::get(),
                                                                             "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Zenject::__DiContainer___GetDependencyContracts_d__96::__m__Finally1() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__DiContainer___GetDependencyContracts_d__96*>::get(),
                                                                             "<>m__Finally1", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Type* Zenject::__DiContainer___GetDependencyContracts_d__96::System_Collections_Generic_IEnumerator_System_Type__get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__DiContainer___GetDependencyContracts_d__96*>::get(),
                                  "System.Collections.Generic.IEnumerator<System.Type>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method);
}
inline void Zenject::__DiContainer___GetDependencyContracts_d__96::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__DiContainer___GetDependencyContracts_d__96*>::get(),
                                               "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* Zenject::__DiContainer___GetDependencyContracts_d__96::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__DiContainer___GetDependencyContracts_d__96*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::System::Type*>* Zenject::__DiContainer___GetDependencyContracts_d__96::System_Collections_Generic_IEnumerable_System_Type__GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__DiContainer___GetDependencyContracts_d__96*>::get(),
                                  "System.Collections.Generic.IEnumerable<System.Type>.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::System::Type*>*, false>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* Zenject::__DiContainer___GetDependencyContracts_d__96::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__DiContainer___GetDependencyContracts_d__96*>::get(),
                                               "System.Collections.IEnumerable.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Zenject::__DiContainer___GetDependencyContracts_d__96::__DiContainer___GetDependencyContracts_d__96() {}
//  Writing Method size for method: ::Zenject::__DiContainer____c__DisplayClass178_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::__DiContainer____c__DisplayClass178_0::*)()>(
    &::Zenject::__DiContainer____c__DisplayClass178_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3656f08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__DiContainer____c__DisplayClass178_0*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__DiContainer____c__DisplayClass178_0._UnbindId_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Zenject::__DiContainer____c__DisplayClass178_0::*)(::Zenject::__DiContainer__ProviderInfo*)>(
    &::Zenject::__DiContainer____c__DisplayClass178_0::_UnbindId_b__0)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x3656f10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__DiContainer____c__DisplayClass178_0*>::get(), "<UnbindId>b__0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::__DiContainer__ProviderInfo*>::get() })));
    return ___internal_method;
  }
};
constexpr ::Zenject::DiContainer*& Zenject::__DiContainer____c__DisplayClass178_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> const& Zenject::__DiContainer____c__DisplayClass178_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void Zenject::__DiContainer____c__DisplayClass178_0::__cordl_internal_set___4__this(::Zenject::DiContainer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Type*& Zenject::__DiContainer____c__DisplayClass178_0::__cordl_internal_get_contractType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___contractType;
}
constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& Zenject::__DiContainer____c__DisplayClass178_0::__cordl_internal_get_contractType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___contractType;
}
constexpr void Zenject::__DiContainer____c__DisplayClass178_0::__cordl_internal_set_contractType(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___contractType)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Object*& Zenject::__DiContainer____c__DisplayClass178_0::__cordl_internal_get_identifier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___identifier;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& Zenject::__DiContainer____c__DisplayClass178_0::__cordl_internal_get_identifier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___identifier;
}
constexpr void Zenject::__DiContainer____c__DisplayClass178_0::__cordl_internal_set_identifier(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___identifier)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Type*& Zenject::__DiContainer____c__DisplayClass178_0::__cordl_internal_get_concreteType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___concreteType;
}
constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& Zenject::__DiContainer____c__DisplayClass178_0::__cordl_internal_get_concreteType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___concreteType;
}
constexpr void Zenject::__DiContainer____c__DisplayClass178_0::__cordl_internal_set_concreteType(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___concreteType)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Zenject::__DiContainer____c__DisplayClass178_0* Zenject::__DiContainer____c__DisplayClass178_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::__DiContainer____c__DisplayClass178_0*>());
}
inline void Zenject::__DiContainer____c__DisplayClass178_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__DiContainer____c__DisplayClass178_0*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool Zenject::__DiContainer____c__DisplayClass178_0::_UnbindId_b__0(::Zenject::__DiContainer__ProviderInfo* x) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__DiContainer____c__DisplayClass178_0*>::get(), "<UnbindId>b__0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::__DiContainer__ProviderInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, x);
}
// Ctor Parameters []
constexpr ::Zenject::__DiContainer____c__DisplayClass178_0::__DiContainer____c__DisplayClass178_0() {}
template <typename TContract> constexpr TContract& Zenject::__DiContainer____c__DisplayClass203_0_1<TContract>::__cordl_internal_get_instance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___instance;
}
template <typename TContract> constexpr TContract const& Zenject::__DiContainer____c__DisplayClass203_0_1<TContract>::__cordl_internal_get_instance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___instance;
}
template <typename TContract> constexpr void Zenject::__DiContainer____c__DisplayClass203_0_1<TContract>::__cordl_internal_set_instance(TContract value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___instance)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TContract> inline ::Zenject::__DiContainer____c__DisplayClass203_0_1<TContract>* Zenject::__DiContainer____c__DisplayClass203_0_1<TContract>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::__DiContainer____c__DisplayClass203_0_1<TContract>*>());
}
template <typename TContract> inline void Zenject::__DiContainer____c__DisplayClass203_0_1<TContract>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__DiContainer____c__DisplayClass203_0_1<TContract>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TContract> inline ::Zenject::IProvider* Zenject::__DiContainer____c__DisplayClass203_0_1<TContract>::_BindInstance_b__0(::Zenject::DiContainer* container, ::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__DiContainer____c__DisplayClass203_0_1<TContract>*>::get(), "<BindInstance>b__0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::IProvider*, false>(this, ___internal_method, container, type);
}
// Ctor Parameters []
template <typename TContract> constexpr ::Zenject::__DiContainer____c__DisplayClass203_0_1<TContract>::__DiContainer____c__DisplayClass203_0_1() {}
//  Writing Method size for method: ::Zenject::DiContainer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::DiContainer::*)(::System::Collections::Generic::IEnumerable_1<::Zenject::DiContainer*>*, bool)>(
    &::Zenject::DiContainer::_ctor)> {
  constexpr static std::size_t size = 0xa10;
  constexpr static std::size_t addrs = 0x3644318;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::Zenject::DiContainer*>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::DiContainer::*)(bool)>(&::Zenject::DiContainer::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x364ac68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::DiContainer::*)()>(&::Zenject::DiContainer::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x36488a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::DiContainer::*)(::Zenject::DiContainer*, bool)>(&::Zenject::DiContainer::_ctor)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x364acfc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::DiContainer::*)(::Zenject::DiContainer*)>(&::Zenject::DiContainer::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x364ada4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::DiContainer::*)(::System::Collections::Generic::IEnumerable_1<::Zenject::DiContainer*>*)>(
    &::Zenject::DiContainer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x364ae48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::Zenject::DiContainer*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.get_Settings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::ZenjectSettings* (::Zenject::DiContainer::*)()>(&::Zenject::DiContainer::get_Settings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x364ae50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "get_Settings",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.set_Settings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::DiContainer::*)(::Zenject::ZenjectSettings*)>(&::Zenject::DiContainer::set_Settings)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x36450a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "set_Settings", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::ZenjectSettings*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.get_SingletonMarkRegistry
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::Internal::SingletonMarkRegistry* (::Zenject::DiContainer::*)()>(
    &::Zenject::DiContainer::get_SingletonMarkRegistry)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x364ae58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "get_SingletonMarkRegistry",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.get_AllProviders
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::Zenject::IProvider*>* (::Zenject::DiContainer::*)()>(
    &::Zenject::DiContainer::get_AllProviders)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x364ae60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "get_AllProviders",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.InstallDefaultBindings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::DiContainer::*)()>(&::Zenject::DiContainer::InstallDefaultBindings)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x364a5a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "InstallDefaultBindings",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.CreateLazyBinding
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::Zenject::DiContainer::*)(::Zenject::InjectContext*)>(
    &::Zenject::DiContainer::CreateLazyBinding)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x364b060;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "CreateLazyBinding", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.QueueForValidate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::DiContainer::*)(::Zenject::IValidatable*)>(&::Zenject::DiContainer::QueueForValidate)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x364b2b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "QueueForValidate", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::IValidatable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.ShouldInheritBinding
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Zenject::DiContainer::*)(::Zenject::BindStatement*, ::Zenject::DiContainer*)>(
    &::Zenject::DiContainer::ShouldInheritBinding)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x364ab30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "ShouldInheritBinding", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::BindStatement*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.get_ContextTransform
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Transform> (::Zenject::DiContainer::*)()>(&::Zenject::DiContainer::get_ContextTransform)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x364b3fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "get_ContextTransform",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.get_AssertOnNewGameObjects
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Zenject::DiContainer::*)()>(&::Zenject::DiContainer::get_AssertOnNewGameObjects)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x364b4b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "get_AssertOnNewGameObjects",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.set_AssertOnNewGameObjects
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::DiContainer::*)(bool)>(&::Zenject::DiContainer::set_AssertOnNewGameObjects)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x364b4bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "set_AssertOnNewGameObjects",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.get_InheritedDefaultParent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Transform> (::Zenject::DiContainer::*)()>(
    &::Zenject::DiContainer::get_InheritedDefaultParent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x364b4c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "get_InheritedDefaultParent",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.get_DefaultParent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Transform> (::Zenject::DiContainer::*)()>(&::Zenject::DiContainer::get_DefaultParent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x364b4d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "get_DefaultParent",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.set_DefaultParent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::DiContainer::*)(::UnityEngine::Transform*)>(&::Zenject::DiContainer::set_DefaultParent)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3642dc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "set_DefaultParent", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.get_ParentContainers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Zenject::DiContainer*, ::Array<::Zenject::DiContainer*>*> (::Zenject::DiContainer::*)()>(
    &::Zenject::DiContainer::get_ParentContainers)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x364b3d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "get_ParentContainers",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.get_AncestorContainers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Zenject::DiContainer*, ::Array<::Zenject::DiContainer*>*> (::Zenject::DiContainer::*)()>(
    &::Zenject::DiContainer::get_AncestorContainers)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x364b4d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "get_AncestorContainers",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.get_ChecksForCircularDependencies
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Zenject::DiContainer::*)()>(&::Zenject::DiContainer::get_ChecksForCircularDependencies)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x364b504;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "get_ChecksForCircularDependencies",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.get_IsValidating
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Zenject::DiContainer::*)()>(&::Zenject::DiContainer::get_IsValidating)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x364b50c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "get_IsValidating",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.get_IsInstalling
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Zenject::DiContainer::*)()>(&::Zenject::DiContainer::get_IsInstalling)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x364b514;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "get_IsInstalling",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.set_IsInstalling
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::DiContainer::*)(bool)>(&::Zenject::DiContainer::set_IsInstalling)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x364b51c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "set_IsInstalling", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.get_AllContracts
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::Zenject::BindingId>* (::Zenject::DiContainer::*)()>(
    &::Zenject::DiContainer::get_AllContracts)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x364b528;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "get_AllContracts",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.ResolveRoots
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::DiContainer::*)()>(&::Zenject::DiContainer::ResolveRoots)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x3642b0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "ResolveRoots",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.ResolveDependencyRoots
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::DiContainer::*)()>(&::Zenject::DiContainer::ResolveDependencyRoots)> {
  constexpr static std::size_t size = 0x80c;
  constexpr static std::size_t addrs = 0x364b580;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "ResolveDependencyRoots",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.ValidateFullResolve
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::DiContainer::*)()>(&::Zenject::DiContainer::ValidateFullResolve)> {
  constexpr static std::size_t size = 0x380;
  constexpr static std::size_t addrs = 0x364c30c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "ValidateFullResolve",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.FlushValidationQueue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::DiContainer::*)()>(&::Zenject::DiContainer::FlushValidationQueue)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x364bd8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "FlushValidationQueue",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.CreateSubContainer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::DiContainer* (::Zenject::DiContainer::*)()>(&::Zenject::DiContainer::CreateSubContainer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36424a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "CreateSubContainer",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.QueueForInject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::DiContainer::*)(::System::Object*)>(&::Zenject::DiContainer::QueueForInject)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x36428fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "QueueForInject", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.CreateSubContainer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::DiContainer* (::Zenject::DiContainer::*)(bool)>(&::Zenject::DiContainer::CreateSubContainer)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x364c7e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "CreateSubContainer", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.RegisterProvider
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::DiContainer::*)(::Zenject::BindingId, ::Zenject::BindingCondition*, ::Zenject::IProvider*, bool)>(
    &::Zenject::DiContainer::RegisterProvider)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x3639084;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "RegisterProvider", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::BindingId>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::BindingCondition*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::IProvider*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.GetProviderMatches
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::DiContainer::*)(
    ::Zenject::InjectContext*, ::System::Collections::Generic::List_1<::Zenject::__DiContainer__ProviderInfo*>*)>(&::Zenject::DiContainer::GetProviderMatches)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0x364c8b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "GetProviderMatches", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::__DiContainer__ProviderInfo*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.TryGetUniqueProvider
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::__DiContainer__ProviderInfo* (::Zenject::DiContainer::*)(::Zenject::InjectContext*)>(
    &::Zenject::DiContainer::TryGetUniqueProvider)> {
  constexpr static std::size_t size = 0x5c4;
  constexpr static std::size_t addrs = 0x364cc04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "TryGetUniqueProvider", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.FlattenInheritanceChain
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::Zenject::DiContainer*>* (::Zenject::DiContainer::*)()>(
    &::Zenject::DiContainer::FlattenInheritanceChain)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x364a908;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "FlattenInheritanceChain",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.GetLocalProviders
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::Zenject::DiContainer::*)(::Zenject::BindingId, ::System::Collections::Generic::List_1<::Zenject::__DiContainer__ProviderInfo*>*)>(&::Zenject::DiContainer::GetLocalProviders)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x364d234;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "GetLocalProviders", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::BindingId>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::__DiContainer__ProviderInfo*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.GetProvidersForContract
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::DiContainer::*)(
    ::Zenject::BindingId, ::Zenject::InjectSources, ::System::Collections::Generic::List_1<::Zenject::__DiContainer__ProviderInfo*>*)>(&::Zenject::DiContainer::GetProvidersForContract)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x364cb34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "GetProvidersForContract", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::BindingId>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectSources>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::__DiContainer__ProviderInfo*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.ResolveAll
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IList* (::Zenject::DiContainer::*)(::Zenject::InjectContext*)>(
    &::Zenject::DiContainer::ResolveAll)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x364c68c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "ResolveAll", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.ResolveAll
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::Zenject::DiContainer::*)(::Zenject::InjectContext*, ::System::Collections::Generic::List_1<::System::Object*>*)>(&::Zenject::DiContainer::ResolveAll)> {
  constexpr static std::size_t size = 0x700;
  constexpr static std::size_t addrs = 0x364d350;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "ResolveAll", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Object*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.CheckForInstallWarning
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::DiContainer::*)(::Zenject::InjectContext*)>(&::Zenject::DiContainer::CheckForInstallWarning)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x364da50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "CheckForInstallWarning", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.ResolveType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (::Zenject::DiContainer::*)(::System::Type*)>(&::Zenject::DiContainer::ResolveType)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x364da80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "ResolveType", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.ResolveType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (::Zenject::DiContainer::*)(::Zenject::InjectContext*)>(&::Zenject::DiContainer::ResolveType)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x364dc30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "ResolveType", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.ResolveTypeAll
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::System::Type*>* (::Zenject::DiContainer::*)(::System::Type*)>(
    &::Zenject::DiContainer::ResolveTypeAll)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x364ded0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "ResolveTypeAll", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.ResolveTypeAll
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::List_1<::System::Type*>* (::Zenject::DiContainer::*)(::System::Type*, ::System::Object*)>(&::Zenject::DiContainer::ResolveTypeAll)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x364ded8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "ResolveTypeAll", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.ResolveTypeAll
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::System::Type*>* (::Zenject::DiContainer::*)(::Zenject::InjectContext*)>(
    &::Zenject::DiContainer::ResolveTypeAll)> {
  constexpr static std::size_t size = 0x37c;
  constexpr static std::size_t addrs = 0x364e098;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "ResolveTypeAll", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.Resolve
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::Zenject::DiContainer::*)(::Zenject::BindingId)>(&::Zenject::DiContainer::Resolve)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x364e414;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "Resolve", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::BindingId>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.Resolve
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::Zenject::DiContainer::*)(::Zenject::InjectContext*)>(&::Zenject::DiContainer::Resolve)> {
  constexpr static std::size_t size = 0xc5c;
  constexpr static std::size_t addrs = 0x364e5d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "Resolve", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.SafeGetInstances
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::DiContainer::*)(
    ::Zenject::__DiContainer__ProviderInfo*, ::Zenject::InjectContext*, ::System::Collections::Generic::List_1<::System::Object*>*)>(&::Zenject::DiContainer::SafeGetInstances)> {
  constexpr static std::size_t size = 0x360;
  constexpr static std::size_t addrs = 0x364bfac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "SafeGetInstances", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::__DiContainer__ProviderInfo*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Object*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.GetDecoratedInstances
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::DiContainer::*)(
    ::Zenject::IProvider*, ::Zenject::InjectContext*, ::System::Collections::Generic::List_1<::System::Object*>*)>(&::Zenject::DiContainer::GetDecoratedInstances)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x364f230;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "GetDecoratedInstances", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::IProvider*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Object*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.TryGetDecoratorProvider
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::Internal::IDecoratorProvider* (::Zenject::DiContainer::*)(::System::Type*)>(
    &::Zenject::DiContainer::TryGetDecoratorProvider)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x364f344;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "TryGetDecoratorProvider", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.GetContainerHeirarchyDistance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Zenject::DiContainer::*)(::Zenject::DiContainer*)>(
    &::Zenject::DiContainer::GetContainerHeirarchyDistance)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x364d1c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "GetContainerHeirarchyDistance", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.GetContainerHeirarchyDistance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<int32_t> (::Zenject::DiContainer::*)(::Zenject::DiContainer*, int32_t)>(
    &::Zenject::DiContainer::GetContainerHeirarchyDistance)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x364f424;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "GetContainerHeirarchyDistance", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.GetDependencyContracts
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::System::Type*>* (::Zenject::DiContainer::*)(::System::Type*)>(
    &::Zenject::DiContainer::GetDependencyContracts)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x364f574;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "GetDependencyContracts", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.InstantiateInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Object* (::Zenject::DiContainer::*)(::System::Type*, bool, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*, ::Zenject::InjectContext*, ::System::Object*)>(
        &::Zenject::DiContainer::InstantiateInternal)> {
  constexpr static std::size_t size = 0xb20;
  constexpr static std::size_t addrs = 0x364f5ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "InstantiateInternal", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.InjectExplicit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::Zenject::DiContainer::*)(::System::Object*, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*)>(&::Zenject::DiContainer::InjectExplicit)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x36502a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "InjectExplicit", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.InjectExplicit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::DiContainer::*)(
    ::System::Object*, ::System::Type*, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*, ::Zenject::InjectContext*, ::System::Object*)>(&::Zenject::DiContainer::InjectExplicit)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x365010c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "InjectExplicit", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.CallInjectMethodsTopDown
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::DiContainer::*)(
    ::System::Object*, ::System::Type*, ::Zenject::InjectTypeInfo*, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*, ::Zenject::InjectContext*, ::System::Object*, bool)>(
    &::Zenject::DiContainer::CallInjectMethodsTopDown)> {
  constexpr static std::size_t size = 0x5fc;
  constexpr static std::size_t addrs = 0x3650858;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "CallInjectMethodsTopDown", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 7>{
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectTypeInfo*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.InjectMembersTopDown
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::DiContainer::*)(
    ::System::Object*, ::System::Type*, ::Zenject::InjectTypeInfo*, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*, ::Zenject::InjectContext*, ::System::Object*, bool)>(
    &::Zenject::DiContainer::InjectMembersTopDown)> {
  constexpr static std::size_t size = 0x318;
  constexpr static std::size_t addrs = 0x3650e54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "InjectMembersTopDown", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 7>{
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectTypeInfo*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.InjectExplicitInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::Zenject::DiContainer::*)(::System::Object*, ::System::Type*, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*, ::Zenject::InjectContext*, ::System::Object*)>(
        &::Zenject::DiContainer::InjectExplicitInternal)> {
  constexpr static std::size_t size = 0x4c4;
  constexpr static std::size_t addrs = 0x3650394;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "InjectExplicitInternal", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.CreateAndParentPrefabResource
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::GameObject> (::Zenject::DiContainer::*)(
    ::StringW, ::Zenject::GameObjectCreationParameters*, ::Zenject::InjectContext*, ByRef<bool>)>(&::Zenject::DiContainer::CreateAndParentPrefabResource)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x365116c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "CreateAndParentPrefabResource", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::GameObjectCreationParameters*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.GetPrefabAsGameObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::GameObject> (::Zenject::DiContainer::*)(::UnityEngine::Object*)>(
    &::Zenject::DiContainer::GetPrefabAsGameObject)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x36516d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "GetPrefabAsGameObject", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.CreateAndParentPrefab
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::GameObject> (::Zenject::DiContainer::*)(
    ::UnityEngine::Object*, ::Zenject::GameObjectCreationParameters*, ::Zenject::InjectContext*, ByRef<bool>)>(&::Zenject::DiContainer::CreateAndParentPrefab)> {
  constexpr static std::size_t size = 0x434;
  constexpr static std::size_t addrs = 0x36512a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "CreateAndParentPrefab", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::GameObjectCreationParameters*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.CreateEmptyGameObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::GameObject> (::Zenject::DiContainer::*)(::StringW)>(
    &::Zenject::DiContainer::CreateEmptyGameObject)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x3651d2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "CreateEmptyGameObject", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.CreateEmptyGameObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityW<::UnityEngine::GameObject> (::Zenject::DiContainer::*)(::Zenject::GameObjectCreationParameters*, ::Zenject::InjectContext*)>(&::Zenject::DiContainer::CreateEmptyGameObject)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x3651da4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "CreateEmptyGameObject", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::GameObjectCreationParameters*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.GetTransformGroup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityW<::UnityEngine::Transform> (::Zenject::DiContainer::*)(::Zenject::GameObjectCreationParameters*, ::Zenject::InjectContext*)>(&::Zenject::DiContainer::GetTransformGroup)> {
  constexpr static std::size_t size = 0x53c;
  constexpr static std::size_t addrs = 0x36517f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "GetTransformGroup", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::GameObjectCreationParameters*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.CreateTransformGroup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::GameObject> (::Zenject::DiContainer::*)(::StringW)>(
    &::Zenject::DiContainer::CreateTransformGroup)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x3651f2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "CreateTransformGroup", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.Instantiate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::Zenject::DiContainer::*)(::System::Type*)>(&::Zenject::DiContainer::Instantiate)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x3640ca8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "Instantiate", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.Instantiate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Object* (::Zenject::DiContainer::*)(::System::Type*, ::System::Collections::Generic::IEnumerable_1<::System::Object*>*)>(&::Zenject::DiContainer::Instantiate)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x3651fec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "Instantiate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.InstantiateComponent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Component> (::Zenject::DiContainer::*)(::System::Type*, ::UnityEngine::GameObject*)>(
    &::Zenject::DiContainer::InstantiateComponent)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x365212c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "InstantiateComponent", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.InstantiateComponent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Component> (::Zenject::DiContainer::*)(
    ::System::Type*, ::UnityEngine::GameObject*, ::System::Collections::Generic::IEnumerable_1<::System::Object*>*)>(&::Zenject::DiContainer::InstantiateComponent)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x365219c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "InstantiateComponent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.InstantiatePrefab
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::GameObject> (::Zenject::DiContainer::*)(::UnityEngine::Object*)>(
    &::Zenject::DiContainer::InstantiatePrefab)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x36522a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "InstantiatePrefab", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.InstantiatePrefab
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::GameObject> (::Zenject::DiContainer::*)(::UnityEngine::Object*, ::UnityEngine::Transform*)>(
    &::Zenject::DiContainer::InstantiatePrefab)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x3652398;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "InstantiatePrefab", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.InstantiatePrefab
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::GameObject> (::Zenject::DiContainer::*)(
    ::UnityEngine::Object*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Transform*)>(&::Zenject::DiContainer::InstantiatePrefab)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x3652414;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "InstantiatePrefab", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.InstantiatePrefab
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityW<::UnityEngine::GameObject> (::Zenject::DiContainer::*)(::UnityEngine::Object*, ::Zenject::GameObjectCreationParameters*)>(&::Zenject::DiContainer::InstantiatePrefab)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x3652314;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "InstantiatePrefab", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::GameObjectCreationParameters*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.InstantiatePrefabResource
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::GameObject> (::Zenject::DiContainer::*)(::StringW)>(
    &::Zenject::DiContainer::InstantiatePrefabResource)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x3652714;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "InstantiatePrefabResource", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.InstantiatePrefabResource
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::GameObject> (::Zenject::DiContainer::*)(::StringW, ::UnityEngine::Transform*)>(
    &::Zenject::DiContainer::InstantiatePrefabResource)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x36528a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "InstantiatePrefabResource", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.InstantiatePrefabResource
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::GameObject> (::Zenject::DiContainer::*)(
    ::StringW, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Transform*)>(&::Zenject::DiContainer::InstantiatePrefabResource)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x365291c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "InstantiatePrefabResource", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.InstantiatePrefabResource
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::GameObject> (::Zenject::DiContainer::*)(::StringW, ::Zenject::GameObjectCreationParameters*)>(
    &::Zenject::DiContainer::InstantiatePrefabResource)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x3652784;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "InstantiatePrefabResource", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::GameObjectCreationParameters*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.InstantiatePrefabForComponent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Object* (::Zenject::DiContainer::*)(::System::Type*, ::UnityEngine::Object*, ::UnityEngine::Transform*, ::System::Collections::Generic::IEnumerable_1<::System::Object*>*)>(
        &::Zenject::DiContainer::InstantiatePrefabForComponent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3652a68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "InstantiatePrefabForComponent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.InstantiatePrefabForComponent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (
    ::Zenject::DiContainer::*)(::System::Type*, ::UnityEngine::Object*, ::System::Collections::Generic::IEnumerable_1<::System::Object*>*, ::Zenject::GameObjectCreationParameters*)>(
    &::Zenject::DiContainer::InstantiatePrefabForComponent)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x3652b04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "InstantiatePrefabForComponent", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::GameObjectCreationParameters*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.InstantiatePrefabResourceForComponent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Object* (::Zenject::DiContainer::*)(::System::Type*, ::StringW, ::UnityEngine::Transform*, ::System::Collections::Generic::IEnumerable_1<::System::Object*>*)>(
        &::Zenject::DiContainer::InstantiatePrefabResourceForComponent)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x3652bf8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "InstantiatePrefabResourceForComponent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.InstantiateScriptableObjectResource
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::Zenject::DiContainer::*)(::System::Type*, ::StringW)>(
    &::Zenject::DiContainer::InstantiateScriptableObjectResource)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x3652da0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "InstantiateScriptableObjectResource", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.InstantiateScriptableObjectResource
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (
    ::Zenject::DiContainer::*)(::System::Type*, ::StringW, ::System::Collections::Generic::IEnumerable_1<::System::Object*>*)>(&::Zenject::DiContainer::InstantiateScriptableObjectResource)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x3652e0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "InstantiateScriptableObjectResource", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.InjectGameObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::DiContainer::*)(::UnityEngine::GameObject*)>(&::Zenject::DiContainer::InjectGameObject)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x3652560;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "InjectGameObject", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.InjectGameObjectForComponent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Object* (::Zenject::DiContainer::*)(::UnityEngine::GameObject*, ::System::Type*, ::System::Collections::Generic::IEnumerable_1<::System::Object*>*)>(
        &::Zenject::DiContainer::InjectGameObjectForComponent)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x3652fd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "InjectGameObjectForComponent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.InjectGameObjectForComponentExplicit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Component> (::Zenject::DiContainer::*)(
    ::UnityEngine::GameObject*, ::System::Type*, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*, ::Zenject::InjectContext*, ::System::Object*)>(
    &::Zenject::DiContainer::InjectGameObjectForComponentExplicit)> {
  constexpr static std::size_t size = 0x3ec;
  constexpr static std::size_t addrs = 0x3653084;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "InjectGameObjectForComponentExplicit", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.Inject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::DiContainer::*)(::System::Object*)>(&::Zenject::DiContainer::Inject)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x3640d0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "Inject", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.Inject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::Zenject::DiContainer::*)(::System::Object*, ::System::Collections::Generic::IEnumerable_1<::System::Object*>*)>(&::Zenject::DiContainer::Inject)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x3653470;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "Inject", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.Resolve
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::Zenject::DiContainer::*)(::System::Type*)>(&::Zenject::DiContainer::Resolve)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36534a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "Resolve", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.ResolveId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::Zenject::DiContainer::*)(::System::Type*, ::System::Object*)>(
    &::Zenject::DiContainer::ResolveId)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x36534a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "ResolveId", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.TryResolve
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::Zenject::DiContainer::*)(::System::Type*)>(&::Zenject::DiContainer::TryResolve)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3653668;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "TryResolve", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.TryResolveId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::Zenject::DiContainer::*)(::System::Type*, ::System::Object*)>(
    &::Zenject::DiContainer::TryResolveId)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x3653670;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "TryResolveId", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.ResolveAll
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IList* (::Zenject::DiContainer::*)(::System::Type*)>(&::Zenject::DiContainer::ResolveAll)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3653838;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "ResolveAll", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.ResolveIdAll
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IList* (::Zenject::DiContainer::*)(::System::Type*, ::System::Object*)>(
    &::Zenject::DiContainer::ResolveIdAll)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x3653840;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "ResolveIdAll", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.UnbindAll
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::DiContainer::*)()>(&::Zenject::DiContainer::UnbindAll)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x3653a08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "UnbindAll",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.Unbind
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Zenject::DiContainer::*)(::System::Type*)>(&::Zenject::DiContainer::Unbind)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3653a60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "Unbind", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.UnbindId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Zenject::DiContainer::*)(::System::Type*, ::System::Object*)>(&::Zenject::DiContainer::UnbindId)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x3653a68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "UnbindId", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.UnbindInterfacesTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::DiContainer::*)(::System::Type*)>(&::Zenject::DiContainer::UnbindInterfacesTo)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x3653aec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "UnbindInterfacesTo", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.Unbind
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Zenject::DiContainer::*)(::System::Type*, ::System::Type*)>(&::Zenject::DiContainer::Unbind)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3653ba8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "Unbind", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.UnbindId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Zenject::DiContainer::*)(::System::Type*, ::System::Type*, ::System::Object*)>(
    &::Zenject::DiContainer::UnbindId)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0x3653bb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "UnbindId", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.HasBinding
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Zenject::DiContainer::*)(::System::Type*)>(&::Zenject::DiContainer::HasBinding)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3653e44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "HasBinding", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.HasBindingId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Zenject::DiContainer::*)(::System::Type*, ::System::Object*)>(&::Zenject::DiContainer::HasBindingId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3639074;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "HasBindingId", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.HasBindingId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Zenject::DiContainer::*)(::System::Type*, ::System::Object*, ::Zenject::InjectSources)>(
    &::Zenject::DiContainer::HasBindingId)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x3653e50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "HasBindingId", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectSources>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.HasBinding
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Zenject::DiContainer::*)(::Zenject::InjectContext*)>(&::Zenject::DiContainer::HasBinding)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x3654020;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "HasBinding", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.FlushBindings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::DiContainer::*)()>(&::Zenject::DiContainer::FlushBindings)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x364a7d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "FlushBindings",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.FinalizeBinding
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::DiContainer::*)(::Zenject::BindStatement*)>(&::Zenject::DiContainer::FinalizeBinding)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x364abec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "FinalizeBinding", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::BindStatement*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.StartBinding
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::BindStatement* (::Zenject::DiContainer::*)(bool)>(&::Zenject::DiContainer::StartBinding)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x365418c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "StartBinding", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.Rebind
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::ConcreteBinderNonGeneric* (::Zenject::DiContainer::*)(::System::Type*)>(&::Zenject::DiContainer::Rebind)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3654260;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "Rebind", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.RebindId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::ConcreteBinderNonGeneric* (::Zenject::DiContainer::*)(::System::Type*, ::System::Object*)>(
    &::Zenject::DiContainer::RebindId)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x3654268;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "RebindId", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.Bind
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Zenject::ConcreteIdBinderNonGeneric* (::Zenject::DiContainer::*)(::ArrayW<::System::Type*, ::Array<::System::Type*>*>)>(&::Zenject::DiContainer::Bind)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x364182c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "Bind", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.Bind
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Zenject::ConcreteIdBinderNonGeneric* (::Zenject::DiContainer::*)(::System::Collections::Generic::IEnumerable_1<::System::Type*>*)>(&::Zenject::DiContainer::Bind)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x36544a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "Bind", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::System::Type*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.BindInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::ConcreteIdBinderNonGeneric* (::Zenject::DiContainer::*)(::Zenject::BindInfo*, ::Zenject::BindStatement*)>(
    &::Zenject::DiContainer::BindInternal)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x365432c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "BindInternal", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::BindInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::BindStatement*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.Bind
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Zenject::ConcreteIdBinderNonGeneric* (::Zenject::DiContainer::*)(::System::Action_1<::Zenject::ConventionSelectTypesBinder*>*)>(&::Zenject::DiContainer::Bind)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x3654530;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "Bind", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Zenject::ConventionSelectTypesBinder*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.BindInterfacesTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::FromBinderNonGeneric* (::Zenject::DiContainer::*)(::System::Type*)>(
    &::Zenject::DiContainer::BindInterfacesTo)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x3654768;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "BindInterfacesTo", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.BindInterfacesAndSelfTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::FromBinderNonGeneric* (::Zenject::DiContainer::*)(::System::Type*)>(
    &::Zenject::DiContainer::BindInterfacesAndSelfTo)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x3654930;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "BindInterfacesAndSelfTo", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.BindInstances
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::DiContainer::*)(::ArrayW<::System::Object*, ::Array<::System::Object*>*>)>(
    &::Zenject::DiContainer::BindInstances)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x3654ae8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "BindInstances", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.InstantiateExplicit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Object* (::Zenject::DiContainer::*)(::System::Type*, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*)>(&::Zenject::DiContainer::InstantiateExplicit)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x3652094;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "InstantiateExplicit", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.InstantiateExplicit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Object* (::Zenject::DiContainer::*)(::System::Type*, bool, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*, ::Zenject::InjectContext*, ::System::Object*)>(
        &::Zenject::DiContainer::InstantiateExplicit)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x3654c28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "InstantiateExplicit", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.InstantiateComponentExplicit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Component> (::Zenject::DiContainer::*)(
    ::System::Type*, ::UnityEngine::GameObject*, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*)>(&::Zenject::DiContainer::InstantiateComponentExplicit)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x36521d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "InstantiateComponentExplicit", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.InstantiateScriptableObjectResourceExplicit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (
    ::Zenject::DiContainer::*)(::System::Type*, ::StringW, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*)>(&::Zenject::DiContainer::InstantiateScriptableObjectResourceExplicit)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x3652e8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "InstantiateScriptableObjectResourceExplicit", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.InstantiatePrefabResourceForComponentExplicit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Object* (::Zenject::DiContainer::*)(::System::Type*, ::StringW, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*, ::Zenject::GameObjectCreationParameters*)>(
        &::Zenject::DiContainer::InstantiatePrefabResourceForComponentExplicit)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x3652cf4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "InstantiatePrefabResourceForComponentExplicit", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::GameObjectCreationParameters*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.InstantiatePrefabResourceForComponentExplicit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Object* (::Zenject::DiContainer::*)(::System::Type*, ::StringW, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*, ::Zenject::InjectContext*,
                                                              ::System::Object*, ::Zenject::GameObjectCreationParameters*)>(&::Zenject::DiContainer::InstantiatePrefabResourceForComponentExplicit)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x3654d30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "InstantiatePrefabResourceForComponentExplicit", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::GameObjectCreationParameters*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.InstantiatePrefabForComponentExplicit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Object* (::Zenject::DiContainer::*)(::System::Type*, ::UnityEngine::Object*, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*)>(
        &::Zenject::DiContainer::InstantiatePrefabForComponentExplicit)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x3655014;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "InstantiatePrefabForComponentExplicit", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.InstantiatePrefabForComponentExplicit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (
    ::Zenject::DiContainer::*)(::System::Type*, ::UnityEngine::Object*, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*, ::Zenject::GameObjectCreationParameters*)>(
    &::Zenject::DiContainer::InstantiatePrefabForComponentExplicit)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x3652b4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "InstantiatePrefabForComponentExplicit", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::GameObjectCreationParameters*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.InstantiatePrefabForComponentExplicit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Object* (::Zenject::DiContainer::*)(::System::Type*, ::UnityEngine::Object*, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*, ::Zenject::InjectContext*,
                                                              ::System::Object*, ::Zenject::GameObjectCreationParameters*)>(&::Zenject::DiContainer::InstantiatePrefabForComponentExplicit)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x3654e7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "InstantiatePrefabForComponentExplicit", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::GameObjectCreationParameters*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.BindExecutionOrder
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::DiContainer::*)(::System::Type*, int32_t)>(&::Zenject::DiContainer::BindExecutionOrder)> {
  constexpr static std::size_t size = 0x370;
  constexpr static std::size_t addrs = 0x365509c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "BindExecutionOrder", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.BindTickableExecutionOrder
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::CopyNonLazyBinder* (::Zenject::DiContainer::*)(::System::Type*, int32_t)>(
    &::Zenject::DiContainer::BindTickableExecutionOrder)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x365540c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "BindTickableExecutionOrder", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.BindInitializableExecutionOrder
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::CopyNonLazyBinder* (::Zenject::DiContainer::*)(::System::Type*, int32_t)>(
    &::Zenject::DiContainer::BindInitializableExecutionOrder)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x3655524;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "BindInitializableExecutionOrder", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.BindDisposableExecutionOrder
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::CopyNonLazyBinder* (::Zenject::DiContainer::*)(::System::Type*, int32_t)>(
    &::Zenject::DiContainer::BindDisposableExecutionOrder)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x365563c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "BindDisposableExecutionOrder", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.BindLateDisposableExecutionOrder
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::CopyNonLazyBinder* (::Zenject::DiContainer::*)(::System::Type*, int32_t)>(
    &::Zenject::DiContainer::BindLateDisposableExecutionOrder)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x3655754;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "BindLateDisposableExecutionOrder", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.BindFixedTickableExecutionOrder
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::CopyNonLazyBinder* (::Zenject::DiContainer::*)(::System::Type*, int32_t)>(
    &::Zenject::DiContainer::BindFixedTickableExecutionOrder)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x3655890;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "BindFixedTickableExecutionOrder", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.BindLateTickableExecutionOrder
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::CopyNonLazyBinder* (::Zenject::DiContainer::*)(::System::Type*, int32_t)>(
    &::Zenject::DiContainer::BindLateTickableExecutionOrder)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x3655a08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "BindLateTickableExecutionOrder", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DiContainer.BindPoolableExecutionOrder
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::CopyNonLazyBinder* (::Zenject::DiContainer::*)(::System::Type*, int32_t)>(
    &::Zenject::DiContainer::BindPoolableExecutionOrder)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x3655b80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "BindPoolableExecutionOrder", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Zenject::IInstantiator"
constexpr Zenject::DiContainer::operator ::Zenject::IInstantiator*() noexcept {
  return static_cast<::Zenject::IInstantiator*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::IInstantiator"
constexpr ::Zenject::IInstantiator* Zenject::DiContainer::i___Zenject__IInstantiator() noexcept {
  return static_cast<::Zenject::IInstantiator*>(static_cast<void*>(this));
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*, ::Zenject::Internal::IDecoratorProvider*>*& Zenject::DiContainer::__cordl_internal_get__decorators() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____decorators;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::System::Type*, ::Zenject::Internal::IDecoratorProvider*>*> const&
Zenject::DiContainer::__cordl_internal_get__decorators() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____decorators;
}
constexpr void Zenject::DiContainer::__cordl_internal_set__decorators(::System::Collections::Generic::Dictionary_2<::System::Type*, ::Zenject::Internal::IDecoratorProvider*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____decorators)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::Zenject::BindingId, ::System::Collections::Generic::List_1<::Zenject::__DiContainer__ProviderInfo*>*>*&
Zenject::DiContainer::__cordl_internal_get__providers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____providers;
}
constexpr ::cordl_internals::to_const_pointer<
    ::System::Collections::Generic::Dictionary_2<::Zenject::BindingId, ::System::Collections::Generic::List_1<::Zenject::__DiContainer__ProviderInfo*>*>*> const&
Zenject::DiContainer::__cordl_internal_get__providers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____providers;
}
constexpr void Zenject::DiContainer::__cordl_internal_set__providers(
    ::System::Collections::Generic::Dictionary_2<::Zenject::BindingId, ::System::Collections::Generic::List_1<::Zenject::__DiContainer__ProviderInfo*>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____providers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::ArrayW<::Zenject::DiContainer*, ::Array<::Zenject::DiContainer*>*>, ::Array<::ArrayW<::Zenject::DiContainer*, ::Array<::Zenject::DiContainer*>*>>*>&
Zenject::DiContainer::__cordl_internal_get__containerLookups() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____containerLookups;
}
constexpr ::ArrayW<::ArrayW<::Zenject::DiContainer*, ::Array<::Zenject::DiContainer*>*>, ::Array<::ArrayW<::Zenject::DiContainer*, ::Array<::Zenject::DiContainer*>*>>*> const&
Zenject::DiContainer::__cordl_internal_get__containerLookups() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____containerLookups;
}
constexpr void Zenject::DiContainer::__cordl_internal_set__containerLookups(
    ::ArrayW<::ArrayW<::Zenject::DiContainer*, ::Array<::Zenject::DiContainer*>*>, ::Array<::ArrayW<::Zenject::DiContainer*, ::Array<::Zenject::DiContainer*>*>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____containerLookups)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::HashSet_1<::Zenject::Internal::LookupId*>*& Zenject::DiContainer::__cordl_internal_get__resolvesInProgress() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____resolvesInProgress;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::Zenject::Internal::LookupId*>*> const&
Zenject::DiContainer::__cordl_internal_get__resolvesInProgress() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____resolvesInProgress;
}
constexpr void Zenject::DiContainer::__cordl_internal_set__resolvesInProgress(::System::Collections::Generic::HashSet_1<::Zenject::Internal::LookupId*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____resolvesInProgress)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::HashSet_1<::Zenject::Internal::LookupId*>*& Zenject::DiContainer::__cordl_internal_get__resolvesTwiceInProgress() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____resolvesTwiceInProgress;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::Zenject::Internal::LookupId*>*> const&
Zenject::DiContainer::__cordl_internal_get__resolvesTwiceInProgress() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____resolvesTwiceInProgress;
}
constexpr void Zenject::DiContainer::__cordl_internal_set__resolvesTwiceInProgress(::System::Collections::Generic::HashSet_1<::Zenject::Internal::LookupId*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____resolvesTwiceInProgress)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Zenject::LazyInstanceInjector*& Zenject::DiContainer::__cordl_internal_get__lazyInjector() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lazyInjector;
}
constexpr ::cordl_internals::to_const_pointer<::Zenject::LazyInstanceInjector*> const& Zenject::DiContainer::__cordl_internal_get__lazyInjector() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lazyInjector;
}
constexpr void Zenject::DiContainer::__cordl_internal_set__lazyInjector(::Zenject::LazyInstanceInjector* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____lazyInjector)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Zenject::Internal::SingletonMarkRegistry*& Zenject::DiContainer::__cordl_internal_get__singletonMarkRegistry() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____singletonMarkRegistry;
}
constexpr ::cordl_internals::to_const_pointer<::Zenject::Internal::SingletonMarkRegistry*> const& Zenject::DiContainer::__cordl_internal_get__singletonMarkRegistry() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____singletonMarkRegistry;
}
constexpr void Zenject::DiContainer::__cordl_internal_set__singletonMarkRegistry(::Zenject::Internal::SingletonMarkRegistry* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____singletonMarkRegistry)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Queue_1<::Zenject::BindStatement*>*& Zenject::DiContainer::__cordl_internal_get__currentBindings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentBindings;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Queue_1<::Zenject::BindStatement*>*> const& Zenject::DiContainer::__cordl_internal_get__currentBindings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentBindings;
}
constexpr void Zenject::DiContainer::__cordl_internal_set__currentBindings(::System::Collections::Generic::Queue_1<::Zenject::BindStatement*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____currentBindings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::Zenject::BindStatement*>*& Zenject::DiContainer::__cordl_internal_get__childBindings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____childBindings;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Zenject::BindStatement*>*> const& Zenject::DiContainer::__cordl_internal_get__childBindings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____childBindings;
}
constexpr void Zenject::DiContainer::__cordl_internal_set__childBindings(::System::Collections::Generic::List_1<::Zenject::BindStatement*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____childBindings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::HashSet_1<::System::Type*>*& Zenject::DiContainer::__cordl_internal_get__validatedTypes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____validatedTypes;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::System::Type*>*> const& Zenject::DiContainer::__cordl_internal_get__validatedTypes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____validatedTypes;
}
constexpr void Zenject::DiContainer::__cordl_internal_set__validatedTypes(::System::Collections::Generic::HashSet_1<::System::Type*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____validatedTypes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::Zenject::IValidatable*>*& Zenject::DiContainer::__cordl_internal_get__validationQueue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____validationQueue;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Zenject::IValidatable*>*> const& Zenject::DiContainer::__cordl_internal_get__validationQueue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____validationQueue;
}
constexpr void Zenject::DiContainer::__cordl_internal_set__validationQueue(::System::Collections::Generic::List_1<::Zenject::IValidatable*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____validationQueue)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____contextTransform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____inheritedDefaultParent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____explicitDefaultParent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
constexpr ::cordl_internals::to_const_pointer<::Zenject::ZenjectSettings*> const& Zenject::DiContainer::__cordl_internal_get__settings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settings;
}
constexpr void Zenject::DiContainer::__cordl_internal_set__settings(::Zenject::ZenjectSettings* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____settings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
inline ::Zenject::DiContainer* Zenject::DiContainer::New_ctor(::System::Collections::Generic::IEnumerable_1<::Zenject::DiContainer*>* parentContainersEnumerable, bool isValidating) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::DiContainer*>(parentContainersEnumerable, isValidating));
}
inline void Zenject::DiContainer::_ctor(::System::Collections::Generic::IEnumerable_1<::Zenject::DiContainer*>* parentContainersEnumerable, bool isValidating) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::Zenject::DiContainer*>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, parentContainersEnumerable, isValidating);
}
inline ::Zenject::DiContainer* Zenject::DiContainer::New_ctor(bool isValidating) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::DiContainer*>(isValidating));
}
inline void Zenject::DiContainer::_ctor(bool isValidating) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, isValidating);
}
inline ::Zenject::DiContainer* Zenject::DiContainer::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::DiContainer*>());
}
inline void Zenject::DiContainer::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Zenject::DiContainer* Zenject::DiContainer::New_ctor(::Zenject::DiContainer* parentContainer, bool isValidating) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::DiContainer*>(parentContainer, isValidating));
}
inline void Zenject::DiContainer::_ctor(::Zenject::DiContainer* parentContainer, bool isValidating) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, parentContainer, isValidating);
}
inline ::Zenject::DiContainer* Zenject::DiContainer::New_ctor(::Zenject::DiContainer* parentContainer) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::DiContainer*>(parentContainer));
}
inline void Zenject::DiContainer::_ctor(::Zenject::DiContainer* parentContainer) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, parentContainer);
}
inline ::Zenject::DiContainer* Zenject::DiContainer::New_ctor(::System::Collections::Generic::IEnumerable_1<::Zenject::DiContainer*>* parentContainers) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::DiContainer*>(parentContainers));
}
inline void Zenject::DiContainer::_ctor(::System::Collections::Generic::IEnumerable_1<::Zenject::DiContainer*>* parentContainers) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::Zenject::DiContainer*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, parentContainers);
}
inline ::Zenject::ZenjectSettings* Zenject::DiContainer::get_Settings() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "get_Settings",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ZenjectSettings*, false>(this, ___internal_method);
}
inline void Zenject::DiContainer::set_Settings(::Zenject::ZenjectSettings* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "set_Settings", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::ZenjectSettings*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Zenject::Internal::SingletonMarkRegistry* Zenject::DiContainer::get_SingletonMarkRegistry() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "get_SingletonMarkRegistry",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Zenject::Internal::SingletonMarkRegistry*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::Zenject::IProvider*>* Zenject::DiContainer::get_AllProviders() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "get_AllProviders",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Zenject::IProvider*>*, false>(this, ___internal_method);
}
inline void Zenject::DiContainer::InstallDefaultBindings() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "InstallDefaultBindings",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* Zenject::DiContainer::CreateLazyBinding(::Zenject::InjectContext* context) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "CreateLazyBinding", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, context);
}
inline void Zenject::DiContainer::QueueForValidate(::Zenject::IValidatable* validatable) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "QueueForValidate", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::IValidatable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, validatable);
}
inline bool Zenject::DiContainer::ShouldInheritBinding(::Zenject::BindStatement* binding, ::Zenject::DiContainer* ancestorContainer) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "ShouldInheritBinding", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::BindStatement*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, binding, ancestorContainer);
}
inline ::UnityW<::UnityEngine::Transform> Zenject::DiContainer::get_ContextTransform() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "get_ContextTransform",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>, false>(this, ___internal_method);
}
inline bool Zenject::DiContainer::get_AssertOnNewGameObjects() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "get_AssertOnNewGameObjects",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Zenject::DiContainer::set_AssertOnNewGameObjects(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "set_AssertOnNewGameObjects",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Transform> Zenject::DiContainer::get_InheritedDefaultParent() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "get_InheritedDefaultParent",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Transform> Zenject::DiContainer::get_DefaultParent() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "get_DefaultParent",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>, false>(this, ___internal_method);
}
inline void Zenject::DiContainer::set_DefaultParent(::UnityEngine::Transform* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "set_DefaultParent", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::ArrayW<::Zenject::DiContainer*, ::Array<::Zenject::DiContainer*>*> Zenject::DiContainer::get_ParentContainers() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "get_ParentContainers",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::Zenject::DiContainer*, ::Array<::Zenject::DiContainer*>*>, false>(this, ___internal_method);
}
inline ::ArrayW<::Zenject::DiContainer*, ::Array<::Zenject::DiContainer*>*> Zenject::DiContainer::get_AncestorContainers() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "get_AncestorContainers",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::Zenject::DiContainer*, ::Array<::Zenject::DiContainer*>*>, false>(this, ___internal_method);
}
inline bool Zenject::DiContainer::get_ChecksForCircularDependencies() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "get_ChecksForCircularDependencies",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool Zenject::DiContainer::get_IsValidating() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "get_IsValidating",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool Zenject::DiContainer::get_IsInstalling() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "get_IsInstalling",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Zenject::DiContainer::set_IsInstalling(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "set_IsInstalling", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::IEnumerable_1<::Zenject::BindingId>* Zenject::DiContainer::get_AllContracts() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "get_AllContracts",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Zenject::BindingId>*, false>(this, ___internal_method);
}
inline void Zenject::DiContainer::ResolveRoots() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "ResolveRoots",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Zenject::DiContainer::ResolveDependencyRoots() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "ResolveDependencyRoots",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Zenject::DiContainer::ValidateFullResolve() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "ValidateFullResolve",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Zenject::DiContainer::FlushValidationQueue() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "FlushValidationQueue",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Zenject::DiContainer* Zenject::DiContainer::CreateSubContainer() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "CreateSubContainer",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Zenject::DiContainer*, false>(this, ___internal_method);
}
inline void Zenject::DiContainer::QueueForInject(::System::Object* instance) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "QueueForInject", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, instance);
}
template <typename T> inline T Zenject::DiContainer::LazyInject(T instance) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "LazyInject",
                                                                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                                                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method, instance);
}
inline ::Zenject::DiContainer* Zenject::DiContainer::CreateSubContainer(bool isValidating) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "CreateSubContainer", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::DiContainer*, false>(this, ___internal_method, isValidating);
}
inline void Zenject::DiContainer::RegisterProvider(::Zenject::BindingId bindingId, ::Zenject::BindingCondition* condition, ::Zenject::IProvider* provider, bool nonLazy) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "RegisterProvider", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::BindingId>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::BindingCondition*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::IProvider*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bindingId, condition, provider, nonLazy);
}
inline void Zenject::DiContainer::GetProviderMatches(::Zenject::InjectContext* context, ::System::Collections::Generic::List_1<::Zenject::__DiContainer__ProviderInfo*>* buffer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "GetProviderMatches", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::__DiContainer__ProviderInfo*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context, buffer);
}
inline ::Zenject::__DiContainer__ProviderInfo* Zenject::DiContainer::TryGetUniqueProvider(::Zenject::InjectContext* context) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "TryGetUniqueProvider", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::__DiContainer__ProviderInfo*, false>(this, ___internal_method, context);
}
inline ::System::Collections::Generic::List_1<::Zenject::DiContainer*>* Zenject::DiContainer::FlattenInheritanceChain() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "FlattenInheritanceChain",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Zenject::DiContainer*>*, false>(this, ___internal_method);
}
inline void Zenject::DiContainer::GetLocalProviders(::Zenject::BindingId bindingId, ::System::Collections::Generic::List_1<::Zenject::__DiContainer__ProviderInfo*>* buffer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "GetLocalProviders", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::BindingId>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::__DiContainer__ProviderInfo*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bindingId, buffer);
}
inline void Zenject::DiContainer::GetProvidersForContract(::Zenject::BindingId bindingId, ::Zenject::InjectSources sourceType,
                                                          ::System::Collections::Generic::List_1<::Zenject::__DiContainer__ProviderInfo*>* buffer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "GetProvidersForContract", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::BindingId>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectSources>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::__DiContainer__ProviderInfo*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bindingId, sourceType, buffer);
}
template <typename TInstaller> inline void Zenject::DiContainer::Install() {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "Install",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TInstaller>::get() }, ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TInstaller>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TInstaller> inline void Zenject::DiContainer::Install(::ArrayW<::System::Object*, ::Array<::System::Object*>*> extraArgs) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "Install",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TInstaller>::get() },
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TInstaller>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, extraArgs);
}
inline ::System::Collections::IList* Zenject::DiContainer::ResolveAll(::Zenject::InjectContext* context) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "ResolveAll", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IList*, false>(this, ___internal_method, context);
}
inline void Zenject::DiContainer::ResolveAll(::Zenject::InjectContext* context, ::System::Collections::Generic::List_1<::System::Object*>* buffer) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "ResolveAll", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Object*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context, buffer);
}
inline void Zenject::DiContainer::CheckForInstallWarning(::Zenject::InjectContext* context) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "CheckForInstallWarning", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context);
}
template <typename T> inline ::System::Type* Zenject::DiContainer::ResolveType() {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "ResolveType",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }, ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method);
}
inline ::System::Type* Zenject::DiContainer::ResolveType(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "ResolveType", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method, type);
}
inline ::System::Type* Zenject::DiContainer::ResolveType(::Zenject::InjectContext* context) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "ResolveType", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method, context);
}
inline ::System::Collections::Generic::List_1<::System::Type*>* Zenject::DiContainer::ResolveTypeAll(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "ResolveTypeAll", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::System::Type*>*, false>(this, ___internal_method, type);
}
inline ::System::Collections::Generic::List_1<::System::Type*>* Zenject::DiContainer::ResolveTypeAll(::System::Type* type, ::System::Object* identifier) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "ResolveTypeAll", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::System::Type*>*, false>(this, ___internal_method, type, identifier);
}
inline ::System::Collections::Generic::List_1<::System::Type*>* Zenject::DiContainer::ResolveTypeAll(::Zenject::InjectContext* context) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "ResolveTypeAll", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::System::Type*>*, false>(this, ___internal_method, context);
}
inline ::System::Object* Zenject::DiContainer::Resolve(::Zenject::BindingId id) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "Resolve", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::BindingId>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, id);
}
inline ::System::Object* Zenject::DiContainer::Resolve(::Zenject::InjectContext* context) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "Resolve", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, context);
}
inline void Zenject::DiContainer::SafeGetInstances(::Zenject::__DiContainer__ProviderInfo* providerInfo, ::Zenject::InjectContext* context,
                                                   ::System::Collections::Generic::List_1<::System::Object*>* instances) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "SafeGetInstances", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::__DiContainer__ProviderInfo*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Object*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, providerInfo, context, instances);
}
template <typename TContract> inline ::Zenject::DecoratorToChoiceFromBinder_1<TContract>* Zenject::DiContainer::Decorate() {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "Decorate",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get() }, ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Zenject::DecoratorToChoiceFromBinder_1<TContract>*, false>(this, ___internal_method);
}
inline void Zenject::DiContainer::GetDecoratedInstances(::Zenject::IProvider* provider, ::Zenject::InjectContext* context, ::System::Collections::Generic::List_1<::System::Object*>* buffer) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "GetDecoratedInstances", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::IProvider*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Object*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, provider, context, buffer);
}
inline ::Zenject::Internal::IDecoratorProvider* Zenject::DiContainer::TryGetDecoratorProvider(::System::Type* contractType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "TryGetDecoratorProvider", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::Internal::IDecoratorProvider*, false>(this, ___internal_method, contractType);
}
inline int32_t Zenject::DiContainer::GetContainerHeirarchyDistance(::Zenject::DiContainer* container) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "GetContainerHeirarchyDistance", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, container);
}
inline ::System::Nullable_1<int32_t> Zenject::DiContainer::GetContainerHeirarchyDistance(::Zenject::DiContainer* container, int32_t depth) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "GetContainerHeirarchyDistance", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<int32_t>, false>(this, ___internal_method, container, depth);
}
template <typename TContract> inline ::System::Collections::Generic::IEnumerable_1<::System::Type*>* Zenject::DiContainer::GetDependencyContracts() {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "GetDependencyContracts",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get() }, ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::System::Type*>*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::System::Type*>* Zenject::DiContainer::GetDependencyContracts(::System::Type* contract) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "GetDependencyContracts", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::System::Type*>*, false>(this, ___internal_method, contract);
}
inline ::System::Object* Zenject::DiContainer::InstantiateInternal(::System::Type* concreteType, bool autoInject, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* extraArgs,
                                                                   ::Zenject::InjectContext* context, ::System::Object* concreteIdentifier) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "InstantiateInternal", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, concreteType, autoInject, extraArgs, context, concreteIdentifier);
}
inline void Zenject::DiContainer::InjectExplicit(::System::Object* injectable, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* extraArgs) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "InjectExplicit", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, injectable, extraArgs);
}
inline void Zenject::DiContainer::InjectExplicit(::System::Object* injectable, ::System::Type* injectableType, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* extraArgs,
                                                 ::Zenject::InjectContext* context, ::System::Object* concreteIdentifier) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "InjectExplicit", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, injectable, injectableType, extraArgs, context, concreteIdentifier);
}
inline void Zenject::DiContainer::CallInjectMethodsTopDown(::System::Object* injectable, ::System::Type* injectableType, ::Zenject::InjectTypeInfo* typeInfo,
                                                           ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* extraArgs, ::Zenject::InjectContext* context,
                                                           ::System::Object* concreteIdentifier, bool isDryRun) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "CallInjectMethodsTopDown", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 7>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectTypeInfo*>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, injectable, injectableType, typeInfo, extraArgs, context, concreteIdentifier, isDryRun);
}
inline void Zenject::DiContainer::InjectMembersTopDown(::System::Object* injectable, ::System::Type* injectableType, ::Zenject::InjectTypeInfo* typeInfo,
                                                       ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* extraArgs, ::Zenject::InjectContext* context,
                                                       ::System::Object* concreteIdentifier, bool isDryRun) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "InjectMembersTopDown", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 7>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectTypeInfo*>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, injectable, injectableType, typeInfo, extraArgs, context, concreteIdentifier, isDryRun);
}
inline void Zenject::DiContainer::InjectExplicitInternal(::System::Object* injectable, ::System::Type* injectableType, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* extraArgs,
                                                         ::Zenject::InjectContext* context, ::System::Object* concreteIdentifier) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "InjectExplicitInternal", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, injectable, injectableType, extraArgs, context, concreteIdentifier);
}
inline ::UnityW<::UnityEngine::GameObject> Zenject::DiContainer::CreateAndParentPrefabResource(::StringW resourcePath, ::Zenject::GameObjectCreationParameters* gameObjectBindInfo,
                                                                                               ::Zenject::InjectContext* context, ByRef<bool> shouldMakeActive) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "CreateAndParentPrefabResource", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::GameObjectCreationParameters*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>, false>(this, ___internal_method, resourcePath, gameObjectBindInfo, context, shouldMakeActive);
}
inline ::UnityW<::UnityEngine::GameObject> Zenject::DiContainer::GetPrefabAsGameObject(::UnityEngine::Object* prefab) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "GetPrefabAsGameObject", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>, false>(this, ___internal_method, prefab);
}
inline ::UnityW<::UnityEngine::GameObject> Zenject::DiContainer::CreateAndParentPrefab(::UnityEngine::Object* prefab, ::Zenject::GameObjectCreationParameters* gameObjectBindInfo,
                                                                                       ::Zenject::InjectContext* context, ByRef<bool> shouldMakeActive) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "CreateAndParentPrefab", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::GameObjectCreationParameters*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>, false>(this, ___internal_method, prefab, gameObjectBindInfo, context, shouldMakeActive);
}
inline ::UnityW<::UnityEngine::GameObject> Zenject::DiContainer::CreateEmptyGameObject(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "CreateEmptyGameObject", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>, false>(this, ___internal_method, name);
}
inline ::UnityW<::UnityEngine::GameObject> Zenject::DiContainer::CreateEmptyGameObject(::Zenject::GameObjectCreationParameters* gameObjectBindInfo, ::Zenject::InjectContext* context) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "CreateEmptyGameObject", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::GameObjectCreationParameters*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>, false>(this, ___internal_method, gameObjectBindInfo, context);
}
inline ::UnityW<::UnityEngine::Transform> Zenject::DiContainer::GetTransformGroup(::Zenject::GameObjectCreationParameters* gameObjectBindInfo, ::Zenject::InjectContext* context) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "GetTransformGroup", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::GameObjectCreationParameters*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>, false>(this, ___internal_method, gameObjectBindInfo, context);
}
inline ::UnityW<::UnityEngine::GameObject> Zenject::DiContainer::CreateTransformGroup(::StringW groupName) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "CreateTransformGroup", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>, false>(this, ___internal_method, groupName);
}
template <typename T> inline T Zenject::DiContainer::Instantiate() {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "Instantiate",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }, ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
template <typename T> inline T Zenject::DiContainer::Instantiate(::System::Collections::Generic::IEnumerable_1<::System::Object*>* extraArgs) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "Instantiate",
      std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method, extraArgs);
}
inline ::System::Object* Zenject::DiContainer::Instantiate(::System::Type* concreteType) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "Instantiate", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, concreteType);
}
inline ::System::Object* Zenject::DiContainer::Instantiate(::System::Type* concreteType, ::System::Collections::Generic::IEnumerable_1<::System::Object*>* extraArgs) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "Instantiate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, concreteType, extraArgs);
}
template <typename TContract> inline TContract Zenject::DiContainer::InstantiateComponent(::UnityEngine::GameObject* gameObject) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "InstantiateComponent",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get() }));
  return ::cordl_internals::RunMethodRethrow<TContract, false>(this, ___internal_method, gameObject);
}
template <typename TContract>
inline TContract Zenject::DiContainer::InstantiateComponent(::UnityEngine::GameObject* gameObject, ::System::Collections::Generic::IEnumerable_1<::System::Object*>* extraArgs) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "InstantiateComponent",
      std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get() },
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get() }));
  return ::cordl_internals::RunMethodRethrow<TContract, false>(this, ___internal_method, gameObject, extraArgs);
}
inline ::UnityW<::UnityEngine::Component> Zenject::DiContainer::InstantiateComponent(::System::Type* componentType, ::UnityEngine::GameObject* gameObject) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "InstantiateComponent", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Component>, false>(this, ___internal_method, componentType, gameObject);
}
inline ::UnityW<::UnityEngine::Component> Zenject::DiContainer::InstantiateComponent(::System::Type* componentType, ::UnityEngine::GameObject* gameObject,
                                                                                     ::System::Collections::Generic::IEnumerable_1<::System::Object*>* extraArgs) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "InstantiateComponent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Component>, false>(this, ___internal_method, componentType, gameObject, extraArgs);
}
template <typename T> inline T Zenject::DiContainer::InstantiateComponentOnNewGameObject() {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "InstantiateComponentOnNewGameObject",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }, ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
template <typename T> inline T Zenject::DiContainer::InstantiateComponentOnNewGameObject(::System::Collections::Generic::IEnumerable_1<::System::Object*>* extraArgs) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "InstantiateComponentOnNewGameObject",
      std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method, extraArgs);
}
template <typename T> inline T Zenject::DiContainer::InstantiateComponentOnNewGameObject(::StringW gameObjectName) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "InstantiateComponentOnNewGameObject",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method, gameObjectName);
}
template <typename T> inline T Zenject::DiContainer::InstantiateComponentOnNewGameObject(::StringW gameObjectName, ::System::Collections::Generic::IEnumerable_1<::System::Object*>* extraArgs) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "InstantiateComponentOnNewGameObject",
      std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method, gameObjectName, extraArgs);
}
inline ::UnityW<::UnityEngine::GameObject> Zenject::DiContainer::InstantiatePrefab(::UnityEngine::Object* prefab) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "InstantiatePrefab", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>, false>(this, ___internal_method, prefab);
}
inline ::UnityW<::UnityEngine::GameObject> Zenject::DiContainer::InstantiatePrefab(::UnityEngine::Object* prefab, ::UnityEngine::Transform* parentTransform) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "InstantiatePrefab", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>, false>(this, ___internal_method, prefab, parentTransform);
}
inline ::UnityW<::UnityEngine::GameObject> Zenject::DiContainer::InstantiatePrefab(::UnityEngine::Object* prefab, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation,
                                                                                   ::UnityEngine::Transform* parentTransform) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "InstantiatePrefab", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>, false>(this, ___internal_method, prefab, position, rotation, parentTransform);
}
inline ::UnityW<::UnityEngine::GameObject> Zenject::DiContainer::InstantiatePrefab(::UnityEngine::Object* prefab, ::Zenject::GameObjectCreationParameters* gameObjectBindInfo) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "InstantiatePrefab", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::GameObjectCreationParameters*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>, false>(this, ___internal_method, prefab, gameObjectBindInfo);
}
inline ::UnityW<::UnityEngine::GameObject> Zenject::DiContainer::InstantiatePrefabResource(::StringW resourcePath) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "InstantiatePrefabResource", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>, false>(this, ___internal_method, resourcePath);
}
inline ::UnityW<::UnityEngine::GameObject> Zenject::DiContainer::InstantiatePrefabResource(::StringW resourcePath, ::UnityEngine::Transform* parentTransform) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "InstantiatePrefabResource", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>, false>(this, ___internal_method, resourcePath, parentTransform);
}
inline ::UnityW<::UnityEngine::GameObject> Zenject::DiContainer::InstantiatePrefabResource(::StringW resourcePath, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation,
                                                                                           ::UnityEngine::Transform* parentTransform) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "InstantiatePrefabResource", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>, false>(this, ___internal_method, resourcePath, position, rotation, parentTransform);
}
inline ::UnityW<::UnityEngine::GameObject> Zenject::DiContainer::InstantiatePrefabResource(::StringW resourcePath, ::Zenject::GameObjectCreationParameters* creationInfo) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "InstantiatePrefabResource", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::GameObjectCreationParameters*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>, false>(this, ___internal_method, resourcePath, creationInfo);
}
template <typename T> inline T Zenject::DiContainer::InstantiatePrefabForComponent(::UnityEngine::Object* prefab) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "InstantiatePrefabForComponent",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method, prefab);
}
template <typename T> inline T Zenject::DiContainer::InstantiatePrefabForComponent(::UnityEngine::Object* prefab, ::System::Collections::Generic::IEnumerable_1<::System::Object*>* extraArgs) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "InstantiatePrefabForComponent",
      std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method, prefab, extraArgs);
}
template <typename T> inline T Zenject::DiContainer::InstantiatePrefabForComponent(::UnityEngine::Object* prefab, ::UnityEngine::Transform* parentTransform) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "InstantiatePrefabForComponent",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method, prefab, parentTransform);
}
template <typename T>
inline T Zenject::DiContainer::InstantiatePrefabForComponent(::UnityEngine::Object* prefab, ::UnityEngine::Transform* parentTransform,
                                                             ::System::Collections::Generic::IEnumerable_1<::System::Object*>* extraArgs) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "InstantiatePrefabForComponent",
      std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method, prefab, parentTransform, extraArgs);
}
template <typename T>
inline T Zenject::DiContainer::InstantiatePrefabForComponent(::UnityEngine::Object* prefab, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation,
                                                             ::UnityEngine::Transform* parentTransform) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "InstantiatePrefabForComponent",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method, prefab, position, rotation, parentTransform);
}
template <typename T>
inline T Zenject::DiContainer::InstantiatePrefabForComponent(::UnityEngine::Object* prefab, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation,
                                                             ::UnityEngine::Transform* parentTransform, ::System::Collections::Generic::IEnumerable_1<::System::Object*>* extraArgs) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "InstantiatePrefabForComponent",
      std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
      ::std::array<Il2CppType const*, 5>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method, prefab, position, rotation, parentTransform, extraArgs);
}
inline ::System::Object* Zenject::DiContainer::InstantiatePrefabForComponent(::System::Type* concreteType, ::UnityEngine::Object* prefab, ::UnityEngine::Transform* parentTransform,
                                                                             ::System::Collections::Generic::IEnumerable_1<::System::Object*>* extraArgs) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "InstantiatePrefabForComponent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, concreteType, prefab, parentTransform, extraArgs);
}
inline ::System::Object* Zenject::DiContainer::InstantiatePrefabForComponent(::System::Type* concreteType, ::UnityEngine::Object* prefab,
                                                                             ::System::Collections::Generic::IEnumerable_1<::System::Object*>* extraArgs,
                                                                             ::Zenject::GameObjectCreationParameters* creationInfo) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "InstantiatePrefabForComponent", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::GameObjectCreationParameters*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, concreteType, prefab, extraArgs, creationInfo);
}
template <typename T> inline T Zenject::DiContainer::InstantiatePrefabResourceForComponent(::StringW resourcePath) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "InstantiatePrefabResourceForComponent",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method, resourcePath);
}
template <typename T> inline T Zenject::DiContainer::InstantiatePrefabResourceForComponent(::StringW resourcePath, ::System::Collections::Generic::IEnumerable_1<::System::Object*>* extraArgs) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "InstantiatePrefabResourceForComponent",
      std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method, resourcePath, extraArgs);
}
template <typename T> inline T Zenject::DiContainer::InstantiatePrefabResourceForComponent(::StringW resourcePath, ::UnityEngine::Transform* parentTransform) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "InstantiatePrefabResourceForComponent",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method, resourcePath, parentTransform);
}
template <typename T>
inline T Zenject::DiContainer::InstantiatePrefabResourceForComponent(::StringW resourcePath, ::UnityEngine::Transform* parentTransform,
                                                                     ::System::Collections::Generic::IEnumerable_1<::System::Object*>* extraArgs) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "InstantiatePrefabResourceForComponent",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                  ::std::array<Il2CppType const*, 3>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method, resourcePath, parentTransform, extraArgs);
}
template <typename T>
inline T Zenject::DiContainer::InstantiatePrefabResourceForComponent(::StringW resourcePath, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation,
                                                                     ::UnityEngine::Transform* parentTransform) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "InstantiatePrefabResourceForComponent",
      std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method, resourcePath, position, rotation, parentTransform);
}
template <typename T>
inline T Zenject::DiContainer::InstantiatePrefabResourceForComponent(::StringW resourcePath, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation,
                                                                     ::UnityEngine::Transform* parentTransform, ::System::Collections::Generic::IEnumerable_1<::System::Object*>* extraArgs) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "InstantiatePrefabResourceForComponent",
      std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method, resourcePath, position, rotation, parentTransform, extraArgs);
}
inline ::System::Object* Zenject::DiContainer::InstantiatePrefabResourceForComponent(::System::Type* concreteType, ::StringW resourcePath, ::UnityEngine::Transform* parentTransform,
                                                                                     ::System::Collections::Generic::IEnumerable_1<::System::Object*>* extraArgs) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "InstantiatePrefabResourceForComponent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, concreteType, resourcePath, parentTransform, extraArgs);
}
template <typename T> inline T Zenject::DiContainer::InstantiateScriptableObjectResource(::StringW resourcePath) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "InstantiateScriptableObjectResource",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method, resourcePath);
}
template <typename T> inline T Zenject::DiContainer::InstantiateScriptableObjectResource(::StringW resourcePath, ::System::Collections::Generic::IEnumerable_1<::System::Object*>* extraArgs) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "InstantiateScriptableObjectResource",
      std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method, resourcePath, extraArgs);
}
inline ::System::Object* Zenject::DiContainer::InstantiateScriptableObjectResource(::System::Type* scriptableObjectType, ::StringW resourcePath) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "InstantiateScriptableObjectResource", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, scriptableObjectType, resourcePath);
}
inline ::System::Object* Zenject::DiContainer::InstantiateScriptableObjectResource(::System::Type* scriptableObjectType, ::StringW resourcePath,
                                                                                   ::System::Collections::Generic::IEnumerable_1<::System::Object*>* extraArgs) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "InstantiateScriptableObjectResource", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, scriptableObjectType, resourcePath, extraArgs);
}
inline void Zenject::DiContainer::InjectGameObject(::UnityEngine::GameObject* gameObject) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "InjectGameObject", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, gameObject);
}
template <typename T> inline T Zenject::DiContainer::InjectGameObjectForComponent(::UnityEngine::GameObject* gameObject) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "InjectGameObjectForComponent",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method, gameObject);
}
template <typename T> inline T Zenject::DiContainer::InjectGameObjectForComponent(::UnityEngine::GameObject* gameObject, ::System::Collections::Generic::IEnumerable_1<::System::Object*>* extraArgs) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "InjectGameObjectForComponent",
      std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method, gameObject, extraArgs);
}
inline ::System::Object* Zenject::DiContainer::InjectGameObjectForComponent(::UnityEngine::GameObject* gameObject, ::System::Type* componentType,
                                                                            ::System::Collections::Generic::IEnumerable_1<::System::Object*>* extraArgs) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "InjectGameObjectForComponent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, gameObject, componentType, extraArgs);
}
inline ::UnityW<::UnityEngine::Component> Zenject::DiContainer::InjectGameObjectForComponentExplicit(::UnityEngine::GameObject* gameObject, ::System::Type* componentType,
                                                                                                     ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* extraArgs,
                                                                                                     ::Zenject::InjectContext* context, ::System::Object* concreteIdentifier) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "InjectGameObjectForComponentExplicit", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Component>, false>(this, ___internal_method, gameObject, componentType, extraArgs, context, concreteIdentifier);
}
inline void Zenject::DiContainer::Inject(::System::Object* injectable) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "Inject", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, injectable);
}
inline void Zenject::DiContainer::Inject(::System::Object* injectable, ::System::Collections::Generic::IEnumerable_1<::System::Object*>* extraArgs) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "Inject", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, injectable, extraArgs);
}
template <typename TContract> inline TContract Zenject::DiContainer::Resolve() {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "Resolve",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get() }, ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get() }));
  return ::cordl_internals::RunMethodRethrow<TContract, false>(this, ___internal_method);
}
inline ::System::Object* Zenject::DiContainer::Resolve(::System::Type* contractType) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "Resolve", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, contractType);
}
template <typename TContract> inline TContract Zenject::DiContainer::ResolveId(::System::Object* identifier) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "ResolveId",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get() }));
  return ::cordl_internals::RunMethodRethrow<TContract, false>(this, ___internal_method, identifier);
}
inline ::System::Object* Zenject::DiContainer::ResolveId(::System::Type* contractType, ::System::Object* identifier) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "ResolveId", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, contractType, identifier);
}
template <typename TContract> inline TContract Zenject::DiContainer::TryResolve() {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "TryResolve",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get() }, ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get() }));
  return ::cordl_internals::RunMethodRethrow<TContract, false>(this, ___internal_method);
}
inline ::System::Object* Zenject::DiContainer::TryResolve(::System::Type* contractType) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "TryResolve", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, contractType);
}
template <typename TContract> inline TContract Zenject::DiContainer::TryResolveId(::System::Object* identifier) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "TryResolveId",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get() }));
  return ::cordl_internals::RunMethodRethrow<TContract, false>(this, ___internal_method, identifier);
}
inline ::System::Object* Zenject::DiContainer::TryResolveId(::System::Type* contractType, ::System::Object* identifier) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "TryResolveId", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, contractType, identifier);
}
template <typename TContract> inline ::System::Collections::Generic::List_1<TContract>* Zenject::DiContainer::ResolveAll() {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "ResolveAll",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get() }, ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<TContract>*, false>(this, ___internal_method);
}
inline ::System::Collections::IList* Zenject::DiContainer::ResolveAll(::System::Type* contractType) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "ResolveAll", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IList*, false>(this, ___internal_method, contractType);
}
template <typename TContract> inline ::System::Collections::Generic::List_1<TContract>* Zenject::DiContainer::ResolveIdAll(::System::Object* identifier) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "ResolveIdAll",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<TContract>*, false>(this, ___internal_method, identifier);
}
inline ::System::Collections::IList* Zenject::DiContainer::ResolveIdAll(::System::Type* contractType, ::System::Object* identifier) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "ResolveIdAll", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IList*, false>(this, ___internal_method, contractType, identifier);
}
inline void Zenject::DiContainer::UnbindAll() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "UnbindAll",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TContract> inline bool Zenject::DiContainer::Unbind() {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "Unbind",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get() }, ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get() }));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool Zenject::DiContainer::Unbind(::System::Type* contractType) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "Unbind", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, contractType);
}
template <typename TContract> inline bool Zenject::DiContainer::UnbindId(::System::Object* identifier) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "UnbindId",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get() }));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, identifier);
}
inline bool Zenject::DiContainer::UnbindId(::System::Type* contractType, ::System::Object* identifier) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "UnbindId", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, contractType, identifier);
}
template <typename TConcrete> inline void Zenject::DiContainer::UnbindInterfacesTo() {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "UnbindInterfacesTo",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TConcrete>::get() }, ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TConcrete>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Zenject::DiContainer::UnbindInterfacesTo(::System::Type* concreteType) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "UnbindInterfacesTo", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, concreteType);
}
template <typename TContract, typename TConcrete> inline bool Zenject::DiContainer::Unbind() {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "Unbind",
      std::array<Il2CppClass const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TConcrete>::get() },
      ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TConcrete>::get() }));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool Zenject::DiContainer::Unbind(::System::Type* contractType, ::System::Type* concreteType) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "Unbind", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, contractType, concreteType);
}
template <typename TContract, typename TConcrete> inline bool Zenject::DiContainer::UnbindId(::System::Object* identifier) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "UnbindId",
      std::array<Il2CppClass const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TConcrete>::get() },
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TConcrete>::get() }));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, identifier);
}
inline bool Zenject::DiContainer::UnbindId(::System::Type* contractType, ::System::Type* concreteType, ::System::Object* identifier) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "UnbindId", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, contractType, concreteType, identifier);
}
template <typename TContract> inline bool Zenject::DiContainer::HasBinding() {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "HasBinding",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get() }, ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get() }));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool Zenject::DiContainer::HasBinding(::System::Type* contractType) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "HasBinding", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, contractType);
}
template <typename TContract> inline bool Zenject::DiContainer::HasBindingId(::System::Object* identifier) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "HasBindingId",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get() }));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, identifier);
}
inline bool Zenject::DiContainer::HasBindingId(::System::Type* contractType, ::System::Object* identifier) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "HasBindingId", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, contractType, identifier);
}
inline bool Zenject::DiContainer::HasBindingId(::System::Type* contractType, ::System::Object* identifier, ::Zenject::InjectSources sourceType) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "HasBindingId", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectSources>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, contractType, identifier, sourceType);
}
inline bool Zenject::DiContainer::HasBinding(::Zenject::InjectContext* context) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "HasBinding", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, context);
}
inline void Zenject::DiContainer::FlushBindings() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "FlushBindings",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Zenject::DiContainer::FinalizeBinding(::Zenject::BindStatement* binding) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "FinalizeBinding", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::BindStatement*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, binding);
}
/// @param flush: bool (default: true)
inline ::Zenject::BindStatement* Zenject::DiContainer::StartBinding(bool flush) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "StartBinding", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::BindStatement*, false>(this, ___internal_method, flush);
}
template <typename TContract> inline ::Zenject::ConcreteBinderGeneric_1<TContract>* Zenject::DiContainer::Rebind() {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "Rebind",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get() }, ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ConcreteBinderGeneric_1<TContract>*, false>(this, ___internal_method);
}
template <typename TContract> inline ::Zenject::ConcreteBinderGeneric_1<TContract>* Zenject::DiContainer::RebindId(::System::Object* identifier) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "RebindId",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ConcreteBinderGeneric_1<TContract>*, false>(this, ___internal_method, identifier);
}
inline ::Zenject::ConcreteBinderNonGeneric* Zenject::DiContainer::Rebind(::System::Type* contractType) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "Rebind", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ConcreteBinderNonGeneric*, false>(this, ___internal_method, contractType);
}
inline ::Zenject::ConcreteBinderNonGeneric* Zenject::DiContainer::RebindId(::System::Type* contractType, ::System::Object* identifier) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "RebindId", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ConcreteBinderNonGeneric*, false>(this, ___internal_method, contractType, identifier);
}
template <typename TContract> inline ::Zenject::ConcreteIdBinderGeneric_1<TContract>* Zenject::DiContainer::Bind() {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "Bind",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get() }, ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ConcreteIdBinderGeneric_1<TContract>*, false>(this, ___internal_method);
}
template <typename TContract> inline ::Zenject::ConcreteIdBinderGeneric_1<TContract>* Zenject::DiContainer::BindNoFlush() {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "BindNoFlush",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get() }, ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ConcreteIdBinderGeneric_1<TContract>*, false>(this, ___internal_method);
}
template <typename TContract> inline ::Zenject::ConcreteIdBinderGeneric_1<TContract>* Zenject::DiContainer::Bind(::Zenject::BindStatement* bindStatement) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "Bind",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::BindStatement*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ConcreteIdBinderGeneric_1<TContract>*, false>(this, ___internal_method, bindStatement);
}
inline ::Zenject::ConcreteIdBinderNonGeneric* Zenject::DiContainer::Bind(::ArrayW<::System::Type*, ::Array<::System::Type*>*> contractTypes) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "Bind", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ConcreteIdBinderNonGeneric*, false>(this, ___internal_method, contractTypes);
}
inline ::Zenject::ConcreteIdBinderNonGeneric* Zenject::DiContainer::Bind(::System::Collections::Generic::IEnumerable_1<::System::Type*>* contractTypes) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "Bind", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::System::Type*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ConcreteIdBinderNonGeneric*, false>(this, ___internal_method, contractTypes);
}
inline ::Zenject::ConcreteIdBinderNonGeneric* Zenject::DiContainer::BindInternal(::Zenject::BindInfo* bindInfo, ::Zenject::BindStatement* bindingFinalizer) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "BindInternal", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::BindInfo*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::BindStatement*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ConcreteIdBinderNonGeneric*, false>(this, ___internal_method, bindInfo, bindingFinalizer);
}
inline ::Zenject::ConcreteIdBinderNonGeneric* Zenject::DiContainer::Bind(::System::Action_1<::Zenject::ConventionSelectTypesBinder*>* generator) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "Bind", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Zenject::ConventionSelectTypesBinder*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ConcreteIdBinderNonGeneric*, false>(this, ___internal_method, generator);
}
template <typename T> inline ::Zenject::FromBinderNonGeneric* Zenject::DiContainer::BindInterfacesTo() {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "BindInterfacesTo",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }, ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FromBinderNonGeneric*, false>(this, ___internal_method);
}
inline ::Zenject::FromBinderNonGeneric* Zenject::DiContainer::BindInterfacesTo(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "BindInterfacesTo", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FromBinderNonGeneric*, false>(this, ___internal_method, type);
}
template <typename T> inline ::Zenject::FromBinderNonGeneric* Zenject::DiContainer::BindInterfacesAndSelfTo() {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "BindInterfacesAndSelfTo",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }, ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FromBinderNonGeneric*, false>(this, ___internal_method);
}
inline ::Zenject::FromBinderNonGeneric* Zenject::DiContainer::BindInterfacesAndSelfTo(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "BindInterfacesAndSelfTo", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FromBinderNonGeneric*, false>(this, ___internal_method, type);
}
template <typename TContract> inline ::Zenject::IdScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::DiContainer::BindInstance(TContract instance) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "BindInstance",
                                                                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get() },
                                                                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TContract>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Zenject::IdScopeConcreteIdArgConditionCopyNonLazyBinder*, false>(this, ___internal_method, instance);
}
inline void Zenject::DiContainer::BindInstances(::ArrayW<::System::Object*, ::Array<::System::Object*>*> instances) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "BindInstances", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, instances);
}
template <typename TContract, typename TFactoryContract, typename TFactoryConcrete> inline ::Zenject::FactoryToChoiceIdBinder_1<TContract>* Zenject::DiContainer::BindFactoryInternal() {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "BindFactoryInternal",
                                                                                  std::array<Il2CppClass const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get(),
                                                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryContract>::get(),
                                                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryConcrete>::get() },
                                                                                  ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryContract>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryConcrete>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FactoryToChoiceIdBinder_1<TContract>*, false>(this, ___internal_method);
}
template <typename TContract> inline ::Zenject::FactoryToChoiceIdBinder_1<TContract>* Zenject::DiContainer::BindIFactory() {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "BindIFactory",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get() }, ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FactoryToChoiceIdBinder_1<TContract>*, false>(this, ___internal_method);
}
template <typename TContract, typename TFactory> inline ::Zenject::FactoryToChoiceIdBinder_1<TContract>* Zenject::DiContainer::BindFactory() {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "BindFactory",
      std::array<Il2CppClass const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactory>::get() },
      ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactory>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FactoryToChoiceIdBinder_1<TContract>*, false>(this, ___internal_method);
}
template <typename TContract, typename TFactoryConcrete, typename TFactoryContract> inline ::Zenject::FactoryToChoiceIdBinder_1<TContract>* Zenject::DiContainer::BindFactoryCustomInterface() {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "BindFactoryCustomInterface",
                                                                                  std::array<Il2CppClass const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get(),
                                                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryConcrete>::get(),
                                                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryContract>::get() },
                                                                                  ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryConcrete>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryContract>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FactoryToChoiceIdBinder_1<TContract>*, false>(this, ___internal_method);
}
template <typename TItemContract> inline ::Zenject::MemoryPoolIdInitialSizeMaxSizeBinder_1<TItemContract>* Zenject::DiContainer::BindMemoryPool() {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "BindMemoryPool",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TItemContract>::get() }, ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TItemContract>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Zenject::MemoryPoolIdInitialSizeMaxSizeBinder_1<TItemContract>*, false>(this, ___internal_method);
}
template <typename TItemContract, typename TPool> inline ::Zenject::MemoryPoolIdInitialSizeMaxSizeBinder_1<TItemContract>* Zenject::DiContainer::BindMemoryPool() {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "BindMemoryPool",
      std::array<Il2CppClass const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TItemContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TPool>::get() },
      ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TItemContract>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TPool>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Zenject::MemoryPoolIdInitialSizeMaxSizeBinder_1<TItemContract>*, false>(this, ___internal_method);
}
/// @param includeConcreteType: bool (default: false)
template <typename TItemContract, typename TPoolConcrete, typename TPoolContract>
inline ::Zenject::MemoryPoolIdInitialSizeMaxSizeBinder_1<TItemContract>* Zenject::DiContainer::BindMemoryPoolCustomInterface(bool includeConcreteType) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "BindMemoryPoolCustomInterface",
      std::array<Il2CppClass const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TItemContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TPoolConcrete>::get(),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TPoolContract>::get() },
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TItemContract>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TPoolConcrete>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TPoolContract>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Zenject::MemoryPoolIdInitialSizeMaxSizeBinder_1<TItemContract>*, false>(this, ___internal_method, includeConcreteType);
}
/// @param includeConcreteType: bool (default: false)
template <typename TItemContract, typename TPoolConcrete, typename TPoolContract>
inline ::Zenject::MemoryPoolIdInitialSizeMaxSizeBinder_1<TItemContract>* Zenject::DiContainer::BindMemoryPoolCustomInterfaceNoFlush(bool includeConcreteType) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "BindMemoryPoolCustomInterfaceNoFlush",
      std::array<Il2CppClass const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TItemContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TPoolConcrete>::get(),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TPoolContract>::get() },
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TItemContract>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TPoolConcrete>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TPoolContract>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Zenject::MemoryPoolIdInitialSizeMaxSizeBinder_1<TItemContract>*, false>(this, ___internal_method, includeConcreteType);
}
template <typename TItemContract, typename TPoolConcrete, typename TPoolContract>
inline ::Zenject::MemoryPoolIdInitialSizeMaxSizeBinder_1<TItemContract>* Zenject::DiContainer::BindMemoryPoolCustomInterfaceInternal(bool includeConcreteType, ::Zenject::BindStatement* statement) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "BindMemoryPoolCustomInterfaceInternal",
      std::array<Il2CppClass const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TItemContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TPoolConcrete>::get(),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TPoolContract>::get() },
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::BindStatement*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TItemContract>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TPoolConcrete>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TPoolContract>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Zenject::MemoryPoolIdInitialSizeMaxSizeBinder_1<TItemContract>*, false>(this, ___internal_method, includeConcreteType, statement);
}
template <typename TParam1, typename TContract, typename TFactoryContract, typename TFactoryConcrete>
inline ::Zenject::FactoryToChoiceIdBinder_2<TParam1, TContract>* Zenject::DiContainer::BindFactoryInternal() {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "BindFactoryInternal",
                                                                                  std::array<Il2CppClass const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(),
                                                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get(),
                                                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryContract>::get(),
                                                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryConcrete>::get() },
                                                                                  ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryContract>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryConcrete>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FactoryToChoiceIdBinder_2<TParam1, TContract>*, false>(this, ___internal_method);
}
template <typename TParam1, typename TContract> inline ::Zenject::FactoryToChoiceIdBinder_2<TParam1, TContract>* Zenject::DiContainer::BindIFactory() {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "BindIFactory",
      std::array<Il2CppClass const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get() },
      ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FactoryToChoiceIdBinder_2<TParam1, TContract>*, false>(this, ___internal_method);
}
template <typename TParam1, typename TContract, typename TFactory> inline ::Zenject::FactoryToChoiceIdBinder_2<TParam1, TContract>* Zenject::DiContainer::BindFactory() {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "BindFactory",
                                                                                  std::array<Il2CppClass const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(),
                                                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get(),
                                                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactory>::get() },
                                                                                  ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactory>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FactoryToChoiceIdBinder_2<TParam1, TContract>*, false>(this, ___internal_method);
}
template <typename TParam1, typename TContract, typename TFactoryConcrete, typename TFactoryContract>
inline ::Zenject::FactoryToChoiceIdBinder_2<TParam1, TContract>* Zenject::DiContainer::BindFactoryCustomInterface() {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "BindFactoryCustomInterface",
                                                                                  std::array<Il2CppClass const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(),
                                                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get(),
                                                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryConcrete>::get(),
                                                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryContract>::get() },
                                                                                  ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryConcrete>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryContract>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FactoryToChoiceIdBinder_2<TParam1, TContract>*, false>(this, ___internal_method);
}
template <typename TParam1, typename TParam2, typename TContract, typename TFactoryContract, typename TFactoryConcrete>
inline ::Zenject::FactoryToChoiceIdBinder_3<TParam1, TParam2, TContract>* Zenject::DiContainer::BindFactoryInternal() {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "BindFactoryInternal",
      std::array<Il2CppClass const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryContract>::get(),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryConcrete>::get() },
      ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
      ___internal_method_base,
      std::array<Il2CppClass const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryContract>::get(),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryConcrete>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FactoryToChoiceIdBinder_3<TParam1, TParam2, TContract>*, false>(this, ___internal_method);
}
template <typename TParam1, typename TParam2, typename TContract> inline ::Zenject::FactoryToChoiceIdBinder_3<TParam1, TParam2, TContract>* Zenject::DiContainer::BindIFactory() {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "BindIFactory",
                                                                                  std::array<Il2CppClass const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(),
                                                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(),
                                                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get() },
                                                                                  ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FactoryToChoiceIdBinder_3<TParam1, TParam2, TContract>*, false>(this, ___internal_method);
}
template <typename TParam1, typename TParam2, typename TContract, typename TFactory> inline ::Zenject::FactoryToChoiceIdBinder_3<TParam1, TParam2, TContract>* Zenject::DiContainer::BindFactory() {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "BindFactory",
      std::array<Il2CppClass const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactory>::get() },
      ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
      ___internal_method_base,
      std::array<Il2CppClass const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactory>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FactoryToChoiceIdBinder_3<TParam1, TParam2, TContract>*, false>(this, ___internal_method);
}
template <typename TParam1, typename TParam2, typename TContract, typename TFactoryConcrete, typename TFactoryContract>
inline ::Zenject::FactoryToChoiceIdBinder_3<TParam1, TParam2, TContract>* Zenject::DiContainer::BindFactoryCustomInterface() {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "BindFactoryCustomInterface",
      std::array<Il2CppClass const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryConcrete>::get(),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryContract>::get() },
      ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
      ___internal_method_base,
      std::array<Il2CppClass const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryConcrete>::get(),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryContract>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FactoryToChoiceIdBinder_3<TParam1, TParam2, TContract>*, false>(this, ___internal_method);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TContract, typename TFactoryContract, typename TFactoryConcrete>
inline ::Zenject::FactoryToChoiceIdBinder_4<TParam1, TParam2, TParam3, TContract>* Zenject::DiContainer::BindFactoryInternal() {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "BindFactoryInternal",
      std::array<Il2CppClass const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get(),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryContract>::get(),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryConcrete>::get() },
      ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
      ___internal_method_base, std::array<Il2CppClass const*, 6>{
                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(),
                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get(),
                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryConcrete>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FactoryToChoiceIdBinder_4<TParam1, TParam2, TParam3, TContract>*, false>(this, ___internal_method);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TContract>
inline ::Zenject::FactoryToChoiceIdBinder_4<TParam1, TParam2, TParam3, TContract>* Zenject::DiContainer::BindIFactory() {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "BindIFactory",
      std::array<Il2CppClass const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get() },
      ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
      ___internal_method_base,
      std::array<Il2CppClass const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FactoryToChoiceIdBinder_4<TParam1, TParam2, TParam3, TContract>*, false>(this, ___internal_method);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TContract, typename TFactory>
inline ::Zenject::FactoryToChoiceIdBinder_4<TParam1, TParam2, TParam3, TContract>* Zenject::DiContainer::BindFactory() {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "BindFactory",
      std::array<Il2CppClass const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get(),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactory>::get() },
      ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
      ___internal_method_base,
      std::array<Il2CppClass const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get(),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactory>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FactoryToChoiceIdBinder_4<TParam1, TParam2, TParam3, TContract>*, false>(this, ___internal_method);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TContract, typename TFactoryConcrete, typename TFactoryContract>
inline ::Zenject::FactoryToChoiceIdBinder_4<TParam1, TParam2, TParam3, TContract>* Zenject::DiContainer::BindFactoryCustomInterface() {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "BindFactoryCustomInterface",
      std::array<Il2CppClass const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get(),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryConcrete>::get(),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryContract>::get() },
      ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
      ___internal_method_base, std::array<Il2CppClass const*, 6>{
                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(),
                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get(),
                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryConcrete>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryContract>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FactoryToChoiceIdBinder_4<TParam1, TParam2, TParam3, TContract>*, false>(this, ___internal_method);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TContract, typename TFactoryContract, typename TFactoryConcrete>
inline ::Zenject::FactoryToChoiceIdBinder_5<TParam1, TParam2, TParam3, TParam4, TContract>* Zenject::DiContainer::BindFactoryInternal() {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "BindFactoryInternal",
      std::array<Il2CppClass const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam4>::get(),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryContract>::get(),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryConcrete>::get() },
      ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
      ___internal_method_base,
      std::array<Il2CppClass const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam4>::get(),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryContract>::get(),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryConcrete>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FactoryToChoiceIdBinder_5<TParam1, TParam2, TParam3, TParam4, TContract>*, false>(this, ___internal_method);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TContract>
inline ::Zenject::FactoryToChoiceIdBinder_5<TParam1, TParam2, TParam3, TParam4, TContract>* Zenject::DiContainer::BindIFactory() {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "BindIFactory",
      std::array<Il2CppClass const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam4>::get(),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get() },
      ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
      ___internal_method_base,
      std::array<Il2CppClass const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam4>::get(),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FactoryToChoiceIdBinder_5<TParam1, TParam2, TParam3, TParam4, TContract>*, false>(this, ___internal_method);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TContract, typename TFactory>
inline ::Zenject::FactoryToChoiceIdBinder_5<TParam1, TParam2, TParam3, TParam4, TContract>* Zenject::DiContainer::BindFactory() {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "BindFactory",
      std::array<Il2CppClass const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam4>::get(),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactory>::get() },
      ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
      ___internal_method_base,
      std::array<Il2CppClass const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam4>::get(),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactory>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FactoryToChoiceIdBinder_5<TParam1, TParam2, TParam3, TParam4, TContract>*, false>(this, ___internal_method);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TContract, typename TFactoryConcrete, typename TFactoryContract>
inline ::Zenject::FactoryToChoiceIdBinder_5<TParam1, TParam2, TParam3, TParam4, TContract>* Zenject::DiContainer::BindFactoryCustomInterface() {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "BindFactoryCustomInterface",
      std::array<Il2CppClass const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam4>::get(),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryConcrete>::get(),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryContract>::get() },
      ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
      ___internal_method_base,
      std::array<Il2CppClass const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam4>::get(),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryConcrete>::get(),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryContract>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FactoryToChoiceIdBinder_5<TParam1, TParam2, TParam3, TParam4, TContract>*, false>(this, ___internal_method);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TContract, typename TFactoryContract, typename TFactoryConcrete>
inline ::Zenject::FactoryToChoiceIdBinder_6<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>* Zenject::DiContainer::BindFactoryInternal() {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "BindFactoryInternal",
      std::array<Il2CppClass const*, 8>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam4>::get(),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam5>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get(),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryContract>::get(),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryConcrete>::get() },
      ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
      ___internal_method_base, std::array<Il2CppClass const*, 8>{
                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(),
                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam4>::get(),
                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam5>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get(),
                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryConcrete>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FactoryToChoiceIdBinder_6<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>*, false>(this, ___internal_method);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TContract>
inline ::Zenject::FactoryToChoiceIdBinder_6<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>* Zenject::DiContainer::BindIFactory() {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "BindIFactory",
      std::array<Il2CppClass const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam4>::get(),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam5>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get() },
      ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
      ___internal_method_base,
      std::array<Il2CppClass const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam4>::get(),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam5>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FactoryToChoiceIdBinder_6<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>*, false>(this, ___internal_method);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TContract, typename TFactory>
inline ::Zenject::FactoryToChoiceIdBinder_6<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>* Zenject::DiContainer::BindFactory() {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "BindFactory",
      std::array<Il2CppClass const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam4>::get(),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam5>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get(),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactory>::get() },
      ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
      ___internal_method_base,
      std::array<Il2CppClass const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam4>::get(),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam5>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get(),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactory>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FactoryToChoiceIdBinder_6<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>*, false>(this, ___internal_method);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TContract, typename TFactoryConcrete, typename TFactoryContract>
inline ::Zenject::FactoryToChoiceIdBinder_6<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>* Zenject::DiContainer::BindFactoryCustomInterface() {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "BindFactoryCustomInterface",
      std::array<Il2CppClass const*, 8>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam4>::get(),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam5>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get(),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryConcrete>::get(),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryContract>::get() },
      ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
      ___internal_method_base, std::array<Il2CppClass const*, 8>{
                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(),
                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam4>::get(),
                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam5>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get(),
                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryConcrete>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryContract>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FactoryToChoiceIdBinder_6<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>*, false>(this, ___internal_method);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TContract, typename TFactoryContract, typename TFactoryConcrete>
inline ::Zenject::FactoryToChoiceIdBinder_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>* Zenject::DiContainer::BindFactoryInternal() {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "BindFactoryInternal",
      std::array<Il2CppClass const*, 9>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam4>::get(),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam5>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam6>::get(),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryContract>::get(),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryConcrete>::get() },
      ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
      ___internal_method_base,
      std::array<Il2CppClass const*, 9>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam4>::get(),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam5>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam6>::get(),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryContract>::get(),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryConcrete>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FactoryToChoiceIdBinder_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>*, false>(this, ___internal_method);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TContract>
inline ::Zenject::FactoryToChoiceIdBinder_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>* Zenject::DiContainer::BindIFactory() {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "BindIFactory",
      std::array<Il2CppClass const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam4>::get(),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam5>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam6>::get(),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get() },
      ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
      ___internal_method_base,
      std::array<Il2CppClass const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam4>::get(),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam5>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam6>::get(),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FactoryToChoiceIdBinder_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>*, false>(this, ___internal_method);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TContract, typename TFactory>
inline ::Zenject::FactoryToChoiceIdBinder_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>* Zenject::DiContainer::BindFactory() {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "BindFactory",
      std::array<Il2CppClass const*, 8>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam4>::get(),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam5>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam6>::get(),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactory>::get() },
      ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
      ___internal_method_base,
      std::array<Il2CppClass const*, 8>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam4>::get(),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam5>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam6>::get(),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactory>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FactoryToChoiceIdBinder_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>*, false>(this, ___internal_method);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TContract, typename TFactoryConcrete, typename TFactoryContract>
inline ::Zenject::FactoryToChoiceIdBinder_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>* Zenject::DiContainer::BindFactoryCustomInterface() {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "BindFactoryCustomInterface",
      std::array<Il2CppClass const*, 9>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam4>::get(),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam5>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam6>::get(),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryConcrete>::get(),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryContract>::get() },
      ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
      ___internal_method_base,
      std::array<Il2CppClass const*, 9>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam4>::get(),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam5>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam6>::get(),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryConcrete>::get(),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryContract>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FactoryToChoiceIdBinder_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>*, false>(this, ___internal_method);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TParam7, typename TParam8, typename TParam9, typename TParam10,
          typename TContract, typename TFactoryContract, typename TFactoryConcrete>
inline ::Zenject::FactoryToChoiceIdBinder_11<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TContract>* Zenject::DiContainer::BindFactoryInternal() {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "BindFactoryInternal",
      std::array<Il2CppClass const*, 13>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam4>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam5>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam6>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam7>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam8>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam9>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam10>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryContract>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryConcrete>::get() },
      ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
      ___internal_method_base,
      std::array<Il2CppClass const*, 13>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam4>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam5>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam6>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam7>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam8>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam9>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam10>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryContract>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryConcrete>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FactoryToChoiceIdBinder_11<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TContract>*, false>(
      this, ___internal_method);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TParam7, typename TParam8, typename TParam9, typename TParam10,
          typename TContract>
inline ::Zenject::FactoryToChoiceIdBinder_11<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TContract>* Zenject::DiContainer::BindIFactory() {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "BindIFactory",
      std::array<Il2CppClass const*, 11>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam4>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam5>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam6>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam7>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam8>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam9>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam10>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get() },
      ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
      ___internal_method_base,
      std::array<Il2CppClass const*, 11>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam4>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam5>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam6>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam7>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam8>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam9>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam10>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FactoryToChoiceIdBinder_11<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TContract>*, false>(
      this, ___internal_method);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TParam7, typename TParam8, typename TParam9, typename TParam10,
          typename TContract, typename TFactory>
inline ::Zenject::FactoryToChoiceIdBinder_11<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TContract>* Zenject::DiContainer::BindFactory() {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "BindFactory",
      std::array<Il2CppClass const*, 12>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam4>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam5>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam6>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam7>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam8>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam9>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam10>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactory>::get() },
      ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
      ___internal_method_base,
      std::array<Il2CppClass const*, 12>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam4>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam5>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam6>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam7>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam8>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam9>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam10>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactory>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FactoryToChoiceIdBinder_11<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TContract>*, false>(
      this, ___internal_method);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TParam7, typename TParam8, typename TParam9, typename TParam10,
          typename TContract, typename TFactoryConcrete, typename TFactoryContract>
inline ::Zenject::FactoryToChoiceIdBinder_11<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TContract>* Zenject::DiContainer::BindFactoryCustomInterface() {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "BindFactoryCustomInterface",
      std::array<Il2CppClass const*, 13>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam4>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam5>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam6>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam7>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam8>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam9>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam10>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryConcrete>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryContract>::get() },
      ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
      ___internal_method_base,
      std::array<Il2CppClass const*, 13>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam4>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam5>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam6>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam7>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam8>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam9>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam10>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryConcrete>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryContract>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FactoryToChoiceIdBinder_11<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TContract>*, false>(
      this, ___internal_method);
}
template <typename T> inline T Zenject::DiContainer::InstantiateExplicit(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* extraArgs) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "InstantiateExplicit",
      std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method, extraArgs);
}
inline ::System::Object* Zenject::DiContainer::InstantiateExplicit(::System::Type* concreteType, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* extraArgs) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "InstantiateExplicit", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, concreteType, extraArgs);
}
inline ::System::Object* Zenject::DiContainer::InstantiateExplicit(::System::Type* concreteType, bool autoInject, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* extraArgs,
                                                                   ::Zenject::InjectContext* context, ::System::Object* concreteIdentifier) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "InstantiateExplicit", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, concreteType, autoInject, extraArgs, context, concreteIdentifier);
}
inline ::UnityW<::UnityEngine::Component> Zenject::DiContainer::InstantiateComponentExplicit(::System::Type* componentType, ::UnityEngine::GameObject* gameObject,
                                                                                             ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* extraArgs) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "InstantiateComponentExplicit", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Component>, false>(this, ___internal_method, componentType, gameObject, extraArgs);
}
inline ::System::Object* Zenject::DiContainer::InstantiateScriptableObjectResourceExplicit(::System::Type* scriptableObjectType, ::StringW resourcePath,
                                                                                           ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* extraArgs) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "InstantiateScriptableObjectResourceExplicit", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, scriptableObjectType, resourcePath, extraArgs);
}
inline ::System::Object* Zenject::DiContainer::InstantiatePrefabResourceForComponentExplicit(::System::Type* componentType, ::StringW resourcePath,
                                                                                             ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* extraArgs,
                                                                                             ::Zenject::GameObjectCreationParameters* creationInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "InstantiatePrefabResourceForComponentExplicit", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::GameObjectCreationParameters*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, componentType, resourcePath, extraArgs, creationInfo);
}
inline ::System::Object* Zenject::DiContainer::InstantiatePrefabResourceForComponentExplicit(::System::Type* componentType, ::StringW resourcePath,
                                                                                             ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* extraArgs,
                                                                                             ::Zenject::InjectContext* context, ::System::Object* concreteIdentifier,
                                                                                             ::Zenject::GameObjectCreationParameters* creationInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "InstantiatePrefabResourceForComponentExplicit", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::GameObjectCreationParameters*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, componentType, resourcePath, extraArgs, context, concreteIdentifier, creationInfo);
}
inline ::System::Object* Zenject::DiContainer::InstantiatePrefabForComponentExplicit(::System::Type* componentType, ::UnityEngine::Object* prefab,
                                                                                     ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* extraArgs) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "InstantiatePrefabForComponentExplicit", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, componentType, prefab, extraArgs);
}
inline ::System::Object* Zenject::DiContainer::InstantiatePrefabForComponentExplicit(::System::Type* componentType, ::UnityEngine::Object* prefab,
                                                                                     ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* extraArgs,
                                                                                     ::Zenject::GameObjectCreationParameters* gameObjectBindInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "InstantiatePrefabForComponentExplicit", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::GameObjectCreationParameters*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, componentType, prefab, extraArgs, gameObjectBindInfo);
}
inline ::System::Object* Zenject::DiContainer::InstantiatePrefabForComponentExplicit(::System::Type* componentType, ::UnityEngine::Object* prefab,
                                                                                     ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* extraArgs, ::Zenject::InjectContext* context,
                                                                                     ::System::Object* concreteIdentifier, ::Zenject::GameObjectCreationParameters* gameObjectBindInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "InstantiatePrefabForComponentExplicit", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::GameObjectCreationParameters*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, componentType, prefab, extraArgs, context, concreteIdentifier, gameObjectBindInfo);
}
template <typename T> inline void Zenject::DiContainer::BindExecutionOrder(int32_t order) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "BindExecutionOrder",
                                                                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                                                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, order);
}
inline void Zenject::DiContainer::BindExecutionOrder(::System::Type* type, int32_t order) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "BindExecutionOrder", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type, order);
}
template <typename T> inline ::Zenject::CopyNonLazyBinder* Zenject::DiContainer::BindTickableExecutionOrder(int32_t order) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "BindTickableExecutionOrder",
                                                                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                                                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Zenject::CopyNonLazyBinder*, false>(this, ___internal_method, order);
}
inline ::Zenject::CopyNonLazyBinder* Zenject::DiContainer::BindTickableExecutionOrder(::System::Type* type, int32_t order) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "BindTickableExecutionOrder", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::CopyNonLazyBinder*, false>(this, ___internal_method, type, order);
}
template <typename T> inline ::Zenject::CopyNonLazyBinder* Zenject::DiContainer::BindInitializableExecutionOrder(int32_t order) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "BindInitializableExecutionOrder",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Zenject::CopyNonLazyBinder*, false>(this, ___internal_method, order);
}
inline ::Zenject::CopyNonLazyBinder* Zenject::DiContainer::BindInitializableExecutionOrder(::System::Type* type, int32_t order) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "BindInitializableExecutionOrder", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::CopyNonLazyBinder*, false>(this, ___internal_method, type, order);
}
template <typename T> inline ::Zenject::CopyNonLazyBinder* Zenject::DiContainer::BindDisposableExecutionOrder(int32_t order) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "BindDisposableExecutionOrder",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Zenject::CopyNonLazyBinder*, false>(this, ___internal_method, order);
}
template <typename T> inline ::Zenject::CopyNonLazyBinder* Zenject::DiContainer::BindLateDisposableExecutionOrder(int32_t order) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "BindLateDisposableExecutionOrder",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Zenject::CopyNonLazyBinder*, false>(this, ___internal_method, order);
}
inline ::Zenject::CopyNonLazyBinder* Zenject::DiContainer::BindDisposableExecutionOrder(::System::Type* type, int32_t order) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "BindDisposableExecutionOrder", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::CopyNonLazyBinder*, false>(this, ___internal_method, type, order);
}
inline ::Zenject::CopyNonLazyBinder* Zenject::DiContainer::BindLateDisposableExecutionOrder(::System::Type* type, int32_t order) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "BindLateDisposableExecutionOrder", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::CopyNonLazyBinder*, false>(this, ___internal_method, type, order);
}
template <typename T> inline ::Zenject::CopyNonLazyBinder* Zenject::DiContainer::BindFixedTickableExecutionOrder(int32_t order) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "BindFixedTickableExecutionOrder",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Zenject::CopyNonLazyBinder*, false>(this, ___internal_method, order);
}
inline ::Zenject::CopyNonLazyBinder* Zenject::DiContainer::BindFixedTickableExecutionOrder(::System::Type* type, int32_t order) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "BindFixedTickableExecutionOrder", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::CopyNonLazyBinder*, false>(this, ___internal_method, type, order);
}
template <typename T> inline ::Zenject::CopyNonLazyBinder* Zenject::DiContainer::BindLateTickableExecutionOrder(int32_t order) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "BindLateTickableExecutionOrder",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Zenject::CopyNonLazyBinder*, false>(this, ___internal_method, order);
}
inline ::Zenject::CopyNonLazyBinder* Zenject::DiContainer::BindLateTickableExecutionOrder(::System::Type* type, int32_t order) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "BindLateTickableExecutionOrder", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::CopyNonLazyBinder*, false>(this, ___internal_method, type, order);
}
template <typename T> inline ::Zenject::CopyNonLazyBinder* Zenject::DiContainer::BindPoolableExecutionOrder(int32_t order) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "BindPoolableExecutionOrder",
                                                                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                                                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Zenject::CopyNonLazyBinder*, false>(this, ___internal_method, order);
}
inline ::Zenject::CopyNonLazyBinder* Zenject::DiContainer::BindPoolableExecutionOrder(::System::Type* type, int32_t order) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DiContainer*>::get(), "BindPoolableExecutionOrder", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::CopyNonLazyBinder*, false>(this, ___internal_method, type, order);
}
// Ctor Parameters []
constexpr ::Zenject::DiContainer::DiContainer() {}
