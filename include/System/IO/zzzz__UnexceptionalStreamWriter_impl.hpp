#pragma once
#include "System/IO/zzzz__StreamWriter_impl.hpp"
#include "System/IO/zzzz__UnexceptionalStreamWriter_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
//  Writing Method size for method: ::System::IO::UnexceptionalStreamWriter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::UnexceptionalStreamWriter::*)(::System::IO::Stream*, ::System::Text::Encoding*)>(
    &::System::IO::UnexceptionalStreamWriter::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2544fb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnexceptionalStreamWriter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::Encoding*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::UnexceptionalStreamWriter.Flush
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::UnexceptionalStreamWriter::*)()>(&::System::IO::UnexceptionalStreamWriter::Flush)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2545030;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnexceptionalStreamWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnexceptionalStreamWriter*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::UnexceptionalStreamWriter.Write
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::UnexceptionalStreamWriter::*)(::ArrayW<char16_t, ::Array<char16_t>*>, int32_t, int32_t)>(
    &::System::IO::UnexceptionalStreamWriter::Write)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x25450b4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnexceptionalStreamWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnexceptionalStreamWriter*>::get(), 17));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::UnexceptionalStreamWriter.Write
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::UnexceptionalStreamWriter::*)(char16_t)>(&::System::IO::UnexceptionalStreamWriter::Write)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2545138;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnexceptionalStreamWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnexceptionalStreamWriter*>::get(), 15));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::UnexceptionalStreamWriter.Write
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::UnexceptionalStreamWriter::*)(::ArrayW<char16_t, ::Array<char16_t>*>)>(
    &::System::IO::UnexceptionalStreamWriter::Write)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x25451bc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnexceptionalStreamWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnexceptionalStreamWriter*>::get(), 16));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::UnexceptionalStreamWriter.Write
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::UnexceptionalStreamWriter::*)(::StringW)>(&::System::IO::UnexceptionalStreamWriter::Write)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2545240;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnexceptionalStreamWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnexceptionalStreamWriter*>::get(), 18));
    return ___internal_method;
  }
};
inline ::System::IO::UnexceptionalStreamWriter* System::IO::UnexceptionalStreamWriter::New_ctor(::System::IO::Stream* stream, ::System::Text::Encoding* encoding) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::IO::UnexceptionalStreamWriter*>(stream, encoding));
}
inline void System::IO::UnexceptionalStreamWriter::_ctor(::System::IO::Stream* stream, ::System::Text::Encoding* encoding) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnexceptionalStreamWriter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::Encoding*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stream, encoding);
}
inline void System::IO::UnexceptionalStreamWriter::Flush() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnexceptionalStreamWriter*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::IO::UnexceptionalStreamWriter::Write(::ArrayW<char16_t, ::Array<char16_t>*> buffer, int32_t index, int32_t count) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnexceptionalStreamWriter*>::get(), 17)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, buffer, index, count);
}
inline void System::IO::UnexceptionalStreamWriter::Write(char16_t value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnexceptionalStreamWriter*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::IO::UnexceptionalStreamWriter::Write(::ArrayW<char16_t, ::Array<char16_t>*> value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnexceptionalStreamWriter*>::get(), 16)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::IO::UnexceptionalStreamWriter::Write(::StringW value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnexceptionalStreamWriter*>::get(), 18)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::System::IO::UnexceptionalStreamWriter::UnexceptionalStreamWriter() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
