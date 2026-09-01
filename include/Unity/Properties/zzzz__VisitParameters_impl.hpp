#pragma once
// IWYU pragma private; include "Unity\Properties\VisitParameters.hpp"
#include "Unity/Properties/zzzz__VisitExceptionKind_impl.hpp"
#include "Unity/Properties/zzzz__VisitParameters_def.hpp"
#include "Unity/Properties/zzzz__VisitExceptionKind_def.hpp"
//  Writing Method size for method: ::Unity::Properties::VisitParameters.get_IgnoreExceptions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Properties::VisitExceptionKind (::Unity::Properties::VisitParameters::*)()>(
    &::Unity::Properties::VisitParameters::get_IgnoreExceptions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b9e224;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::VisitParameters>(), { "get_IgnoreExceptions", {}, {} })));
    return ___internal_method;
  }
};
inline ::Unity::Properties::VisitExceptionKind Unity::Properties::VisitParameters::get_IgnoreExceptions() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::VisitParameters>(), { "get_IgnoreExceptions", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Properties::VisitExceptionKind>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_IgnoreExceptions_k__BackingField", ty: "::Unity::Properties::VisitExceptionKind", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Properties::VisitParameters::VisitParameters(::Unity::Properties::VisitExceptionKind _IgnoreExceptions_k__BackingField) noexcept {
  this->_IgnoreExceptions_k__BackingField = _IgnoreExceptions_k__BackingField;
}
// Ctor Parameters []
constexpr ::Unity::Properties::VisitParameters::VisitParameters() {}
