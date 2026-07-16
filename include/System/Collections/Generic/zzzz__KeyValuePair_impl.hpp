#pragma once
// IWYU pragma private; include "System/Collections/Generic/KeyValuePair.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Collections::Generic::KeyValuePair.PairToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Object*, ::System::Object*)>(&::System::Collections::Generic::KeyValuePair::PairToString)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5bf1418;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::KeyValuePair*>(),
                                                                                           { "PairToString", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
inline ::StringW System::Collections::Generic::KeyValuePair::PairToString(::System::Object* key, ::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::KeyValuePair*>(),
                                                                                         { "PairToString", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, key, value);
}
// Ctor Parameters []
constexpr ::System::Collections::Generic::KeyValuePair::KeyValuePair() {}
