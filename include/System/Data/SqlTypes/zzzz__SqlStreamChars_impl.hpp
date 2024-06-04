#pragma once
// IWYU pragma private; include "System/Data/SqlTypes/SqlStreamChars.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Data/SqlTypes/zzzz__SqlStreamChars_def.hpp"
#include "System/IO/zzzz__SeekOrigin_def.hpp"
//  Writing Method size for method: ::System::Data::SqlTypes::SqlStreamChars.get_Length
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::System::Data::SqlTypes::SqlStreamChars::*)()>(&::System::Data::SqlTypes::SqlStreamChars::get_Length)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlStreamChars*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlStreamChars*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlStreamChars.get_Position
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::System::Data::SqlTypes::SqlStreamChars::*)()>(&::System::Data::SqlTypes::SqlStreamChars::get_Position)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlStreamChars*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlStreamChars*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlStreamChars.Read
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Data::SqlTypes::SqlStreamChars::*)(::ArrayW<char16_t, ::Array<char16_t>*>, int32_t, int32_t)>(
    &::System::Data::SqlTypes::SqlStreamChars::Read)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlStreamChars*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlStreamChars*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlStreamChars.Seek
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::System::Data::SqlTypes::SqlStreamChars::*)(int64_t, ::System::IO::SeekOrigin)>(
    &::System::Data::SqlTypes::SqlStreamChars::Seek)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlStreamChars*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlStreamChars*>::get(), 7));
    return ___internal_method;
  }
};
inline int64_t System::Data::SqlTypes::SqlStreamChars::get_Length() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlStreamChars*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline int64_t System::Data::SqlTypes::SqlStreamChars::get_Position() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlStreamChars*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline int32_t System::Data::SqlTypes::SqlStreamChars::Read(::ArrayW<char16_t, ::Array<char16_t>*> buffer, int32_t offset, int32_t count) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlStreamChars*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, buffer, offset, count);
}
inline int64_t System::Data::SqlTypes::SqlStreamChars::Seek(int64_t offset, ::System::IO::SeekOrigin origin) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlStreamChars*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method, offset, origin);
}
// Ctor Parameters []
constexpr ::System::Data::SqlTypes::SqlStreamChars::SqlStreamChars() {}
