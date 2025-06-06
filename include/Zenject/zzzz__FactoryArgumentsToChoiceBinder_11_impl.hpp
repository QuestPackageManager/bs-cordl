#pragma once
// IWYU pragma private; include "Zenject/FactoryArgumentsToChoiceBinder_11.hpp"
#include "Zenject/zzzz__FactoryToChoiceBinder_11_impl.hpp"
#include "Zenject/zzzz__FactoryArgumentsToChoiceBinder_11_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__BindInfo_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__FactoryBindInfo_def.hpp"
#include "Zenject/zzzz__FactoryToChoiceBinder_11_def.hpp"
#include "Zenject/zzzz__TypeValuePair_def.hpp"
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TParam7, typename TParam8, typename TParam9, typename TParam10,
          typename TContract>
inline void Zenject::FactoryArgumentsToChoiceBinder_11<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TContract>::_ctor(
    ::Zenject::DiContainer* bindContainer, ::Zenject::BindInfo* bindInfo, ::Zenject::FactoryBindInfo* factoryBindInfo) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
                                      ::Zenject::FactoryArgumentsToChoiceBinder_11<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TContract>*>::get(),
                                  ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::BindInfo*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::FactoryBindInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bindContainer, bindInfo, factoryBindInfo);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TParam7, typename TParam8, typename TParam9, typename TParam10,
          typename TContract>
template <typename T>
inline ::Zenject::FactoryToChoiceBinder_11<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TContract>*
Zenject::FactoryArgumentsToChoiceBinder_11<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TContract>::WithFactoryArguments(T param) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
                                      ::Zenject::FactoryArgumentsToChoiceBinder_11<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TContract>*>::get(),
                                  "WithFactoryArguments", std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FactoryToChoiceBinder_11<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TContract>*, false>(
      this, ___internal_method, param);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TParam7, typename TParam8, typename TParam9, typename TParam10,
          typename TContract>
template <typename TFactoryParam1, typename TFactoryParam2>
inline ::Zenject::FactoryToChoiceBinder_11<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TContract>*
Zenject::FactoryArgumentsToChoiceBinder_11<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TContract>::WithFactoryArguments(TFactoryParam1 param1,
                                                                                                                                                                       TFactoryParam2 param2) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Zenject::FactoryArgumentsToChoiceBinder_11<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TContract>*>::get(),
      "WithFactoryArguments",
      std::array<Il2CppClass const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam2>::get() },
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TFactoryParam1>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TFactoryParam2>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam1>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam2>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FactoryToChoiceBinder_11<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TContract>*, false>(
      this, ___internal_method, param1, param2);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TParam7, typename TParam8, typename TParam9, typename TParam10,
          typename TContract>
template <typename TFactoryParam1, typename TFactoryParam2, typename TFactoryParam3>
inline ::Zenject::FactoryToChoiceBinder_11<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TContract>*
Zenject::FactoryArgumentsToChoiceBinder_11<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TContract>::WithFactoryArguments(TFactoryParam1 param1,
                                                                                                                                                                       TFactoryParam2 param2,
                                                                                                                                                                       TFactoryParam3 param3) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Zenject::FactoryArgumentsToChoiceBinder_11<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TContract>*>::get(),
      "WithFactoryArguments",
      std::array<Il2CppClass const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam2>::get(),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam3>::get() },
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TFactoryParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TFactoryParam2>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TFactoryParam3>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam1>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam2>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam3>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FactoryToChoiceBinder_11<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TContract>*, false>(
      this, ___internal_method, param1, param2, param3);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TParam7, typename TParam8, typename TParam9, typename TParam10,
          typename TContract>
template <typename TFactoryParam1, typename TFactoryParam2, typename TFactoryParam3, typename TFactoryParam4>
inline ::Zenject::FactoryToChoiceBinder_11<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TContract>*
Zenject::FactoryArgumentsToChoiceBinder_11<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TContract>::WithFactoryArguments(TFactoryParam1 param1,
                                                                                                                                                                       TFactoryParam2 param2,
                                                                                                                                                                       TFactoryParam3 param3,
                                                                                                                                                                       TFactoryParam4 param4) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Zenject::FactoryArgumentsToChoiceBinder_11<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TContract>*>::get(),
      "WithFactoryArguments",
      std::array<Il2CppClass const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam2>::get(),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam4>::get() },
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TFactoryParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TFactoryParam2>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TFactoryParam3>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TFactoryParam4>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam1>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam2>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam3>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam4>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FactoryToChoiceBinder_11<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TContract>*, false>(
      this, ___internal_method, param1, param2, param3, param4);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TParam7, typename TParam8, typename TParam9, typename TParam10,
          typename TContract>
