#pragma once
// IWYU pragma private; include "System\DTSubString.hpp"
#include "System/zzzz__DTSubStringType_impl.hpp"
#include "System/zzzz__ReadOnlySpan_1_impl.hpp"
#include "System/zzzz__DTSubString_def.hpp"
//  Writing Method size for method: ::System::DTSubString.get_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (::System::DTSubString::*)(int32_t)>(&::System::DTSubString::get_Item)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5c406d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DTSubString>(), { "get_Item", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline char16_t System::DTSubString::get_Item(int32_t relativeIndex) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DTSubString>(), { "get_Item", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<char16_t>(*this, ___internal_method, relativeIndex);
}
// Ctor Parameters [CppParam { name: "s", ty: "::System::ReadOnlySpan_1<char16_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "index", ty: "int32_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "length", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "type", ty: "::System::DTSubStringType", modifiers: "", def_value: Some("{}") },
// CppParam { name: "value", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::DTSubString::DTSubString(::System::ReadOnlySpan_1<char16_t> s, int32_t index, int32_t length, ::System::DTSubStringType type, int32_t value) noexcept {
  this->s = s;
  this->index = index;
  this->length = length;
  this->type = type;
  this->value = value;
}
// Ctor Parameters []
constexpr ::System::DTSubString::DTSubString() {}
