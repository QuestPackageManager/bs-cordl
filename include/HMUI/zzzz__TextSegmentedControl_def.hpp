#pragma once
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
template <typename T> class IReadOnlyList_1;
}
namespace UnityEngine {
class Object;
}
namespace Zenject {
class DiContainer;
}
// Forward declare root types
namespace HMUI {
class TextSegmentedControl;
}
// Write type traits
MARK_REF_PTR_T(::HMUI::TextSegmentedControl);
// Type: HMUI::TextSegmentedControl
// SizeInfo { instance_size: 152, native_size: -1, calculated_instance_size: 152, calculated_native_size: 152, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13550))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13552))
// CS Name: ::HMUI::TextSegmentedControl*
class CORDL_TYPE TextSegmentedControl : public ::HMUI::SegmentedControl {
public:
  // Declarations
  /// @brief Field _fontSize, offset 0x58, size 0x4
  __declspec(property(get = __get__fontSize, put = __set__fontSize)) float_t _fontSize;

  /// @brief Field _overrideCellSize, offset 0x5c, size 0x1
  __declspec(property(get = __get__overrideCellSize, put = __set__overrideCellSize)) bool _overrideCellSize;

  /// @brief Field _padding, offset 0x60, size 0x4
  __declspec(property(get = __get__padding, put = __set__padding)) float_t _padding;

  /// @brief Field _hideCellBackground, offset 0x64, size 0x1
  __declspec(property(get = __get__hideCellBackground, put = __set__hideCellBackground)) bool _hideCellBackground;

  /// @brief Field _firstCellPrefab, offset 0x68, size 0x8
  __declspec(property(get = __get__firstCellPrefab, put = __set__firstCellPrefab))::HMUI::TextSegmentedControlCell* _firstCellPrefab;

  /// @brief Field _lastCellPrefab, offset 0x70, size 0x8
  __declspec(property(get = __get__lastCellPrefab, put = __set__lastCellPrefab))::HMUI::TextSegmentedControlCell* _lastCellPrefab;

  /// @brief Field _singleCellPrefab, offset 0x78, size 0x8
  __declspec(property(get = __get__singleCellPrefab, put = __set__singleCellPrefab))::HMUI::TextSegmentedControlCell* _singleCellPrefab;

  /// @brief Field _middleCellPrefab, offset 0x80, size 0x8
  __declspec(property(get = __get__middleCellPrefab, put = __set__middleCellPrefab))::HMUI::TextSegmentedControlCell* _middleCellPrefab;

  /// @brief Field _container, offset 0x88, size 0x8
  __declspec(property(get = __get__container, put = __set__container))::Zenject::DiContainer* _container;

  /// @brief Field _texts, offset 0x90, size 0x8
  __declspec(property(get = __get__texts, put = __set__texts))::System::Collections::Generic::IReadOnlyList_1<::StringW>* _texts;

  /// @brief Convert operator to "::HMUI::__SegmentedControl__IDataSource"
  constexpr operator ::HMUI::__SegmentedControl__IDataSource*() noexcept;

  /// @brief Convert to "::HMUI::__SegmentedControl__IDataSource"
  constexpr ::HMUI::__SegmentedControl__IDataSource* i___HMUI____SegmentedControl__IDataSource() noexcept;

  constexpr float_t& __get__fontSize();

  constexpr float_t const& __get__fontSize() const;

  constexpr void __set__fontSize(float_t value);

  constexpr bool& __get__overrideCellSize();

  constexpr bool const& __get__overrideCellSize() const;

  constexpr void __set__overrideCellSize(bool value);

  constexpr float_t& __get__padding();

  constexpr float_t const& __get__padding() const;

  constexpr void __set__padding(float_t value);

  constexpr bool& __get__hideCellBackground();

  constexpr bool const& __get__hideCellBackground() const;

  constexpr void __set__hideCellBackground(bool value);

  constexpr ::HMUI::TextSegmentedControlCell*& __get__firstCellPrefab();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::TextSegmentedControlCell*> const& __get__firstCellPrefab() const;

  constexpr void __set__firstCellPrefab(::HMUI::TextSegmentedControlCell* value);

  constexpr ::HMUI::TextSegmentedControlCell*& __get__lastCellPrefab();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::TextSegmentedControlCell*> const& __get__lastCellPrefab() const;

  constexpr void __set__lastCellPrefab(::HMUI::TextSegmentedControlCell* value);

  constexpr ::HMUI::TextSegmentedControlCell*& __get__singleCellPrefab();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::TextSegmentedControlCell*> const& __get__singleCellPrefab() const;

  constexpr void __set__singleCellPrefab(::HMUI::TextSegmentedControlCell* value);

