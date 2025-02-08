#pragma once
// IWYU pragma private; include "GlobalNamespace/EnumTableViewDataSource_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__TableView_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(EnumTableViewDataSource_1)
namespace GlobalNamespace {
class TextOnlyTableCell;
}
namespace HMUI {
class TableCell;
}
namespace HMUI {
class TableView;
}
// Forward declare root types
namespace GlobalNamespace {
template <typename T> class EnumTableViewDataSource_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::EnumTableViewDataSource_1);
// Dependencies HMUI.TableView::IDataSource, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: false
// CS Name: EnumTableViewDataSource`1<T>
class CORDL_TYPE EnumTableViewDataSource_1 : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _cellHeight, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__cellHeight, put = __cordl_internal_set__cellHeight)) float_t _cellHeight;

  /// @brief Field _cellPrefab, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__cellPrefab, put = __cordl_internal_set__cellPrefab)) ::UnityW<::GlobalNamespace::TextOnlyTableCell> _cellPrefab;

  /// @brief Field _values, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__values, put = __cordl_internal_set__values)) ::ArrayW<T, ::Array<T>*> _values;

  /// @brief Convert operator to "::HMUI::TableView_IDataSource"
  constexpr operator ::HMUI::TableView_IDataSource*() noexcept;

  /// @brief Method CellForIdx, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::UnityW<::HMUI::TableCell> CellForIdx(::HMUI::TableView* tableView, int32_t idx);

  /// @brief Method CellSize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline float_t CellSize(int32_t idx);

  /// @brief Method GetIdForValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t GetIdForValue(T value);

  /// @brief Method GetLabelForId, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::StringW GetLabelForId(int32_t id);

  /// @brief Method GetLabelForValue, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW GetLabelForValue(T value);

  /// @brief Method GetValueForId, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T GetValueForId(int32_t id);

  static inline ::GlobalNamespace::EnumTableViewDataSource_1<T>* New_ctor();

  /// @brief Method NumberOfCells, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline int32_t NumberOfCells();

  constexpr float_t const& __cordl_internal_get__cellHeight() const;

  constexpr float_t& __cordl_internal_get__cellHeight();

  constexpr ::UnityW<::GlobalNamespace::TextOnlyTableCell> const& __cordl_internal_get__cellPrefab() const;

  constexpr ::UnityW<::GlobalNamespace::TextOnlyTableCell>& __cordl_internal_get__cellPrefab();

  constexpr ::ArrayW<T, ::Array<T>*> const& __cordl_internal_get__values() const;

  constexpr ::ArrayW<T, ::Array<T>*>& __cordl_internal_get__values();

  constexpr void __cordl_internal_set__cellHeight(float_t value);

  constexpr void __cordl_internal_set__cellPrefab(::UnityW<::GlobalNamespace::TextOnlyTableCell> value);

  constexpr void __cordl_internal_set__values(::ArrayW<T, ::Array<T>*> value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::HMUI::TableView_IDataSource"
  constexpr ::HMUI::TableView_IDataSource* i___HMUI__TableView_IDataSource() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EnumTableViewDataSource_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EnumTableViewDataSource_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EnumTableViewDataSource_1(EnumTableViewDataSource_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EnumTableViewDataSource_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EnumTableViewDataSource_1(EnumTableViewDataSource_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5188 };

  /// @brief Field kCellReuseIdentifier offset 0xffffffff size 0x8
  static constexpr ::ConstString kCellReuseIdentifier{ u"Cell" };

  /// @brief Field _cellPrefab, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::TextOnlyTableCell> ____cellPrefab;

  /// @brief Field _cellHeight, offset: 0x28, size: 0x4, def value: None
  float_t ____cellHeight;

  /// @brief Field _values, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<T, ::Array<T>*> ____values;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::EnumTableViewDataSource_1, "", "EnumTableViewDataSource`1");
