#pragma once
// IWYU pragma private; include "BeatmapSaveDataVersion2_6_0AndEarlier/SpecialEventKeywordFiltersData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SpecialEventKeywordFiltersData)
namespace BeatmapSaveDataVersion2_6_0AndEarlier {
class SpecialEventsForKeyword;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace BeatmapSaveDataVersion2_6_0AndEarlier {
class SpecialEventKeywordFiltersData;
}
// Write type traits
MARK_REF_PTR_T(::BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventKeywordFiltersData);
// Dependencies System.Object
namespace BeatmapSaveDataVersion2_6_0AndEarlier {
// Is value type: false
// CS Name: BeatmapSaveDataVersion2_6_0AndEarlier.SpecialEventKeywordFiltersData
class CORDL_TYPE SpecialEventKeywordFiltersData : public ::System::Object {
public:
  // Declarations
  /// @brief Field _keywords, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__keywords,
                      put = __cordl_internal_set__keywords)) ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventsForKeyword*>* _keywords;

  __declspec(property(get = get_keywords)) ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventsForKeyword*>* keywords;

  static inline ::BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventKeywordFiltersData*
  New_ctor(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventsForKeyword*>* keywords);

  constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventsForKeyword*>* const& __cordl_internal_get__keywords() const;

  constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventsForKeyword*>*& __cordl_internal_get__keywords();

  constexpr void __cordl_internal_set__keywords(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventsForKeyword*>* value);

  /// @brief Method .ctor, addr 0x27077a0, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventsForKeyword*>* keywords);

  /// @brief Method get_keywords, addr 0x2707798, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventsForKeyword*>* get_keywords();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SpecialEventKeywordFiltersData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SpecialEventKeywordFiltersData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SpecialEventKeywordFiltersData(SpecialEventKeywordFiltersData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SpecialEventKeywordFiltersData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SpecialEventKeywordFiltersData(SpecialEventKeywordFiltersData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13439 };

  /// @brief Field _keywords, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventsForKeyword*>* ____keywords;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventKeywordFiltersData, ____keywords) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventKeywordFiltersData, 0x18>, "Size mismatch!");

} // namespace BeatmapSaveDataVersion2_6_0AndEarlier
NEED_NO_BOX(::BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventKeywordFiltersData);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventKeywordFiltersData*, "BeatmapSaveDataVersion2_6_0AndEarlier", "SpecialEventKeywordFiltersData");
