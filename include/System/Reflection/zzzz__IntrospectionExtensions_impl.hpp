#pragma once
// IWYU pragma private; include "System/Reflection/IntrospectionExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Reflection/zzzz__IntrospectionExtensions_def.hpp"
#include "System/Reflection/zzzz__TypeInfo_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Reflection::IntrospectionExtensions.GetTypeInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::TypeInfo* (*)(::System::Type*)>(&::System::Reflection::IntrospectionExtensions::GetTypeInfo)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x28951dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::IntrospectionExtensions*>::get(), "GetTypeInfo",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
inline ::System::Reflection::TypeInfo* System::Reflection::IntrospectionExtensions::GetTypeInfo(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::IntrospectionExtensions*>::get(), "GetTypeInfo",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::TypeInfo*, false>(nullptr, ___internal_method, type);
}
// Ctor Parameters []
constexpr ::System::Reflection::IntrospectionExtensions::IntrospectionExtensions() {}
