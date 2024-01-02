#pragma once
#include "System/Security/Util/zzzz__Tokenizer_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Security/Util/zzzz__Tokenizer_def.hpp"
#include "System/Security/Util/zzzz__Tokenizer_def.hpp"
#include "System/Security/Util/zzzz__TokenizerStream_def.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
#include "System/IO/zzzz__StreamReader_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Security::Util::__Tokenizer__TokenSource::__Tokenizer__TokenSource(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Security::Util::__Tokenizer__TokenSource::__Tokenizer__TokenSource() {}
constexpr ::System::Security::Util::__Tokenizer__TokenSource System::Security::Util::__Tokenizer__TokenSource::UnicodeByteArray{ static_cast<int32_t>(0x0) };
constexpr ::System::Security::Util::__Tokenizer__TokenSource System::Security::Util::__Tokenizer__TokenSource::UTF8ByteArray{ static_cast<int32_t>(0x1) };
constexpr ::System::Security::Util::__Tokenizer__TokenSource System::Security::Util::__Tokenizer__TokenSource::ASCIIByteArray{ static_cast<int32_t>(0x2) };
constexpr ::System::Security::Util::__Tokenizer__TokenSource System::Security::Util::__Tokenizer__TokenSource::CharArray{ static_cast<int32_t>(0x3) };
constexpr ::System::Security::Util::__Tokenizer__TokenSource System::Security::Util::__Tokenizer__TokenSource::String{ static_cast<int32_t>(0x4) };
constexpr ::System::Security::Util::__Tokenizer__TokenSource System::Security::Util::__Tokenizer__TokenSource::NestedStrings{ static_cast<int32_t>(0x5) };
constexpr ::System::Security::Util::__Tokenizer__TokenSource System::Security::Util::__Tokenizer__TokenSource::Other{ static_cast<int32_t>(0x6) };
//  Writing Method size for method: ::System::Security::Util::__Tokenizer__StringMaker.HashString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)(::StringW)>(&::System::Security::Util::__Tokenizer__StringMaker::HashString)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x24562c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Util::__Tokenizer__StringMaker*>::get(), "HashString",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Util::__Tokenizer__StringMaker.HashCharArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)(::ArrayW<char16_t, ::Array<char16_t>*>, int32_t)>(
    &::System::Security::Util::__Tokenizer__StringMaker::HashCharArray)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2456334;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Util::__Tokenizer__StringMaker*>::get(), "HashCharArray", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Util::__Tokenizer__StringMaker._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Util::__Tokenizer__StringMaker::*)()>(
    &::System::Security::Util::__Tokenizer__StringMaker::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2456390;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Util::__Tokenizer__StringMaker*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Util::__Tokenizer__StringMaker.CompareStringAndChars
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Security::Util::__Tokenizer__StringMaker::*)(
    ::StringW, ::ArrayW<char16_t, ::Array<char16_t>*>, int32_t)>(&::System::Security::Util::__Tokenizer__StringMaker::CompareStringAndChars)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2456424;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Util::__Tokenizer__StringMaker*>::get(), "CompareStringAndChars", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Util::__Tokenizer__StringMaker.MakeString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Security::Util::__Tokenizer__StringMaker::*)()>(
    &::System::Security::Util::__Tokenizer__StringMaker::MakeString)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x2450998;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Util::__Tokenizer__StringMaker*>::get(),
                                                                               "MakeString", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& System::Security::Util::__Tokenizer__StringMaker::__get_aStrings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___aStrings;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& System::Security::Util::__Tokenizer__StringMaker::__get_aStrings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___aStrings;
}
constexpr void System::Security::Util::__Tokenizer__StringMaker::__set_aStrings(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___aStrings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr uint32_t& System::Security::Util::__Tokenizer__StringMaker::__get_cStringsMax() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cStringsMax;
}
constexpr uint32_t const& System::Security::Util::__Tokenizer__StringMaker::__get_cStringsMax() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cStringsMax;
}
constexpr void System::Security::Util::__Tokenizer__StringMaker::__set_cStringsMax(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cStringsMax = value;
}
constexpr uint32_t& System::Security::Util::__Tokenizer__StringMaker::__get_cStringsUsed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cStringsUsed;
}
constexpr uint32_t const& System::Security::Util::__Tokenizer__StringMaker::__get_cStringsUsed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cStringsUsed;
}
constexpr void System::Security::Util::__Tokenizer__StringMaker::__set_cStringsUsed(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cStringsUsed = value;
}
constexpr ::System::Text::StringBuilder*& System::Security::Util::__Tokenizer__StringMaker::__get__outStringBuilder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____outStringBuilder;
}
constexpr ::cordl_internals::to_const_pointer<::System::Text::StringBuilder*> const& System::Security::Util::__Tokenizer__StringMaker::__get__outStringBuilder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____outStringBuilder;
}
constexpr void System::Security::Util::__Tokenizer__StringMaker::__set__outStringBuilder(::System::Text::StringBuilder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____outStringBuilder)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<char16_t, ::Array<char16_t>*>& System::Security::Util::__Tokenizer__StringMaker::__get__outChars() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____outChars;
}
constexpr ::ArrayW<char16_t, ::Array<char16_t>*> const& System::Security::Util::__Tokenizer__StringMaker::__get__outChars() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____outChars;
}
constexpr void System::Security::Util::__Tokenizer__StringMaker::__set__outChars(::ArrayW<char16_t, ::Array<char16_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____outChars)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Security::Util::__Tokenizer__StringMaker::__get__outIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____outIndex;
}
constexpr int32_t const& System::Security::Util::__Tokenizer__StringMaker::__get__outIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____outIndex;
}
constexpr void System::Security::Util::__Tokenizer__StringMaker::__set__outIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____outIndex = value;
}
inline uint32_t System::Security::Util::__Tokenizer__StringMaker::HashString(::StringW str) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Util::__Tokenizer__StringMaker*>::get(), "HashString",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method, str);
}
inline uint32_t System::Security::Util::__Tokenizer__StringMaker::HashCharArray(::ArrayW<char16_t, ::Array<char16_t>*> a, int32_t l) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Util::__Tokenizer__StringMaker*>::get(), "HashCharArray", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method, a, l);
}
inline ::System::Security::Util::__Tokenizer__StringMaker* System::Security::Util::__Tokenizer__StringMaker::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Security::Util::__Tokenizer__StringMaker*>());
}
inline void System::Security::Util::__Tokenizer__StringMaker::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Util::__Tokenizer__StringMaker*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool System::Security::Util::__Tokenizer__StringMaker::CompareStringAndChars(::StringW str, ::ArrayW<char16_t, ::Array<char16_t>*> a, int32_t l) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Util::__Tokenizer__StringMaker*>::get(), "CompareStringAndChars", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, str, a, l);
}
inline ::StringW System::Security::Util::__Tokenizer__StringMaker::MakeString() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Util::__Tokenizer__StringMaker*>::get(),
                                                                             "MakeString", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Security::Util::__Tokenizer__StringMaker::__Tokenizer__StringMaker() {}
