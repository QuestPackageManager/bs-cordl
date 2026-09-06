#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/Contexts/IDynamicProperty.hpp"
#include "System/Runtime/Remoting/Contexts/zzzz__IDynamicProperty_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::Contexts::IDynamicProperty.get_Name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Runtime::Remoting::Contexts::IDynamicProperty::*)()>(&::System::Runtime::Remoting::Contexts::IDynamicProperty::get_Name)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Contexts::IDynamicProperty*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Remoting::Contexts::IDynamicProperty*>(), 0 }));
    return ___internal_method;
  }
};
inline ::StringW System::Runtime::Remoting::Contexts::IDynamicProperty::get_Name() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Remoting::Contexts::IDynamicProperty*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
