#pragma once
// IWYU pragma private; include "Unity\Properties\IConstructor.hpp"
#include "Unity/Properties/zzzz__IConstructor_def.hpp"
#include "Unity/Properties/zzzz__InstantiationKind_def.hpp"
//  Writing Method size for method: ::Unity::Properties::IConstructor.get_InstantiationKind
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Properties::InstantiationKind (::Unity::Properties::IConstructor::*)()>(&::Unity::Properties::IConstructor::get_InstantiationKind)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Properties::IConstructor*>(), { ::i2c::class_of<::Unity::Properties::IConstructor*>(), 0 }));
    return ___internal_method;
  }
};
inline ::Unity::Properties::InstantiationKind Unity::Properties::IConstructor::get_InstantiationKind() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::IConstructor*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Properties::InstantiationKind>(this, ___internal_method);
}