//  Writing Method size for method: ::System::Security::Util::__Tokenizer__ITokenReader.Read
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Security::Util::__Tokenizer__ITokenReader::*)()>(
    &::System::Security::Util::__Tokenizer__ITokenReader::Read)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Util::__Tokenizer__ITokenReader*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Util::__Tokenizer__ITokenReader*>::get(), 0));
    return ___internal_method;
  }
};
inline int32_t System::Security::Util::__Tokenizer__ITokenReader::Read() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Util::__Tokenizer__ITokenReader*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
//  Writing Method size for method: ::System::Security::Util::__Tokenizer__StreamTokenReader._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Util::__Tokenizer__StreamTokenReader::*)(::System::IO::StreamReader*)>(
    &::System::Security::Util::__Tokenizer__StreamTokenReader::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x24560ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Util::__Tokenizer__StreamTokenReader*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::StreamReader*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Util::__Tokenizer__StreamTokenReader.Read
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Security::Util::__Tokenizer__StreamTokenReader::*)()>(
    &::System::Security::Util::__Tokenizer__StreamTokenReader::Read)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x24564b8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Util::__Tokenizer__StreamTokenReader*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Util::__Tokenizer__StreamTokenReader*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Util::__Tokenizer__StreamTokenReader.get_NumCharEncountered
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Security::Util::__Tokenizer__StreamTokenReader::*)()>(
    &::System::Security::Util::__Tokenizer__StreamTokenReader::get_NumCharEncountered)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24564f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Util::__Tokenizer__StreamTokenReader*>::get(),
                                                                               "get_NumCharEncountered", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Security::Util::__Tokenizer__ITokenReader"
