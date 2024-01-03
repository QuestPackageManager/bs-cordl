#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(BeatmapLightshowSaveData)
namespace BeatmapSaveDataVersion3 {
class __BeatmapSaveData__BasicEventData;
}
namespace BeatmapSaveDataVersion3 {
class __BeatmapSaveData__ColorBoostEventData;
}
namespace BeatmapSaveDataVersion3 {
class __BeatmapSaveData__FxEventBoxGroup;
}
namespace BeatmapSaveDataVersion3 {
class __BeatmapSaveData__FxEventsCollection;
}
namespace BeatmapSaveDataVersion3 {
class __BeatmapSaveData__LightColorEventBoxGroup;
}
namespace BeatmapSaveDataVersion3 {
class __BeatmapSaveData__LightRotationEventBoxGroup;
}
namespace BeatmapSaveDataVersion3 {
class __BeatmapSaveData__LightTranslationEventBoxGroup;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace BeatmapSaveDataVersion3 {
class BeatmapLightshowSaveData;
}
// Write type traits
MARK_REF_PTR_T(::BeatmapSaveDataVersion3::BeatmapLightshowSaveData);
// Type: BeatmapSaveDataVersion3::BeatmapLightshowSaveData
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BeatmapSaveDataVersion3 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14782))
// CS Name: ::BeatmapSaveDataVersion3::BeatmapLightshowSaveData*
class CORDL_TYPE BeatmapLightshowSaveData : public ::System::Object {
public:
  // Declarations
  /// @brief Field basicBeatmapEvents, offset 0x10, size 0x8
  __declspec(property(get = __get_basicBeatmapEvents,
                      put = __set_basicBeatmapEvents))::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventData*>* basicBeatmapEvents;

  /// @brief Field colorBoostBeatmapEvents, offset 0x18, size 0x8
  __declspec(property(get = __get_colorBoostBeatmapEvents,
                      put = __set_colorBoostBeatmapEvents))::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorBoostEventData*>* colorBoostBeatmapEvents;

  /// @brief Field lightColorEventBoxGroups, offset 0x20, size 0x8
  __declspec(property(get = __get_lightColorEventBoxGroups,
                      put = __set_lightColorEventBoxGroups))::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBoxGroup*>* lightColorEventBoxGroups;

  /// @brief Field lightRotationEventBoxGroups, offset 0x28, size 0x8
  __declspec(
      property(get = __get_lightRotationEventBoxGroups,
               put = __set_lightRotationEventBoxGroups))::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBoxGroup*>* lightRotationEventBoxGroups;

  /// @brief Field lightTranslationEventBoxGroups, offset 0x30, size 0x8
  __declspec(property(
      get = __get_lightTranslationEventBoxGroups,
      put = __set_lightTranslationEventBoxGroups))::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBoxGroup*>* lightTranslationEventBoxGroups;

  /// @brief Field vfxEventBoxGroups, offset 0x38, size 0x8
  __declspec(property(get = __get_vfxEventBoxGroups,
                      put = __set_vfxEventBoxGroups))::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBoxGroup*>* vfxEventBoxGroups;

  /// @brief Field _fxEventsCollection, offset 0x40, size 0x8
  __declspec(property(get = __get__fxEventsCollection, put = __set__fxEventsCollection))::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventsCollection* _fxEventsCollection;

  __declspec(property(get = get_isEmpty)) bool isEmpty;

  constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventData*>*& __get_basicBeatmapEvents();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventData*>*> const& __get_basicBeatmapEvents() const;

  constexpr void __set_basicBeatmapEvents(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventData*>* value);

  constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorBoostEventData*>*& __get_colorBoostBeatmapEvents();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorBoostEventData*>*> const&
  __get_colorBoostBeatmapEvents() const;

  constexpr void __set_colorBoostBeatmapEvents(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorBoostEventData*>* value);

  constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBoxGroup*>*& __get_lightColorEventBoxGroups();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBoxGroup*>*> const&
  __get_lightColorEventBoxGroups() const;

  constexpr void __set_lightColorEventBoxGroups(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBoxGroup*>* value);

  constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBoxGroup*>*& __get_lightRotationEventBoxGroups();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBoxGroup*>*> const&
  __get_lightRotationEventBoxGroups() const;

  constexpr void __set_lightRotationEventBoxGroups(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBoxGroup*>* value);

  constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBoxGroup*>*& __get_lightTranslationEventBoxGroups();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBoxGroup*>*> const&
  __get_lightTranslationEventBoxGroups() const;

  constexpr void __set_lightTranslationEventBoxGroups(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBoxGroup*>* value);

  constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBoxGroup*>*& __get_vfxEventBoxGroups();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBoxGroup*>*> const& __get_vfxEventBoxGroups() const;

  constexpr void __set_vfxEventBoxGroups(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBoxGroup*>* value);

  constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventsCollection*& __get__fxEventsCollection();

  constexpr ::cordl_internals::to_const_pointer<::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventsCollection*> const& __get__fxEventsCollection() const;

  constexpr void __set__fxEventsCollection(::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventsCollection* value);

  /// @brief Method get_isEmpty, addr 0xe05298, size 0xe8, virtual false, abstract: false, final false
  inline bool get_isEmpty();

  static inline ::BeatmapSaveDataVersion3::BeatmapLightshowSaveData* New_ctor();

  /// @brief Method .ctor, addr 0xe05380, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLightshowSaveData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapLightshowSaveData(BeatmapLightshowSaveData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLightshowSaveData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapLightshowSaveData(BeatmapLightshowSaveData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapLightshowSaveData();

public:
  /// @brief Field basicBeatmapEvents, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventData*>* ___basicBeatmapEvents;

  /// @brief Field colorBoostBeatmapEvents, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorBoostEventData*>* ___colorBoostBeatmapEvents;

  /// @brief Field lightColorEventBoxGroups, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBoxGroup*>* ___lightColorEventBoxGroups;

  /// @brief Field lightRotationEventBoxGroups, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBoxGroup*>* ___lightRotationEventBoxGroups;

  /// @brief Field lightTranslationEventBoxGroups, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBoxGroup*>* ___lightTranslationEventBoxGroups;

  /// @brief Field vfxEventBoxGroups, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBoxGroup*>* ___vfxEventBoxGroups;

  /// @brief Field _fxEventsCollection, offset: 0x40, size: 0x8, def value: None
  ::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventsCollection* ____fxEventsCollection;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapSaveDataVersion3::BeatmapLightshowSaveData, 0x48>, "Size mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::BeatmapLightshowSaveData, ___basicBeatmapEvents) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::BeatmapLightshowSaveData, ___colorBoostBeatmapEvents) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::BeatmapLightshowSaveData, ___lightColorEventBoxGroups) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::BeatmapLightshowSaveData, ___lightRotationEventBoxGroups) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::BeatmapLightshowSaveData, ___lightTranslationEventBoxGroups) == 0x30, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::BeatmapLightshowSaveData, ___vfxEventBoxGroups) == 0x38, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::BeatmapLightshowSaveData, ____fxEventsCollection) == 0x40, "Offset mismatch!");

} // namespace BeatmapSaveDataVersion3
NEED_NO_BOX(::BeatmapSaveDataVersion3::BeatmapLightshowSaveData);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion3::BeatmapLightshowSaveData*, "BeatmapSaveDataVersion3", "BeatmapLightshowSaveData");
