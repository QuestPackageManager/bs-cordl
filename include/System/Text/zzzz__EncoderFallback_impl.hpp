#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Text/zzzz__EncoderFallback_def.hpp"
#include "System/Text/zzzz__EncoderFallbackBuffer_def.hpp"
//  Writing Method size for method: ::System::Text::EncoderFallback.get_ReplacementFallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::EncoderFallback* (*)()>(&::System::Text::EncoderFallback::get_ReplacementFallback)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x24d3e04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::EncoderFallback*>::get(),
                                                                               "get_ReplacementFallback", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::EncoderFallback.get_ExceptionFallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::EncoderFallback* (*)()>(&::System::Text::EncoderFallback::get_ExceptionFallback)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x24d9ff0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::EncoderFallback*>::get(), "get_ExceptionFallback",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::EncoderFallback.CreateFallbackBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::EncoderFallbackBuffer* (::System::Text::EncoderFallback::*)()>(
    &::System::Text::EncoderFallback::CreateFallbackBuffer)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::EncoderFallback*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::EncoderFallback*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::EncoderFallback.get_MaxCharCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Text::EncoderFallback::*)()>(&::System::Text::EncoderFallback::get_MaxCharCount)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::EncoderFallback*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::EncoderFallback*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::EncoderFallback._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Text::EncoderFallback::*)()>(&::System::Text::EncoderFallback::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24d92cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::EncoderFallback*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline void System::Text::EncoderFallback::setStaticF_s_replacementFallback(::System::Text::EncoderFallback* value) {
  ::cordl_internals::setStaticField<::System::Text::EncoderFallback*, "s_replacementFallback", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::EncoderFallback*>::get>(
      std::forward<::System::Text::EncoderFallback*>(value));
}
inline ::System::Text::EncoderFallback* System::Text::EncoderFallback::getStaticF_s_replacementFallback() {
  return ::cordl_internals::getStaticField<::System::Text::EncoderFallback*, "s_replacementFallback", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::EncoderFallback*>::get>();
}
inline void System::Text::EncoderFallback::setStaticF_s_exceptionFallback(::System::Text::EncoderFallback* value) {
  ::cordl_internals::setStaticField<::System::Text::EncoderFallback*, "s_exceptionFallback", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::EncoderFallback*>::get>(
      std::forward<::System::Text::EncoderFallback*>(value));
}
inline ::System::Text::EncoderFallback* System::Text::EncoderFallback::getStaticF_s_exceptionFallback() {
  return ::cordl_internals::getStaticField<::System::Text::EncoderFallback*, "s_exceptionFallback", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::EncoderFallback*>::get>();
}
inline ::System::Text::EncoderFallback* System::Text::EncoderFallback::get_ReplacementFallback() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::EncoderFallback*>::get(), "get_ReplacementFallback",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Text::EncoderFallback*, false>(nullptr, ___internal_method);
}
inline ::System::Text::EncoderFallback* System::Text::EncoderFallback::get_ExceptionFallback() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::EncoderFallback*>::get(), "get_ExceptionFallback",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Text::EncoderFallback*, false>(nullptr, ___internal_method);
}
inline ::System::Text::EncoderFallbackBuffer* System::Text::EncoderFallback::CreateFallbackBuffer() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::EncoderFallback*>::get(), "CreateFallbackBuffer",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Text::EncoderFallbackBuffer*, false>(this, ___internal_method);
}
inline int32_t System::Text::EncoderFallback::get_MaxCharCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::EncoderFallback*>::get(), "get_MaxCharCount",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::System::Text::EncoderFallback* System::Text::EncoderFallback::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Text::EncoderFallback*>());
}
inline void System::Text::EncoderFallback::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::EncoderFallback*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Text::EncoderFallback::EncoderFallback() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
