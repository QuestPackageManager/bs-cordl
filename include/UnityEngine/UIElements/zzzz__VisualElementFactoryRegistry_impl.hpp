#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/VisualElementFactoryRegistry.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElementFactoryRegistry_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/Scripting/APIUpdating/zzzz__MovedFromAttribute_def.hpp"
#include "UnityEngine/UIElements/zzzz__IUxmlFactory_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::VisualElementFactoryRegistry.GetMovedUIControlTypeName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::Type*, ::UnityEngine::Scripting::APIUpdating::MovedFromAttribute*)>(
    &::UnityEngine::UIElements::VisualElementFactoryRegistry::GetMovedUIControlTypeName)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x4aa54dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualElementFactoryRegistry*>::get(), "GetMovedUIControlTypeName", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Scripting::APIUpdating::MovedFromAttribute*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualElementFactoryRegistry.get_factories
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::IUxmlFactory*>*>* (*)()>(
        &::UnityEngine::UIElements::VisualElementFactoryRegistry::get_factories)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x4aa563c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualElementFactoryRegistry*>::get(),
                                                                               "get_factories", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualElementFactoryRegistry.RegisterFactory
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::UIElements::IUxmlFactory*)>(
    &::UnityEngine::UIElements::VisualElementFactoryRegistry::RegisterFactory)> {
  constexpr static std::size_t size = 0x5d0;
  constexpr static std::size_t addrs = 0x4aa6ab0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualElementFactoryRegistry*>::get(), "RegisterFactory", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IUxmlFactory*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualElementFactoryRegistry.TryGetValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ::ByRef<::System::Collections::Generic::List_1<::UnityEngine::UIElements::IUxmlFactory*>*>)>(
    &::UnityEngine::UIElements::VisualElementFactoryRegistry::TryGetValue)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x4aa7080;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualElementFactoryRegistry*>::get(), "TryGetValue", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Collections::Generic::List_1<::UnityEngine::UIElements::IUxmlFactory*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualElementFactoryRegistry.RegisterEngineFactories
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::UIElements::VisualElementFactoryRegistry::RegisterEngineFactories)> {
  constexpr static std::size_t size = 0x10c4;
  constexpr static std::size_t addrs = 0x4aa571c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualElementFactoryRegistry*>::get(),
                                                                               "RegisterEngineFactories", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualElementFactoryRegistry.RegisterUserFactories
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::UIElements::VisualElementFactoryRegistry::RegisterUserFactories)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x4aa67e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualElementFactoryRegistry*>::get(),
                                                                               "RegisterUserFactories", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::VisualElementFactoryRegistry::setStaticF_s_Factories(
    ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::IUxmlFactory*>*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::IUxmlFactory*>*>*, "s_Factories",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualElementFactoryRegistry*>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::IUxmlFactory*>*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::IUxmlFactory*>*>*
UnityEngine::UIElements::VisualElementFactoryRegistry::getStaticF_s_Factories() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::IUxmlFactory*>*>*, "s_Factories",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualElementFactoryRegistry*>::get>();
}
inline void UnityEngine::UIElements::VisualElementFactoryRegistry::setStaticF_s_MovedTypesFactories(
    ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::IUxmlFactory*>*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::IUxmlFactory*>*>*,
                                    "s_MovedTypesFactories", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualElementFactoryRegistry*>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::IUxmlFactory*>*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::IUxmlFactory*>*>*
UnityEngine::UIElements::VisualElementFactoryRegistry::getStaticF_s_MovedTypesFactories() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::IUxmlFactory*>*>*,
                                           "s_MovedTypesFactories", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualElementFactoryRegistry*>::get>();
}
inline ::StringW UnityEngine::UIElements::VisualElementFactoryRegistry::GetMovedUIControlTypeName(::System::Type* type, ::UnityEngine::Scripting::APIUpdating::MovedFromAttribute* attr) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualElementFactoryRegistry*>::get(), "GetMovedUIControlTypeName", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Scripting::APIUpdating::MovedFromAttribute*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, type, attr);
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::IUxmlFactory*>*>*
UnityEngine::UIElements::VisualElementFactoryRegistry::get_factories() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualElementFactoryRegistry*>::get(),
                                                                             "get_factories", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::IUxmlFactory*>*>*, false>(
      nullptr, ___internal_method);
}
inline void UnityEngine::UIElements::VisualElementFactoryRegistry::RegisterFactory(::UnityEngine::UIElements::IUxmlFactory* factory) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualElementFactoryRegistry*>::get(), "RegisterFactory", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IUxmlFactory*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, factory);
}
inline bool UnityEngine::UIElements::VisualElementFactoryRegistry::TryGetValue(::StringW fullTypeName,
                                                                               ::ByRef<::System::Collections::Generic::List_1<::UnityEngine::UIElements::IUxmlFactory*>*> factoryList) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualElementFactoryRegistry*>::get(), "TryGetValue", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Collections::Generic::List_1<::UnityEngine::UIElements::IUxmlFactory*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, fullTypeName, factoryList);
}
inline void UnityEngine::UIElements::VisualElementFactoryRegistry::RegisterEngineFactories() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualElementFactoryRegistry*>::get(),
                                                                             "RegisterEngineFactories", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void UnityEngine::UIElements::VisualElementFactoryRegistry::RegisterUserFactories() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualElementFactoryRegistry*>::get(),
                                                                             "RegisterUserFactories", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::VisualElementFactoryRegistry::VisualElementFactoryRegistry() {}
