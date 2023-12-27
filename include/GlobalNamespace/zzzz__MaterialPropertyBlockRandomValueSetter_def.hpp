#pragma once
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
class Renderer;
}
namespace UnityEngine {
class MaterialPropertyBlock;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14570))
// CS Name: ::MaterialPropertyBlockRandomValueSetter*
class CORDL_TYPE MaterialPropertyBlockRandomValueSetter : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _renderers, offset 0x18, size 0x8
  __declspec(property(get = __get__renderers, put = __set__renderers))::ArrayW<::UnityEngine::Renderer*, ::Array<::UnityEngine::Renderer*>*> _renderers;

  /// @brief Field _propertyName, offset 0x20, size 0x8
  __declspec(property(get = __get__propertyName, put = __set__propertyName))::StringW _propertyName;

  /// @brief Field _minValue, offset 0x28, size 0x4
  __declspec(property(get = __get__minValue, put = __set__minValue)) float_t _minValue;

  /// @brief Field _maxValue, offset 0x2c, size 0x4
  __declspec(property(get = __get__maxValue, put = __set__maxValue)) float_t _maxValue;

  /// @brief Field _materialPropertyBlocks, offset 0x30, size 0x8
  __declspec(property(get = __get__materialPropertyBlocks,
                      put = __set__materialPropertyBlocks))::ArrayW<::UnityEngine::MaterialPropertyBlock*, ::Array<::UnityEngine::MaterialPropertyBlock*>*> _materialPropertyBlocks;

  /// @brief Field _propertyId, offset 0x38, size 0x4
  __declspec(property(get = __get__propertyId, put = __set__propertyId)) int32_t _propertyId;

  constexpr ::ArrayW<::UnityEngine::Renderer*, ::Array<::UnityEngine::Renderer*>*>& __get__renderers();

  constexpr ::ArrayW<::UnityEngine::Renderer*, ::Array<::UnityEngine::Renderer*>*> const& __get__renderers() const;

  constexpr void __set__renderers(::ArrayW<::UnityEngine::Renderer*, ::Array<::UnityEngine::Renderer*>*> value);

  constexpr ::StringW& __get__propertyName();

  constexpr ::StringW const& __get__propertyName() const;

  constexpr void __set__propertyName(::StringW value);

  constexpr float_t& __get__minValue();

  constexpr float_t const& __get__minValue() const;

  constexpr void __set__minValue(float_t value);

  constexpr float_t& __get__maxValue();

  constexpr float_t const& __get__maxValue() const;

  constexpr void __set__maxValue(float_t value);

  constexpr ::ArrayW<::UnityEngine::MaterialPropertyBlock*, ::Array<::UnityEngine::MaterialPropertyBlock*>*>& __get__materialPropertyBlocks();

  constexpr ::ArrayW<::UnityEngine::MaterialPropertyBlock*, ::Array<::UnityEngine::MaterialPropertyBlock*>*> const& __get__materialPropertyBlocks() const;

  constexpr void __set__materialPropertyBlocks(::ArrayW<::UnityEngine::MaterialPropertyBlock*, ::Array<::UnityEngine::MaterialPropertyBlock*>*> value);

  constexpr int32_t& __get__propertyId();

  constexpr int32_t const& __get__propertyId() const;

  constexpr void __set__propertyId(int32_t value);

  /// @brief Method Start addr 0x211520c size 0x4 virtual false final false
  inline void Start();

  /// @brief Method OnValidate addr 0x2115418 size 0x24 virtual false final false
  inline void OnValidate();

  /// @brief Method RefreshPropertyId addr 0x211543c size 0x20 virtual false final false
  inline void RefreshPropertyId();

  /// @brief Method ApplyParams addr 0x2115210 size 0x208 virtual false final false
  inline void ApplyParams();

  static inline ::GlobalNamespace::MaterialPropertyBlockRandomValueSetter* New_ctor();

  /// @brief Method .ctor addr 0x211545c size 0x10 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MaterialPropertyBlockRandomValueSetter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MaterialPropertyBlockRandomValueSetter(MaterialPropertyBlockRandomValueSetter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MaterialPropertyBlockRandomValueSetter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MaterialPropertyBlockRandomValueSetter(MaterialPropertyBlockRandomValueSetter const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MaterialPropertyBlockRandomValueSetter();

public:
  /// @brief Field _renderers, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Renderer*, ::Array<::UnityEngine::Renderer*>*> ____renderers;

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

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MaterialPropertyBlockRandomValueSetter);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MaterialPropertyBlockRandomValueSetter*, "", "MaterialPropertyBlockRandomValueSetter");
