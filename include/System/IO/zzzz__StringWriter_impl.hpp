#pragma once
#include "System/IO/zzzz__TextWriter_impl.hpp"
#include "System/IO/zzzz__StringWriter_def.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/Text/zzzz__UnicodeEncoding_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__IFormatProvider_def.hpp"
//  Writing Method size for method: ::System::IO::StringWriter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::StringWriter::*)()>(&::System::IO::StringWriter::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x268fcd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StringWriter*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StringWriter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::StringWriter::*)(::System::IFormatProvider*)>(&::System::IO::StringWriter::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x268fe54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StringWriter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StringWriter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::StringWriter::*)(::System::Text::StringBuilder*, ::System::IFormatProvider*)>(
    &::System::IO::StringWriter::_ctor)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x268fd6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StringWriter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StringWriter.Close
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::StringWriter::*)()>(&::System::IO::StringWriter::Close)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x268fec8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StringWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StringWriter*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StringWriter.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::StringWriter::*)(bool)>(&::System::IO::StringWriter::Dispose)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x268fed8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StringWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StringWriter*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StringWriter.get_Encoding
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::Encoding* (::System::IO::StringWriter::*)()>(&::System::IO::StringWriter::get_Encoding)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x268fee8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StringWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StringWriter*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StringWriter.Write
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::StringWriter::*)(char16_t)>(&::System::IO::StringWriter::Write)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x268ff94;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StringWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StringWriter*>::get(), 15));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StringWriter.Write
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::StringWriter::*)(::ArrayW<char16_t, ::Array<char16_t>*>, int32_t, int32_t)>(
    &::System::IO::StringWriter::Write)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x268ffbc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StringWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StringWriter*>::get(), 17));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StringWriter.Write
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::StringWriter::*)(::StringW)>(&::System::IO::StringWriter::Write)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2690144;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StringWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StringWriter*>::get(), 18));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StringWriter.FlushAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::System::IO::StringWriter::*)()>(&::System::IO::StringWriter::FlushAsync)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2690178;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StringWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StringWriter*>::get(), 24));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StringWriter.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::IO::StringWriter::*)()>(&::System::IO::StringWriter::ToString)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2690200;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StringWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StringWriter*>::get(), 3));
    return ___internal_method;
  }
};
constexpr ::System::Text::StringBuilder*& System::IO::StringWriter::__cordl_internal_get__sb() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sb;
}
constexpr ::cordl_internals::to_const_pointer<::System::Text::StringBuilder*> const& System::IO::StringWriter::__cordl_internal_get__sb() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sb;
}
constexpr void System::IO::StringWriter::__cordl_internal_set__sb(::System::Text::StringBuilder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____sb)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::IO::StringWriter::__cordl_internal_get__isOpen() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isOpen;
}
constexpr bool const& System::IO::StringWriter::__cordl_internal_get__isOpen() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isOpen;
}
constexpr void System::IO::StringWriter::__cordl_internal_set__isOpen(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isOpen = value;
}
inline void System::IO::StringWriter::setStaticF_m_encoding(::System::Text::UnicodeEncoding* value) {
  ::cordl_internals::setStaticField<::System::Text::UnicodeEncoding*, "m_encoding", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StringWriter*>::get>(
      std::forward<::System::Text::UnicodeEncoding*>(value));
}
inline ::System::Text::UnicodeEncoding* System::IO::StringWriter::getStaticF_m_encoding() {
  return ::cordl_internals::getStaticField<::System::Text::UnicodeEncoding*, "m_encoding", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StringWriter*>::get>();
}
inline ::System::IO::StringWriter* System::IO::StringWriter::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::IO::StringWriter*>());
}
inline void System::IO::StringWriter::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StringWriter*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::IO::StringWriter* System::IO::StringWriter::New_ctor(::System::IFormatProvider* formatProvider) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::IO::StringWriter*>(formatProvider));
}
inline void System::IO::StringWriter::_ctor(::System::IFormatProvider* formatProvider) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StringWriter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, formatProvider);
}
inline ::System::IO::StringWriter* System::IO::StringWriter::New_ctor(::System::Text::StringBuilder* sb, ::System::IFormatProvider* formatProvider) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::IO::StringWriter*>(sb, formatProvider));
}
inline void System::IO::StringWriter::_ctor(::System::Text::StringBuilder* sb, ::System::IFormatProvider* formatProvider) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StringWriter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sb, formatProvider);
}
inline void System::IO::StringWriter::Close() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StringWriter*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::IO::StringWriter::Dispose(bool disposing) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StringWriter*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disposing);
}
inline ::System::Text::Encoding* System::IO::StringWriter::get_Encoding() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StringWriter*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::System::Text::Encoding*, false>(this, ___internal_method);
}
inline void System::IO::StringWriter::Write(char16_t value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StringWriter*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::IO::StringWriter::Write(::ArrayW<char16_t, ::Array<char16_t>*> buffer, int32_t index, int32_t count) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StringWriter*>::get(), 17)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, buffer, index, count);
}
inline void System::IO::StringWriter::Write(::StringW value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StringWriter*>::get(), 18)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Threading::Tasks::Task* System::IO::StringWriter::FlushAsync() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StringWriter*>::get(), 24)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method);
}
inline ::StringW System::IO::StringWriter::ToString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StringWriter*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::IO::StringWriter::StringWriter() {}