  constexpr ::HMUI::TextSegmentedControlCell*& __get__middleCellPrefab();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::TextSegmentedControlCell*> const& __get__middleCellPrefab() const;

  constexpr void __set__middleCellPrefab(::HMUI::TextSegmentedControlCell* value);

  constexpr ::Zenject::DiContainer*& __get__container();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> const& __get__container() const;

  constexpr void __set__container(::Zenject::DiContainer* value);

  constexpr ::System::Collections::Generic::IReadOnlyList_1<::StringW>*& __get__texts();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IReadOnlyList_1<::StringW>*> const& __get__texts() const;

  constexpr void __set__texts(::System::Collections::Generic::IReadOnlyList_1<::StringW>* value);

  /// @brief Method SetTexts, addr 0x212029c, size 0x18, virtual false, abstract: false, final false
  inline void SetTexts(::System::Collections::Generic::IReadOnlyList_1<::StringW>* texts);

  /// @brief Method NumberOfCells, addr 0x21202b4, size 0xac, virtual true, abstract: false, final true
  inline int32_t NumberOfCells();

  /// @brief Method CellForCellNumber, addr 0x2120360, size 0x294, virtual true, abstract: false, final true
  inline ::HMUI::SegmentedControlCell* CellForCellNumber(int32_t cellNumber);

  /// @brief Method InstantiateCell, addr 0x21205f4, size 0x180, virtual false, abstract: false, final false
  inline ::HMUI::TextSegmentedControlCell* InstantiateCell(::UnityEngine::Object* prefab);

  static inline ::HMUI::TextSegmentedControl* New_ctor();

  /// @brief Method .ctor, addr 0x21207fc, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "TextSegmentedControl", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TextSegmentedControl(TextSegmentedControl&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TextSegmentedControl", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TextSegmentedControl(TextSegmentedControl const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TextSegmentedControl();

public:
  /// @brief Field _fontSize, offset: 0x58, size: 0x4, def value: None
  float_t ____fontSize;

  /// @brief Field _overrideCellSize, offset: 0x5c, size: 0x1, def value: None
  bool ____overrideCellSize;

  /// @brief Field _padding, offset: 0x60, size: 0x4, def value: None
  float_t ____padding;

  /// @brief Field _hideCellBackground, offset: 0x64, size: 0x1, def value: None
  bool ____hideCellBackground;

  /// @brief Field _firstCellPrefab, offset: 0x68, size: 0x8, def value: None
  ::HMUI::TextSegmentedControlCell* ____firstCellPrefab;

  /// @brief Field _lastCellPrefab, offset: 0x70, size: 0x8, def value: None
  ::HMUI::TextSegmentedControlCell* ____lastCellPrefab;

  /// @brief Field _singleCellPrefab, offset: 0x78, size: 0x8, def value: None
  ::HMUI::TextSegmentedControlCell* ____singleCellPrefab;

  /// @brief Field _middleCellPrefab, offset: 0x80, size: 0x8, def value: None
  ::HMUI::TextSegmentedControlCell* ____middleCellPrefab;

  /// @brief Field _container, offset: 0x88, size: 0x8, def value: None
  ::Zenject::DiContainer* ____container;

  /// @brief Field _texts, offset: 0x90, size: 0x8, def value: None
  ::System::Collections::Generic::IReadOnlyList_1<::StringW>* ____texts;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::TextSegmentedControl, 0x98>, "Size mismatch!");

static_assert(offsetof(::HMUI::TextSegmentedControl, ____fontSize) == 0x58, "Offset mismatch!");

static_assert(offsetof(::HMUI::TextSegmentedControl, ____overrideCellSize) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::HMUI::TextSegmentedControl, ____padding) == 0x60, "Offset mismatch!");

static_assert(offsetof(::HMUI::TextSegmentedControl, ____hideCellBackground) == 0x64, "Offset mismatch!");

static_assert(offsetof(::HMUI::TextSegmentedControl, ____firstCellPrefab) == 0x68, "Offset mismatch!");

static_assert(offsetof(::HMUI::TextSegmentedControl, ____lastCellPrefab) == 0x70, "Offset mismatch!");

static_assert(offsetof(::HMUI::TextSegmentedControl, ____singleCellPrefab) == 0x78, "Offset mismatch!");

static_assert(offsetof(::HMUI::TextSegmentedControl, ____middleCellPrefab) == 0x80, "Offset mismatch!");

static_assert(offsetof(::HMUI::TextSegmentedControl, ____container) == 0x88, "Offset mismatch!");

static_assert(offsetof(::HMUI::TextSegmentedControl, ____texts) == 0x90, "Offset mismatch!");

} // namespace HMUI
NEED_NO_BOX(::HMUI::TextSegmentedControl);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::TextSegmentedControl*, "HMUI", "TextSegmentedControl");
