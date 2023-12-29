#pragma once
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5040))
// CS Name: ::LightGroupSubsystem*
class CORDL_TYPE LightGroupSubsystem : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _lightGroup, offset 0x18, size 0x8
  __declspec(property(get = __get__lightGroup, put = __set__lightGroup))::GlobalNamespace::LightGroup* _lightGroup;

  __declspec(property(get = get_groupId)) int32_t groupId;

  __declspec(property(get = get_lightGroup))::GlobalNamespace::LightGroup* lightGroup;

  constexpr ::GlobalNamespace::LightGroup*& __get__lightGroup();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LightGroup*> const& __get__lightGroup() const;

  constexpr void __set__lightGroup(::GlobalNamespace::LightGroup* value);

  /// @brief Method get_groupId addr 0x227194c size 0x1c virtual false final false
  inline int32_t get_groupId();

  /// @brief Method get_lightGroup addr 0x2271968 size 0x8 virtual false final false
  inline ::GlobalNamespace::LightGroup* get_lightGroup();

  /// @brief Method OnEnable addr 0x2271970 size 0x60 virtual false final false
  inline void OnEnable();

  static inline ::GlobalNamespace::LightGroupSubsystem* New_ctor();

  /// @brief Method .ctor addr 0x226fe2c size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "LightGroupSubsystem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightGroupSubsystem(LightGroupSubsystem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightGroupSubsystem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightGroupSubsystem(LightGroupSubsystem const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightGroupSubsystem();

public:
  /// @brief Field _lightGroup, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::LightGroup* ____lightGroup;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LightGroupSubsystem, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::LightGroupSubsystem, ____lightGroup) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LightGroupSubsystem);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightGroupSubsystem*, "", "LightGroupSubsystem");
