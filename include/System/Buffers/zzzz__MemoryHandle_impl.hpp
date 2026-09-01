#pragma once
// IWYU pragma private; include "System\Buffers\MemoryHandle.hpp"
#include "System/Runtime/InteropServices/zzzz__GCHandle_impl.hpp"
#include "System/Buffers/zzzz__MemoryHandle_def.hpp"
#include "System/Buffers/zzzz__IPinnable_def.hpp"
#include "System/Runtime/InteropServices/zzzz__GCHandle_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::System::Buffers::MemoryHandle._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Buffers::MemoryHandle::*)(void*, ::System::Runtime::InteropServices::GCHandle, ::System::Buffers::IPinnable*)>(
    &::System::Buffers::MemoryHandle::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5bf3ef4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Buffers::MemoryHandle>(),
                            { ".ctor", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<::System::Runtime::InteropServices::GCHandle>(), ::i2c::type_of<::System::Buffers::IPinnable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::MemoryHandle.get_Pointer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void* (::System::Buffers::MemoryHandle::*)()>(&::System::Buffers::MemoryHandle::get_Pointer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bf3f00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Buffers::MemoryHandle>(), { "get_Pointer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::MemoryHandle.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Buffers::MemoryHandle::*)()>(&::System::Buffers::MemoryHandle::Dispose)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5bf3f08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Buffers::MemoryHandle>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
inline void System::Buffers::MemoryHandle::_ctor(void* pointer, ::System::Runtime::InteropServices::GCHandle handle, ::System::Buffers::IPinnable* pinnable) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Buffers::MemoryHandle>(),
                                       { ".ctor", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<::System::Runtime::InteropServices::GCHandle>(), ::i2c::type_of<::System::Buffers::IPinnable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, pointer, handle, pinnable);
}
inline void* System::Buffers::MemoryHandle::get_Pointer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Buffers::MemoryHandle>(), { "get_Pointer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void*>(*this, ___internal_method);
}
inline void System::Buffers::MemoryHandle::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Buffers::MemoryHandle>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr System::Buffers::MemoryHandle::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* System::Buffers::MemoryHandle::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_pointer", ty: "void*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_handle", ty: "::System::Runtime::InteropServices::GCHandle", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "_pinnable", ty: "::System::Buffers::IPinnable*", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Buffers::MemoryHandle::MemoryHandle(void* _pointer, ::System::Runtime::InteropServices::GCHandle _handle, ::System::Buffers::IPinnable* _pinnable) noexcept {
  this->_pointer = _pointer;
  this->_handle = _handle;
  this->_pinnable = _pinnable;
}
// Ctor Parameters []
constexpr ::System::Buffers::MemoryHandle::MemoryHandle() {}
