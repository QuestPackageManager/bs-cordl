#pragma once
// IWYU pragma private; include "System/Net/Http/MultipartFormDataContent.hpp"
#include "System/Net/Http/zzzz__MultipartContent_impl.hpp"
#include "System/Net/Http/zzzz__MultipartFormDataContent_def.hpp"
#include "System/Net/Http/zzzz__HttpContent_def.hpp"
//  Writing Method size for method: ::System::Net::Http::MultipartFormDataContent._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Http::MultipartFormDataContent::*)()>(&::System::Net::Http::MultipartFormDataContent::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5f2ce68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::MultipartFormDataContent*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::MultipartFormDataContent.Add
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Http::MultipartFormDataContent::*)(::System::Net::Http::HttpContent*)>(
    &::System::Net::Http::MultipartFormDataContent::Add)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5f2ceb4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::MultipartFormDataContent*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::MultipartFormDataContent*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::MultipartFormDataContent.Add
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Http::MultipartFormDataContent::*)(::System::Net::Http::HttpContent*, ::StringW, ::StringW)>(
    &::System::Net::Http::MultipartFormDataContent::Add)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5f2cfb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::MultipartFormDataContent*>::get(), "Add", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Http::HttpContent*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::MultipartFormDataContent.AddContentDisposition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Http::MultipartFormDataContent::*)(::System::Net::Http::HttpContent*, ::StringW, ::StringW)>(
    &::System::Net::Http::MultipartFormDataContent::AddContentDisposition)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5f2ced4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::MultipartFormDataContent*>::get(), "AddContentDisposition", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Http::HttpContent*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline void System::Net::Http::MultipartFormDataContent::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::MultipartFormDataContent*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Net::Http::MultipartFormDataContent::Add(::System::Net::Http::HttpContent* content) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::MultipartFormDataContent*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, content);
}
inline void System::Net::Http::MultipartFormDataContent::Add(::System::Net::Http::HttpContent* content, ::StringW name, ::StringW fileName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::MultipartFormDataContent*>::get(), "Add", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Http::HttpContent*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, content, name, fileName);
}
inline void System::Net::Http::MultipartFormDataContent::AddContentDisposition(::System::Net::Http::HttpContent* content, ::StringW name, ::StringW fileName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::MultipartFormDataContent*>::get(), "AddContentDisposition", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Http::HttpContent*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, content, name, fileName);
}
inline ::System::Net::Http::MultipartFormDataContent* System::Net::Http::MultipartFormDataContent::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::Http::MultipartFormDataContent*>());
}
// Ctor Parameters []
constexpr ::System::Net::Http::MultipartFormDataContent::MultipartFormDataContent() {}