template <typename TFactoryParam1, typename TFactoryParam2, typename TFactoryParam3, typename TFactoryParam4, typename TFactoryParam5>
inline ::Zenject::FactoryToChoiceBinder_11<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TContract>*
Zenject::FactoryArgumentsToChoiceBinder_11<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TContract>::WithFactoryArguments(
    TFactoryParam1 param1, TFactoryParam2 param2, TFactoryParam3 param3, TFactoryParam4 param4, TFactoryParam5 param5) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Zenject::FactoryArgumentsToChoiceBinder_11<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TContract>*>::get(),
      "WithFactoryArguments",
      std::array<Il2CppClass const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam2>::get(),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam4>::get(),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam5>::get() },
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TFactoryParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TFactoryParam2>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TFactoryParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TFactoryParam4>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TFactoryParam5>::get() })));
  static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
      ___internal_method_base,
      std::array<Il2CppClass const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam2>::get(),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam4>::get(),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam5>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FactoryToChoiceBinder_11<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TContract>*, false>(
      this, ___internal_method, param1, param2, param3, param4, param5);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TParam7, typename TParam8, typename TParam9, typename TParam10,
          typename TContract>
template <typename TFactoryParam1, typename TFactoryParam2, typename TFactoryParam3, typename TFactoryParam4, typename TFactoryParam5, typename TFactoryParam6>
inline ::Zenject::FactoryToChoiceBinder_11<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TContract>*
Zenject::FactoryArgumentsToChoiceBinder_11<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TContract>::WithFactoryArguments(
    TFactoryParam1 param1, TFactoryParam2 param2, TFactoryParam3 param3, TFactoryParam4 param4, TFactoryParam5 param5, TFactoryParam6 param6) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Zenject::FactoryArgumentsToChoiceBinder_11<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TContract>*>::get(),
      "WithFactoryArguments",
      std::array<Il2CppClass const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam2>::get(),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam4>::get(),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam5>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam6>::get() },
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TFactoryParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TFactoryParam2>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TFactoryParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TFactoryParam4>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TFactoryParam5>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TFactoryParam6>::get() })));
  static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
      ___internal_method_base, std::array<Il2CppClass const*, 6>{
                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam2>::get(),
                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam4>::get(),
                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam5>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactoryParam6>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FactoryToChoiceBinder_11<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TContract>*, false>(
      this, ___internal_method, param1, param2, param3, param4, param5, param6);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TParam7, typename TParam8, typename TParam9, typename TParam10,
          typename TContract>
inline ::Zenject::FactoryToChoiceBinder_11<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TContract>*
Zenject::FactoryArgumentsToChoiceBinder_11<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TContract>::WithFactoryArguments(
    ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
                                      ::Zenject::FactoryArgumentsToChoiceBinder_11<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TContract>*>::get(),
                                  "WithFactoryArguments", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FactoryToChoiceBinder_11<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TContract>*, false>(
      this, ___internal_method, args);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TParam7, typename TParam8, typename TParam9, typename TParam10,
          typename TContract>
inline ::Zenject::FactoryToChoiceBinder_11<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TContract>*
Zenject::FactoryArgumentsToChoiceBinder_11<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TContract>::WithFactoryArgumentsExplicit(
    ::System::Collections::Generic::IEnumerable_1<::Zenject::TypeValuePair>* extraArgs) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Zenject::FactoryArgumentsToChoiceBinder_11<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TContract>*>::get(),
      "WithFactoryArgumentsExplicit", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::Zenject::TypeValuePair>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FactoryToChoiceBinder_11<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TContract>*, false>(
      this, ___internal_method, extraArgs);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TParam7, typename TParam8, typename TParam9, typename TParam10,
          typename TContract>
inline ::Zenject::FactoryArgumentsToChoiceBinder_11<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TContract>*
Zenject::FactoryArgumentsToChoiceBinder_11<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TContract>::New_ctor(
    ::Zenject::DiContainer* bindContainer, ::Zenject::BindInfo* bindInfo, ::Zenject::FactoryBindInfo* factoryBindInfo) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::FactoryArgumentsToChoiceBinder_11<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TContract>*>(
      bindContainer, bindInfo, factoryBindInfo));
}
// Ctor Parameters []
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TParam7, typename TParam8, typename TParam9, typename TParam10,
          typename TContract>
constexpr ::Zenject::FactoryArgumentsToChoiceBinder_11<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TContract>::FactoryArgumentsToChoiceBinder_11() {}
