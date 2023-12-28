#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/SubsystemsImplementation/zzzz__SubsystemDescriptorStore_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/SubsystemsImplementation/zzzz__SubsystemDescriptorWithProvider_def.hpp"
#include "UnityEngine/zzzz__SubsystemDescriptor_def.hpp"
#include "UnityEngine/zzzz__IntegratedSubsystemDescriptor_def.hpp"
//  Writing Method size for method: ::UnityEngine::SubsystemsImplementation::SubsystemDescriptorStore.RegisterDeprecatedDescriptor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::SubsystemDescriptor*)>(
    &::UnityEngine::SubsystemsImplementation::SubsystemDescriptorStore::RegisterDeprecatedDescriptor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2d1a244;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SubsystemsImplementation::SubsystemDescriptorStore*>::get(), "RegisterDeprecatedDescriptor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SubsystemDescriptor*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SubsystemsImplementation::SubsystemDescriptorStore.InitializeManagedDescriptor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(void*, ::UnityEngine::IntegratedSubsystemDescriptor*)>(
    &::UnityEngine::SubsystemsImplementation::SubsystemDescriptorStore::InitializeManagedDescriptor)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x2d1b078;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SubsystemsImplementation::SubsystemDescriptorStore*>::get(), "InitializeManagedDescriptor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::IntegratedSubsystemDescriptor*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SubsystemsImplementation::SubsystemDescriptorStore.ClearManagedDescriptors
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::SubsystemsImplementation::SubsystemDescriptorStore::ClearManagedDescriptors)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x2d1b154;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SubsystemsImplementation::SubsystemDescriptorStore*>::get(),
                                                 "ClearManagedDescriptors", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SubsystemsImplementation::SubsystemDescriptorStore.ReportSingleSubsystemAnalytics
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(
    &::UnityEngine::SubsystemsImplementation::SubsystemDescriptorStore::ReportSingleSubsystemAnalytics)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2d1b338;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SubsystemsImplementation::SubsystemDescriptorStore*>::get(), "ReportSingleSubsystemAnalytics",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline void
UnityEngine::SubsystemsImplementation::SubsystemDescriptorStore::setStaticF_s_IntegratedDescriptors(::System::Collections::Generic::List_1<::UnityEngine::IntegratedSubsystemDescriptor*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityEngine::IntegratedSubsystemDescriptor*>*, "s_IntegratedDescriptors",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SubsystemsImplementation::SubsystemDescriptorStore*>::get>(
      std::forward<::System::Collections::Generic::List_1<::UnityEngine::IntegratedSubsystemDescriptor*>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityEngine::IntegratedSubsystemDescriptor*>* UnityEngine::SubsystemsImplementation::SubsystemDescriptorStore::getStaticF_s_IntegratedDescriptors() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityEngine::IntegratedSubsystemDescriptor*>*, "s_IntegratedDescriptors",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SubsystemsImplementation::SubsystemDescriptorStore*>::get>();
}
inline void UnityEngine::SubsystemsImplementation::SubsystemDescriptorStore::setStaticF_s_StandaloneDescriptors(
    ::System::Collections::Generic::List_1<::UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider*>*, "s_StandaloneDescriptors",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SubsystemsImplementation::SubsystemDescriptorStore*>::get>(
      std::forward<::System::Collections::Generic::List_1<::UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider*>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider*>*
UnityEngine::SubsystemsImplementation::SubsystemDescriptorStore::getStaticF_s_StandaloneDescriptors() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider*>*, "s_StandaloneDescriptors",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SubsystemsImplementation::SubsystemDescriptorStore*>::get>();
}
inline void UnityEngine::SubsystemsImplementation::SubsystemDescriptorStore::setStaticF_s_DeprecatedDescriptors(::System::Collections::Generic::List_1<::UnityEngine::SubsystemDescriptor*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityEngine::SubsystemDescriptor*>*, "s_DeprecatedDescriptors",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SubsystemsImplementation::SubsystemDescriptorStore*>::get>(
      std::forward<::System::Collections::Generic::List_1<::UnityEngine::SubsystemDescriptor*>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityEngine::SubsystemDescriptor*>* UnityEngine::SubsystemsImplementation::SubsystemDescriptorStore::getStaticF_s_DeprecatedDescriptors() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityEngine::SubsystemDescriptor*>*, "s_DeprecatedDescriptors",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SubsystemsImplementation::SubsystemDescriptorStore*>::get>();
}
inline void UnityEngine::SubsystemsImplementation::SubsystemDescriptorStore::RegisterDeprecatedDescriptor(::UnityEngine::SubsystemDescriptor* descriptor) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SubsystemsImplementation::SubsystemDescriptorStore*>::get(), "RegisterDeprecatedDescriptor",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SubsystemDescriptor*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, descriptor);
}
inline void UnityEngine::SubsystemsImplementation::SubsystemDescriptorStore::InitializeManagedDescriptor(void* ptr, ::UnityEngine::IntegratedSubsystemDescriptor* desc) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SubsystemsImplementation::SubsystemDescriptorStore*>::get(), "InitializeManagedDescriptor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::IntegratedSubsystemDescriptor*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, ptr, desc);
}
inline void UnityEngine::SubsystemsImplementation::SubsystemDescriptorStore::ClearManagedDescriptors() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SubsystemsImplementation::SubsystemDescriptorStore*>::get(),
                                               "ClearManagedDescriptors", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void UnityEngine::SubsystemsImplementation::SubsystemDescriptorStore::ReportSingleSubsystemAnalytics(::StringW id) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SubsystemsImplementation::SubsystemDescriptorStore*>::get(), "ReportSingleSubsystemAnalytics",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, id);
}
template <typename T> inline void UnityEngine::SubsystemsImplementation::SubsystemDescriptorStore::GetSubsystemDescriptors(::System::Collections::Generic::List_1<T>* descriptors) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SubsystemsImplementation::SubsystemDescriptorStore*>::get(),
                                               "GetSubsystemDescriptors", std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<T>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, descriptors);
}
template <typename TBaseTypeInList, typename TQueryType>
inline void UnityEngine::SubsystemsImplementation::SubsystemDescriptorStore::AddDescriptorSubset(::System::Collections::Generic::List_1<TBaseTypeInList>* copyFrom,
                                                                                                 ::System::Collections::Generic::List_1<TQueryType>* copyTo) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SubsystemsImplementation::SubsystemDescriptorStore*>::get(), "AddDescriptorSubset",
      std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TBaseTypeInList>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TQueryType>::get() },
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<TBaseTypeInList>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<TQueryType>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TBaseTypeInList>::get(),
                                                                                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TQueryType>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, copyFrom, copyTo);
}
template <typename TDescriptor, typename TBaseTypeInList>
inline void UnityEngine::SubsystemsImplementation::SubsystemDescriptorStore::RegisterDescriptor(TDescriptor descriptor, ::System::Collections::Generic::List_1<TBaseTypeInList>* storeInList) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SubsystemsImplementation::SubsystemDescriptorStore*>::get(), "RegisterDescriptor",
      std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TDescriptor>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TBaseTypeInList>::get() },
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TDescriptor>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<TBaseTypeInList>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TDescriptor>::get(),
                                                                                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TBaseTypeInList>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, descriptor, storeInList);
}
// Ctor Parameters []
constexpr ::UnityEngine::SubsystemsImplementation::SubsystemDescriptorStore::SubsystemDescriptorStore() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
