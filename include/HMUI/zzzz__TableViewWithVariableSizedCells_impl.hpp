#pragma once
// IWYU pragma private; include "HMUI/TableViewWithVariableSizedCells.hpp"
#include "HMUI/zzzz__TableView_impl.hpp"
#include "HMUI/zzzz__TableViewWithVariableSizedCells_def.hpp"
//  Writing Method size for method: ::HMUI::TableViewWithVariableSizedCells.get_contentSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::HMUI::TableViewWithVariableSizedCells::*)()>(&::HMUI::TableViewWithVariableSizedCells::get_contentSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5892dc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::HMUI::TableViewWithVariableSizedCells*>(), { ::i2c::class_of<::HMUI::TableViewWithVariableSizedCells*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableViewWithVariableSizedCells.GetMinVisibleIdx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::HMUI::TableViewWithVariableSizedCells::*)()>(&::HMUI::TableViewWithVariableSizedCells::GetMinVisibleIdx)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5892dd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::HMUI::TableViewWithVariableSizedCells*>(), { ::i2c::class_of<::HMUI::TableViewWithVariableSizedCells*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableViewWithVariableSizedCells.GetMaxVisibleIdx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::HMUI::TableViewWithVariableSizedCells::*)()>(&::HMUI::TableViewWithVariableSizedCells::GetMaxVisibleIdx)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5892ea0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::HMUI::TableViewWithVariableSizedCells*>(), { ::i2c::class_of<::HMUI::TableViewWithVariableSizedCells*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableViewWithVariableSizedCells.GetCellSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::HMUI::TableViewWithVariableSizedCells::*)(int32_t)>(&::HMUI::TableViewWithVariableSizedCells::GetCellSize)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5892f90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::HMUI::TableViewWithVariableSizedCells*>(), { ::i2c::class_of<::HMUI::TableViewWithVariableSizedCells*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableViewWithVariableSizedCells.GetCellPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::HMUI::TableViewWithVariableSizedCells::*)(int32_t)>(&::HMUI::TableViewWithVariableSizedCells::GetCellPosition)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5892fc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::HMUI::TableViewWithVariableSizedCells*>(), { ::i2c::class_of<::HMUI::TableViewWithVariableSizedCells*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableViewWithVariableSizedCells.UpdateCachedData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::TableViewWithVariableSizedCells::*)()>(&::HMUI::TableViewWithVariableSizedCells::UpdateCachedData)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x5893010;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::HMUI::TableViewWithVariableSizedCells*>(), { ::i2c::class_of<::HMUI::TableViewWithVariableSizedCells*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableViewWithVariableSizedCells._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::TableViewWithVariableSizedCells::*)()>(&::HMUI::TableViewWithVariableSizedCells::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5893204;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TableViewWithVariableSizedCells*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr float_t& HMUI::TableViewWithVariableSizedCells::__cordl_internal_get__totalHeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____totalHeight;
}
constexpr float_t const& HMUI::TableViewWithVariableSizedCells::__cordl_internal_get__totalHeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____totalHeight;
}
constexpr void HMUI::TableViewWithVariableSizedCells::__cordl_internal_set__totalHeight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____totalHeight = value;
}
constexpr ::ArrayW<float_t>& HMUI::TableViewWithVariableSizedCells::__cordl_internal_get__cachedCellSizes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cachedCellSizes;
}
constexpr ::ArrayW<float_t> const& HMUI::TableViewWithVariableSizedCells::__cordl_internal_get__cachedCellSizes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cachedCellSizes;
}
constexpr void HMUI::TableViewWithVariableSizedCells::__cordl_internal_set__cachedCellSizes(::ArrayW<float_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cachedCellSizes = value;
}
constexpr ::ArrayW<float_t>& HMUI::TableViewWithVariableSizedCells::__cordl_internal_get__cachedCumulativeCellSizes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cachedCumulativeCellSizes;
}
constexpr ::ArrayW<float_t> const& HMUI::TableViewWithVariableSizedCells::__cordl_internal_get__cachedCumulativeCellSizes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cachedCumulativeCellSizes;
}
constexpr void HMUI::TableViewWithVariableSizedCells::__cordl_internal_set__cachedCumulativeCellSizes(::ArrayW<float_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cachedCumulativeCellSizes = value;
}
inline float_t HMUI::TableViewWithVariableSizedCells::get_contentSize() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::HMUI::TableViewWithVariableSizedCells*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline int32_t HMUI::TableViewWithVariableSizedCells::GetMinVisibleIdx() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::HMUI::TableViewWithVariableSizedCells*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t HMUI::TableViewWithVariableSizedCells::GetMaxVisibleIdx() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::HMUI::TableViewWithVariableSizedCells*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline float_t HMUI::TableViewWithVariableSizedCells::GetCellSize(int32_t idx) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::HMUI::TableViewWithVariableSizedCells*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, idx);
}
inline float_t HMUI::TableViewWithVariableSizedCells::GetCellPosition(int32_t idx) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::HMUI::TableViewWithVariableSizedCells*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, idx);
}
inline void HMUI::TableViewWithVariableSizedCells::UpdateCachedData() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::HMUI::TableViewWithVariableSizedCells*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HMUI::TableViewWithVariableSizedCells::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TableViewWithVariableSizedCells*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::HMUI::TableViewWithVariableSizedCells* HMUI::TableViewWithVariableSizedCells::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::HMUI::TableViewWithVariableSizedCells*>());
}
// Ctor Parameters []
constexpr ::HMUI::TableViewWithVariableSizedCells::TableViewWithVariableSizedCells() {}
