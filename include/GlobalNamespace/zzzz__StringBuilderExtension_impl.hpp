#pragma once
// IWYU pragma private; include "GlobalNamespace\StringBuilderExtension.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__StringBuilderExtension_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::StringBuilderExtension.Swap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Text::StringBuilder*, int32_t, int32_t)>(&::GlobalNamespace::StringBuilderExtension::Swap)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x330d0bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StringBuilderExtension*>(),
                                                             { "Swap", {}, { ::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StringBuilderExtension.AppendNumber
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Text::StringBuilder*, int32_t)>(&::GlobalNamespace::StringBuilderExtension::AppendNumber)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x330d2b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StringBuilderExtension*>(),
                                                                                           { "AppendNumber", {}, { ::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StringBuilderExtension.AppendNumber
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Text::StringBuilder*, uint32_t, bool)>(&::GlobalNamespace::StringBuilderExtension::AppendNumber)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x330d2dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StringBuilderExtension*>(),
                                                             { "AppendNumber", {}, { ::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::StringBuilderExtension::Swap(::System::Text::StringBuilder* sb, int32_t startIndex, int32_t endIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StringBuilderExtension*>(),
                                                           { "Swap", {}, { ::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sb, startIndex, endIndex);
}
inline void GlobalNamespace::StringBuilderExtension::AppendNumber(::System::Text::StringBuilder* sb, int32_t number) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StringBuilderExtension*>(),
                                                                                         { "AppendNumber", {}, { ::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sb, number);
}
inline void GlobalNamespace::StringBuilderExtension::AppendNumber(::System::Text::StringBuilder* sb, uint32_t uNumber, bool isNegative) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StringBuilderExtension*>(),
                                                           { "AppendNumber", {}, { ::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sb, uNumber, isNegative);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::StringBuilderExtension::StringBuilderExtension() {}
