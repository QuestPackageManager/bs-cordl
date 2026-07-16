#pragma once
// IWYU pragma private; include "System/IOSelector.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__IOSelector_def.hpp"
#include "System/zzzz__IOSelectorJob_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::System::IOSelector.Add
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IOSelectorJob*)>(&::System::IOSelector::Add)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6375034;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IOSelector*>(), { "Add", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IOSelectorJob*>() } })));
    return ___internal_method;
  }
};
inline void System::IOSelector::Add(::System::IntPtr handle, ::System::IOSelectorJob* job) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IOSelector*>(), { "Add", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IOSelectorJob*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handle, job);
}
// Ctor Parameters []
constexpr ::System::IOSelector::IOSelector() {}
