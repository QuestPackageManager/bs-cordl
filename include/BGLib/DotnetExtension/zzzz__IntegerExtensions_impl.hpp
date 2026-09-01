#pragma once
// IWYU pragma private; include "BGLib\DotnetExtension\IntegerExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BGLib/DotnetExtension/zzzz__IntegerExtensions_def.hpp"
//  Writing Method size for method: ::BGLib::DotnetExtension::IntegerExtensions.ToUInt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::by_ref<uint32_t>, ::by_ref<bool>)>(&::BGLib::DotnetExtension::IntegerExtensions::ToUInt)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x330d2c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::DotnetExtension::IntegerExtensions*>(),
                                                             { "ToUInt", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::by_ref<bool>>() } })));
    return ___internal_method;
  }
};
inline void BGLib::DotnetExtension::IntegerExtensions::ToUInt(int32_t number, ::by_ref<uint32_t> uNumber, ::by_ref<bool> isNegative) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::DotnetExtension::IntegerExtensions*>(),
                                                           { "ToUInt", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::by_ref<bool>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, number, uNumber, isNegative);
}
// Ctor Parameters []
constexpr ::BGLib::DotnetExtension::IntegerExtensions::IntegerExtensions() {}
