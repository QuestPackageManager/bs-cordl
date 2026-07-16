#pragma once
// IWYU pragma private; include "System/Buffers/Text/FormattingHelpers.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Buffers/Text/zzzz__FormattingHelpers_def.hpp"
//  Writing Method size for method: ::System::Buffers::Text::FormattingHelpers.CountDigits
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(uint64_t)>(&::System::Buffers::Text::FormattingHelpers::CountDigits)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5bf1d6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Buffers::Text::FormattingHelpers*>(), { "CountDigits", {}, { ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::Text::FormattingHelpers.CountDigits
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(uint32_t)>(&::System::Buffers::Text::FormattingHelpers::CountDigits)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5bf1e48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Buffers::Text::FormattingHelpers*>(), { "CountDigits", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::Text::FormattingHelpers.CountHexDigits
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(uint64_t)>(&::System::Buffers::Text::FormattingHelpers::CountHexDigits)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5bf1eb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Buffers::Text::FormattingHelpers*>(), { "CountHexDigits", {}, { ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
inline int32_t System::Buffers::Text::FormattingHelpers::CountDigits(uint64_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Buffers::Text::FormattingHelpers*>(), { "CountDigits", {}, { ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, value);
}
inline int32_t System::Buffers::Text::FormattingHelpers::CountDigits(uint32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Buffers::Text::FormattingHelpers*>(), { "CountDigits", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, value);
}
inline int32_t System::Buffers::Text::FormattingHelpers::CountHexDigits(uint64_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Buffers::Text::FormattingHelpers*>(), { "CountHexDigits", {}, { ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::System::Buffers::Text::FormattingHelpers::FormattingHelpers() {}
