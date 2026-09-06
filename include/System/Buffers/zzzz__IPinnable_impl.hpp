#pragma once
// IWYU pragma private; include "System/Buffers/IPinnable.hpp"
#include "System/Buffers/zzzz__IPinnable_def.hpp"
//  Writing Method size for method: ::System::Buffers::IPinnable.Unpin
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Buffers::IPinnable::*)()>(&::System::Buffers::IPinnable::Unpin)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Buffers::IPinnable*>(), { ::i2c::class_of<::System::Buffers::IPinnable*>(), 0 }));
    return ___internal_method;
  }
};
inline void System::Buffers::IPinnable::Unpin() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Buffers::IPinnable*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
