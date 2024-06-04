#pragma once
// IWYU pragma private; include "GlobalNamespace/LightGroupSubsystem.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LightGroupSubsystem)
namespace GlobalNamespace {
class LightGroup;
}
// Forward declare root types
namespace GlobalNamespace {
class LightGroupSubsystem;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LightGroupSubsystem);
// Type: ::LightGroupSubsystem
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::LightGroupSubsystem*
class CORDL_TYPE LightGroupSubsystem : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _lightGroup, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__lightGroup, put = __cordl_internal_set__lightGroup))::UnityW<::GlobalNamespace::LightGroup> _lightGroup;

  __declspec(property(get = get_groupId)) int32_t groupId;

  __declspec(property(get = get_lightGroup))::UnityW<::GlobalNamespace::LightGroup> lightGroup;

  static inline ::GlobalNamespace::LightGroupSubsystem* New_ctor();

  /// @brief Method OnEnable, addr 0x26e0e2c, size 0x60, virtual false, abstract: false, final false
  inline void OnEnable();

  constexpr ::UnityW<::GlobalNamespace::LightGroup> const& __cordl_internal_get__lightGroup() const;

  constexpr ::UnityW<::GlobalNamespace::LightGroup>& __cordl_internal_get__lightGroup();

  constexpr void __cordl_internal_set__lightGroup(::UnityW<::GlobalNamespace::LightGroup> value);

  /// @brief Method .ctor, addr 0x26dcea0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_groupId, addr 0x26dd630, size 0x1c, virtual false, abstract: false, final false
  inline int32_t get_groupId();

  /// @brief Method get_lightGroup, addr 0x26e0e24, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::LightGroup> get_lightGroup();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightGroupSubsystem();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LightGroupSubsystem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightGroupSubsystem(LightGroupSubsystem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightGroupSubsystem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightGroupSubsystem(LightGroupSubsystem const&) = delete;

  /// @brief Field _lightGroup, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::LightGroup> ____lightGroup;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LightGroupSubsystem, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::LightGroupSubsystem, ____lightGroup) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LightGroupSubsystem);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightGroupSubsystem*, "", "LightGroupSubsystem");
