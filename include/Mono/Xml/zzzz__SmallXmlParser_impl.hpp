#pragma once
// IWYU pragma private; include "Mono/Xml/SmallXmlParser.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mono/Xml/zzzz__SmallXmlParser_def.hpp"
#include "Mono/Xml/zzzz__SmallXmlParser_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__Stack_def.hpp"
#include "System/IO/zzzz__TextReader_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__Exception_def.hpp"
inline void Mono::Xml::SmallXmlParser_IContentHandler::OnStartParsing(::Mono::Xml::SmallXmlParser* parser) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Xml::SmallXmlParser_IContentHandler*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, parser);
}
inline void Mono::Xml::SmallXmlParser_IContentHandler::OnEndParsing(::Mono::Xml::SmallXmlParser* parser) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Xml::SmallXmlParser_IContentHandler*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, parser);
}
inline void Mono::Xml::SmallXmlParser_IContentHandler::OnStartElement(::StringW name, ::Mono::Xml::SmallXmlParser_IAttrList* attrs) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Xml::SmallXmlParser_IContentHandler*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name, attrs);
}
inline void Mono::Xml::SmallXmlParser_IContentHandler::OnEndElement(::StringW name) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Xml::SmallXmlParser_IContentHandler*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name);
}
inline void Mono::Xml::SmallXmlParser_IContentHandler::OnProcessingInstruction(::StringW name, ::StringW text) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Xml::SmallXmlParser_IContentHandler*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name, text);
}
inline void Mono::Xml::SmallXmlParser_IContentHandler::OnChars(::StringW text) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Xml::SmallXmlParser_IContentHandler*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, text);
}
inline void Mono::Xml::SmallXmlParser_IContentHandler::OnIgnorableWhitespace(::StringW text) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Xml::SmallXmlParser_IContentHandler*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, text);
}
inline int32_t Mono::Xml::SmallXmlParser_IAttrList::get_Length() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Xml::SmallXmlParser_IAttrList*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::StringW Mono::Xml::SmallXmlParser_IAttrList::GetName(int32_t i) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Xml::SmallXmlParser_IAttrList*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, i);
}
inline ::StringW Mono::Xml::SmallXmlParser_IAttrList::GetValue(int32_t i) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Xml::SmallXmlParser_IAttrList*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, i);
}
inline ::StringW Mono::Xml::SmallXmlParser_IAttrList::GetValue(::StringW name) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Xml::SmallXmlParser_IAttrList*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, name);
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> Mono::Xml::SmallXmlParser_IAttrList::get_Names() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Xml::SmallXmlParser_IAttrList*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW, ::Array<::StringW>*>, false>(this, ___internal_method);
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> Mono::Xml::SmallXmlParser_IAttrList::get_Values() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Xml::SmallXmlParser_IAttrList*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW, ::Array<::StringW>*>, false>(this, ___internal_method);
}
//  Writing Method size for method: ::Mono::Xml::SmallXmlParser_AttrListImpl.get_Length
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Mono::Xml::SmallXmlParser_AttrListImpl::*)()>(&::Mono::Xml::SmallXmlParser_AttrListImpl::get_Length)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x3c56a30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Xml::SmallXmlParser_AttrListImpl*>::get(), "get_Length",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Xml::SmallXmlParser_AttrListImpl.GetName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Mono::Xml::SmallXmlParser_AttrListImpl::*)(int32_t)>(
    &::Mono::Xml::SmallXmlParser_AttrListImpl::GetName)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x3c56a78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Xml::SmallXmlParser_AttrListImpl*>::get(), "GetName", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Xml::SmallXmlParser_AttrListImpl.GetValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Mono::Xml::SmallXmlParser_AttrListImpl::*)(int32_t)>(
    &::Mono::Xml::SmallXmlParser_AttrListImpl::GetValue)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x3c56ad0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Xml::SmallXmlParser_AttrListImpl*>::get(), "GetValue", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Xml::SmallXmlParser_AttrListImpl.GetValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Mono::Xml::SmallXmlParser_AttrListImpl::*)(::StringW)>(
    &::Mono::Xml::SmallXmlParser_AttrListImpl::GetValue)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x3c56b28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Xml::SmallXmlParser_AttrListImpl*>::get(), "GetValue", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Xml::SmallXmlParser_AttrListImpl.get_Names
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW, ::Array<::StringW>*> (::Mono::Xml::SmallXmlParser_AttrListImpl::*)()>(
    &::Mono::Xml::SmallXmlParser_AttrListImpl::get_Names)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x3c56be8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Xml::SmallXmlParser_AttrListImpl*>::get(), "get_Names",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Xml::SmallXmlParser_AttrListImpl.get_Values
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW, ::Array<::StringW>*> (::Mono::Xml::SmallXmlParser_AttrListImpl::*)()>(
    &::Mono::Xml::SmallXmlParser_AttrListImpl::get_Values)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x3c56c38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Xml::SmallXmlParser_AttrListImpl*>::get(), "get_Values",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Xml::SmallXmlParser_AttrListImpl.Clear
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Xml::SmallXmlParser_AttrListImpl::*)()>(&::Mono::Xml::SmallXmlParser_AttrListImpl::Clear)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3c56460;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Xml::SmallXmlParser_AttrListImpl*>::get(), "Clear",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Xml::SmallXmlParser_AttrListImpl.Add
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Xml::SmallXmlParser_AttrListImpl::*)(::StringW, ::StringW)>(
    &::Mono::Xml::SmallXmlParser_AttrListImpl::Add)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x3c56924;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Xml::SmallXmlParser_AttrListImpl*>::get(), "Add", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Xml::SmallXmlParser_AttrListImpl._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Xml::SmallXmlParser_AttrListImpl::*)()>(&::Mono::Xml::SmallXmlParser_AttrListImpl::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x3c550f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Xml::SmallXmlParser_AttrListImpl*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::StringW>*& Mono::Xml::SmallXmlParser_AttrListImpl::__cordl_internal_get_attrNames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attrNames;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& Mono::Xml::SmallXmlParser_AttrListImpl::__cordl_internal_get_attrNames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attrNames;
}
constexpr void Mono::Xml::SmallXmlParser_AttrListImpl::__cordl_internal_set_attrNames(::System::Collections::Generic::List_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___attrNames)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& Mono::Xml::SmallXmlParser_AttrListImpl::__cordl_internal_get_attrValues() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attrValues;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& Mono::Xml::SmallXmlParser_AttrListImpl::__cordl_internal_get_attrValues() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attrValues;
}
constexpr void Mono::Xml::SmallXmlParser_AttrListImpl::__cordl_internal_set_attrValues(::System::Collections::Generic::List_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___attrValues)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline int32_t Mono::Xml::SmallXmlParser_AttrListImpl::get_Length() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Xml::SmallXmlParser_AttrListImpl*>::get(), "get_Length",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::StringW Mono::Xml::SmallXmlParser_AttrListImpl::GetName(int32_t i) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Xml::SmallXmlParser_AttrListImpl*>::get(), "GetName",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, i);
}
inline ::StringW Mono::Xml::SmallXmlParser_AttrListImpl::GetValue(int32_t i) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Xml::SmallXmlParser_AttrListImpl*>::get(), "GetValue",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, i);
}
inline ::StringW Mono::Xml::SmallXmlParser_AttrListImpl::GetValue(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Xml::SmallXmlParser_AttrListImpl*>::get(), "GetValue", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, name);
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> Mono::Xml::SmallXmlParser_AttrListImpl::get_Names() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Xml::SmallXmlParser_AttrListImpl*>::get(), "get_Names",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW, ::Array<::StringW>*>, false>(this, ___internal_method);
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> Mono::Xml::SmallXmlParser_AttrListImpl::get_Values() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Xml::SmallXmlParser_AttrListImpl*>::get(), "get_Values",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW, ::Array<::StringW>*>, false>(this, ___internal_method);
}
inline void Mono::Xml::SmallXmlParser_AttrListImpl::Clear() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Xml::SmallXmlParser_AttrListImpl*>::get(), "Clear",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Mono::Xml::SmallXmlParser_AttrListImpl::Add(::StringW name, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Xml::SmallXmlParser_AttrListImpl*>::get(), "Add", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name, value);
}
inline void Mono::Xml::SmallXmlParser_AttrListImpl::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Xml::SmallXmlParser_AttrListImpl*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Mono::Xml::SmallXmlParser_AttrListImpl* Mono::Xml::SmallXmlParser_AttrListImpl::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Mono::Xml::SmallXmlParser_AttrListImpl*>());
}
/// @brief Convert operator to "::Mono::Xml::SmallXmlParser_IAttrList"
constexpr Mono::Xml::SmallXmlParser_AttrListImpl::operator ::Mono::Xml::SmallXmlParser_IAttrList*() noexcept {
  return static_cast<::Mono::Xml::SmallXmlParser_IAttrList*>(static_cast<void*>(this));
}
/// @brief Convert to "::Mono::Xml::SmallXmlParser_IAttrList"
constexpr ::Mono::Xml::SmallXmlParser_IAttrList* Mono::Xml::SmallXmlParser_AttrListImpl::i___Mono__Xml__SmallXmlParser_IAttrList() noexcept {
  return static_cast<::Mono::Xml::SmallXmlParser_IAttrList*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Mono::Xml::SmallXmlParser_AttrListImpl::SmallXmlParser_AttrListImpl() {}
//  Writing Method size for method: ::Mono::Xml::SmallXmlParser._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Xml::SmallXmlParser::*)()>(&::Mono::Xml::SmallXmlParser::_ctor)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x3c54a04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Xml::SmallXmlParser*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Xml::SmallXmlParser.Error
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception* (::Mono::Xml::SmallXmlParser::*)(::StringW)>(&::Mono::Xml::SmallXmlParser::Error)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x3c5518c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Xml::SmallXmlParser*>::get(), "Error", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Xml::SmallXmlParser.UnexpectedEndError
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception* (::Mono::Xml::SmallXmlParser::*)()>(&::Mono::Xml::SmallXmlParser::UnexpectedEndError)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x3c552c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Xml::SmallXmlParser*>::get(), "UnexpectedEndError",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Xml::SmallXmlParser.IsNameChar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Mono::Xml::SmallXmlParser::*)(char16_t, bool)>(&::Mono::Xml::SmallXmlParser::IsNameChar)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x3c553b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Xml::SmallXmlParser*>::get(), "IsNameChar", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Xml::SmallXmlParser.IsWhitespace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Mono::Xml::SmallXmlParser::*)(int32_t)>(&::Mono::Xml::SmallXmlParser::IsWhitespace)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3c554b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Xml::SmallXmlParser*>::get(), "IsWhitespace", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Xml::SmallXmlParser.SkipWhitespaces
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Xml::SmallXmlParser::*)()>(&::Mono::Xml::SmallXmlParser::SkipWhitespaces)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3c554d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Xml::SmallXmlParser*>::get(), "SkipWhitespaces",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Xml::SmallXmlParser.HandleWhitespaces
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Xml::SmallXmlParser::*)()>(&::Mono::Xml::SmallXmlParser::HandleWhitespaces)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x3c5558c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Xml::SmallXmlParser*>::get(), "HandleWhitespaces",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Xml::SmallXmlParser.SkipWhitespaces
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Xml::SmallXmlParser::*)(bool)>(&::Mono::Xml::SmallXmlParser::SkipWhitespaces)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x3c554e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Xml::SmallXmlParser*>::get(), "SkipWhitespaces",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Xml::SmallXmlParser.Peek
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Mono::Xml::SmallXmlParser::*)()>(&::Mono::Xml::SmallXmlParser::Peek)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x3c556a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Xml::SmallXmlParser*>::get(), "Peek",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Xml::SmallXmlParser.Read
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Mono::Xml::SmallXmlParser::*)()>(&::Mono::Xml::SmallXmlParser::Read)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x3c5564c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Xml::SmallXmlParser*>::get(), "Read",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Xml::SmallXmlParser.Expect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Xml::SmallXmlParser::*)(int32_t)>(&::Mono::Xml::SmallXmlParser::Expect)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x3c556c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Xml::SmallXmlParser*>::get(), "Expect", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Xml::SmallXmlParser.ReadUntil
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Mono::Xml::SmallXmlParser::*)(char16_t, bool)>(&::Mono::Xml::SmallXmlParser::ReadUntil)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x3c55788;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Xml::SmallXmlParser*>::get(), "ReadUntil", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Xml::SmallXmlParser.ReadName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Mono::Xml::SmallXmlParser::*)()>(&::Mono::Xml::SmallXmlParser::ReadName)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x3c55a2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Xml::SmallXmlParser*>::get(), "ReadName",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Xml::SmallXmlParser.Parse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Xml::SmallXmlParser::*)(::System::IO::TextReader*, ::Mono::Xml::SmallXmlParser_IContentHandler*)>(
    &::Mono::Xml::SmallXmlParser::Parse)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x3c54b98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Xml::SmallXmlParser*>::get(), "Parse", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::TextReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Xml::SmallXmlParser_IContentHandler*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Xml::SmallXmlParser.Cleanup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Xml::SmallXmlParser::*)()>(&::Mono::Xml::SmallXmlParser::Cleanup)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x3c563e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Xml::SmallXmlParser*>::get(), "Cleanup",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Xml::SmallXmlParser.ReadContent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Xml::SmallXmlParser::*)()>(&::Mono::Xml::SmallXmlParser::ReadContent)> {
  constexpr static std::size_t size = 0x6dc;
  constexpr static std::size_t addrs = 0x3c55bd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Xml::SmallXmlParser*>::get(), "ReadContent",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Xml::SmallXmlParser.HandleBufferedContent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Xml::SmallXmlParser::*)()>(&::Mono::Xml::SmallXmlParser::HandleBufferedContent)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x3c562ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Xml::SmallXmlParser*>::get(), "HandleBufferedContent",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Xml::SmallXmlParser.ReadCharacters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Xml::SmallXmlParser::*)()>(&::Mono::Xml::SmallXmlParser::ReadCharacters)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x3c567e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Xml::SmallXmlParser*>::get(), "ReadCharacters",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Xml::SmallXmlParser.ReadReference
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Xml::SmallXmlParser::*)()>(&::Mono::Xml::SmallXmlParser::ReadReference)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x3c55864;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Xml::SmallXmlParser*>::get(), "ReadReference",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Xml::SmallXmlParser.ReadCharacterReference
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Mono::Xml::SmallXmlParser::*)()>(&::Mono::Xml::SmallXmlParser::ReadCharacterReference)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x3c56868;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Xml::SmallXmlParser*>::get(), "ReadCharacterReference",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Xml::SmallXmlParser.ReadAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Xml::SmallXmlParser::*)(::Mono::Xml::SmallXmlParser_AttrListImpl*)>(
    &::Mono::Xml::SmallXmlParser::ReadAttribute)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x3c5667c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Xml::SmallXmlParser*>::get(), "ReadAttribute", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Xml::SmallXmlParser_AttrListImpl*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Xml::SmallXmlParser.ReadCDATASection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Xml::SmallXmlParser::*)()>(&::Mono::Xml::SmallXmlParser::ReadCDATASection)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x3c564fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Xml::SmallXmlParser*>::get(), "ReadCDATASection",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Xml::SmallXmlParser.ReadComment
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Xml::SmallXmlParser::*)()>(&::Mono::Xml::SmallXmlParser::ReadComment)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x3c565f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Xml::SmallXmlParser*>::get(), "ReadComment",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::Mono::Xml::SmallXmlParser_IContentHandler*& Mono::Xml::SmallXmlParser::__cordl_internal_get_handler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___handler;
}
constexpr ::Mono::Xml::SmallXmlParser_IContentHandler* const& Mono::Xml::SmallXmlParser::__cordl_internal_get_handler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___handler;
}
constexpr void Mono::Xml::SmallXmlParser::__cordl_internal_set_handler(::Mono::Xml::SmallXmlParser_IContentHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___handler)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::IO::TextReader*& Mono::Xml::SmallXmlParser::__cordl_internal_get_reader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reader;
}
constexpr ::System::IO::TextReader* const& Mono::Xml::SmallXmlParser::__cordl_internal_get_reader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reader;
}
constexpr void Mono::Xml::SmallXmlParser::__cordl_internal_set_reader(::System::IO::TextReader* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___reader)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Stack*& Mono::Xml::SmallXmlParser::__cordl_internal_get_elementNames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elementNames;
}
constexpr ::System::Collections::Stack* const& Mono::Xml::SmallXmlParser::__cordl_internal_get_elementNames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elementNames;
}
constexpr void Mono::Xml::SmallXmlParser::__cordl_internal_set_elementNames(::System::Collections::Stack* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___elementNames)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Stack*& Mono::Xml::SmallXmlParser::__cordl_internal_get_xmlSpaces() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xmlSpaces;
}
constexpr ::System::Collections::Stack* const& Mono::Xml::SmallXmlParser::__cordl_internal_get_xmlSpaces() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xmlSpaces;
}
constexpr void Mono::Xml::SmallXmlParser::__cordl_internal_set_xmlSpaces(::System::Collections::Stack* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___xmlSpaces)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Mono::Xml::SmallXmlParser::__cordl_internal_get_xmlSpace() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xmlSpace;
}
constexpr ::StringW const& Mono::Xml::SmallXmlParser::__cordl_internal_get_xmlSpace() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xmlSpace;
}
constexpr void Mono::Xml::SmallXmlParser::__cordl_internal_set_xmlSpace(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___xmlSpace)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Text::StringBuilder*& Mono::Xml::SmallXmlParser::__cordl_internal_get_buffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buffer;
}
constexpr ::System::Text::StringBuilder* const& Mono::Xml::SmallXmlParser::__cordl_internal_get_buffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buffer;
}
constexpr void Mono::Xml::SmallXmlParser::__cordl_internal_set_buffer(::System::Text::StringBuilder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___buffer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<char16_t, ::Array<char16_t>*>& Mono::Xml::SmallXmlParser::__cordl_internal_get_nameBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nameBuffer;
}
constexpr ::ArrayW<char16_t, ::Array<char16_t>*> const& Mono::Xml::SmallXmlParser::__cordl_internal_get_nameBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nameBuffer;
}
constexpr void Mono::Xml::SmallXmlParser::__cordl_internal_set_nameBuffer(::ArrayW<char16_t, ::Array<char16_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___nameBuffer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& Mono::Xml::SmallXmlParser::__cordl_internal_get_isWhitespace() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isWhitespace;
}
constexpr bool const& Mono::Xml::SmallXmlParser::__cordl_internal_get_isWhitespace() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isWhitespace;
}
constexpr void Mono::Xml::SmallXmlParser::__cordl_internal_set_isWhitespace(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isWhitespace = value;
}
constexpr ::Mono::Xml::SmallXmlParser_AttrListImpl*& Mono::Xml::SmallXmlParser::__cordl_internal_get_attributes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributes;
}
constexpr ::Mono::Xml::SmallXmlParser_AttrListImpl* const& Mono::Xml::SmallXmlParser::__cordl_internal_get_attributes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributes;
}
constexpr void Mono::Xml::SmallXmlParser::__cordl_internal_set_attributes(::Mono::Xml::SmallXmlParser_AttrListImpl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___attributes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& Mono::Xml::SmallXmlParser::__cordl_internal_get_line() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___line;
}
constexpr int32_t const& Mono::Xml::SmallXmlParser::__cordl_internal_get_line() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___line;
}
constexpr void Mono::Xml::SmallXmlParser::__cordl_internal_set_line(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___line = value;
}
constexpr int32_t& Mono::Xml::SmallXmlParser::__cordl_internal_get_column() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___column;
}
constexpr int32_t const& Mono::Xml::SmallXmlParser::__cordl_internal_get_column() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___column;
}
constexpr void Mono::Xml::SmallXmlParser::__cordl_internal_set_column(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___column = value;
}
constexpr bool& Mono::Xml::SmallXmlParser::__cordl_internal_get_resetColumn() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___resetColumn;
}
constexpr bool const& Mono::Xml::SmallXmlParser::__cordl_internal_get_resetColumn() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___resetColumn;
}
constexpr void Mono::Xml::SmallXmlParser::__cordl_internal_set_resetColumn(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___resetColumn = value;
}
inline void Mono::Xml::SmallXmlParser::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Xml::SmallXmlParser*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Exception* Mono::Xml::SmallXmlParser::Error(::StringW msg) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Xml::SmallXmlParser*>::get(), "Error", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*, false>(this, ___internal_method, msg);
}
inline ::System::Exception* Mono::Xml::SmallXmlParser::UnexpectedEndError() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Xml::SmallXmlParser*>::get(), "UnexpectedEndError",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*, false>(this, ___internal_method);
}
inline bool Mono::Xml::SmallXmlParser::IsNameChar(char16_t c, bool start) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Xml::SmallXmlParser*>::get(), "IsNameChar", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, c, start);
}
inline bool Mono::Xml::SmallXmlParser::IsWhitespace(int32_t c) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Xml::SmallXmlParser*>::get(), "IsWhitespace", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, c);
}
inline void Mono::Xml::SmallXmlParser::SkipWhitespaces() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Xml::SmallXmlParser*>::get(), "SkipWhitespaces",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Mono::Xml::SmallXmlParser::HandleWhitespaces() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Xml::SmallXmlParser*>::get(), "HandleWhitespaces",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Mono::Xml::SmallXmlParser::SkipWhitespaces(bool expected) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Xml::SmallXmlParser*>::get(), "SkipWhitespaces", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, expected);
}
inline int32_t Mono::Xml::SmallXmlParser::Peek() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Xml::SmallXmlParser*>::get(), "Peek",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t Mono::Xml::SmallXmlParser::Read() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Xml::SmallXmlParser*>::get(), "Read",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void Mono::Xml::SmallXmlParser::Expect(int32_t c) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Xml::SmallXmlParser*>::get(), "Expect", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, c);
}
inline ::StringW Mono::Xml::SmallXmlParser::ReadUntil(char16_t until, bool handleReferences) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Xml::SmallXmlParser*>::get(), "ReadUntil", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, until, handleReferences);
}
inline ::StringW Mono::Xml::SmallXmlParser::ReadName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Xml::SmallXmlParser*>::get(), "ReadName",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Mono::Xml::SmallXmlParser::Parse(::System::IO::TextReader* input, ::Mono::Xml::SmallXmlParser_IContentHandler* handler) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Xml::SmallXmlParser*>::get(), "Parse", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::TextReader*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Xml::SmallXmlParser_IContentHandler*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, input, handler);
}
inline void Mono::Xml::SmallXmlParser::Cleanup() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Xml::SmallXmlParser*>::get(), "Cleanup",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Mono::Xml::SmallXmlParser::ReadContent() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Xml::SmallXmlParser*>::get(), "ReadContent",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Mono::Xml::SmallXmlParser::HandleBufferedContent() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Xml::SmallXmlParser*>::get(), "HandleBufferedContent",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Mono::Xml::SmallXmlParser::ReadCharacters() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Xml::SmallXmlParser*>::get(), "ReadCharacters",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Mono::Xml::SmallXmlParser::ReadReference() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Xml::SmallXmlParser*>::get(), "ReadReference",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t Mono::Xml::SmallXmlParser::ReadCharacterReference() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Xml::SmallXmlParser*>::get(), "ReadCharacterReference",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void Mono::Xml::SmallXmlParser::ReadAttribute(::Mono::Xml::SmallXmlParser_AttrListImpl* a) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Xml::SmallXmlParser*>::get(), "ReadAttribute", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Xml::SmallXmlParser_AttrListImpl*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, a);
}
inline void Mono::Xml::SmallXmlParser::ReadCDATASection() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Xml::SmallXmlParser*>::get(), "ReadCDATASection",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Mono::Xml::SmallXmlParser::ReadComment() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Xml::SmallXmlParser*>::get(), "ReadComment",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Mono::Xml::SmallXmlParser* Mono::Xml::SmallXmlParser::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Mono::Xml::SmallXmlParser*>());
}
// Ctor Parameters []
constexpr ::Mono::Xml::SmallXmlParser::SmallXmlParser() {}
