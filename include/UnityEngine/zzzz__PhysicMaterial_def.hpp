#pragma once
// IWYU pragma private; include "UnityEngine/PhysicMaterial.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__PhysicMaterialCombine_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(PhysicMaterial)
namespace UnityEngine {
struct PhysicMaterialCombine;
}
// Forward declare root types
namespace UnityEngine {
class PhysicMaterial;
}
// Write type traits
MARK_REF_T(::UnityEngine::PhysicMaterial*);
DEFINE_IL2CPP_CLASS(::UnityEngine::PhysicMaterial*, "UnityEngine", "PhysicMaterial");
// [NativeClass(null)]
// [Obsolete("PhysicMaterial has been renamed to PhysicsMaterial. Please use PhysicsMaterial instead. (UnityUpgradable) -> PhysicsMaterial", true)]
// Dependencies UnityEngine.Object, UnityEngine.PhysicMaterialCombine
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

  /// @brief Field <dynamicFriction>k__BackingField, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__dynamicFriction_k__BackingField, put = __cordl_internal_set__dynamicFriction_k__BackingField)) float_t _dynamicFriction_k__BackingField;

  /// @brief Field <frictionCombine>k__BackingField, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get__frictionCombine_k__BackingField,
                      put = __cordl_internal_set__frictionCombine_k__BackingField)) ::UnityEngine::PhysicMaterialCombine _frictionCombine_k__BackingField;

  /// @brief Field <staticFriction>k__BackingField, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__staticFriction_k__BackingField, put = __cordl_internal_set__staticFriction_k__BackingField)) float_t _staticFriction_k__BackingField;

  __declspec(property(get = get_bounceCombine, put = set_bounceCombine)) ::UnityEngine::PhysicMaterialCombine bounceCombine;

  __declspec(property(get = get_bounciness, put = set_bounciness)) float_t bounciness;

  /// @brief [Obsolete("Use PhysicMaterial.bounciness instead (UnityUpgradable) -> bounciness")]
  __declspec(property(get = get_bouncyness, put = set_bouncyness)) float_t bouncyness;

  __declspec(property(get = get_dynamicFriction, put = set_dynamicFriction)) float_t dynamicFriction;

  __declspec(property(get = get_frictionCombine, put = set_frictionCombine)) ::UnityEngine::PhysicMaterialCombine frictionCombine;

  __declspec(property(get = get_staticFriction, put = set_staticFriction)) float_t staticFriction;

  static inline ::UnityEngine::PhysicMaterial* New_ctor();

  static inline ::UnityEngine::PhysicMaterial* New_ctor(::StringW name);

  constexpr ::UnityEngine::PhysicMaterialCombine const& __cordl_internal_get__bounceCombine_k__BackingField() const;

  constexpr ::UnityEngine::PhysicMaterialCombine& __cordl_internal_get__bounceCombine_k__BackingField();

  constexpr float_t const& __cordl_internal_get__bounciness_k__BackingField() const;

  constexpr float_t& __cordl_internal_get__bounciness_k__BackingField();

  constexpr float_t const& __cordl_internal_get__bouncyness_k__BackingField() const;

  constexpr float_t& __cordl_internal_get__bouncyness_k__BackingField();

  constexpr float_t const& __cordl_internal_get__dynamicFriction_k__BackingField() const;

  constexpr float_t& __cordl_internal_get__dynamicFriction_k__BackingField();

  constexpr ::UnityEngine::PhysicMaterialCombine const& __cordl_internal_get__frictionCombine_k__BackingField() const;

  constexpr ::UnityEngine::PhysicMaterialCombine& __cordl_internal_get__frictionCombine_k__BackingField();

  constexpr float_t const& __cordl_internal_get__staticFriction_k__BackingField() const;

  constexpr float_t& __cordl_internal_get__staticFriction_k__BackingField();

  constexpr void __cordl_internal_set__bounceCombine_k__BackingField(::UnityEngine::PhysicMaterialCombine value);

  constexpr void __cordl_internal_set__bounciness_k__BackingField(float_t value);

  constexpr void __cordl_internal_set__bouncyness_k__BackingField(float_t value);

  constexpr void __cordl_internal_set__dynamicFriction_k__BackingField(float_t value);

  constexpr void __cordl_internal_set__frictionCombine_k__BackingField(::UnityEngine::PhysicMaterialCombine value);

  constexpr void __cordl_internal_set__staticFriction_k__BackingField(float_t value);

  /// @brief Method .ctor, addr 0x6fff5c4, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x6fff61c, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(::StringW name);

  /// [CompilerGenerated]
  /// @brief Method get_bounceCombine, addr 0x6fff6b4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::PhysicMaterialCombine get_bounceCombine();

  /// [CompilerGenerated]
  /// @brief Method get_bounciness, addr 0x6fff674, size 0x8, virtual false, abstract: false, final false
  inline float_t get_bounciness();

  /// [CompilerGenerated]
  /// @brief Method get_bouncyness, addr 0x6fff6c4, size 0x8, virtual false, abstract: false, final false
  inline float_t get_bouncyness();

  /// [CompilerGenerated]
  /// @brief Method get_dynamicFriction, addr 0x6fff684, size 0x8, virtual false, abstract: false, final false
  inline float_t get_dynamicFriction();

  /// [CompilerGenerated]
  /// @brief Method get_frictionCombine, addr 0x6fff6a4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::PhysicMaterialCombine get_frictionCombine();

  /// [CompilerGenerated]
  /// @brief Method get_staticFriction, addr 0x6fff694, size 0x8, virtual false, abstract: false, final false
  inline float_t get_staticFriction();

  /// [CompilerGenerated]
  /// @brief Method set_bounceCombine, addr 0x6fff6bc, size 0x8, virtual false, abstract: false, final false
  inline void set_bounceCombine(::UnityEngine::PhysicMaterialCombine value);

  /// [CompilerGenerated]
  /// @brief Method set_bounciness, addr 0x6fff67c, size 0x8, virtual false, abstract: false, final false
  inline void set_bounciness(float_t value);

  /// [CompilerGenerated]
  /// @brief Method set_bouncyness, addr 0x6fff6cc, size 0x8, virtual false, abstract: false, final false
  inline void set_bouncyness(float_t value);

  /// [CompilerGenerated]
  /// @brief Method set_dynamicFriction, addr 0x6fff68c, size 0x8, virtual false, abstract: false, final false
  inline void set_dynamicFriction(float_t value);

  /// [CompilerGenerated]
  /// @brief Method set_frictionCombine, addr 0x6fff6ac, size 0x8, virtual false, abstract: false, final false
  inline void set_frictionCombine(::UnityEngine::PhysicMaterialCombine value);

  /// [CompilerGenerated]
  /// @brief Method set_staticFriction, addr 0x6fff69c, size 0x8, virtual false, abstract: false, final false
  inline void set_staticFriction(float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PhysicMaterial();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PhysicMaterial", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PhysicMaterial(PhysicMaterial&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PhysicMaterial", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PhysicMaterial(PhysicMaterial const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19088 };

  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// [CompilerGenerated]
  /// @brief Field <bounciness>k__BackingField, offset: 0x18, size: 0x4, def value: None
  float_t ____bounciness_k__BackingField;

  /// [CompilerGenerated]
  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// @brief Field <dynamicFriction>k__BackingField, offset: 0x1c, size: 0x4, def value: None
  float_t ____dynamicFriction_k__BackingField;

  /// [CompilerGenerated]
  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// @brief Field <staticFriction>k__BackingField, offset: 0x20, size: 0x4, def value: None
  float_t ____staticFriction_k__BackingField;

  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// [CompilerGenerated]
  /// @brief Field <frictionCombine>k__BackingField, offset: 0x24, size: 0x4, def value: None
  ::UnityEngine::PhysicMaterialCombine ____frictionCombine_k__BackingField;

  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// [CompilerGenerated]
  /// @brief Field <bounceCombine>k__BackingField, offset: 0x28, size: 0x4, def value: None
  ::UnityEngine::PhysicMaterialCombine ____bounceCombine_k__BackingField;

  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// [CompilerGenerated]
  /// @brief Field <bouncyness>k__BackingField, offset: 0x2c, size: 0x4, def value: None
  float_t ____bouncyness_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::PhysicMaterial, ____bounciness_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::PhysicMaterial, ____dynamicFriction_k__BackingField) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::PhysicMaterial, ____staticFriction_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::PhysicMaterial, ____frictionCombine_k__BackingField) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::PhysicMaterial, ____bounceCombine_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::PhysicMaterial, ____bouncyness_k__BackingField) == 0x2c, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::PhysicMaterial) == 0x30, "Size mismatch!");

} // namespace UnityEngine
