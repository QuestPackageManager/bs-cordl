#pragma once
// IWYU pragma private; include "System\Runtime\InteropServices\SafeBuffer.hpp"
#include "Microsoft/Win32/SafeHandles/zzzz__SafeHandleZeroOrMinusOneIsInvalid_impl.hpp"
#include "System/zzzz__UIntPtr_impl.hpp"
#include "System/Runtime/InteropServices/zzzz__SafeBuffer_def.hpp"
#include "System/zzzz__InvalidOperationException_def.hpp"
//  Writing Method size for method: ::System::Runtime::InteropServices::SafeBuffer.AcquirePointer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::InteropServices::SafeBuffer::*)(::by_ref<uint8_t*>)>(&::System::Runtime::InteropServices::SafeBuffer::AcquirePointer)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5b6bf60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::InteropServices::SafeBuffer*>(), { "AcquirePointer", {}, { ::i2c::type_of<::by_ref<uint8_t*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::InteropServices::SafeBuffer.ReleasePointer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::InteropServices::SafeBuffer::*)()>(&::System::Runtime::InteropServices::SafeBuffer::ReleasePointer)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5b6c15c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::InteropServices::SafeBuffer*>(), { "ReleasePointer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::InteropServices::SafeBuffer.NotInitialized
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::InvalidOperationException* (*)()>(&::System::Runtime::InteropServices::SafeBuffer::NotInitialized)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5b6c020;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::InteropServices::SafeBuffer*>(), { "NotInitialized", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::UIntPtr& System::Runtime::InteropServices::SafeBuffer::__cordl_internal_get__numBytes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____numBytes;
}
constexpr ::System::UIntPtr const& System::Runtime::InteropServices::SafeBuffer::__cordl_internal_get__numBytes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____numBytes;
}
constexpr void System::Runtime::InteropServices::SafeBuffer::__cordl_internal_set__numBytes(::System::UIntPtr value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____numBytes = value;
}
inline void System::Runtime::InteropServices::SafeBuffer::setStaticF_Uninitialized(::System::UIntPtr value) {
  ::cordl_internals::setStaticField<::System::UIntPtr, "Uninitialized", ::System::Runtime::InteropServices::SafeBuffer*>(std::forward<::System::UIntPtr>(value));
}
inline ::System::UIntPtr System::Runtime::InteropServices::SafeBuffer::getStaticF_Uninitialized() {
  return ::cordl_internals::getStaticField<::System::UIntPtr, "Uninitialized", ::System::Runtime::InteropServices::SafeBuffer*>();
}
inline void System::Runtime::InteropServices::SafeBuffer::AcquirePointer(::by_ref<uint8_t*> pointer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::InteropServices::SafeBuffer*>(), { "AcquirePointer", {}, { ::i2c::type_of<::by_ref<uint8_t*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pointer);
}
inline void System::Runtime::InteropServices::SafeBuffer::ReleasePointer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::InteropServices::SafeBuffer*>(), { "ReleasePointer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::InvalidOperationException* System::Runtime::InteropServices::SafeBuffer::NotInitialized() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::InteropServices::SafeBuffer*>(), { "NotInitialized", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::InvalidOperationException*>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Runtime::InteropServices::SafeBuffer::SafeBuffer() {}
