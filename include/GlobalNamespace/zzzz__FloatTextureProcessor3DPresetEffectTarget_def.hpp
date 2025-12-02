#pragma once
// IWYU pragma private; include "GlobalNamespace/FloatTextureProcessor3DPresetEffectTarget.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__FloatFxGroupEffectTarget_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(FloatTextureProcessor3DPresetEffectTarget)
namespace GlobalNamespace {
class TextureProcessor3D;
}
// Forward declare root types
namespace GlobalNamespace {
class FloatTextureProcessor3DPresetEffectTarget;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::FloatTextureProcessor3DPresetEffectTarget);
// Dependencies FloatFxGroupEffectTarget, UnityEngine.Vector2
namespace GlobalNamespace {
// Is value type: false
// CS Name: FloatTextureProcessor3DPresetEffectTarget
class CORDL_TYPE FloatTextureProcessor3DPresetEffectTarget : public ::GlobalNamespace::FloatFxGroupEffectTarget {
public:
  // Declarations
  /// @brief Field _textureProcessor3D, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__textureProcessor3D, put = __cordl_internal_set__textureProcessor3D)) ::UnityW<::GlobalNamespace::TextureProcessor3D> _textureProcessor3D;

  /// @brief Field _valueBounds, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__valueBounds, put = __cordl_internal_set__valueBounds)) ::UnityEngine::Vector2 _valueBounds;

  static inline ::GlobalNamespace::FloatTextureProcessor3DPresetEffectTarget* New_ctor();

  /// @brief Method SetFloat, addr 0x577c7f0, size 0x130, virtual false, abstract: false, final false
  inline void SetFloat(float_t value);

  /// @brief Method SetValue, addr 0x577c7ec, size 0x4, virtual true, abstract: false, final false
  inline void SetValue(int32_t groupId, int32_t elementId, float_t value);

  /// @brief Method TriggerValue, addr 0x577c920, size 0x4, virtual true, abstract: false, final false
  inline void TriggerValue(int32_t groupId, int32_t elementId, float_t value);

  constexpr ::UnityW<::GlobalNamespace::TextureProcessor3D> const& __cordl_internal_get__textureProcessor3D() const;

  constexpr ::UnityW<::GlobalNamespace::TextureProcessor3D>& __cordl_internal_get__textureProcessor3D();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get__valueBounds() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get__valueBounds();

  constexpr void __cordl_internal_set__textureProcessor3D(::UnityW<::GlobalNamespace::TextureProcessor3D> value);

  constexpr void __cordl_internal_set__valueBounds(::UnityEngine::Vector2 value);

  /// @brief Method .ctor, addr 0x577c924, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FloatTextureProcessor3DPresetEffectTarget();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FloatTextureProcessor3DPresetEffectTarget", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FloatTextureProcessor3DPresetEffectTarget(FloatTextureProcessor3DPresetEffectTarget&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FloatTextureProcessor3DPresetEffectTarget", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FloatTextureProcessor3DPresetEffectTarget(FloatTextureProcessor3DPresetEffectTarget const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5853 };

  /// @brief Field _textureProcessor3D, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::TextureProcessor3D> ____textureProcessor3D;

  /// @brief Field _valueBounds, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::Vector2 ____valueBounds;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FloatTextureProcessor3DPresetEffectTarget, ____textureProcessor3D) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FloatTextureProcessor3DPresetEffectTarget, ____valueBounds) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FloatTextureProcessor3DPresetEffectTarget, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::FloatTextureProcessor3DPresetEffectTarget);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FloatTextureProcessor3DPresetEffectTarget*, "", "FloatTextureProcessor3DPresetEffectTarget");
