#pragma once
// IWYU pragma private; include "Zenject/StaticContext.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__StaticContext_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
//  Writing Method size for method: ::Zenject::StaticContext.Clear
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::Zenject::StaticContext::Clear)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x3674d08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::StaticContext*>::get(), "Clear",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::StaticContext.get_HasContainer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::Zenject::StaticContext::get_HasContainer)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x3674d50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::StaticContext*>::get(), "get_HasContainer",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::StaticContext.get_Container
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::DiContainer* (*)()>(&::Zenject::StaticContext::get_Container)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x3670784;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::StaticContext*>::get(), "get_Container",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void Zenject::StaticContext::setStaticF__container(::Zenject::DiContainer* value) {
  ::cordl_internals::setStaticField<::Zenject::DiContainer*, "_container", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::StaticContext*>::get>(
      std::forward<::Zenject::DiContainer*>(value));
}
inline ::Zenject::DiContainer* Zenject::StaticContext::getStaticF__container() {
  return ::cordl_internals::getStaticField<::Zenject::DiContainer*, "_container", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::StaticContext*>::get>();
}
inline void Zenject::StaticContext::Clear() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::StaticContext*>::get(), "Clear",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline bool Zenject::StaticContext::get_HasContainer() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::StaticContext*>::get(), "get_HasContainer",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline ::Zenject::DiContainer* Zenject::StaticContext::get_Container() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::StaticContext*>::get(), "get_Container",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Zenject::DiContainer*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Zenject::StaticContext::StaticContext() {}
