#pragma once
// IWYU pragma private; include "System/Diagnostics/CorrelationManager.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Diagnostics/zzzz__CorrelationManager_def.hpp"
#include "System/Collections/zzzz__Stack_def.hpp"
//  Writing Method size for method: ::System::Diagnostics::CorrelationManager._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::CorrelationManager::*)()>(&::System::Diagnostics::CorrelationManager::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x61e1610;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::CorrelationManager*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::CorrelationManager.get_LogicalOperationStack
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Stack* (::System::Diagnostics::CorrelationManager::*)()>(
    &::System::Diagnostics::CorrelationManager::get_LogicalOperationStack)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x61e1614;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::CorrelationManager*>::get(),
                                                                               "get_LogicalOperationStack", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::CorrelationManager.GetLogicalOperationStack
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Stack* (::System::Diagnostics::CorrelationManager::*)()>(
    &::System::Diagnostics::CorrelationManager::GetLogicalOperationStack)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x61e1618;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::CorrelationManager*>::get(),
                                                                               "GetLogicalOperationStack", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void System::Diagnostics::CorrelationManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::CorrelationManager*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Collections::Stack* System::Diagnostics::CorrelationManager::get_LogicalOperationStack() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::CorrelationManager*>::get(),
                                                                             "get_LogicalOperationStack", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Stack*, false>(this, ___internal_method);
}
inline ::System::Collections::Stack* System::Diagnostics::CorrelationManager::GetLogicalOperationStack() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::CorrelationManager*>::get(),
                                                                             "GetLogicalOperationStack", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Stack*, false>(this, ___internal_method);
}
inline ::System::Diagnostics::CorrelationManager* System::Diagnostics::CorrelationManager::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Diagnostics::CorrelationManager*>());
}
// Ctor Parameters []
constexpr ::System::Diagnostics::CorrelationManager::CorrelationManager() {}
