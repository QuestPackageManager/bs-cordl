#pragma once
// IWYU pragma private; include "System/Globalization/HebrewNumberParsingContext.hpp"
#include "System/Globalization/zzzz__HebrewNumber_impl.hpp"
#include "System/Globalization/zzzz__HebrewNumberParsingContext_def.hpp"
//  Writing Method size for method: ::System::Globalization::HebrewNumberParsingContext._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Globalization::HebrewNumberParsingContext::*)(int32_t)>(&::System::Globalization::HebrewNumberParsingContext::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5bbab5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::HebrewNumberParsingContext>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline void System::Globalization::HebrewNumberParsingContext::_ctor(int32_t result) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::HebrewNumberParsingContext>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, result);
}
// Ctor Parameters [CppParam { name: "state", ty: "::System::Globalization::HebrewNumber_HS", modifiers: "", def_value: Some("{}") }, CppParam { name: "result", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }]
constexpr ::System::Globalization::HebrewNumberParsingContext::HebrewNumberParsingContext(::System::Globalization::HebrewNumber_HS state, int32_t result) noexcept {
  this->state = state;
  this->result = result;
}
// Ctor Parameters []
constexpr ::System::Globalization::HebrewNumberParsingContext::HebrewNumberParsingContext() {}
