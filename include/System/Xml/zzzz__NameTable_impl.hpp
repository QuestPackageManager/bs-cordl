#pragma once
// IWYU pragma private; include "System/Xml/NameTable.hpp"
#include "System/Xml/zzzz__XmlNameTable_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/zzzz__NameTable_def.hpp"
#include "System/Xml/zzzz__NameTable_def.hpp"
//  Writing Method size for method: ::System::Xml::NameTable_Entry._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::NameTable_Entry::*)(::StringW, int32_t, ::System::Xml::NameTable_Entry*)>(
    &::System::Xml::NameTable_Entry::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x434b360;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::NameTable_Entry*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::NameTable_Entry*>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Xml::NameTable_Entry::__cordl_internal_get_str() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___str;
}
constexpr ::StringW const& System::Xml::NameTable_Entry::__cordl_internal_get_str() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___str;
}
constexpr void System::Xml::NameTable_Entry::__cordl_internal_set_str(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___str)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Xml::NameTable_Entry::__cordl_internal_get_hashCode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hashCode;
}
constexpr int32_t const& System::Xml::NameTable_Entry::__cordl_internal_get_hashCode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hashCode;
}
constexpr void System::Xml::NameTable_Entry::__cordl_internal_set_hashCode(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hashCode = value;
}
constexpr ::System::Xml::NameTable_Entry*& System::Xml::NameTable_Entry::__cordl_internal_get_next() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___next;
}
constexpr ::System::Xml::NameTable_Entry* const& System::Xml::NameTable_Entry::__cordl_internal_get_next() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___next;
}
constexpr void System::Xml::NameTable_Entry::__cordl_internal_set_next(::System::Xml::NameTable_Entry* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___next)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Xml::NameTable_Entry::_ctor(::StringW str, int32_t hashCode, ::System::Xml::NameTable_Entry* next) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::NameTable_Entry*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::NameTable_Entry*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, str, hashCode, next);
}
inline ::System::Xml::NameTable_Entry* System::Xml::NameTable_Entry::New_ctor(::StringW str, int32_t hashCode, ::System::Xml::NameTable_Entry* next) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::NameTable_Entry*>(str, hashCode, next));
}
// Ctor Parameters []
constexpr ::System::Xml::NameTable_Entry::NameTable_Entry() {}
//  Writing Method size for method: ::System::Xml::NameTable._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::NameTable::*)()>(&::System::Xml::NameTable::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x434acd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::NameTable*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::NameTable.Add
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::NameTable::*)(::StringW)>(&::System::Xml::NameTable::Add)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x434ad44;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::NameTable*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::NameTable*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::NameTable.Add
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::NameTable::*)(::ArrayW<char16_t, ::Array<char16_t>*>, int32_t, int32_t)>(
    &::System::Xml::NameTable::Add)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x434afc0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::NameTable*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::NameTable*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::NameTable.Get
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::NameTable::*)(::StringW)>(&::System::Xml::NameTable::Get)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x434b1fc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::NameTable*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::NameTable*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::NameTable.AddEntry
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::NameTable::*)(::StringW, int32_t)>(&::System::Xml::NameTable::AddEntry)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x434aebc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::NameTable*>::get(), "AddEntry", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::NameTable.Grow
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::NameTable::*)()>(&::System::Xml::NameTable::Grow)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x434b3a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::NameTable*>::get(), "Grow",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::NameTable.TextEquals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ::ArrayW<char16_t, ::Array<char16_t>*>, int32_t, int32_t)>(
    &::System::Xml::NameTable::TextEquals)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x434b140;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::NameTable*>::get(), "TextEquals", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::System::Xml::NameTable_Entry*, ::Array<::System::Xml::NameTable_Entry*>*>& System::Xml::NameTable::__cordl_internal_get_entries() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___entries;
}
constexpr ::ArrayW<::System::Xml::NameTable_Entry*, ::Array<::System::Xml::NameTable_Entry*>*> const& System::Xml::NameTable::__cordl_internal_get_entries() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___entries;
}
constexpr void System::Xml::NameTable::__cordl_internal_set_entries(::ArrayW<::System::Xml::NameTable_Entry*, ::Array<::System::Xml::NameTable_Entry*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___entries)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Xml::NameTable::__cordl_internal_get_count() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___count;
}
constexpr int32_t const& System::Xml::NameTable::__cordl_internal_get_count() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___count;
}
constexpr void System::Xml::NameTable::__cordl_internal_set_count(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___count = value;
}
constexpr int32_t& System::Xml::NameTable::__cordl_internal_get_mask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mask;
}
constexpr int32_t const& System::Xml::NameTable::__cordl_internal_get_mask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mask;
}
constexpr void System::Xml::NameTable::__cordl_internal_set_mask(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mask = value;
}
constexpr int32_t& System::Xml::NameTable::__cordl_internal_get_hashCodeRandomizer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hashCodeRandomizer;
}
constexpr int32_t const& System::Xml::NameTable::__cordl_internal_get_hashCodeRandomizer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hashCodeRandomizer;
}
constexpr void System::Xml::NameTable::__cordl_internal_set_hashCodeRandomizer(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hashCodeRandomizer = value;
}
inline void System::Xml::NameTable::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::NameTable*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW System::Xml::NameTable::Add(::StringW key) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::NameTable*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, key);
}
inline ::StringW System::Xml::NameTable::Add(::ArrayW<char16_t, ::Array<char16_t>*> key, int32_t start, int32_t len) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::NameTable*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, key, start, len);
}
inline ::StringW System::Xml::NameTable::Get(::StringW value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::NameTable*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, value);
}
inline ::StringW System::Xml::NameTable::AddEntry(::StringW str, int32_t hashCode) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::NameTable*>::get(), "AddEntry", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, str, hashCode);
}
inline void System::Xml::NameTable::Grow() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::NameTable*>::get(), "Grow",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool System::Xml::NameTable::TextEquals(::StringW str1, ::ArrayW<char16_t, ::Array<char16_t>*> str2, int32_t str2Start, int32_t str2Length) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::NameTable*>::get(), "TextEquals", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, str1, str2, str2Start, str2Length);
}
inline ::System::Xml::NameTable* System::Xml::NameTable::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::NameTable*>());
}
// Ctor Parameters []
constexpr ::System::Xml::NameTable::NameTable() {}
