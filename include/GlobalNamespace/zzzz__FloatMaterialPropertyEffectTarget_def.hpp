#pragma once
// IWYU pragma private; include "GlobalNamespace/FloatMaterialPropertyEffectTarget.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__FloatFxGroupEffectTarget_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(FloatMaterialPropertyEffectTarget)
namespace GlobalNamespace {
class MaterialPropertyBlockController;
}
// Forward declare root types
namespace GlobalNamespace {
class FloatMaterialPropertyEffectTarget;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::FloatMaterialPropertyEffectTarget);
// Type: ::FloatMaterialPropertyEffectTarget
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 60, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::FloatMaterialPropertyEffectTarget*
class CORDL_TYPE FloatMaterialPropertyEffectTarget : public ::GlobalNamespace::FloatFxGroupEffectTarget {
public:
  // Declarations
  /// @brief Field _materialPropertyBlockController, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__materialPropertyBlockController,
                      put = __cordl_internal_set__materialPropertyBlockController)) ::UnityW<::GlobalNamespace::MaterialPropertyBlockController>
      _materialPropertyBlockController;

  /// @brief Field _propertyId, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__propertyId, put = __cordl_internal_set__propertyId)) int32_t _propertyId;

  /// @brief Field _propertyName, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__propertyName, put = __cordl_internal_set__propertyName)) ::StringW _propertyName;

  /// @brief Field _valueBounds, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__valueBounds, put = __cordl_internal_set__valueBounds)) ::UnityEngine::Vector2 _valueBounds;

  /// @brief Method Awake, addr 0x3b13980, size 0x20, virtual false, abstract: false, final false
  inline void Awake();

  static inline ::GlobalNamespace::FloatMaterialPropertyEffectTarget* New_ctor();

  /// @brief Method SetFloat, addr 0x3b139a4, size 0x60, virtual false, abstract: false, final false
  inline void SetFloat(float_t value);

  /// @brief Method SetValue, addr 0x3b139a0, size 0x4, virtual true, abstract: false, final false
  inline void SetValue(int32_t groupId, int32_t elementId, float_t value);

  /// @brief Method TriggerValue, addr 0x3b13a04, size 0x4, virtual true, abstract: false, final false
  inline void TriggerValue(int32_t groupId, int32_t elementId, float_t value);

  constexpr ::UnityW<::GlobalNamespace::MaterialPropertyBlockController> const& __cordl_internal_get__materialPropertyBlockController() const;

  constexpr ::UnityW<::GlobalNamespace::MaterialPropertyBlockController>& __cordl_internal_get__materialPropertyBlockController();

  constexpr int32_t const& __cordl_internal_get__propertyId() const;

  constexpr int32_t& __cordl_internal_get__propertyId();

  constexpr ::StringW const& __cordl_internal_get__propertyName() const;

  constexpr ::StringW& __cordl_internal_get__propertyName();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get__valueBounds() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get__valueBounds();

  constexpr void __cordl_internal_set__materialPropertyBlockController(::UnityW<::GlobalNamespace::MaterialPropertyBlockController> value);

  constexpr void __cordl_internal_set__propertyId(int32_t value);

  constexpr void __cordl_internal_set__propertyName(::StringW value);

  constexpr void __cordl_internal_set__valueBounds(::UnityEngine::Vector2 value);

  /// @brief Method .ctor, addr 0x3b13a08, size 0x14, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FloatMaterialPropertyEffectTarget();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FloatMaterialPropertyEffectTarget", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FloatMaterialPropertyEffectTarget(FloatMaterialPropertyEffectTarget&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FloatMaterialPropertyEffectTarget", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FloatMaterialPropertyEffectTarget(FloatMaterialPropertyEffectTarget const&) = delete;

  /// @brief Field _materialPropertyBlockController, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MaterialPropertyBlockController> ____materialPropertyBlockController;

  /// @brief Field _propertyName, offset: 0x28, size: 0x8, def value: None
  ::StringW ____propertyName;

  /// @brief Field _valueBounds, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::Vector2 ____valueBounds;

  /// @brief Field _propertyId, offset: 0x38, size: 0x4, def value: None
  int32_t ____propertyId;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4258 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FloatMaterialPropertyEffectTarget, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::FloatMaterialPropertyEffectTarget, ____materialPropertyBlockController) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FloatMaterialPropertyEffectTarget, ____propertyName) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FloatMaterialPropertyEffectTarget, ____valueBounds) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FloatMaterialPropertyEffectTarget, ____propertyId) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::FloatMaterialPropertyEffectTarget);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FloatMaterialPropertyEffectTarget*, "", "FloatMaterialPropertyEffectTarget");
