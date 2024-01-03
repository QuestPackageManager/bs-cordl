#pragma once
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
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225)), TypeDefinitionIndex(TypeDefinitionIndex(10252))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5276))
// CS Name: ::PlayerSpaceConvertor*
class CORDL_TYPE PlayerSpaceConvertor : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _worldToPlayerSpaceRotation, offset 0x18, size 0x10
  __declspec(property(get = __get__worldToPlayerSpaceRotation, put = __set__worldToPlayerSpaceRotation))::UnityEngine::Quaternion _worldToPlayerSpaceRotation;

  __declspec(property(get = get_worldToPlayerSpaceRotation))::UnityEngine::Quaternion worldToPlayerSpaceRotation;

  constexpr ::UnityEngine::Quaternion& __get__worldToPlayerSpaceRotation();

  constexpr ::UnityEngine::Quaternion const& __get__worldToPlayerSpaceRotation() const;

  constexpr void __set__worldToPlayerSpaceRotation(::UnityEngine::Quaternion value);

  /// @brief Method get_worldToPlayerSpaceRotation, addr 0x2260ce0, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion get_worldToPlayerSpaceRotation();

  /// @brief Method Start, addr 0x2260cec, size 0x38, virtual false, abstract: false, final false
  inline void Start();

  static inline ::GlobalNamespace::PlayerSpaceConvertor* New_ctor();

  /// @brief Method .ctor, addr 0x2260d24, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "PlayerSpaceConvertor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayerSpaceConvertor(PlayerSpaceConvertor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayerSpaceConvertor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayerSpaceConvertor(PlayerSpaceConvertor const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayerSpaceConvertor();

public:
  /// @brief Field _worldToPlayerSpaceRotation, offset: 0x18, size: 0x10, def value: None
  ::UnityEngine::Quaternion ____worldToPlayerSpaceRotation;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlayerSpaceConvertor, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSpaceConvertor, ____worldToPlayerSpaceRotation) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PlayerSpaceConvertor);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayerSpaceConvertor*, "", "PlayerSpaceConvertor");
