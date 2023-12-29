#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(MarkSceneAsPersistent)
namespace GlobalNamespace {
class GameScenesManager;
}
// Forward declare root types
namespace GlobalNamespace {
class MarkSceneAsPersistent;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MarkSceneAsPersistent);
// Type: ::MarkSceneAsPersistent
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13932))
// CS Name: ::MarkSceneAsPersistent*
class CORDL_TYPE MarkSceneAsPersistent : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _gameScenesManager, offset 0x18, size 0x8
  __declspec(property(get = __get__gameScenesManager, put = __set__gameScenesManager))::GlobalNamespace::GameScenesManager* _gameScenesManager;

  constexpr ::GlobalNamespace::GameScenesManager*& __get__gameScenesManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameScenesManager*> const& __get__gameScenesManager() const;

  constexpr void __set__gameScenesManager(::GlobalNamespace::GameScenesManager* value);

  /// @brief Method Awake addr 0x1fa1190 size 0x54 virtual false final false
  inline void Awake();

  static inline ::GlobalNamespace::MarkSceneAsPersistent* New_ctor();

  /// @brief Method .ctor addr 0x1fa11e4 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MarkSceneAsPersistent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MarkSceneAsPersistent(MarkSceneAsPersistent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MarkSceneAsPersistent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MarkSceneAsPersistent(MarkSceneAsPersistent const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MarkSceneAsPersistent();

public:
  /// @brief Field _gameScenesManager, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::GameScenesManager* ____gameScenesManager;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MarkSceneAsPersistent, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MarkSceneAsPersistent, ____gameScenesManager) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MarkSceneAsPersistent);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MarkSceneAsPersistent*, "", "MarkSceneAsPersistent");
