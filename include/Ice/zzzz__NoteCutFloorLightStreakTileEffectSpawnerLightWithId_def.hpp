#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__LightWithIdMonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(NoteCutFloorLightStreakTileEffectSpawnerLightWithId)
namespace Ice {
class NoteCutFloorLightStreakTileEffectSpawner;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace Ice {
class NoteCutFloorLightStreakTileEffectSpawnerLightWithId;
}
// Write type traits
MARK_REF_PTR_T(::Ice::NoteCutFloorLightStreakTileEffectSpawnerLightWithId);
// Type: Ice::NoteCutFloorLightStreakTileEffectSpawnerLightWithId
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Ice {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14542))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16172))
// CS Name: ::Ice::NoteCutFloorLightStreakTileEffectSpawnerLightWithId*
class CORDL_TYPE NoteCutFloorLightStreakTileEffectSpawnerLightWithId : public ::GlobalNamespace::LightWithIdMonoBehaviour {
public:
  // Declarations
  /// @brief Field _noteCutFloorLightStreakTileEffectSpawner, offset 0x30, size 0x8
  __declspec(property(get = __get__noteCutFloorLightStreakTileEffectSpawner,
                      put = __set__noteCutFloorLightStreakTileEffectSpawner))::Ice::NoteCutFloorLightStreakTileEffectSpawner* _noteCutFloorLightStreakTileEffectSpawner;

  constexpr ::Ice::NoteCutFloorLightStreakTileEffectSpawner*& __get__noteCutFloorLightStreakTileEffectSpawner();

  constexpr ::cordl_internals::to_const_pointer<::Ice::NoteCutFloorLightStreakTileEffectSpawner*> const& __get__noteCutFloorLightStreakTileEffectSpawner() const;

  constexpr void __set__noteCutFloorLightStreakTileEffectSpawner(::Ice::NoteCutFloorLightStreakTileEffectSpawner* value);

  /// @brief Method ColorWasSet, addr 0x12a0050, size 0x20, virtual true, abstract: false, final false
  inline void ColorWasSet(::UnityEngine::Color color);

  static inline ::Ice::NoteCutFloorLightStreakTileEffectSpawnerLightWithId* New_ctor();

  /// @brief Method .ctor, addr 0x12a0070, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "NoteCutFloorLightStreakTileEffectSpawnerLightWithId", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NoteCutFloorLightStreakTileEffectSpawnerLightWithId(NoteCutFloorLightStreakTileEffectSpawnerLightWithId&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NoteCutFloorLightStreakTileEffectSpawnerLightWithId", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NoteCutFloorLightStreakTileEffectSpawnerLightWithId(NoteCutFloorLightStreakTileEffectSpawnerLightWithId const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NoteCutFloorLightStreakTileEffectSpawnerLightWithId();

public:
  /// @brief Field _noteCutFloorLightStreakTileEffectSpawner, offset: 0x30, size: 0x8, def value: None
  ::Ice::NoteCutFloorLightStreakTileEffectSpawner* ____noteCutFloorLightStreakTileEffectSpawner;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Ice::NoteCutFloorLightStreakTileEffectSpawnerLightWithId, 0x38>, "Size mismatch!");

static_assert(offsetof(::Ice::NoteCutFloorLightStreakTileEffectSpawnerLightWithId, ____noteCutFloorLightStreakTileEffectSpawner) == 0x30, "Offset mismatch!");

} // namespace Ice
NEED_NO_BOX(::Ice::NoteCutFloorLightStreakTileEffectSpawnerLightWithId);
DEFINE_IL2CPP_ARG_TYPE(::Ice::NoteCutFloorLightStreakTileEffectSpawnerLightWithId*, "Ice", "NoteCutFloorLightStreakTileEffectSpawnerLightWithId");
