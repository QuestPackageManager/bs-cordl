#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/TileSizeExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__TileSizeExtensions_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__TileSize_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::TileSizeExtensions.IsValid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Rendering::Universal::TileSize)>(
    &::UnityEngine::Rendering::Universal::TileSizeExtensions::IsValid)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6709e84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::TileSizeExtensions*>::get(), "IsValid", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::TileSize>::get() })));
    return ___internal_method;
  }
};
inline bool UnityEngine::Rendering::Universal::TileSizeExtensions::IsValid(::UnityEngine::Rendering::Universal::TileSize tileSize) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::TileSizeExtensions*>::get(), "IsValid", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::TileSize>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, tileSize);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::TileSizeExtensions::TileSizeExtensions() {}
