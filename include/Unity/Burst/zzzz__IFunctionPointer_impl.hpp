#pragma once
// IWYU pragma private; include "Unity\Burst\IFunctionPointer.hpp"
#include "Unity/Burst/zzzz__IFunctionPointer_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Unity::Burst::IFunctionPointer.FromIntPtr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Burst::IFunctionPointer* (::Unity::Burst::IFunctionPointer::*)(::System::IntPtr)>(&::Unity::Burst::IFunctionPointer::FromIntPtr)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Burst::IFunctionPointer*>(), { ::i2c::class_of<::Unity::Burst::IFunctionPointer*>(), 0 }));
    return ___internal_method;
  }
};
inline ::Unity::Burst::IFunctionPointer* Unity::Burst::IFunctionPointer::FromIntPtr(::System::IntPtr ptr) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Burst::IFunctionPointer*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Burst::IFunctionPointer*>(this, ___internal_method, ptr);
}
