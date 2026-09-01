#pragma once
// IWYU pragma private; include "Unity\Properties\IListElementProperty.hpp"
#include "Unity/Properties/zzzz__IListElementProperty_def.hpp"
//  Writing Method size for method: ::Unity::Properties::IListElementProperty.get_Index
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Properties::IListElementProperty::*)()>(&::Unity::Properties::IListElementProperty::get_Index)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Properties::IListElementProperty*>(), { ::i2c::class_of<::Unity::Properties::IListElementProperty*>(), 0 }));
    return ___internal_method;
  }
};
inline int32_t Unity::Properties::IListElementProperty::get_Index() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::IListElementProperty*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
