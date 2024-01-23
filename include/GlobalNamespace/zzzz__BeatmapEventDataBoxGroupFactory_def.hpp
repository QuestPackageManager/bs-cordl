#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BeatmapEventDataBoxGroupFactory)
namespace GlobalNamespace {
class BeatmapEventDataBoxGroup;
}
namespace GlobalNamespace {
class IndexFilter;
}
namespace GlobalNamespace {
struct __BeatmapEventDataBoxGroupFactory____c__DisplayClass2_0;
}
namespace GlobalNamespace {
class __DefaultEnvironmentEvents__LightGroupEvent;
}
namespace GlobalNamespace {
class __DefaultEnvironmentEvents__LightGroupFiltering;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapEventDataBoxGroupFactory;
}
namespace GlobalNamespace {
struct __BeatmapEventDataBoxGroupFactory____c__DisplayClass2_0;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapEventDataBoxGroupFactory);
MARK_VAL_T(::GlobalNamespace::__BeatmapEventDataBoxGroupFactory____c__DisplayClass2_0);
// Type: ::<>c__DisplayClass2_0
// SizeInfo { instance_size: 4, native_size: -1, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4304))
// CS Name: ::BeatmapEventDataBoxGroupFactory::<>c__DisplayClass2_0
struct CORDL_TYPE __BeatmapEventDataBoxGroupFactory____c__DisplayClass2_0 {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "numberOfElements", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __BeatmapEventDataBoxGroupFactory____c__DisplayClass2_0(int32_t numberOfElements) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapEventDataBoxGroupFactory____c__DisplayClass2_0();

  /// @brief Field numberOfElements, offset: 0x0, size: 0x4, def value: None
  int32_t numberOfElements;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapEventDataBoxGroupFactory____c__DisplayClass2_0, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapEventDataBoxGroupFactory____c__DisplayClass2_0, numberOfElements) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::BeatmapEventDataBoxGroupFactory
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4305))
// CS Name: ::BeatmapEventDataBoxGroupFactory*
class CORDL_TYPE BeatmapEventDataBoxGroupFactory : public ::System::Object {
public:
  // Declarations
  using __c__DisplayClass2_0 = ::GlobalNamespace::__BeatmapEventDataBoxGroupFactory____c__DisplayClass2_0;

  /// @brief Method CreateExtendColorBeatmapEventDataBoxGroup, addr 0x2339034, size 0x200, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::BeatmapEventDataBoxGroup* CreateExtendColorBeatmapEventDataBoxGroup(float_t beat, int32_t numberOfElements);

  /// @brief Method CreateExtendRotationBeatmapEventDataBoxGroup, addr 0x2339234, size 0x31c, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::BeatmapEventDataBoxGroup* CreateExtendRotationBeatmapEventDataBoxGroup(float_t beat, int32_t numberOfElements);

  /// @brief Method CreateSingleLightBeatmapEventDataBoxGroup, addr 0x23379bc, size 0x994, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::BeatmapEventDataBoxGroup* CreateSingleLightBeatmapEventDataBoxGroup(float_t beat, int32_t numberOfElements,
                                                                                                       ::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupEvent* lightGroupEvent);

  /// @brief Method <CreateSingleLightBeatmapEventDataBoxGroup>g__CreateIndexFilter|2_0, addr 0x2339550, size 0x150, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::IndexFilter*
  _CreateSingleLightBeatmapEventDataBoxGroup_g__CreateIndexFilter_2_0(::GlobalNamespace::__DefaultEnvironmentEvents__LightGroupFiltering* filtering,
                                                                      ByRef<::GlobalNamespace::__BeatmapEventDataBoxGroupFactory____c__DisplayClass2_0> _cordl_fixed_empty_name_whitespace);

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapEventDataBoxGroupFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapEventDataBoxGroupFactory(BeatmapEventDataBoxGroupFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapEventDataBoxGroupFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapEventDataBoxGroupFactory(BeatmapEventDataBoxGroupFactory const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapEventDataBoxGroupFactory();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapEventDataBoxGroupFactory, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapEventDataBoxGroupFactory);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapEventDataBoxGroupFactory*, "", "BeatmapEventDataBoxGroupFactory");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapEventDataBoxGroupFactory____c__DisplayClass2_0, "", "BeatmapEventDataBoxGroupFactory/<>c__DisplayClass2_0");
