#pragma once
// IWYU pragma private; include "GlobalNamespace/FloatFxGroupEffectCollectionTarget.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__FloatFxGroupEffectTarget_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(FloatFxGroupEffectCollectionTarget)
namespace GlobalNamespace {
class FloatFxGroupEffectTarget;
}
// Forward declare root types
namespace GlobalNamespace {
class FloatFxGroupEffectCollectionTarget;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::FloatFxGroupEffectCollectionTarget);
// Type: ::FloatFxGroupEffectCollectionTarget
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::FloatFxGroupEffectCollectionTarget*
class CORDL_TYPE FloatFxGroupEffectCollectionTarget : public ::GlobalNamespace::FloatFxGroupEffectTarget {
public:
  // Declarations
  /// @brief Field _floatFxGroupEffectTargets, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__floatFxGroupEffectTargets,
                      put = __cordl_internal_set__floatFxGroupEffectTargets))::ArrayW<::UnityW<::GlobalNamespace::FloatFxGroupEffectTarget>,
                                                                                      ::Array<::UnityW<::GlobalNamespace::FloatFxGroupEffectTarget>>*> _floatFxGroupEffectTargets;

  static inline ::GlobalNamespace::FloatFxGroupEffectCollectionTarget* New_ctor();

  /// @brief Method SetValue, addr 0x26f23d4, size 0x8c, virtual true, abstract: false, final false
  inline void SetValue(int32_t groupId, int32_t elementId, float_t value);

  /// @brief Method TriggerValue, addr 0x26f2460, size 0x8c, virtual true, abstract: false, final false
  inline void TriggerValue(int32_t groupId, int32_t elementId, float_t value);

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::FloatFxGroupEffectTarget>, ::Array<::UnityW<::GlobalNamespace::FloatFxGroupEffectTarget>>*> const&
  __cordl_internal_get__floatFxGroupEffectTargets() const;

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::FloatFxGroupEffectTarget>, ::Array<::UnityW<::GlobalNamespace::FloatFxGroupEffectTarget>>*>& __cordl_internal_get__floatFxGroupEffectTargets();

  constexpr void
  __cordl_internal_set__floatFxGroupEffectTargets(::ArrayW<::UnityW<::GlobalNamespace::FloatFxGroupEffectTarget>, ::Array<::UnityW<::GlobalNamespace::FloatFxGroupEffectTarget>>*> value);

  /// @brief Method .ctor, addr 0x26f24ec, size 0x8, virtual false, abstract: false, final false
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

  /// @brief Field _floatFxGroupEffectTargets, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::UnityW<::GlobalNamespace::FloatFxGroupEffectTarget>, ::Array<::UnityW<::GlobalNamespace::FloatFxGroupEffectTarget>>*> ____floatFxGroupEffectTargets;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FloatFxGroupEffectCollectionTarget, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::FloatFxGroupEffectCollectionTarget, ____floatFxGroupEffectTargets) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::FloatFxGroupEffectCollectionTarget);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FloatFxGroupEffectCollectionTarget*, "", "FloatFxGroupEffectCollectionTarget");
