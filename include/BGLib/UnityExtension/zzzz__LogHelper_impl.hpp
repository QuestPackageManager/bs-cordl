#pragma once
// IWYU pragma private; include "BGLib/UnityExtension/LogHelper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BGLib/UnityExtension/zzzz__LogHelper_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::BGLib::UnityExtension::LogHelper.LogBuildOnly
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&::BGLib::UnityExtension::LogHelper::LogBuildOnly)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x22b6078;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::UnityExtension::LogHelper*>::get(), "LogBuildOnly", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::UnityExtension::LogHelper.LogBuildOnly
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::UnityEngine::Object*)>(&::BGLib::UnityExtension::LogHelper::LogBuildOnly)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x22b60d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::UnityExtension::LogHelper*>::get(), "LogBuildOnly", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get() })));
    return ___internal_method;
  }
};
inline void BGLib::UnityExtension::LogHelper::LogBuildOnly(::StringW message) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::UnityExtension::LogHelper*>::get(), "LogBuildOnly", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, message);
}
inline void BGLib::UnityExtension::LogHelper::LogBuildOnly(::StringW message, ::UnityEngine::Object* context) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::UnityExtension::LogHelper*>::get(), "LogBuildOnly", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, message, context);
}
// Ctor Parameters []
constexpr ::BGLib::UnityExtension::LogHelper::LogHelper() {}
