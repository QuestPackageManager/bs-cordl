#pragma once
// IWYU pragma private; include "System/Net/Http/Headers/MediaTypeHeaderValue.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/Http/Headers/zzzz__MediaTypeHeaderValue_def.hpp"
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Net/Http/Headers/zzzz__Lexer_def.hpp"
#include "System/Net/Http/Headers/zzzz__MediaTypeHeaderValue_def.hpp"
#include "System/Net/Http/Headers/zzzz__NameValueHeaderValue_def.hpp"
#include "System/Net/Http/Headers/zzzz__Token_def.hpp"
#include "System/zzzz__ICloneable_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Predicate_1_def.hpp"
//  Writing Method size for method: ::System::Net::Http::Headers::__MediaTypeHeaderValue____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Http::Headers::__MediaTypeHeaderValue____c::*)()>(
    &::System::Net::Http::Headers::__MediaTypeHeaderValue____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d74ce4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::Headers::__MediaTypeHeaderValue____c*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::__MediaTypeHeaderValue____c._get_CharSet_b__6_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::Http::Headers::__MediaTypeHeaderValue____c::*)(
    ::System::Net::Http::Headers::NameValueHeaderValue*)>(&::System::Net::Http::Headers::__MediaTypeHeaderValue____c::_get_CharSet_b__6_0)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2d74cec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::Headers::__MediaTypeHeaderValue____c*>::get(), "<get_CharSet>b__6_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Http::Headers::NameValueHeaderValue*>::get() })));
    return ___internal_method;
  }
};
inline void System::Net::Http::Headers::__MediaTypeHeaderValue____c::setStaticF___9(::System::Net::Http::Headers::__MediaTypeHeaderValue____c* value) {
  ::cordl_internals::setStaticField<::System::Net::Http::Headers::__MediaTypeHeaderValue____c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::Headers::__MediaTypeHeaderValue____c*>::get>(
      std::forward<::System::Net::Http::Headers::__MediaTypeHeaderValue____c*>(value));
}
inline ::System::Net::Http::Headers::__MediaTypeHeaderValue____c* System::Net::Http::Headers::__MediaTypeHeaderValue____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::System::Net::Http::Headers::__MediaTypeHeaderValue____c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::Headers::__MediaTypeHeaderValue____c*>::get>();
}
inline void System::Net::Http::Headers::__MediaTypeHeaderValue____c::setStaticF___9__6_0(::System::Predicate_1<::System::Net::Http::Headers::NameValueHeaderValue*>* value) {
  ::cordl_internals::setStaticField<::System::Predicate_1<::System::Net::Http::Headers::NameValueHeaderValue*>*, "<>9__6_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::Headers::__MediaTypeHeaderValue____c*>::get>(
      std::forward<::System::Predicate_1<::System::Net::Http::Headers::NameValueHeaderValue*>*>(value));
}
inline ::System::Predicate_1<::System::Net::Http::Headers::NameValueHeaderValue*>* System::Net::Http::Headers::__MediaTypeHeaderValue____c::getStaticF___9__6_0() {
  return ::cordl_internals::getStaticField<::System::Predicate_1<::System::Net::Http::Headers::NameValueHeaderValue*>*, "<>9__6_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::Headers::__MediaTypeHeaderValue____c*>::get>();
}
inline ::System::Net::Http::Headers::__MediaTypeHeaderValue____c* System::Net::Http::Headers::__MediaTypeHeaderValue____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::Http::Headers::__MediaTypeHeaderValue____c*>());
}
inline void System::Net::Http::Headers::__MediaTypeHeaderValue____c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::Headers::__MediaTypeHeaderValue____c*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool System::Net::Http::Headers::__MediaTypeHeaderValue____c::_get_CharSet_b__6_0(::System::Net::Http::Headers::NameValueHeaderValue* l) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::Headers::__MediaTypeHeaderValue____c*>::get(), "<get_CharSet>b__6_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Http::Headers::NameValueHeaderValue*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, l);
}
// Ctor Parameters []
constexpr ::System::Net::Http::Headers::__MediaTypeHeaderValue____c::__MediaTypeHeaderValue____c() {}
//  Writing Method size for method: ::System::Net::Http::Headers::MediaTypeHeaderValue._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Http::Headers::MediaTypeHeaderValue::*)(::StringW)>(
    &::System::Net::Http::Headers::MediaTypeHeaderValue::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2d6ba6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::Headers::MediaTypeHeaderValue*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::MediaTypeHeaderValue._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Http::Headers::MediaTypeHeaderValue::*)(::System::Net::Http::Headers::MediaTypeHeaderValue*)>(
    &::System::Net::Http::Headers::MediaTypeHeaderValue::_ctor)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x2d7446c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::Headers::MediaTypeHeaderValue*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Http::Headers::MediaTypeHeaderValue*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::MediaTypeHeaderValue._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Http::Headers::MediaTypeHeaderValue::*)()>(
    &::System::Net::Http::Headers::MediaTypeHeaderValue::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d74764;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::Headers::MediaTypeHeaderValue*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::MediaTypeHeaderValue.get_CharSet
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Net::Http::Headers::MediaTypeHeaderValue::*)()>(
    &::System::Net::Http::Headers::MediaTypeHeaderValue::get_CharSet)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x2d6a60c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::Headers::MediaTypeHeaderValue*>::get(),
                                                                               "get_CharSet", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::MediaTypeHeaderValue.set_CharSet
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Http::Headers::MediaTypeHeaderValue::*)(::StringW)>(
    &::System::Net::Http::Headers::MediaTypeHeaderValue::set_CharSet)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2d6ba98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::Headers::MediaTypeHeaderValue*>::get(), "set_CharSet",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::MediaTypeHeaderValue.set_MediaType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Http::Headers::MediaTypeHeaderValue::*)(::StringW)>(
    &::System::Net::Http::Headers::MediaTypeHeaderValue::set_MediaType)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x2d7432c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::Headers::MediaTypeHeaderValue*>::get(), "set_MediaType",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::MediaTypeHeaderValue.get_Parameters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::ICollection_1<::System::Net::Http::Headers::NameValueHeaderValue*>* (
    ::System::Net::Http::Headers::MediaTypeHeaderValue::*)()>(&::System::Net::Http::Headers::MediaTypeHeaderValue::get_Parameters)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2d746e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::Headers::MediaTypeHeaderValue*>::get(),
                                                                               "get_Parameters", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::MediaTypeHeaderValue.System_ICloneable_Clone
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Net::Http::Headers::MediaTypeHeaderValue::*)()>(
    &::System::Net::Http::Headers::MediaTypeHeaderValue::System_ICloneable_Clone)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2d748fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::Headers::MediaTypeHeaderValue*>::get(),
                                                                               "System.ICloneable.Clone", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::MediaTypeHeaderValue.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::Http::Headers::MediaTypeHeaderValue::*)(::System::Object*)>(
    &::System::Net::Http::Headers::MediaTypeHeaderValue::Equals)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x2d7495c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::Headers::MediaTypeHeaderValue*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::Headers::MediaTypeHeaderValue*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::MediaTypeHeaderValue.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Net::Http::Headers::MediaTypeHeaderValue::*)()>(
    &::System::Net::Http::Headers::MediaTypeHeaderValue::GetHashCode)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2d74a24;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::Headers::MediaTypeHeaderValue*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::Headers::MediaTypeHeaderValue*>::get(), 2));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::MediaTypeHeaderValue.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Net::Http::Headers::MediaTypeHeaderValue::*)()>(
    &::System::Net::Http::Headers::MediaTypeHeaderValue::ToString)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2d74aa0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::Headers::MediaTypeHeaderValue*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::Headers::MediaTypeHeaderValue*>::get(), 3));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::MediaTypeHeaderValue.TryParse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ByRef<::System::Net::Http::Headers::MediaTypeHeaderValue*>)>(
    &::System::Net::Http::Headers::MediaTypeHeaderValue::TryParse)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x2d74b0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::Headers::MediaTypeHeaderValue*>::get(), "TryParse", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Net::Http::Headers::MediaTypeHeaderValue*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::MediaTypeHeaderValue.TryParseMediaType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<::System::Net::Http::Headers::Token> (*)(
    ::System::Net::Http::Headers::Lexer*, ByRef<::StringW>)>(&::System::Net::Http::Headers::MediaTypeHeaderValue::TryParseMediaType)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x2d7476c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::Headers::MediaTypeHeaderValue*>::get(), "TryParseMediaType", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Http::Headers::Lexer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::ICloneable"
