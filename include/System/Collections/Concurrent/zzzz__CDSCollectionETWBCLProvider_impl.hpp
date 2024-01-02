#pragma once
#include "System/Diagnostics/Tracing/zzzz__EventSource_impl.hpp"
#include "System/Collections/Concurrent/zzzz__CDSCollectionETWBCLProvider_def.hpp"
//  Writing Method size for method: ::System::Collections::Concurrent::CDSCollectionETWBCLProvider._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Concurrent::CDSCollectionETWBCLProvider::*)()>(
    &::System::Collections::Concurrent::CDSCollectionETWBCLProvider::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2941a4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::CDSCollectionETWBCLProvider*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Concurrent::CDSCollectionETWBCLProvider.ConcurrentBag_TryTakeSteals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Concurrent::CDSCollectionETWBCLProvider::*)()>(
    &::System::Collections::Concurrent::CDSCollectionETWBCLProvider::ConcurrentBag_TryTakeSteals)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2941a54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::CDSCollectionETWBCLProvider*>::get(),
                                                 "ConcurrentBag_TryTakeSteals", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Concurrent::CDSCollectionETWBCLProvider.ConcurrentBag_TryPeekSteals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Concurrent::CDSCollectionETWBCLProvider::*)()>(
    &::System::Collections::Concurrent::CDSCollectionETWBCLProvider::ConcurrentBag_TryPeekSteals)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2941a8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::CDSCollectionETWBCLProvider*>::get(),
                                                 "ConcurrentBag_TryPeekSteals", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline void System::Collections::Concurrent::CDSCollectionETWBCLProvider::setStaticF_Log(::System::Collections::Concurrent::CDSCollectionETWBCLProvider* value) {
  ::cordl_internals::setStaticField<::System::Collections::Concurrent::CDSCollectionETWBCLProvider*, "Log",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::CDSCollectionETWBCLProvider*>::get>(
      std::forward<::System::Collections::Concurrent::CDSCollectionETWBCLProvider*>(value));
}
inline ::System::Collections::Concurrent::CDSCollectionETWBCLProvider* System::Collections::Concurrent::CDSCollectionETWBCLProvider::getStaticF_Log() {
  return ::cordl_internals::getStaticField<::System::Collections::Concurrent::CDSCollectionETWBCLProvider*, "Log",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::CDSCollectionETWBCLProvider*>::get>();
}
inline ::System::Collections::Concurrent::CDSCollectionETWBCLProvider* System::Collections::Concurrent::CDSCollectionETWBCLProvider::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Collections::Concurrent::CDSCollectionETWBCLProvider*>());
}
inline void System::Collections::Concurrent::CDSCollectionETWBCLProvider::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::CDSCollectionETWBCLProvider*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Collections::Concurrent::CDSCollectionETWBCLProvider::ConcurrentBag_TryTakeSteals() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::CDSCollectionETWBCLProvider*>::get(),
                                               "ConcurrentBag_TryTakeSteals", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Collections::Concurrent::CDSCollectionETWBCLProvider::ConcurrentBag_TryPeekSteals() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::CDSCollectionETWBCLProvider*>::get(),
                                               "ConcurrentBag_TryPeekSteals", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Collections::Concurrent::CDSCollectionETWBCLProvider::CDSCollectionETWBCLProvider() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
