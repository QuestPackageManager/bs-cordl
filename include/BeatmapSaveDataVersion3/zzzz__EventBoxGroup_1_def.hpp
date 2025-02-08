#pragma once
// IWYU pragma private; include "BeatmapSaveDataVersion3/EventBoxGroup_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatmapSaveDataVersion3/zzzz__EventBoxGroup_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(EventBoxGroup_1)
namespace BeatmapSaveDataVersion3 {
class EventBox;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace BeatmapSaveDataVersion3 {
template <typename T> class EventBoxGroup_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::BeatmapSaveDataVersion3::EventBoxGroup_1);
// Dependencies BeatmapSaveDataVersion3.EventBoxGroup
namespace BeatmapSaveDataVersion3 {
// cpp template
template <typename T>
// Is value type: false
// CS Name: BeatmapSaveDataVersion3.EventBoxGroup`1<T>
class CORDL_TYPE EventBoxGroup_1 : public ::BeatmapSaveDataVersion3::EventBoxGroup {
public:
  // Declarations
  __declspec(property(get = get_baseEventBoxes)) ::System::Collections::Generic::IReadOnlyList_1<::BeatmapSaveDataVersion3::EventBox*>* baseEventBoxes;

  /// @brief Field e, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_e, put = __cordl_internal_set_e)) ::System::Collections::Generic::List_1<T>* e;

  __declspec(property(get = get_eventBoxes)) ::System::Collections::Generic::IReadOnlyList_1<T>* eventBoxes;

  static inline ::BeatmapSaveDataVersion3::EventBoxGroup_1<T>* New_ctor(float_t beat, int32_t groupId, ::System::Collections::Generic::List_1<T>* eventBoxes);

  constexpr ::System::Collections::Generic::List_1<T>* const& __cordl_internal_get_e() const;

  constexpr ::System::Collections::Generic::List_1<T>*& __cordl_internal_get_e();

  constexpr void __cordl_internal_set_e(::System::Collections::Generic::List_1<T>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(float_t beat, int32_t groupId, ::System::Collections::Generic::List_1<T>* eventBoxes);

  /// @brief Method get_baseEventBoxes, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::IReadOnlyList_1<::BeatmapSaveDataVersion3::EventBox*>* get_baseEventBoxes();

  /// @brief Method get_eventBoxes, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IReadOnlyList_1<T>* get_eventBoxes();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EventBoxGroup_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EventBoxGroup_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EventBoxGroup_1(EventBoxGroup_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EventBoxGroup_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EventBoxGroup_1(EventBoxGroup_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13397 };

  /// @brief Field e, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<T>* ___e;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace BeatmapSaveDataVersion3
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::BeatmapSaveDataVersion3::EventBoxGroup_1, "BeatmapSaveDataVersion3", "EventBoxGroup`1");
