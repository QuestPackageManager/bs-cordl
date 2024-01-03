#pragma once
#include "Microsoft/Win32/SafeHandles/zzzz__SafeHandleZeroOrMinusOneIsInvalid_impl.hpp"
#include "System/zzzz__UIntPtr_impl.hpp"
#include "System/Runtime/InteropServices/zzzz__SafeBuffer_def.hpp"
#include "System/zzzz__InvalidOperationException_def.hpp"
//  Writing Method size for method: ::System::Runtime::InteropServices::SafeBuffer.AcquirePointer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::InteropServices::SafeBuffer::*)(ByRef<::cordl_internals::Ptr<uint8_t>>)>(
    &::System::Runtime::InteropServices::SafeBuffer::AcquirePointer)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x24d6c00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::InteropServices::SafeBuffer*>::get(), "AcquirePointer", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::cordl_internals::Ptr<uint8_t>>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::InteropServices::SafeBuffer.ReleasePointer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::InteropServices::SafeBuffer::*)()>(
    &::System::Runtime::InteropServices::SafeBuffer::ReleasePointer)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x24d6e4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::InteropServices::SafeBuffer*>::get(),
                                                                               "ReleasePointer", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::InteropServices::SafeBuffer.NotInitialized
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::InvalidOperationException* (*)()>(&::System::Runtime::InteropServices::SafeBuffer::NotInitialized)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x24d6d08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::InteropServices::SafeBuffer*>::get(),
                                                                               "NotInitialized", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr void*& System::Runtime::InteropServices::SafeBuffer::__get__numBytes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____numBytes;
}
constexpr void* const& System::Runtime::InteropServices::SafeBuffer::__get__numBytes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____numBytes;
}
constexpr void System::Runtime::InteropServices::SafeBuffer::__set__numBytes(void* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____numBytes = value;
}
inline void System::Runtime::InteropServices::SafeBuffer::setStaticF_Uninitialized(void* value) {
  ::cordl_internals::setStaticField<void*, "Uninitialized", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::InteropServices::SafeBuffer*>::get>(std::forward<void*>(value));
}
inline void* System::Runtime::InteropServices::SafeBuffer::getStaticF_Uninitialized() {
  return ::cordl_internals::getStaticField<void*, "Uninitialized", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::InteropServices::SafeBuffer*>::get>();
}
inline void System::Runtime::InteropServices::SafeBuffer::AcquirePointer(ByRef<::cordl_internals::Ptr<uint8_t>> pointer) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::InteropServices::SafeBuffer*>::get(), "AcquirePointer", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::cordl_internals::Ptr<uint8_t>>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pointer);
}
inline void System::Runtime::InteropServices::SafeBuffer::ReleasePointer() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::InteropServices::SafeBuffer*>::get(),
                                                                             "ReleasePointer", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::InvalidOperationException* System::Runtime::InteropServices::SafeBuffer::NotInitialized() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::InteropServices::SafeBuffer*>::get(),
                                                                             "NotInitialized", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::InvalidOperationException*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Runtime::InteropServices::SafeBuffer::SafeBuffer() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
