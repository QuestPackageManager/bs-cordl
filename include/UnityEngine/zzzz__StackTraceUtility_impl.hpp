#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__StackTraceUtility_def.hpp"
#include "System/Diagnostics/zzzz__StackTrace_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::UnityEngine::StackTraceUtility.SetProjectFolder
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&::UnityEngine::StackTraceUtility::SetProjectFolder)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x2cd19b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::StackTraceUtility*>::get(), "SetProjectFolder", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::StackTraceUtility.ExtractStackTrace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::UnityEngine::StackTraceUtility::ExtractStackTrace)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x2cd1a90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::StackTraceUtility*>::get(), "ExtractStackTrace",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::StackTraceUtility.ExtractStringFromExceptionInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Object*, ByRef<::StringW>, ByRef<::StringW>)>(
    &::UnityEngine::StackTraceUtility::ExtractStringFromExceptionInternal)> {
  constexpr static std::size_t size = 0x368;
  constexpr static std::size_t addrs = 0x2cd229c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::StackTraceUtility*>::get(), "ExtractStringFromExceptionInternal", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::StackTraceUtility.ExtractFormattedStackTrace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::Diagnostics::StackTrace*)>(&::UnityEngine::StackTraceUtility::ExtractFormattedStackTrace)> {
  constexpr static std::size_t size = 0x6a8;
  constexpr static std::size_t addrs = 0x2cd1bf4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::StackTraceUtility*>::get(), "ExtractFormattedStackTrace", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::StackTrace*>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::StackTraceUtility::setStaticF_projectFolder(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "projectFolder", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::StackTraceUtility*>::get>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::StackTraceUtility::getStaticF_projectFolder() {
  return ::cordl_internals::getStaticField<::StringW, "projectFolder", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::StackTraceUtility*>::get>();
}
inline void UnityEngine::StackTraceUtility::SetProjectFolder(::StringW folder) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::StackTraceUtility*>::get(), "SetProjectFolder", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, folder);
}
inline ::StringW UnityEngine::StackTraceUtility::ExtractStackTrace() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::StackTraceUtility*>::get(), "ExtractStackTrace",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
inline void UnityEngine::StackTraceUtility::ExtractStringFromExceptionInternal(::System::Object* exceptiono, ByRef<::StringW> message, ByRef<::StringW> stackTrace) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::StackTraceUtility*>::get(), "ExtractStringFromExceptionInternal", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, exceptiono, message, stackTrace);
}
inline ::StringW UnityEngine::StackTraceUtility::ExtractFormattedStackTrace(::System::Diagnostics::StackTrace* stackTrace) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::StackTraceUtility*>::get(), "ExtractFormattedStackTrace", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::StackTrace*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, stackTrace);
}
// Ctor Parameters []
constexpr ::UnityEngine::StackTraceUtility::StackTraceUtility() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
