#pragma once
#include "Oculus/Platform/Models/zzzz__AvatarEditorResult_impl.hpp"
#include "Oculus/Platform/zzzz__Message_1_impl.hpp"
#include "Oculus/Platform/zzzz__MessageWithAvatarEditorResult_def.hpp"
#include "Oculus/Platform/Models/zzzz__AvatarEditorResult_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::MessageWithAvatarEditorResult._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::MessageWithAvatarEditorResult::*)(void*)>(
    &::Oculus::Platform::MessageWithAvatarEditorResult::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x27182e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithAvatarEditorResult*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithAvatarEditorResult.GetAvatarEditorResult
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::AvatarEditorResult* (::Oculus::Platform::MessageWithAvatarEditorResult::*)()>(
    &::Oculus::Platform::MessageWithAvatarEditorResult::GetAvatarEditorResult)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x271a6f4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithAvatarEditorResult*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithAvatarEditorResult*>::get(), 21));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithAvatarEditorResult.GetDataFromMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::AvatarEditorResult* (::Oculus::Platform::MessageWithAvatarEditorResult::*)(void*)>(
    &::Oculus::Platform::MessageWithAvatarEditorResult::GetDataFromMessage)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x271a730;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithAvatarEditorResult*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithAvatarEditorResult*>::get(), 89));
    return ___internal_method;
  }
};
inline ::Oculus::Platform::MessageWithAvatarEditorResult* Oculus::Platform::MessageWithAvatarEditorResult::New_ctor(void* c_message) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Oculus::Platform::MessageWithAvatarEditorResult*>(c_message));
}
inline void Oculus::Platform::MessageWithAvatarEditorResult::_ctor(void* c_message) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithAvatarEditorResult*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::Models::AvatarEditorResult* Oculus::Platform::MessageWithAvatarEditorResult::GetAvatarEditorResult() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithAvatarEditorResult*>::get(), 21)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::AvatarEditorResult*, false>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::AvatarEditorResult* Oculus::Platform::MessageWithAvatarEditorResult::GetDataFromMessage(void* c_message) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithAvatarEditorResult*>::get(), 89)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::AvatarEditorResult*, false>(this, ___internal_method, c_message);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::MessageWithAvatarEditorResult::MessageWithAvatarEditorResult() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
