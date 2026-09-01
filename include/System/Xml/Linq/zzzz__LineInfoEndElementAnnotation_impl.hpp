#pragma once
// IWYU pragma private; include "System\Xml\Linq\LineInfoEndElementAnnotation.hpp"
#include "System/Xml/Linq/zzzz__LineInfoAnnotation_impl.hpp"
#include "System/Xml/Linq/zzzz__LineInfoEndElementAnnotation_def.hpp"
//  Writing Method size for method: ::System::Xml::Linq::LineInfoEndElementAnnotation._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Linq::LineInfoEndElementAnnotation::*)(int32_t, int32_t)>(&::System::Xml::Linq::LineInfoEndElementAnnotation::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61a31cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Linq::LineInfoEndElementAnnotation*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline void System::Xml::Linq::LineInfoEndElementAnnotation::_ctor(int32_t lineNumber, int32_t linePosition) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Linq::LineInfoEndElementAnnotation*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lineNumber, linePosition);
}
inline ::System::Xml::Linq::LineInfoEndElementAnnotation* System::Xml::Linq::LineInfoEndElementAnnotation::New_ctor(int32_t lineNumber, int32_t linePosition) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Linq::LineInfoEndElementAnnotation*>(lineNumber, linePosition));
}
// Ctor Parameters []
constexpr ::System::Xml::Linq::LineInfoEndElementAnnotation::LineInfoEndElementAnnotation() {}
