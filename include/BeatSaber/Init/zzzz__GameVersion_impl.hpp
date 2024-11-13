#pragma once
// IWYU pragma private; include "BeatSaber/Init/GameVersion.hpp"
#include "BeatSaber/Init/zzzz__GameVersion_impl.hpp"
#include "BeatSaber/Init/zzzz__RuntimePlatformType_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaber/Init/zzzz__GameVersion_def.hpp"
#include "BeatSaber/Init/zzzz__GameVersion_def.hpp"
#include "BeatSaber/Init/zzzz__RuntimePlatformType_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Text/RegularExpressions/zzzz__Group_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatSaber::Init::__GameVersion__PreReleasePrefix::__GameVersion__PreReleasePrefix(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::BeatSaber::Init::__GameVersion__PreReleasePrefix::__GameVersion__PreReleasePrefix() {}
constexpr ::BeatSaber::Init::__GameVersion__PreReleasePrefix BeatSaber::Init::__GameVersion__PreReleasePrefix::Alpha{ static_cast<int32_t>(0x0) };
constexpr ::BeatSaber::Init::__GameVersion__PreReleasePrefix BeatSaber::Init::__GameVersion__PreReleasePrefix::Beta{ static_cast<int32_t>(0xa) };
constexpr ::BeatSaber::Init::__GameVersion__PreReleasePrefix BeatSaber::Init::__GameVersion__PreReleasePrefix::Nightly{ static_cast<int32_t>(0x14) };
constexpr ::BeatSaber::Init::__GameVersion__PreReleasePrefix BeatSaber::Init::__GameVersion__PreReleasePrefix::ReleaseCandidate{ static_cast<int32_t>(0x1e) };
//  Writing Method size for method: ::BeatSaber::Init::__GameVersion__Content._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::Init::__GameVersion__Content::*)(uint32_t, uint32_t, uint32_t)>(
    &::BeatSaber::Init::__GameVersion__Content::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2240224;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::__GameVersion__Content>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Init::__GameVersion__Content.Parse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatSaber::Init::__GameVersion__Content (*)(::StringW)>(&::BeatSaber::Init::__GameVersion__Content::Parse)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x223f5a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::__GameVersion__Content>::get(), "Parse", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Init::__GameVersion__Content.ParseOnStartOf
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatSaber::Init::__GameVersion__Content (*)(::StringW)>(
    &::BeatSaber::Init::__GameVersion__Content::ParseOnStartOf)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2240544;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::__GameVersion__Content>::get(), "ParseOnStartOf",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Init::__GameVersion__Content.ReadFromApplicationVersion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatSaber::Init::__GameVersion__Content (*)()>(
    &::BeatSaber::Init::__GameVersion__Content::ReadFromApplicationVersion)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x22405b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::__GameVersion__Content>::get(),
                                                                               "ReadFromApplicationVersion", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Init::__GameVersion__Content.Parse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatSaber::Init::__GameVersion__Content (*)(::StringW, ::StringW)>(
    &::BeatSaber::Init::__GameVersion__Content::Parse)> {
  constexpr static std::size_t size = 0x314;
  constexpr static std::size_t addrs = 0x2240230;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::__GameVersion__Content>::get(), "Parse", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Init::__GameVersion__Content.CompareTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::BeatSaber::Init::__GameVersion__Content::*)(::BeatSaber::Init::__GameVersion__Content)>(
    &::BeatSaber::Init::__GameVersion__Content::CompareTo)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x223f90c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::__GameVersion__Content>::get(), "CompareTo", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Init::__GameVersion__Content>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Init::__GameVersion__Content.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::BeatSaber::Init::__GameVersion__Content::*)(::BeatSaber::Init::__GameVersion__Content)>(
    &::BeatSaber::Init::__GameVersion__Content::Equals)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2240644;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::__GameVersion__Content>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Init::__GameVersion__Content>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Init::__GameVersion__Content.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::BeatSaber::Init::__GameVersion__Content::*)()>(&::BeatSaber::Init::__GameVersion__Content::ToString)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x223fb9c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::__GameVersion__Content>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::__GameVersion__Content>::get(), 3));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IComparable_1<::BeatSaber::Init::__GameVersion__Content>"
