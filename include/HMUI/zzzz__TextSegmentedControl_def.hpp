#pragma once
// IWYU pragma private; include "HMUI/TextSegmentedControl.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__SegmentedControl_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TextSegmentedControl)
namespace HMUI {
class SegmentedControlCell;
}
namespace HMUI {
class TextSegmentedControlCell;
}
namespace HMUI {
class __SegmentedControl__IDataSource;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
// Forward declare root types
namespace HMUI {
class TextSegmentedControl;
}
// Write type traits
MARK_REF_PTR_T(::HMUI::TextSegmentedControl);
// Type: HMUI::TextSegmentedControl
// SizeInfo { instance_size: 200, native_size: -1, calculated_instance_size: 200, calculated_native_size: 200, minimum_alignment: 8, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// CS Name: ::HMUI::TextSegmentedControl*
class CORDL_TYPE TextSegmentedControl : public ::HMUI::SegmentedControl {
public:
  // Declarations
  /// @brief Field _disabledIndexes, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get__disabledIndexes, put = __cordl_internal_set__disabledIndexes)) ::System::Collections::Generic::HashSet_1<int32_t>* _disabledIndexes;

  /// @brief Field _firstCellPrefab, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__firstCellPrefab, put = __cordl_internal_set__firstCellPrefab)) ::UnityW<::HMUI::TextSegmentedControlCell> _firstCellPrefab;

  /// @brief Field _fixedCellSize, offset 0x85, size 0x1
  __declspec(property(get = __cordl_internal_get__fixedCellSize, put = __cordl_internal_set__fixedCellSize)) bool _fixedCellSize;

  /// @brief Field _fixedCellSizeAmount, offset 0x88, size 0x4
  __declspec(property(get = __cordl_internal_get__fixedCellSizeAmount, put = __cordl_internal_set__fixedCellSizeAmount)) float_t _fixedCellSizeAmount;

  /// @brief Field _fontSize, offset 0x80, size 0x4
  __declspec(property(get = __cordl_internal_get__fontSize, put = __cordl_internal_set__fontSize)) float_t _fontSize;

  /// @brief Field _hideCellBackground, offset 0x90, size 0x1
  __declspec(property(get = __cordl_internal_get__hideCellBackground, put = __cordl_internal_set__hideCellBackground)) bool _hideCellBackground;

  /// @brief Field _lastCellPrefab, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__lastCellPrefab, put = __cordl_internal_set__lastCellPrefab)) ::UnityW<::HMUI::TextSegmentedControlCell> _lastCellPrefab;

  /// @brief Field _middleCellPrefab, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get__middleCellPrefab, put = __cordl_internal_set__middleCellPrefab)) ::UnityW<::HMUI::TextSegmentedControlCell> _middleCellPrefab;

  /// @brief Field _overrideCellSize, offset 0x84, size 0x1
  __declspec(property(get = __cordl_internal_get__overrideCellSize, put = __cordl_internal_set__overrideCellSize)) bool _overrideCellSize;

  /// @brief Field _padding, offset 0x8c, size 0x4
  __declspec(property(get = __cordl_internal_get__padding, put = __cordl_internal_set__padding)) float_t _padding;

  /// @brief Field _singleCellPrefab, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get__singleCellPrefab, put = __cordl_internal_set__singleCellPrefab)) ::UnityW<::HMUI::TextSegmentedControlCell> _singleCellPrefab;

  /// @brief Field _texts, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get__texts, put = __cordl_internal_set__texts)) ::System::Collections::Generic::IReadOnlyList_1<::StringW>* _texts;

  /// @brief Convert operator to "::HMUI::__SegmentedControl__IDataSource"
  constexpr operator ::HMUI::__SegmentedControl__IDataSource*() noexcept;

  /// @brief Method CellForCellNumber, addr 0x40286ac, size 0x308, virtual true, abstract: false, final true
  inline ::UnityW<::HMUI::SegmentedControlCell> CellForCellNumber(int32_t cellNumber);

