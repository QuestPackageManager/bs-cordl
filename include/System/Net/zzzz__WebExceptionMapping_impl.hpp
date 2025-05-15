#pragma once
// IWYU pragma private; include "System/Net/WebExceptionMapping.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__WebExceptionMapping_def.hpp"
#include "System/Net/zzzz__WebExceptionStatus_def.hpp"
//  Writing Method size for method: ::System::Net::WebExceptionMapping.GetWebStatusString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::Net::WebExceptionStatus)>(&::System::Net::WebExceptionMapping::GetWebStatusString)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x44a2d78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebExceptionMapping*>::get(), "GetWebStatusString", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebExceptionStatus>::get() })));
    return ___internal_method;
  }
};
inline void System::Net::WebExceptionMapping::setStaticF_s_Mapping(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::StringW, ::Array<::StringW>*>, "s_Mapping", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebExceptionMapping*>::get>(
      std::forward<::ArrayW<::StringW, ::Array<::StringW>*>>(value));
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> System::Net::WebExceptionMapping::getStaticF_s_Mapping() {
  return ::cordl_internals::getStaticField<::ArrayW<::StringW, ::Array<::StringW>*>, "s_Mapping", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebExceptionMapping*>::get>();
}
inline ::StringW System::Net::WebExceptionMapping::GetWebStatusString(::System::Net::WebExceptionStatus status) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebExceptionMapping*>::get(), "GetWebStatusString", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebExceptionStatus>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, status);
}
// Ctor Parameters []
constexpr ::System::Net::WebExceptionMapping::WebExceptionMapping() {}
