#pragma once
// IWYU pragma private; include "GlobalNamespace/PlaymodeOptionsExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__PlaymodeOptionsExtensions_def.hpp"
#include "GlobalNamespace/zzzz__PlaymodeOptions_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PlaymodeOptionsExtensions.IsRecorderActive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::PlaymodeOptions)>(&::GlobalNamespace::PlaymodeOptionsExtensions::IsRecorderActive)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x360fa80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlaymodeOptionsExtensions*>::get(), "IsRecorderActive", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlaymodeOptions>::get() })));
    return ___internal_method;
  }
};
inline bool GlobalNamespace::PlaymodeOptionsExtensions::IsRecorderActive(::GlobalNamespace::PlaymodeOptions playmodeOptions) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlaymodeOptionsExtensions*>::get(), "IsRecorderActive", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlaymodeOptions>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, playmodeOptions);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlaymodeOptionsExtensions::PlaymodeOptionsExtensions() {}
