#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapDataObstaclesAndBombsTransform.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GameplayModifiers_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(BeatmapDataObstaclesAndBombsTransform)
namespace GlobalNamespace {
class BeatmapDataItem;
}
namespace GlobalNamespace {
class BeatmapDataObstaclesAndBombsTransform___c__DisplayClass0_0;
}
namespace GlobalNamespace {
struct GameplayModifiers_EnabledObstacleType;
}
namespace GlobalNamespace {
class IReadonlyBeatmapData;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapDataObstaclesAndBombsTransform;
}
namespace GlobalNamespace {
class BeatmapDataObstaclesAndBombsTransform___c__DisplayClass0_0;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapDataObstaclesAndBombsTransform);
MARK_REF_PTR_T(::GlobalNamespace::BeatmapDataObstaclesAndBombsTransform___c__DisplayClass0_0);
// Dependencies GameplayModifiers::EnabledObstacleType, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatmapDataObstaclesAndBombsTransform/<>c__DisplayClass0_0
class CORDL_TYPE BeatmapDataObstaclesAndBombsTransform___c__DisplayClass0_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field enabledObstaclesType, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_enabledObstaclesType, put = __cordl_internal_set_enabledObstaclesType)) ::GlobalNamespace::GameplayModifiers_EnabledObstacleType enabledObstaclesType;

  /// @brief Field noBombs, offset 0x14, size 0x1
  __declspec(property(get = __cordl_internal_get_noBombs, put = __cordl_internal_set_noBombs)) bool noBombs;

  static inline ::GlobalNamespace::BeatmapDataObstaclesAndBombsTransform___c__DisplayClass0_0* New_ctor();

  /// @brief Method <CreateTransformedData>g__ProcessData|0, addr 0x35de388, size 0x2c, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapDataItem* _CreateTransformedData_g__ProcessData_0(::GlobalNamespace::BeatmapDataItem* beatmapDataItem);

  constexpr ::GlobalNamespace::GameplayModifiers_EnabledObstacleType const& __cordl_internal_get_enabledObstaclesType() const;

  constexpr ::GlobalNamespace::GameplayModifiers_EnabledObstacleType& __cordl_internal_get_enabledObstaclesType();

  constexpr bool const& __cordl_internal_get_noBombs() const;

  constexpr bool& __cordl_internal_get_noBombs();

  constexpr void __cordl_internal_set_enabledObstaclesType(::GlobalNamespace::GameplayModifiers_EnabledObstacleType value);

  constexpr void __cordl_internal_set_noBombs(bool value);

  /// @brief Method .ctor, addr 0x35de27c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapDataObstaclesAndBombsTransform___c__DisplayClass0_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapDataObstaclesAndBombsTransform___c__DisplayClass0_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapDataObstaclesAndBombsTransform___c__DisplayClass0_0(BeatmapDataObstaclesAndBombsTransform___c__DisplayClass0_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapDataObstaclesAndBombsTransform___c__DisplayClass0_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapDataObstaclesAndBombsTransform___c__DisplayClass0_0(BeatmapDataObstaclesAndBombsTransform___c__DisplayClass0_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14769 };

  /// @brief Field enabledObstaclesType, offset: 0x10, size: 0x4, def value: None
  ::GlobalNamespace::GameplayModifiers_EnabledObstacleType ___enabledObstaclesType;

  /// @brief Field noBombs, offset: 0x14, size: 0x1, def value: None
  bool ___noBombs;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BeatmapDataObstaclesAndBombsTransform___c__DisplayClass0_0, ___enabledObstaclesType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDataObstaclesAndBombsTransform___c__DisplayClass0_0, ___noBombs) == 0x14, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapDataObstaclesAndBombsTransform___c__DisplayClass0_0, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatmapDataObstaclesAndBombsTransform
class CORDL_TYPE BeatmapDataObstaclesAndBombsTransform : public ::System::Object {
public:
  // Declarations
  using __c__DisplayClass0_0 = ::GlobalNamespace::BeatmapDataObstaclesAndBombsTransform___c__DisplayClass0_0;

  /// @brief Method CreateTransformedData, addr 0x35de144, size 0x138, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::IReadonlyBeatmapData* CreateTransformedData(::GlobalNamespace::IReadonlyBeatmapData* beatmapData,
                                                                               ::GlobalNamespace::GameplayModifiers_EnabledObstacleType enabledObstaclesType, bool noBombs);

  /// @brief Method ShouldUseBeatmapDataItem, addr 0x35de280, size 0x108, virtual false, abstract: false, final false
  static inline bool ShouldUseBeatmapDataItem(::GlobalNamespace::BeatmapDataItem* beatmapDataItem, ::GlobalNamespace::GameplayModifiers_EnabledObstacleType enabledObstaclesType, bool noBombs);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapDataObstaclesAndBombsTransform();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapDataObstaclesAndBombsTransform", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapDataObstaclesAndBombsTransform(BeatmapDataObstaclesAndBombsTransform&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapDataObstaclesAndBombsTransform", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapDataObstaclesAndBombsTransform(BeatmapDataObstaclesAndBombsTransform const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14770 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapDataObstaclesAndBombsTransform, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapDataObstaclesAndBombsTransform);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapDataObstaclesAndBombsTransform*, "", "BeatmapDataObstaclesAndBombsTransform");
NEED_NO_BOX(::GlobalNamespace::BeatmapDataObstaclesAndBombsTransform___c__DisplayClass0_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapDataObstaclesAndBombsTransform___c__DisplayClass0_0*, "", "BeatmapDataObstaclesAndBombsTransform/<>c__DisplayClass0_0");
