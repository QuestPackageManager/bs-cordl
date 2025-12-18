#pragma once
// IWYU pragma private; include "Zenject/SubContainerDependencyProvider.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__SubContainerDependencyProvider_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__IProvider_def.hpp"
#include "Zenject/zzzz__ISubContainerCreator_def.hpp"
#include "Zenject/zzzz__InjectContext_def.hpp"
#include "Zenject/zzzz__TypeValuePair_def.hpp"
//  Writing Method size for method: ::Zenject::SubContainerDependencyProvider._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::Zenject::SubContainerDependencyProvider::*)(::System::Type*, ::System::Object*, ::Zenject::ISubContainerCreator*, bool)>(&::Zenject::SubContainerDependencyProvider::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6cc0220;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SubContainerDependencyProvider*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::ISubContainerCreator*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SubContainerDependencyProvider.get_IsCached
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Zenject::SubContainerDependencyProvider::*)()>(&::Zenject::SubContainerDependencyProvider::get_IsCached)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6cc0230;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SubContainerDependencyProvider*>::get(),
                                                                               "get_IsCached", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SubContainerDependencyProvider.get_TypeVariesBasedOnMemberType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Zenject::SubContainerDependencyProvider::*)()>(
    &::Zenject::SubContainerDependencyProvider::get_TypeVariesBasedOnMemberType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6cc0238;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SubContainerDependencyProvider*>::get(), "get_TypeVariesBasedOnMemberType",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SubContainerDependencyProvider.GetInstanceType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (::Zenject::SubContainerDependencyProvider::*)(::Zenject::InjectContext*)>(
    &::Zenject::SubContainerDependencyProvider::GetInstanceType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6cc0240;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SubContainerDependencyProvider*>::get(), "GetInstanceType", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SubContainerDependencyProvider.CreateSubContext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectContext* (
    ::Zenject::SubContainerDependencyProvider::*)(::Zenject::InjectContext*, ::Zenject::DiContainer*)>(&::Zenject::SubContainerDependencyProvider::CreateSubContext)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6cc0248;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SubContainerDependencyProvider*>::get(), "CreateSubContext", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SubContainerDependencyProvider.GetAllInstancesWithInjectSplit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::SubContainerDependencyProvider::*)(
    ::Zenject::InjectContext*, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*, ::ByRef<::System::Action*>, ::System::Collections::Generic::List_1<::System::Object*>*)>(
    &::Zenject::SubContainerDependencyProvider::GetAllInstancesWithInjectSplit)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x6cc0284;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SubContainerDependencyProvider*>::get(), "GetAllInstancesWithInjectSplit", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Action*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Object*>*>::get() })));
    return ___internal_method;
  }
};
constexpr ::Zenject::ISubContainerCreator*& Zenject::SubContainerDependencyProvider::__cordl_internal_get__subContainerCreator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____subContainerCreator;
}
constexpr ::Zenject::ISubContainerCreator* const& Zenject::SubContainerDependencyProvider::__cordl_internal_get__subContainerCreator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____subContainerCreator;
}
constexpr void Zenject::SubContainerDependencyProvider::__cordl_internal_set__subContainerCreator(::Zenject::ISubContainerCreator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____subContainerCreator)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Type*& Zenject::SubContainerDependencyProvider::__cordl_internal_get__dependencyType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dependencyType;
}
constexpr ::System::Type* const& Zenject::SubContainerDependencyProvider::__cordl_internal_get__dependencyType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dependencyType;
}
constexpr void Zenject::SubContainerDependencyProvider::__cordl_internal_set__dependencyType(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____dependencyType)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Object*& Zenject::SubContainerDependencyProvider::__cordl_internal_get__identifier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____identifier;
}
constexpr ::System::Object* const& Zenject::SubContainerDependencyProvider::__cordl_internal_get__identifier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____identifier;
}
constexpr void Zenject::SubContainerDependencyProvider::__cordl_internal_set__identifier(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____identifier)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& Zenject::SubContainerDependencyProvider::__cordl_internal_get__resolveAll() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____resolveAll;
}
constexpr bool const& Zenject::SubContainerDependencyProvider::__cordl_internal_get__resolveAll() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____resolveAll;
}
constexpr void Zenject::SubContainerDependencyProvider::__cordl_internal_set__resolveAll(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____resolveAll = value;
}
inline void Zenject::SubContainerDependencyProvider::_ctor(::System::Type* dependencyType, ::System::Object* identifier, ::Zenject::ISubContainerCreator* subContainerCreator, bool resolveAll) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SubContainerDependencyProvider*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::ISubContainerCreator*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dependencyType, identifier, subContainerCreator, resolveAll);
}
inline bool Zenject::SubContainerDependencyProvider::get_IsCached() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SubContainerDependencyProvider*>::get(), "get_IsCached",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool Zenject::SubContainerDependencyProvider::get_TypeVariesBasedOnMemberType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SubContainerDependencyProvider*>::get(),
                                                                             "get_TypeVariesBasedOnMemberType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Type* Zenject::SubContainerDependencyProvider::GetInstanceType(::Zenject::InjectContext* context) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SubContainerDependencyProvider*>::get(), "GetInstanceType", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method, context);
}
inline ::Zenject::InjectContext* Zenject::SubContainerDependencyProvider::CreateSubContext(::Zenject::InjectContext* parent, ::Zenject::DiContainer* subContainer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SubContainerDependencyProvider*>::get(), "CreateSubContext", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectContext*, false>(this, ___internal_method, parent, subContainer);
}
inline void Zenject::SubContainerDependencyProvider::GetAllInstancesWithInjectSplit(::Zenject::InjectContext* context, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* args,
                                                                                    ::ByRef<::System::Action*> injectAction, ::System::Collections::Generic::List_1<::System::Object*>* buffer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SubContainerDependencyProvider*>::get(), "GetAllInstancesWithInjectSplit", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Action*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Object*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context, args, injectAction, buffer);
}
inline ::Zenject::SubContainerDependencyProvider* Zenject::SubContainerDependencyProvider::New_ctor(::System::Type* dependencyType, ::System::Object* identifier,
                                                                                                    ::Zenject::ISubContainerCreator* subContainerCreator, bool resolveAll) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::SubContainerDependencyProvider*>(dependencyType, identifier, subContainerCreator, resolveAll));
}
/// @brief Convert operator to "::Zenject::IProvider"
constexpr Zenject::SubContainerDependencyProvider::operator ::Zenject::IProvider*() noexcept {
  return static_cast<::Zenject::IProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::IProvider"
constexpr ::Zenject::IProvider* Zenject::SubContainerDependencyProvider::i___Zenject__IProvider() noexcept {
  return static_cast<::Zenject::IProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Zenject::SubContainerDependencyProvider::SubContainerDependencyProvider() {}
