#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(EnumTableViewDataSource_1)
namespace HMUI {
class TableView;
}
namespace HMUI {
class TableCell;
}
namespace HMUI {
class __TableView__IDataSource;
}
namespace GlobalNamespace {
class TextOnlyTableCell;
}
// Forward declare root types
namespace GlobalNamespace {
template <typename T> class EnumTableViewDataSource_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::EnumTableViewDataSource_1);
// Type: ::EnumTableViewDataSource`1
// SizeInfo { instance_size: 48, native_size: 48, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4684))
// CS Name: ::EnumTableViewDataSource`1<T>*
class CORDL_TYPE EnumTableViewDataSource_1 : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _cellPrefab, offset 0x18, size 0x8
  __declspec(property(get = __get__cellPrefab, put = __set__cellPrefab))::GlobalNamespace::TextOnlyTableCell* _cellPrefab;

  /// @brief Field _cellHeight, offset 0x20, size 0x4
  __declspec(property(get = __get__cellHeight, put = __set__cellHeight)) float_t _cellHeight;

  /// @brief Field _values, offset 0x28, size 0x8
  __declspec(property(get = __get__values, put = __set__values))::ArrayW<T, ::Array<T>*> _values;

  /// @brief Convert operator to "::HMUI::__TableView__IDataSource"
  constexpr operator ::HMUI::__TableView__IDataSource*() noexcept;

  constexpr ::GlobalNamespace::TextOnlyTableCell*& __get__cellPrefab();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::TextOnlyTableCell*> const& __get__cellPrefab() const;

  constexpr void __set__cellPrefab(::GlobalNamespace::TextOnlyTableCell* value);

  constexpr float_t& __get__cellHeight();

  constexpr float_t const& __get__cellHeight() const;

  constexpr void __set__cellHeight(float_t value);

  constexpr ::ArrayW<T, ::Array<T>*>& __get__values();

  constexpr ::ArrayW<T, ::Array<T>*> const& __get__values() const;

  constexpr void __set__values(::ArrayW<T, ::Array<T>*> value);

  /// @brief Method CellSize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline float_t CellSize();

  /// @brief Method NumberOfCells, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline int32_t NumberOfCells();

  /// @brief Method CellForIdx, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::HMUI::TableCell* CellForIdx(::HMUI::TableView* tableView, int32_t idx);

  /// @brief Method GetIdForValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t GetIdForValue(T value);

  /// @brief Method GetLabelForId, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::StringW GetLabelForId(int32_t id);

  /// @brief Method GetValueForId, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T GetValueForId(int32_t id);

  /// @brief Method GetLabelForValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW GetLabelForValue(T value);

  static inline ::GlobalNamespace::EnumTableViewDataSource_1<T>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "EnumTableViewDataSource_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EnumTableViewDataSource_1(EnumTableViewDataSource_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EnumTableViewDataSource_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EnumTableViewDataSource_1(EnumTableViewDataSource_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EnumTableViewDataSource_1();

public:
  /// @brief Field _cellPrefab, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::TextOnlyTableCell* ____cellPrefab;

  /// @brief Field _cellHeight, offset: 0x20, size: 0x4, def value: None
  float_t ____cellHeight;

  /// @brief Field _values, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<T, ::Array<T>*> ____values;

  /// @brief Field kCellReuseIdentifier offset 0xffffffff size 0x8
  static constexpr ::ConstString kCellReuseIdentifier{ u"Cell" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::EnumTableViewDataSource_1, "", "EnumTableViewDataSource`1");
