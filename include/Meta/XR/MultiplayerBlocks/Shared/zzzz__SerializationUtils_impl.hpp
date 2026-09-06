#pragma once
// IWYU pragma private; include "Meta/XR/MultiplayerBlocks/Shared/SerializationUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/XR/MultiplayerBlocks/Shared/zzzz__SerializationUtils_def.hpp"
template <typename T> inline ::StringW Meta::XR::MultiplayerBlocks::Shared::SerializationUtils::SerializeToString(T obj) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::SerializationUtils*>(), { "SerializeToString", { ::i2c::class_of<T>() }, { ::i2c::type_of<T>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, obj);
}
template <typename T> inline T Meta::XR::MultiplayerBlocks::Shared::SerializationUtils::DeserializeFromString(::StringW base64) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::SerializationUtils*>(),
                                                                                              { "DeserializeFromString", { ::i2c::class_of<T>() }, { ::i2c::type_of<::StringW>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, base64);
}
// Ctor Parameters []
constexpr ::Meta::XR::MultiplayerBlocks::Shared::SerializationUtils::SerializationUtils() {}
