#pragma once
// IWYU pragma private; include "UnityEngine\InputSystem\Utilities\SpriteUtilities.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__SpriteUtilities_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::SpriteUtilities.CreateCircleSprite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Sprite> (*)(int32_t, ::UnityEngine::Color32)>(
    &::UnityEngine::InputSystem::Utilities::SpriteUtilities::CreateCircleSprite)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x6508be8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::SpriteUtilities*>(),
                                                                                           { "CreateCircleSprite", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Color32>() } })));
    return ___internal_method;
  }
};
inline ::UnityW<::UnityEngine::Sprite> UnityEngine::InputSystem::Utilities::SpriteUtilities::CreateCircleSprite(int32_t radius, ::UnityEngine::Color32 colour) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::SpriteUtilities*>(),
                                                                                         { "CreateCircleSprite", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Color32>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Sprite>>(nullptr, ___internal_method, radius, colour);
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Utilities::SpriteUtilities::SpriteUtilities() {}
