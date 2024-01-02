#pragma once
#include "System/Reflection/zzzz__BindingFlags_impl.hpp"
#include "System/zzzz__Type_impl.hpp"
#include "System/Reflection/zzzz__TypeInfo_def.hpp"
//  Writing Method size for method: ::System::Reflection::TypeInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Reflection::TypeInfo::*)()>(&::System::Reflection::TypeInfo::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x24ec81c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::TypeInfo*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::System::Reflection::TypeInfo* System::Reflection::TypeInfo::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Reflection::TypeInfo*>());
}
inline void System::Reflection::TypeInfo::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::TypeInfo*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Reflection::TypeInfo::TypeInfo() {}
constexpr ::System::Reflection::BindingFlags System::Reflection::TypeInfo::DeclaredOnlyLookup{ static_cast<int32_t>(0x3e) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
