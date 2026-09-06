#pragma once
// IWYU pragma private; include "HMUI/ITableCellOwner.hpp"
#include "HMUI/zzzz__ITableCellOwner_def.hpp"
#include "HMUI/zzzz__TableViewSelectionType_def.hpp"
//  Writing Method size for method: ::HMUI::ITableCellOwner.get_selectionType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::HMUI::TableViewSelectionType (::HMUI::ITableCellOwner::*)()>(&::HMUI::ITableCellOwner::get_selectionType)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::HMUI::ITableCellOwner*>(), { ::i2c::class_of<::HMUI::ITableCellOwner*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ITableCellOwner.get_canSelectSelectedCell
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::HMUI::ITableCellOwner::*)()>(&::HMUI::ITableCellOwner::get_canSelectSelectedCell)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::HMUI::ITableCellOwner*>(), { ::i2c::class_of<::HMUI::ITableCellOwner*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ITableCellOwner.get_numberOfCells
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::HMUI::ITableCellOwner::*)()>(&::HMUI::ITableCellOwner::get_numberOfCells)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::HMUI::ITableCellOwner*>(), { ::i2c::class_of<::HMUI::ITableCellOwner*>(), 2 }));
    return ___internal_method;
  }
};
inline ::HMUI::TableViewSelectionType HMUI::ITableCellOwner::get_selectionType() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::HMUI::ITableCellOwner*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::HMUI::TableViewSelectionType>(this, ___internal_method);
}
inline bool HMUI::ITableCellOwner::get_canSelectSelectedCell() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::HMUI::ITableCellOwner*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t HMUI::ITableCellOwner::get_numberOfCells() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::HMUI::ITableCellOwner*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
