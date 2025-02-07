#pragma once
// IWYU pragma private; include "GlobalNamespace/StepFloatMaterialPropertyEffectTarget.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__FloatFxGroupEffectTarget_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(StepFloatMaterialPropertyEffectTarget)
namespace GlobalNamespace {
class MaterialPropertyBlockController;
}
// Forward declare root types
namespace GlobalNamespace {
class StepFloatMaterialPropertyEffectTarget;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::StepFloatMaterialPropertyEffectTarget);
// Dependencies FloatFxGroupEffectTarget
namespace GlobalNamespace {
// Is value type: false
// CS Name: StepFloatMaterialPropertyEffectTarget
class CORDL_TYPE StepFloatMaterialPropertyEffectTarget : public ::GlobalNamespace::FloatFxGroupEffectTarget {
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

  /// @brief Field _stepFactor, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__stepFactor, put = __cordl_internal_set__stepFactor)) float_t _stepFactor;

  /// @brief Field _stepSize, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get__stepSize, put = __cordl_internal_set__stepSize)) float_t _stepSize;

  /// @brief Method Awake, addr 0x3b93404, size 0x20, virtual false, abstract: false, final false
  inline void Awake();

  static inline ::GlobalNamespace::StepFloatMaterialPropertyEffectTarget* New_ctor();

  /// @brief Method SetFloat, addr 0x3b93428, size 0x5c, virtual false, abstract: false, final false
  inline void SetFloat(float_t value);

  /// @brief Method SetValue, addr 0x3b93424, size 0x4, virtual true, abstract: false, final false
  inline void SetValue(int32_t groupId, int32_t elementId, float_t value);

  /// @brief Method TriggerValue, addr 0x3b93484, size 0x4, virtual true, abstract: false, final false
  inline void TriggerValue(int32_t groupId, int32_t elementId, float_t value);

  constexpr ::UnityW<::GlobalNamespace::MaterialPropertyBlockController> const& __cordl_internal_get__materialPropertyBlockController() const;

  constexpr ::UnityW<::GlobalNamespace::MaterialPropertyBlockController>& __cordl_internal_get__materialPropertyBlockController();

  constexpr int32_t const& __cordl_internal_get__propertyId() const;

  constexpr int32_t& __cordl_internal_get__propertyId();

  constexpr ::StringW const& __cordl_internal_get__propertyName() const;

  constexpr ::StringW& __cordl_internal_get__propertyName();

  constexpr float_t const& __cordl_internal_get__stepFactor() const;

  constexpr float_t& __cordl_internal_get__stepFactor();

  constexpr float_t const& __cordl_internal_get__stepSize() const;

  constexpr float_t& __cordl_internal_get__stepSize();

  constexpr void __cordl_internal_set__materialPropertyBlockController(::UnityW<::GlobalNamespace::MaterialPropertyBlockController> value);

  constexpr void __cordl_internal_set__propertyId(int32_t value);

  constexpr void __cordl_internal_set__propertyName(::StringW value);

  constexpr void __cordl_internal_set__stepFactor(float_t value);

  constexpr void __cordl_internal_set__stepSize(float_t value);

  /// @brief Method .ctor, addr 0x3b93488, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StepFloatMaterialPropertyEffectTarget();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StepFloatMaterialPropertyEffectTarget", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StepFloatMaterialPropertyEffectTarget(StepFloatMaterialPropertyEffectTarget&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StepFloatMaterialPropertyEffectTarget", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StepFloatMaterialPropertyEffectTarget(StepFloatMaterialPropertyEffectTarget const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4279 };

  /// @brief Field _materialPropertyBlockController, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MaterialPropertyBlockController> ____materialPropertyBlockController;

  /// @brief Field _propertyName, offset: 0x28, size: 0x8, def value: None
  ::StringW ____propertyName;

  /// @brief Field _stepFactor, offset: 0x30, size: 0x4, def value: None
  float_t ____stepFactor;

  /// @brief Field _stepSize, offset: 0x34, size: 0x4, def value: None
  float_t ____stepSize;

  /// @brief Field _propertyId, offset: 0x38, size: 0x4, def value: None
  int32_t ____propertyId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::StepFloatMaterialPropertyEffectTarget, ____materialPropertyBlockController) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StepFloatMaterialPropertyEffectTarget, ____propertyName) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StepFloatMaterialPropertyEffectTarget, ____stepFactor) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StepFloatMaterialPropertyEffectTarget, ____stepSize) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StepFloatMaterialPropertyEffectTarget, ____propertyId) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::StepFloatMaterialPropertyEffectTarget, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::StepFloatMaterialPropertyEffectTarget);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StepFloatMaterialPropertyEffectTarget*, "", "StepFloatMaterialPropertyEffectTarget");
