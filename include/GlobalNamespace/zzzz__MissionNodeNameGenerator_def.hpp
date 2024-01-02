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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5546))
// CS Name: ::MissionNodeNameGenerator*
class CORDL_TYPE MissionNodeNameGenerator : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _missionNodesManager, offset 0x18, size 0x8
  __declspec(property(get = __get__missionNodesManager, put = __set__missionNodesManager))::GlobalNamespace::MissionNodesManager* _missionNodesManager;

  constexpr ::GlobalNamespace::MissionNodesManager*& __get__missionNodesManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MissionNodesManager*> const& __get__missionNodesManager() const;

  constexpr void __set__missionNodesManager(::GlobalNamespace::MissionNodesManager* value);

  static inline ::GlobalNamespace::MissionNodeNameGenerator* New_ctor();

  /// @brief Method .ctor, addr 0x22a088c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MissionNodeNameGenerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MissionNodeNameGenerator(MissionNodeNameGenerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MissionNodeNameGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MissionNodeNameGenerator(MissionNodeNameGenerator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MissionNodeNameGenerator();

public:
  /// @brief Field _missionNodesManager, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::MissionNodesManager* ____missionNodesManager;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MissionNodeNameGenerator, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionNodeNameGenerator, ____missionNodesManager) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MissionNodeNameGenerator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MissionNodeNameGenerator*, "", "MissionNodeNameGenerator");
