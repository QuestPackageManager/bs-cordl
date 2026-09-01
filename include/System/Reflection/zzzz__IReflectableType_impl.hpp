#pragma once
// IWYU pragma private; include "System\Reflection\IReflectableType.hpp"
#include "System/Reflection/zzzz__IReflectableType_def.hpp"
#include "System/Reflection/zzzz__TypeInfo_def.hpp"
//  Writing Method size for method: ::System::Reflection::IReflectableType.GetTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::TypeInfo* (::System::Reflection::IReflectableType::*)()>(&::System::Reflection::IReflectableType::GetTypeInfo)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::IReflectableType*>(), { ::i2c::class_of<::System::Reflection::IReflectableType*>(), 0 }));
    return ___internal_method;
  }
};
inline ::System::Reflection::TypeInfo* System::Reflection::IReflectableType::GetTypeInfo() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::IReflectableType*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::TypeInfo*>(this, ___internal_method);
}
