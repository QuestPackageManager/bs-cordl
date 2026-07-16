#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UxmlObjectFactoryRegistry.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlObjectFactoryRegistry_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__IBaseUxmlObjectFactory_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::UxmlObjectFactoryRegistry.get_factories
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::IBaseUxmlObjectFactory*>*>* (*)()>(
        &::UnityEngine::UIElements::UxmlObjectFactoryRegistry::get_factories)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x6cbd380;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UxmlObjectFactoryRegistry*>(), { "get_factories", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UxmlObjectFactoryRegistry.RegisterFactory
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::UIElements::IBaseUxmlObjectFactory*)>(&::UnityEngine::UIElements::UxmlObjectFactoryRegistry::RegisterFactory)> {
  constexpr static std::size_t size = 0x4ac;
  constexpr static std::size_t addrs = 0x6cbd964;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UxmlObjectFactoryRegistry*>(),
                                                                                           { "RegisterFactory", {}, { ::i2c::type_of<::UnityEngine::UIElements::IBaseUxmlObjectFactory*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UxmlObjectFactoryRegistry.RegisterEngineFactories
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::UIElements::UxmlObjectFactoryRegistry::RegisterEngineFactories)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x6cbd458;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UxmlObjectFactoryRegistry*>(), { "RegisterEngineFactories", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UxmlObjectFactoryRegistry.RegisterUserFactories
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::UIElements::UxmlObjectFactoryRegistry::RegisterUserFactories)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x6cbd644;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UxmlObjectFactoryRegistry*>(), { "RegisterUserFactories", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::UxmlObjectFactoryRegistry::setStaticF_s_Factories(
    ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::IBaseUxmlObjectFactory*>*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::IBaseUxmlObjectFactory*>*>*,
                                    "s_Factories", ::UnityEngine::UIElements::UxmlObjectFactoryRegistry*>(
      std::forward<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::IBaseUxmlObjectFactory*>*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::IBaseUxmlObjectFactory*>*>*
UnityEngine::UIElements::UxmlObjectFactoryRegistry::getStaticF_s_Factories() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::IBaseUxmlObjectFactory*>*>*,
                                           "s_Factories", ::UnityEngine::UIElements::UxmlObjectFactoryRegistry*>();
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::IBaseUxmlObjectFactory*>*>*
UnityEngine::UIElements::UxmlObjectFactoryRegistry::get_factories() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UxmlObjectFactoryRegistry*>(), { "get_factories", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::IBaseUxmlObjectFactory*>*>*>(
      nullptr, ___internal_method);
}
inline void UnityEngine::UIElements::UxmlObjectFactoryRegistry::RegisterFactory(::UnityEngine::UIElements::IBaseUxmlObjectFactory* factory) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UxmlObjectFactoryRegistry*>(),
                                                                                         { "RegisterFactory", {}, { ::i2c::type_of<::UnityEngine::UIElements::IBaseUxmlObjectFactory*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, factory);
}
inline void UnityEngine::UIElements::UxmlObjectFactoryRegistry::RegisterEngineFactories() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UxmlObjectFactoryRegistry*>(), { "RegisterEngineFactories", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::UIElements::UxmlObjectFactoryRegistry::RegisterUserFactories() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UxmlObjectFactoryRegistry*>(), { "RegisterUserFactories", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UxmlObjectFactoryRegistry::UxmlObjectFactoryRegistry() {}
