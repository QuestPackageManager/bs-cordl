#pragma once
// IWYU pragma private; include "UnityEngine/_Scripting/APIUpdating/APIUpdaterRuntimeHelpers.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/_Scripting/APIUpdating/zzzz__APIUpdaterRuntimeHelpers_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::UnityEngine::_Scripting::APIUpdating::APIUpdaterRuntimeHelpers.GetMovedFromAttributeDataForType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Type*, ::ByRef<::StringW>, ::ByRef<::StringW>, ::ByRef<::StringW>)>(
    &::UnityEngine::_Scripting::APIUpdating::APIUpdaterRuntimeHelpers::GetMovedFromAttributeDataForType)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x48b72a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::_Scripting::APIUpdating::APIUpdaterRuntimeHelpers*>::get(),
                                                 "GetMovedFromAttributeDataForType", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::StringW>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::StringW>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::StringW>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::_Scripting::APIUpdating::APIUpdaterRuntimeHelpers.GetObsoleteTypeRedirection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Type*, ::ByRef<::StringW>, ::ByRef<::StringW>, ::ByRef<::StringW>)>(
    &::UnityEngine::_Scripting::APIUpdating::APIUpdaterRuntimeHelpers::GetObsoleteTypeRedirection)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0x48b73dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::_Scripting::APIUpdating::APIUpdaterRuntimeHelpers*>::get(),
                                                 "GetObsoleteTypeRedirection", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::StringW>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::StringW>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::StringW>>::get() })));
    return ___internal_method;
  }
};
inline bool UnityEngine::_Scripting::APIUpdating::APIUpdaterRuntimeHelpers::GetMovedFromAttributeDataForType(::System::Type* sourceType, ::ByRef<::StringW> assembly, ::ByRef<::StringW> nsp,
                                                                                                             ::ByRef<::StringW> klass) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::_Scripting::APIUpdating::APIUpdaterRuntimeHelpers*>::get(),
                                               "GetMovedFromAttributeDataForType", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::StringW>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::StringW>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::StringW>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, sourceType, assembly, nsp, klass);
}
inline bool UnityEngine::_Scripting::APIUpdating::APIUpdaterRuntimeHelpers::GetObsoleteTypeRedirection(::System::Type* sourceType, ::ByRef<::StringW> assemblyName, ::ByRef<::StringW> nsp,
                                                                                                       ::ByRef<::StringW> className) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::_Scripting::APIUpdating::APIUpdaterRuntimeHelpers*>::get(),
                                               "GetObsoleteTypeRedirection", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::StringW>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::StringW>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::StringW>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, sourceType, assemblyName, nsp, className);
}
// Ctor Parameters []
constexpr ::UnityEngine::_Scripting::APIUpdating::APIUpdaterRuntimeHelpers::APIUpdaterRuntimeHelpers() {}
