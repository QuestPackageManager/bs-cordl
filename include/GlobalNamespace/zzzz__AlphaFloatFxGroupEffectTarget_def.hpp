#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__FloatFxGroupEffectTarget_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
// Type: ::AlphaFloatFxGroupEffectTarget
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 61, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(4909)), TypeDefinitionIndex(TypeDefinitionIndex(10251))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4902))
// CS Name: ::AlphaFloatFxGroupEffectTarget*
class CORDL_TYPE AlphaFloatFxGroupEffectTarget : public ::GlobalNamespace::FloatFxGroupEffectTarget {
public:
  // Declarations
  /// @brief Field _staticColor, offset 0x18, size 0x10
  __declspec(property(get = __cordl_internal_get__staticColor, put = __cordl_internal_set__staticColor))::UnityEngine::Color _staticColor;

  /// @brief Field _property, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__property, put = __cordl_internal_set__property))::StringW _property;

  /// @brief Field _materialPropertyBlockControllers, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__materialPropertyBlockControllers,
                      put = __cordl_internal_set__materialPropertyBlockControllers))::ArrayW<::UnityW<::GlobalNamespace::MaterialPropertyBlockController>,
                                                                                             ::Array<::UnityW<::GlobalNamespace::MaterialPropertyBlockController>>*> _materialPropertyBlockControllers;

  /// @brief Field _propertyId, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__propertyId, put = __cordl_internal_set__propertyId)) int32_t _propertyId;

  /// @brief Field _isInitialized, offset 0x3c, size 0x1
  __declspec(property(get = __cordl_internal_get__isInitialized, put = __cordl_internal_set__isInitialized)) bool _isInitialized;

  constexpr ::UnityEngine::Color& __cordl_internal_get__staticColor();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__staticColor() const;

  constexpr void __cordl_internal_set__staticColor(::UnityEngine::Color value);

  constexpr ::StringW& __cordl_internal_get__property();

  constexpr ::StringW const& __cordl_internal_get__property() const;

  constexpr void __cordl_internal_set__property(::StringW value);

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::MaterialPropertyBlockController>, ::Array<::UnityW<::GlobalNamespace::MaterialPropertyBlockController>>*>&
  __cordl_internal_get__materialPropertyBlockControllers();

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::MaterialPropertyBlockController>, ::Array<::UnityW<::GlobalNamespace::MaterialPropertyBlockController>>*> const&
  __cordl_internal_get__materialPropertyBlockControllers() const;

  constexpr void __cordl_internal_set__materialPropertyBlockControllers(
      ::ArrayW<::UnityW<::GlobalNamespace::MaterialPropertyBlockController>, ::Array<::UnityW<::GlobalNamespace::MaterialPropertyBlockController>>*> value);

  constexpr int32_t& __cordl_internal_get__propertyId();

  constexpr int32_t const& __cordl_internal_get__propertyId() const;

  constexpr void __cordl_internal_set__propertyId(int32_t value);

  constexpr bool& __cordl_internal_get__isInitialized();

  constexpr bool const& __cordl_internal_get__isInitialized() const;

  constexpr void __cordl_internal_set__isInitialized(bool value);

  /// @brief Method Awake, addr 0x23a5684, size 0x30, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method InitIfNeeded, addr 0x23a56b4, size 0x30, virtual false, abstract: false, final false
  inline void InitIfNeeded();

  /// @brief Method SetValue, addr 0x23a56e4, size 0x18, virtual true, abstract: false, final false
  inline void SetValue(float_t value);

  /// @brief Method TriggerValue, addr 0x23a57d8, size 0x18, virtual true, abstract: false, final false
  inline void TriggerValue(float_t value);

  /// @brief Method SetColor, addr 0x23a56fc, size 0xdc, virtual false, abstract: false, final false
  inline void SetColor(::UnityEngine::Color color);

  static inline ::GlobalNamespace::AlphaFloatFxGroupEffectTarget* New_ctor();

  /// @brief Method .ctor, addr 0x23a57f0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "AlphaFloatFxGroupEffectTarget", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AlphaFloatFxGroupEffectTarget(AlphaFloatFxGroupEffectTarget&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AlphaFloatFxGroupEffectTarget", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AlphaFloatFxGroupEffectTarget(AlphaFloatFxGroupEffectTarget const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AlphaFloatFxGroupEffectTarget();

public:
  /// @brief Field _staticColor, offset: 0x18, size: 0x10, def value: None
  ::UnityEngine::Color ____staticColor;

  /// @brief Field _property, offset: 0x28, size: 0x8, def value: None
  ::StringW ____property;

  /// @brief Field _materialPropertyBlockControllers, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::UnityW<::GlobalNamespace::MaterialPropertyBlockController>, ::Array<::UnityW<::GlobalNamespace::MaterialPropertyBlockController>>*> ____materialPropertyBlockControllers;

  /// @brief Field _propertyId, offset: 0x38, size: 0x4, def value: None
  int32_t ____propertyId;

  /// @brief Field _isInitialized, offset: 0x3c, size: 0x1, def value: None
  bool ____isInitialized;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AlphaFloatFxGroupEffectTarget, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::AlphaFloatFxGroupEffectTarget, ____staticColor) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AlphaFloatFxGroupEffectTarget, ____property) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AlphaFloatFxGroupEffectTarget, ____materialPropertyBlockControllers) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AlphaFloatFxGroupEffectTarget, ____propertyId) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AlphaFloatFxGroupEffectTarget, ____isInitialized) == 0x3c, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::AlphaFloatFxGroupEffectTarget);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AlphaFloatFxGroupEffectTarget*, "", "AlphaFloatFxGroupEffectTarget");
