#pragma once
// IWYU pragma private; include "UnityEngine/PhysicMaterial.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__PhysicMaterialCombine_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(PhysicMaterial)
namespace UnityEngine {
struct PhysicMaterialCombine;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
class PhysicMaterial;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::PhysicMaterial);
// Dependencies UnityEngine.Object, UnityEngine.PhysicMaterialCombine, UnityEngine.Vector3
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.PhysicMaterial
class CORDL_TYPE PhysicMaterial : public ::UnityEngine::Object {
public:
  // Declarations
  /// @brief Field <bounceCombine>k__BackingField, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__bounceCombine_k__BackingField,
                      put = __cordl_internal_set__bounceCombine_k__BackingField)) ::UnityEngine::PhysicMaterialCombine _bounceCombine_k__BackingField;

  /// @brief Field <bounciness>k__BackingField, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__bounciness_k__BackingField, put = __cordl_internal_set__bounciness_k__BackingField)) float_t _bounciness_k__BackingField;

  /// @brief Field <bouncyness>k__BackingField, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__bouncyness_k__BackingField, put = __cordl_internal_set__bouncyness_k__BackingField)) float_t _bouncyness_k__BackingField;

  /// @brief Field <dynamicFriction2>k__BackingField, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get__dynamicFriction2_k__BackingField, put = __cordl_internal_set__dynamicFriction2_k__BackingField)) float_t _dynamicFriction2_k__BackingField;

  /// @brief Field <dynamicFriction>k__BackingField, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__dynamicFriction_k__BackingField, put = __cordl_internal_set__dynamicFriction_k__BackingField)) float_t _dynamicFriction_k__BackingField;

  /// @brief Field <frictionCombine>k__BackingField, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get__frictionCombine_k__BackingField,
                      put = __cordl_internal_set__frictionCombine_k__BackingField)) ::UnityEngine::PhysicMaterialCombine _frictionCombine_k__BackingField;

  /// @brief Field <frictionDirection2>k__BackingField, offset 0x30, size 0xc
  __declspec(property(get = __cordl_internal_get__frictionDirection2_k__BackingField,
                      put = __cordl_internal_set__frictionDirection2_k__BackingField)) ::UnityEngine::Vector3 _frictionDirection2_k__BackingField;

  /// @brief Field <frictionDirection>k__BackingField, offset 0x44, size 0xc
  __declspec(property(get = __cordl_internal_get__frictionDirection_k__BackingField,
                      put = __cordl_internal_set__frictionDirection_k__BackingField)) ::UnityEngine::Vector3 _frictionDirection_k__BackingField;

  /// @brief Field <staticFriction2>k__BackingField, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__staticFriction2_k__BackingField, put = __cordl_internal_set__staticFriction2_k__BackingField)) float_t _staticFriction2_k__BackingField;

  /// @brief Field <staticFriction>k__BackingField, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__staticFriction_k__BackingField, put = __cordl_internal_set__staticFriction_k__BackingField)) float_t _staticFriction_k__BackingField;

  __declspec(property(get = get_bounceCombine, put = set_bounceCombine)) ::UnityEngine::PhysicMaterialCombine bounceCombine;

  __declspec(property(get = get_bounciness, put = set_bounciness)) float_t bounciness;

  __declspec(property(get = get_bouncyness, put = set_bouncyness)) float_t bouncyness;

  __declspec(property(get = get_dynamicFriction, put = set_dynamicFriction)) float_t dynamicFriction;

  __declspec(property(get = get_dynamicFriction2, put = set_dynamicFriction2)) float_t dynamicFriction2;

  __declspec(property(get = get_frictionCombine, put = set_frictionCombine)) ::UnityEngine::PhysicMaterialCombine frictionCombine;

  __declspec(property(get = get_frictionDirection, put = set_frictionDirection)) ::UnityEngine::Vector3 frictionDirection;

  __declspec(property(get = get_frictionDirection2, put = set_frictionDirection2)) ::UnityEngine::Vector3 frictionDirection2;

  __declspec(property(get = get_staticFriction, put = set_staticFriction)) float_t staticFriction;

  __declspec(property(get = get_staticFriction2, put = set_staticFriction2)) float_t staticFriction2;

  static inline ::UnityEngine::PhysicMaterial* New_ctor();

  static inline ::UnityEngine::PhysicMaterial* New_ctor(::StringW name);

  constexpr ::UnityEngine::PhysicMaterialCombine const& __cordl_internal_get__bounceCombine_k__BackingField() const;

  constexpr ::UnityEngine::PhysicMaterialCombine& __cordl_internal_get__bounceCombine_k__BackingField();

  constexpr float_t const& __cordl_internal_get__bounciness_k__BackingField() const;

  constexpr float_t& __cordl_internal_get__bounciness_k__BackingField();

  constexpr float_t const& __cordl_internal_get__bouncyness_k__BackingField() const;

  constexpr float_t& __cordl_internal_get__bouncyness_k__BackingField();

  constexpr float_t const& __cordl_internal_get__dynamicFriction2_k__BackingField() const;

  constexpr float_t& __cordl_internal_get__dynamicFriction2_k__BackingField();

  constexpr float_t const& __cordl_internal_get__dynamicFriction_k__BackingField() const;

  constexpr float_t& __cordl_internal_get__dynamicFriction_k__BackingField();

  constexpr ::UnityEngine::PhysicMaterialCombine const& __cordl_internal_get__frictionCombine_k__BackingField() const;

  constexpr ::UnityEngine::PhysicMaterialCombine& __cordl_internal_get__frictionCombine_k__BackingField();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__frictionDirection2_k__BackingField() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__frictionDirection2_k__BackingField();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__frictionDirection_k__BackingField() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__frictionDirection_k__BackingField();

  constexpr float_t const& __cordl_internal_get__staticFriction2_k__BackingField() const;

  constexpr float_t& __cordl_internal_get__staticFriction2_k__BackingField();

  constexpr float_t const& __cordl_internal_get__staticFriction_k__BackingField() const;

  constexpr float_t& __cordl_internal_get__staticFriction_k__BackingField();

  constexpr void __cordl_internal_set__bounceCombine_k__BackingField(::UnityEngine::PhysicMaterialCombine value);

  constexpr void __cordl_internal_set__bounciness_k__BackingField(float_t value);

  constexpr void __cordl_internal_set__bouncyness_k__BackingField(float_t value);

  constexpr void __cordl_internal_set__dynamicFriction2_k__BackingField(float_t value);

  constexpr void __cordl_internal_set__dynamicFriction_k__BackingField(float_t value);

  constexpr void __cordl_internal_set__frictionCombine_k__BackingField(::UnityEngine::PhysicMaterialCombine value);

  constexpr void __cordl_internal_set__frictionDirection2_k__BackingField(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__frictionDirection_k__BackingField(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__staticFriction2_k__BackingField(float_t value);

  constexpr void __cordl_internal_set__staticFriction_k__BackingField(float_t value);

  /// @brief Method .ctor, addr 0x695f874, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x695f8cc, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(::StringW name);

  /// @brief Method get_bounceCombine, addr 0x695f964, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::PhysicMaterialCombine get_bounceCombine();

  /// @brief Method get_bounciness, addr 0x695f924, size 0x8, virtual false, abstract: false, final false
  inline float_t get_bounciness();

  /// @brief Method get_bouncyness, addr 0x695f974, size 0x8, virtual false, abstract: false, final false
  inline float_t get_bouncyness();

  /// @brief Method get_dynamicFriction, addr 0x695f934, size 0x8, virtual false, abstract: false, final false
  inline float_t get_dynamicFriction();

  /// @brief Method get_dynamicFriction2, addr 0x695f99c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_dynamicFriction2();

  /// @brief Method get_frictionCombine, addr 0x695f954, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::PhysicMaterialCombine get_frictionCombine();

  /// @brief Method get_frictionDirection, addr 0x695f9bc, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_frictionDirection();

  /// @brief Method get_frictionDirection2, addr 0x695f984, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_frictionDirection2();

  /// @brief Method get_staticFriction, addr 0x695f944, size 0x8, virtual false, abstract: false, final false
  inline float_t get_staticFriction();

  /// @brief Method get_staticFriction2, addr 0x695f9ac, size 0x8, virtual false, abstract: false, final false
  inline float_t get_staticFriction2();

  /// @brief Method set_bounceCombine, addr 0x695f96c, size 0x8, virtual false, abstract: false, final false
  inline void set_bounceCombine(::UnityEngine::PhysicMaterialCombine value);

  /// @brief Method set_bounciness, addr 0x695f92c, size 0x8, virtual false, abstract: false, final false
  inline void set_bounciness(float_t value);

  /// @brief Method set_bouncyness, addr 0x695f97c, size 0x8, virtual false, abstract: false, final false
  inline void set_bouncyness(float_t value);

  /// @brief Method set_dynamicFriction, addr 0x695f93c, size 0x8, virtual false, abstract: false, final false
  inline void set_dynamicFriction(float_t value);

  /// @brief Method set_dynamicFriction2, addr 0x695f9a4, size 0x8, virtual false, abstract: false, final false
  inline void set_dynamicFriction2(float_t value);

  /// @brief Method set_frictionCombine, addr 0x695f95c, size 0x8, virtual false, abstract: false, final false
  inline void set_frictionCombine(::UnityEngine::PhysicMaterialCombine value);

  /// @brief Method set_frictionDirection, addr 0x695f9c8, size 0xc, virtual false, abstract: false, final false
  inline void set_frictionDirection(::UnityEngine::Vector3 value);

  /// @brief Method set_frictionDirection2, addr 0x695f990, size 0xc, virtual false, abstract: false, final false
  inline void set_frictionDirection2(::UnityEngine::Vector3 value);

  /// @brief Method set_staticFriction, addr 0x695f94c, size 0x8, virtual false, abstract: false, final false
  inline void set_staticFriction(float_t value);

  /// @brief Method set_staticFriction2, addr 0x695f9b4, size 0x8, virtual false, abstract: false, final false
  inline void set_staticFriction2(float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PhysicMaterial();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PhysicMaterial", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PhysicMaterial(PhysicMaterial&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PhysicMaterial", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PhysicMaterial(PhysicMaterial const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18625 };

  /// @brief Field <bounciness>k__BackingField, offset: 0x18, size: 0x4, def value: None
  float_t ____bounciness_k__BackingField;

  /// @brief Field <dynamicFriction>k__BackingField, offset: 0x1c, size: 0x4, def value: None
  float_t ____dynamicFriction_k__BackingField;

  /// @brief Field <staticFriction>k__BackingField, offset: 0x20, size: 0x4, def value: None
  float_t ____staticFriction_k__BackingField;

  /// @brief Field <frictionCombine>k__BackingField, offset: 0x24, size: 0x4, def value: None
  ::UnityEngine::PhysicMaterialCombine ____frictionCombine_k__BackingField;

  /// @brief Field <bounceCombine>k__BackingField, offset: 0x28, size: 0x4, def value: None
  ::UnityEngine::PhysicMaterialCombine ____bounceCombine_k__BackingField;

  /// @brief Field <bouncyness>k__BackingField, offset: 0x2c, size: 0x4, def value: None
  float_t ____bouncyness_k__BackingField;

  /// @brief Field <frictionDirection2>k__BackingField, offset: 0x30, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____frictionDirection2_k__BackingField;

  /// @brief Field <dynamicFriction2>k__BackingField, offset: 0x3c, size: 0x4, def value: None
  float_t ____dynamicFriction2_k__BackingField;

  /// @brief Field <staticFriction2>k__BackingField, offset: 0x40, size: 0x4, def value: None
  float_t ____staticFriction2_k__BackingField;

  /// @brief Field <frictionDirection>k__BackingField, offset: 0x44, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____frictionDirection_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::PhysicMaterial, ____bounciness_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::PhysicMaterial, ____dynamicFriction_k__BackingField) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::PhysicMaterial, ____staticFriction_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::PhysicMaterial, ____frictionCombine_k__BackingField) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::PhysicMaterial, ____bounceCombine_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::PhysicMaterial, ____bouncyness_k__BackingField) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::PhysicMaterial, ____frictionDirection2_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::PhysicMaterial, ____dynamicFriction2_k__BackingField) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::PhysicMaterial, ____staticFriction2_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::PhysicMaterial, ____frictionDirection_k__BackingField) == 0x44, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::PhysicMaterial, 0x50>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::PhysicMaterial);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PhysicMaterial*, "UnityEngine", "PhysicMaterial");
