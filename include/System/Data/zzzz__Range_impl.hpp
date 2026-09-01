#pragma once
// IWYU pragma private; include "System\Data\Range.hpp"
#include "System/Data/zzzz__Range_def.hpp"
//  Writing Method size for method: ::System::Data::Range._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::Range::*)(int32_t, int32_t)>(&::System::Data::Range::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x604b470;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Range>(), { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Range.get_Count
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::Range::*)()>(&::System::Data::Range::get_Count)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x60460c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Range>(), { "get_Count", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Range.get_IsNull
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::Range::*)()>(&::System::Data::Range::get_IsNull)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6045c10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Range>(), { "get_IsNull", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Range.get_Min
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::Range::*)()>(&::System::Data::Range::get_Min)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x60460e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Range>(), { "get_Min", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Range.CheckNull
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::Range::*)()>(&::System::Data::Range::CheckNull)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x604b4b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Range>(), { "CheckNull", {}, {} })));
    return ___internal_method;
  }
};
inline void System::Data::Range::_ctor(int32_t min, int32_t max) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Range>(), { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, min, max);
}
inline int32_t System::Data::Range::get_Count() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Range>(), { "get_Count", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool System::Data::Range::get_IsNull() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Range>(), { "get_IsNull", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline int32_t System::Data::Range::get_Min() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Range>(), { "get_Min", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void System::Data::Range::CheckNull() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Range>(), { "CheckNull", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_min", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_max", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "_isNotNull", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Data::Range::Range(int32_t _min, int32_t _max, bool _isNotNull) noexcept {
  this->_min = _min;
  this->_max = _max;
  this->_isNotNull = _isNotNull;
}
// Ctor Parameters []
constexpr ::System::Data::Range::Range() {}
