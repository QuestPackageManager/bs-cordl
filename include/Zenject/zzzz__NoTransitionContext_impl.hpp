#pragma once
// IWYU pragma private; include "Zenject/NoTransitionContext.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Zenject/zzzz__NoTransitionContext_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
#include "Zenject/zzzz__NoTransitionInstaller_def.hpp"
//  Writing Method size for method: ::Zenject::NoTransitionContext.get_installMethod
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Action_1<::Zenject::DiContainer*>* (::Zenject::NoTransitionContext::*)()>(
    &::Zenject::NoTransitionContext::get_installMethod)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x4ad3b30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::NoTransitionContext*>::get(), "get_installMethod",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::NoTransitionContext.get_postInstallMethod
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Action_1<::Zenject::DiContainer*>* (::Zenject::NoTransitionContext::*)()>(
    &::Zenject::NoTransitionContext::get_postInstallMethod)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x4ad3ba0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::NoTransitionContext*>::get(), "get_postInstallMethod",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::NoTransitionContext.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::NoTransitionContext::*)()>(&::Zenject::NoTransitionContext::Awake)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x4ad3c10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::NoTransitionContext*>::get(), "Awake",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::NoTransitionContext._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::NoTransitionContext::*)()>(&::Zenject::NoTransitionContext::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4ad3c88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::NoTransitionContext*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::NoTransitionContext.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::NoTransitionContext::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x4ad3c90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::NoTransitionContext*>::get(),
                                                                               "__zenCreateInjectTypeInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Zenject::NoTransitionInstaller>& Zenject::NoTransitionContext::__cordl_internal_get__noScenesTransitionInstaller() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noScenesTransitionInstaller;
}
constexpr ::UnityW<::Zenject::NoTransitionInstaller> const& Zenject::NoTransitionContext::__cordl_internal_get__noScenesTransitionInstaller() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noScenesTransitionInstaller;
}
constexpr void Zenject::NoTransitionContext::__cordl_internal_set__noScenesTransitionInstaller(::UnityW<::Zenject::NoTransitionInstaller> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____noScenesTransitionInstaller)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Action_1<::Zenject::DiContainer*>* Zenject::NoTransitionContext::get_installMethod() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::NoTransitionContext*>::get(), "get_installMethod",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Action_1<::Zenject::DiContainer*>*, false>(this, ___internal_method);
}
inline ::System::Action_1<::Zenject::DiContainer*>* Zenject::NoTransitionContext::get_postInstallMethod() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::NoTransitionContext*>::get(), "get_postInstallMethod",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Action_1<::Zenject::DiContainer*>*, false>(this, ___internal_method);
}
inline void Zenject::NoTransitionContext::Awake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::NoTransitionContext*>::get(), "Awake",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Zenject::NoTransitionContext* Zenject::NoTransitionContext::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::NoTransitionContext*>());
}
inline void Zenject::NoTransitionContext::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::NoTransitionContext*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Zenject::InjectTypeInfo* Zenject::NoTransitionContext::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::NoTransitionContext*>::get(),
                                                                             "__zenCreateInjectTypeInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Zenject::NoTransitionContext::NoTransitionContext() {}
