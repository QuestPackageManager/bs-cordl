#pragma once
// IWYU pragma private; include "Unity/Properties/Internal/ReflectionUtilities.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Properties/Internal/zzzz__ReflectionUtilities_def.hpp"
#include "System/Reflection/zzzz__MemberInfo_def.hpp"
//  Writing Method size for method: ::Unity::Properties::Internal::ReflectionUtilities.SanitizeMemberName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::Reflection::MemberInfo*)>(
    &::Unity::Properties::Internal::ReflectionUtilities::SanitizeMemberName)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x4910d44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::Internal::ReflectionUtilities*>::get(), "SanitizeMemberName", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MemberInfo*>::get() })));
    return ___internal_method;
  }
};
inline ::StringW Unity::Properties::Internal::ReflectionUtilities::SanitizeMemberName(::System::Reflection::MemberInfo* info) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::Internal::ReflectionUtilities*>::get(), "SanitizeMemberName", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MemberInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, info);
}
// Ctor Parameters []
constexpr ::Unity::Properties::Internal::ReflectionUtilities::ReflectionUtilities() {}
