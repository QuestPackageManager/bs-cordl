#pragma once
// IWYU pragma private; include "Unity\Collections\DeallocateOnJobCompletionAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "Unity/Collections/zzzz__DeallocateOnJobCompletionAttribute_def.hpp"
//  Writing Method size for method: ::Unity::Collections::DeallocateOnJobCompletionAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::DeallocateOnJobCompletionAttribute::*)()>(&::Unity::Collections::DeallocateOnJobCompletionAttribute::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6a5fc24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DeallocateOnJobCompletionAttribute*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void Unity::Collections::DeallocateOnJobCompletionAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::DeallocateOnJobCompletionAttribute*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Collections::DeallocateOnJobCompletionAttribute* Unity::Collections::DeallocateOnJobCompletionAttribute::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Collections::DeallocateOnJobCompletionAttribute*>());
}
// Ctor Parameters []
constexpr ::Unity::Collections::DeallocateOnJobCompletionAttribute::DeallocateOnJobCompletionAttribute() {}
