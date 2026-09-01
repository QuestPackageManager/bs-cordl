#pragma once
// IWYU pragma private; include "GlobalNamespace\ColorTargetsBucket.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__LightWithIdMonoBehaviour_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(ColorTargetsBucket)
namespace GlobalNamespace {
class LightWithIdMonoBehaviour;
}
// Forward declare root types
namespace GlobalNamespace {
class ColorTargetsBucket;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ColorTargetsBucket*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ColorTargetsBucket*, "", "ColorTargetsBucket");
// Dependencies LightWithIdMonoBehaviour, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ColorTargetsBucket
class CORDL_TYPE ColorTargetsBucket : public ::System::Object {
public:
  // Declarations
  /// @brief Field _targets, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__targets, put = __cordl_internal_set__targets)) ::ArrayW<::UnityW<::GlobalNamespace::LightWithIdMonoBehaviour>> _targets;

  __declspec(property(get = get_targets)) ::ArrayW<::UnityW<::GlobalNamespace::LightWithIdMonoBehaviour>> targets;

  static inline ::GlobalNamespace::ColorTargetsBucket* New_ctor();

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::LightWithIdMonoBehaviour>> const& __cordl_internal_get__targets() const;

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::LightWithIdMonoBehaviour>>& __cordl_internal_get__targets();

  constexpr void __cordl_internal_set__targets(::ArrayW<::UnityW<::GlobalNamespace::LightWithIdMonoBehaviour>> value);

  /// @brief Method .ctor, addr 0x599320c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_targets, addr 0x5993204, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::GlobalNamespace::LightWithIdMonoBehaviour>> get_targets();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ColorTargetsBucket();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ColorTargetsBucket", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ColorTargetsBucket(ColorTargetsBucket&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ColorTargetsBucket", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ColorTargetsBucket(ColorTargetsBucket const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5827 };

  /// @brief Field _targets, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::UnityW<::GlobalNamespace::LightWithIdMonoBehaviour>> ____targets;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ColorTargetsBucket, ____targets) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ColorTargetsBucket) == 0x18, "Size mismatch!");

} // namespace GlobalNamespace
