#pragma once
// IWYU pragma private; include "System\Xml\BinaryCompatibility.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/zzzz__BinaryCompatibility_def.hpp"
//  Writing Method size for method: ::System::Xml::BinaryCompatibility.get_TargetsAtLeast_Desktop_V4_5_2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::System::Xml::BinaryCompatibility::get_TargetsAtLeast_Desktop_V4_5_2)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62e7ca0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::BinaryCompatibility*>(), { "get_TargetsAtLeast_Desktop_V4_5_2", {}, {} })));
    return ___internal_method;
  }
};
inline bool System::Xml::BinaryCompatibility::get_TargetsAtLeast_Desktop_V4_5_2() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::BinaryCompatibility*>(), { "get_TargetsAtLeast_Desktop_V4_5_2", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Xml::BinaryCompatibility::BinaryCompatibility() {}
