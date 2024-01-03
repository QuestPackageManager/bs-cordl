#pragma once
#include "System/Resources/zzzz__ResourceSet_impl.hpp"
#include "System/Resources/zzzz__RuntimeResourceSet_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Resources/zzzz__ResourceReader_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Collections/zzzz__IDictionaryEnumerator_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Resources/zzzz__ResourceLocator_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::System::Resources::RuntimeResourceSet._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Resources::RuntimeResourceSet::*)(::StringW)>(&::System::Resources::RuntimeResourceSet::_ctor)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x24def70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::RuntimeResourceSet*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::RuntimeResourceSet._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Resources::RuntimeResourceSet::*)(::System::IO::Stream*)>(
    &::System::Resources::RuntimeResourceSet::_ctor)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x24df19c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::RuntimeResourceSet*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::RuntimeResourceSet.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Resources::RuntimeResourceSet::*)(bool)>(&::System::Resources::RuntimeResourceSet::Dispose)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x24df294;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::RuntimeResourceSet*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::RuntimeResourceSet*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::RuntimeResourceSet.GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IDictionaryEnumerator* (::System::Resources::RuntimeResourceSet::*)()>(
    &::System::Resources::RuntimeResourceSet::GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x24df4c4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::RuntimeResourceSet*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::RuntimeResourceSet*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::RuntimeResourceSet.System_Collections_IEnumerable_GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::System::Resources::RuntimeResourceSet::*)()>(
    &::System::Resources::RuntimeResourceSet::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x24df5c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::RuntimeResourceSet*>::get(),
                                                                               "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::RuntimeResourceSet.GetEnumeratorHelper
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IDictionaryEnumerator* (::System::Resources::RuntimeResourceSet::*)()>(
    &::System::Resources::RuntimeResourceSet::GetEnumeratorHelper)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x24df4c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::RuntimeResourceSet*>::get(),
                                                                               "GetEnumeratorHelper", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::RuntimeResourceSet.GetString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Resources::RuntimeResourceSet::*)(::StringW)>(
    &::System::Resources::RuntimeResourceSet::GetString)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x24df5cc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::RuntimeResourceSet*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::RuntimeResourceSet*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::RuntimeResourceSet.GetString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Resources::RuntimeResourceSet::*)(::StringW, bool)>(
    &::System::Resources::RuntimeResourceSet::GetString)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x24dff4c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::RuntimeResourceSet*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::RuntimeResourceSet*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::RuntimeResourceSet.GetObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Resources::RuntimeResourceSet::*)(::StringW)>(
    &::System::Resources::RuntimeResourceSet::GetObject)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x24dffc8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::RuntimeResourceSet*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::RuntimeResourceSet*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::RuntimeResourceSet.GetObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Resources::RuntimeResourceSet::*)(::StringW, bool)>(
    &::System::Resources::RuntimeResourceSet::GetObject)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x24dffd4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::RuntimeResourceSet*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::RuntimeResourceSet*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::RuntimeResourceSet.GetObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Resources::RuntimeResourceSet::*)(::StringW, bool, bool)>(
    &::System::Resources::RuntimeResourceSet::GetObject)> {
  constexpr static std::size_t size = 0x910;
  constexpr static std::size_t addrs = 0x24df63c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::RuntimeResourceSet*>::get(), "GetObject", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::RuntimeResourceSet.ResolveResourceLocator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (
    ::System::Resources::RuntimeResourceSet::*)(::System::Resources::ResourceLocator, ::StringW, ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Resources::ResourceLocator>*, bool)>(
    &::System::Resources::RuntimeResourceSet::ResolveResourceLocator)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x24e0898;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::RuntimeResourceSet*>::get(), "ResolveResourceLocator", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Resources::ResourceLocator>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Resources::ResourceLocator>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr System::Resources::RuntimeResourceSet::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Resources::ResourceLocator>*& System::Resources::RuntimeResourceSet::__get__resCache() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____resCache;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Resources::ResourceLocator>*> const&
System::Resources::RuntimeResourceSet::__get__resCache() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____resCache;
}
constexpr void System::Resources::RuntimeResourceSet::__set__resCache(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Resources::ResourceLocator>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____resCache)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Resources::ResourceReader*& System::Resources::RuntimeResourceSet::__get__defaultReader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultReader;
}
constexpr ::cordl_internals::to_const_pointer<::System::Resources::ResourceReader*> const& System::Resources::RuntimeResourceSet::__get__defaultReader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultReader;
}
constexpr void System::Resources::RuntimeResourceSet::__set__defaultReader(::System::Resources::ResourceReader* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____defaultReader)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Resources::ResourceLocator>*& System::Resources::RuntimeResourceSet::__get__caseInsensitiveTable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____caseInsensitiveTable;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Resources::ResourceLocator>*> const&
System::Resources::RuntimeResourceSet::__get__caseInsensitiveTable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____caseInsensitiveTable;
}
constexpr void System::Resources::RuntimeResourceSet::__set__caseInsensitiveTable(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Resources::ResourceLocator>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____caseInsensitiveTable)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Resources::RuntimeResourceSet::__get__haveReadFromReader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____haveReadFromReader;
}
constexpr bool const& System::Resources::RuntimeResourceSet::__get__haveReadFromReader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____haveReadFromReader;
}
constexpr void System::Resources::RuntimeResourceSet::__set__haveReadFromReader(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____haveReadFromReader = value;
}
inline ::System::Resources::RuntimeResourceSet* System::Resources::RuntimeResourceSet::New_ctor(::StringW fileName) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Resources::RuntimeResourceSet*>(fileName));
}
inline void System::Resources::RuntimeResourceSet::_ctor(::StringW fileName) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::RuntimeResourceSet*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, fileName);
}
inline ::System::Resources::RuntimeResourceSet* System::Resources::RuntimeResourceSet::New_ctor(::System::IO::Stream* stream) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Resources::RuntimeResourceSet*>(stream));
}
inline void System::Resources::RuntimeResourceSet::_ctor(::System::IO::Stream* stream) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::RuntimeResourceSet*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stream);
}
inline void System::Resources::RuntimeResourceSet::Dispose(bool disposing) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::RuntimeResourceSet*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disposing);
}
inline ::System::Collections::IDictionaryEnumerator* System::Resources::RuntimeResourceSet::GetEnumerator() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::RuntimeResourceSet*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IDictionaryEnumerator*, false>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* System::Resources::RuntimeResourceSet::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::RuntimeResourceSet*>::get(),
                                                                             "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
