#pragma once
#include "Zenject/zzzz__FromBinderNonGeneric_impl.hpp"
#include "Zenject/zzzz__ConcreteBinderNonGeneric_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Zenject/zzzz__BindInfo_def.hpp"
#include "Zenject/zzzz__BindStatement_def.hpp"
#include "Zenject/zzzz__ConventionSelectTypesBinder_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__FromBinderNonGeneric_def.hpp"
#include "Zenject/zzzz__IProvider_def.hpp"
//  Writing Method size for method: ::Zenject::ConcreteBinderNonGeneric._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::Zenject::ConcreteBinderNonGeneric::*)(::Zenject::DiContainer*, ::Zenject::BindInfo*, ::Zenject::BindStatement*)>(&::Zenject::ConcreteBinderNonGeneric::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2fd64d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConcreteBinderNonGeneric*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::BindInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::BindStatement*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ConcreteBinderNonGeneric.ToSelf
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::FromBinderNonGeneric* (::Zenject::ConcreteBinderNonGeneric::*)()>(
    &::Zenject::ConcreteBinderNonGeneric::ToSelf)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x2fd653c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConcreteBinderNonGeneric*>::get(), "ToSelf",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ConcreteBinderNonGeneric.To
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Zenject::FromBinderNonGeneric* (::Zenject::ConcreteBinderNonGeneric::*)(::ArrayW<::System::Type*, ::Array<::System::Type*>*>)>(&::Zenject::ConcreteBinderNonGeneric::To)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2fd667c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConcreteBinderNonGeneric*>::get(), "To", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ConcreteBinderNonGeneric.To
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Zenject::FromBinderNonGeneric* (::Zenject::ConcreteBinderNonGeneric::*)(::System::Collections::Generic::IEnumerable_1<::System::Type*>*)>(&::Zenject::ConcreteBinderNonGeneric::To)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x2fd6680;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConcreteBinderNonGeneric*>::get(), "To", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::System::Type*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ConcreteBinderNonGeneric.To
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Zenject::FromBinderNonGeneric* (::Zenject::ConcreteBinderNonGeneric::*)(::System::Action_1<::Zenject::ConventionSelectTypesBinder*>*)>(&::Zenject::ConcreteBinderNonGeneric::To)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x2fd678c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConcreteBinderNonGeneric*>::get(), "To", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Zenject::ConventionSelectTypesBinder*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ConcreteBinderNonGeneric._ToSelf_b__1_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::IProvider* (::Zenject::ConcreteBinderNonGeneric::*)(::Zenject::DiContainer*, ::System::Type*)>(
    &::Zenject::ConcreteBinderNonGeneric::_ToSelf_b__1_0)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2fd6b68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConcreteBinderNonGeneric*>::get(), "<ToSelf>b__1_0", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
inline ::Zenject::ConcreteBinderNonGeneric* Zenject::ConcreteBinderNonGeneric::New_ctor(::Zenject::DiContainer* bindContainer, ::Zenject::BindInfo* bindInfo, ::Zenject::BindStatement* bindStatement) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::ConcreteBinderNonGeneric*>(bindContainer, bindInfo, bindStatement));
}
inline void Zenject::ConcreteBinderNonGeneric::_ctor(::Zenject::DiContainer* bindContainer, ::Zenject::BindInfo* bindInfo, ::Zenject::BindStatement* bindStatement) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConcreteBinderNonGeneric*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::BindInfo*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::BindStatement*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bindContainer, bindInfo, bindStatement);
}
inline ::Zenject::FromBinderNonGeneric* Zenject::ConcreteBinderNonGeneric::ToSelf() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConcreteBinderNonGeneric*>::get(), "ToSelf",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FromBinderNonGeneric*, false>(this, ___internal_method);
}
template <typename TConcrete> inline ::Zenject::FromBinderNonGeneric* Zenject::ConcreteBinderNonGeneric::To() {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConcreteBinderNonGeneric*>::get(), "To",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TConcrete>::get() }, ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TConcrete>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FromBinderNonGeneric*, false>(this, ___internal_method);
}
inline ::Zenject::FromBinderNonGeneric* Zenject::ConcreteBinderNonGeneric::To(::ArrayW<::System::Type*, ::Array<::System::Type*>*> concreteTypes) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConcreteBinderNonGeneric*>::get(), "To", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FromBinderNonGeneric*, false>(this, ___internal_method, concreteTypes);
}
inline ::Zenject::FromBinderNonGeneric* Zenject::ConcreteBinderNonGeneric::To(::System::Collections::Generic::IEnumerable_1<::System::Type*>* concreteTypes) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConcreteBinderNonGeneric*>::get(), "To", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::System::Type*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FromBinderNonGeneric*, false>(this, ___internal_method, concreteTypes);
}
inline ::Zenject::FromBinderNonGeneric* Zenject::ConcreteBinderNonGeneric::To(::System::Action_1<::Zenject::ConventionSelectTypesBinder*>* generator) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConcreteBinderNonGeneric*>::get(), "To", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Zenject::ConventionSelectTypesBinder*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FromBinderNonGeneric*, false>(this, ___internal_method, generator);
}
inline ::Zenject::IProvider* Zenject::ConcreteBinderNonGeneric::_ToSelf_b__1_0(::Zenject::DiContainer* container, ::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConcreteBinderNonGeneric*>::get(), "<ToSelf>b__1_0", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::IProvider*, false>(this, ___internal_method, container, type);
}
// Ctor Parameters []
constexpr ::Zenject::ConcreteBinderNonGeneric::ConcreteBinderNonGeneric() {}
