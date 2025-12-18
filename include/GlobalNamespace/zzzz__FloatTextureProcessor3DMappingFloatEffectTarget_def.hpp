#pragma once
// IWYU pragma private; include "GlobalNamespace/FloatTextureProcessor3DMappingFloatEffectTarget.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__FloatFxGroupEffectTarget_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FloatTextureProcessor3DMappingFloatEffectTarget)
namespace GlobalNamespace {
struct FloatTextureProcessor3DMappingFloatEffectTarget_TextureProcessor3DMapping;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace GlobalNamespace {
struct FloatTextureProcessor3DMappingFloatEffectTarget_TextureProcessor3DMapping;
}
namespace GlobalNamespace {
class FloatTextureProcessor3DMappingFloatEffectTarget;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::FloatTextureProcessor3DMappingFloatEffectTarget_TextureProcessor3DMapping);
MARK_REF_PTR_T(::GlobalNamespace::FloatTextureProcessor3DMappingFloatEffectTarget);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: FloatTextureProcessor3DMappingFloatEffectTarget/TextureProcessor3DMapping
struct CORDL_TYPE FloatTextureProcessor3DMappingFloatEffectTarget_TextureProcessor3DMapping {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __FloatTextureProcessor3DMappingFloatEffectTarget_TextureProcessor3DMapping_Unwrapped
  enum struct __FloatTextureProcessor3DMappingFloatEffectTarget_TextureProcessor3DMapping_Unwrapped : int32_t {
    __E_XYZDisplacementScale = static_cast<int32_t>(0x0),
    __E_RadialDisplacementScale = static_cast<int32_t>(0x1),
    __E_MaxScale = static_cast<int32_t>(0x2),
    __E_RotationMultiplier = static_cast<int32_t>(0x3),
    __E_EmissiveModulationStrength = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __FloatTextureProcessor3DMappingFloatEffectTarget_TextureProcessor3DMapping_Unwrapped() const noexcept {
    return static_cast<__FloatTextureProcessor3DMappingFloatEffectTarget_TextureProcessor3DMapping_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr FloatTextureProcessor3DMappingFloatEffectTarget_TextureProcessor3DMapping();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr FloatTextureProcessor3DMappingFloatEffectTarget_TextureProcessor3DMapping(int32_t value__) noexcept;

  /// @brief Field EmissiveModulationStrength value: I32(4)
  static ::GlobalNamespace::FloatTextureProcessor3DMappingFloatEffectTarget_TextureProcessor3DMapping const EmissiveModulationStrength;

  /// @brief Field MaxScale value: I32(2)
  static ::GlobalNamespace::FloatTextureProcessor3DMappingFloatEffectTarget_TextureProcessor3DMapping const MaxScale;

  /// @brief Field RadialDisplacementScale value: I32(1)
  static ::GlobalNamespace::FloatTextureProcessor3DMappingFloatEffectTarget_TextureProcessor3DMapping const RadialDisplacementScale;

  /// @brief Field RotationMultiplier value: I32(3)
  static ::GlobalNamespace::FloatTextureProcessor3DMappingFloatEffectTarget_TextureProcessor3DMapping const RotationMultiplier;

  /// @brief Field XYZDisplacementScale value: I32(0)
  static ::GlobalNamespace::FloatTextureProcessor3DMappingFloatEffectTarget_TextureProcessor3DMapping const XYZDisplacementScale;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5844 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FloatTextureProcessor3DMappingFloatEffectTarget_TextureProcessor3DMapping, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FloatTextureProcessor3DMappingFloatEffectTarget_TextureProcessor3DMapping, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies FloatFxGroupEffectTarget, FloatTextureProcessor3DMappingFloatEffectTarget::TextureProcessor3DMapping, UnityEngine.Vector2
namespace GlobalNamespace {
// Is value type: false
// CS Name: FloatTextureProcessor3DMappingFloatEffectTarget
class CORDL_TYPE FloatTextureProcessor3DMappingFloatEffectTarget : public ::GlobalNamespace::FloatFxGroupEffectTarget {
public:
  // Declarations
  using TextureProcessor3DMapping = ::GlobalNamespace::FloatTextureProcessor3DMappingFloatEffectTarget_TextureProcessor3DMapping;

  /// @brief Field _invertAxis, offset 0x44, size 0x1
  __declspec(property(get = __cordl_internal_get__invertAxis, put = __cordl_internal_set__invertAxis)) bool _invertAxis;

  /// @brief Field _invertAxisSlave, offset 0x45, size 0x1
  __declspec(property(get = __cordl_internal_get__invertAxisSlave, put = __cordl_internal_set__invertAxisSlave)) bool _invertAxisSlave;

  /// @brief Field _mapping, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__mapping, put = __cordl_internal_set__mapping)) ::GlobalNamespace::FloatTextureProcessor3DMappingFloatEffectTarget_TextureProcessor3DMapping _mapping;

  /// @brief Field _material, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__material, put = __cordl_internal_set__material)) ::UnityW<::UnityEngine::Material> _material;

  /// @brief Field _propertyStrings, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__propertyStrings, put = setStaticF__propertyStrings)) ::ArrayW<::StringW, ::Array<::StringW>*> _propertyStrings;

  /// @brief Field _slaveMaterial, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__slaveMaterial, put = __cordl_internal_set__slaveMaterial)) ::UnityW<::UnityEngine::Material> _slaveMaterial;

  /// @brief Field _useSlave, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get__useSlave, put = __cordl_internal_set__useSlave)) bool _useSlave;

  /// @brief Field _valueBounds, offset 0x3c, size 0x8
  __declspec(property(get = __cordl_internal_get__valueBounds, put = __cordl_internal_set__valueBounds)) ::UnityEngine::Vector2 _valueBounds;

  static inline ::GlobalNamespace::FloatTextureProcessor3DMappingFloatEffectTarget* New_ctor();

  /// @brief Method SetFloat, addr 0x57e18fc, size 0x208, virtual false, abstract: false, final false
  inline void SetFloat(float_t value);

  /// @brief Method SetValue, addr 0x57e18f8, size 0x4, virtual true, abstract: false, final false
  inline void SetValue(int32_t groupId, int32_t elementId, float_t value);

  /// @brief Method TriggerValue, addr 0x57e1b04, size 0x4, virtual true, abstract: false, final false
  inline void TriggerValue(int32_t groupId, int32_t elementId, float_t value);

  constexpr bool const& __cordl_internal_get__invertAxis() const;

  constexpr bool& __cordl_internal_get__invertAxis();

  constexpr bool const& __cordl_internal_get__invertAxisSlave() const;

  constexpr bool& __cordl_internal_get__invertAxisSlave();

  constexpr ::GlobalNamespace::FloatTextureProcessor3DMappingFloatEffectTarget_TextureProcessor3DMapping const& __cordl_internal_get__mapping() const;

  constexpr ::GlobalNamespace::FloatTextureProcessor3DMappingFloatEffectTarget_TextureProcessor3DMapping& __cordl_internal_get__mapping();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__material() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__material();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__slaveMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__slaveMaterial();

  constexpr bool const& __cordl_internal_get__useSlave() const;

  constexpr bool& __cordl_internal_get__useSlave();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get__valueBounds() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get__valueBounds();

  constexpr void __cordl_internal_set__invertAxis(bool value);

  constexpr void __cordl_internal_set__invertAxisSlave(bool value);

  constexpr void __cordl_internal_set__mapping(::GlobalNamespace::FloatTextureProcessor3DMappingFloatEffectTarget_TextureProcessor3DMapping value);

  constexpr void __cordl_internal_set__material(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set__slaveMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set__useSlave(bool value);

  constexpr void __cordl_internal_set__valueBounds(::UnityEngine::Vector2 value);

  /// @brief Method .ctor, addr 0x57e1b08, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::ArrayW<::StringW, ::Array<::StringW>*> getStaticF__propertyStrings();

  static inline void setStaticF__propertyStrings(::ArrayW<::StringW, ::Array<::StringW>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FloatTextureProcessor3DMappingFloatEffectTarget();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FloatTextureProcessor3DMappingFloatEffectTarget", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FloatTextureProcessor3DMappingFloatEffectTarget(FloatTextureProcessor3DMappingFloatEffectTarget&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FloatTextureProcessor3DMappingFloatEffectTarget", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FloatTextureProcessor3DMappingFloatEffectTarget(FloatTextureProcessor3DMappingFloatEffectTarget const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5845 };

  /// @brief Field _material, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ____material;

  /// @brief Field _useSlave, offset: 0x28, size: 0x1, def value: None
  bool ____useSlave;

  /// @brief Field _slaveMaterial, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ____slaveMaterial;

  /// @brief Field _mapping, offset: 0x38, size: 0x4, def value: None
  ::GlobalNamespace::FloatTextureProcessor3DMappingFloatEffectTarget_TextureProcessor3DMapping ____mapping;

  /// @brief Field _valueBounds, offset: 0x3c, size: 0x8, def value: None
  ::UnityEngine::Vector2 ____valueBounds;

  /// @brief Field _invertAxis, offset: 0x44, size: 0x1, def value: None
  bool ____invertAxis;

  /// @brief Field _invertAxisSlave, offset: 0x45, size: 0x1, def value: None
  bool ____invertAxisSlave;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FloatTextureProcessor3DMappingFloatEffectTarget, ____material) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FloatTextureProcessor3DMappingFloatEffectTarget, ____useSlave) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FloatTextureProcessor3DMappingFloatEffectTarget, ____slaveMaterial) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FloatTextureProcessor3DMappingFloatEffectTarget, ____mapping) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FloatTextureProcessor3DMappingFloatEffectTarget, ____valueBounds) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FloatTextureProcessor3DMappingFloatEffectTarget, ____invertAxis) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FloatTextureProcessor3DMappingFloatEffectTarget, ____invertAxisSlave) == 0x45, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FloatTextureProcessor3DMappingFloatEffectTarget, 0x48>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FloatTextureProcessor3DMappingFloatEffectTarget_TextureProcessor3DMapping, "", "FloatTextureProcessor3DMappingFloatEffectTarget/TextureProcessor3DMapping");
NEED_NO_BOX(::GlobalNamespace::FloatTextureProcessor3DMappingFloatEffectTarget);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FloatTextureProcessor3DMappingFloatEffectTarget*, "", "FloatTextureProcessor3DMappingFloatEffectTarget");