constexpr BeatSaber::Init::__GameVersion__Content::operator ::System::IComparable_1<::BeatSaber::Init::__GameVersion__Content>*() {
  return static_cast<::System::IComparable_1<::BeatSaber::Init::__GameVersion__Content>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IComparable_1<::BeatSaber::Init::__GameVersion__Content>"
constexpr ::System::IComparable_1<::BeatSaber::Init::__GameVersion__Content>* BeatSaber::Init::__GameVersion__Content::i___System__IComparable_1___BeatSaber__Init____GameVersion__Content_() {
  return static_cast<::System::IComparable_1<::BeatSaber::Init::__GameVersion__Content>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert operator to "::System::IEquatable_1<::BeatSaber::Init::__GameVersion__Content>"
constexpr BeatSaber::Init::__GameVersion__Content::operator ::System::IEquatable_1<::BeatSaber::Init::__GameVersion__Content>*() {
  return static_cast<::System::IEquatable_1<::BeatSaber::Init::__GameVersion__Content>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IEquatable_1<::BeatSaber::Init::__GameVersion__Content>"
constexpr ::System::IEquatable_1<::BeatSaber::Init::__GameVersion__Content>* BeatSaber::Init::__GameVersion__Content::i___System__IEquatable_1___BeatSaber__Init____GameVersion__Content_() {
  return static_cast<::System::IEquatable_1<::BeatSaber::Init::__GameVersion__Content>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void BeatSaber::Init::__GameVersion__Content::setStaticF_kZero(::BeatSaber::Init::__GameVersion__Content value) {
  ::cordl_internals::setStaticField<::BeatSaber::Init::__GameVersion__Content, "kZero", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::__GameVersion__Content>::get>(
      std::forward<::BeatSaber::Init::__GameVersion__Content>(value));
}
inline ::BeatSaber::Init::__GameVersion__Content BeatSaber::Init::__GameVersion__Content::getStaticF_kZero() {
  return ::cordl_internals::getStaticField<::BeatSaber::Init::__GameVersion__Content, "kZero",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::__GameVersion__Content>::get>();
}
inline void BeatSaber::Init::__GameVersion__Content::_ctor(uint32_t major, uint32_t minor, uint32_t patch) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::__GameVersion__Content>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, major, minor, patch);
}
inline ::BeatSaber::Init::__GameVersion__Content BeatSaber::Init::__GameVersion__Content::Parse(::StringW versionCode) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::__GameVersion__Content>::get(), "Parse", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::Init::__GameVersion__Content, false>(nullptr, ___internal_method, versionCode);
}
inline ::BeatSaber::Init::__GameVersion__Content BeatSaber::Init::__GameVersion__Content::ParseOnStartOf(::StringW versionCode) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::__GameVersion__Content>::get(), "ParseOnStartOf", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::Init::__GameVersion__Content, false>(nullptr, ___internal_method, versionCode);
}
inline ::BeatSaber::Init::__GameVersion__Content BeatSaber::Init::__GameVersion__Content::ReadFromApplicationVersion() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::__GameVersion__Content>::get(),
                                                                             "ReadFromApplicationVersion", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::Init::__GameVersion__Content, false>(nullptr, ___internal_method);
}
inline ::BeatSaber::Init::__GameVersion__Content BeatSaber::Init::__GameVersion__Content::Parse(::StringW versionCore, ::StringW pattern) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::__GameVersion__Content>::get(), "Parse", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::Init::__GameVersion__Content, false>(nullptr, ___internal_method, versionCore, pattern);
}
inline int32_t BeatSaber::Init::__GameVersion__Content::CompareTo(::BeatSaber::Init::__GameVersion__Content other) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::__GameVersion__Content>::get(), "CompareTo", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Init::__GameVersion__Content>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, other);
}
inline bool BeatSaber::Init::__GameVersion__Content::Equals(::BeatSaber::Init::__GameVersion__Content other) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::__GameVersion__Content>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Init::__GameVersion__Content>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
inline ::StringW BeatSaber::Init::__GameVersion__Content::ToString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::__GameVersion__Content>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "major", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "minor", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "patch", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatSaber::Init::__GameVersion__Content::__GameVersion__Content(uint32_t major, uint32_t minor, uint32_t patch) noexcept {
  this->major = major;
  this->minor = minor;
  this->patch = patch;
}
// Ctor Parameters []
constexpr ::BeatSaber::Init::__GameVersion__Content::__GameVersion__Content() {}
//  Writing Method size for method: ::GlobalNamespace::__GameVersion__PreReleaseLabel____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__GameVersion__PreReleaseLabel____c::*)()>(
    &::GlobalNamespace::__GameVersion__PreReleaseLabel____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x224122c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameVersion__PreReleaseLabel____c*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__GameVersion__PreReleaseLabel____c.__cctor_b__16_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::__GameVersion__PreReleaseLabel____c::*)(
    ::System::ValueTuple_2<::BeatSaber::Init::__GameVersion__PreReleasePrefix, ::StringW>)>(&::GlobalNamespace::__GameVersion__PreReleaseLabel____c::__cctor_b__16_0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2241234;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameVersion__PreReleaseLabel____c*>::get(), "<.cctor>b__16_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ValueTuple_2<::BeatSaber::Init::__GameVersion__PreReleasePrefix, ::StringW>>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::__GameVersion__PreReleaseLabel____c::setStaticF___9(::GlobalNamespace::__GameVersion__PreReleaseLabel____c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::__GameVersion__PreReleaseLabel____c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameVersion__PreReleaseLabel____c*>::get>(
      std::forward<::GlobalNamespace::__GameVersion__PreReleaseLabel____c*>(value));
}
inline ::GlobalNamespace::__GameVersion__PreReleaseLabel____c* GlobalNamespace::__GameVersion__PreReleaseLabel____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::__GameVersion__PreReleaseLabel____c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameVersion__PreReleaseLabel____c*>::get>();
}
inline ::GlobalNamespace::__GameVersion__PreReleaseLabel____c* GlobalNamespace::__GameVersion__PreReleaseLabel____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__GameVersion__PreReleaseLabel____c*>());
}
inline void GlobalNamespace::__GameVersion__PreReleaseLabel____c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameVersion__PreReleaseLabel____c*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::__GameVersion__PreReleaseLabel____c::__cctor_b__16_0(::System::ValueTuple_2<::BeatSaber::Init::__GameVersion__PreReleasePrefix, ::StringW> el) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameVersion__PreReleaseLabel____c*>::get(), "<.cctor>b__16_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ValueTuple_2<::BeatSaber::Init::__GameVersion__PreReleasePrefix, ::StringW>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, el);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__GameVersion__PreReleaseLabel____c::__GameVersion__PreReleaseLabel____c() {}
//  Writing Method size for method: ::GlobalNamespace::__GameVersion__PreReleaseLabel____c__DisplayClass10_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__GameVersion__PreReleaseLabel____c__DisplayClass10_0::*)()>(
    &::GlobalNamespace::__GameVersion__PreReleaseLabel____c__DisplayClass10_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2240b7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameVersion__PreReleaseLabel____c__DisplayClass10_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__GameVersion__PreReleaseLabel____c__DisplayClass10_0._Parse_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__GameVersion__PreReleaseLabel____c__DisplayClass10_0::*)(
    ::System::ValueTuple_2<::BeatSaber::Init::__GameVersion__PreReleasePrefix, ::StringW>)>(&::GlobalNamespace::__GameVersion__PreReleaseLabel____c__DisplayClass10_0::_Parse_b__0)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x224123c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameVersion__PreReleaseLabel____c__DisplayClass10_0*>::get(), "<Parse>b__0",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ValueTuple_2<::BeatSaber::Init::__GameVersion__PreReleasePrefix, ::StringW>>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Text::RegularExpressions::Group*& GlobalNamespace::__GameVersion__PreReleaseLabel____c__DisplayClass10_0::__cordl_internal_get_preReleasePrefixGroup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___preReleasePrefixGroup;
}
constexpr ::cordl_internals::to_const_pointer<::System::Text::RegularExpressions::Group*> const&
GlobalNamespace::__GameVersion__PreReleaseLabel____c__DisplayClass10_0::__cordl_internal_get_preReleasePrefixGroup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___preReleasePrefixGroup;
}
constexpr void GlobalNamespace::__GameVersion__PreReleaseLabel____c__DisplayClass10_0::__cordl_internal_set_preReleasePrefixGroup(::System::Text::RegularExpressions::Group* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___preReleasePrefixGroup)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__GameVersion__PreReleaseLabel____c__DisplayClass10_0* GlobalNamespace::__GameVersion__PreReleaseLabel____c__DisplayClass10_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__GameVersion__PreReleaseLabel____c__DisplayClass10_0*>());
}
inline void GlobalNamespace::__GameVersion__PreReleaseLabel____c__DisplayClass10_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameVersion__PreReleaseLabel____c__DisplayClass10_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::__GameVersion__PreReleaseLabel____c__DisplayClass10_0::_Parse_b__0(::System::ValueTuple_2<::BeatSaber::Init::__GameVersion__PreReleasePrefix, ::StringW> tuple) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameVersion__PreReleaseLabel____c__DisplayClass10_0*>::get(), "<Parse>b__0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ValueTuple_2<::BeatSaber::Init::__GameVersion__PreReleasePrefix, ::StringW>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, tuple);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__GameVersion__PreReleaseLabel____c__DisplayClass10_0::__GameVersion__PreReleaseLabel____c__DisplayClass10_0() {}
//  Writing Method size for method: ::GlobalNamespace::__GameVersion__PreReleaseLabel____c__DisplayClass11_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__GameVersion__PreReleaseLabel____c__DisplayClass11_0::*)()>(
    &::GlobalNamespace::__GameVersion__PreReleaseLabel____c__DisplayClass11_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2240c8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameVersion__PreReleaseLabel____c__DisplayClass11_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__GameVersion__PreReleaseLabel____c__DisplayClass11_0._GetPrefixText_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__GameVersion__PreReleaseLabel____c__DisplayClass11_0::*)(
    ::System::ValueTuple_2<::BeatSaber::Init::__GameVersion__PreReleasePrefix, ::StringW>)>(&::GlobalNamespace::__GameVersion__PreReleaseLabel____c__DisplayClass11_0::_GetPrefixText_b__0)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x224126c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameVersion__PreReleaseLabel____c__DisplayClass11_0*>::get(), "<GetPrefixText>b__0",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ValueTuple_2<::BeatSaber::Init::__GameVersion__PreReleasePrefix, ::StringW>>::get() })));
    return ___internal_method;
  }
};
constexpr ::BeatSaber::Init::__GameVersion__PreReleasePrefix& GlobalNamespace::__GameVersion__PreReleaseLabel____c__DisplayClass11_0::__cordl_internal_get_currentPreReleasePrefix() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentPreReleasePrefix;
}
constexpr ::BeatSaber::Init::__GameVersion__PreReleasePrefix const& GlobalNamespace::__GameVersion__PreReleaseLabel____c__DisplayClass11_0::__cordl_internal_get_currentPreReleasePrefix() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentPreReleasePrefix;
}
constexpr void GlobalNamespace::__GameVersion__PreReleaseLabel____c__DisplayClass11_0::__cordl_internal_set_currentPreReleasePrefix(::BeatSaber::Init::__GameVersion__PreReleasePrefix value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___currentPreReleasePrefix = value;
}
inline ::GlobalNamespace::__GameVersion__PreReleaseLabel____c__DisplayClass11_0* GlobalNamespace::__GameVersion__PreReleaseLabel____c__DisplayClass11_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__GameVersion__PreReleaseLabel____c__DisplayClass11_0*>());
}
inline void GlobalNamespace::__GameVersion__PreReleaseLabel____c__DisplayClass11_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameVersion__PreReleaseLabel____c__DisplayClass11_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::__GameVersion__PreReleaseLabel____c__DisplayClass11_0::_GetPrefixText_b__0(::System::ValueTuple_2<::BeatSaber::Init::__GameVersion__PreReleasePrefix, ::StringW> tuple) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameVersion__PreReleaseLabel____c__DisplayClass11_0*>::get(), "<GetPrefixText>b__0",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ValueTuple_2<::BeatSaber::Init::__GameVersion__PreReleasePrefix, ::StringW>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, tuple);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__GameVersion__PreReleaseLabel____c__DisplayClass11_0::__GameVersion__PreReleaseLabel____c__DisplayClass11_0() {}
//  Writing Method size for method: ::BeatSaber::Init::__GameVersion__PreReleaseLabel._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::Init::__GameVersion__PreReleaseLabel::*)(
    ::BeatSaber::Init::__GameVersion__PreReleasePrefix, ::StringW)>(&::BeatSaber::Init::__GameVersion__PreReleaseLabel::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2240708;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::__GameVersion__PreReleaseLabel>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Init::__GameVersion__PreReleasePrefix>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Init::__GameVersion__PreReleaseLabel.FirstLetterToUpper
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(ByRef<::StringW>)>(&::BeatSaber::Init::__GameVersion__PreReleaseLabel::FirstLetterToUpper)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x2240778;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::__GameVersion__PreReleaseLabel>::get(), "FirstLetterToUpper",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Init::__GameVersion__PreReleaseLabel.Parse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatSaber::Init::__GameVersion__PreReleaseLabel (*)(::StringW)>(
    &::BeatSaber::Init::__GameVersion__PreReleaseLabel::Parse)> {
  constexpr static std::size_t size = 0x2dc;
  constexpr static std::size_t addrs = 0x22408a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::__GameVersion__PreReleaseLabel>::get(), "Parse", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Init::__GameVersion__PreReleaseLabel.GetPrefixText
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::BeatSaber::Init::__GameVersion__PreReleaseLabel::*)()>(
    &::BeatSaber::Init::__GameVersion__PreReleaseLabel::GetPrefixText)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x2240b84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::__GameVersion__PreReleaseLabel>::get(),
                                                                               "GetPrefixText", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Init::__GameVersion__PreReleaseLabel.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::BeatSaber::Init::__GameVersion__PreReleaseLabel::*)()>(
    &::BeatSaber::Init::__GameVersion__PreReleaseLabel::ToString)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2240c94;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::__GameVersion__PreReleaseLabel>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::__GameVersion__PreReleaseLabel>::get(), 3));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Init::__GameVersion__PreReleaseLabel.CompareTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::BeatSaber::Init::__GameVersion__PreReleaseLabel::*)(::BeatSaber::Init::__GameVersion__PreReleaseLabel)>(
    &::BeatSaber::Init::__GameVersion__PreReleaseLabel::CompareTo)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2240d04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::__GameVersion__PreReleaseLabel>::get(), "CompareTo", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Init::__GameVersion__PreReleaseLabel>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Init::__GameVersion__PreReleaseLabel.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::BeatSaber::Init::__GameVersion__PreReleaseLabel::*)(::BeatSaber::Init::__GameVersion__PreReleaseLabel)>(
    &::BeatSaber::Init::__GameVersion__PreReleaseLabel::Equals)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2240d30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::__GameVersion__PreReleaseLabel>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Init::__GameVersion__PreReleaseLabel>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IComparable_1<::BeatSaber::Init::__GameVersion__PreReleaseLabel>"