constexpr System::Security::Util::__Tokenizer__StreamTokenReader::operator ::System::Security::Util::__Tokenizer__ITokenReader*() noexcept {
  return static_cast<::System::Security::Util::__Tokenizer__ITokenReader*>(static_cast<void*>(this));
}
constexpr ::System::IO::StreamReader*& System::Security::Util::__Tokenizer__StreamTokenReader::__get__in() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____in;
}
constexpr ::cordl_internals::to_const_pointer<::System::IO::StreamReader*> const& System::Security::Util::__Tokenizer__StreamTokenReader::__get__in() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____in;
}
constexpr void System::Security::Util::__Tokenizer__StreamTokenReader::__set__in(::System::IO::StreamReader* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____in)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Security::Util::__Tokenizer__StreamTokenReader::__get__numCharRead() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____numCharRead;
}
constexpr int32_t const& System::Security::Util::__Tokenizer__StreamTokenReader::__get__numCharRead() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____numCharRead;
}
constexpr void System::Security::Util::__Tokenizer__StreamTokenReader::__set__numCharRead(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____numCharRead = value;
}
inline ::System::Security::Util::__Tokenizer__StreamTokenReader* System::Security::Util::__Tokenizer__StreamTokenReader::New_ctor(::System::IO::StreamReader* input) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Security::Util::__Tokenizer__StreamTokenReader*>(input));
}
inline void System::Security::Util::__Tokenizer__StreamTokenReader::_ctor(::System::IO::StreamReader* input) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Util::__Tokenizer__StreamTokenReader*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::StreamReader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, input);
}
inline int32_t System::Security::Util::__Tokenizer__StreamTokenReader::Read() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Util::__Tokenizer__StreamTokenReader*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t System::Security::Util::__Tokenizer__StreamTokenReader::get_NumCharEncountered() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Util::__Tokenizer__StreamTokenReader*>::get(),
                                                                             "get_NumCharEncountered", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Security::Util::__Tokenizer__StreamTokenReader::__Tokenizer__StreamTokenReader() {}
