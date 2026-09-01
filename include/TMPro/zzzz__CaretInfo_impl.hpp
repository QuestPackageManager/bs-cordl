#pragma once
// IWYU pragma private; include "TMPro\CaretInfo.hpp"
#include "TMPro/zzzz__CaretPosition_impl.hpp"
#include "TMPro/zzzz__CaretInfo_def.hpp"
#include "TMPro/zzzz__CaretPosition_def.hpp"
//  Writing Method size for method: ::TMPro::CaretInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::CaretInfo::*)(int32_t, ::TMPro::CaretPosition)>(&::TMPro::CaretInfo::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69a7198;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::CaretInfo>(), { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::TMPro::CaretPosition>() } })));
    return ___internal_method;
  }
};
inline void TMPro::CaretInfo::_ctor(int32_t index, ::TMPro::CaretPosition position) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::CaretInfo>(), { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::TMPro::CaretPosition>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index, position);
}
// Ctor Parameters [CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "position", ty: "::TMPro::CaretPosition", modifiers: "", def_value: Some("{}") }]
constexpr ::TMPro::CaretInfo::CaretInfo(int32_t index, ::TMPro::CaretPosition position) noexcept {
  this->index = index;
  this->position = position;
}
// Ctor Parameters []
constexpr ::TMPro::CaretInfo::CaretInfo() {}
