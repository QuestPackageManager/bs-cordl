#pragma once
// IWYU pragma private; include "System/Runtime/HashHelper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/zzzz__HashHelper_def.hpp"
//  Writing Method size for method: ::System::Runtime::HashHelper.ComputeHash
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::ArrayW<uint8_t>)>(&::System::Runtime::HashHelper::ComputeHash)> {
  constexpr static std::size_t size = 0x548;
  constexpr static std::size_t addrs = 0x6181c68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::HashHelper*>(), { "ComputeHash", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
inline ::ArrayW<uint8_t> System::Runtime::HashHelper::ComputeHash(::ArrayW<uint8_t> buffer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::HashHelper*>(), { "ComputeHash", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, buffer);
}
// Ctor Parameters []
constexpr ::System::Runtime::HashHelper::HashHelper() {}
