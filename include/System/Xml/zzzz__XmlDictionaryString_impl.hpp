#pragma once
// IWYU pragma private; include "System/Xml/XmlDictionaryString.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/zzzz__XmlDictionaryString_def.hpp"
#include "System/Xml/zzzz__IXmlDictionary_def.hpp"
#include "System/Xml/zzzz__XmlDictionaryString_def.hpp"
//  Writing Method size for method: ::System::Xml::XmlDictionaryString_EmptyStringDictionary._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlDictionaryString_EmptyStringDictionary::*)()>(
    &::System::Xml::XmlDictionaryString_EmptyStringDictionary::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5f6fa10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryString_EmptyStringDictionary*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryString_EmptyStringDictionary.get_EmptyString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlDictionaryString* (::System::Xml::XmlDictionaryString_EmptyStringDictionary::*)()>(
    &::System::Xml::XmlDictionaryString_EmptyStringDictionary::get_EmptyString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f6fa84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryString_EmptyStringDictionary*>::get(),
                                                                               "get_EmptyString", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryString_EmptyStringDictionary.TryLookup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlDictionaryString_EmptyStringDictionary::*)(
    int32_t, ::ByRef<::System::Xml::XmlDictionaryString*>)>(&::System::Xml::XmlDictionaryString_EmptyStringDictionary::TryLookup)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5f6fa8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryString_EmptyStringDictionary*>::get(), "TryLookup", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Xml::XmlDictionaryString*>>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Xml::XmlDictionaryString*& System::Xml::XmlDictionaryString_EmptyStringDictionary::__cordl_internal_get_empty() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___empty;
}
constexpr ::System::Xml::XmlDictionaryString* const& System::Xml::XmlDictionaryString_EmptyStringDictionary::__cordl_internal_get_empty() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___empty;
}
constexpr void System::Xml::XmlDictionaryString_EmptyStringDictionary::__cordl_internal_set_empty(::System::Xml::XmlDictionaryString* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___empty)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Xml::XmlDictionaryString_EmptyStringDictionary::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryString_EmptyStringDictionary*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Xml::XmlDictionaryString* System::Xml::XmlDictionaryString_EmptyStringDictionary::get_EmptyString() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryString_EmptyStringDictionary*>::get(),
                                                                             "get_EmptyString", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlDictionaryString*, false>(this, ___internal_method);
}
inline bool System::Xml::XmlDictionaryString_EmptyStringDictionary::TryLookup(int32_t key, ::ByRef<::System::Xml::XmlDictionaryString*> result) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryString_EmptyStringDictionary*>::get(), "TryLookup", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Xml::XmlDictionaryString*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, key, result);
}
inline ::System::Xml::XmlDictionaryString_EmptyStringDictionary* System::Xml::XmlDictionaryString_EmptyStringDictionary::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::XmlDictionaryString_EmptyStringDictionary*>());
}
/// @brief Convert operator to "::System::Xml::IXmlDictionary"
constexpr System::Xml::XmlDictionaryString_EmptyStringDictionary::operator ::System::Xml::IXmlDictionary*() noexcept {
  return static_cast<::System::Xml::IXmlDictionary*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Xml::IXmlDictionary"
constexpr ::System::Xml::IXmlDictionary* System::Xml::XmlDictionaryString_EmptyStringDictionary::i___System__Xml__IXmlDictionary() noexcept {
  return static_cast<::System::Xml::IXmlDictionary*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Xml::XmlDictionaryString_EmptyStringDictionary::XmlDictionaryString_EmptyStringDictionary() {}
//  Writing Method size for method: ::System::Xml::XmlDictionaryString._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlDictionaryString::*)(::System::Xml::IXmlDictionary*, ::StringW, int32_t)>(
    &::System::Xml::XmlDictionaryString::_ctor)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x5f6b638;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryString*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::IXmlDictionary*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryString.GetString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::Xml::XmlDictionaryString*)>(&::System::Xml::XmlDictionaryString::GetString)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5f6bd88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryString*>::get(), "GetString", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlDictionaryString*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryString.get_Empty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlDictionaryString* (*)()>(&::System::Xml::XmlDictionaryString::get_Empty)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5f6f8d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryString*>::get(), "get_Empty",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryString.get_Dictionary
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::IXmlDictionary* (::System::Xml::XmlDictionaryString::*)()>(
    &::System::Xml::XmlDictionaryString::get_Dictionary)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f6f940;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryString*>::get(), "get_Dictionary",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryString.get_Key
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::XmlDictionaryString::*)()>(&::System::Xml::XmlDictionaryString::get_Key)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f6f948;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryString*>::get(), "get_Key",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryString.get_Value
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XmlDictionaryString::*)()>(&::System::Xml::XmlDictionaryString::get_Value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f6f950;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryString*>::get(), "get_Value",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryString.ToUTF8
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::System::Xml::XmlDictionaryString::*)()>(
    &::System::Xml::XmlDictionaryString::ToUTF8)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5f6f958;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryString*>::get(), "ToUTF8",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDictionaryString.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XmlDictionaryString::*)()>(&::System::Xml::XmlDictionaryString::ToString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f6f994;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryString*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryString*>::get(), 3));
    return ___internal_method;
  }
};
constexpr ::System::Xml::IXmlDictionary*& System::Xml::XmlDictionaryString::__cordl_internal_get_dictionary() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dictionary;
}
constexpr ::System::Xml::IXmlDictionary* const& System::Xml::XmlDictionaryString::__cordl_internal_get_dictionary() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dictionary;
}
constexpr void System::Xml::XmlDictionaryString::__cordl_internal_set_dictionary(::System::Xml::IXmlDictionary* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___dictionary)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Xml::XmlDictionaryString::__cordl_internal_get_value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___value;
}
constexpr ::StringW const& System::Xml::XmlDictionaryString::__cordl_internal_get_value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___value;
}
constexpr void System::Xml::XmlDictionaryString::__cordl_internal_set_value(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___value)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Xml::XmlDictionaryString::__cordl_internal_get_key() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___key;
}
constexpr int32_t const& System::Xml::XmlDictionaryString::__cordl_internal_get_key() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___key;
}
constexpr void System::Xml::XmlDictionaryString::__cordl_internal_set_key(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___key = value;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& System::Xml::XmlDictionaryString::__cordl_internal_get_buffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buffer;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& System::Xml::XmlDictionaryString::__cordl_internal_get_buffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buffer;
}
constexpr void System::Xml::XmlDictionaryString::__cordl_internal_set_buffer(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___buffer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Xml::XmlDictionaryString::setStaticF_emptyStringDictionary(::System::Xml::XmlDictionaryString_EmptyStringDictionary* value) {
  ::cordl_internals::setStaticField<::System::Xml::XmlDictionaryString_EmptyStringDictionary*, "emptyStringDictionary",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryString*>::get>(
      std::forward<::System::Xml::XmlDictionaryString_EmptyStringDictionary*>(value));
}
inline ::System::Xml::XmlDictionaryString_EmptyStringDictionary* System::Xml::XmlDictionaryString::getStaticF_emptyStringDictionary() {
  return ::cordl_internals::getStaticField<::System::Xml::XmlDictionaryString_EmptyStringDictionary*, "emptyStringDictionary",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryString*>::get>();
}
inline void System::Xml::XmlDictionaryString::_ctor(::System::Xml::IXmlDictionary* dictionary, ::StringW value, int32_t key) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryString*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::IXmlDictionary*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dictionary, value, key);
}
inline ::StringW System::Xml::XmlDictionaryString::GetString(::System::Xml::XmlDictionaryString* s) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryString*>::get(), "GetString", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlDictionaryString*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, s);
}
inline ::System::Xml::XmlDictionaryString* System::Xml::XmlDictionaryString::get_Empty() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryString*>::get(), "get_Empty",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlDictionaryString*, false>(nullptr, ___internal_method);
}
inline ::System::Xml::IXmlDictionary* System::Xml::XmlDictionaryString::get_Dictionary() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryString*>::get(), "get_Dictionary",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::IXmlDictionary*, false>(this, ___internal_method);
}
inline int32_t System::Xml::XmlDictionaryString::get_Key() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryString*>::get(), "get_Key",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlDictionaryString::get_Value() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryString*>::get(), "get_Value",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> System::Xml::XmlDictionaryString::ToUTF8() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryString*>::get(), "ToUTF8",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlDictionaryString::ToString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDictionaryString*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::System::Xml::XmlDictionaryString* System::Xml::XmlDictionaryString::New_ctor(::System::Xml::IXmlDictionary* dictionary, ::StringW value, int32_t key) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::XmlDictionaryString*>(dictionary, value, key));
}
// Ctor Parameters []
constexpr ::System::Xml::XmlDictionaryString::XmlDictionaryString() {}
