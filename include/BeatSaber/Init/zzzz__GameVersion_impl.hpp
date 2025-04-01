#pragma once
// IWYU pragma private; include "BeatSaber/Init/GameVersion.hpp"
#include "BeatSaber/Init/zzzz__RuntimePlatformType_impl.hpp"
#include "System/zzzz__IComparable_1_impl.hpp"
#include "System/zzzz__IEquatable_1_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaber/Init/zzzz__GameVersion_def.hpp"
#include "BeatSaber/Init/zzzz__GameVersion_def.hpp"
#include "BeatSaber/Init/zzzz__RuntimePlatformType_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Text/RegularExpressions/zzzz__Group_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatSaber::Init::GameVersion_PreReleasePrefix::GameVersion_PreReleasePrefix(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::BeatSaber::Init::GameVersion_PreReleasePrefix::GameVersion_PreReleasePrefix() {}
constexpr ::BeatSaber::Init::GameVersion_PreReleasePrefix BeatSaber::Init::GameVersion_PreReleasePrefix::Alpha{ static_cast<int32_t>(0x0) };
constexpr ::BeatSaber::Init::GameVersion_PreReleasePrefix BeatSaber::Init::GameVersion_PreReleasePrefix::Beta{ static_cast<int32_t>(0xa) };
constexpr ::BeatSaber::Init::GameVersion_PreReleasePrefix BeatSaber::Init::GameVersion_PreReleasePrefix::Nightly{ static_cast<int32_t>(0x14) };
constexpr ::BeatSaber::Init::GameVersion_PreReleasePrefix BeatSaber::Init::GameVersion_PreReleasePrefix::ReleaseCandidate{ static_cast<int32_t>(0x1e) };
//  Writing Method size for method: ::BeatSaber::Init::GameVersion_Content._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::Init::GameVersion_Content::*)(uint32_t, uint32_t, uint32_t)>(
    &::BeatSaber::Init::GameVersion_Content::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x226f2cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::GameVersion_Content>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Init::GameVersion_Content.Parse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatSaber::Init::GameVersion_Content (*)(::StringW)>(&::BeatSaber::Init::GameVersion_Content::Parse)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x226e70c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::GameVersion_Content>::get(), "Parse", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Init::GameVersion_Content.ParseOnStartOf
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatSaber::Init::GameVersion_Content (*)(::StringW)>(&::BeatSaber::Init::GameVersion_Content::ParseOnStartOf)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x226f5ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::GameVersion_Content>::get(), "ParseOnStartOf", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Init::GameVersion_Content.ReadFromApplicationVersion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatSaber::Init::GameVersion_Content (*)()>(&::BeatSaber::Init::GameVersion_Content::ReadFromApplicationVersion)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x226f660;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::GameVersion_Content>::get(),
                                                                               "ReadFromApplicationVersion", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Init::GameVersion_Content.Parse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatSaber::Init::GameVersion_Content (*)(::StringW, ::StringW)>(&::BeatSaber::Init::GameVersion_Content::Parse)> {
  constexpr static std::size_t size = 0x314;
  constexpr static std::size_t addrs = 0x226f2d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::GameVersion_Content>::get(), "Parse", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Init::GameVersion_Content.CompareTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::BeatSaber::Init::GameVersion_Content::*)(::BeatSaber::Init::GameVersion_Content)>(
    &::BeatSaber::Init::GameVersion_Content::CompareTo)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x226ea78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::GameVersion_Content>::get(), "CompareTo", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Init::GameVersion_Content>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Init::GameVersion_Content.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::BeatSaber::Init::GameVersion_Content::*)(::BeatSaber::Init::GameVersion_Content)>(
    &::BeatSaber::Init::GameVersion_Content::Equals)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x226f6ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::GameVersion_Content>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Init::GameVersion_Content>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Init::GameVersion_Content.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::BeatSaber::Init::GameVersion_Content::*)()>(&::BeatSaber::Init::GameVersion_Content::ToString)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x226ddb8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::GameVersion_Content>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::GameVersion_Content>::get(), 3));
    return ___internal_method;
  }
};
inline void BeatSaber::Init::GameVersion_Content::setStaticF_kZero(::BeatSaber::Init::GameVersion_Content value) {
  ::cordl_internals::setStaticField<::BeatSaber::Init::GameVersion_Content, "kZero", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::GameVersion_Content>::get>(
      std::forward<::BeatSaber::Init::GameVersion_Content>(value));
}
inline ::BeatSaber::Init::GameVersion_Content BeatSaber::Init::GameVersion_Content::getStaticF_kZero() {
  return ::cordl_internals::getStaticField<::BeatSaber::Init::GameVersion_Content, "kZero", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::GameVersion_Content>::get>();
}
inline void BeatSaber::Init::GameVersion_Content::_ctor(uint32_t major, uint32_t minor, uint32_t patch) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::GameVersion_Content>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, major, minor, patch);
}
inline ::BeatSaber::Init::GameVersion_Content BeatSaber::Init::GameVersion_Content::Parse(::StringW versionCode) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::GameVersion_Content>::get(), "Parse", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::Init::GameVersion_Content, false>(nullptr, ___internal_method, versionCode);
}
inline ::BeatSaber::Init::GameVersion_Content BeatSaber::Init::GameVersion_Content::ParseOnStartOf(::StringW versionCode) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::GameVersion_Content>::get(), "ParseOnStartOf", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::Init::GameVersion_Content, false>(nullptr, ___internal_method, versionCode);
}
inline ::BeatSaber::Init::GameVersion_Content BeatSaber::Init::GameVersion_Content::ReadFromApplicationVersion() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::GameVersion_Content>::get(),
                                                                             "ReadFromApplicationVersion", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::Init::GameVersion_Content, false>(nullptr, ___internal_method);
}
inline ::BeatSaber::Init::GameVersion_Content BeatSaber::Init::GameVersion_Content::Parse(::StringW versionCore, ::StringW pattern) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::GameVersion_Content>::get(), "Parse", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::Init::GameVersion_Content, false>(nullptr, ___internal_method, versionCore, pattern);
}
inline int32_t BeatSaber::Init::GameVersion_Content::CompareTo(::BeatSaber::Init::GameVersion_Content other) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::GameVersion_Content>::get(), "CompareTo", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Init::GameVersion_Content>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, other);
}
inline bool BeatSaber::Init::GameVersion_Content::Equals(::BeatSaber::Init::GameVersion_Content other) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::GameVersion_Content>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Init::GameVersion_Content>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
inline ::StringW BeatSaber::Init::GameVersion_Content::ToString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::GameVersion_Content>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
/// @brief Convert operator to "::System::IComparable_1<::BeatSaber::Init::GameVersion_Content>"
constexpr BeatSaber::Init::GameVersion_Content::operator ::System::IComparable_1<::BeatSaber::Init::GameVersion_Content>*() {
  return static_cast<::System::IComparable_1<::BeatSaber::Init::GameVersion_Content>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IComparable_1<::BeatSaber::Init::GameVersion_Content>"
constexpr ::System::IComparable_1<::BeatSaber::Init::GameVersion_Content>* BeatSaber::Init::GameVersion_Content::i___System__IComparable_1___BeatSaber__Init__GameVersion_Content_() {
  return static_cast<::System::IComparable_1<::BeatSaber::Init::GameVersion_Content>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert operator to "::System::IEquatable_1<::BeatSaber::Init::GameVersion_Content>"
constexpr BeatSaber::Init::GameVersion_Content::operator ::System::IEquatable_1<::BeatSaber::Init::GameVersion_Content>*() {
  return static_cast<::System::IEquatable_1<::BeatSaber::Init::GameVersion_Content>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IEquatable_1<::BeatSaber::Init::GameVersion_Content>"
constexpr ::System::IEquatable_1<::BeatSaber::Init::GameVersion_Content>* BeatSaber::Init::GameVersion_Content::i___System__IEquatable_1___BeatSaber__Init__GameVersion_Content_() {
  return static_cast<::System::IEquatable_1<::BeatSaber::Init::GameVersion_Content>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "major", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "minor", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "patch", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatSaber::Init::GameVersion_Content::GameVersion_Content(uint32_t major, uint32_t minor, uint32_t patch) noexcept {
  this->major = major;
  this->minor = minor;
  this->patch = patch;
}
// Ctor Parameters []
constexpr ::BeatSaber::Init::GameVersion_Content::GameVersion_Content() {}
//  Writing Method size for method: ::BeatSaber::Init::PreReleaseLabel_GameVersion___c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::Init::PreReleaseLabel_GameVersion___c::*)()>(
    &::BeatSaber::Init::PreReleaseLabel_GameVersion___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22702d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::PreReleaseLabel_GameVersion___c*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Init::PreReleaseLabel_GameVersion___c.__cctor_b__16_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::BeatSaber::Init::PreReleaseLabel_GameVersion___c::*)(
    ::System::ValueTuple_2<::BeatSaber::Init::GameVersion_PreReleasePrefix, ::StringW>)>(&::BeatSaber::Init::PreReleaseLabel_GameVersion___c::__cctor_b__16_0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22702dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::PreReleaseLabel_GameVersion___c*>::get(), "<.cctor>b__16_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ValueTuple_2<::BeatSaber::Init::GameVersion_PreReleasePrefix, ::StringW>>::get() })));
    return ___internal_method;
  }
};
inline void BeatSaber::Init::PreReleaseLabel_GameVersion___c::setStaticF___9(::BeatSaber::Init::PreReleaseLabel_GameVersion___c* value) {
  ::cordl_internals::setStaticField<::BeatSaber::Init::PreReleaseLabel_GameVersion___c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::PreReleaseLabel_GameVersion___c*>::get>(
      std::forward<::BeatSaber::Init::PreReleaseLabel_GameVersion___c*>(value));
}
inline ::BeatSaber::Init::PreReleaseLabel_GameVersion___c* BeatSaber::Init::PreReleaseLabel_GameVersion___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::BeatSaber::Init::PreReleaseLabel_GameVersion___c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::PreReleaseLabel_GameVersion___c*>::get>();
}
inline void BeatSaber::Init::PreReleaseLabel_GameVersion___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::PreReleaseLabel_GameVersion___c*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW BeatSaber::Init::PreReleaseLabel_GameVersion___c::__cctor_b__16_0(::System::ValueTuple_2<::BeatSaber::Init::GameVersion_PreReleasePrefix, ::StringW> el) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::PreReleaseLabel_GameVersion___c*>::get(), "<.cctor>b__16_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ValueTuple_2<::BeatSaber::Init::GameVersion_PreReleasePrefix, ::StringW>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, el);
}
inline ::BeatSaber::Init::PreReleaseLabel_GameVersion___c* BeatSaber::Init::PreReleaseLabel_GameVersion___c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatSaber::Init::PreReleaseLabel_GameVersion___c*>());
}
// Ctor Parameters []
constexpr ::BeatSaber::Init::PreReleaseLabel_GameVersion___c::PreReleaseLabel_GameVersion___c() {}
//  Writing Method size for method: ::BeatSaber::Init::PreReleaseLabel_GameVersion___c__DisplayClass10_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::Init::PreReleaseLabel_GameVersion___c__DisplayClass10_0::*)()>(
    &::BeatSaber::Init::PreReleaseLabel_GameVersion___c__DisplayClass10_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x226fc24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::PreReleaseLabel_GameVersion___c__DisplayClass10_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Init::PreReleaseLabel_GameVersion___c__DisplayClass10_0._Parse_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::BeatSaber::Init::PreReleaseLabel_GameVersion___c__DisplayClass10_0::*)(
    ::System::ValueTuple_2<::BeatSaber::Init::GameVersion_PreReleasePrefix, ::StringW>)>(&::BeatSaber::Init::PreReleaseLabel_GameVersion___c__DisplayClass10_0::_Parse_b__0)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x22702e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::PreReleaseLabel_GameVersion___c__DisplayClass10_0*>::get(), "<Parse>b__0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ValueTuple_2<::BeatSaber::Init::GameVersion_PreReleasePrefix, ::StringW>>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Text::RegularExpressions::Group*& BeatSaber::Init::PreReleaseLabel_GameVersion___c__DisplayClass10_0::__cordl_internal_get_preReleasePrefixGroup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___preReleasePrefixGroup;
}
constexpr ::System::Text::RegularExpressions::Group* const& BeatSaber::Init::PreReleaseLabel_GameVersion___c__DisplayClass10_0::__cordl_internal_get_preReleasePrefixGroup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___preReleasePrefixGroup;
}
constexpr void BeatSaber::Init::PreReleaseLabel_GameVersion___c__DisplayClass10_0::__cordl_internal_set_preReleasePrefixGroup(::System::Text::RegularExpressions::Group* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___preReleasePrefixGroup)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void BeatSaber::Init::PreReleaseLabel_GameVersion___c__DisplayClass10_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::PreReleaseLabel_GameVersion___c__DisplayClass10_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool BeatSaber::Init::PreReleaseLabel_GameVersion___c__DisplayClass10_0::_Parse_b__0(::System::ValueTuple_2<::BeatSaber::Init::GameVersion_PreReleasePrefix, ::StringW> tuple) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::PreReleaseLabel_GameVersion___c__DisplayClass10_0*>::get(), "<Parse>b__0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ValueTuple_2<::BeatSaber::Init::GameVersion_PreReleasePrefix, ::StringW>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, tuple);
}
inline ::BeatSaber::Init::PreReleaseLabel_GameVersion___c__DisplayClass10_0* BeatSaber::Init::PreReleaseLabel_GameVersion___c__DisplayClass10_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatSaber::Init::PreReleaseLabel_GameVersion___c__DisplayClass10_0*>());
}
// Ctor Parameters []
constexpr ::BeatSaber::Init::PreReleaseLabel_GameVersion___c__DisplayClass10_0::PreReleaseLabel_GameVersion___c__DisplayClass10_0() {}
//  Writing Method size for method: ::BeatSaber::Init::PreReleaseLabel_GameVersion___c__DisplayClass11_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::Init::PreReleaseLabel_GameVersion___c__DisplayClass11_0::*)()>(
    &::BeatSaber::Init::PreReleaseLabel_GameVersion___c__DisplayClass11_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x226fd34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::PreReleaseLabel_GameVersion___c__DisplayClass11_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Init::PreReleaseLabel_GameVersion___c__DisplayClass11_0._GetPrefixText_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::BeatSaber::Init::PreReleaseLabel_GameVersion___c__DisplayClass11_0::*)(
    ::System::ValueTuple_2<::BeatSaber::Init::GameVersion_PreReleasePrefix, ::StringW>)>(&::BeatSaber::Init::PreReleaseLabel_GameVersion___c__DisplayClass11_0::_GetPrefixText_b__0)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2270314;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::PreReleaseLabel_GameVersion___c__DisplayClass11_0*>::get(), "<GetPrefixText>b__0",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ValueTuple_2<::BeatSaber::Init::GameVersion_PreReleasePrefix, ::StringW>>::get() })));
    return ___internal_method;
  }
};
constexpr ::BeatSaber::Init::GameVersion_PreReleasePrefix& BeatSaber::Init::PreReleaseLabel_GameVersion___c__DisplayClass11_0::__cordl_internal_get_currentPreReleasePrefix() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentPreReleasePrefix;
}
constexpr ::BeatSaber::Init::GameVersion_PreReleasePrefix const& BeatSaber::Init::PreReleaseLabel_GameVersion___c__DisplayClass11_0::__cordl_internal_get_currentPreReleasePrefix() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentPreReleasePrefix;
}
constexpr void BeatSaber::Init::PreReleaseLabel_GameVersion___c__DisplayClass11_0::__cordl_internal_set_currentPreReleasePrefix(::BeatSaber::Init::GameVersion_PreReleasePrefix value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___currentPreReleasePrefix = value;
}
inline void BeatSaber::Init::PreReleaseLabel_GameVersion___c__DisplayClass11_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::PreReleaseLabel_GameVersion___c__DisplayClass11_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool BeatSaber::Init::PreReleaseLabel_GameVersion___c__DisplayClass11_0::_GetPrefixText_b__0(::System::ValueTuple_2<::BeatSaber::Init::GameVersion_PreReleasePrefix, ::StringW> tuple) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::PreReleaseLabel_GameVersion___c__DisplayClass11_0*>::get(), "<GetPrefixText>b__0",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ValueTuple_2<::BeatSaber::Init::GameVersion_PreReleasePrefix, ::StringW>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, tuple);
}
inline ::BeatSaber::Init::PreReleaseLabel_GameVersion___c__DisplayClass11_0* BeatSaber::Init::PreReleaseLabel_GameVersion___c__DisplayClass11_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatSaber::Init::PreReleaseLabel_GameVersion___c__DisplayClass11_0*>());
}
// Ctor Parameters []
constexpr ::BeatSaber::Init::PreReleaseLabel_GameVersion___c__DisplayClass11_0::PreReleaseLabel_GameVersion___c__DisplayClass11_0() {}
//  Writing Method size for method: ::BeatSaber::Init::GameVersion_PreReleaseLabel._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::Init::GameVersion_PreReleaseLabel::*)(::BeatSaber::Init::GameVersion_PreReleasePrefix, ::StringW)>(
    &::BeatSaber::Init::GameVersion_PreReleaseLabel::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x226f7b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::GameVersion_PreReleaseLabel>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Init::GameVersion_PreReleasePrefix>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Init::GameVersion_PreReleaseLabel.FirstLetterToUpper
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::ByRef<::StringW>)>(&::BeatSaber::Init::GameVersion_PreReleaseLabel::FirstLetterToUpper)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x226f820;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::GameVersion_PreReleaseLabel>::get(), "FirstLetterToUpper",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::StringW>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Init::GameVersion_PreReleaseLabel.Parse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatSaber::Init::GameVersion_PreReleaseLabel (*)(::StringW)>(
    &::BeatSaber::Init::GameVersion_PreReleaseLabel::Parse)> {
  constexpr static std::size_t size = 0x2dc;
  constexpr static std::size_t addrs = 0x226f948;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::GameVersion_PreReleaseLabel>::get(), "Parse", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Init::GameVersion_PreReleaseLabel.GetPrefixText
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::BeatSaber::Init::GameVersion_PreReleaseLabel::*)()>(
    &::BeatSaber::Init::GameVersion_PreReleaseLabel::GetPrefixText)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x226fc2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::GameVersion_PreReleaseLabel>::get(),
                                                                               "GetPrefixText", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Init::GameVersion_PreReleaseLabel.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::BeatSaber::Init::GameVersion_PreReleaseLabel::*)()>(
    &::BeatSaber::Init::GameVersion_PreReleaseLabel::ToString)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x226fd3c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::GameVersion_PreReleaseLabel>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::GameVersion_PreReleaseLabel>::get(), 3));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Init::GameVersion_PreReleaseLabel.CompareTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::BeatSaber::Init::GameVersion_PreReleaseLabel::*)(::BeatSaber::Init::GameVersion_PreReleaseLabel)>(
    &::BeatSaber::Init::GameVersion_PreReleaseLabel::CompareTo)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x226fdac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::GameVersion_PreReleaseLabel>::get(), "CompareTo", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Init::GameVersion_PreReleaseLabel>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Init::GameVersion_PreReleaseLabel.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::BeatSaber::Init::GameVersion_PreReleaseLabel::*)(::BeatSaber::Init::GameVersion_PreReleaseLabel)>(
    &::BeatSaber::Init::GameVersion_PreReleaseLabel::Equals)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x226fdd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::GameVersion_PreReleaseLabel>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Init::GameVersion_PreReleaseLabel>::get() })));
    return ___internal_method;
  }
};
inline void BeatSaber::Init::GameVersion_PreReleaseLabel::setStaticF_kRelease(::BeatSaber::Init::GameVersion_PreReleaseLabel value) {
  ::cordl_internals::setStaticField<::BeatSaber::Init::GameVersion_PreReleaseLabel, "kRelease",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::GameVersion_PreReleaseLabel>::get>(
      std::forward<::BeatSaber::Init::GameVersion_PreReleaseLabel>(value));
}
inline ::BeatSaber::Init::GameVersion_PreReleaseLabel BeatSaber::Init::GameVersion_PreReleaseLabel::getStaticF_kRelease() {
  return ::cordl_internals::getStaticField<::BeatSaber::Init::GameVersion_PreReleaseLabel, "kRelease",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::GameVersion_PreReleaseLabel>::get>();
}
inline void BeatSaber::Init::GameVersion_PreReleaseLabel::setStaticF_kDefault(::BeatSaber::Init::GameVersion_PreReleaseLabel value) {
  ::cordl_internals::setStaticField<::BeatSaber::Init::GameVersion_PreReleaseLabel, "kDefault",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::GameVersion_PreReleaseLabel>::get>(
      std::forward<::BeatSaber::Init::GameVersion_PreReleaseLabel>(value));
}
inline ::BeatSaber::Init::GameVersion_PreReleaseLabel BeatSaber::Init::GameVersion_PreReleaseLabel::getStaticF_kDefault() {
  return ::cordl_internals::getStaticField<::BeatSaber::Init::GameVersion_PreReleaseLabel, "kDefault",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::GameVersion_PreReleaseLabel>::get>();
}
inline void BeatSaber::Init::GameVersion_PreReleaseLabel::setStaticF_kPreReleasePrefixLabelMap(
    ::System::Collections::Generic::IReadOnlyList_1<::System::ValueTuple_2<::BeatSaber::Init::GameVersion_PreReleasePrefix, ::StringW>>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::IReadOnlyList_1<::System::ValueTuple_2<::BeatSaber::Init::GameVersion_PreReleasePrefix, ::StringW>>*, "kPreReleasePrefixLabelMap",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::GameVersion_PreReleaseLabel>::get>(
      std::forward<::System::Collections::Generic::IReadOnlyList_1<::System::ValueTuple_2<::BeatSaber::Init::GameVersion_PreReleasePrefix, ::StringW>>*>(value));
}
inline ::System::Collections::Generic::IReadOnlyList_1<::System::ValueTuple_2<::BeatSaber::Init::GameVersion_PreReleasePrefix, ::StringW>>*
BeatSaber::Init::GameVersion_PreReleaseLabel::getStaticF_kPreReleasePrefixLabelMap() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::IReadOnlyList_1<::System::ValueTuple_2<::BeatSaber::Init::GameVersion_PreReleasePrefix, ::StringW>>*,
                                           "kPreReleasePrefixLabelMap", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::GameVersion_PreReleaseLabel>::get>();
}
inline void BeatSaber::Init::GameVersion_PreReleaseLabel::setStaticF_kPrereleasePattern(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "kPrereleasePattern", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::GameVersion_PreReleaseLabel>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW BeatSaber::Init::GameVersion_PreReleaseLabel::getStaticF_kPrereleasePattern() {
  return ::cordl_internals::getStaticField<::StringW, "kPrereleasePattern", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::GameVersion_PreReleaseLabel>::get>();
}
inline void BeatSaber::Init::GameVersion_PreReleaseLabel::_ctor(::BeatSaber::Init::GameVersion_PreReleasePrefix prefix, ::StringW label) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::GameVersion_PreReleaseLabel>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Init::GameVersion_PreReleasePrefix>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, prefix, label);
}
inline ::StringW BeatSaber::Init::GameVersion_PreReleaseLabel::FirstLetterToUpper(::ByRef<::StringW> value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::GameVersion_PreReleaseLabel>::get(), "FirstLetterToUpper",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::StringW>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, value);
}
inline ::BeatSaber::Init::GameVersion_PreReleaseLabel BeatSaber::Init::GameVersion_PreReleaseLabel::Parse(::StringW releaseLabel) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::GameVersion_PreReleaseLabel>::get(), "Parse", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::Init::GameVersion_PreReleaseLabel, false>(nullptr, ___internal_method, releaseLabel);
}
inline ::StringW BeatSaber::Init::GameVersion_PreReleaseLabel::GetPrefixText() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::GameVersion_PreReleaseLabel>::get(),
                                                                             "GetPrefixText", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW BeatSaber::Init::GameVersion_PreReleaseLabel::ToString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::GameVersion_PreReleaseLabel>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline int32_t BeatSaber::Init::GameVersion_PreReleaseLabel::CompareTo(::BeatSaber::Init::GameVersion_PreReleaseLabel other) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::GameVersion_PreReleaseLabel>::get(), "CompareTo", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Init::GameVersion_PreReleaseLabel>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, other);
}
inline bool BeatSaber::Init::GameVersion_PreReleaseLabel::Equals(::BeatSaber::Init::GameVersion_PreReleaseLabel other) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::GameVersion_PreReleaseLabel>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Init::GameVersion_PreReleaseLabel>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
/// @brief Convert operator to "::System::IComparable_1<::BeatSaber::Init::GameVersion_PreReleaseLabel>"
constexpr BeatSaber::Init::GameVersion_PreReleaseLabel::operator ::System::IComparable_1<::BeatSaber::Init::GameVersion_PreReleaseLabel>*() {
  return static_cast<::System::IComparable_1<::BeatSaber::Init::GameVersion_PreReleaseLabel>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IComparable_1<::BeatSaber::Init::GameVersion_PreReleaseLabel>"
constexpr ::System::IComparable_1<::BeatSaber::Init::GameVersion_PreReleaseLabel>*
BeatSaber::Init::GameVersion_PreReleaseLabel::i___System__IComparable_1___BeatSaber__Init__GameVersion_PreReleaseLabel_() {
  return static_cast<::System::IComparable_1<::BeatSaber::Init::GameVersion_PreReleaseLabel>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert operator to "::System::IEquatable_1<::BeatSaber::Init::GameVersion_PreReleaseLabel>"
constexpr BeatSaber::Init::GameVersion_PreReleaseLabel::operator ::System::IEquatable_1<::BeatSaber::Init::GameVersion_PreReleaseLabel>*() {
  return static_cast<::System::IEquatable_1<::BeatSaber::Init::GameVersion_PreReleaseLabel>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IEquatable_1<::BeatSaber::Init::GameVersion_PreReleaseLabel>"
constexpr ::System::IEquatable_1<::BeatSaber::Init::GameVersion_PreReleaseLabel>*
BeatSaber::Init::GameVersion_PreReleaseLabel::i___System__IEquatable_1___BeatSaber__Init__GameVersion_PreReleaseLabel_() {
  return static_cast<::System::IEquatable_1<::BeatSaber::Init::GameVersion_PreReleaseLabel>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "prefix", ty: "::BeatSaber::Init::GameVersion_PreReleasePrefix", modifiers: "", def_value: Some("{}") }, CppParam { name: "label", ty: "::StringW", modifiers: "",
// def_value: Some("{}") }]
constexpr ::BeatSaber::Init::GameVersion_PreReleaseLabel::GameVersion_PreReleaseLabel(::BeatSaber::Init::GameVersion_PreReleasePrefix prefix, ::StringW label) noexcept {
  this->prefix = prefix;
  this->label = label;
}
// Ctor Parameters []
constexpr ::BeatSaber::Init::GameVersion_PreReleaseLabel::GameVersion_PreReleaseLabel() {}
//  Writing Method size for method: ::BeatSaber::Init::GameVersion_BuildInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::Init::GameVersion_BuildInfo::*)(::BeatSaber::Init::RuntimePlatformType, ::StringW, uint64_t)>(
    &::BeatSaber::Init::GameVersion_BuildInfo::_ctor)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x226f090;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::GameVersion_BuildInfo>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Init::RuntimePlatformType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Init::GameVersion_BuildInfo.CompareTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::BeatSaber::Init::GameVersion_BuildInfo::*)(::BeatSaber::Init::GameVersion_BuildInfo)>(
    &::BeatSaber::Init::GameVersion_BuildInfo::CompareTo)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x227095c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::GameVersion_BuildInfo>::get(), "CompareTo", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Init::GameVersion_BuildInfo>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Init::GameVersion_BuildInfo.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::BeatSaber::Init::GameVersion_BuildInfo::*)(::BeatSaber::Init::GameVersion_BuildInfo)>(
    &::BeatSaber::Init::GameVersion_BuildInfo::Equals)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2270b84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::GameVersion_BuildInfo>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Init::GameVersion_BuildInfo>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Init::GameVersion_BuildInfo.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::BeatSaber::Init::GameVersion_BuildInfo::*)()>(&::BeatSaber::Init::GameVersion_BuildInfo::ToString)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x22704c8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::GameVersion_BuildInfo>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::GameVersion_BuildInfo>::get(), 3));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Init::GameVersion_BuildInfo.Parse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatSaber::Init::GameVersion_BuildInfo (*)(::StringW)>(&::BeatSaber::Init::GameVersion_BuildInfo::Parse)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x22706ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::GameVersion_BuildInfo>::get(), "Parse", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Init::GameVersion_BuildInfo.FormatPlatformId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::BeatSaber::Init::RuntimePlatformType, ::StringW)>(
    &::BeatSaber::Init::GameVersion_BuildInfo::FormatPlatformId)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x2270c0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::GameVersion_BuildInfo>::get(), "FormatPlatformId", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Init::RuntimePlatformType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Init::GameVersion_BuildInfo.ExtractNumberFromPlatformId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::BeatSaber::Init::RuntimePlatformType, ::StringW)>(
    &::BeatSaber::Init::GameVersion_BuildInfo::ExtractNumberFromPlatformId)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2270ad0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::GameVersion_BuildInfo>::get(), "ExtractNumberFromPlatformId", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Init::RuntimePlatformType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline void BeatSaber::Init::GameVersion_BuildInfo::setStaticF_kPlatformLabel(::System::Collections::Generic::IReadOnlyList_1<::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::IReadOnlyList_1<::StringW>*, "kPlatformLabel",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::GameVersion_BuildInfo>::get>(
      std::forward<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>(value));
}
inline ::System::Collections::Generic::IReadOnlyList_1<::StringW>* BeatSaber::Init::GameVersion_BuildInfo::getStaticF_kPlatformLabel() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::IReadOnlyList_1<::StringW>*, "kPlatformLabel",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::GameVersion_BuildInfo>::get>();
}
inline void BeatSaber::Init::GameVersion_BuildInfo::setStaticF_kBuildIdPattern(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "kBuildIdPattern", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::GameVersion_BuildInfo>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW BeatSaber::Init::GameVersion_BuildInfo::getStaticF_kBuildIdPattern() {
  return ::cordl_internals::getStaticField<::StringW, "kBuildIdPattern", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::GameVersion_BuildInfo>::get>();
}
inline void BeatSaber::Init::GameVersion_BuildInfo::setStaticF_kPlatformPattern(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "kPlatformPattern", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::GameVersion_BuildInfo>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW BeatSaber::Init::GameVersion_BuildInfo::getStaticF_kPlatformPattern() {
  return ::cordl_internals::getStaticField<::StringW, "kPlatformPattern", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::GameVersion_BuildInfo>::get>();
}
inline void BeatSaber::Init::GameVersion_BuildInfo::setStaticF_kPlatformIdPattern(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "kPlatformIdPattern", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::GameVersion_BuildInfo>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW BeatSaber::Init::GameVersion_BuildInfo::getStaticF_kPlatformIdPattern() {
  return ::cordl_internals::getStaticField<::StringW, "kPlatformIdPattern", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::GameVersion_BuildInfo>::get>();
}
inline void BeatSaber::Init::GameVersion_BuildInfo::setStaticF_kBuildMetadataPattern(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "kBuildMetadataPattern", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::GameVersion_BuildInfo>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW BeatSaber::Init::GameVersion_BuildInfo::getStaticF_kBuildMetadataPattern() {
  return ::cordl_internals::getStaticField<::StringW, "kBuildMetadataPattern", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::GameVersion_BuildInfo>::get>();
}
inline void BeatSaber::Init::GameVersion_BuildInfo::_ctor(::BeatSaber::Init::RuntimePlatformType platform, ::StringW platformId, uint64_t buildId) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::GameVersion_BuildInfo>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Init::RuntimePlatformType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, platform, platformId, buildId);
}
inline int32_t BeatSaber::Init::GameVersion_BuildInfo::CompareTo(::BeatSaber::Init::GameVersion_BuildInfo other) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::GameVersion_BuildInfo>::get(), "CompareTo", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Init::GameVersion_BuildInfo>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, other);
}
inline bool BeatSaber::Init::GameVersion_BuildInfo::Equals(::BeatSaber::Init::GameVersion_BuildInfo other) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::GameVersion_BuildInfo>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Init::GameVersion_BuildInfo>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
inline ::StringW BeatSaber::Init::GameVersion_BuildInfo::ToString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::GameVersion_BuildInfo>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::BeatSaber::Init::GameVersion_BuildInfo BeatSaber::Init::GameVersion_BuildInfo::Parse(::StringW buildMetadataValue) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::GameVersion_BuildInfo>::get(), "Parse", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::Init::GameVersion_BuildInfo, false>(nullptr, ___internal_method, buildMetadataValue);
}
inline ::StringW BeatSaber::Init::GameVersion_BuildInfo::FormatPlatformId(::BeatSaber::Init::RuntimePlatformType platform, ::StringW inputPlatformId) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::GameVersion_BuildInfo>::get(), "FormatPlatformId", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Init::RuntimePlatformType>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, platform, inputPlatformId);
}
inline ::StringW BeatSaber::Init::GameVersion_BuildInfo::ExtractNumberFromPlatformId(::BeatSaber::Init::RuntimePlatformType platform, ::StringW inputPlatformId) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::GameVersion_BuildInfo>::get(), "ExtractNumberFromPlatformId", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Init::RuntimePlatformType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, platform, inputPlatformId);
}
/// @brief Convert operator to "::System::IComparable_1<::BeatSaber::Init::GameVersion_BuildInfo>"
constexpr BeatSaber::Init::GameVersion_BuildInfo::operator ::System::IComparable_1<::BeatSaber::Init::GameVersion_BuildInfo>*() {
  return static_cast<::System::IComparable_1<::BeatSaber::Init::GameVersion_BuildInfo>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IComparable_1<::BeatSaber::Init::GameVersion_BuildInfo>"
constexpr ::System::IComparable_1<::BeatSaber::Init::GameVersion_BuildInfo>* BeatSaber::Init::GameVersion_BuildInfo::i___System__IComparable_1___BeatSaber__Init__GameVersion_BuildInfo_() {
  return static_cast<::System::IComparable_1<::BeatSaber::Init::GameVersion_BuildInfo>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert operator to "::System::IEquatable_1<::BeatSaber::Init::GameVersion_BuildInfo>"
constexpr BeatSaber::Init::GameVersion_BuildInfo::operator ::System::IEquatable_1<::BeatSaber::Init::GameVersion_BuildInfo>*() {
  return static_cast<::System::IEquatable_1<::BeatSaber::Init::GameVersion_BuildInfo>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IEquatable_1<::BeatSaber::Init::GameVersion_BuildInfo>"
constexpr ::System::IEquatable_1<::BeatSaber::Init::GameVersion_BuildInfo>* BeatSaber::Init::GameVersion_BuildInfo::i___System__IEquatable_1___BeatSaber__Init__GameVersion_BuildInfo_() {
  return static_cast<::System::IEquatable_1<::BeatSaber::Init::GameVersion_BuildInfo>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "buildId", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "platform", ty: "::BeatSaber::Init::RuntimePlatformType", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "platformId", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "platformIdIntValue", ty: "int32_t", modifiers: "", def_value:
// Some("{}") }]
constexpr ::BeatSaber::Init::GameVersion_BuildInfo::GameVersion_BuildInfo(uint64_t buildId, ::BeatSaber::Init::RuntimePlatformType platform, ::StringW platformId,
                                                                          int32_t platformIdIntValue) noexcept {
  this->buildId = buildId;
  this->platform = platform;
  this->platformId = platformId;
  this->platformIdIntValue = platformIdIntValue;
}
// Ctor Parameters []
constexpr ::BeatSaber::Init::GameVersion_BuildInfo::GameVersion_BuildInfo() {}
//  Writing Method size for method: ::BeatSaber::Init::GameVersion_Metadata._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::Init::GameVersion_Metadata::*)(::System::Nullable_1<::BeatSaber::Init::GameVersion_BuildInfo>)>(
    &::BeatSaber::Init::GameVersion_Metadata::_ctor)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x2270324;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::GameVersion_Metadata>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::BeatSaber::Init::GameVersion_BuildInfo>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Init::GameVersion_Metadata._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::Init::GameVersion_Metadata::*)(
    ::BeatSaber::Init::GameVersion_PreReleaseLabel, ::System::Nullable_1<::BeatSaber::Init::GameVersion_BuildInfo>)>(&::BeatSaber::Init::GameVersion_Metadata::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x226f164;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::GameVersion_Metadata>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Init::GameVersion_PreReleaseLabel>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::BeatSaber::Init::GameVersion_BuildInfo>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Init::GameVersion_Metadata.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::BeatSaber::Init::GameVersion_Metadata::*)()>(&::BeatSaber::Init::GameVersion_Metadata::ToString)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x226ed08;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::GameVersion_Metadata>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::GameVersion_Metadata>::get(), 3));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Init::GameVersion_Metadata.BuildInfoText
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::BeatSaber::Init::GameVersion_Metadata::*)()>(&::BeatSaber::Init::GameVersion_Metadata::BuildInfoText)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x22703dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::GameVersion_Metadata>::get(), "BuildInfoText",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Init::GameVersion_Metadata.Parse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatSaber::Init::GameVersion_Metadata (*)(::StringW)>(&::BeatSaber::Init::GameVersion_Metadata::Parse)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x226e780;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::GameVersion_Metadata>::get(), "Parse", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Init::GameVersion_Metadata.ExtractSubStrings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::ByRef<::StringW>, ::ByRef<::StringW>)>(
    &::BeatSaber::Init::GameVersion_Metadata::ExtractSubStrings)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x2270620;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::GameVersion_Metadata>::get(), "ExtractSubStrings", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::StringW>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::StringW>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Init::GameVersion_Metadata.CompareTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::BeatSaber::Init::GameVersion_Metadata::*)(::BeatSaber::Init::GameVersion_Metadata)>(
    &::BeatSaber::Init::GameVersion_Metadata::CompareTo)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x226eab4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::GameVersion_Metadata>::get(), "CompareTo", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Init::GameVersion_Metadata>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Init::GameVersion_Metadata.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::BeatSaber::Init::GameVersion_Metadata::*)(::BeatSaber::Init::GameVersion_Metadata)>(
    &::BeatSaber::Init::GameVersion_Metadata::Equals)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2270a24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::GameVersion_Metadata>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Init::GameVersion_Metadata>::get() })));
    return ___internal_method;
  }
};
inline void BeatSaber::Init::GameVersion_Metadata::setStaticF_kDefault(::BeatSaber::Init::GameVersion_Metadata value) {
  ::cordl_internals::setStaticField<::BeatSaber::Init::GameVersion_Metadata, "kDefault", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::GameVersion_Metadata>::get>(
      std::forward<::BeatSaber::Init::GameVersion_Metadata>(value));
}
inline ::BeatSaber::Init::GameVersion_Metadata BeatSaber::Init::GameVersion_Metadata::getStaticF_kDefault() {
  return ::cordl_internals::getStaticField<::BeatSaber::Init::GameVersion_Metadata, "kDefault", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::GameVersion_Metadata>::get>();
}
inline void BeatSaber::Init::GameVersion_Metadata::_ctor(::System::Nullable_1<::BeatSaber::Init::GameVersion_BuildInfo> buildInfo) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::GameVersion_Metadata>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::BeatSaber::Init::GameVersion_BuildInfo>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, buildInfo);
}
inline void BeatSaber::Init::GameVersion_Metadata::_ctor(::BeatSaber::Init::GameVersion_PreReleaseLabel preReleaseLabel, ::System::Nullable_1<::BeatSaber::Init::GameVersion_BuildInfo> buildInfo) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::GameVersion_Metadata>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Init::GameVersion_PreReleaseLabel>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::BeatSaber::Init::GameVersion_BuildInfo>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, preReleaseLabel, buildInfo);
}
inline ::StringW BeatSaber::Init::GameVersion_Metadata::ToString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::GameVersion_Metadata>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW BeatSaber::Init::GameVersion_Metadata::BuildInfoText() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::GameVersion_Metadata>::get(), "BuildInfoText",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::BeatSaber::Init::GameVersion_Metadata BeatSaber::Init::GameVersion_Metadata::Parse(::StringW versionMetadata) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::GameVersion_Metadata>::get(), "Parse", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::Init::GameVersion_Metadata, false>(nullptr, ___internal_method, versionMetadata);
}
inline void BeatSaber::Init::GameVersion_Metadata::ExtractSubStrings(::StringW versionMetadata, ::ByRef<::StringW> preReleaseLabelString, ::ByRef<::StringW> buildInfoString) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::GameVersion_Metadata>::get(), "ExtractSubStrings", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::StringW>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::StringW>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, versionMetadata, preReleaseLabelString, buildInfoString);
}
inline int32_t BeatSaber::Init::GameVersion_Metadata::CompareTo(::BeatSaber::Init::GameVersion_Metadata other) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::GameVersion_Metadata>::get(), "CompareTo", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Init::GameVersion_Metadata>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, other);
}
inline bool BeatSaber::Init::GameVersion_Metadata::Equals(::BeatSaber::Init::GameVersion_Metadata other) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::GameVersion_Metadata>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Init::GameVersion_Metadata>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
/// @brief Convert operator to "::System::IComparable_1<::BeatSaber::Init::GameVersion_Metadata>"
constexpr BeatSaber::Init::GameVersion_Metadata::operator ::System::IComparable_1<::BeatSaber::Init::GameVersion_Metadata>*() {
  return static_cast<::System::IComparable_1<::BeatSaber::Init::GameVersion_Metadata>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IComparable_1<::BeatSaber::Init::GameVersion_Metadata>"
constexpr ::System::IComparable_1<::BeatSaber::Init::GameVersion_Metadata>* BeatSaber::Init::GameVersion_Metadata::i___System__IComparable_1___BeatSaber__Init__GameVersion_Metadata_() {
  return static_cast<::System::IComparable_1<::BeatSaber::Init::GameVersion_Metadata>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert operator to "::System::IEquatable_1<::BeatSaber::Init::GameVersion_Metadata>"
constexpr BeatSaber::Init::GameVersion_Metadata::operator ::System::IEquatable_1<::BeatSaber::Init::GameVersion_Metadata>*() {
  return static_cast<::System::IEquatable_1<::BeatSaber::Init::GameVersion_Metadata>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IEquatable_1<::BeatSaber::Init::GameVersion_Metadata>"
constexpr ::System::IEquatable_1<::BeatSaber::Init::GameVersion_Metadata>* BeatSaber::Init::GameVersion_Metadata::i___System__IEquatable_1___BeatSaber__Init__GameVersion_Metadata_() {
  return static_cast<::System::IEquatable_1<::BeatSaber::Init::GameVersion_Metadata>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "preReleaseLabel", ty: "::BeatSaber::Init::GameVersion_PreReleaseLabel", modifiers: "", def_value: Some("{}") }, CppParam { name: "buildInfo", ty:
// "::System::Nullable_1<::BeatSaber::Init::GameVersion_BuildInfo>", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatSaber::Init::GameVersion_Metadata::GameVersion_Metadata(::BeatSaber::Init::GameVersion_PreReleaseLabel preReleaseLabel,
                                                                        ::System::Nullable_1<::BeatSaber::Init::GameVersion_BuildInfo> buildInfo) noexcept {
  this->preReleaseLabel = preReleaseLabel;
  this->buildInfo = buildInfo;
}
// Ctor Parameters []
constexpr ::BeatSaber::Init::GameVersion_Metadata::GameVersion_Metadata() {}
//  Writing Method size for method: ::BeatSaber::Init::GameVersion._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::Init::GameVersion::*)(
    ::BeatSaber::Init::GameVersion_Content, ::System::Nullable_1<::BeatSaber::Init::GameVersion_Metadata>)>(&::BeatSaber::Init::GameVersion::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x226e490;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::GameVersion*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Init::GameVersion_Content>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::BeatSaber::Init::GameVersion_Metadata>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Init::GameVersion.Parse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatSaber::Init::GameVersion* (*)(::StringW)>(&::BeatSaber::Init::GameVersion::Parse)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x226e4dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::GameVersion*>::get(), "Parse", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Init::GameVersion.CompareTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::BeatSaber::Init::GameVersion::*)(::BeatSaber::Init::GameVersion*)>(
    &::BeatSaber::Init::GameVersion::CompareTo)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x226e8f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::GameVersion*>::get(), "CompareTo", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Init::GameVersion*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Init::GameVersion.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::BeatSaber::Init::GameVersion::*)(::BeatSaber::Init::GameVersion*)>(&::BeatSaber::Init::GameVersion::Equals)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x226ebe0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::GameVersion*>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Init::GameVersion*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Init::GameVersion.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::BeatSaber::Init::GameVersion::*)()>(&::BeatSaber::Init::GameVersion::ToString)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x226ebf8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::GameVersion*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::GameVersion*>::get(), 3));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Init::GameVersion.get_IsReleasable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::BeatSaber::Init::GameVersion::*)()>(&::BeatSaber::Init::GameVersion::get_IsReleasable)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x226ede8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::GameVersion*>::get(), "get_IsReleasable",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Init::GameVersion.UpdatePlatformId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatSaber::Init::GameVersion* (::BeatSaber::Init::GameVersion::*)(::StringW)>(
    &::BeatSaber::Init::GameVersion::UpdatePlatformId)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x226ee80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::GameVersion*>::get(), "UpdatePlatformId", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::BeatSaber::Init::GameVersion_Content& BeatSaber::Init::GameVersion::__cordl_internal_get_content() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___content;
}
constexpr ::BeatSaber::Init::GameVersion_Content const& BeatSaber::Init::GameVersion::__cordl_internal_get_content() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___content;
}
constexpr void BeatSaber::Init::GameVersion::__cordl_internal_set_content(::BeatSaber::Init::GameVersion_Content value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___content = value;
}
constexpr ::System::Nullable_1<::BeatSaber::Init::GameVersion_Metadata>& BeatSaber::Init::GameVersion::__cordl_internal_get_metadata() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___metadata;
}
constexpr ::System::Nullable_1<::BeatSaber::Init::GameVersion_Metadata> const& BeatSaber::Init::GameVersion::__cordl_internal_get_metadata() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___metadata;
}
constexpr void BeatSaber::Init::GameVersion::__cordl_internal_set_metadata(::System::Nullable_1<::BeatSaber::Init::GameVersion_Metadata> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___metadata = value;
}
inline void BeatSaber::Init::GameVersion::setStaticF_kZero(::BeatSaber::Init::GameVersion* value) {
  ::cordl_internals::setStaticField<::BeatSaber::Init::GameVersion*, "kZero", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::GameVersion*>::get>(
      std::forward<::BeatSaber::Init::GameVersion*>(value));
}
inline ::BeatSaber::Init::GameVersion* BeatSaber::Init::GameVersion::getStaticF_kZero() {
  return ::cordl_internals::getStaticField<::BeatSaber::Init::GameVersion*, "kZero", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::GameVersion*>::get>();
}
inline void BeatSaber::Init::GameVersion::_ctor(::BeatSaber::Init::GameVersion_Content content, ::System::Nullable_1<::BeatSaber::Init::GameVersion_Metadata> metadata) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::GameVersion*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Init::GameVersion_Content>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::BeatSaber::Init::GameVersion_Metadata>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, content, metadata);
}
inline ::BeatSaber::Init::GameVersion* BeatSaber::Init::GameVersion::Parse(::StringW version) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::GameVersion*>::get(), "Parse", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::Init::GameVersion*, false>(nullptr, ___internal_method, version);
}
inline int32_t BeatSaber::Init::GameVersion::CompareTo(::BeatSaber::Init::GameVersion* other) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::GameVersion*>::get(), "CompareTo", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Init::GameVersion*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, other);
}
inline bool BeatSaber::Init::GameVersion::Equals(::BeatSaber::Init::GameVersion* other) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::GameVersion*>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Init::GameVersion*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
inline ::StringW BeatSaber::Init::GameVersion::ToString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::GameVersion*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline bool BeatSaber::Init::GameVersion::get_IsReleasable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::GameVersion*>::get(), "get_IsReleasable",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::BeatSaber::Init::GameVersion* BeatSaber::Init::GameVersion::UpdatePlatformId(::StringW newPlatformId) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::GameVersion*>::get(), "UpdatePlatformId", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::Init::GameVersion*, false>(this, ___internal_method, newPlatformId);
}
inline ::BeatSaber::Init::GameVersion* BeatSaber::Init::GameVersion::New_ctor(::BeatSaber::Init::GameVersion_Content content, ::System::Nullable_1<::BeatSaber::Init::GameVersion_Metadata> metadata) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatSaber::Init::GameVersion*>(content, metadata));
}
/// @brief Convert operator to "::System::IComparable_1<::BeatSaber::Init::GameVersion*>"
constexpr BeatSaber::Init::GameVersion::operator ::System::IComparable_1<::BeatSaber::Init::GameVersion*>*() noexcept {
  return static_cast<::System::IComparable_1<::BeatSaber::Init::GameVersion*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IComparable_1<::BeatSaber::Init::GameVersion*>"
constexpr ::System::IComparable_1<::BeatSaber::Init::GameVersion*>* BeatSaber::Init::GameVersion::i___System__IComparable_1___BeatSaber__Init__GameVersion__() noexcept {
  return static_cast<::System::IComparable_1<::BeatSaber::Init::GameVersion*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IEquatable_1<::BeatSaber::Init::GameVersion*>"
constexpr BeatSaber::Init::GameVersion::operator ::System::IEquatable_1<::BeatSaber::Init::GameVersion*>*() noexcept {
  return static_cast<::System::IEquatable_1<::BeatSaber::Init::GameVersion*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IEquatable_1<::BeatSaber::Init::GameVersion*>"
constexpr ::System::IEquatable_1<::BeatSaber::Init::GameVersion*>* BeatSaber::Init::GameVersion::i___System__IEquatable_1___BeatSaber__Init__GameVersion__() noexcept {
  return static_cast<::System::IEquatable_1<::BeatSaber::Init::GameVersion*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::BeatSaber::Init::GameVersion::GameVersion() {}
