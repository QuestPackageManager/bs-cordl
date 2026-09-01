#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\VisualElementFactoryRegistry.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElementFactoryRegistry_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/Scripting/APIUpdating/zzzz__MovedFromAttribute_def.hpp"
#include "UnityEngine/UIElements/zzzz__IUxmlFactory_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::VisualElementFactoryRegistry.GetMovedUIControlTypeName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Type*, ::UnityEngine::Scripting::APIUpdating::MovedFromAttribute*)>(
    &::UnityEngine::UIElements::VisualElementFactoryRegistry::GetMovedUIControlTypeName)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x6cc1d28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualElementFactoryRegistry*>(),
                                         { "GetMovedUIControlTypeName", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::UnityEngine::Scripting::APIUpdating::MovedFromAttribute*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualElementFactoryRegistry.get_factories
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::IUxmlFactory*>*>* (*)()>(
        &::UnityEngine::UIElements::VisualElementFactoryRegistry::get_factories)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x6cc1e18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualElementFactoryRegistry*>(), { "get_factories", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualElementFactoryRegistry.RegisterFactory
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::UIElements::IUxmlFactory*)>(&::UnityEngine::UIElements::VisualElementFactoryRegistry::RegisterFactory)> {
  constexpr static std::size_t size = 0x5dc;
  constexpr static std::size_t addrs = 0x6cc34f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualElementFactoryRegistry*>(),
                                                                                           { "RegisterFactory", {}, { ::i2c::type_of<::UnityEngine::UIElements::IUxmlFactory*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualElementFactoryRegistry.TryGetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::by_ref<::System::Collections::Generic::List_1<::UnityEngine::UIElements::IUxmlFactory*>*>)>(
    &::UnityEngine::UIElements::VisualElementFactoryRegistry::TryGetValue)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x6cc3acc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualElementFactoryRegistry*>(),
                            { "TryGetValue", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::UnityEngine::UIElements::IUxmlFactory*>*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualElementFactoryRegistry.RegisterEngineFactories
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::UIElements::VisualElementFactoryRegistry::RegisterEngineFactories)> {
  constexpr static std::size_t size = 0x1294;
  constexpr static std::size_t addrs = 0x6cc1f3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualElementFactoryRegistry*>(), { "RegisterEngineFactories", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualElementFactoryRegistry.RegisterUserFactories
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::UIElements::VisualElementFactoryRegistry::RegisterUserFactories)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x6cc31d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualElementFactoryRegistry*>(), { "RegisterUserFactories", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::VisualElementFactoryRegistry::setStaticF_s_Factories(
    ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::IUxmlFactory*>*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::IUxmlFactory*>*>*, "s_Factories",
                                    ::UnityEngine::UIElements::VisualElementFactoryRegistry*>(
      std::forward<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::IUxmlFactory*>*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::IUxmlFactory*>*>*
UnityEngine::UIElements::VisualElementFactoryRegistry::getStaticF_s_Factories() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::IUxmlFactory*>*>*, "s_Factories",
                                           ::UnityEngine::UIElements::VisualElementFactoryRegistry*>();
}
inline void UnityEngine::UIElements::VisualElementFactoryRegistry::setStaticF_s_MovedTypesFactories(
    ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::IUxmlFactory*>*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::IUxmlFactory*>*>*,
                                    "s_MovedTypesFactories", ::UnityEngine::UIElements::VisualElementFactoryRegistry*>(
      std::forward<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::IUxmlFactory*>*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::IUxmlFactory*>*>*
UnityEngine::UIElements::VisualElementFactoryRegistry::getStaticF_s_MovedTypesFactories() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::IUxmlFactory*>*>*,
                                           "s_MovedTypesFactories", ::UnityEngine::UIElements::VisualElementFactoryRegistry*>();
}
inline ::StringW UnityEngine::UIElements::VisualElementFactoryRegistry::GetMovedUIControlTypeName(::System::Type* type, ::UnityEngine::Scripting::APIUpdating::MovedFromAttribute* attr) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualElementFactoryRegistry*>(),
                                       { "GetMovedUIControlTypeName", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::UnityEngine::Scripting::APIUpdating::MovedFromAttribute*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, type, attr);
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::IUxmlFactory*>*>*
UnityEngine::UIElements::VisualElementFactoryRegistry::get_factories() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualElementFactoryRegistry*>(), { "get_factories", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::IUxmlFactory*>*>*>(
      nullptr, ___internal_method);
}
inline void UnityEngine::UIElements::VisualElementFactoryRegistry::RegisterFactory(::UnityEngine::UIElements::IUxmlFactory* factory) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualElementFactoryRegistry*>(),
                                                                                         { "RegisterFactory", {}, { ::i2c::type_of<::UnityEngine::UIElements::IUxmlFactory*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, factory);
}
inline bool UnityEngine::UIElements::VisualElementFactoryRegistry::TryGetValue(::StringW fullTypeName,
                                                                               ::by_ref<::System::Collections::Generic::List_1<::UnityEngine::UIElements::IUxmlFactory*>*> factoryList) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualElementFactoryRegistry*>(),
                          { "TryGetValue", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::UnityEngine::UIElements::IUxmlFactory*>*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, fullTypeName, factoryList);
}
inline void UnityEngine::UIElements::VisualElementFactoryRegistry::RegisterEngineFactories() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualElementFactoryRegistry*>(), { "RegisterEngineFactories", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::UIElements::VisualElementFactoryRegistry::RegisterUserFactories() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualElementFactoryRegistry*>(), { "RegisterUserFactories", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::VisualElementFactoryRegistry::VisualElementFactoryRegistry() {}
