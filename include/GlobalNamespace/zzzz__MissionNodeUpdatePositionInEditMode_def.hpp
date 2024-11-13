#pragma once
// IWYU pragma private; include "GlobalNamespace/MissionNodeUpdatePositionInEditMode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(MissionNodeUpdatePositionInEditMode)
namespace GlobalNamespace {
class MissionNodeConnection;
}
// Forward declare root types
namespace GlobalNamespace {
class MissionNodeUpdatePositionInEditMode;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MissionNodeUpdatePositionInEditMode);
// Type: ::MissionNodeUpdatePositionInEditMode
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MissionNodeUpdatePositionInEditMode*
class CORDL_TYPE MissionNodeUpdatePositionInEditMode : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _missionNodeConnection, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__missionNodeConnection, put = __cordl_internal_set__missionNodeConnection)) ::UnityW<::GlobalNamespace::MissionNodeConnection> _missionNodeConnection;

  static inline ::GlobalNamespace::MissionNodeUpdatePositionInEditMode* New_ctor();

  constexpr ::UnityW<::GlobalNamespace::MissionNodeConnection> const& __cordl_internal_get__missionNodeConnection() const;

  constexpr ::UnityW<::GlobalNamespace::MissionNodeConnection>& __cordl_internal_get__missionNodeConnection();

  constexpr void __cordl_internal_set__missionNodeConnection(::UnityW<::GlobalNamespace::MissionNodeConnection> value);

  /// @brief Method .ctor, addr 0x3ba5b88, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MissionNodeUpdatePositionInEditMode();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MissionNodeUpdatePositionInEditMode", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MissionNodeUpdatePositionInEditMode(MissionNodeUpdatePositionInEditMode&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MissionNodeUpdatePositionInEditMode", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MissionNodeUpdatePositionInEditMode(MissionNodeUpdatePositionInEditMode const&) = delete;

  /// @brief Field _missionNodeConnection, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MissionNodeConnection> ____missionNodeConnection;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4804 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MissionNodeUpdatePositionInEditMode, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionNodeUpdatePositionInEditMode, ____missionNodeConnection) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MissionNodeUpdatePositionInEditMode);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MissionNodeUpdatePositionInEditMode*, "", "MissionNodeUpdatePositionInEditMode");
