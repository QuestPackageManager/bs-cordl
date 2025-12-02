#pragma once
// IWYU pragma private; include "System/Runtime/PartialTrustHelpers.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/zzzz__PartialTrustHelpers_def.hpp"
//  Writing Method size for method: ::System::Runtime::PartialTrustHelpers.HasEtwPermissions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::System::Runtime::PartialTrustHelpers::HasEtwPermissions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f6b2e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::PartialTrustHelpers*>::get(),
                                                                               "HasEtwPermissions", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline bool System::Runtime::PartialTrustHelpers::HasEtwPermissions() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::PartialTrustHelpers*>::get(),
                                                                             "HasEtwPermissions", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Runtime::PartialTrustHelpers::PartialTrustHelpers() {}
