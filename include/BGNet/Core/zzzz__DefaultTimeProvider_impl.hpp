#pragma once
// IWYU pragma private; include "BGNet\Core\DefaultTimeProvider.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BGNet/Core/zzzz__DefaultTimeProvider_def.hpp"
#include "BGNet/Core/zzzz__ITimeProvider_def.hpp"
//  Writing Method size for method: ::BGNet::Core::DefaultTimeProvider.get_instance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BGNet::Core::ITimeProvider* (*)()>(&::BGNet::Core::DefaultTimeProvider::get_instance)> {
  constexpr static std::size_t size = 0x564;
  constexpr static std::size_t addrs = 0x3343448;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGNet::Core::DefaultTimeProvider*>(), { "get_instance", {}, {} })));
    return ___internal_method;
  }
};
inline ::BGNet::Core::ITimeProvider* BGNet::Core::DefaultTimeProvider::get_instance() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGNet::Core::DefaultTimeProvider*>(), { "get_instance", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::BGNet::Core::ITimeProvider*>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::BGNet::Core::DefaultTimeProvider::DefaultTimeProvider() {}
