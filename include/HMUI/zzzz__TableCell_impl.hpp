#pragma once
// IWYU pragma private; include "HMUI\TableCell.hpp"
#include "HMUI/zzzz__SelectableCell_impl.hpp"
#include "HMUI/zzzz__TableCell_def.hpp"
#include "HMUI/zzzz__ITableCellOwner_def.hpp"
//  Writing Method size for method: ::HMUI::TableCell.get_reuseIdentifier
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::HMUI::TableCell::*)()>(&::HMUI::TableCell::get_reuseIdentifier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x588e2f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TableCell*>(), { "get_reuseIdentifier", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableCell.set_reuseIdentifier
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::TableCell::*)(::StringW)>(&::HMUI::TableCell::set_reuseIdentifier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x588e2f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TableCell*>(), { "set_reuseIdentifier", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableCell.get_idx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::HMUI::TableCell::*)()>(&::HMUI::TableCell::get_idx)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x588e300;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TableCell*>(), { "get_idx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableCell.set_idx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::TableCell::*)(int32_t)>(&::HMUI::TableCell::set_idx)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x588e308;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TableCell*>(), { "set_idx", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableCell.get_tableCellOwner
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::HMUI::ITableCellOwner* (::HMUI::TableCell::*)()>(&::HMUI::TableCell::get_tableCellOwner)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x588e310;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TableCell*>(), { "get_tableCellOwner", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableCell.TableViewSetup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::TableCell::*)(::HMUI::ITableCellOwner*, int32_t)>(&::HMUI::TableCell::TableViewSetup)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x588e318;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::HMUI::TableCell*>(), { ::i2c::class_of<::HMUI::TableCell*>(), 28 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableCell.MoveIdx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::TableCell::*)(int32_t)>(&::HMUI::TableCell::MoveIdx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x588e324;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TableCell*>(), { "MoveIdx", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableCell.InternalToggle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::TableCell::*)()>(&::HMUI::TableCell::InternalToggle)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x588e334;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::HMUI::TableCell*>(), { ::i2c::class_of<::HMUI::TableCell*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableCell.__WasPreparedForReuse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::TableCell::*)()>(&::HMUI::TableCell::__WasPreparedForReuse)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x588e59c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TableCell*>(), { "__WasPreparedForReuse", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableCell.WasPreparedForReuse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::TableCell::*)()>(&::HMUI::TableCell::WasPreparedForReuse)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x588e5ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::HMUI::TableCell*>(), { ::i2c::class_of<::HMUI::TableCell*>(), 29 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableCell._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::TableCell::*)()>(&::HMUI::TableCell::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x588e5b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TableCell*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& HMUI::TableCell::__cordl_internal_get__idx_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____idx_k__BackingField;
}
constexpr int32_t const& HMUI::TableCell::__cordl_internal_get__idx_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____idx_k__BackingField;
}
constexpr void HMUI::TableCell::__cordl_internal_set__idx_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____idx_k__BackingField = value;
}
constexpr ::StringW& HMUI::TableCell::__cordl_internal_get__reuseIdentifier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____reuseIdentifier;
}
constexpr ::StringW const& HMUI::TableCell::__cordl_internal_get__reuseIdentifier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____reuseIdentifier;
}
constexpr void HMUI::TableCell::__cordl_internal_set__reuseIdentifier(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____reuseIdentifier = value;
}
constexpr ::HMUI::ITableCellOwner*& HMUI::TableCell::__cordl_internal_get__tableCellOwner() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tableCellOwner;
}
constexpr ::HMUI::ITableCellOwner* const& HMUI::TableCell::__cordl_internal_get__tableCellOwner() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tableCellOwner;
}
constexpr void HMUI::TableCell::__cordl_internal_set__tableCellOwner(::HMUI::ITableCellOwner* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____tableCellOwner = value;
}
inline ::StringW HMUI::TableCell::get_reuseIdentifier() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TableCell*>(), { "get_reuseIdentifier", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void HMUI::TableCell::set_reuseIdentifier(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TableCell*>(), { "set_reuseIdentifier", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t HMUI::TableCell::get_idx() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TableCell*>(), { "get_idx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void HMUI::TableCell::set_idx(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TableCell*>(), { "set_idx", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::HMUI::ITableCellOwner* HMUI::TableCell::get_tableCellOwner() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TableCell*>(), { "get_tableCellOwner", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::HMUI::ITableCellOwner*>(this, ___internal_method);
}
inline void HMUI::TableCell::TableViewSetup(::HMUI::ITableCellOwner* tableCellOwner, int32_t idx) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::HMUI::TableCell*>(), 28 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tableCellOwner, idx);
}
inline void HMUI::TableCell::MoveIdx(int32_t offset) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TableCell*>(), { "MoveIdx", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, offset);
}
inline void HMUI::TableCell::InternalToggle() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::HMUI::TableCell*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HMUI::TableCell::__WasPreparedForReuse() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TableCell*>(), { "__WasPreparedForReuse", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HMUI::TableCell::WasPreparedForReuse() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::HMUI::TableCell*>(), 29 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HMUI::TableCell::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TableCell*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::HMUI::TableCell* HMUI::TableCell::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::HMUI::TableCell*>());
}
// Ctor Parameters []
constexpr ::HMUI::TableCell::TableCell() {}
