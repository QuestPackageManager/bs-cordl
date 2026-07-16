#pragma once
// IWYU pragma private; include "UnityEngine/SubsystemsImplementation/SubsystemDescriptorStore.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/SubsystemsImplementation/zzzz__SubsystemDescriptorStore_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/Bindings/zzzz__ManagedSpanWrapper_def.hpp"
#include "UnityEngine/SubsystemsImplementation/zzzz__SubsystemDescriptorWithProvider_def.hpp"
#include "UnityEngine/zzzz__IntegratedSubsystemDescriptor_def.hpp"
#include "UnityEngine/zzzz__SubsystemDescriptor_def.hpp"
//  Writing Method size for method: ::UnityEngine::SubsystemsImplementation::SubsystemDescriptorStore.InitializeManagedDescriptor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::IntegratedSubsystemDescriptor*)>(
    &::UnityEngine::SubsystemsImplementation::SubsystemDescriptorStore::InitializeManagedDescriptor)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x6bb5910;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SubsystemsImplementation::SubsystemDescriptorStore*>(),
                                                { "InitializeManagedDescriptor", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::IntegratedSubsystemDescriptor*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SubsystemsImplementation::SubsystemDescriptorStore.ClearManagedDescriptors
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::SubsystemsImplementation::SubsystemDescriptorStore::ClearManagedDescriptors)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x6bb59fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SubsystemsImplementation::SubsystemDescriptorStore*>(), { "ClearManagedDescriptors", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SubsystemsImplementation::SubsystemDescriptorStore.ReportSingleSubsystemAnalytics
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::UnityEngine::SubsystemsImplementation::SubsystemDescriptorStore::ReportSingleSubsystemAnalytics)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x6bb5b8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SubsystemsImplementation::SubsystemDescriptorStore*>(),
                                                                                           { "ReportSingleSubsystemAnalytics", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SubsystemsImplementation::SubsystemDescriptorStore.RegisterDeprecatedDescriptor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::SubsystemDescriptor*)>(
    &::UnityEngine::SubsystemsImplementation::SubsystemDescriptorStore::RegisterDeprecatedDescriptor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6bb5078;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SubsystemsImplementation::SubsystemDescriptorStore*>(),
                                                                                           { "RegisterDeprecatedDescriptor", {}, { ::i2c::type_of<::UnityEngine::SubsystemDescriptor*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SubsystemsImplementation::SubsystemDescriptorStore.ReportSingleSubsystemAnalytics_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(
    &::UnityEngine::SubsystemsImplementation::SubsystemDescriptorStore::ReportSingleSubsystemAnalytics_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6bb5cd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SubsystemsImplementation::SubsystemDescriptorStore*>(),
                                                             { "ReportSingleSubsystemAnalytics_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
inline void
UnityEngine::SubsystemsImplementation::SubsystemDescriptorStore::setStaticF_s_IntegratedDescriptors(::System::Collections::Generic::List_1<::UnityEngine::IntegratedSubsystemDescriptor*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityEngine::IntegratedSubsystemDescriptor*>*, "s_IntegratedDescriptors",
                                    ::UnityEngine::SubsystemsImplementation::SubsystemDescriptorStore*>(
      std::forward<::System::Collections::Generic::List_1<::UnityEngine::IntegratedSubsystemDescriptor*>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityEngine::IntegratedSubsystemDescriptor*>* UnityEngine::SubsystemsImplementation::SubsystemDescriptorStore::getStaticF_s_IntegratedDescriptors() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityEngine::IntegratedSubsystemDescriptor*>*, "s_IntegratedDescriptors",
                                           ::UnityEngine::SubsystemsImplementation::SubsystemDescriptorStore*>();
}
inline void UnityEngine::SubsystemsImplementation::SubsystemDescriptorStore::setStaticF_s_StandaloneDescriptors(
    ::System::Collections::Generic::List_1<::UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider*>*, "s_StandaloneDescriptors",
                                    ::UnityEngine::SubsystemsImplementation::SubsystemDescriptorStore*>(
      std::forward<::System::Collections::Generic::List_1<::UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider*>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider*>*
UnityEngine::SubsystemsImplementation::SubsystemDescriptorStore::getStaticF_s_StandaloneDescriptors() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider*>*, "s_StandaloneDescriptors",
                                           ::UnityEngine::SubsystemsImplementation::SubsystemDescriptorStore*>();
}
inline void UnityEngine::SubsystemsImplementation::SubsystemDescriptorStore::setStaticF_s_DeprecatedDescriptors(::System::Collections::Generic::List_1<::UnityEngine::SubsystemDescriptor*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityEngine::SubsystemDescriptor*>*, "s_DeprecatedDescriptors",
                                    ::UnityEngine::SubsystemsImplementation::SubsystemDescriptorStore*>(
      std::forward<::System::Collections::Generic::List_1<::UnityEngine::SubsystemDescriptor*>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityEngine::SubsystemDescriptor*>* UnityEngine::SubsystemsImplementation::SubsystemDescriptorStore::getStaticF_s_DeprecatedDescriptors() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityEngine::SubsystemDescriptor*>*, "s_DeprecatedDescriptors",
                                           ::UnityEngine::SubsystemsImplementation::SubsystemDescriptorStore*>();
}
inline void UnityEngine::SubsystemsImplementation::SubsystemDescriptorStore::InitializeManagedDescriptor(::System::IntPtr ptr, ::UnityEngine::IntegratedSubsystemDescriptor* desc) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SubsystemsImplementation::SubsystemDescriptorStore*>(),
                                              { "InitializeManagedDescriptor", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::IntegratedSubsystemDescriptor*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ptr, desc);
}
inline void UnityEngine::SubsystemsImplementation::SubsystemDescriptorStore::ClearManagedDescriptors() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SubsystemsImplementation::SubsystemDescriptorStore*>(), { "ClearManagedDescriptors", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::SubsystemsImplementation::SubsystemDescriptorStore::ReportSingleSubsystemAnalytics(::StringW id) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SubsystemsImplementation::SubsystemDescriptorStore*>(),
                                                                                         { "ReportSingleSubsystemAnalytics", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, id);
}
template <typename T> inline void UnityEngine::SubsystemsImplementation::SubsystemDescriptorStore::GetSubsystemDescriptors(::System::Collections::Generic::List_1<T>* descriptors) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SubsystemsImplementation::SubsystemDescriptorStore*>(),
                                                           { "GetSubsystemDescriptors", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Collections::Generic::List_1<T>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, descriptors);
}
template <typename TBaseTypeInList, typename TQueryType>
inline void UnityEngine::SubsystemsImplementation::SubsystemDescriptorStore::AddDescriptorSubset(::System::Collections::Generic::List_1<TBaseTypeInList>* copyFrom,
                                                                                                 ::System::Collections::Generic::List_1<TQueryType>* copyTo) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::SubsystemsImplementation::SubsystemDescriptorStore*>(),
                                       { "AddDescriptorSubset",
                                         { ::i2c::class_of<TBaseTypeInList>(), ::i2c::class_of<TQueryType>() },
                                         { ::i2c::type_of<::System::Collections::Generic::List_1<TBaseTypeInList>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<TQueryType>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TBaseTypeInList>(), ::i2c::class_of<TQueryType>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, copyFrom, copyTo);
}
template <typename TDescriptor, typename TBaseTypeInList>
inline void UnityEngine::SubsystemsImplementation::SubsystemDescriptorStore::RegisterDescriptor(TDescriptor descriptor, ::System::Collections::Generic::List_1<TBaseTypeInList>* storeInList) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SubsystemsImplementation::SubsystemDescriptorStore*>(),
                                                           { "RegisterDescriptor",
                                                             { ::i2c::class_of<TDescriptor>(), ::i2c::class_of<TBaseTypeInList>() },
                                                             { ::i2c::type_of<TDescriptor>(), ::i2c::type_of<::System::Collections::Generic::List_1<TBaseTypeInList>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TDescriptor>(), ::i2c::class_of<TBaseTypeInList>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, descriptor, storeInList);
}
inline void UnityEngine::SubsystemsImplementation::SubsystemDescriptorStore::RegisterDeprecatedDescriptor(::UnityEngine::SubsystemDescriptor* descriptor) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SubsystemsImplementation::SubsystemDescriptorStore*>(),
                                                                                         { "RegisterDeprecatedDescriptor", {}, { ::i2c::type_of<::UnityEngine::SubsystemDescriptor*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, descriptor);
}
inline void UnityEngine::SubsystemsImplementation::SubsystemDescriptorStore::ReportSingleSubsystemAnalytics_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> id) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SubsystemsImplementation::SubsystemDescriptorStore*>(),
                                                           { "ReportSingleSubsystemAnalytics_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, id);
}
// Ctor Parameters []
constexpr ::UnityEngine::SubsystemsImplementation::SubsystemDescriptorStore::SubsystemDescriptorStore() {}
