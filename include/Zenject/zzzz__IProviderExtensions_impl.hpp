#pragma once
// IWYU pragma private; include "Zenject/IProviderExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__IProviderExtensions_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__IProvider_def.hpp"
#include "Zenject/zzzz__InjectContext_def.hpp"
#include "Zenject/zzzz__TypeValuePair_def.hpp"
//  Writing Method size for method: ::Zenject::IProviderExtensions.NoDomainReloadInit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Zenject::IProviderExtensions::NoDomainReloadInit)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6e83b88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::IProviderExtensions*>(), { "NoDomainReloadInit", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::IProviderExtensions.GetAllInstancesWithInjectSplit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Zenject::IProvider*, ::Zenject::InjectContext*, ::by_ref<::System::Action*>,
                                                                ::System::Collections::Generic::List_1<::System::Object*>*)>(&::Zenject::IProviderExtensions::GetAllInstancesWithInjectSplit)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x6e83c28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::IProviderExtensions*>(),
                                                             { "GetAllInstancesWithInjectSplit",
                                                               {},
                                                               { ::i2c::type_of<::Zenject::IProvider*>(), ::i2c::type_of<::Zenject::InjectContext*>(), ::i2c::type_of<::by_ref<::System::Action*>>(),
                                                                 ::i2c::type_of<::System::Collections::Generic::List_1<::System::Object*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::IProviderExtensions.GetAllInstances
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Zenject::IProvider*, ::Zenject::InjectContext*, ::System::Collections::Generic::List_1<::System::Object*>*)>(
    &::Zenject::IProviderExtensions::GetAllInstances)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6e83d2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::IProviderExtensions*>(), { "GetAllInstances",
                                                                                                      {},
                                                                                                      { ::i2c::type_of<::Zenject::IProvider*>(), ::i2c::type_of<::Zenject::InjectContext*>(),
                                                                                                        ::i2c::type_of<::System::Collections::Generic::List_1<::System::Object*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::IProviderExtensions.GetAllInstances
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Zenject::IProvider*, ::Zenject::InjectContext*, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*,
                                                                ::System::Collections::Generic::List_1<::System::Object*>*)>(&::Zenject::IProviderExtensions::GetAllInstances)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x6e83da8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::IProviderExtensions*>(), { "GetAllInstances",
                                                                                                      {},
                                                                                                      { ::i2c::type_of<::Zenject::IProvider*>(), ::i2c::type_of<::Zenject::InjectContext*>(),
                                                                                                        ::i2c::type_of<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>(),
                                                                                                        ::i2c::type_of<::System::Collections::Generic::List_1<::System::Object*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::IProviderExtensions.TryGetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::Zenject::IProvider*, ::Zenject::InjectContext*)>(&::Zenject::IProviderExtensions::TryGetInstance)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6e83ea4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Zenject::IProviderExtensions*>(), { "TryGetInstance", {}, { ::i2c::type_of<::Zenject::IProvider*>(), ::i2c::type_of<::Zenject::InjectContext*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::IProviderExtensions.TryGetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::Zenject::IProvider*, ::Zenject::InjectContext*, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*)>(
    &::Zenject::IProviderExtensions::TryGetInstance)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x6e83f18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::IProviderExtensions*>(), { "TryGetInstance",
                                                                                                      {},
                                                                                                      { ::i2c::type_of<::Zenject::IProvider*>(), ::i2c::type_of<::Zenject::InjectContext*>(),
                                                                                                        ::i2c::type_of<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::IProviderExtensions.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::Zenject::IProvider*, ::Zenject::InjectContext*)>(&::Zenject::IProviderExtensions::GetInstance)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6e84128;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Zenject::IProviderExtensions*>(), { "GetInstance", {}, { ::i2c::type_of<::Zenject::IProvider*>(), ::i2c::type_of<::Zenject::InjectContext*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::IProviderExtensions.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::Zenject::IProvider*, ::Zenject::InjectContext*, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*)>(
    &::Zenject::IProviderExtensions::GetInstance)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x6e8419c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::IProviderExtensions*>(), { "GetInstance",
                                                                                                      {},
                                                                                                      { ::i2c::type_of<::Zenject::IProvider*>(), ::i2c::type_of<::Zenject::InjectContext*>(),
                                                                                                        ::i2c::type_of<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>() } })));
    return ___internal_method;
  }
};
inline void Zenject::IProviderExtensions::setStaticF_EmptyArgList(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*, "EmptyArgList", ::Zenject::IProviderExtensions*>(
      std::forward<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>(value));
}
inline ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* Zenject::IProviderExtensions::getStaticF_EmptyArgList() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*, "EmptyArgList", ::Zenject::IProviderExtensions*>();
}
inline void Zenject::IProviderExtensions::NoDomainReloadInit() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::IProviderExtensions*>(), { "NoDomainReloadInit", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Zenject::IProviderExtensions::GetAllInstancesWithInjectSplit(::Zenject::IProvider* creator, ::Zenject::InjectContext* context, ::by_ref<::System::Action*> injectAction,
                                                                         ::System::Collections::Generic::List_1<::System::Object*>* buffer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::IProviderExtensions*>(),
                                                           { "GetAllInstancesWithInjectSplit",
                                                             {},
                                                             { ::i2c::type_of<::Zenject::IProvider*>(), ::i2c::type_of<::Zenject::InjectContext*>(), ::i2c::type_of<::by_ref<::System::Action*>>(),
                                                               ::i2c::type_of<::System::Collections::Generic::List_1<::System::Object*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, creator, context, injectAction, buffer);
}
inline void Zenject::IProviderExtensions::GetAllInstances(::Zenject::IProvider* creator, ::Zenject::InjectContext* context, ::System::Collections::Generic::List_1<::System::Object*>* buffer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::IProviderExtensions*>(), { "GetAllInstances",
                                                                                                                 {},
                                                                                                                 { ::i2c::type_of<::Zenject::IProvider*>(), ::i2c::type_of<::Zenject::InjectContext*>(),
                                                                                                                   ::i2c::type_of<::System::Collections::Generic::List_1<::System::Object*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, creator, context, buffer);
}
inline void Zenject::IProviderExtensions::GetAllInstances(::Zenject::IProvider* creator, ::Zenject::InjectContext* context, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* args,
                                                          ::System::Collections::Generic::List_1<::System::Object*>* buffer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::IProviderExtensions*>(), { "GetAllInstances",
                                                                                                                 {},
                                                                                                                 { ::i2c::type_of<::Zenject::IProvider*>(), ::i2c::type_of<::Zenject::InjectContext*>(),
                                                                                                                   ::i2c::type_of<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>(),
                                                                                                                   ::i2c::type_of<::System::Collections::Generic::List_1<::System::Object*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, creator, context, args, buffer);
}
inline ::System::Object* Zenject::IProviderExtensions::TryGetInstance(::Zenject::IProvider* creator, ::Zenject::InjectContext* context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Zenject::IProviderExtensions*>(), { "TryGetInstance", {}, { ::i2c::type_of<::Zenject::IProvider*>(), ::i2c::type_of<::Zenject::InjectContext*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, creator, context);
}
inline ::System::Object* Zenject::IProviderExtensions::TryGetInstance(::Zenject::IProvider* creator, ::Zenject::InjectContext* context,
                                                                      ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* args) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::IProviderExtensions*>(), { "TryGetInstance",
                                                                                                    {},
                                                                                                    { ::i2c::type_of<::Zenject::IProvider*>(), ::i2c::type_of<::Zenject::InjectContext*>(),
                                                                                                      ::i2c::type_of<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, creator, context, args);
}
inline ::System::Object* Zenject::IProviderExtensions::GetInstance(::Zenject::IProvider* creator, ::Zenject::InjectContext* context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Zenject::IProviderExtensions*>(), { "GetInstance", {}, { ::i2c::type_of<::Zenject::IProvider*>(), ::i2c::type_of<::Zenject::InjectContext*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, creator, context);
}
inline ::System::Object* Zenject::IProviderExtensions::GetInstance(::Zenject::IProvider* creator, ::Zenject::InjectContext* context,
                                                                   ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* args) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::IProviderExtensions*>(), { "GetInstance",
                                                                                                    {},
                                                                                                    { ::i2c::type_of<::Zenject::IProvider*>(), ::i2c::type_of<::Zenject::InjectContext*>(),
                                                                                                      ::i2c::type_of<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, creator, context, args);
}
// Ctor Parameters []
constexpr ::Zenject::IProviderExtensions::IProviderExtensions() {}
