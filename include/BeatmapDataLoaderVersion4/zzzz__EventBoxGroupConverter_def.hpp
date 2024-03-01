#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatToTimeConverterProvider_def.hpp"
CORDL_MODULE_EXPORT(EventBoxGroupConverter)
namespace BeatmapSaveDataVersion4 {
class EventBoxGroup;
}
namespace BeatmapSaveDataVersion4 {
struct EventBox;
}
namespace BeatmapSaveDataVersion4 {
class LightshowSaveData;
}
namespace GlobalNamespace {
class BeatmapEventDataBoxGroup;
}
namespace GlobalNamespace {
class BeatmapEventDataBox;
}
namespace GlobalNamespace {
class IEnvironmentLightGroups;
}
namespace GlobalNamespace {
class IndexFilter;
}
// Forward declare root types
namespace BeatmapDataLoaderVersion4 {
class EventBoxGroupConverter;
}
// Write type traits
MARK_REF_PTR_T(::BeatmapDataLoaderVersion4::EventBoxGroupConverter);
// Type: BeatmapDataLoaderVersion4::EventBoxGroupConverter
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BeatmapDataLoaderVersion4 {
// Is value type: false
// CS Name: ::BeatmapDataLoaderVersion4::EventBoxGroupConverter*
class CORDL_TYPE EventBoxGroupConverter : public ::GlobalNamespace::BeatToTimeConverterProvider {
public:
  // Declarations
  /// @brief Field _lightGroups, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__lightGroups, put = __cordl_internal_set__lightGroups))::GlobalNamespace::IEnvironmentLightGroups* _lightGroups;

  /// @brief Field lightshowSaveData, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_lightshowSaveData, put = __cordl_internal_set_lightshowSaveData))::BeatmapSaveDataVersion4::LightshowSaveData* lightshowSaveData;

  /// @brief Method Convert, addr 0x13009f4, size 0x2c0, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapEventDataBoxGroup* Convert(::BeatmapSaveDataVersion4::EventBoxGroup* eventBoxGroup);

  /// @brief Method ConvertEvents, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::GlobalNamespace::BeatmapEventDataBox* ConvertEvents(::BeatmapSaveDataVersion4::EventBox eventBox, ::GlobalNamespace::IndexFilter* indexFilter);

  static inline ::BeatmapDataLoaderVersion4::EventBoxGroupConverter* New_ctor(::BeatmapSaveDataVersion4::LightshowSaveData* lightshowSaveData, ::GlobalNamespace::IEnvironmentLightGroups* lightGroups);

  constexpr ::GlobalNamespace::IEnvironmentLightGroups*& __cordl_internal_get__lightGroups();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IEnvironmentLightGroups*> const& __cordl_internal_get__lightGroups() const;

  constexpr ::BeatmapSaveDataVersion4::LightshowSaveData*& __cordl_internal_get_lightshowSaveData();

  constexpr ::cordl_internals::to_const_pointer<::BeatmapSaveDataVersion4::LightshowSaveData*> const& __cordl_internal_get_lightshowSaveData() const;

  constexpr void __cordl_internal_set__lightGroups(::GlobalNamespace::IEnvironmentLightGroups* value);

  constexpr void __cordl_internal_set_lightshowSaveData(::BeatmapSaveDataVersion4::LightshowSaveData* value);

  /// @brief Method .ctor, addr 0x1300d5c, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::BeatmapSaveDataVersion4::LightshowSaveData* lightshowSaveData, ::GlobalNamespace::IEnvironmentLightGroups* lightGroups);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EventBoxGroupConverter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EventBoxGroupConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EventBoxGroupConverter(EventBoxGroupConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EventBoxGroupConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EventBoxGroupConverter(EventBoxGroupConverter const&) = delete;

  /// @brief Field lightshowSaveData, offset: 0x18, size: 0x8, def value: None
  ::BeatmapSaveDataVersion4::LightshowSaveData* ___lightshowSaveData;

  /// @brief Field _lightGroups, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::IEnvironmentLightGroups* ____lightGroups;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapDataLoaderVersion4::EventBoxGroupConverter, 0x28>, "Size mismatch!");

static_assert(offsetof(::BeatmapDataLoaderVersion4::EventBoxGroupConverter, ___lightshowSaveData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatmapDataLoaderVersion4::EventBoxGroupConverter, ____lightGroups) == 0x20, "Offset mismatch!");

} // namespace BeatmapDataLoaderVersion4
NEED_NO_BOX(::BeatmapDataLoaderVersion4::EventBoxGroupConverter);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapDataLoaderVersion4::EventBoxGroupConverter*, "BeatmapDataLoaderVersion4", "EventBoxGroupConverter");
