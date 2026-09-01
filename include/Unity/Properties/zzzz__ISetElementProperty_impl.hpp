#pragma once
// IWYU pragma private; include "Unity\Properties\ISetElementProperty.hpp"
#include "Unity/Properties/zzzz__ISetElementProperty_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Unity::Properties::ISetElementProperty.get_ObjectKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Unity::Properties::ISetElementProperty::*)()>(&::Unity::Properties::ISetElementProperty::get_ObjectKey)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Properties::ISetElementProperty*>(), { ::i2c::class_of<::Unity::Properties::ISetElementProperty*>(), 0 }));
    return ___internal_method;
  }
};
inline ::System::Object* Unity::Properties::ISetElementProperty::get_ObjectKey() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::ISetElementProperty*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
