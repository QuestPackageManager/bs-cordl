#pragma once
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
class IReadonlyBeatmapData;
}
namespace GlobalNamespace {
class __BeatmapDataObstaclesAndBombsTransform____c__DisplayClass0_0;
}
namespace GlobalNamespace {
struct __GameplayModifiers__EnabledObstacleType;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapDataObstaclesAndBombsTransform;
}
namespace GlobalNamespace {
class __BeatmapDataObstaclesAndBombsTransform____c__DisplayClass0_0;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapDataObstaclesAndBombsTransform);
MARK_REF_PTR_T(::GlobalNamespace::__BeatmapDataObstaclesAndBombsTransform____c__DisplayClass0_0);
// Type: ::<>c__DisplayClass0_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 21, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BeatmapDataObstaclesAndBombsTransform::<>c__DisplayClass0_0*
class CORDL_TYPE __BeatmapDataObstaclesAndBombsTransform____c__DisplayClass0_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field enabledObstaclesType, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_enabledObstaclesType,
                      put = __cordl_internal_set_enabledObstaclesType))::GlobalNamespace::__GameplayModifiers__EnabledObstacleType enabledObstaclesType;

  /// @brief Field noBombs, offset 0x14, size 0x1
  __declspec(property(get = __cordl_internal_get_noBombs, put = __cordl_internal_set_noBombs)) bool noBombs;

  static inline ::GlobalNamespace::__BeatmapDataObstaclesAndBombsTransform____c__DisplayClass0_0* New_ctor();

  /// @brief Method <CreateTransformedData>g__ProcessData|0, addr 0x149af3c, size 0x2c, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapDataItem* _CreateTransformedData_g__ProcessData_0(::GlobalNamespace::BeatmapDataItem* beatmapDataItem);

  constexpr ::GlobalNamespace::__GameplayModifiers__EnabledObstacleType const& __cordl_internal_get_enabledObstaclesType() const;

  constexpr ::GlobalNamespace::__GameplayModifiers__EnabledObstacleType& __cordl_internal_get_enabledObstaclesType();

  constexpr bool const& __cordl_internal_get_noBombs() const;

  constexpr bool& __cordl_internal_get_noBombs();

  constexpr void __cordl_internal_set_enabledObstaclesType(::GlobalNamespace::__GameplayModifiers__EnabledObstacleType value);

  constexpr void __cordl_internal_set_noBombs(bool value);

  /// @brief Method .ctor, addr 0x149ae2c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapDataObstaclesAndBombsTransform____c__DisplayClass0_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapDataObstaclesAndBombsTransform____c__DisplayClass0_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapDataObstaclesAndBombsTransform____c__DisplayClass0_0(__BeatmapDataObstaclesAndBombsTransform____c__DisplayClass0_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapDataObstaclesAndBombsTransform____c__DisplayClass0_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapDataObstaclesAndBombsTransform____c__DisplayClass0_0(__BeatmapDataObstaclesAndBombsTransform____c__DisplayClass0_0 const&) = delete;

  /// @brief Field enabledObstaclesType, offset: 0x10, size: 0x4, def value: None
  ::GlobalNamespace::__GameplayModifiers__EnabledObstacleType ___enabledObstaclesType;

  /// @brief Field noBombs, offset: 0x14, size: 0x1, def value: None
  bool ___noBombs;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapDataObstaclesAndBombsTransform____c__DisplayClass0_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapDataObstaclesAndBombsTransform____c__DisplayClass0_0, ___enabledObstaclesType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapDataObstaclesAndBombsTransform____c__DisplayClass0_0, ___noBombs) == 0x14, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::BeatmapDataObstaclesAndBombsTransform
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BeatmapDataObstaclesAndBombsTransform*
class CORDL_TYPE BeatmapDataObstaclesAndBombsTransform : public ::System::Object {
public:
  // Declarations
  using __c__DisplayClass0_0 = ::GlobalNamespace::__BeatmapDataObstaclesAndBombsTransform____c__DisplayClass0_0;

  /// @brief Method CreateTransformedData, addr 0x149acf8, size 0x134, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::IReadonlyBeatmapData* CreateTransformedData(::GlobalNamespace::IReadonlyBeatmapData* beatmapData,
                                                                               ::GlobalNamespace::__GameplayModifiers__EnabledObstacleType enabledObstaclesType, bool noBombs);

  /// @brief Method ShouldUseBeatmapDataItem, addr 0x149ae34, size 0x108, virtual false, abstract: false, final false
  static inline bool ShouldUseBeatmapDataItem(::GlobalNamespace::BeatmapDataItem* beatmapDataItem, ::GlobalNamespace::__GameplayModifiers__EnabledObstacleType enabledObstaclesType, bool noBombs);

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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapDataObstaclesAndBombsTransform, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapDataObstaclesAndBombsTransform);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapDataObstaclesAndBombsTransform*, "", "BeatmapDataObstaclesAndBombsTransform");
NEED_NO_BOX(::GlobalNamespace::__BeatmapDataObstaclesAndBombsTransform____c__DisplayClass0_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapDataObstaclesAndBombsTransform____c__DisplayClass0_0*, "", "BeatmapDataObstaclesAndBombsTransform/<>c__DisplayClass0_0");
