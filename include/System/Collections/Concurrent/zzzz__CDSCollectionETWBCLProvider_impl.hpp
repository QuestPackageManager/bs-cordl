#pragma once
// IWYU pragma private; include "System/Collections/Concurrent/CDSCollectionETWBCLProvider.hpp"
#include "System/Diagnostics/Tracing/zzzz__EventSource_impl.hpp"
#include "System/Collections/Concurrent/zzzz__CDSCollectionETWBCLProvider_def.hpp"
//  Writing Method size for method: ::System::Collections::Concurrent::CDSCollectionETWBCLProvider._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Concurrent::CDSCollectionETWBCLProvider::*)()>(
    &::System::Collections::Concurrent::CDSCollectionETWBCLProvider::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a435e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::CDSCollectionETWBCLProvider*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Concurrent::CDSCollectionETWBCLProvider.ConcurrentDictionary_AcquiringAllLocks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Concurrent::CDSCollectionETWBCLProvider::*)(int32_t)>(
    &::System::Collections::Concurrent::CDSCollectionETWBCLProvider::ConcurrentDictionary_AcquiringAllLocks)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a435e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::CDSCollectionETWBCLProvider*>::get(), "ConcurrentDictionary_AcquiringAllLocks",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
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
inline void System::Collections::Concurrent::CDSCollectionETWBCLProvider::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::CDSCollectionETWBCLProvider*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Collections::Concurrent::CDSCollectionETWBCLProvider::ConcurrentDictionary_AcquiringAllLocks(int32_t numOfBuckets) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::CDSCollectionETWBCLProvider*>::get(), "ConcurrentDictionary_AcquiringAllLocks",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, numOfBuckets);
}
inline ::System::Collections::Concurrent::CDSCollectionETWBCLProvider* System::Collections::Concurrent::CDSCollectionETWBCLProvider::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Collections::Concurrent::CDSCollectionETWBCLProvider*>());
}
// Ctor Parameters []
constexpr ::System::Collections::Concurrent::CDSCollectionETWBCLProvider::CDSCollectionETWBCLProvider() {}
