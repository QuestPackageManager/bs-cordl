#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__StandaloneThreadContext_def.hpp"
#include "GlobalNamespace/zzzz__IStandaloneThreadRunnable_def.hpp"
#include "GlobalNamespace/zzzz__IStandaloneThreadRunner_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::StandaloneThreadContext.Run
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandaloneThreadContext::*)(::GlobalNamespace::IStandaloneThreadRunnable*)>(
    &::GlobalNamespace::StandaloneThreadContext::Run)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xe593ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandaloneThreadContext*>::get(), "Run", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IStandaloneThreadRunnable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandaloneThreadContext._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandaloneThreadContext::*)()>(&::GlobalNamespace::StandaloneThreadContext::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe593b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandaloneThreadContext*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::IStandaloneThreadRunner"
constexpr GlobalNamespace::StandaloneThreadContext::operator ::GlobalNamespace::IStandaloneThreadRunner*() noexcept {
  return static_cast<::GlobalNamespace::IStandaloneThreadRunner*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IStandaloneThreadRunner"
constexpr ::GlobalNamespace::IStandaloneThreadRunner* GlobalNamespace::StandaloneThreadContext::i___GlobalNamespace__IStandaloneThreadRunner() noexcept {
  return static_cast<::GlobalNamespace::IStandaloneThreadRunner*>(static_cast<void*>(this));
}
inline void GlobalNamespace::StandaloneThreadContext::setStaticF_instance(::GlobalNamespace::StandaloneThreadContext* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::StandaloneThreadContext*, "instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandaloneThreadContext*>::get>(
      std::forward<::GlobalNamespace::StandaloneThreadContext*>(value));
}
inline ::GlobalNamespace::StandaloneThreadContext* GlobalNamespace::StandaloneThreadContext::getStaticF_instance() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::StandaloneThreadContext*, "instance",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandaloneThreadContext*>::get>();
}
inline void GlobalNamespace::StandaloneThreadContext::Run(::GlobalNamespace::IStandaloneThreadRunnable* runnable) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandaloneThreadContext*>::get(), "Run", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IStandaloneThreadRunnable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, runnable);
}
inline ::GlobalNamespace::StandaloneThreadContext* GlobalNamespace::StandaloneThreadContext::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::StandaloneThreadContext*>());
}
inline void GlobalNamespace::StandaloneThreadContext::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandaloneThreadContext*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::StandaloneThreadContext::StandaloneThreadContext() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
