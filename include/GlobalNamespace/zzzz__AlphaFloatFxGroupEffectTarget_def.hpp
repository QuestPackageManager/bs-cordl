#pragma once
// IWYU pragma private; include "GlobalNamespace/AlphaFloatFxGroupEffectTarget.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__FloatFxGroupEffectTarget_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AlphaFloatFxGroupEffectTarget)
namespace GlobalNamespace {
class MaterialPropertyBlockController;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class AlphaFloatFxGroupEffectTarget;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::AlphaFloatFxGroupEffectTarget);
// Dependencies FloatFxGroupEffectTarget, UnityEngine.Color
namespace GlobalNamespace {
// Is value type: false
// CS Name: AlphaFloatFxGroupEffectTarget
class CORDL_TYPE AlphaFloatFxGroupEffectTarget : public ::GlobalNamespace::FloatFxGroupEffectTarget {
public:
  // Declarations
  /// @brief Field _isInitialized, offset 0x44, size 0x1
  __declspec(property(get = __cordl_internal_get__isInitialized, put = __cordl_internal_set__isInitialized)) bool _isInitialized;

  /// @brief Field _materialPropertyBlockControllers, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__materialPropertyBlockControllers,
                      put = __cordl_internal_set__materialPropertyBlockControllers)) ::ArrayW<::UnityW<::GlobalNamespace::MaterialPropertyBlockController>,
                                                                                              ::Array<::UnityW<::GlobalNamespace::MaterialPropertyBlockController>>*>
      _materialPropertyBlockControllers;

  /// @brief Field _property, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__property, put = __cordl_internal_set__property)) ::StringW _property;

  /// @brief Field _propertyId, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__propertyId, put = __cordl_internal_set__propertyId)) int32_t _propertyId;

  /// @brief Field _staticColor, offset 0x20, size 0x10
  __declspec(property(get = __cordl_internal_get__staticColor, put = __cordl_internal_set__staticColor)) ::UnityEngine::Color _staticColor;

  /// @brief Method Awake, addr 0x3b8d2b8, size 0x30, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method InitIfNeeded, addr 0x3b8d2e8, size 0x30, virtual false, abstract: false, final false
  inline void InitIfNeeded();

  static inline ::GlobalNamespace::AlphaFloatFxGroupEffectTarget* New_ctor();

  /// @brief Method SetColor, addr 0x3b8d330, size 0xdc, virtual false, abstract: false, final false
  inline void SetColor(::UnityEngine::Color color);

  /// @brief Method SetValue, addr 0x3b8d318, size 0x18, virtual true, abstract: false, final false
  inline void SetValue(int32_t groupId, int32_t elementId, float_t value);

  /// @brief Method TriggerValue, addr 0x3b8d40c, size 0x18, virtual true, abstract: false, final false
  inline void TriggerValue(int32_t groupId, int32_t elementId, float_t value);

  constexpr bool const& __cordl_internal_get__isInitialized() const;

  constexpr bool& __cordl_internal_get__isInitialized();

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::MaterialPropertyBlockController>, ::Array<::UnityW<::GlobalNamespace::MaterialPropertyBlockController>>*> const&
  __cordl_internal_get__materialPropertyBlockControllers() const;

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::MaterialPropertyBlockController>, ::Array<::UnityW<::GlobalNamespace::MaterialPropertyBlockController>>*>&
  __cordl_internal_get__materialPropertyBlockControllers();

  constexpr ::StringW const& __cordl_internal_get__property() const;

  constexpr ::StringW& __cordl_internal_get__property();

  constexpr int32_t const& __cordl_internal_get__propertyId() const;

  constexpr int32_t& __cordl_internal_get__propertyId();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__staticColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__staticColor();

  constexpr void __cordl_internal_set__isInitialized(bool value);

  constexpr void __cordl_internal_set__materialPropertyBlockControllers(
      ::ArrayW<::UnityW<::GlobalNamespace::MaterialPropertyBlockController>, ::Array<::UnityW<::GlobalNamespace::MaterialPropertyBlockController>>*> value);

  constexpr void __cordl_internal_set__property(::StringW value);

  constexpr void __cordl_internal_set__propertyId(int32_t value);

  constexpr void __cordl_internal_set__staticColor(::UnityEngine::Color value);

  /// @brief Method .ctor, addr 0x3b8d424, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AlphaFloatFxGroupEffectTarget();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AlphaFloatFxGroupEffectTarget", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AlphaFloatFxGroupEffectTarget(AlphaFloatFxGroupEffectTarget&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AlphaFloatFxGroupEffectTarget", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AlphaFloatFxGroupEffectTarget(AlphaFloatFxGroupEffectTarget const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4263 };

  /// @brief Field _staticColor, offset: 0x20, size: 0x10, def value: None
  ::UnityEngine::Color ____staticColor;

  /// @brief Field _property, offset: 0x30, size: 0x8, def value: None
  ::StringW ____property;

  /// @brief Field _materialPropertyBlockControllers, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<::UnityW<::GlobalNamespace::MaterialPropertyBlockController>, ::Array<::UnityW<::GlobalNamespace::MaterialPropertyBlockController>>*> ____materialPropertyBlockControllers;

  /// @brief Field _propertyId, offset: 0x40, size: 0x4, def value: None
  int32_t ____propertyId;

  /// @brief Field _isInitialized, offset: 0x44, size: 0x1, def value: None
  bool ____isInitialized;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AlphaFloatFxGroupEffectTarget, ____staticColor) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AlphaFloatFxGroupEffectTarget, ____property) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AlphaFloatFxGroupEffectTarget, ____materialPropertyBlockControllers) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AlphaFloatFxGroupEffectTarget, ____propertyId) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AlphaFloatFxGroupEffectTarget, ____isInitialized) == 0x44, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AlphaFloatFxGroupEffectTarget, 0x48>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::AlphaFloatFxGroupEffectTarget);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AlphaFloatFxGroupEffectTarget*, "", "AlphaFloatFxGroupEffectTarget");
