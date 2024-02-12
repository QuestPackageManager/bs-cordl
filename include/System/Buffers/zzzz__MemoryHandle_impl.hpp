#pragma once
#include "System/Runtime/InteropServices/zzzz__GCHandle_impl.hpp"
#include "System/Buffers/zzzz__MemoryHandle_def.hpp"
#include "System/Buffers/zzzz__IPinnable_def.hpp"
#include "System/Runtime/InteropServices/zzzz__GCHandle_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::System::Buffers::MemoryHandle._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Buffers::MemoryHandle::*)(::cordl_internals::Ptr<void>, ::System::Runtime::InteropServices::GCHandle,
                                                                                                                            ::System::Buffers::IPinnable*)>(&::System::Buffers::MemoryHandle::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x25af438;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::MemoryHandle>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::InteropServices::GCHandle>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Buffers::IPinnable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::MemoryHandle.get_Pointer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::cordl_internals::Ptr<void> (::System::Buffers::MemoryHandle::*)()>(&::System::Buffers::MemoryHandle::get_Pointer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25af444;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::MemoryHandle>::get(), "get_Pointer",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::MemoryHandle.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Buffers::MemoryHandle::*)()>(&::System::Buffers::MemoryHandle::Dispose)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x25af44c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::MemoryHandle>::get(), "Dispose",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IDisposable"
constexpr System::Buffers::MemoryHandle::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* System::Buffers::MemoryHandle::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @param handle: ::System::Runtime::InteropServices::GCHandle (default: {})
/// @param pinnable: ::System::Buffers::IPinnable* (default: nullptr)
inline void System::Buffers::MemoryHandle::_ctor(::cordl_internals::Ptr<void> pointer, ::System::Runtime::InteropServices::GCHandle handle, ::System::Buffers::IPinnable* pinnable) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::MemoryHandle>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::InteropServices::GCHandle>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Buffers::IPinnable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pointer, handle, pinnable);
}
inline ::cordl_internals::Ptr<void> System::Buffers::MemoryHandle::get_Pointer() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::MemoryHandle>::get(), "get_Pointer",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::cordl_internals::Ptr<void>, false>(this, ___internal_method);
}
inline void System::Buffers::MemoryHandle::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::MemoryHandle>::get(), "Dispose",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_pointer", ty: "::cordl_internals::Ptr<void>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "_handle", ty:
// "::System::Runtime::InteropServices::GCHandle", modifiers: "", def_value: Some("{}") }, CppParam { name: "_pinnable", ty: "::System::Buffers::IPinnable*", modifiers: "", def_value: Some("nullptr")
// }]
constexpr ::System::Buffers::MemoryHandle::MemoryHandle(::cordl_internals::Ptr<void> _pointer, ::System::Runtime::InteropServices::GCHandle _handle, ::System::Buffers::IPinnable* _pinnable) noexcept {
  this->_pointer = _pointer;
  this->_handle = _handle;
  this->_pinnable = _pinnable;
}
// Ctor Parameters []
constexpr ::System::Buffers::MemoryHandle::MemoryHandle() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
