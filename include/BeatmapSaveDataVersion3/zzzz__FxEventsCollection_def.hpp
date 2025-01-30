#pragma once
// IWYU pragma private; include "BeatmapSaveDataVersion3/FxEventsCollection.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FxEventsCollection)
namespace BeatmapSaveDataVersion3 {
class FloatFxEventBaseData;
}
namespace BeatmapSaveDataVersion3 {
class IntFxEventBaseData;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace BeatmapSaveDataVersion3 {
class FxEventsCollection;
}
// Write type traits
MARK_REF_PTR_T(::BeatmapSaveDataVersion3::FxEventsCollection);
// Dependencies System.Object
namespace BeatmapSaveDataVersion3 {
// Is value type: false
// CS Name: BeatmapSaveDataVersion3.FxEventsCollection
class CORDL_TYPE FxEventsCollection : public ::System::Object {
public:
  // Declarations
  /// @brief Field _fl, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__fl, put = __cordl_internal_set__fl)) ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::FloatFxEventBaseData*>* _fl;

  /// @brief Field _il, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__il, put = __cordl_internal_set__il)) ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::IntFxEventBaseData*>* _il;

  __declspec(property(get = get_floatEventsList)) ::System::Collections::Generic::IReadOnlyList_1<::BeatmapSaveDataVersion3::FloatFxEventBaseData*>* floatEventsList;

  __declspec(property(get = get_intEventsList)) ::System::Collections::Generic::IReadOnlyList_1<::BeatmapSaveDataVersion3::IntFxEventBaseData*>* intEventsList;

  /// @brief Method AddEventAndGetIndex, addr 0x2707aac, size 0xbc, virtual false, abstract: false, final false
  inline int32_t AddEventAndGetIndex(::BeatmapSaveDataVersion3::FloatFxEventBaseData* e);

  /// @brief Method AddEventAndGetIndex, addr 0x2707b68, size 0xbc, virtual false, abstract: false, final false
  inline int32_t AddEventAndGetIndex(::BeatmapSaveDataVersion3::IntFxEventBaseData* e);

  static inline ::BeatmapSaveDataVersion3::FxEventsCollection* New_ctor();

  static inline ::BeatmapSaveDataVersion3::FxEventsCollection* New_ctor(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::IntFxEventBaseData*>* intFxEventBaseData,
                                                                        ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::FloatFxEventBaseData*>* floatFxEventBaseData);

  constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::FloatFxEventBaseData*>* const& __cordl_internal_get__fl() const;

  constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::FloatFxEventBaseData*>*& __cordl_internal_get__fl();

  constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::IntFxEventBaseData*>* const& __cordl_internal_get__il() const;

  constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::IntFxEventBaseData*>*& __cordl_internal_get__il();

  constexpr void __cordl_internal_set__fl(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::FloatFxEventBaseData*>* value);

  constexpr void __cordl_internal_set__il(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::IntFxEventBaseData*>* value);

  /// @brief Method .ctor, addr 0x270790c, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x27079d0, size 0xdc, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::IntFxEventBaseData*>* intFxEventBaseData,
                    ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::FloatFxEventBaseData*>* floatFxEventBaseData);

  /// @brief Method get_floatEventsList, addr 0x2707904, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IReadOnlyList_1<::BeatmapSaveDataVersion3::FloatFxEventBaseData*>* get_floatEventsList();

  /// @brief Method get_intEventsList, addr 0x27078fc, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IReadOnlyList_1<::BeatmapSaveDataVersion3::IntFxEventBaseData*>* get_intEventsList();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FxEventsCollection();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FxEventsCollection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FxEventsCollection(FxEventsCollection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FxEventsCollection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FxEventsCollection(FxEventsCollection const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13398 };

  /// @brief Field _il, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::IntFxEventBaseData*>* ____il;

  /// @brief Field _fl, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::FloatFxEventBaseData*>* ____fl;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatmapSaveDataVersion3::FxEventsCollection, ____il) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::FxEventsCollection, ____fl) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatmapSaveDataVersion3::FxEventsCollection, 0x20>, "Size mismatch!");

} // namespace BeatmapSaveDataVersion3
NEED_NO_BOX(::BeatmapSaveDataVersion3::FxEventsCollection);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion3::FxEventsCollection*, "BeatmapSaveDataVersion3", "FxEventsCollection");
