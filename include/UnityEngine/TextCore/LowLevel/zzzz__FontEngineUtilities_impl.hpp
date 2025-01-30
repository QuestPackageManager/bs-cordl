#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/LowLevel/FontEngineUtilities.hpp"
#include "UnityEngine/TextCore/LowLevel/zzzz__FontEngineUtilities_def.hpp"
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::FontEngineUtilities.MaxValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t, int32_t, int32_t)>(&::UnityEngine::TextCore::LowLevel::FontEngineUtilities::MaxValue)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x49235a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngineUtilities>::get(), "MaxValue", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline int32_t UnityEngine::TextCore::LowLevel::FontEngineUtilities::MaxValue(int32_t a, int32_t b, int32_t c) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::FontEngineUtilities>::get(), "MaxValue", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, a, b, c);
}
// Ctor Parameters []
constexpr ::UnityEngine::TextCore::LowLevel::FontEngineUtilities::FontEngineUtilities() {}
