#pragma once
// IWYU pragma private; include "HMUI/RoundedCornersDirectionExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "HMUI/zzzz__RoundedCornersDirectionExtensions_def.hpp"
#include "HMUI/zzzz__RoundedCornersDirection_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::HMUI::RoundedCornersDirectionExtensions.GetFlipAndSymmetry
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector4 (*)(::HMUI::RoundedCornersDirection)>(
    &::HMUI::RoundedCornersDirectionExtensions::GetFlipAndSymmetry)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x56d31fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::RoundedCornersDirectionExtensions*>::get(), "GetFlipAndSymmetry", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::RoundedCornersDirection>::get() })));
    return ___internal_method;
  }
};
inline ::UnityEngine::Vector4 HMUI::RoundedCornersDirectionExtensions::GetFlipAndSymmetry(::HMUI::RoundedCornersDirection direction) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::RoundedCornersDirectionExtensions*>::get(), "GetFlipAndSymmetry", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::RoundedCornersDirection>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4, false>(nullptr, ___internal_method, direction);
}
// Ctor Parameters []
constexpr ::HMUI::RoundedCornersDirectionExtensions::RoundedCornersDirectionExtensions() {}
