#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__LazyInstanceInjector_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
//  Writing Method size for method: ::Zenject::LazyInstanceInjector._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::LazyInstanceInjector::*)(::Zenject::DiContainer*)>(&::Zenject::LazyInstanceInjector::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2f04158;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::LazyInstanceInjector*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::LazyInstanceInjector.get_Instances
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::System::Object*>* (::Zenject::LazyInstanceInjector::*)()>(
    &::Zenject::LazyInstanceInjector::get_Instances)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f041e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::LazyInstanceInjector*>::get(), "get_Instances",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::LazyInstanceInjector.AddInstance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::LazyInstanceInjector::*)(::System::Object*)>(&::Zenject::LazyInstanceInjector::AddInstance)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2f041f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::LazyInstanceInjector*>::get(), "AddInstance", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::LazyInstanceInjector.AddInstances
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::LazyInstanceInjector::*)(::System::Collections::Generic::IEnumerable_1<::System::Object*>*)>(
    &::Zenject::LazyInstanceInjector::AddInstances)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2f04248;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::LazyInstanceInjector*>::get(), "AddInstances", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::LazyInstanceInjector.LazyInject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::LazyInstanceInjector::*)(::System::Object*)>(&::Zenject::LazyInstanceInjector::LazyInject)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2f042a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::LazyInstanceInjector*>::get(), "LazyInject", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::LazyInstanceInjector.LazyInjectAll
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::LazyInstanceInjector::*)()>(&::Zenject::LazyInstanceInjector::LazyInjectAll)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x2f0431c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::LazyInstanceInjector*>::get(), "LazyInjectAll",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::Zenject::DiContainer*& Zenject::LazyInstanceInjector::__get__container() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____container;
}
constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> const& Zenject::LazyInstanceInjector::__get__container() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____container;
}
constexpr void Zenject::LazyInstanceInjector::__set__container(::Zenject::DiContainer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____container)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::HashSet_1<::System::Object*>*& Zenject::LazyInstanceInjector::__get__instancesToInject() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____instancesToInject;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::System::Object*>*> const& Zenject::LazyInstanceInjector::__get__instancesToInject() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____instancesToInject;
}
constexpr void Zenject::LazyInstanceInjector::__set__instancesToInject(::System::Collections::Generic::HashSet_1<::System::Object*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____instancesToInject)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Zenject::LazyInstanceInjector* Zenject::LazyInstanceInjector::New_ctor(::Zenject::DiContainer* container) {
  return THROW_UNLESS(::il2cpp_utils::New<::Zenject::LazyInstanceInjector*>(container));
}
inline void Zenject::LazyInstanceInjector::_ctor(::Zenject::DiContainer* container) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::LazyInstanceInjector*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, container);
}
inline ::System::Collections::Generic::IEnumerable_1<::System::Object*>* Zenject::LazyInstanceInjector::get_Instances() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::LazyInstanceInjector*>::get(), "get_Instances",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::System::Object*>*, false>(this, ___internal_method);
}
inline void Zenject::LazyInstanceInjector::AddInstance(::System::Object* instance) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::LazyInstanceInjector*>::get(), "AddInstance", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, instance);
}
inline void Zenject::LazyInstanceInjector::AddInstances(::System::Collections::Generic::IEnumerable_1<::System::Object*>* instances) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::LazyInstanceInjector*>::get(), "AddInstances", std::vector<Il2CppClass*>{},
                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, instances);
}
inline void Zenject::LazyInstanceInjector::LazyInject(::System::Object* instance) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::LazyInstanceInjector*>::get(), "LazyInject", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, instance);
}
inline void Zenject::LazyInstanceInjector::LazyInjectAll() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::LazyInstanceInjector*>::get(), "LazyInjectAll",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Zenject::LazyInstanceInjector::LazyInstanceInjector() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
