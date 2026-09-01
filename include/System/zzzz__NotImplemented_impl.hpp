#pragma once
// IWYU pragma private; include "System\NotImplemented.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__NotImplemented_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: ::System::NotImplemented.get_ByDesign
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)()>(&::System::NotImplemented::get_ByDesign)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5c61ed4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::NotImplemented*>(), { "get_ByDesign", {}, {} })));
    return ___internal_method;
  }
};
inline ::System::Exception* System::NotImplemented::get_ByDesign() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::NotImplemented*>(), { "get_ByDesign", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::NotImplemented::NotImplemented() {}
