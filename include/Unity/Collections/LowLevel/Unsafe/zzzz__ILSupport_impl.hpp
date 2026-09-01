#pragma once
// IWYU pragma private; include "Unity\Collections\LowLevel\Unsafe\ILSupport.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__ILSupport_def.hpp"
template <typename T> inline void* Unity::Collections::LowLevel::Unsafe::ILSupport::AddressOf(::by_ref<T> thing) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::ILSupport*>(), { "AddressOf", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void*>(nullptr, ___internal_method, thing);
}
template <typename T> inline ::by_ref<T> Unity::Collections::LowLevel::Unsafe::ILSupport::AsRef(::by_ref<T> thing) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::ILSupport*>(), { "AsRef", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<T>>(nullptr, ___internal_method, thing);
}
// Ctor Parameters []
constexpr ::Unity::Collections::LowLevel::Unsafe::ILSupport::ILSupport() {}
