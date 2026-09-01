#pragma once
// IWYU pragma private; include "GlobalNamespace\BeatmapCharacteristicsDropdown.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapCharacteristic_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BeatmapCharacteristicsDropdown)
namespace GlobalNamespace {
class BeatmapCharacteristicCollection;
}
namespace GlobalNamespace {
struct BeatmapCharacteristic;
}
namespace GlobalNamespace {
class BeatmapCharacteristicsDropdown___c;
}
namespace HMUI {
class DropdownWithTableView;
}
namespace HMUI {
class SimpleTextDropdown;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapCharacteristicsDropdown;
}
namespace GlobalNamespace {
class BeatmapCharacteristicsDropdown___c;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BeatmapCharacteristicsDropdown*);
MARK_REF_T(::GlobalNamespace::BeatmapCharacteristicsDropdown___c*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BeatmapCharacteristicsDropdown*, "", "BeatmapCharacteristicsDropdown");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BeatmapCharacteristicsDropdown___c*, "", "BeatmapCharacteristicsDropdown/<>c");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatmapCharacteristicsDropdown/<>c
class CORDL_TYPE BeatmapCharacteristicsDropdown___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::GlobalNamespace::BeatmapCharacteristicsDropdown___c* __9;

  /// @brief Field <>9__7_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__7_0, put = setStaticF___9__7_0)) ::System::Func_2<::GlobalNamespace::BeatmapCharacteristic, ::StringW>* __9__7_0;

  static inline ::GlobalNamespace::BeatmapCharacteristicsDropdown___c* New_ctor();

  /// @brief Method <OnEnable>b__7_0, addr 0x593f184, size 0x5c, virtual false, abstract: false, final false
  inline ::StringW _OnEnable_b__7_0(::GlobalNamespace::BeatmapCharacteristic x);

  /// @brief Method .ctor, addr 0x593f180, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::BeatmapCharacteristicsDropdown___c* getStaticF___9();

  static inline ::System::Func_2<::GlobalNamespace::BeatmapCharacteristic, ::StringW>* getStaticF___9__7_0();

  static inline void setStaticF___9(::GlobalNamespace::BeatmapCharacteristicsDropdown___c* value);

  static inline void setStaticF___9__7_0(::System::Func_2<::GlobalNamespace::BeatmapCharacteristic, ::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapCharacteristicsDropdown___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapCharacteristicsDropdown___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapCharacteristicsDropdown___c(BeatmapCharacteristicsDropdown___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapCharacteristicsDropdown___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapCharacteristicsDropdown___c(BeatmapCharacteristicsDropdown___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6887 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::BeatmapCharacteristicsDropdown___c) == 0x10, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies BeatmapCharacteristic, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatmapCharacteristicsDropdown
class CORDL_TYPE BeatmapCharacteristicsDropdown : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using __c = ::GlobalNamespace::BeatmapCharacteristicsDropdown___c;

  /// @brief Field _beatmapCharacteristicCollection, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapCharacteristicCollection,
                      put = __cordl_internal_set__beatmapCharacteristicCollection)) ::GlobalNamespace::BeatmapCharacteristicCollection* _beatmapCharacteristicCollection;

  /// @brief Field _beatmapCharacteristics, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapCharacteristics,
                      put = __cordl_internal_set__beatmapCharacteristics)) ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapCharacteristic>* _beatmapCharacteristics;

  /// @brief Field _notAllowedCharacteristics, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__notAllowedCharacteristics, put = __cordl_internal_set__notAllowedCharacteristics)) ::ArrayW<::GlobalNamespace::BeatmapCharacteristic>
      _notAllowedCharacteristics;

  /// @brief Field _simpleTextDropdown, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__simpleTextDropdown, put = __cordl_internal_set__simpleTextDropdown)) ::UnityW<::HMUI::SimpleTextDropdown> _simpleTextDropdown;

  /// @brief Field didSelectCellWithIdxEvent, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_didSelectCellWithIdxEvent,
                      put = __cordl_internal_set_didSelectCellWithIdxEvent)) ::System::Action_1<::GlobalNamespace::BeatmapCharacteristic>* didSelectCellWithIdxEvent;

  /// @brief Method GetSelectedBeatmapCharacteristic, addr 0x593ede8, size 0x60, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapCharacteristic GetSelectedBeatmapCharacteristic();

  /// @brief Method HandleSimpleTextDropdownDidSelectCellWithIdx, addr 0x593eff8, size 0x90, virtual false, abstract: false, final false
  inline void HandleSimpleTextDropdownDidSelectCellWithIdx(::HMUI::DropdownWithTableView* dropdownWithTableView, int32_t idx);

  static inline ::GlobalNamespace::BeatmapCharacteristicsDropdown* New_ctor();

  /// @brief Method OnDisable, addr 0x593ed00, size 0xdc, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x593eaf0, size 0x210, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method SelectCellWithBeatmapCharacteristic, addr 0x593ee48, size 0x98, virtual false, abstract: false, final false
  inline void SelectCellWithBeatmapCharacteristic(::GlobalNamespace::BeatmapCharacteristic beatmapCharacteristic);

  /// @brief Method SelectCellWithBeatmapCharacteristic, addr 0x593eee0, size 0x118, virtual false, abstract: false, final false
  inline void SelectCellWithBeatmapCharacteristic(::StringW serializedName);

  /// @brief Method SetNotAllowedCharacteristics, addr 0x593eddc, size 0xc, virtual false, abstract: false, final false
  inline void SetNotAllowedCharacteristics(::by_ref<::ArrayW<::GlobalNamespace::BeatmapCharacteristic>> notAllowedCharacteristics);

  constexpr ::GlobalNamespace::BeatmapCharacteristicCollection* const& __cordl_internal_get__beatmapCharacteristicCollection() const;

  constexpr ::GlobalNamespace::BeatmapCharacteristicCollection*& __cordl_internal_get__beatmapCharacteristicCollection();

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapCharacteristic>* const& __cordl_internal_get__beatmapCharacteristics() const;

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapCharacteristic>*& __cordl_internal_get__beatmapCharacteristics();

  constexpr ::ArrayW<::GlobalNamespace::BeatmapCharacteristic> const& __cordl_internal_get__notAllowedCharacteristics() const;

  constexpr ::ArrayW<::GlobalNamespace::BeatmapCharacteristic>& __cordl_internal_get__notAllowedCharacteristics();

  constexpr ::UnityW<::HMUI::SimpleTextDropdown> const& __cordl_internal_get__simpleTextDropdown() const;

  constexpr ::UnityW<::HMUI::SimpleTextDropdown>& __cordl_internal_get__simpleTextDropdown();

  constexpr ::System::Action_1<::GlobalNamespace::BeatmapCharacteristic>* const& __cordl_internal_get_didSelectCellWithIdxEvent() const;

  constexpr ::System::Action_1<::GlobalNamespace::BeatmapCharacteristic>*& __cordl_internal_get_didSelectCellWithIdxEvent();

  constexpr void __cordl_internal_set__beatmapCharacteristicCollection(::GlobalNamespace::BeatmapCharacteristicCollection* value);

  constexpr void __cordl_internal_set__beatmapCharacteristics(::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapCharacteristic>* value);

  constexpr void __cordl_internal_set__notAllowedCharacteristics(::ArrayW<::GlobalNamespace::BeatmapCharacteristic> value);

  constexpr void __cordl_internal_set__simpleTextDropdown(::UnityW<::HMUI::SimpleTextDropdown> value);

  constexpr void __cordl_internal_set_didSelectCellWithIdxEvent(::System::Action_1<::GlobalNamespace::BeatmapCharacteristic>* value);

  /// @brief Method .ctor, addr 0x593f088, size 0xa4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_didSelectCellWithIdxEvent, addr 0x593e970, size 0xc0, virtual false, abstract: false, final false
  inline void add_didSelectCellWithIdxEvent(::System::Action_1<::GlobalNamespace::BeatmapCharacteristic>* value);

  /// @brief Method remove_didSelectCellWithIdxEvent, addr 0x593ea30, size 0xc0, virtual false, abstract: false, final false
  inline void remove_didSelectCellWithIdxEvent(::System::Action_1<::GlobalNamespace::BeatmapCharacteristic>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapCharacteristicsDropdown();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapCharacteristicsDropdown", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapCharacteristicsDropdown(BeatmapCharacteristicsDropdown&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapCharacteristicsDropdown", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapCharacteristicsDropdown(BeatmapCharacteristicsDropdown const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6888 };

  /// @brief Field _simpleTextDropdown, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::HMUI::SimpleTextDropdown> ____simpleTextDropdown;

  /// @brief Field _beatmapCharacteristicCollection, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapCharacteristicCollection* ____beatmapCharacteristicCollection;

  /// @brief Field didSelectCellWithIdxEvent, offset: 0x30, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::BeatmapCharacteristic>* ___didSelectCellWithIdxEvent;

  /// @brief Field _beatmapCharacteristics, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapCharacteristic>* ____beatmapCharacteristics;

  /// @brief Field _notAllowedCharacteristics, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::BeatmapCharacteristic> ____notAllowedCharacteristics;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BeatmapCharacteristicsDropdown, ____simpleTextDropdown) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapCharacteristicsDropdown, ____beatmapCharacteristicCollection) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapCharacteristicsDropdown, ___didSelectCellWithIdxEvent) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapCharacteristicsDropdown, ____beatmapCharacteristics) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapCharacteristicsDropdown, ____notAllowedCharacteristics) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BeatmapCharacteristicsDropdown) == 0x48, "Size mismatch!");

} // namespace GlobalNamespace
