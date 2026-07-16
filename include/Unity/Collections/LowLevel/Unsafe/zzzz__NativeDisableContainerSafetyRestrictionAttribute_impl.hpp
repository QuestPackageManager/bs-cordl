#pragma once
// IWYU pragma private; include "Unity/Collections/LowLevel/Unsafe/NativeDisableContainerSafetyRestrictionAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__NativeDisableContainerSafetyRestrictionAttribute_def.hpp"
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::NativeDisableContainerSafetyRestrictionAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::LowLevel::Unsafe::NativeDisableContainerSafetyRestrictionAttribute::*)()>(
    &::Unity::Collections::LowLevel::Unsafe::NativeDisableContainerSafetyRestrictionAttribute::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6a5a65c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::NativeDisableContainerSafetyRestrictionAttribute*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void Unity::Collections::LowLevel::Unsafe::NativeDisableContainerSafetyRestrictionAttribute::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::NativeDisableContainerSafetyRestrictionAttribute*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Collections::LowLevel::Unsafe::NativeDisableContainerSafetyRestrictionAttribute* Unity::Collections::LowLevel::Unsafe::NativeDisableContainerSafetyRestrictionAttribute::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Collections::LowLevel::Unsafe::NativeDisableContainerSafetyRestrictionAttribute*>());
}
// Ctor Parameters []
constexpr ::Unity::Collections::LowLevel::Unsafe::NativeDisableContainerSafetyRestrictionAttribute::NativeDisableContainerSafetyRestrictionAttribute() {}
