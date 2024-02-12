#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__FloatFxGroupEffectTarget_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MaterialPropertyEffect)
namespace GlobalNamespace {
class MaterialPropertyBlockController;
}
// Forward declare root types
namespace GlobalNamespace {
class MaterialPropertyEffect;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MaterialPropertyEffect);
// Type: ::MaterialPropertyEffect
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 44, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(4263))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4264))
// CS Name: ::MaterialPropertyEffect*
class CORDL_TYPE MaterialPropertyEffect : public ::GlobalNamespace::FloatFxGroupEffectTarget {
public:
  // Declarations
  /// @brief Field _materialPropertyBlockController, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__materialPropertyBlockController,
                      put = __cordl_internal_set__materialPropertyBlockController))::UnityW<::GlobalNamespace::MaterialPropertyBlockController> _materialPropertyBlockController;

  /// @brief Field _propertyName, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__propertyName, put = __cordl_internal_set__propertyName))::StringW _propertyName;

  /// @brief Field _propertyId, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__propertyId, put = __cordl_internal_set__propertyId)) int32_t _propertyId;

  constexpr ::UnityW<::GlobalNamespace::MaterialPropertyBlockController>& __cordl_internal_get__materialPropertyBlockController();

  constexpr ::UnityW<::GlobalNamespace::MaterialPropertyBlockController> const& __cordl_internal_get__materialPropertyBlockController() const;

  constexpr void __cordl_internal_set__materialPropertyBlockController(::UnityW<::GlobalNamespace::MaterialPropertyBlockController> value);

  constexpr ::StringW& __cordl_internal_get__propertyName();

  constexpr ::StringW const& __cordl_internal_get__propertyName() const;

  constexpr void __cordl_internal_set__propertyName(::StringW value);

  constexpr int32_t& __cordl_internal_get__propertyId();

  constexpr int32_t const& __cordl_internal_get__propertyId() const;

  constexpr void __cordl_internal_set__propertyId(int32_t value);

  /// @brief Method Awake, addr 0x2366708, size 0x20, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method SetValue, addr 0x2366728, size 0xc8, virtual true, abstract: false, final false
  inline void SetValue(float_t value);

  /// @brief Method TriggerValue, addr 0x23667f0, size 0xc8, virtual true, abstract: false, final false
  inline void TriggerValue(float_t value);

  static inline ::GlobalNamespace::MaterialPropertyEffect* New_ctor();

  /// @brief Method .ctor, addr 0x23668b8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MaterialPropertyEffect", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MaterialPropertyEffect(MaterialPropertyEffect&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MaterialPropertyEffect", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MaterialPropertyEffect(MaterialPropertyEffect const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MaterialPropertyEffect();

public:
  /// @brief Field _materialPropertyBlockController, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MaterialPropertyBlockController> ____materialPropertyBlockController;

  /// @brief Field _propertyName, offset: 0x20, size: 0x8, def value: None
  ::StringW ____propertyName;

  /// @brief Field _propertyId, offset: 0x28, size: 0x4, def value: None
  int32_t ____propertyId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MaterialPropertyEffect, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialPropertyEffect, ____materialPropertyBlockController) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialPropertyEffect, ____propertyName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialPropertyEffect, ____propertyId) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MaterialPropertyEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MaterialPropertyEffect*, "", "MaterialPropertyEffect");
