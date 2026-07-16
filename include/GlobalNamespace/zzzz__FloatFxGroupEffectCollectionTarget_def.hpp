#pragma once
// IWYU pragma private; include "GlobalNamespace/FloatFxGroupEffectCollectionTarget.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__FloatFxGroupEffectTarget_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(FloatFxGroupEffectCollectionTarget)
// Forward declare root types
namespace GlobalNamespace {
class FloatFxGroupEffectCollectionTarget;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::FloatFxGroupEffectCollectionTarget*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FloatFxGroupEffectCollectionTarget*, "", "FloatFxGroupEffectCollectionTarget");
// Dependencies FloatFxGroupEffectTarget
namespace GlobalNamespace {
// Is value type: false
// CS Name: FloatFxGroupEffectCollectionTarget
class CORDL_TYPE FloatFxGroupEffectCollectionTarget : public ::GlobalNamespace::FloatFxGroupEffectTarget {
public:
  // Declarations
  /// @brief Field _floatFxGroupEffectTargets, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__floatFxGroupEffectTargets, put = __cordl_internal_set__floatFxGroupEffectTargets)) ::ArrayW<::UnityW<::GlobalNamespace::FloatFxGroupEffectTarget>>
      _floatFxGroupEffectTargets;

  static inline ::GlobalNamespace::FloatFxGroupEffectCollectionTarget* New_ctor();

  /// @brief Method SetValue, addr 0x598ccbc, size 0x80, virtual true, abstract: false, final false
  inline void SetValue(int32_t groupId, int32_t elementId, float_t value);

  /// @brief Method TriggerValue, addr 0x598cd3c, size 0x80, virtual true, abstract: false, final false
  inline void TriggerValue(int32_t groupId, int32_t elementId, float_t value);

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::FloatFxGroupEffectTarget>> const& __cordl_internal_get__floatFxGroupEffectTargets() const;

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::FloatFxGroupEffectTarget>>& __cordl_internal_get__floatFxGroupEffectTargets();

  constexpr void __cordl_internal_set__floatFxGroupEffectTargets(::ArrayW<::UnityW<::GlobalNamespace::FloatFxGroupEffectTarget>> value);

  /// @brief Method .ctor, addr 0x598cdbc, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FloatFxGroupEffectCollectionTarget();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FloatFxGroupEffectCollectionTarget", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FloatFxGroupEffectCollectionTarget(FloatFxGroupEffectCollectionTarget&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FloatFxGroupEffectCollectionTarget", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FloatFxGroupEffectCollectionTarget(FloatFxGroupEffectCollectionTarget const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5828 };

  /// @brief Field _floatFxGroupEffectTargets, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::UnityW<::GlobalNamespace::FloatFxGroupEffectTarget>> ____floatFxGroupEffectTargets;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FloatFxGroupEffectCollectionTarget, ____floatFxGroupEffectTargets) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FloatFxGroupEffectCollectionTarget) == 0x28, "Size mismatch!");

} // namespace GlobalNamespace