constexpr BeatSaber::Init::__GameVersion__PreReleaseLabel::operator ::System::IComparable_1<::BeatSaber::Init::__GameVersion__PreReleaseLabel>*() {
  return static_cast<::System::IComparable_1<::BeatSaber::Init::__GameVersion__PreReleaseLabel>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IComparable_1<::BeatSaber::Init::__GameVersion__PreReleaseLabel>"
constexpr ::System::IComparable_1<::BeatSaber::Init::__GameVersion__PreReleaseLabel>*
BeatSaber::Init::__GameVersion__PreReleaseLabel::i___System__IComparable_1___BeatSaber__Init____GameVersion__PreReleaseLabel_() {
  return static_cast<::System::IComparable_1<::BeatSaber::Init::__GameVersion__PreReleaseLabel>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert operator to "::System::IEquatable_1<::BeatSaber::Init::__GameVersion__PreReleaseLabel>"
constexpr BeatSaber::Init::__GameVersion__PreReleaseLabel::operator ::System::IEquatable_1<::BeatSaber::Init::__GameVersion__PreReleaseLabel>*() {
  return static_cast<::System::IEquatable_1<::BeatSaber::Init::__GameVersion__PreReleaseLabel>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IEquatable_1<::BeatSaber::Init::__GameVersion__PreReleaseLabel>"
constexpr ::System::IEquatable_1<::BeatSaber::Init::__GameVersion__PreReleaseLabel>*
BeatSaber::Init::__GameVersion__PreReleaseLabel::i___System__IEquatable_1___BeatSaber__Init____GameVersion__PreReleaseLabel_() {
  return static_cast<::System::IEquatable_1<::BeatSaber::Init::__GameVersion__PreReleaseLabel>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void BeatSaber::Init::__GameVersion__PreReleaseLabel::setStaticF_kRelease(::BeatSaber::Init::__GameVersion__PreReleaseLabel value) {
  ::cordl_internals::setStaticField<::BeatSaber::Init::__GameVersion__PreReleaseLabel, "kRelease",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::__GameVersion__PreReleaseLabel>::get>(
      std::forward<::BeatSaber::Init::__GameVersion__PreReleaseLabel>(value));
}
inline ::BeatSaber::Init::__GameVersion__PreReleaseLabel BeatSaber::Init::__GameVersion__PreReleaseLabel::getStaticF_kRelease() {
  return ::cordl_internals::getStaticField<::BeatSaber::Init::__GameVersion__PreReleaseLabel, "kRelease",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::__GameVersion__PreReleaseLabel>::get>();
}
inline void BeatSaber::Init::__GameVersion__PreReleaseLabel::setStaticF_kDefault(::BeatSaber::Init::__GameVersion__PreReleaseLabel value) {
  ::cordl_internals::setStaticField<::BeatSaber::Init::__GameVersion__PreReleaseLabel, "kDefault",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::__GameVersion__PreReleaseLabel>::get>(
      std::forward<::BeatSaber::Init::__GameVersion__PreReleaseLabel>(value));
}
inline ::BeatSaber::Init::__GameVersion__PreReleaseLabel BeatSaber::Init::__GameVersion__PreReleaseLabel::getStaticF_kDefault() {
  return ::cordl_internals::getStaticField<::BeatSaber::Init::__GameVersion__PreReleaseLabel, "kDefault",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::__GameVersion__PreReleaseLabel>::get>();
}
inline void BeatSaber::Init::__GameVersion__PreReleaseLabel::setStaticF_kPreReleasePrefixLabelMap(
    ::System::Collections::Generic::IReadOnlyList_1<::System::ValueTuple_2<::BeatSaber::Init::__GameVersion__PreReleasePrefix, ::StringW>>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::IReadOnlyList_1<::System::ValueTuple_2<::BeatSaber::Init::__GameVersion__PreReleasePrefix, ::StringW>>*,
                                    "kPreReleasePrefixLabelMap", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::__GameVersion__PreReleaseLabel>::get>(
      std::forward<::System::Collections::Generic::IReadOnlyList_1<::System::ValueTuple_2<::BeatSaber::Init::__GameVersion__PreReleasePrefix, ::StringW>>*>(value));
}
inline ::System::Collections::Generic::IReadOnlyList_1<::System::ValueTuple_2<::BeatSaber::Init::__GameVersion__PreReleasePrefix, ::StringW>>*
BeatSaber::Init::__GameVersion__PreReleaseLabel::getStaticF_kPreReleasePrefixLabelMap() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::IReadOnlyList_1<::System::ValueTuple_2<::BeatSaber::Init::__GameVersion__PreReleasePrefix, ::StringW>>*,
                                           "kPreReleasePrefixLabelMap", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::__GameVersion__PreReleaseLabel>::get>();
}
inline void BeatSaber::Init::__GameVersion__PreReleaseLabel::setStaticF_kPrereleasePattern(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "kPrereleasePattern", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::__GameVersion__PreReleaseLabel>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW BeatSaber::Init::__GameVersion__PreReleaseLabel::getStaticF_kPrereleasePattern() {
  return ::cordl_internals::getStaticField<::StringW, "kPrereleasePattern", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::__GameVersion__PreReleaseLabel>::get>();
}
/// @param label: ::StringW (default: nullptr)
inline void BeatSaber::Init::__GameVersion__PreReleaseLabel::_ctor(::BeatSaber::Init::__GameVersion__PreReleasePrefix prefix, ::StringW label) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::__GameVersion__PreReleaseLabel>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Init::__GameVersion__PreReleasePrefix>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, prefix, label);
}
inline ::StringW BeatSaber::Init::__GameVersion__PreReleaseLabel::FirstLetterToUpper(ByRef<::StringW> value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::__GameVersion__PreReleaseLabel>::get(), "FirstLetterToUpper",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, value);
}
inline ::BeatSaber::Init::__GameVersion__PreReleaseLabel BeatSaber::Init::__GameVersion__PreReleaseLabel::Parse(::StringW releaseLabel) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::__GameVersion__PreReleaseLabel>::get(), "Parse", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::Init::__GameVersion__PreReleaseLabel, false>(nullptr, ___internal_method, releaseLabel);
}
inline ::StringW BeatSaber::Init::__GameVersion__PreReleaseLabel::GetPrefixText() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::__GameVersion__PreReleaseLabel>::get(),
                                                                             "GetPrefixText", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW BeatSaber::Init::__GameVersion__PreReleaseLabel::ToString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::__GameVersion__PreReleaseLabel>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline int32_t BeatSaber::Init::__GameVersion__PreReleaseLabel::CompareTo(::BeatSaber::Init::__GameVersion__PreReleaseLabel other) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::__GameVersion__PreReleaseLabel>::get(), "CompareTo", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Init::__GameVersion__PreReleaseLabel>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, other);
}
inline bool BeatSaber::Init::__GameVersion__PreReleaseLabel::Equals(::BeatSaber::Init::__GameVersion__PreReleaseLabel other) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::__GameVersion__PreReleaseLabel>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Init::__GameVersion__PreReleaseLabel>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
// Ctor Parameters [CppParam { name: "prefix", ty: "::BeatSaber::Init::__GameVersion__PreReleasePrefix", modifiers: "", def_value: Some("{}") }, CppParam { name: "label", ty: "::StringW", modifiers:
// "", def_value: Some("nullptr") }]
constexpr ::BeatSaber::Init::__GameVersion__PreReleaseLabel::__GameVersion__PreReleaseLabel(::BeatSaber::Init::__GameVersion__PreReleasePrefix prefix, ::StringW label) noexcept {
  this->prefix = prefix;
  this->label = label;
}
// Ctor Parameters []
constexpr ::BeatSaber::Init::__GameVersion__PreReleaseLabel::__GameVersion__PreReleaseLabel() {}
//  Writing Method size for method: ::BeatSaber::Init::__GameVersion__BuildInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::Init::__GameVersion__BuildInfo::*)(::BeatSaber::Init::RuntimePlatformType, ::StringW, uint64_t)>(
    &::BeatSaber::Init::__GameVersion__BuildInfo::_ctor)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x223ffe8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::__GameVersion__BuildInfo>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Init::RuntimePlatformType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Init::__GameVersion__BuildInfo.CompareTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::BeatSaber::Init::__GameVersion__BuildInfo::*)(::BeatSaber::Init::__GameVersion__BuildInfo)>(
    &::BeatSaber::Init::__GameVersion__BuildInfo::CompareTo)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x22418b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::__GameVersion__BuildInfo>::get(), "CompareTo", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Init::__GameVersion__BuildInfo>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Init::__GameVersion__BuildInfo.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::BeatSaber::Init::__GameVersion__BuildInfo::*)(::BeatSaber::Init::__GameVersion__BuildInfo)>(
    &::BeatSaber::Init::__GameVersion__BuildInfo::Equals)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2241adc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::__GameVersion__BuildInfo>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Init::__GameVersion__BuildInfo>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Init::__GameVersion__BuildInfo.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::BeatSaber::Init::__GameVersion__BuildInfo::*)()>(
    &::BeatSaber::Init::__GameVersion__BuildInfo::ToString)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x2241420;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::__GameVersion__BuildInfo>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::__GameVersion__BuildInfo>::get(), 3));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Init::__GameVersion__BuildInfo.Parse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatSaber::Init::__GameVersion__BuildInfo (*)(::StringW)>(&::BeatSaber::Init::__GameVersion__BuildInfo::Parse)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x2241644;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::__GameVersion__BuildInfo>::get(), "Parse", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Init::__GameVersion__BuildInfo.FormatPlatformId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::BeatSaber::Init::RuntimePlatformType, ::StringW)>(
    &::BeatSaber::Init::__GameVersion__BuildInfo::FormatPlatformId)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x2241b64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::__GameVersion__BuildInfo>::get(), "FormatPlatformId", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Init::RuntimePlatformType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Init::__GameVersion__BuildInfo.ExtractNumberFromPlatformId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::BeatSaber::Init::RuntimePlatformType, ::StringW)>(
    &::BeatSaber::Init::__GameVersion__BuildInfo::ExtractNumberFromPlatformId)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2241a28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::__GameVersion__BuildInfo>::get(), "ExtractNumberFromPlatformId", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Init::RuntimePlatformType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IComparable_1<::BeatSaber::Init::__GameVersion__BuildInfo>"
