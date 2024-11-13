#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerSpaceConvertor.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
CORDL_MODULE_EXPORT(PlayerSpaceConvertor)
namespace UnityEngine {
struct Quaternion;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayerSpaceConvertor;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PlayerSpaceConvertor);
// Type: ::PlayerSpaceConvertor
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PlayerSpaceConvertor*
class CORDL_TYPE PlayerSpaceConvertor : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _worldToPlayerSpaceRotation, offset 0x20, size 0x10
  __declspec(property(get = __cordl_internal_get__worldToPlayerSpaceRotation, put = __cordl_internal_set__worldToPlayerSpaceRotation)) ::UnityEngine::Quaternion _worldToPlayerSpaceRotation;

  __declspec(property(get = get_worldToPlayerSpaceRotation)) ::UnityEngine::Quaternion worldToPlayerSpaceRotation;

  static inline ::GlobalNamespace::PlayerSpaceConvertor* New_ctor();

  /// @brief Method Start, addr 0x3b82680, size 0x38, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get__worldToPlayerSpaceRotation() const;

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get__worldToPlayerSpaceRotation();

  constexpr void __cordl_internal_set__worldToPlayerSpaceRotation(::UnityEngine::Quaternion value);

  /// @brief Method .ctor, addr 0x3b826b8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_worldToPlayerSpaceRotation, addr 0x3b82674, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion get_worldToPlayerSpaceRotation();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayerSpaceConvertor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlayerSpaceConvertor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayerSpaceConvertor(PlayerSpaceConvertor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayerSpaceConvertor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayerSpaceConvertor(PlayerSpaceConvertor const&) = delete;

  /// @brief Field _worldToPlayerSpaceRotation, offset: 0x20, size: 0x10, def value: None
  ::UnityEngine::Quaternion ____worldToPlayerSpaceRotation;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4624 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlayerSpaceConvertor, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSpaceConvertor, ____worldToPlayerSpaceRotation) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PlayerSpaceConvertor);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayerSpaceConvertor*, "", "PlayerSpaceConvertor");
