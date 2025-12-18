#pragma once
// IWYU pragma private; include "BeatmapSaveDataVersion2_6_0AndEarlier/SpecialEventsForKeyword.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SpecialEventsForKeyword)
namespace BeatmapSaveDataCommon {
struct BeatmapEventType;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace BeatmapSaveDataVersion2_6_0AndEarlier {
class SpecialEventsForKeyword;
}
// Write type traits
MARK_REF_PTR_T(::BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventsForKeyword);
// Dependencies System.Object
namespace BeatmapSaveDataVersion2_6_0AndEarlier {
// Is value type: false
// CS Name: BeatmapSaveDataVersion2_6_0AndEarlier.SpecialEventsForKeyword
class CORDL_TYPE SpecialEventsForKeyword : public ::System::Object {
public:
  // Declarations
  /// @brief Field _keyword, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__keyword, put = __cordl_internal_set__keyword)) ::StringW _keyword;

  /// @brief Field _specialEvents, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__specialEvents,
                      put = __cordl_internal_set__specialEvents)) ::System::Collections::Generic::List_1<::BeatmapSaveDataCommon::BeatmapEventType>* _specialEvents;

  __declspec(property(get = get_keyword)) ::StringW keyword;

  __declspec(property(get = get_specialEvents)) ::System::Collections::Generic::List_1<::BeatmapSaveDataCommon::BeatmapEventType>* specialEvents;

  static inline ::BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventsForKeyword* New_ctor(::StringW keyword,
                                                                                           ::System::Collections::Generic::List_1<::BeatmapSaveDataCommon::BeatmapEventType>* specialEvents);

  constexpr ::StringW const& __cordl_internal_get__keyword() const;

  constexpr ::StringW& __cordl_internal_get__keyword();

  constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataCommon::BeatmapEventType>* const& __cordl_internal_get__specialEvents() const;

  constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataCommon::BeatmapEventType>*& __cordl_internal_get__specialEvents();

  constexpr void __cordl_internal_set__keyword(::StringW value);

  constexpr void __cordl_internal_set__specialEvents(::System::Collections::Generic::List_1<::BeatmapSaveDataCommon::BeatmapEventType>* value);

  /// @brief Method .ctor, addr 0x36621d0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW keyword, ::System::Collections::Generic::List_1<::BeatmapSaveDataCommon::BeatmapEventType>* specialEvents);

  /// @brief Method get_keyword, addr 0x36621c0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_keyword();

  /// @brief Method get_specialEvents, addr 0x36621c8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::BeatmapSaveDataCommon::BeatmapEventType>* get_specialEvents();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SpecialEventsForKeyword();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SpecialEventsForKeyword", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SpecialEventsForKeyword(SpecialEventsForKeyword&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SpecialEventsForKeyword", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SpecialEventsForKeyword(SpecialEventsForKeyword const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15363 };

  /// @brief Field _keyword, offset: 0x10, size: 0x8, def value: None
  ::StringW ____keyword;

  /// @brief Field _specialEvents, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::BeatmapSaveDataCommon::BeatmapEventType>* ____specialEvents;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventsForKeyword, ____keyword) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventsForKeyword, ____specialEvents) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventsForKeyword, 0x20>, "Size mismatch!");

} // namespace BeatmapSaveDataVersion2_6_0AndEarlier
NEED_NO_BOX(::BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventsForKeyword);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventsForKeyword*, "BeatmapSaveDataVersion2_6_0AndEarlier", "SpecialEventsForKeyword");
