#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MaterialPropertyBlockControllerRandomValueSetter)
namespace GlobalNamespace {
class MaterialPropertyBlockController;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
// Forward declare root types
namespace GlobalNamespace {
class MaterialPropertyBlockControllerRandomValueSetter;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MaterialPropertyBlockControllerRandomValueSetter);
// Type: ::MaterialPropertyBlockControllerRandomValueSetter
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 60, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MaterialPropertyBlockControllerRandomValueSetter*
class CORDL_TYPE MaterialPropertyBlockControllerRandomValueSetter : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _materialPropertyBlockController, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__materialPropertyBlockController,
                      put = __cordl_internal_set__materialPropertyBlockController))::UnityW<::GlobalNamespace::MaterialPropertyBlockController> _materialPropertyBlockController;

  /// @brief Field _materialPropertyBlocks, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__materialPropertyBlocks,
                      put = __cordl_internal_set__materialPropertyBlocks))::ArrayW<::UnityEngine::MaterialPropertyBlock*, ::Array<::UnityEngine::MaterialPropertyBlock*>*> _materialPropertyBlocks;

  /// @brief Field _max, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__max, put = __cordl_internal_set__max)) float_t _max;

  /// @brief Field _min, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__min, put = __cordl_internal_set__min)) float_t _min;

  /// @brief Field _propertyId, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__propertyId, put = __cordl_internal_set__propertyId)) int32_t _propertyId;

  /// @brief Field _propertyName, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__propertyName, put = __cordl_internal_set__propertyName))::StringW _propertyName;

  /// @brief Method ApplyParams, addr 0x24f6ecc, size 0xbc, virtual false, abstract: false, final false
  inline void ApplyParams();

  static inline ::GlobalNamespace::MaterialPropertyBlockControllerRandomValueSetter* New_ctor();

  /// @brief Method OnValidate, addr 0x24f6f88, size 0x24, virtual false, abstract: false, final false
  inline void OnValidate();

  /// @brief Method RefreshPropertyId, addr 0x24f6eac, size 0x20, virtual false, abstract: false, final false
  inline void RefreshPropertyId();

  /// @brief Method Start, addr 0x24f6e88, size 0x24, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::UnityW<::GlobalNamespace::MaterialPropertyBlockController> const& __cordl_internal_get__materialPropertyBlockController() const;

  constexpr ::UnityW<::GlobalNamespace::MaterialPropertyBlockController>& __cordl_internal_get__materialPropertyBlockController();

  constexpr ::ArrayW<::UnityEngine::MaterialPropertyBlock*, ::Array<::UnityEngine::MaterialPropertyBlock*>*> const& __cordl_internal_get__materialPropertyBlocks() const;

  constexpr ::ArrayW<::UnityEngine::MaterialPropertyBlock*, ::Array<::UnityEngine::MaterialPropertyBlock*>*>& __cordl_internal_get__materialPropertyBlocks();

  constexpr float_t const& __cordl_internal_get__max() const;

  constexpr float_t& __cordl_internal_get__max();

  constexpr float_t const& __cordl_internal_get__min() const;

  constexpr float_t& __cordl_internal_get__min();

  constexpr int32_t const& __cordl_internal_get__propertyId() const;

  constexpr int32_t& __cordl_internal_get__propertyId();

  constexpr ::StringW const& __cordl_internal_get__propertyName() const;

  constexpr ::StringW& __cordl_internal_get__propertyName();

  constexpr void __cordl_internal_set__materialPropertyBlockController(::UnityW<::GlobalNamespace::MaterialPropertyBlockController> value);

  constexpr void __cordl_internal_set__materialPropertyBlocks(::ArrayW<::UnityEngine::MaterialPropertyBlock*, ::Array<::UnityEngine::MaterialPropertyBlock*>*> value);

  constexpr void __cordl_internal_set__max(float_t value);

  constexpr void __cordl_internal_set__min(float_t value);

  constexpr void __cordl_internal_set__propertyId(int32_t value);

  constexpr void __cordl_internal_set__propertyName(::StringW value);

  /// @brief Method .ctor, addr 0x24f6fac, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MaterialPropertyBlockControllerRandomValueSetter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MaterialPropertyBlockControllerRandomValueSetter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MaterialPropertyBlockControllerRandomValueSetter(MaterialPropertyBlockControllerRandomValueSetter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MaterialPropertyBlockControllerRandomValueSetter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MaterialPropertyBlockControllerRandomValueSetter(MaterialPropertyBlockControllerRandomValueSetter const&) = delete;

  /// @brief Field _materialPropertyBlockController, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MaterialPropertyBlockController> ____materialPropertyBlockController;

  /// @brief Field _propertyName, offset: 0x20, size: 0x8, def value: None
  ::StringW ____propertyName;

  /// @brief Field _min, offset: 0x28, size: 0x4, def value: None
  float_t ____min;

  /// @brief Field _max, offset: 0x2c, size: 0x4, def value: None
  float_t ____max;

  /// @brief Field _materialPropertyBlocks, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::MaterialPropertyBlock*, ::Array<::UnityEngine::MaterialPropertyBlock*>*> ____materialPropertyBlocks;

  /// @brief Field _propertyId, offset: 0x38, size: 0x4, def value: None
  int32_t ____propertyId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MaterialPropertyBlockControllerRandomValueSetter, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialPropertyBlockControllerRandomValueSetter, ____materialPropertyBlockController) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialPropertyBlockControllerRandomValueSetter, ____propertyName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialPropertyBlockControllerRandomValueSetter, ____min) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialPropertyBlockControllerRandomValueSetter, ____max) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialPropertyBlockControllerRandomValueSetter, ____materialPropertyBlocks) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialPropertyBlockControllerRandomValueSetter, ____propertyId) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MaterialPropertyBlockControllerRandomValueSetter);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MaterialPropertyBlockControllerRandomValueSetter*, "", "MaterialPropertyBlockControllerRandomValueSetter");
