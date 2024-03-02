#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SpecialEventsFilter)
namespace BeatmapSaveDataCommon {
class BasicEventTypesWithKeywords;
}
namespace BeatmapSaveDataCommon {
struct BeatmapEventType;
}
namespace GlobalNamespace {
class EnvironmentKeywords;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
// Forward declare root types
namespace BeatmapDataLoaderVersion4 {
class SpecialEventsFilter;
}
// Write type traits
MARK_REF_PTR_T(::BeatmapDataLoaderVersion4::SpecialEventsFilter);
// Type: BeatmapDataLoaderVersion4::SpecialEventsFilter
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BeatmapDataLoaderVersion4 {
// Is value type: false
// CS Name: ::BeatmapDataLoaderVersion4::SpecialEventsFilter*
class CORDL_TYPE SpecialEventsFilter : public ::System::Object {
public:
  // Declarations
  /// @brief Field _eventTypesToFilter, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__eventTypesToFilter,
                      put = __cordl_internal_set__eventTypesToFilter))::System::Collections::Generic::HashSet_1<::BeatmapSaveDataCommon::BeatmapEventType>* _eventTypesToFilter;

  /// @brief Method IsEventValid, addr 0x1300cf8, size 0x64, virtual false, abstract: false, final false
  inline bool IsEventValid(::BeatmapSaveDataCommon::BeatmapEventType basicBeatmapEventType);

  static inline ::BeatmapDataLoaderVersion4::SpecialEventsFilter* New_ctor(::BeatmapSaveDataCommon::BasicEventTypesWithKeywords* basicEventTypesWithKeywords,
                                                                           ::GlobalNamespace::EnvironmentKeywords* environmentKeywords);

  constexpr ::System::Collections::Generic::HashSet_1<::BeatmapSaveDataCommon::BeatmapEventType>*& __cordl_internal_get__eventTypesToFilter();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::BeatmapSaveDataCommon::BeatmapEventType>*> const& __cordl_internal_get__eventTypesToFilter() const;

  constexpr void __cordl_internal_set__eventTypesToFilter(::System::Collections::Generic::HashSet_1<::BeatmapSaveDataCommon::BeatmapEventType>* value);

  /// @brief Method .ctor, addr 0x130043c, size 0x2f0, virtual false, abstract: false, final false
  inline void _ctor(::BeatmapSaveDataCommon::BasicEventTypesWithKeywords* basicEventTypesWithKeywords, ::GlobalNamespace::EnvironmentKeywords* environmentKeywords);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SpecialEventsFilter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SpecialEventsFilter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SpecialEventsFilter(SpecialEventsFilter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SpecialEventsFilter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SpecialEventsFilter(SpecialEventsFilter const&) = delete;

  /// @brief Field _eventTypesToFilter, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::BeatmapSaveDataCommon::BeatmapEventType>* ____eventTypesToFilter;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapDataLoaderVersion4::SpecialEventsFilter, 0x18>, "Size mismatch!");

static_assert(offsetof(::BeatmapDataLoaderVersion4::SpecialEventsFilter, ____eventTypesToFilter) == 0x10, "Offset mismatch!");

} // namespace BeatmapDataLoaderVersion4
NEED_NO_BOX(::BeatmapDataLoaderVersion4::SpecialEventsFilter);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapDataLoaderVersion4::SpecialEventsFilter*, "BeatmapDataLoaderVersion4", "SpecialEventsFilter");
