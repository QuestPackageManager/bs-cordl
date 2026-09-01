#pragma once
// IWYU pragma private; include "GlobalNamespace\FloatFxTargetsBucket.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__FloatFxGroupEffectTarget_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(FloatFxTargetsBucket)
namespace GlobalNamespace {
class FloatFxGroupEffectTarget;
}
// Forward declare root types
namespace GlobalNamespace {
class FloatFxTargetsBucket;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::FloatFxTargetsBucket*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FloatFxTargetsBucket*, "", "FloatFxTargetsBucket");
// Dependencies FloatFxGroupEffectTarget, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: FloatFxTargetsBucket
class CORDL_TYPE FloatFxTargetsBucket : public ::System::Object {
public:
  // Declarations
  /// @brief Field _targets, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__targets, put = __cordl_internal_set__targets)) ::ArrayW<::UnityW<::GlobalNamespace::FloatFxGroupEffectTarget>> _targets;

  __declspec(property(get = get_targets)) ::ArrayW<::UnityW<::GlobalNamespace::FloatFxGroupEffectTarget>> targets;

  static inline ::GlobalNamespace::FloatFxTargetsBucket* New_ctor();

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::FloatFxGroupEffectTarget>> const& __cordl_internal_get__targets() const;

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::FloatFxGroupEffectTarget>>& __cordl_internal_get__targets();

  constexpr void __cordl_internal_set__targets(::ArrayW<::UnityW<::GlobalNamespace::FloatFxGroupEffectTarget>> value);

  /// @brief Method .ctor, addr 0x5993200, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_targets, addr 0x59931f8, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::GlobalNamespace::FloatFxGroupEffectTarget>> get_targets();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FloatFxTargetsBucket();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FloatFxTargetsBucket", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FloatFxTargetsBucket(FloatFxTargetsBucket&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FloatFxTargetsBucket", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FloatFxTargetsBucket(FloatFxTargetsBucket const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5826 };

  /// @brief Field _targets, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::UnityW<::GlobalNamespace::FloatFxGroupEffectTarget>> ____targets;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FloatFxTargetsBucket, ____targets) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FloatFxTargetsBucket) == 0x18, "Size mismatch!");

} // namespace GlobalNamespace