constexpr System::Net::Http::Headers::MediaTypeHeaderValue::operator ::System::ICloneable*() noexcept {
  return static_cast<::System::ICloneable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::ICloneable"
constexpr ::System::ICloneable* System::Net::Http::Headers::MediaTypeHeaderValue::i___System__ICloneable() noexcept {
  return static_cast<::System::ICloneable*>(static_cast<void*>(this));
}
constexpr ::System::Collections::Generic::List_1<::System::Net::Http::Headers::NameValueHeaderValue*>*& System::Net::Http::Headers::MediaTypeHeaderValue::__cordl_internal_get_parameters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___parameters;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Net::Http::Headers::NameValueHeaderValue*>*> const&
System::Net::Http::Headers::MediaTypeHeaderValue::__cordl_internal_get_parameters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___parameters;
}
constexpr void System::Net::Http::Headers::MediaTypeHeaderValue::__cordl_internal_set_parameters(::System::Collections::Generic::List_1<::System::Net::Http::Headers::NameValueHeaderValue*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___parameters)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Net::Http::Headers::MediaTypeHeaderValue::__cordl_internal_get_media_type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___media_type;
}
constexpr ::StringW const& System::Net::Http::Headers::MediaTypeHeaderValue::__cordl_internal_get_media_type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___media_type;
}
constexpr void System::Net::Http::Headers::MediaTypeHeaderValue::__cordl_internal_set_media_type(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___media_type)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Net::Http::Headers::MediaTypeHeaderValue* System::Net::Http::Headers::MediaTypeHeaderValue::New_ctor(::StringW mediaType) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::Http::Headers::MediaTypeHeaderValue*>(mediaType));
}
inline void System::Net::Http::Headers::MediaTypeHeaderValue::_ctor(::StringW mediaType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::Headers::MediaTypeHeaderValue*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, mediaType);
}
inline ::System::Net::Http::Headers::MediaTypeHeaderValue* System::Net::Http::Headers::MediaTypeHeaderValue::New_ctor(::System::Net::Http::Headers::MediaTypeHeaderValue* source) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::Http::Headers::MediaTypeHeaderValue*>(source));
}
inline void System::Net::Http::Headers::MediaTypeHeaderValue::_ctor(::System::Net::Http::Headers::MediaTypeHeaderValue* source) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::Headers::MediaTypeHeaderValue*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Http::Headers::MediaTypeHeaderValue*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, source);
}
inline ::System::Net::Http::Headers::MediaTypeHeaderValue* System::Net::Http::Headers::MediaTypeHeaderValue::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::Http::Headers::MediaTypeHeaderValue*>());
}
inline void System::Net::Http::Headers::MediaTypeHeaderValue::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::Headers::MediaTypeHeaderValue*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW System::Net::Http::Headers::MediaTypeHeaderValue::get_CharSet() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::Headers::MediaTypeHeaderValue*>::get(),
                                                                             "get_CharSet", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void System::Net::Http::Headers::MediaTypeHeaderValue::set_CharSet(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::Headers::MediaTypeHeaderValue*>::get(), "set_CharSet",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::Net::Http::Headers::MediaTypeHeaderValue::set_MediaType(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::Headers::MediaTypeHeaderValue*>::get(), "set_MediaType",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::ICollection_1<::System::Net::Http::Headers::NameValueHeaderValue*>* System::Net::Http::Headers::MediaTypeHeaderValue::get_Parameters() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::Headers::MediaTypeHeaderValue*>::get(),
                                                                             "get_Parameters", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::ICollection_1<::System::Net::Http::Headers::NameValueHeaderValue*>*, false>(this, ___internal_method);
}
inline ::System::Object* System::Net::Http::Headers::MediaTypeHeaderValue::System_ICloneable_Clone() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::Headers::MediaTypeHeaderValue*>::get(),
                                                                             "System.ICloneable.Clone", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline bool System::Net::Http::Headers::MediaTypeHeaderValue::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::Headers::MediaTypeHeaderValue*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj);
}
inline int32_t System::Net::Http::Headers::MediaTypeHeaderValue::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::Headers::MediaTypeHeaderValue*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::StringW System::Net::Http::Headers::MediaTypeHeaderValue::ToString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::Headers::MediaTypeHeaderValue*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline bool System::Net::Http::Headers::MediaTypeHeaderValue::TryParse(::StringW input, ByRef<::System::Net::Http::Headers::MediaTypeHeaderValue*> parsedValue) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::Headers::MediaTypeHeaderValue*>::get(), "TryParse", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Net::Http::Headers::MediaTypeHeaderValue*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, input, parsedValue);
}
inline ::System::Nullable_1<::System::Net::Http::Headers::Token> System::Net::Http::Headers::MediaTypeHeaderValue::TryParseMediaType(::System::Net::Http::Headers::Lexer* lexer,
                                                                                                                                     ByRef<::StringW> media) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::Headers::MediaTypeHeaderValue*>::get(), "TryParseMediaType", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Http::Headers::Lexer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::System::Net::Http::Headers::Token>, false>(nullptr, ___internal_method, lexer, media);
}
// Ctor Parameters []
constexpr ::System::Net::Http::Headers::MediaTypeHeaderValue::MediaTypeHeaderValue() {}