  static inline ::HMUI::TextSegmentedControl* New_ctor();

  /// @brief Method NumberOfCells, addr 0x4028600, size 0xac, virtual true, abstract: false, final true
  inline int32_t NumberOfCells();

  /// @brief Method SetTexts, addr 0x40285e8, size 0x18, virtual false, abstract: false, final false
  inline void SetTexts(::System::Collections::Generic::IReadOnlyList_1<::StringW>* texts, ::System::Collections::Generic::HashSet_1<int32_t>* disabledIndexes);

  constexpr ::System::Collections::Generic::HashSet_1<int32_t>*& __cordl_internal_get__disabledIndexes();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<int32_t>*> const& __cordl_internal_get__disabledIndexes() const;

  constexpr ::UnityW<::HMUI::TextSegmentedControlCell> const& __cordl_internal_get__firstCellPrefab() const;

  constexpr ::UnityW<::HMUI::TextSegmentedControlCell>& __cordl_internal_get__firstCellPrefab();

  constexpr bool const& __cordl_internal_get__fixedCellSize() const;

  constexpr bool& __cordl_internal_get__fixedCellSize();

  constexpr float_t const& __cordl_internal_get__fixedCellSizeAmount() const;

  constexpr float_t& __cordl_internal_get__fixedCellSizeAmount();

  constexpr float_t const& __cordl_internal_get__fontSize() const;

  constexpr float_t& __cordl_internal_get__fontSize();

  constexpr bool const& __cordl_internal_get__hideCellBackground() const;

  constexpr bool& __cordl_internal_get__hideCellBackground();

  constexpr ::UnityW<::HMUI::TextSegmentedControlCell> const& __cordl_internal_get__lastCellPrefab() const;

  constexpr ::UnityW<::HMUI::TextSegmentedControlCell>& __cordl_internal_get__lastCellPrefab();

  constexpr ::UnityW<::HMUI::TextSegmentedControlCell> const& __cordl_internal_get__middleCellPrefab() const;

  constexpr ::UnityW<::HMUI::TextSegmentedControlCell>& __cordl_internal_get__middleCellPrefab();

  constexpr bool const& __cordl_internal_get__overrideCellSize() const;

  constexpr bool& __cordl_internal_get__overrideCellSize();

  constexpr float_t const& __cordl_internal_get__padding() const;

  constexpr float_t& __cordl_internal_get__padding();

  constexpr ::UnityW<::HMUI::TextSegmentedControlCell> const& __cordl_internal_get__singleCellPrefab() const;

  constexpr ::UnityW<::HMUI::TextSegmentedControlCell>& __cordl_internal_get__singleCellPrefab();

  constexpr ::System::Collections::Generic::IReadOnlyList_1<::StringW>*& __cordl_internal_get__texts();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IReadOnlyList_1<::StringW>*> const& __cordl_internal_get__texts() const;

  constexpr void __cordl_internal_set__disabledIndexes(::System::Collections::Generic::HashSet_1<int32_t>* value);

  constexpr void __cordl_internal_set__firstCellPrefab(::UnityW<::HMUI::TextSegmentedControlCell> value);

  constexpr void __cordl_internal_set__fixedCellSize(bool value);

  constexpr void __cordl_internal_set__fixedCellSizeAmount(float_t value);

  constexpr void __cordl_internal_set__fontSize(float_t value);

  constexpr void __cordl_internal_set__hideCellBackground(bool value);

  constexpr void __cordl_internal_set__lastCellPrefab(::UnityW<::HMUI::TextSegmentedControlCell> value);

  constexpr void __cordl_internal_set__middleCellPrefab(::UnityW<::HMUI::TextSegmentedControlCell> value);

  constexpr void __cordl_internal_set__overrideCellSize(bool value);

  constexpr void __cordl_internal_set__padding(float_t value);

  constexpr void __cordl_internal_set__singleCellPrefab(::UnityW<::HMUI::TextSegmentedControlCell> value);

