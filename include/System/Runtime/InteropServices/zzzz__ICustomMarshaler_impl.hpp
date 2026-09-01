#pragma once
// IWYU pragma private; include "System\Runtime\InteropServices\ICustomMarshaler.hpp"
#include "System/Runtime/InteropServices/zzzz__ICustomMarshaler_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Runtime::InteropServices::ICustomMarshaler.MarshalNativeToManaged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Runtime::InteropServices::ICustomMarshaler::*)(::System::IntPtr)>(
    &::System::Runtime::InteropServices::ICustomMarshaler::MarshalNativeToManaged)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::InteropServices::ICustomMarshaler*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::InteropServices::ICustomMarshaler*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::InteropServices::ICustomMarshaler.MarshalManagedToNative
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::System::Runtime::InteropServices::ICustomMarshaler::*)(::System::Object*)>(
    &::System::Runtime::InteropServices::ICustomMarshaler::MarshalManagedToNative)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::InteropServices::ICustomMarshaler*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::InteropServices::ICustomMarshaler*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::InteropServices::ICustomMarshaler.CleanUpNativeData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::InteropServices::ICustomMarshaler::*)(::System::IntPtr)>(
    &::System::Runtime::InteropServices::ICustomMarshaler::CleanUpNativeData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::InteropServices::ICustomMarshaler*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::InteropServices::ICustomMarshaler*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::InteropServices::ICustomMarshaler.CleanUpManagedData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::InteropServices::ICustomMarshaler::*)(::System::Object*)>(
    &::System::Runtime::InteropServices::ICustomMarshaler::CleanUpManagedData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::InteropServices::ICustomMarshaler*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::InteropServices::ICustomMarshaler*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::InteropServices::ICustomMarshaler.GetNativeDataSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Runtime::InteropServices::ICustomMarshaler::*)()>(&::System::Runtime::InteropServices::ICustomMarshaler::GetNativeDataSize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::InteropServices::ICustomMarshaler*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::InteropServices::ICustomMarshaler*>(), 4 }));
    return ___internal_method;
  }
};
inline ::System::Object* System::Runtime::InteropServices::ICustomMarshaler::MarshalNativeToManaged(::System::IntPtr pNativeData) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::InteropServices::ICustomMarshaler*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, pNativeData);
}
inline ::System::IntPtr System::Runtime::InteropServices::ICustomMarshaler::MarshalManagedToNative(::System::Object* ManagedObj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::InteropServices::ICustomMarshaler*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(this, ___internal_method, ManagedObj);
}
inline void System::Runtime::InteropServices::ICustomMarshaler::CleanUpNativeData(::System::IntPtr pNativeData) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::InteropServices::ICustomMarshaler*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pNativeData);
}
inline void System::Runtime::InteropServices::ICustomMarshaler::CleanUpManagedData(::System::Object* ManagedObj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::InteropServices::ICustomMarshaler*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ManagedObj);
}
inline int32_t System::Runtime::InteropServices::ICustomMarshaler::GetNativeDataSize() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::InteropServices::ICustomMarshaler*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
