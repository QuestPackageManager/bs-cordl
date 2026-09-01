#pragma once
// IWYU pragma private; include "System\Collections\IHashCodeProvider.hpp"
#include "System/Collections/zzzz__IHashCodeProvider_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Collections::IHashCodeProvider.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Collections::IHashCodeProvider::*)(::System::Object*)>(&::System::Collections::IHashCodeProvider::GetHashCode)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Collections::IHashCodeProvider*>(), { ::i2c::class_of<::System::Collections::IHashCodeProvider*>(), 0 }));
    return ___internal_method;
  }
};
inline int32_t System::Collections::IHashCodeProvider::GetHashCode(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::IHashCodeProvider*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, obj);
}