//  Writing Method size for method: ::System::Security::Util::Tokenizer.BasicInitialization
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Util::Tokenizer::*)()>(&::System::Security::Util::Tokenizer::BasicInitialization)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2455fd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Util::Tokenizer*>::get(),
                                                                               "BasicInitialization", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Util::Tokenizer.Recycle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Util::Tokenizer::*)()>(&::System::Security::Util::Tokenizer::Recycle)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2456050;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Util::Tokenizer*>::get(), "Recycle",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Util::Tokenizer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Util::Tokenizer::*)(::StringW)>(&::System::Security::Util::Tokenizer::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2455f90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Util::Tokenizer*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Util::Tokenizer.ChangeFormat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Util::Tokenizer::*)(::System::Text::Encoding*)>(
    &::System::Security::Util::Tokenizer::ChangeFormat)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x245581c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Util::Tokenizer*>::get(), "ChangeFormat", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::Encoding*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Util::Tokenizer.GetTokens
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Util::Tokenizer::*)(::System::Security::Util::TokenizerStream*, int32_t, bool)>(
    &::System::Security::Util::Tokenizer::GetTokens)> {
  constexpr static std::size_t size = 0x7e0;
  constexpr static std::size_t addrs = 0x2454fdc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Util::Tokenizer*>::get(), "GetTokens", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Util::TokenizerStream*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Util::Tokenizer.GetStringToken
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Security::Util::Tokenizer::*)()>(&::System::Security::Util::Tokenizer::GetStringToken)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x24561c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Util::Tokenizer*>::get(), "GetStringToken",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr int32_t& System::Security::Util::Tokenizer::__get_LineNo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___LineNo;
}
constexpr int32_t const& System::Security::Util::Tokenizer::__get_LineNo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___LineNo;
}
constexpr void System::Security::Util::Tokenizer::__set_LineNo(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___LineNo = value;
}
constexpr int32_t& System::Security::Util::Tokenizer::__get__inProcessingTag() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inProcessingTag;
}
constexpr int32_t const& System::Security::Util::Tokenizer::__get__inProcessingTag() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inProcessingTag;
}
constexpr void System::Security::Util::Tokenizer::__set__inProcessingTag(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____inProcessingTag = value;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& System::Security::Util::Tokenizer::__get__inBytes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inBytes;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& System::Security::Util::Tokenizer::__get__inBytes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inBytes;
}
constexpr void System::Security::Util::Tokenizer::__set__inBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____inBytes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<char16_t, ::Array<char16_t>*>& System::Security::Util::Tokenizer::__get__inChars() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inChars;
}
constexpr ::ArrayW<char16_t, ::Array<char16_t>*> const& System::Security::Util::Tokenizer::__get__inChars() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inChars;
}
constexpr void System::Security::Util::Tokenizer::__set__inChars(::ArrayW<char16_t, ::Array<char16_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____inChars)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Security::Util::Tokenizer::__get__inString() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inString;
}
constexpr ::StringW const& System::Security::Util::Tokenizer::__get__inString() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inString;
}
constexpr void System::Security::Util::Tokenizer::__set__inString(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____inString)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Security::Util::Tokenizer::__get__inIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inIndex;
}
constexpr int32_t const& System::Security::Util::Tokenizer::__get__inIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inIndex;
}
constexpr void System::Security::Util::Tokenizer::__set__inIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____inIndex = value;
}
constexpr int32_t& System::Security::Util::Tokenizer::__get__inSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inSize;
}
constexpr int32_t const& System::Security::Util::Tokenizer::__get__inSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inSize;
}
constexpr void System::Security::Util::Tokenizer::__set__inSize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____inSize = value;
}
constexpr int32_t& System::Security::Util::Tokenizer::__get__inSavedCharacter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inSavedCharacter;
}
constexpr int32_t const& System::Security::Util::Tokenizer::__get__inSavedCharacter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inSavedCharacter;
}
constexpr void System::Security::Util::Tokenizer::__set__inSavedCharacter(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____inSavedCharacter = value;
}
constexpr ::System::Security::Util::__Tokenizer__TokenSource& System::Security::Util::Tokenizer::__get__inTokenSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inTokenSource;
}
constexpr ::System::Security::Util::__Tokenizer__TokenSource const& System::Security::Util::Tokenizer::__get__inTokenSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inTokenSource;
}
constexpr void System::Security::Util::Tokenizer::__set__inTokenSource(::System::Security::Util::__Tokenizer__TokenSource value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____inTokenSource = value;
}
constexpr ::System::Security::Util::__Tokenizer__ITokenReader*& System::Security::Util::Tokenizer::__get__inTokenReader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inTokenReader;
}
constexpr ::cordl_internals::to_const_pointer<::System::Security::Util::__Tokenizer__ITokenReader*> const& System::Security::Util::Tokenizer::__get__inTokenReader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inTokenReader;
}
constexpr void System::Security::Util::Tokenizer::__set__inTokenReader(::System::Security::Util::__Tokenizer__ITokenReader* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____inTokenReader)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Security::Util::__Tokenizer__StringMaker*& System::Security::Util::Tokenizer::__get__maker() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maker;
}
constexpr ::cordl_internals::to_const_pointer<::System::Security::Util::__Tokenizer__StringMaker*> const& System::Security::Util::Tokenizer::__get__maker() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maker;
}
constexpr void System::Security::Util::Tokenizer::__set__maker(::System::Security::Util::__Tokenizer__StringMaker* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____maker)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& System::Security::Util::Tokenizer::__get__searchStrings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____searchStrings;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& System::Security::Util::Tokenizer::__get__searchStrings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____searchStrings;
}
constexpr void System::Security::Util::Tokenizer::__set__searchStrings(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____searchStrings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& System::Security::Util::Tokenizer::__get__replaceStrings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____replaceStrings;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& System::Security::Util::Tokenizer::__get__replaceStrings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____replaceStrings;
}
constexpr void System::Security::Util::Tokenizer::__set__replaceStrings(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____replaceStrings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Security::Util::Tokenizer::__get__inNestedIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inNestedIndex;
}
constexpr int32_t const& System::Security::Util::Tokenizer::__get__inNestedIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inNestedIndex;
}
constexpr void System::Security::Util::Tokenizer::__set__inNestedIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____inNestedIndex = value;
}
constexpr int32_t& System::Security::Util::Tokenizer::__get__inNestedSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inNestedSize;
}
constexpr int32_t const& System::Security::Util::Tokenizer::__get__inNestedSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inNestedSize;
}
constexpr void System::Security::Util::Tokenizer::__set__inNestedSize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____inNestedSize = value;
}
constexpr ::StringW& System::Security::Util::Tokenizer::__get__inNestedString() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inNestedString;
}
constexpr ::StringW const& System::Security::Util::Tokenizer::__get__inNestedString() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inNestedString;
}
constexpr void System::Security::Util::Tokenizer::__set__inNestedString(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____inNestedString)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Security::Util::Tokenizer::BasicInitialization() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Util::Tokenizer*>::get(), "BasicInitialization",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Security::Util::Tokenizer::Recycle() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Util::Tokenizer*>::get(), "Recycle",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Security::Util::Tokenizer* System::Security::Util::Tokenizer::New_ctor(::StringW input) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Security::Util::Tokenizer*>(input));
}
inline void System::Security::Util::Tokenizer::_ctor(::StringW input) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Util::Tokenizer*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, input);
}
inline void System::Security::Util::Tokenizer::ChangeFormat(::System::Text::Encoding* encoding) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Util::Tokenizer*>::get(), "ChangeFormat", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::Encoding*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, encoding);
}
inline void System::Security::Util::Tokenizer::GetTokens(::System::Security::Util::TokenizerStream* stream, int32_t maxNum, bool endAfterKet) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Util::Tokenizer*>::get(), "GetTokens", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Util::TokenizerStream*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stream, maxNum, endAfterKet);
}
inline ::StringW System::Security::Util::Tokenizer::GetStringToken() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Util::Tokenizer*>::get(), "GetStringToken",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Security::Util::Tokenizer::Tokenizer() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