  constexpr void __cordl_internal_set__texts(::System::Collections::Generic::IReadOnlyList_1<::StringW>* value);

  /// @brief Method .ctor, addr 0x4028a3c, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::HMUI::__SegmentedControl__IDataSource"
  constexpr ::HMUI::__SegmentedControl__IDataSource* i___HMUI____SegmentedControl__IDataSource() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TextSegmentedControl();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TextSegmentedControl", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TextSegmentedControl(TextSegmentedControl&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TextSegmentedControl", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TextSegmentedControl(TextSegmentedControl const&) = delete;

  /// @brief Field _fontSize, offset: 0x80, size: 0x4, def value: None
  float_t ____fontSize;

  /// @brief Field _overrideCellSize, offset: 0x84, size: 0x1, def value: None
  bool ____overrideCellSize;

  /// @brief Field _fixedCellSize, offset: 0x85, size: 0x1, def value: None
  bool ____fixedCellSize;

  /// @brief Field _fixedCellSizeAmount, offset: 0x88, size: 0x4, def value: None
  float_t ____fixedCellSizeAmount;

  /// @brief Field _padding, offset: 0x8c, size: 0x4, def value: None
  float_t ____padding;

  /// @brief Field _hideCellBackground, offset: 0x90, size: 0x1, def value: None
  bool ____hideCellBackground;

  /// @brief Field _firstCellPrefab, offset: 0x98, size: 0x8, def value: None
  ::UnityW<::HMUI::TextSegmentedControlCell> ____firstCellPrefab;

  /// @brief Field _lastCellPrefab, offset: 0xa0, size: 0x8, def value: None
  ::UnityW<::HMUI::TextSegmentedControlCell> ____lastCellPrefab;

  /// @brief Field _singleCellPrefab, offset: 0xa8, size: 0x8, def value: None
  ::UnityW<::HMUI::TextSegmentedControlCell> ____singleCellPrefab;

  /// @brief Field _middleCellPrefab, offset: 0xb0, size: 0x8, def value: None
  ::UnityW<::HMUI::TextSegmentedControlCell> ____middleCellPrefab;

  /// @brief Field _texts, offset: 0xb8, size: 0x8, def value: None
  ::System::Collections::Generic::IReadOnlyList_1<::StringW>* ____texts;

  /// @brief Field _disabledIndexes, offset: 0xc0, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<int32_t>* ____disabledIndexes;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18713 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::TextSegmentedControl, 0xc8>, "Size mismatch!");

static_assert(offsetof(::HMUI::TextSegmentedControl, ____fontSize) == 0x80, "Offset mismatch!");

static_assert(offsetof(::HMUI::TextSegmentedControl, ____overrideCellSize) == 0x84, "Offset mismatch!");

static_assert(offsetof(::HMUI::TextSegmentedControl, ____fixedCellSize) == 0x85, "Offset mismatch!");

static_assert(offsetof(::HMUI::TextSegmentedControl, ____fixedCellSizeAmount) == 0x88, "Offset mismatch!");

static_assert(offsetof(::HMUI::TextSegmentedControl, ____padding) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::HMUI::TextSegmentedControl, ____hideCellBackground) == 0x90, "Offset mismatch!");

static_assert(offsetof(::HMUI::TextSegmentedControl, ____firstCellPrefab) == 0x98, "Offset mismatch!");

static_assert(offsetof(::HMUI::TextSegmentedControl, ____lastCellPrefab) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::HMUI::TextSegmentedControl, ____singleCellPrefab) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::HMUI::TextSegmentedControl, ____middleCellPrefab) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::HMUI::TextSegmentedControl, ____texts) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::HMUI::TextSegmentedControl, ____disabledIndexes) == 0xc0, "Offset mismatch!");

} // namespace HMUI
NEED_NO_BOX(::HMUI::TextSegmentedControl);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::TextSegmentedControl*, "HMUI", "TextSegmentedControl");
