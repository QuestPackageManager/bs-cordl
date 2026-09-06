#pragma once
// IWYU pragma private; include "System/Runtime/CompilerServices/IStrongBox.hpp"
#include "System/Runtime/CompilerServices/zzzz__IStrongBox_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Runtime::CompilerServices::IStrongBox.get_Value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Runtime::CompilerServices::IStrongBox::*)()>(&::System::Runtime::CompilerServices::IStrongBox::get_Value)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::IStrongBox*>(), { ::i2c::class_of<::System::Runtime::CompilerServices::IStrongBox*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::CompilerServices::IStrongBox.set_Value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::CompilerServices::IStrongBox::*)(::System::Object*)>(&::System::Runtime::CompilerServices::IStrongBox::set_Value)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::IStrongBox*>(), { ::i2c::class_of<::System::Runtime::CompilerServices::IStrongBox*>(), 1 }));
    return ___internal_method;
  }
};
inline ::System::Object* System::Runtime::CompilerServices::IStrongBox::get_Value() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::CompilerServices::IStrongBox*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void System::Runtime::CompilerServices::IStrongBox::set_Value(::System::Object* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::CompilerServices::IStrongBox*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
