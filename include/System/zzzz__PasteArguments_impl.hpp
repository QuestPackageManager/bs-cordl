#pragma once
// IWYU pragma private; include "System\PasteArguments.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__PasteArguments_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
//  Writing Method size for method: ::System::PasteArguments.AppendArgument
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Text::StringBuilder*, ::StringW)>(&::System::PasteArguments::AppendArgument)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x6373644;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::PasteArguments*>(), { "AppendArgument", {}, { ::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::PasteArguments.ContainsNoWhitespaceOrQuotes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::System::PasteArguments::ContainsNoWhitespaceOrQuotes)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6373830;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::PasteArguments*>(), { "ContainsNoWhitespaceOrQuotes", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
inline void System::PasteArguments::AppendArgument(::System::Text::StringBuilder* stringBuilder, ::StringW argument) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::PasteArguments*>(), { "AppendArgument", {}, { ::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, stringBuilder, argument);
}
inline bool System::PasteArguments::ContainsNoWhitespaceOrQuotes(::StringW s) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::PasteArguments*>(), { "ContainsNoWhitespaceOrQuotes", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, s);
}
// Ctor Parameters []
constexpr ::System::PasteArguments::PasteArguments() {}