inline ::System::Collections::IDictionaryEnumerator* System::Resources::RuntimeResourceSet::GetEnumeratorHelper() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::RuntimeResourceSet*>::get(),
                                                                             "GetEnumeratorHelper", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IDictionaryEnumerator*, false>(this, ___internal_method);
}
inline ::StringW System::Resources::RuntimeResourceSet::GetString(::StringW key) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::RuntimeResourceSet*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, key);
}
inline ::StringW System::Resources::RuntimeResourceSet::GetString(::StringW key, bool ignoreCase) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::RuntimeResourceSet*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, key, ignoreCase);
}
inline ::System::Object* System::Resources::RuntimeResourceSet::GetObject(::StringW key) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::RuntimeResourceSet*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, key);
}
inline ::System::Object* System::Resources::RuntimeResourceSet::GetObject(::StringW key, bool ignoreCase) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::RuntimeResourceSet*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, key, ignoreCase);
}
inline ::System::Object* System::Resources::RuntimeResourceSet::GetObject(::StringW key, bool ignoreCase, bool isString) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::RuntimeResourceSet*>::get(), "GetObject", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, key, ignoreCase, isString);
}
inline ::System::Object* System::Resources::RuntimeResourceSet::ResolveResourceLocator(::System::Resources::ResourceLocator resLocation, ::StringW key,
                                                                                       ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Resources::ResourceLocator>* copyOfCache,
                                                                                       bool keyInWrongCase) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::RuntimeResourceSet*>::get(), "ResolveResourceLocator", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Resources::ResourceLocator>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Resources::ResourceLocator>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, resLocation, key, copyOfCache, keyInWrongCase);
}
// Ctor Parameters []
constexpr ::System::Resources::RuntimeResourceSet::RuntimeResourceSet() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
