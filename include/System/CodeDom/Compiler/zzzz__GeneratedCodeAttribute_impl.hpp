#pragma once
// IWYU pragma private; include "System/CodeDom/Compiler/GeneratedCodeAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/CodeDom/Compiler/zzzz__GeneratedCodeAttribute_def.hpp"
//  Writing Method size for method: ::System::CodeDom::Compiler::GeneratedCodeAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::CodeDom::Compiler::GeneratedCodeAttribute::*)(::StringW, ::StringW)>(
    &::System::CodeDom::Compiler::GeneratedCodeAttribute::_ctor)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x63914f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::CodeDom::Compiler::GeneratedCodeAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::CodeDom::Compiler::GeneratedCodeAttribute::__cordl_internal_get_tool() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tool;
}
constexpr ::StringW const& System::CodeDom::Compiler::GeneratedCodeAttribute::__cordl_internal_get_tool() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tool;
}
constexpr void System::CodeDom::Compiler::GeneratedCodeAttribute::__cordl_internal_set_tool(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___tool = value;
}
constexpr ::StringW& System::CodeDom::Compiler::GeneratedCodeAttribute::__cordl_internal_get_version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
constexpr ::StringW const& System::CodeDom::Compiler::GeneratedCodeAttribute::__cordl_internal_get_version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
constexpr void System::CodeDom::Compiler::GeneratedCodeAttribute::__cordl_internal_set_version(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___version = value;
}
inline void System::CodeDom::Compiler::GeneratedCodeAttribute::_ctor(::StringW tool, ::StringW version) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::CodeDom::Compiler::GeneratedCodeAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tool, version);
}
inline ::System::CodeDom::Compiler::GeneratedCodeAttribute* System::CodeDom::Compiler::GeneratedCodeAttribute::New_ctor(::StringW tool, ::StringW version) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::CodeDom::Compiler::GeneratedCodeAttribute*>(tool, version));
}
// Ctor Parameters []
constexpr ::System::CodeDom::Compiler::GeneratedCodeAttribute::GeneratedCodeAttribute() {}