constexpr BeatSaber::Init::__GameVersion__BuildInfo::operator ::System::IComparable_1<::BeatSaber::Init::__GameVersion__BuildInfo>*() {
  return static_cast<::System::IComparable_1<::BeatSaber::Init::__GameVersion__BuildInfo>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IComparable_1<::BeatSaber::Init::__GameVersion__BuildInfo>"
constexpr ::System::IComparable_1<::BeatSaber::Init::__GameVersion__BuildInfo>* BeatSaber::Init::__GameVersion__BuildInfo::i___System__IComparable_1___BeatSaber__Init____GameVersion__BuildInfo_() {
  return static_cast<::System::IComparable_1<::BeatSaber::Init::__GameVersion__BuildInfo>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert operator to "::System::IEquatable_1<::BeatSaber::Init::__GameVersion__BuildInfo>"
constexpr BeatSaber::Init::__GameVersion__BuildInfo::operator ::System::IEquatable_1<::BeatSaber::Init::__GameVersion__BuildInfo>*() {
  return static_cast<::System::IEquatable_1<::BeatSaber::Init::__GameVersion__BuildInfo>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IEquatable_1<::BeatSaber::Init::__GameVersion__BuildInfo>"
constexpr ::System::IEquatable_1<::BeatSaber::Init::__GameVersion__BuildInfo>* BeatSaber::Init::__GameVersion__BuildInfo::i___System__IEquatable_1___BeatSaber__Init____GameVersion__BuildInfo_() {
  return static_cast<::System::IEquatable_1<::BeatSaber::Init::__GameVersion__BuildInfo>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void BeatSaber::Init::__GameVersion__BuildInfo::setStaticF_kPlatformLabel(::System::Collections::Generic::IReadOnlyList_1<::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::IReadOnlyList_1<::StringW>*, "kPlatformLabel",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::__GameVersion__BuildInfo>::get>(
      std::forward<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>(value));
}
inline ::System::Collections::Generic::IReadOnlyList_1<::StringW>* BeatSaber::Init::__GameVersion__BuildInfo::getStaticF_kPlatformLabel() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::IReadOnlyList_1<::StringW>*, "kPlatformLabel",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::__GameVersion__BuildInfo>::get>();
}
inline void BeatSaber::Init::__GameVersion__BuildInfo::setStaticF_kBuildIdPattern(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "kBuildIdPattern", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::__GameVersion__BuildInfo>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW BeatSaber::Init::__GameVersion__BuildInfo::getStaticF_kBuildIdPattern() {
  return ::cordl_internals::getStaticField<::StringW, "kBuildIdPattern", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::__GameVersion__BuildInfo>::get>();
}
inline void BeatSaber::Init::__GameVersion__BuildInfo::setStaticF_kPlatformPattern(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "kPlatformPattern", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::__GameVersion__BuildInfo>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW BeatSaber::Init::__GameVersion__BuildInfo::getStaticF_kPlatformPattern() {
  return ::cordl_internals::getStaticField<::StringW, "kPlatformPattern", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::__GameVersion__BuildInfo>::get>();
}
inline void BeatSaber::Init::__GameVersion__BuildInfo::setStaticF_kPlatformIdPattern(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "kPlatformIdPattern", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::__GameVersion__BuildInfo>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW BeatSaber::Init::__GameVersion__BuildInfo::getStaticF_kPlatformIdPattern() {
  return ::cordl_internals::getStaticField<::StringW, "kPlatformIdPattern", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::__GameVersion__BuildInfo>::get>();
}
inline void BeatSaber::Init::__GameVersion__BuildInfo::setStaticF_kBuildMetadataPattern(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "kBuildMetadataPattern", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::__GameVersion__BuildInfo>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW BeatSaber::Init::__GameVersion__BuildInfo::getStaticF_kBuildMetadataPattern() {
  return ::cordl_internals::getStaticField<::StringW, "kBuildMetadataPattern", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::__GameVersion__BuildInfo>::get>();
}
inline void BeatSaber::Init::__GameVersion__BuildInfo::_ctor(::BeatSaber::Init::RuntimePlatformType platform, ::StringW platformId, uint64_t buildId) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::__GameVersion__BuildInfo>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Init::RuntimePlatformType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, platform, platformId, buildId);
}
inline int32_t BeatSaber::Init::__GameVersion__BuildInfo::CompareTo(::BeatSaber::Init::__GameVersion__BuildInfo other) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::__GameVersion__BuildInfo>::get(), "CompareTo", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Init::__GameVersion__BuildInfo>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, other);
}
inline bool BeatSaber::Init::__GameVersion__BuildInfo::Equals(::BeatSaber::Init::__GameVersion__BuildInfo other) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::__GameVersion__BuildInfo>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Init::__GameVersion__BuildInfo>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
inline ::StringW BeatSaber::Init::__GameVersion__BuildInfo::ToString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::__GameVersion__BuildInfo>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::BeatSaber::Init::__GameVersion__BuildInfo BeatSaber::Init::__GameVersion__BuildInfo::Parse(::StringW buildMetadataValue) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::__GameVersion__BuildInfo>::get(), "Parse", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::Init::__GameVersion__BuildInfo, false>(nullptr, ___internal_method, buildMetadataValue);
}
inline ::StringW BeatSaber::Init::__GameVersion__BuildInfo::FormatPlatformId(::BeatSaber::Init::RuntimePlatformType platform, ::StringW inputPlatformId) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::__GameVersion__BuildInfo>::get(), "FormatPlatformId", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Init::RuntimePlatformType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, platform, inputPlatformId);
}
inline ::StringW BeatSaber::Init::__GameVersion__BuildInfo::ExtractNumberFromPlatformId(::BeatSaber::Init::RuntimePlatformType platform, ::StringW inputPlatformId) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::__GameVersion__BuildInfo>::get(), "ExtractNumberFromPlatformId", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Init::RuntimePlatformType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, platform, inputPlatformId);
}
// Ctor Parameters [CppParam { name: "buildId", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "platform", ty: "::BeatSaber::Init::RuntimePlatformType", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "platformId", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "platformIdIntValue", ty: "int32_t", modifiers: "", def_value:
// Some("{}") }]
constexpr ::BeatSaber::Init::__GameVersion__BuildInfo::__GameVersion__BuildInfo(uint64_t buildId, ::BeatSaber::Init::RuntimePlatformType platform, ::StringW platformId,
                                                                                int32_t platformIdIntValue) noexcept {
  this->buildId = buildId;
  this->platform = platform;
  this->platformId = platformId;
  this->platformIdIntValue = platformIdIntValue;
}
// Ctor Parameters []
constexpr ::BeatSaber::Init::__GameVersion__BuildInfo::__GameVersion__BuildInfo() {}
//  Writing Method size for method: ::BeatSaber::Init::__GameVersion__Metadata._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::BeatSaber::Init::__GameVersion__Metadata::*)(::System::Nullable_1<::BeatSaber::Init::__GameVersion__BuildInfo>)>(&::BeatSaber::Init::__GameVersion__Metadata::_ctor)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x224127c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::__GameVersion__Metadata>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::BeatSaber::Init::__GameVersion__BuildInfo>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Init::__GameVersion__Metadata._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::Init::__GameVersion__Metadata::*)(
    ::BeatSaber::Init::__GameVersion__PreReleaseLabel, ::System::Nullable_1<::BeatSaber::Init::__GameVersion__BuildInfo>)>(&::BeatSaber::Init::__GameVersion__Metadata::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x22400bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::__GameVersion__Metadata>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Init::__GameVersion__PreReleaseLabel>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::BeatSaber::Init::__GameVersion__BuildInfo>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Init::__GameVersion__Metadata.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::BeatSaber::Init::__GameVersion__Metadata::*)()>(&::BeatSaber::Init::__GameVersion__Metadata::ToString)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x223fc60;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::__GameVersion__Metadata>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::__GameVersion__Metadata>::get(), 3));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Init::__GameVersion__Metadata.BuildInfoText
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::BeatSaber::Init::__GameVersion__Metadata::*)()>(
    &::BeatSaber::Init::__GameVersion__Metadata::BuildInfoText)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x2241334;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::__GameVersion__Metadata>::get(),
                                                                               "BuildInfoText", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Init::__GameVersion__Metadata.Parse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatSaber::Init::__GameVersion__Metadata (*)(::StringW)>(&::BeatSaber::Init::__GameVersion__Metadata::Parse)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x223f614;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::__GameVersion__Metadata>::get(), "Parse", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Init::__GameVersion__Metadata.ExtractSubStrings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ByRef<::StringW>, ByRef<::StringW>)>(
    &::BeatSaber::Init::__GameVersion__Metadata::ExtractSubStrings)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x2241578;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::__GameVersion__Metadata>::get(), "ExtractSubStrings", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Init::__GameVersion__Metadata.CompareTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::BeatSaber::Init::__GameVersion__Metadata::*)(::BeatSaber::Init::__GameVersion__Metadata)>(
    &::BeatSaber::Init::__GameVersion__Metadata::CompareTo)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x223f948;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::__GameVersion__Metadata>::get(), "CompareTo", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Init::__GameVersion__Metadata>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Init::__GameVersion__Metadata.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::BeatSaber::Init::__GameVersion__Metadata::*)(::BeatSaber::Init::__GameVersion__Metadata)>(
    &::BeatSaber::Init::__GameVersion__Metadata::Equals)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x224197c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::__GameVersion__Metadata>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Init::__GameVersion__Metadata>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IComparable_1<::BeatSaber::Init::__GameVersion__Metadata>"
