#pragma once
#include "System/Text/zzzz__DecoderFallbackBuffer_impl.hpp"
#include "System/Text/zzzz__DecoderExceptionFallbackBuffer_def.hpp"
//  Writing Method size for method: ::System::Text::DecoderExceptionFallbackBuffer.Fallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Text::DecoderExceptionFallbackBuffer::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t)>(
    &::System::Text::DecoderExceptionFallbackBuffer::Fallback)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28b6150;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::DecoderExceptionFallbackBuffer*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::DecoderExceptionFallbackBuffer*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::DecoderExceptionFallbackBuffer.GetNextChar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<char16_t (::System::Text::DecoderExceptionFallbackBuffer::*)()>(
    &::System::Text::DecoderExceptionFallbackBuffer::GetNextChar)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28b632c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::DecoderExceptionFallbackBuffer*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::DecoderExceptionFallbackBuffer*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::DecoderExceptionFallbackBuffer.get_Remaining
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Text::DecoderExceptionFallbackBuffer::*)()>(
    &::System::Text::DecoderExceptionFallbackBuffer::get_Remaining)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28b6334;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::DecoderExceptionFallbackBuffer*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::DecoderExceptionFallbackBuffer*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::DecoderExceptionFallbackBuffer.Throw
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Text::DecoderExceptionFallbackBuffer::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t)>(
    &::System::Text::DecoderExceptionFallbackBuffer::Throw)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x28b6158;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::DecoderExceptionFallbackBuffer*>::get(), "Throw", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::DecoderExceptionFallbackBuffer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Text::DecoderExceptionFallbackBuffer::*)()>(&::System::Text::DecoderExceptionFallbackBuffer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28b60dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::DecoderExceptionFallbackBuffer*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline bool System::Text::DecoderExceptionFallbackBuffer::Fallback(::ArrayW<uint8_t, ::Array<uint8_t>*> bytesUnknown, int32_t index) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::DecoderExceptionFallbackBuffer*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, bytesUnknown, index);
}
inline char16_t System::Text::DecoderExceptionFallbackBuffer::GetNextChar() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::DecoderExceptionFallbackBuffer*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<char16_t, false>(this, ___internal_method);
}
inline int32_t System::Text::DecoderExceptionFallbackBuffer::get_Remaining() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::DecoderExceptionFallbackBuffer*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void System::Text::DecoderExceptionFallbackBuffer::Throw(::ArrayW<uint8_t, ::Array<uint8_t>*> bytesUnknown, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::DecoderExceptionFallbackBuffer*>::get(), "Throw", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bytesUnknown, index);
}
inline ::System::Text::DecoderExceptionFallbackBuffer* System::Text::DecoderExceptionFallbackBuffer::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Text::DecoderExceptionFallbackBuffer*>());
}
inline void System::Text::DecoderExceptionFallbackBuffer::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::DecoderExceptionFallbackBuffer*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Text::DecoderExceptionFallbackBuffer::DecoderExceptionFallbackBuffer() {}
