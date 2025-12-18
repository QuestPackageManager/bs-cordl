#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UxmlObjectFactoryRegistry.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlObjectFactoryRegistry_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__IBaseUxmlObjectFactory_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::UxmlObjectFactoryRegistry.get_factories
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::IBaseUxmlObjectFactory*>*>* (*)()>(
        &::UnityEngine::UIElements::UxmlObjectFactoryRegistry::get_factories)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x6af5048;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UxmlObjectFactoryRegistry*>::get(),
                                                                               "get_factories", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UxmlObjectFactoryRegistry.RegisterFactory
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::UIElements::IBaseUxmlObjectFactory*)>(
    &::UnityEngine::UIElements::UxmlObjectFactoryRegistry::RegisterFactory)> {
  constexpr static std::size_t size = 0x4ac;
  constexpr static std::size_t addrs = 0x6af562c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UxmlObjectFactoryRegistry*>::get(), "RegisterFactory", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IBaseUxmlObjectFactory*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UxmlObjectFactoryRegistry.RegisterEngineFactories
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::UIElements::UxmlObjectFactoryRegistry::RegisterEngineFactories)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x6af5120;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UxmlObjectFactoryRegistry*>::get(),
                                                                               "RegisterEngineFactories", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UxmlObjectFactoryRegistry.RegisterUserFactories
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::UIElements::UxmlObjectFactoryRegistry::RegisterUserFactories)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x6af530c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UxmlObjectFactoryRegistry*>::get(),
                                                                               "RegisterUserFactories", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::UxmlObjectFactoryRegistry::setStaticF_s_Factories(
    ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::IBaseUxmlObjectFactory*>*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::IBaseUxmlObjectFactory*>*>*,
                                    "s_Factories", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UxmlObjectFactoryRegistry*>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::IBaseUxmlObjectFactory*>*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::IBaseUxmlObjectFactory*>*>*
UnityEngine::UIElements::UxmlObjectFactoryRegistry::getStaticF_s_Factories() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::IBaseUxmlObjectFactory*>*>*,
                                           "s_Factories", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UxmlObjectFactoryRegistry*>::get>();
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::IBaseUxmlObjectFactory*>*>*
UnityEngine::UIElements::UxmlObjectFactoryRegistry::get_factories() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UxmlObjectFactoryRegistry*>::get(),
                                                                             "get_factories", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::IBaseUxmlObjectFactory*>*>*,
                                             false>(nullptr, ___internal_method);
}
inline void UnityEngine::UIElements::UxmlObjectFactoryRegistry::RegisterFactory(::UnityEngine::UIElements::IBaseUxmlObjectFactory* factory) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UxmlObjectFactoryRegistry*>::get(), "RegisterFactory", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IBaseUxmlObjectFactory*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, factory);
}
inline void UnityEngine::UIElements::UxmlObjectFactoryRegistry::RegisterEngineFactories() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UxmlObjectFactoryRegistry*>::get(),
                                                                             "RegisterEngineFactories", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void UnityEngine::UIElements::UxmlObjectFactoryRegistry::RegisterUserFactories() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UxmlObjectFactoryRegistry*>::get(),
                                                                             "RegisterUserFactories", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UxmlObjectFactoryRegistry::UxmlObjectFactoryRegistry() {}
