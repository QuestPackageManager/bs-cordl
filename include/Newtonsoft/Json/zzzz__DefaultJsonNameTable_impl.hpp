#pragma once
// IWYU pragma private; include "Newtonsoft/Json/DefaultJsonNameTable.hpp"
#include "Newtonsoft/Json/zzzz__JsonNameTable_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Newtonsoft/Json/zzzz__DefaultJsonNameTable_def.hpp"
#include "Newtonsoft/Json/zzzz__DefaultJsonNameTable_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::__DefaultJsonNameTable__Entry._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::__DefaultJsonNameTable__Entry::*)(
    ::StringW, int32_t, ::Newtonsoft::Json::__DefaultJsonNameTable__Entry*)>(&::Newtonsoft::Json::__DefaultJsonNameTable__Entry::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x29c20e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::__DefaultJsonNameTable__Entry*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::__DefaultJsonNameTable__Entry*>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& Newtonsoft::Json::__DefaultJsonNameTable__Entry::__cordl_internal_get_Value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Value;
}
constexpr ::StringW const& Newtonsoft::Json::__DefaultJsonNameTable__Entry::__cordl_internal_get_Value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Value;
}
constexpr void Newtonsoft::Json::__DefaultJsonNameTable__Entry::__cordl_internal_set_Value(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Value)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& Newtonsoft::Json::__DefaultJsonNameTable__Entry::__cordl_internal_get_HashCode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___HashCode;
}
constexpr int32_t const& Newtonsoft::Json::__DefaultJsonNameTable__Entry::__cordl_internal_get_HashCode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___HashCode;
}
constexpr void Newtonsoft::Json::__DefaultJsonNameTable__Entry::__cordl_internal_set_HashCode(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___HashCode = value;
}
constexpr ::Newtonsoft::Json::__DefaultJsonNameTable__Entry*& Newtonsoft::Json::__DefaultJsonNameTable__Entry::__cordl_internal_get_Next() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Next;
}
constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::__DefaultJsonNameTable__Entry*> const& Newtonsoft::Json::__DefaultJsonNameTable__Entry::__cordl_internal_get_Next() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Next;
}
constexpr void Newtonsoft::Json::__DefaultJsonNameTable__Entry::__cordl_internal_set_Next(::Newtonsoft::Json::__DefaultJsonNameTable__Entry* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Next)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Newtonsoft::Json::__DefaultJsonNameTable__Entry* Newtonsoft::Json::__DefaultJsonNameTable__Entry::New_ctor(::StringW value, int32_t hashCode,
                                                                                                                    ::Newtonsoft::Json::__DefaultJsonNameTable__Entry* next) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Newtonsoft::Json::__DefaultJsonNameTable__Entry*>(value, hashCode, next));
}
inline void Newtonsoft::Json::__DefaultJsonNameTable__Entry::_ctor(::StringW value, int32_t hashCode, ::Newtonsoft::Json::__DefaultJsonNameTable__Entry* next) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::__DefaultJsonNameTable__Entry*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::__DefaultJsonNameTable__Entry*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value, hashCode, next);
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::__DefaultJsonNameTable__Entry::__DefaultJsonNameTable__Entry() {}
//  Writing Method size for method: ::Newtonsoft::Json::DefaultJsonNameTable._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::DefaultJsonNameTable::*)()>(&::Newtonsoft::Json::DefaultJsonNameTable::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x29c1b74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::DefaultJsonNameTable*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::DefaultJsonNameTable.Get
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Newtonsoft::Json::DefaultJsonNameTable::*)(::ArrayW<char16_t, ::Array<char16_t>*>, int32_t, int32_t)>(
    &::Newtonsoft::Json::DefaultJsonNameTable::Get)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x29c1be4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::DefaultJsonNameTable*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::DefaultJsonNameTable*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::DefaultJsonNameTable.Add
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Newtonsoft::Json::DefaultJsonNameTable::*)(::StringW)>(&::Newtonsoft::Json::DefaultJsonNameTable::Add)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x29c1e20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::DefaultJsonNameTable*>::get(), "Add", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::DefaultJsonNameTable.AddEntry
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Newtonsoft::Json::DefaultJsonNameTable::*)(::StringW, int32_t)>(
    &::Newtonsoft::Json::DefaultJsonNameTable::AddEntry)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x29c1fd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::DefaultJsonNameTable*>::get(), "AddEntry", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::DefaultJsonNameTable.Grow
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::DefaultJsonNameTable::*)()>(&::Newtonsoft::Json::DefaultJsonNameTable::Grow)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x29c2124;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::DefaultJsonNameTable*>::get(), "Grow",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::DefaultJsonNameTable.TextEquals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ::ArrayW<char16_t, ::Array<char16_t>*>, int32_t, int32_t)>(
    &::Newtonsoft::Json::DefaultJsonNameTable::TextEquals)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x29c1d70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::DefaultJsonNameTable*>::get(), "TextEquals", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
