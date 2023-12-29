#pragma once
#include "System/IO/zzzz__StreamReader_impl.hpp"
#include "System/IO/zzzz__CStreamReader_def.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
#include "System/zzzz__TermInfoDriver_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::System::IO::CStreamReader._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::CStreamReader::*)(::System::IO::Stream*, ::System::Text::Encoding*)>(
    &::System::IO::CStreamReader::_ctor)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x23e9028;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::CStreamReader*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::Encoding*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::CStreamReader.Peek
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::IO::CStreamReader::*)()>(&::System::IO::CStreamReader::Peek)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x23e913c;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::CStreamReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::CStreamReader*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::CStreamReader.Read
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::IO::CStreamReader::*)()>(&::System::IO::CStreamReader::Read)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x23e91c4;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::CStreamReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::CStreamReader*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::CStreamReader.Read
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::IO::CStreamReader::*)(ByRef<::ArrayW<char16_t, ::Array<char16_t>*>>, int32_t, int32_t)>(
    &::System::IO::CStreamReader::Read)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x23e9294;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::CStreamReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::CStreamReader*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::CStreamReader.ReadLine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::IO::CStreamReader::*)()>(&::System::IO::CStreamReader::ReadLine)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x23e9444;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::CStreamReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::CStreamReader*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::CStreamReader.ReadToEnd
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::IO::CStreamReader::*)()>(&::System::IO::CStreamReader::ReadToEnd)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x23e94dc;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::CStreamReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::CStreamReader*>::get(), 12));
    return ___internal_method;
  }
};
constexpr ::System::TermInfoDriver*& System::IO::CStreamReader::__get_driver() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___driver;
}
constexpr ::cordl_internals::to_const_pointer<::System::TermInfoDriver*> const& System::IO::CStreamReader::__get_driver() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___driver;
}
constexpr void System::IO::CStreamReader::__set_driver(::System::TermInfoDriver* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___driver)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::IO::CStreamReader* System::IO::CStreamReader::New_ctor(::System::IO::Stream* stream, ::System::Text::Encoding* encoding) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::IO::CStreamReader*>(stream, encoding));
}
inline void System::IO::CStreamReader::_ctor(::System::IO::Stream* stream, ::System::Text::Encoding* encoding) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::CStreamReader*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::Encoding*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stream, encoding);
}
inline int32_t System::IO::CStreamReader::Peek() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::CStreamReader*>::get(), "Peek",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t System::IO::CStreamReader::Read() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::CStreamReader*>::get(), "Read",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t System::IO::CStreamReader::Read(ByRef<::ArrayW<char16_t, ::Array<char16_t>*>> dest, int32_t index, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::CStreamReader*>::get(), "Read", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<char16_t, ::Array<char16_t>*>>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, dest, index, count);
}
inline ::StringW System::IO::CStreamReader::ReadLine() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::CStreamReader*>::get(), "ReadLine",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::IO::CStreamReader::ReadToEnd() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::CStreamReader*>::get(), "ReadToEnd",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::IO::CStreamReader::CStreamReader() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
