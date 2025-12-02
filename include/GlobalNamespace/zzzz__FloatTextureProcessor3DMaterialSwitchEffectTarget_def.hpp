#pragma once
// IWYU pragma private; include "GlobalNamespace/FloatTextureProcessor3DMaterialSwitchEffectTarget.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__FloatFxGroupEffectTarget_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(FloatTextureProcessor3DMaterialSwitchEffectTarget)
namespace GlobalNamespace {
class GridElementController;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace GlobalNamespace {
class FloatTextureProcessor3DMaterialSwitchEffectTarget;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::FloatTextureProcessor3DMaterialSwitchEffectTarget);
// Dependencies FloatFxGroupEffectTarget, UnityEngine.Vector2
namespace GlobalNamespace {
// Is value type: false
// CS Name: FloatTextureProcessor3DMaterialSwitchEffectTarget
class CORDL_TYPE FloatTextureProcessor3DMaterialSwitchEffectTarget : public ::GlobalNamespace::FloatFxGroupEffectTarget {
public:
  // Declarations
  /// @brief Field _gridElementControllers, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__gridElementControllers,
                      put = __cordl_internal_set__gridElementControllers)) ::ArrayW<::UnityW<::GlobalNamespace::GridElementController>, ::Array<::UnityW<::GlobalNamespace::GridElementController>>*>
      _gridElementControllers;

  /// @brief Field _materialArray, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__materialArray, put = __cordl_internal_set__materialArray)) ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*>
      _materialArray;

  /// @brief Field _materialIndex, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__materialIndex, put = __cordl_internal_set__materialIndex)) int32_t _materialIndex;

  /// @brief Field _oldMaterialIndex, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get__oldMaterialIndex, put = __cordl_internal_set__oldMaterialIndex)) int32_t _oldMaterialIndex;

  /// @brief Field _valueBounds, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__valueBounds, put = __cordl_internal_set__valueBounds)) ::UnityEngine::Vector2 _valueBounds;

  /// @brief Method LateUpdate, addr 0x577babc, size 0x4, virtual false, abstract: false, final false
  inline void LateUpdate();

  static inline ::GlobalNamespace::FloatTextureProcessor3DMaterialSwitchEffectTarget* New_ctor();

  /// @brief Method OnValidate, addr 0x577ba10, size 0x4, virtual false, abstract: false, final false
  inline void OnValidate();

  /// @brief Method SetFloat, addr 0x577b8e8, size 0x124, virtual false, abstract: false, final false
  inline void SetFloat(float_t value);

  /// @brief Method SetMaterialsIfNeeded, addr 0x577ba14, size 0xa8, virtual false, abstract: false, final false
  inline void SetMaterialsIfNeeded();

  /// @brief Method SetValue, addr 0x577b8e4, size 0x4, virtual true, abstract: false, final false
  inline void SetValue(int32_t groupId, int32_t elementId, float_t value);

  /// @brief Method TriggerValue, addr 0x577ba0c, size 0x4, virtual true, abstract: false, final false
  inline void TriggerValue(int32_t groupId, int32_t elementId, float_t value);

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::GridElementController>, ::Array<::UnityW<::GlobalNamespace::GridElementController>>*> const& __cordl_internal_get__gridElementControllers() const;

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::GridElementController>, ::Array<::UnityW<::GlobalNamespace::GridElementController>>*>& __cordl_internal_get__gridElementControllers();

  constexpr ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> const& __cordl_internal_get__materialArray() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*>& __cordl_internal_get__materialArray();

  constexpr int32_t const& __cordl_internal_get__materialIndex() const;

  constexpr int32_t& __cordl_internal_get__materialIndex();

  constexpr int32_t const& __cordl_internal_get__oldMaterialIndex() const;

  constexpr int32_t& __cordl_internal_get__oldMaterialIndex();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get__valueBounds() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get__valueBounds();

  constexpr void __cordl_internal_set__gridElementControllers(::ArrayW<::UnityW<::GlobalNamespace::GridElementController>, ::Array<::UnityW<::GlobalNamespace::GridElementController>>*> value);

  constexpr void __cordl_internal_set__materialArray(::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> value);

  constexpr void __cordl_internal_set__materialIndex(int32_t value);

  constexpr void __cordl_internal_set__oldMaterialIndex(int32_t value);

  constexpr void __cordl_internal_set__valueBounds(::UnityEngine::Vector2 value);

  /// @brief Method .ctor, addr 0x577bac0, size 0x18, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FloatTextureProcessor3DMaterialSwitchEffectTarget();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FloatTextureProcessor3DMaterialSwitchEffectTarget", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FloatTextureProcessor3DMaterialSwitchEffectTarget(FloatTextureProcessor3DMaterialSwitchEffectTarget&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FloatTextureProcessor3DMaterialSwitchEffectTarget", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FloatTextureProcessor3DMaterialSwitchEffectTarget(FloatTextureProcessor3DMaterialSwitchEffectTarget const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5849 };

  /// @brief Field _materialArray, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> ____materialArray;

  /// @brief Field _valueBounds, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::Vector2 ____valueBounds;

  /// @brief Field _gridElementControllers, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::UnityW<::GlobalNamespace::GridElementController>, ::Array<::UnityW<::GlobalNamespace::GridElementController>>*> ____gridElementControllers;

  /// @brief Field _materialIndex, offset: 0x38, size: 0x4, def value: None
  int32_t ____materialIndex;

  /// @brief Field _oldMaterialIndex, offset: 0x3c, size: 0x4, def value: None
  int32_t ____oldMaterialIndex;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FloatTextureProcessor3DMaterialSwitchEffectTarget, ____materialArray) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FloatTextureProcessor3DMaterialSwitchEffectTarget, ____valueBounds) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FloatTextureProcessor3DMaterialSwitchEffectTarget, ____gridElementControllers) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FloatTextureProcessor3DMaterialSwitchEffectTarget, ____materialIndex) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FloatTextureProcessor3DMaterialSwitchEffectTarget, ____oldMaterialIndex) == 0x3c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FloatTextureProcessor3DMaterialSwitchEffectTarget, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::FloatTextureProcessor3DMaterialSwitchEffectTarget);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FloatTextureProcessor3DMaterialSwitchEffectTarget*, "", "FloatTextureProcessor3DMaterialSwitchEffectTarget");
