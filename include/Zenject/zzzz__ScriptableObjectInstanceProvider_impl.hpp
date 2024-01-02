#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__ScriptableObjectInstanceProvider_def.hpp"
#include "Zenject/zzzz__TypeValuePair_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "Zenject/zzzz__IProvider_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__InjectContext_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "Zenject/zzzz__ScriptableObjectInstanceProvider_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
//  Writing Method size for method: ::Zenject::__ScriptableObjectInstanceProvider____c__DisplayClass13_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::__ScriptableObjectInstanceProvider____c__DisplayClass13_0::*)()>(
    &::Zenject::__ScriptableObjectInstanceProvider____c__DisplayClass13_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f0a508;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__ScriptableObjectInstanceProvider____c__DisplayClass13_0*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__ScriptableObjectInstanceProvider____c__DisplayClass13_0._GetAllInstancesWithInjectSplit_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::__ScriptableObjectInstanceProvider____c__DisplayClass13_0::*)()>(
    &::Zenject::__ScriptableObjectInstanceProvider____c__DisplayClass13_0::_GetAllInstancesWithInjectSplit_b__0)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x2f0a510;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__ScriptableObjectInstanceProvider____c__DisplayClass13_0*>::get(),
                                                 "<GetAllInstancesWithInjectSplit>b__0", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__ScriptableObjectInstanceProvider____c__DisplayClass13_0.__zenCreate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*, ::Array<::System::Object*>*>)>(
    &::Zenject::__ScriptableObjectInstanceProvider____c__DisplayClass13_0::__zenCreate)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2f0a6a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__ScriptableObjectInstanceProvider____c__DisplayClass13_0*>::get(), "__zenCreate", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::__ScriptableObjectInstanceProvider____c__DisplayClass13_0.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(
    &::Zenject::__ScriptableObjectInstanceProvider____c__DisplayClass13_0::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x2f0a6fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__ScriptableObjectInstanceProvider____c__DisplayClass13_0*>::get(),
                                                 "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::System::Object*>*& Zenject::__ScriptableObjectInstanceProvider____c__DisplayClass13_0::__get_buffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buffer;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Object*>*> const&
Zenject::__ScriptableObjectInstanceProvider____c__DisplayClass13_0::__get_buffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buffer;
}
constexpr void Zenject::__ScriptableObjectInstanceProvider____c__DisplayClass13_0::__set_buffer(::System::Collections::Generic::List_1<::System::Object*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___buffer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Zenject::ScriptableObjectInstanceProvider*& Zenject::__ScriptableObjectInstanceProvider____c__DisplayClass13_0::__get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::cordl_internals::to_const_pointer<::Zenject::ScriptableObjectInstanceProvider*> const& Zenject::__ScriptableObjectInstanceProvider____c__DisplayClass13_0::__get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void Zenject::__ScriptableObjectInstanceProvider____c__DisplayClass13_0::__set___4__this(::Zenject::ScriptableObjectInstanceProvider* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*& Zenject::__ScriptableObjectInstanceProvider____c__DisplayClass13_0::__get_args() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___args;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*> const&
Zenject::__ScriptableObjectInstanceProvider____c__DisplayClass13_0::__get_args() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___args;
}
constexpr void Zenject::__ScriptableObjectInstanceProvider____c__DisplayClass13_0::__set_args(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___args)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Zenject::InjectContext*& Zenject::__ScriptableObjectInstanceProvider____c__DisplayClass13_0::__get_context() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___context;
}
constexpr ::cordl_internals::to_const_pointer<::Zenject::InjectContext*> const& Zenject::__ScriptableObjectInstanceProvider____c__DisplayClass13_0::__get_context() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___context;
}
constexpr void Zenject::__ScriptableObjectInstanceProvider____c__DisplayClass13_0::__set_context(::Zenject::InjectContext* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___context)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Zenject::__ScriptableObjectInstanceProvider____c__DisplayClass13_0* Zenject::__ScriptableObjectInstanceProvider____c__DisplayClass13_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Zenject::__ScriptableObjectInstanceProvider____c__DisplayClass13_0*>());
}
inline void Zenject::__ScriptableObjectInstanceProvider____c__DisplayClass13_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__ScriptableObjectInstanceProvider____c__DisplayClass13_0*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Zenject::__ScriptableObjectInstanceProvider____c__DisplayClass13_0::_GetAllInstancesWithInjectSplit_b__0() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__ScriptableObjectInstanceProvider____c__DisplayClass13_0*>::get(),
                                               "<GetAllInstancesWithInjectSplit>b__0", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* Zenject::__ScriptableObjectInstanceProvider____c__DisplayClass13_0::__zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__ScriptableObjectInstanceProvider____c__DisplayClass13_0*>::get(), "__zenCreate", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::__ScriptableObjectInstanceProvider____c__DisplayClass13_0::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__ScriptableObjectInstanceProvider____c__DisplayClass13_0*>::get(),
                                               "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Zenject::__ScriptableObjectInstanceProvider____c__DisplayClass13_0::__ScriptableObjectInstanceProvider____c__DisplayClass13_0() {}
