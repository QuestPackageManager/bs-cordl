#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Utilities/SpriteUtilities.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__SpriteUtilities_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::SpriteUtilities.CreateCircleSprite
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Sprite> (*)(int32_t, ::UnityEngine::Color32)>(
    &::UnityEngine::InputSystem::Utilities::SpriteUtilities::CreateCircleSprite)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x4574510;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::SpriteUtilities*>::get(), "CreateCircleSprite", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color32>::get() })));
    return ___internal_method;
  }
};
inline ::UnityW<::UnityEngine::Sprite> UnityEngine::InputSystem::Utilities::SpriteUtilities::CreateCircleSprite(int32_t radius, ::UnityEngine::Color32 colour) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::SpriteUtilities*>::get(), "CreateCircleSprite", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color32>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Sprite>, false>(nullptr, ___internal_method, radius, colour);
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Utilities::SpriteUtilities::SpriteUtilities() {}
