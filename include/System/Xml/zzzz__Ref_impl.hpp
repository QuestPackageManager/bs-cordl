#pragma once
// IWYU pragma private; include "System/Xml/Ref.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/zzzz__Ref_def.hpp"
//  Writing Method size for method: ::System::Xml::Ref.Equal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::StringW)>(&::System::Xml::Ref::Equal)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x62c903c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Ref*>(), { "Equal", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
inline bool System::Xml::Ref::Equal(::StringW strA, ::StringW strB) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Ref*>(), { "Equal", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, strA, strB);
}
// Ctor Parameters []
constexpr ::System::Xml::Ref::Ref() {}
