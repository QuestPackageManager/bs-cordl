#pragma once
// IWYU pragma private; include "System/Runtime/InternalSR.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/zzzz__InternalSR_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Runtime::InternalSR.EtwRegistrationFailed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::Object*)>(&::System::Runtime::InternalSR::EtwRegistrationFailed)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5fd5ad0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::InternalSR*>::get(), "EtwRegistrationFailed", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
inline ::StringW System::Runtime::InternalSR::EtwRegistrationFailed(::System::Object* arg) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::InternalSR*>::get(), "EtwRegistrationFailed", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, arg);
}
// Ctor Parameters []
constexpr ::System::Runtime::InternalSR::InternalSR() {}
