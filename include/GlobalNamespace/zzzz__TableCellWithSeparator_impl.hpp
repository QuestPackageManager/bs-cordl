#pragma once
// IWYU pragma private; include "GlobalNamespace/TableCellWithSeparator.hpp"
#include "HMUI/zzzz__TableCell_impl.hpp"
#include "GlobalNamespace/zzzz__TableCellWithSeparator_def.hpp"
#include "HMUI/zzzz__ITableCellOwner_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TableCellWithSeparator.TableViewSetup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TableCellWithSeparator::*)(::HMUI::ITableCellOwner*, int32_t)>(
    &::GlobalNamespace::TableCellWithSeparator::TableViewSetup)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5875d0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::TableCellWithSeparator*>(), { ::i2c::class_of<::GlobalNamespace::TableCellWithSeparator*>(), 28 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TableCellWithSeparator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TableCellWithSeparator::*)()>(&::GlobalNamespace::TableCellWithSeparator::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5875de8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TableCellWithSeparator*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::TableCellWithSeparator::__cordl_internal_get__separator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____separator;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::TableCellWithSeparator::__cordl_internal_get__separator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____separator;
}
constexpr void GlobalNamespace::TableCellWithSeparator::__cordl_internal_set__separator(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____separator = value;
}
inline void GlobalNamespace::TableCellWithSeparator::TableViewSetup(::HMUI::ITableCellOwner* tableCellOwner, int32_t idx) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::TableCellWithSeparator*>(), 28 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tableCellOwner, idx);
}
inline void GlobalNamespace::TableCellWithSeparator::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TableCellWithSeparator*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::TableCellWithSeparator* GlobalNamespace::TableCellWithSeparator::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TableCellWithSeparator*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TableCellWithSeparator::TableCellWithSeparator() {}
