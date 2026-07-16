#pragma once
// IWYU pragma private; include "HMUI/SegmentedControlCell.hpp"
#include "HMUI/zzzz__SelectableCell_impl.hpp"
#include "HMUI/zzzz__SegmentedControlCell_def.hpp"
#include "HMUI/zzzz__SegmentedControl_def.hpp"
//  Writing Method size for method: ::HMUI::SegmentedControlCell.get_cellNumber
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::HMUI::SegmentedControlCell::*)()>(&::HMUI::SegmentedControlCell::get_cellNumber)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f51974;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::SegmentedControlCell*>(), { "get_cellNumber", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::SegmentedControlCell.set_cellNumber
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::SegmentedControlCell::*)(int32_t)>(&::HMUI::SegmentedControlCell::set_cellNumber)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f5197c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::SegmentedControlCell*>(), { "set_cellNumber", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::SegmentedControlCell.SegmentedControlSetup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::SegmentedControlCell::*)(::HMUI::SegmentedControl*, int32_t)>(&::HMUI::SegmentedControlCell::SegmentedControlSetup)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5f51614;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::HMUI::SegmentedControlCell*>(), { "SegmentedControlSetup", {}, { ::i2c::type_of<::HMUI::SegmentedControl*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::SegmentedControlCell.InternalToggle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::SegmentedControlCell::*)()>(&::HMUI::SegmentedControlCell::InternalToggle)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5f51984;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::HMUI::SegmentedControlCell*>(), { ::i2c::class_of<::HMUI::SegmentedControlCell*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::SegmentedControlCell._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::SegmentedControlCell::*)()>(&::HMUI::SegmentedControlCell::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f508dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::SegmentedControlCell*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& HMUI::SegmentedControlCell::__cordl_internal_get__cellNumber_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cellNumber_k__BackingField;
}
constexpr int32_t const& HMUI::SegmentedControlCell::__cordl_internal_get__cellNumber_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cellNumber_k__BackingField;
}
constexpr void HMUI::SegmentedControlCell::__cordl_internal_set__cellNumber_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cellNumber_k__BackingField = value;
}
constexpr ::UnityW<::HMUI::SegmentedControl>& HMUI::SegmentedControlCell::__cordl_internal_get__segmentedControl() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____segmentedControl;
}
constexpr ::UnityW<::HMUI::SegmentedControl> const& HMUI::SegmentedControlCell::__cordl_internal_get__segmentedControl() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____segmentedControl;
}
constexpr void HMUI::SegmentedControlCell::__cordl_internal_set__segmentedControl(::UnityW<::HMUI::SegmentedControl> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____segmentedControl = value;
}
inline int32_t HMUI::SegmentedControlCell::get_cellNumber() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::SegmentedControlCell*>(), { "get_cellNumber", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void HMUI::SegmentedControlCell::set_cellNumber(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::SegmentedControlCell*>(), { "set_cellNumber", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void HMUI::SegmentedControlCell::SegmentedControlSetup(::HMUI::SegmentedControl* segmentedControl, int32_t cellNumber) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::HMUI::SegmentedControlCell*>(), { "SegmentedControlSetup", {}, { ::i2c::type_of<::HMUI::SegmentedControl*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, segmentedControl, cellNumber);
}
inline void HMUI::SegmentedControlCell::InternalToggle() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::HMUI::SegmentedControlCell*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HMUI::SegmentedControlCell::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::SegmentedControlCell*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::HMUI::SegmentedControlCell* HMUI::SegmentedControlCell::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::HMUI::SegmentedControlCell*>());
}
// Ctor Parameters []
constexpr ::HMUI::SegmentedControlCell::SegmentedControlCell() {}
