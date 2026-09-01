#pragma once
// IWYU pragma private; include "System\ComponentModel\IExtenderProvider.hpp"
#include "System/ComponentModel/zzzz__IExtenderProvider_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::IExtenderProvider.CanExtend
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::IExtenderProvider::*)(::System::Object*)>(&::System::ComponentModel::IExtenderProvider::CanExtend)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::IExtenderProvider*>(), { ::i2c::class_of<::System::ComponentModel::IExtenderProvider*>(), 0 }));
    return ___internal_method;
  }
};
inline bool System::ComponentModel::IExtenderProvider::CanExtend(::System::Object* extendee) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::IExtenderProvider*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, extendee);
}
