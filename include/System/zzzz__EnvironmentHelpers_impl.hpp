#pragma once
// IWYU pragma private; include "System/EnvironmentHelpers.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__EnvironmentHelpers_def.hpp"
//  Writing Method size for method: ::System::EnvironmentHelpers.IsWindowsVistaOrAbove
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::System::EnvironmentHelpers::IsWindowsVistaOrAbove)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x441d14c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::EnvironmentHelpers*>::get(), "IsWindowsVistaOrAbove",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline bool System::EnvironmentHelpers::IsWindowsVistaOrAbove() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::EnvironmentHelpers*>::get(), "IsWindowsVistaOrAbove",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::EnvironmentHelpers::EnvironmentHelpers() {}
