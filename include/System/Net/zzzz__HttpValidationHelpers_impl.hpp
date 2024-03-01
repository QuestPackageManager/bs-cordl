#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__HttpValidationHelpers_def.hpp"
//  Writing Method size for method: ::System::Net::HttpValidationHelpers.IsInvalidMethodOrHeaderString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&::System::Net::HttpValidationHelpers::IsInvalidMethodOrHeaderString)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x2a73858;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpValidationHelpers*>::get(), "IsInvalidMethodOrHeaderString",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline void System::Net::HttpValidationHelpers::setStaticF_s_httpTrimCharacters(::ArrayW<char16_t, ::Array<char16_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<char16_t, ::Array<char16_t>*>, "s_httpTrimCharacters", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpValidationHelpers*>::get>(
      std::forward<::ArrayW<char16_t, ::Array<char16_t>*>>(value));
}
inline ::ArrayW<char16_t, ::Array<char16_t>*> System::Net::HttpValidationHelpers::getStaticF_s_httpTrimCharacters() {
  return ::cordl_internals::getStaticField<::ArrayW<char16_t, ::Array<char16_t>*>, "s_httpTrimCharacters",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpValidationHelpers*>::get>();
}
inline bool System::Net::HttpValidationHelpers::IsInvalidMethodOrHeaderString(::StringW stringValue) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpValidationHelpers*>::get(), "IsInvalidMethodOrHeaderString",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, stringValue);
}
// Ctor Parameters []
constexpr ::System::Net::HttpValidationHelpers::HttpValidationHelpers() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