constexpr int32_t& Newtonsoft::Json::DefaultJsonNameTable::__cordl_internal_get__count() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____count;
}
constexpr int32_t const& Newtonsoft::Json::DefaultJsonNameTable::__cordl_internal_get__count() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____count;
}
constexpr void Newtonsoft::Json::DefaultJsonNameTable::__cordl_internal_set__count(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____count = value;
}
constexpr ::ArrayW<::Newtonsoft::Json::__DefaultJsonNameTable__Entry*, ::Array<::Newtonsoft::Json::__DefaultJsonNameTable__Entry*>*>&
Newtonsoft::Json::DefaultJsonNameTable::__cordl_internal_get__entries() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____entries;
}
constexpr ::ArrayW<::Newtonsoft::Json::__DefaultJsonNameTable__Entry*, ::Array<::Newtonsoft::Json::__DefaultJsonNameTable__Entry*>*> const&
Newtonsoft::Json::DefaultJsonNameTable::__cordl_internal_get__entries() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____entries;
}
constexpr void Newtonsoft::Json::DefaultJsonNameTable::__cordl_internal_set__entries(
    ::ArrayW<::Newtonsoft::Json::__DefaultJsonNameTable__Entry*, ::Array<::Newtonsoft::Json::__DefaultJsonNameTable__Entry*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____entries)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& Newtonsoft::Json::DefaultJsonNameTable::__cordl_internal_get__mask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mask;
}
constexpr int32_t const& Newtonsoft::Json::DefaultJsonNameTable::__cordl_internal_get__mask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mask;
}
constexpr void Newtonsoft::Json::DefaultJsonNameTable::__cordl_internal_set__mask(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____mask = value;
}
inline void Newtonsoft::Json::DefaultJsonNameTable::setStaticF_HashCodeRandomizer(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "HashCodeRandomizer", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::DefaultJsonNameTable*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t Newtonsoft::Json::DefaultJsonNameTable::getStaticF_HashCodeRandomizer() {
  return ::cordl_internals::getStaticField<int32_t, "HashCodeRandomizer", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::DefaultJsonNameTable*>::get>();
}
inline ::Newtonsoft::Json::DefaultJsonNameTable* Newtonsoft::Json::DefaultJsonNameTable::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Newtonsoft::Json::DefaultJsonNameTable*>());
}
inline void Newtonsoft::Json::DefaultJsonNameTable::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::DefaultJsonNameTable*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW Newtonsoft::Json::DefaultJsonNameTable::Get(::ArrayW<char16_t, ::Array<char16_t>*> key, int32_t start, int32_t length) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::DefaultJsonNameTable*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, key, start, length);
}
inline ::StringW Newtonsoft::Json::DefaultJsonNameTable::Add(::StringW key) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::DefaultJsonNameTable*>::get(), "Add", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, key);
}
inline ::StringW Newtonsoft::Json::DefaultJsonNameTable::AddEntry(::StringW str, int32_t hashCode) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::DefaultJsonNameTable*>::get(), "AddEntry", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, str, hashCode);
}
inline void Newtonsoft::Json::DefaultJsonNameTable::Grow() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::DefaultJsonNameTable*>::get(), "Grow",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool Newtonsoft::Json::DefaultJsonNameTable::TextEquals(::StringW str1, ::ArrayW<char16_t, ::Array<char16_t>*> str2, int32_t str2Start, int32_t str2Length) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::DefaultJsonNameTable*>::get(), "TextEquals", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, str1, str2, str2Start, str2Length);
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::DefaultJsonNameTable::DefaultJsonNameTable() {}
