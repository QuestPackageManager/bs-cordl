#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Text/zzzz__DecoderFallback_def.hpp"
#include "System/Text/zzzz__DecoderFallbackBuffer_def.hpp"
//  Writing Method size for method: ::System::Text::DecoderFallback.get_ReplacementFallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::DecoderFallback* (*)()>(&::System::Text::DecoderFallback::get_ReplacementFallback)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x272281c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::DecoderFallback*>::get(),
                                                                               "get_ReplacementFallback", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::DecoderFallback.get_ExceptionFallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::DecoderFallback* (*)()>(&::System::Text::DecoderFallback::get_ExceptionFallback)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2725c34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::DecoderFallback*>::get(), "get_ExceptionFallback",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::DecoderFallback.CreateFallbackBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::DecoderFallbackBuffer* (::System::Text::DecoderFallback::*)()>(
    &::System::Text::DecoderFallback::CreateFallbackBuffer)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::DecoderFallback*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::DecoderFallback*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::DecoderFallback.get_MaxCharCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Text::DecoderFallback::*)()>(&::System::Text::DecoderFallback::get_MaxCharCount)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::DecoderFallback*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::DecoderFallback*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::DecoderFallback._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Text::DecoderFallback::*)()>(&::System::Text::DecoderFallback::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27253a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::DecoderFallback*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void System::Text::DecoderFallback::setStaticF_s_replacementFallback(::System::Text::DecoderFallback* value) {
  ::cordl_internals::setStaticField<::System::Text::DecoderFallback*, "s_replacementFallback", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::DecoderFallback*>::get>(
      std::forward<::System::Text::DecoderFallback*>(value));
}
inline ::System::Text::DecoderFallback* System::Text::DecoderFallback::getStaticF_s_replacementFallback() {
  return ::cordl_internals::getStaticField<::System::Text::DecoderFallback*, "s_replacementFallback", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::DecoderFallback*>::get>();
}
inline void System::Text::DecoderFallback::setStaticF_s_exceptionFallback(::System::Text::DecoderFallback* value) {
  ::cordl_internals::setStaticField<::System::Text::DecoderFallback*, "s_exceptionFallback", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::DecoderFallback*>::get>(
      std::forward<::System::Text::DecoderFallback*>(value));
}
inline ::System::Text::DecoderFallback* System::Text::DecoderFallback::getStaticF_s_exceptionFallback() {
  return ::cordl_internals::getStaticField<::System::Text::DecoderFallback*, "s_exceptionFallback", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::DecoderFallback*>::get>();
}
inline ::System::Text::DecoderFallback* System::Text::DecoderFallback::get_ReplacementFallback() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::DecoderFallback*>::get(), "get_ReplacementFallback",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Text::DecoderFallback*, false>(nullptr, ___internal_method);
}
inline ::System::Text::DecoderFallback* System::Text::DecoderFallback::get_ExceptionFallback() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::DecoderFallback*>::get(), "get_ExceptionFallback",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Text::DecoderFallback*, false>(nullptr, ___internal_method);
}
inline ::System::Text::DecoderFallbackBuffer* System::Text::DecoderFallback::CreateFallbackBuffer() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::DecoderFallback*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::System::Text::DecoderFallbackBuffer*, false>(this, ___internal_method);
}
inline int32_t System::Text::DecoderFallback::get_MaxCharCount() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::DecoderFallback*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::System::Text::DecoderFallback* System::Text::DecoderFallback::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Text::DecoderFallback*>());
}
inline void System::Text::DecoderFallback::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::DecoderFallback*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Text::DecoderFallback::DecoderFallback() {}
