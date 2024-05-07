#pragma once
// IWYU pragma private; include "System/Net/TcpValidationHelpers.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__TcpValidationHelpers_def.hpp"
//  Writing Method size for method: ::System::Net::TcpValidationHelpers.ValidatePortNumber
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int32_t)>(&::System::Net::TcpValidationHelpers::ValidatePortNumber)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2fc03b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TcpValidationHelpers*>::get(), "ValidatePortNumber", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline bool System::Net::TcpValidationHelpers::ValidatePortNumber(int32_t port) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TcpValidationHelpers*>::get(), "ValidatePortNumber",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, port);
}
// Ctor Parameters []
constexpr ::System::Net::TcpValidationHelpers::TcpValidationHelpers() {}