//  Writing Method size for method: ::Zenject::ScriptableObjectInstanceProvider._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::ScriptableObjectInstanceProvider::*)(
    ::UnityEngine::Object*, ::System::Type*, ::Zenject::DiContainer*, ::System::Collections::Generic::IEnumerable_1<::Zenject::TypeValuePair>*, bool, ::System::Object*,
    ::System::Action_2<::Zenject::InjectContext*, ::System::Object*>*)>(&::Zenject::ScriptableObjectInstanceProvider::_ctor)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x2f0a278;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ScriptableObjectInstanceProvider*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::Zenject::TypeValuePair>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::Zenject::InjectContext*, ::System::Object*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ScriptableObjectInstanceProvider.get_IsCached
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Zenject::ScriptableObjectInstanceProvider::*)()>(
    &::Zenject::ScriptableObjectInstanceProvider::get_IsCached)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f0a340;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ScriptableObjectInstanceProvider*>::get(),
                                                                               "get_IsCached", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ScriptableObjectInstanceProvider.get_TypeVariesBasedOnMemberType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Zenject::ScriptableObjectInstanceProvider::*)()>(
    &::Zenject::ScriptableObjectInstanceProvider::get_TypeVariesBasedOnMemberType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f0a348;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ScriptableObjectInstanceProvider*>::get(),
                                                                               "get_TypeVariesBasedOnMemberType", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ScriptableObjectInstanceProvider.GetInstanceType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (::Zenject::ScriptableObjectInstanceProvider::*)(::Zenject::InjectContext*)>(
    &::Zenject::ScriptableObjectInstanceProvider::GetInstanceType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f0a350;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ScriptableObjectInstanceProvider*>::get(), "GetInstanceType", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ScriptableObjectInstanceProvider.GetAllInstancesWithInjectSplit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::ScriptableObjectInstanceProvider::*)(
    ::Zenject::InjectContext*, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*, ByRef<::System::Action*>, ::System::Collections::Generic::List_1<::System::Object*>*)>(
    &::Zenject::ScriptableObjectInstanceProvider::GetAllInstancesWithInjectSplit)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x2f0a358;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ScriptableObjectInstanceProvider*>::get(), "GetAllInstancesWithInjectSplit", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Action*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Object*>*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Zenject::IProvider"
constexpr Zenject::ScriptableObjectInstanceProvider::operator ::Zenject::IProvider*() noexcept {
  return static_cast<::Zenject::IProvider*>(static_cast<void*>(this));
}
constexpr ::Zenject::DiContainer*& Zenject::ScriptableObjectInstanceProvider::__get__container() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____container;
}
constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> const& Zenject::ScriptableObjectInstanceProvider::__get__container() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____container;
}
constexpr void Zenject::ScriptableObjectInstanceProvider::__set__container(::Zenject::DiContainer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____container)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Type*& Zenject::ScriptableObjectInstanceProvider::__get__resourceType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____resourceType;
}
constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& Zenject::ScriptableObjectInstanceProvider::__get__resourceType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____resourceType;
}
constexpr void Zenject::ScriptableObjectInstanceProvider::__set__resourceType(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____resourceType)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*& Zenject::ScriptableObjectInstanceProvider::__get__extraArguments() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____extraArguments;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*> const& Zenject::ScriptableObjectInstanceProvider::__get__extraArguments() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____extraArguments;
}
constexpr void Zenject::ScriptableObjectInstanceProvider::__set__extraArguments(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____extraArguments)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& Zenject::ScriptableObjectInstanceProvider::__get__createNew() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____createNew;
}
constexpr bool const& Zenject::ScriptableObjectInstanceProvider::__get__createNew() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____createNew;
}
constexpr void Zenject::ScriptableObjectInstanceProvider::__set__createNew(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____createNew = value;
}
constexpr ::System::Object*& Zenject::ScriptableObjectInstanceProvider::__get__concreteIdentifier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____concreteIdentifier;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& Zenject::ScriptableObjectInstanceProvider::__get__concreteIdentifier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____concreteIdentifier;
}
constexpr void Zenject::ScriptableObjectInstanceProvider::__set__concreteIdentifier(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____concreteIdentifier)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_2<::Zenject::InjectContext*, ::System::Object*>*& Zenject::ScriptableObjectInstanceProvider::__get__instantiateCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____instantiateCallback;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::Zenject::InjectContext*, ::System::Object*>*> const& Zenject::ScriptableObjectInstanceProvider::__get__instantiateCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____instantiateCallback;
}
constexpr void Zenject::ScriptableObjectInstanceProvider::__set__instantiateCallback(::System::Action_2<::Zenject::InjectContext*, ::System::Object*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____instantiateCallback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Object*& Zenject::ScriptableObjectInstanceProvider::__get__resource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____resource;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Object*> const& Zenject::ScriptableObjectInstanceProvider::__get__resource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____resource;
}
constexpr void Zenject::ScriptableObjectInstanceProvider::__set__resource(::UnityEngine::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____resource)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Zenject::ScriptableObjectInstanceProvider* Zenject::ScriptableObjectInstanceProvider::New_ctor(::UnityEngine::Object* resource, ::System::Type* resourceType,
                                                                                                        ::Zenject::DiContainer* container,
                                                                                                        ::System::Collections::Generic::IEnumerable_1<::Zenject::TypeValuePair>* extraArguments,
                                                                                                        bool createNew, ::System::Object* concreteIdentifier,
                                                                                                        ::System::Action_2<::Zenject::InjectContext*, ::System::Object*>* instantiateCallback) {
  return THROW_UNLESS(::il2cpp_utils::New<::Zenject::ScriptableObjectInstanceProvider*>(resource, resourceType, container, extraArguments, createNew, concreteIdentifier, instantiateCallback));
}
inline void Zenject::ScriptableObjectInstanceProvider::_ctor(::UnityEngine::Object* resource, ::System::Type* resourceType, ::Zenject::DiContainer* container,
                                                             ::System::Collections::Generic::IEnumerable_1<::Zenject::TypeValuePair>* extraArguments, bool createNew,
                                                             ::System::Object* concreteIdentifier, ::System::Action_2<::Zenject::InjectContext*, ::System::Object*>* instantiateCallback) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ScriptableObjectInstanceProvider*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::Zenject::TypeValuePair>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::Zenject::InjectContext*, ::System::Object*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, resource, resourceType, container, extraArguments, createNew, concreteIdentifier, instantiateCallback);
}
inline bool Zenject::ScriptableObjectInstanceProvider::get_IsCached() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ScriptableObjectInstanceProvider*>::get(),
                                                                             "get_IsCached", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool Zenject::ScriptableObjectInstanceProvider::get_TypeVariesBasedOnMemberType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ScriptableObjectInstanceProvider*>::get(),
                                                                             "get_TypeVariesBasedOnMemberType", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Type* Zenject::ScriptableObjectInstanceProvider::GetInstanceType(::Zenject::InjectContext* context) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ScriptableObjectInstanceProvider*>::get(), "GetInstanceType", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method, context);
}
inline void Zenject::ScriptableObjectInstanceProvider::GetAllInstancesWithInjectSplit(::Zenject::InjectContext* context, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* args,
                                                                                      ByRef<::System::Action*> injectAction, ::System::Collections::Generic::List_1<::System::Object*>* buffer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ScriptableObjectInstanceProvider*>::get(), "GetAllInstancesWithInjectSplit", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Action*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Object*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context, args, injectAction, buffer);
}
// Ctor Parameters []
constexpr ::Zenject::ScriptableObjectInstanceProvider::ScriptableObjectInstanceProvider() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