constexpr BeatSaber::Init::__GameVersion__Metadata::operator ::System::IComparable_1<::BeatSaber::Init::__GameVersion__Metadata>*() {
  return static_cast<::System::IComparable_1<::BeatSaber::Init::__GameVersion__Metadata>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IComparable_1<::BeatSaber::Init::__GameVersion__Metadata>"
constexpr ::System::IComparable_1<::BeatSaber::Init::__GameVersion__Metadata>* BeatSaber::Init::__GameVersion__Metadata::i___System__IComparable_1___BeatSaber__Init____GameVersion__Metadata_() {
  return static_cast<::System::IComparable_1<::BeatSaber::Init::__GameVersion__Metadata>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert operator to "::System::IEquatable_1<::BeatSaber::Init::__GameVersion__Metadata>"
constexpr BeatSaber::Init::__GameVersion__Metadata::operator ::System::IEquatable_1<::BeatSaber::Init::__GameVersion__Metadata>*() {
  return static_cast<::System::IEquatable_1<::BeatSaber::Init::__GameVersion__Metadata>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IEquatable_1<::BeatSaber::Init::__GameVersion__Metadata>"
constexpr ::System::IEquatable_1<::BeatSaber::Init::__GameVersion__Metadata>* BeatSaber::Init::__GameVersion__Metadata::i___System__IEquatable_1___BeatSaber__Init____GameVersion__Metadata_() {
  return static_cast<::System::IEquatable_1<::BeatSaber::Init::__GameVersion__Metadata>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void BeatSaber::Init::__GameVersion__Metadata::setStaticF_kDefault(::BeatSaber::Init::__GameVersion__Metadata value) {
  ::cordl_internals::setStaticField<::BeatSaber::Init::__GameVersion__Metadata, "kDefault", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::__GameVersion__Metadata>::get>(
      std::forward<::BeatSaber::Init::__GameVersion__Metadata>(value));
}
inline ::BeatSaber::Init::__GameVersion__Metadata BeatSaber::Init::__GameVersion__Metadata::getStaticF_kDefault() {
  return ::cordl_internals::getStaticField<::BeatSaber::Init::__GameVersion__Metadata, "kDefault",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::__GameVersion__Metadata>::get>();
}
/// @param buildInfo: ::System::Nullable_1<::BeatSaber::Init::__GameVersion__BuildInfo> (default: {})
inline void BeatSaber::Init::__GameVersion__Metadata::_ctor(::System::Nullable_1<::BeatSaber::Init::__GameVersion__BuildInfo> buildInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::__GameVersion__Metadata>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::BeatSaber::Init::__GameVersion__BuildInfo>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, buildInfo);
}
inline void BeatSaber::Init::__GameVersion__Metadata::_ctor(::BeatSaber::Init::__GameVersion__PreReleaseLabel preReleaseLabel,
                                                            ::System::Nullable_1<::BeatSaber::Init::__GameVersion__BuildInfo> buildInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::__GameVersion__Metadata>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Init::__GameVersion__PreReleaseLabel>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::BeatSaber::Init::__GameVersion__BuildInfo>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, preReleaseLabel, buildInfo);
}
inline ::StringW BeatSaber::Init::__GameVersion__Metadata::ToString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::__GameVersion__Metadata>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW BeatSaber::Init::__GameVersion__Metadata::BuildInfoText() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::__GameVersion__Metadata>::get(), "BuildInfoText",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::BeatSaber::Init::__GameVersion__Metadata BeatSaber::Init::__GameVersion__Metadata::Parse(::StringW versionMetadata) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::__GameVersion__Metadata>::get(), "Parse", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::Init::__GameVersion__Metadata, false>(nullptr, ___internal_method, versionMetadata);
}
inline void BeatSaber::Init::__GameVersion__Metadata::ExtractSubStrings(::StringW versionMetadata, ByRef<::StringW> preReleaseLabelString, ByRef<::StringW> buildInfoString) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::__GameVersion__Metadata>::get(), "ExtractSubStrings", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, versionMetadata, preReleaseLabelString, buildInfoString);
}
inline int32_t BeatSaber::Init::__GameVersion__Metadata::CompareTo(::BeatSaber::Init::__GameVersion__Metadata other) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::__GameVersion__Metadata>::get(), "CompareTo", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Init::__GameVersion__Metadata>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, other);
}
inline bool BeatSaber::Init::__GameVersion__Metadata::Equals(::BeatSaber::Init::__GameVersion__Metadata other) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::__GameVersion__Metadata>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Init::__GameVersion__Metadata>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
// Ctor Parameters [CppParam { name: "preReleaseLabel", ty: "::BeatSaber::Init::__GameVersion__PreReleaseLabel", modifiers: "", def_value: Some("{}") }, CppParam { name: "buildInfo", ty:
// "::System::Nullable_1<::BeatSaber::Init::__GameVersion__BuildInfo>", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatSaber::Init::__GameVersion__Metadata::__GameVersion__Metadata(::BeatSaber::Init::__GameVersion__PreReleaseLabel preReleaseLabel,
                                                                              ::System::Nullable_1<::BeatSaber::Init::__GameVersion__BuildInfo> buildInfo) noexcept {
  this->preReleaseLabel = preReleaseLabel;
  this->buildInfo = buildInfo;
}
// Ctor Parameters []
constexpr ::BeatSaber::Init::__GameVersion__Metadata::__GameVersion__Metadata() {}
//  Writing Method size for method: ::BeatSaber::Init::GameVersion._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::Init::GameVersion::*)(
    ::BeatSaber::Init::__GameVersion__Content, ::System::Nullable_1<::BeatSaber::Init::__GameVersion__Metadata>)>(&::BeatSaber::Init::GameVersion::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x223f324;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::GameVersion*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Init::__GameVersion__Content>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::BeatSaber::Init::__GameVersion__Metadata>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Init::GameVersion.Parse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatSaber::Init::GameVersion* (*)(::StringW)>(&::BeatSaber::Init::GameVersion::Parse)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x223f370;

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
  constexpr static std::size_t addrs = 0x223f784;

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
  constexpr static std::size_t addrs = 0x223fa74;

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
  constexpr static std::size_t addrs = 0x223fa8c;

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
  constexpr static std::size_t addrs = 0x223fd40;

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
  constexpr static std::size_t addrs = 0x223fdd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::GameVersion*>::get(), "UpdatePlatformId", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
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
constexpr ::BeatSaber::Init::__GameVersion__Content& BeatSaber::Init::GameVersion::__cordl_internal_get_content() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___content;
}
constexpr ::BeatSaber::Init::__GameVersion__Content const& BeatSaber::Init::GameVersion::__cordl_internal_get_content() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___content;
}
constexpr void BeatSaber::Init::GameVersion::__cordl_internal_set_content(::BeatSaber::Init::__GameVersion__Content value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___content = value;
}
constexpr ::System::Nullable_1<::BeatSaber::Init::__GameVersion__Metadata>& BeatSaber::Init::GameVersion::__cordl_internal_get_metadata() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___metadata;
}
constexpr ::System::Nullable_1<::BeatSaber::Init::__GameVersion__Metadata> const& BeatSaber::Init::GameVersion::__cordl_internal_get_metadata() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___metadata;
}
constexpr void BeatSaber::Init::GameVersion::__cordl_internal_set_metadata(::System::Nullable_1<::BeatSaber::Init::__GameVersion__Metadata> value) {
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
/// @param metadata: ::System::Nullable_1<::BeatSaber::Init::__GameVersion__Metadata> (default: {})
inline ::BeatSaber::Init::GameVersion* BeatSaber::Init::GameVersion::New_ctor(::BeatSaber::Init::__GameVersion__Content content,
                                                                              ::System::Nullable_1<::BeatSaber::Init::__GameVersion__Metadata> metadata) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatSaber::Init::GameVersion*>(content, metadata));
}
/// @param metadata: ::System::Nullable_1<::BeatSaber::Init::__GameVersion__Metadata> (default: {})
inline void BeatSaber::Init::GameVersion::_ctor(::BeatSaber::Init::__GameVersion__Content content, ::System::Nullable_1<::BeatSaber::Init::__GameVersion__Metadata> metadata) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::GameVersion*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Init::__GameVersion__Content>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::BeatSaber::Init::__GameVersion__Metadata>>::get() })));
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
// Ctor Parameters []
constexpr ::BeatSaber::Init::GameVersion::GameVersion() {}
