#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(MissionNodeNameGenerator)
namespace GlobalNamespace {
class MissionNodesManager;
}
// Forward declare root types
namespace GlobalNamespace {
class MissionNodeNameGenerator;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MissionNodeNameGenerator);
// Type: ::MissionNodeNameGenerator
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MissionNodeNameGenerator*
class CORDL_TYPE MissionNodeNameGenerator : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _missionNodesManager, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__missionNodesManager, put = __cordl_internal_set__missionNodesManager))::UnityW<::GlobalNamespace::MissionNodesManager> _missionNodesManager;

  static inline ::GlobalNamespace::MissionNodeNameGenerator* New_ctor();

  constexpr ::UnityW<::GlobalNamespace::MissionNodesManager> const& __cordl_internal_get__missionNodesManager() const;

  constexpr ::UnityW<::GlobalNamespace::MissionNodesManager>& __cordl_internal_get__missionNodesManager();

  constexpr void __cordl_internal_set__missionNodesManager(::UnityW<::GlobalNamespace::MissionNodesManager> value);

  /// @brief Method .ctor, addr 0x24ca468, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MissionNodeNameGenerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MissionNodeNameGenerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MissionNodeNameGenerator(MissionNodeNameGenerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MissionNodeNameGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MissionNodeNameGenerator(MissionNodeNameGenerator const&) = delete;

  /// @brief Field _missionNodesManager, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MissionNodesManager> ____missionNodesManager;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MissionNodeNameGenerator, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionNodeNameGenerator, ____missionNodesManager) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MissionNodeNameGenerator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MissionNodeNameGenerator*, "", "MissionNodeNameGenerator");
