#pragma once
// IWYU pragma private; include "System/EnvironmentHelpers.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__EnvironmentHelpers_def.hpp"
//  Writing Method size for method: ::System::EnvironmentHelpers.IsWindowsVistaOrAbove
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::System::EnvironmentHelpers::IsWindowsVistaOrAbove)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61c5fc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::EnvironmentHelpers*>::get(),
                        "IsWindowsVistaOrAbove",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline bool System::EnvironmentHelpers::IsWindowsVistaOrAbove()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::EnvironmentHelpers*>::get(),
                        "IsWindowsVistaOrAbove",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::EnvironmentHelpers::EnvironmentHelpers()   {
}
