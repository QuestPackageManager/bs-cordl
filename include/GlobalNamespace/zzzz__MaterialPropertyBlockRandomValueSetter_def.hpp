#pragma once
// IWYU pragma private; include "GlobalNamespace/MaterialPropertyBlockRandomValueSetter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MaterialPropertyBlockRandomValueSetter)
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
class Renderer;
}
// Forward declare root types
namespace GlobalNamespace {
class MaterialPropertyBlockRandomValueSetter;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MaterialPropertyBlockRandomValueSetter);
// Type: ::MaterialPropertyBlockRandomValueSetter
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 60, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MaterialPropertyBlockRandomValueSetter*
class CORDL_TYPE MaterialPropertyBlockRandomValueSetter : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _materialPropertyBlocks, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__materialPropertyBlocks,
                      put = __cordl_internal_set__materialPropertyBlocks))::ArrayW<::UnityEngine::MaterialPropertyBlock*, ::Array<::UnityEngine::MaterialPropertyBlock*>*> _materialPropertyBlocks;

  /// @brief Field _maxValue, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__maxValue, put = __cordl_internal_set__maxValue)) float_t _maxValue;

  /// @brief Field _minValue, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__minValue, put = __cordl_internal_set__minValue)) float_t _minValue;

  /// @brief Field _propertyId, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__propertyId, put = __cordl_internal_set__propertyId)) int32_t _propertyId;

  /// @brief Field _propertyName, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__propertyName, put = __cordl_internal_set__propertyName))::StringW _propertyName;

  /// @brief Field _renderers, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__renderers, put = __cordl_internal_set__renderers))::ArrayW<::UnityW<::UnityEngine::Renderer>, ::Array<::UnityW<::UnityEngine::Renderer>>*> _renderers;

  /// @brief Method ApplyParams, addr 0x25252e0, size 0x208, virtual false, abstract: false, final false
  inline void ApplyParams();

  static inline ::GlobalNamespace::MaterialPropertyBlockRandomValueSetter* New_ctor();

  /// @brief Method OnValidate, addr 0x25254e8, size 0x24, virtual false, abstract: false, final false
  inline void OnValidate();

  /// @brief Method RefreshPropertyId, addr 0x252550c, size 0x20, virtual false, abstract: false, final false
  inline void RefreshPropertyId();

  /// @brief Method Start, addr 0x25252dc, size 0x4, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::ArrayW<::UnityEngine::MaterialPropertyBlock*, ::Array<::UnityEngine::MaterialPropertyBlock*>*> const& __cordl_internal_get__materialPropertyBlocks() const;

  constexpr ::ArrayW<::UnityEngine::MaterialPropertyBlock*, ::Array<::UnityEngine::MaterialPropertyBlock*>*>& __cordl_internal_get__materialPropertyBlocks();

  constexpr float_t const& __cordl_internal_get__maxValue() const;

  constexpr float_t& __cordl_internal_get__maxValue();

  constexpr float_t const& __cordl_internal_get__minValue() const;

  constexpr float_t& __cordl_internal_get__minValue();

  constexpr int32_t const& __cordl_internal_get__propertyId() const;

  constexpr int32_t& __cordl_internal_get__propertyId();

  constexpr ::StringW const& __cordl_internal_get__propertyName() const;

  constexpr ::StringW& __cordl_internal_get__propertyName();

  constexpr ::ArrayW<::UnityW<::UnityEngine::Renderer>, ::Array<::UnityW<::UnityEngine::Renderer>>*> const& __cordl_internal_get__renderers() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::Renderer>, ::Array<::UnityW<::UnityEngine::Renderer>>*>& __cordl_internal_get__renderers();

  constexpr void __cordl_internal_set__materialPropertyBlocks(::ArrayW<::UnityEngine::MaterialPropertyBlock*, ::Array<::UnityEngine::MaterialPropertyBlock*>*> value);

  constexpr void __cordl_internal_set__maxValue(float_t value);

  constexpr void __cordl_internal_set__minValue(float_t value);

  constexpr void __cordl_internal_set__propertyId(int32_t value);

  constexpr void __cordl_internal_set__propertyName(::StringW value);

  constexpr void __cordl_internal_set__renderers(::ArrayW<::UnityW<::UnityEngine::Renderer>, ::Array<::UnityW<::UnityEngine::Renderer>>*> value);

  /// @brief Method .ctor, addr 0x252552c, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MaterialPropertyBlockRandomValueSetter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MaterialPropertyBlockRandomValueSetter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MaterialPropertyBlockRandomValueSetter(MaterialPropertyBlockRandomValueSetter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MaterialPropertyBlockRandomValueSetter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MaterialPropertyBlockRandomValueSetter(MaterialPropertyBlockRandomValueSetter const&) = delete;

  /// @brief Field _renderers, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::Renderer>, ::Array<::UnityW<::UnityEngine::Renderer>>*> ____renderers;

  /// @brief Field _propertyName, offset: 0x20, size: 0x8, def value: None
  ::StringW ____propertyName;

  /// @brief Field _minValue, offset: 0x28, size: 0x4, def value: None
  float_t ____minValue;

  /// @brief Field _maxValue, offset: 0x2c, size: 0x4, def value: None
  float_t ____maxValue;

  /// @brief Field _materialPropertyBlocks, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::MaterialPropertyBlock*, ::Array<::UnityEngine::MaterialPropertyBlock*>*> ____materialPropertyBlocks;

  /// @brief Field _propertyId, offset: 0x38, size: 0x4, def value: None
  int32_t ____propertyId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MaterialPropertyBlockRandomValueSetter, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialPropertyBlockRandomValueSetter, ____renderers) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialPropertyBlockRandomValueSetter, ____propertyName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialPropertyBlockRandomValueSetter, ____minValue) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialPropertyBlockRandomValueSetter, ____maxValue) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialPropertyBlockRandomValueSetter, ____materialPropertyBlocks) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialPropertyBlockRandomValueSetter, ____propertyId) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MaterialPropertyBlockRandomValueSetter);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MaterialPropertyBlockRandomValueSetter*, "", "MaterialPropertyBlockRandomValueSetter");
