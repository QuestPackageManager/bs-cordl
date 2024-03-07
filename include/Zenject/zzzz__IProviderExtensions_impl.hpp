#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__IProviderExtensions_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__IProvider_def.hpp"
#include "Zenject/zzzz__InjectContext_def.hpp"
#include "Zenject/zzzz__TypeValuePair_def.hpp"
//  Writing Method size for method: ::Zenject::IProviderExtensions.GetAllInstancesWithInjectSplit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::Zenject::IProvider*, ::Zenject::InjectContext*, ByRef<::System::Action*>, ::System::Collections::Generic::List_1<::System::Object*>*)>(
        &::Zenject::IProviderExtensions::GetAllInstancesWithInjectSplit)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x306ec84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::IProviderExtensions*>::get(), "GetAllInstancesWithInjectSplit", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::IProvider*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Action*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Object*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::IProviderExtensions.GetAllInstances
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::Zenject::IProvider*, ::Zenject::InjectContext*, ::System::Collections::Generic::List_1<::System::Object*>*)>(&::Zenject::IProviderExtensions::GetAllInstances)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x306ed80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::IProviderExtensions*>::get(), "GetAllInstances", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::IProvider*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Object*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::IProviderExtensions.GetAllInstances
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    ::Zenject::IProvider*, ::Zenject::InjectContext*, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*, ::System::Collections::Generic::List_1<::System::Object*>*)>(
    &::Zenject::IProviderExtensions::GetAllInstances)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x306edf8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::IProviderExtensions*>::get(), "GetAllInstances", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::IProvider*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Object*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::IProviderExtensions.TryGetInstance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::Zenject::IProvider*, ::Zenject::InjectContext*)>(
    &::Zenject::IProviderExtensions::TryGetInstance)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x306eef0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::IProviderExtensions*>::get(), "TryGetInstance", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::IProvider*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::IProviderExtensions.TryGetInstance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::System::Object* (*)(::Zenject::IProvider*, ::Zenject::InjectContext*, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*)>(&::Zenject::IProviderExtensions::TryGetInstance)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x306ef60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::IProviderExtensions*>::get(), "TryGetInstance", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::IProvider*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::IProviderExtensions.GetInstance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::Zenject::IProvider*, ::Zenject::InjectContext*)>(
    &::Zenject::IProviderExtensions::GetInstance)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x306f14c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::IProviderExtensions*>::get(), "GetInstance", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::IProvider*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::IProviderExtensions.GetInstance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::System::Object* (*)(::Zenject::IProvider*, ::Zenject::InjectContext*, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*)>(&::Zenject::IProviderExtensions::GetInstance)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x306f1bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::IProviderExtensions*>::get(), "GetInstance", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::IProvider*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>::get() })));
    return ___internal_method;
  }
};
inline void Zenject::IProviderExtensions::setStaticF_EmptyArgList(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*, "EmptyArgList",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::IProviderExtensions*>::get>(
      std::forward<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>(value));
}
inline ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* Zenject::IProviderExtensions::getStaticF_EmptyArgList() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*, "EmptyArgList",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::IProviderExtensions*>::get>();
}
inline void Zenject::IProviderExtensions::GetAllInstancesWithInjectSplit(::Zenject::IProvider* creator, ::Zenject::InjectContext* context, ByRef<::System::Action*> injectAction,
                                                                         ::System::Collections::Generic::List_1<::System::Object*>* buffer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::IProviderExtensions*>::get(), "GetAllInstancesWithInjectSplit", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::IProvider*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Action*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Object*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, creator, context, injectAction, buffer);
}
inline void Zenject::IProviderExtensions::GetAllInstances(::Zenject::IProvider* creator, ::Zenject::InjectContext* context, ::System::Collections::Generic::List_1<::System::Object*>* buffer) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::IProviderExtensions*>::get(), "GetAllInstances", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::IProvider*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Object*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, creator, context, buffer);
}
inline void Zenject::IProviderExtensions::GetAllInstances(::Zenject::IProvider* creator, ::Zenject::InjectContext* context, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* args,
                                                          ::System::Collections::Generic::List_1<::System::Object*>* buffer) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::IProviderExtensions*>::get(), "GetAllInstances", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::IProvider*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Object*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, creator, context, args, buffer);
}
inline ::System::Object* Zenject::IProviderExtensions::TryGetInstance(::Zenject::IProvider* creator, ::Zenject::InjectContext* context) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::IProviderExtensions*>::get(), "TryGetInstance", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::IProvider*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, creator, context);
}
inline ::System::Object* Zenject::IProviderExtensions::TryGetInstance(::Zenject::IProvider* creator, ::Zenject::InjectContext* context,
                                                                      ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* args) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::IProviderExtensions*>::get(), "TryGetInstance", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::IProvider*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, creator, context, args);
}
inline ::System::Object* Zenject::IProviderExtensions::GetInstance(::Zenject::IProvider* creator, ::Zenject::InjectContext* context) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::IProviderExtensions*>::get(), "GetInstance", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::IProvider*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, creator, context);
}
inline ::System::Object* Zenject::IProviderExtensions::GetInstance(::Zenject::IProvider* creator, ::Zenject::InjectContext* context,
                                                                   ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* args) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::IProviderExtensions*>::get(), "GetInstance", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::IProvider*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, creator, context, args);
}
// Ctor Parameters []
constexpr ::Zenject::IProviderExtensions::IProviderExtensions() {}
