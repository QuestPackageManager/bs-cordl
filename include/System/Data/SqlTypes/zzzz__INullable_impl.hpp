#pragma once
// IWYU pragma private; include "System/Data/SqlTypes/INullable.hpp"
#include "System/Data/SqlTypes/zzzz__INullable_def.hpp"
//  Writing Method size for method: ::System::Data::SqlTypes::INullable.get_IsNull
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::SqlTypes::INullable::*)()>(&::System::Data::SqlTypes::INullable::get_IsNull)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::INullable*>(), { ::i2c::class_of<::System::Data::SqlTypes::INullable*>(), 0 }));
    return ___internal_method;
  }
};
inline bool System::Data::SqlTypes::INullable::get_IsNull() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::SqlTypes::INullable*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
