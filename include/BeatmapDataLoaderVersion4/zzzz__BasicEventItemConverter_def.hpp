#pragma once
// IWYU pragma private; include "BeatmapDataLoaderVersion4/BasicEventItemConverter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatToTimeConverter_def.hpp"
CORDL_MODULE_EXPORT(BasicEventItemConverter)
namespace BeatmapDataLoaderVersion4 {
class SpecialEventsFilter;
}
namespace BeatmapSaveDataVersion4 {
struct BasicEvent;
}
namespace BeatmapSaveDataVersion4 {
class BeatIndex;
}
namespace GlobalNamespace {
class BeatmapEventData;
}
namespace GlobalNamespace {
class BpmTimeProcessor;
}
namespace GlobalNamespace {
class IBeatmapLightEventConverter;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace BeatmapDataLoaderVersion4 {
class BasicEventItemConverter;
}
// Write type traits
MARK_REF_PTR_T(::BeatmapDataLoaderVersion4::BasicEventItemConverter);
// Dependencies BeatToTimeConverter
namespace BeatmapDataLoaderVersion4 {
// Is value type: false
// CS Name: BeatmapDataLoaderVersion4.BasicEventItemConverter
class CORDL_TYPE BasicEventItemConverter : public ::GlobalNamespace::BeatToTimeConverter {
public:
  // Declarations
  /// @brief Field _basicEvents, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__basicEvents,
                      put = __cordl_internal_set__basicEvents)) ::ArrayW<::BeatmapSaveDataVersion4::BasicEvent, ::Array<::BeatmapSaveDataVersion4::BasicEvent>*>
      _basicEvents;

  /// @brief Field _lightEventConverter, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__lightEventConverter, put = __cordl_internal_set__lightEventConverter)) ::GlobalNamespace::IBeatmapLightEventConverter* _lightEventConverter;

  /// @brief Field _specialEventsFilter, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__specialEventsFilter, put = __cordl_internal_set__specialEventsFilter)) ::BeatmapDataLoaderVersion4::SpecialEventsFilter* _specialEventsFilter;

  /// @brief Method Convert, addr 0x2709dd8, size 0x14c, virtual false, abstract: false, final false
  inline void Convert(::BeatmapSaveDataVersion4::BeatIndex* index, ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapEventData*>* output);

  static inline ::BeatmapDataLoaderVersion4::BasicEventItemConverter* New_ctor(::ArrayW<::BeatmapSaveDataVersion4::BasicEvent, ::Array<::BeatmapSaveDataVersion4::BasicEvent>*> basicEvents,
                                                                               ::BeatmapDataLoaderVersion4::SpecialEventsFilter* specialEventsFilter,
                                                                               ::GlobalNamespace::BpmTimeProcessor* bpmTimeProcessor,
                                                                               ::GlobalNamespace::IBeatmapLightEventConverter* lightEventConverter);

  constexpr ::ArrayW<::BeatmapSaveDataVersion4::BasicEvent, ::Array<::BeatmapSaveDataVersion4::BasicEvent>*> const& __cordl_internal_get__basicEvents() const;

  constexpr ::ArrayW<::BeatmapSaveDataVersion4::BasicEvent, ::Array<::BeatmapSaveDataVersion4::BasicEvent>*>& __cordl_internal_get__basicEvents();

  constexpr ::GlobalNamespace::IBeatmapLightEventConverter* const& __cordl_internal_get__lightEventConverter() const;

  constexpr ::GlobalNamespace::IBeatmapLightEventConverter*& __cordl_internal_get__lightEventConverter();

  constexpr ::BeatmapDataLoaderVersion4::SpecialEventsFilter* const& __cordl_internal_get__specialEventsFilter() const;

  constexpr ::BeatmapDataLoaderVersion4::SpecialEventsFilter*& __cordl_internal_get__specialEventsFilter();

  constexpr void __cordl_internal_set__basicEvents(::ArrayW<::BeatmapSaveDataVersion4::BasicEvent, ::Array<::BeatmapSaveDataVersion4::BasicEvent>*> value);

  constexpr void __cordl_internal_set__lightEventConverter(::GlobalNamespace::IBeatmapLightEventConverter* value);

  constexpr void __cordl_internal_set__specialEventsFilter(::BeatmapDataLoaderVersion4::SpecialEventsFilter* value);

  /// @brief Method .ctor, addr 0x2709d6c, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::BeatmapSaveDataVersion4::BasicEvent, ::Array<::BeatmapSaveDataVersion4::BasicEvent>*> basicEvents, ::BeatmapDataLoaderVersion4::SpecialEventsFilter* specialEventsFilter,
                    ::GlobalNamespace::BpmTimeProcessor* bpmTimeProcessor, ::GlobalNamespace::IBeatmapLightEventConverter* lightEventConverter);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BasicEventItemConverter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BasicEventItemConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BasicEventItemConverter(BasicEventItemConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BasicEventItemConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BasicEventItemConverter(BasicEventItemConverter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13480 };

  /// @brief Field _basicEvents, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::BeatmapSaveDataVersion4::BasicEvent, ::Array<::BeatmapSaveDataVersion4::BasicEvent>*> ____basicEvents;

  /// @brief Field _specialEventsFilter, offset: 0x20, size: 0x8, def value: None
  ::BeatmapDataLoaderVersion4::SpecialEventsFilter* ____specialEventsFilter;

  /// @brief Field _lightEventConverter, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::IBeatmapLightEventConverter* ____lightEventConverter;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatmapDataLoaderVersion4::BasicEventItemConverter, ____basicEvents) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatmapDataLoaderVersion4::BasicEventItemConverter, ____specialEventsFilter) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatmapDataLoaderVersion4::BasicEventItemConverter, ____lightEventConverter) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatmapDataLoaderVersion4::BasicEventItemConverter, 0x30>, "Size mismatch!");

} // namespace BeatmapDataLoaderVersion4
NEED_NO_BOX(::BeatmapDataLoaderVersion4::BasicEventItemConverter);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapDataLoaderVersion4::BasicEventItemConverter*, "BeatmapDataLoaderVersion4", "BasicEventItemConverter");
