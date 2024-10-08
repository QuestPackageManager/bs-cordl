#pragma once
// IWYU pragma private; include "BeatSaber/Init/GameVersion.hpp"
#include "BeatSaber/Init/zzzz__GameVersion_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaber/Init/zzzz__GameVersion_def.hpp"
#include "BeatSaber/Init/zzzz__GameVersion_def.hpp"
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
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatSaber::Init::__GameVersion__Platform::__GameVersion__Platform(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::BeatSaber::Init::__GameVersion__Platform::__GameVersion__Platform() {}
constexpr ::BeatSaber::Init::__GameVersion__Platform BeatSaber::Init::__GameVersion__Platform::PS4{ static_cast<int32_t>(0x0) };
constexpr ::BeatSaber::Init::__GameVersion__Platform BeatSaber::Init::__GameVersion__Platform::PS5{ static_cast<int32_t>(0x1) };
constexpr ::BeatSaber::Init::__GameVersion__Platform BeatSaber::Init::__GameVersion__Platform::Quest{ static_cast<int32_t>(0x2) };
constexpr ::BeatSaber::Init::__GameVersion__Platform BeatSaber::Init::__GameVersion__Platform::Rift{ static_cast<int32_t>(0x3) };
constexpr ::BeatSaber::Init::__GameVersion__Platform BeatSaber::Init::__GameVersion__Platform::Steam{ static_cast<int32_t>(0x4) };
//  Writing Method size for method: ::GlobalNamespace::__GameVersion__Content____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__GameVersion__Content____c::*)()>(&::GlobalNamespace::__GameVersion__Content____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2237c7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameVersion__Content____c*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__GameVersion__Content____c.__cctor_b__23_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::__GameVersion__Content____c::*)(
    ::System::ValueTuple_2<::BeatSaber::Init::__GameVersion__PreReleasePrefix, ::StringW>)>(&::GlobalNamespace::__GameVersion__Content____c::__cctor_b__23_0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2237c84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameVersion__Content____c*>::get(), "<.cctor>b__23_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ValueTuple_2<::BeatSaber::Init::__GameVersion__PreReleasePrefix, ::StringW>>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::__GameVersion__Content____c::setStaticF___9(::GlobalNamespace::__GameVersion__Content____c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::__GameVersion__Content____c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameVersion__Content____c*>::get>(
      std::forward<::GlobalNamespace::__GameVersion__Content____c*>(value));
}
inline ::GlobalNamespace::__GameVersion__Content____c* GlobalNamespace::__GameVersion__Content____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::__GameVersion__Content____c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameVersion__Content____c*>::get>();
}
inline ::GlobalNamespace::__GameVersion__Content____c* GlobalNamespace::__GameVersion__Content____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__GameVersion__Content____c*>());
}
inline void GlobalNamespace::__GameVersion__Content____c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameVersion__Content____c*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::__GameVersion__Content____c::__cctor_b__23_0(::System::ValueTuple_2<::BeatSaber::Init::__GameVersion__PreReleasePrefix, ::StringW> el) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameVersion__Content____c*>::get(), "<.cctor>b__23_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ValueTuple_2<::BeatSaber::Init::__GameVersion__PreReleasePrefix, ::StringW>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, el);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__GameVersion__Content____c::__GameVersion__Content____c() {}
//  Writing Method size for method: ::GlobalNamespace::__GameVersion__Content____c__DisplayClass16_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__GameVersion__Content____c__DisplayClass16_0::*)()>(
    &::GlobalNamespace::__GameVersion__Content____c__DisplayClass16_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2237664;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameVersion__Content____c__DisplayClass16_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__GameVersion__Content____c__DisplayClass16_0._GetPreReleasePrefixText_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__GameVersion__Content____c__DisplayClass16_0::*)(
    ::System::ValueTuple_2<::BeatSaber::Init::__GameVersion__PreReleasePrefix, ::StringW>)>(&::GlobalNamespace::__GameVersion__Content____c__DisplayClass16_0::_GetPreReleasePrefixText_b__0)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2237c8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameVersion__Content____c__DisplayClass16_0*>::get(), "<GetPreReleasePrefixText>b__0",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ValueTuple_2<::BeatSaber::Init::__GameVersion__PreReleasePrefix, ::StringW>>::get() })));
    return ___internal_method;
  }
};
constexpr ::BeatSaber::Init::__GameVersion__PreReleasePrefix& GlobalNamespace::__GameVersion__Content____c__DisplayClass16_0::__cordl_internal_get_currentPreReleasePrefix() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentPreReleasePrefix;
}
constexpr ::BeatSaber::Init::__GameVersion__PreReleasePrefix const& GlobalNamespace::__GameVersion__Content____c__DisplayClass16_0::__cordl_internal_get_currentPreReleasePrefix() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentPreReleasePrefix;
}
constexpr void GlobalNamespace::__GameVersion__Content____c__DisplayClass16_0::__cordl_internal_set_currentPreReleasePrefix(::BeatSaber::Init::__GameVersion__PreReleasePrefix value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___currentPreReleasePrefix = value;
}
inline ::GlobalNamespace::__GameVersion__Content____c__DisplayClass16_0* GlobalNamespace::__GameVersion__Content____c__DisplayClass16_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__GameVersion__Content____c__DisplayClass16_0*>());
}
inline void GlobalNamespace::__GameVersion__Content____c__DisplayClass16_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameVersion__Content____c__DisplayClass16_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::__GameVersion__Content____c__DisplayClass16_0::_GetPreReleasePrefixText_b__0(::System::ValueTuple_2<::BeatSaber::Init::__GameVersion__PreReleasePrefix, ::StringW> tuple) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameVersion__Content____c__DisplayClass16_0*>::get(), "<GetPreReleasePrefixText>b__0",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ValueTuple_2<::BeatSaber::Init::__GameVersion__PreReleasePrefix, ::StringW>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, tuple);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__GameVersion__Content____c__DisplayClass16_0::__GameVersion__Content____c__DisplayClass16_0() {}
//  Writing Method size for method: ::GlobalNamespace::__GameVersion__Content____c__DisplayClass17_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__GameVersion__Content____c__DisplayClass17_0::*)()>(
    &::GlobalNamespace::__GameVersion__Content____c__DisplayClass17_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x223766c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameVersion__Content____c__DisplayClass17_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__GameVersion__Content____c__DisplayClass17_0._Parse_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__GameVersion__Content____c__DisplayClass17_0::*)(
    ::System::ValueTuple_2<::BeatSaber::Init::__GameVersion__PreReleasePrefix, ::StringW>)>(&::GlobalNamespace::__GameVersion__Content____c__DisplayClass17_0::_Parse_b__0)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2237c9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameVersion__Content____c__DisplayClass17_0*>::get(), "<Parse>b__0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ValueTuple_2<::BeatSaber::Init::__GameVersion__PreReleasePrefix, ::StringW>>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Text::RegularExpressions::Group*& GlobalNamespace::__GameVersion__Content____c__DisplayClass17_0::__cordl_internal_get_preReleasePrefixGroup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___preReleasePrefixGroup;
}
constexpr ::cordl_internals::to_const_pointer<::System::Text::RegularExpressions::Group*> const&
GlobalNamespace::__GameVersion__Content____c__DisplayClass17_0::__cordl_internal_get_preReleasePrefixGroup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___preReleasePrefixGroup;
}
constexpr void GlobalNamespace::__GameVersion__Content____c__DisplayClass17_0::__cordl_internal_set_preReleasePrefixGroup(::System::Text::RegularExpressions::Group* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___preReleasePrefixGroup)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__GameVersion__Content____c__DisplayClass17_0* GlobalNamespace::__GameVersion__Content____c__DisplayClass17_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__GameVersion__Content____c__DisplayClass17_0*>());
}
inline void GlobalNamespace::__GameVersion__Content____c__DisplayClass17_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameVersion__Content____c__DisplayClass17_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::__GameVersion__Content____c__DisplayClass17_0::_Parse_b__0(::System::ValueTuple_2<::BeatSaber::Init::__GameVersion__PreReleasePrefix, ::StringW> tuple) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameVersion__Content____c__DisplayClass17_0*>::get(), "<Parse>b__0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ValueTuple_2<::BeatSaber::Init::__GameVersion__PreReleasePrefix, ::StringW>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, tuple);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__GameVersion__Content____c__DisplayClass17_0::__GameVersion__Content____c__DisplayClass17_0() {}
//  Writing Method size for method: ::BeatSaber::Init::__GameVersion__Content._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::Init::__GameVersion__Content::*)(
    int32_t, int32_t, int32_t, ::BeatSaber::Init::__GameVersion__PreReleasePrefix, ::StringW)>(&::BeatSaber::Init::__GameVersion__Content::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x223751c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::__GameVersion__Content>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Init::__GameVersion__PreReleasePrefix>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Init::__GameVersion__Content.GetPreReleasePrefixText
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::BeatSaber::Init::__GameVersion__Content::*)()>(
    &::BeatSaber::Init::__GameVersion__Content::GetPreReleasePrefixText)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x223755c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::__GameVersion__Content>::get(),
                                                                               "GetPreReleasePrefixText", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Init::__GameVersion__Content.Parse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatSaber::Init::__GameVersion__Content (*)(::StringW)>(&::BeatSaber::Init::__GameVersion__Content::Parse)> {
  constexpr static std::size_t size = 0x3e4;
  constexpr static std::size_t addrs = 0x2236a28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::__GameVersion__Content>::get(), "Parse", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Init::__GameVersion__Content.CompareTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::BeatSaber::Init::__GameVersion__Content::*)(::BeatSaber::Init::__GameVersion__Content)>(
    &::BeatSaber::Init::__GameVersion__Content::CompareTo)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x22371bc;

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
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2237674;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::__GameVersion__Content>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Init::__GameVersion__Content>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Init::__GameVersion__Content.GetVersionCore
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::BeatSaber::Init::__GameVersion__Content::*)()>(
    &::BeatSaber::Init::__GameVersion__Content::GetVersionCore)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x22376fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::__GameVersion__Content>::get(),
                                                                               "GetVersionCore", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Init::__GameVersion__Content.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::BeatSaber::Init::__GameVersion__Content::*)()>(&::BeatSaber::Init::__GameVersion__Content::ToString)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x22373cc;

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
inline void BeatSaber::Init::__GameVersion__Content::setStaticF_kDefault(::BeatSaber::Init::__GameVersion__Content value) {
  ::cordl_internals::setStaticField<::BeatSaber::Init::__GameVersion__Content, "kDefault", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::__GameVersion__Content>::get>(
      std::forward<::BeatSaber::Init::__GameVersion__Content>(value));
}
inline ::BeatSaber::Init::__GameVersion__Content BeatSaber::Init::__GameVersion__Content::getStaticF_kDefault() {
  return ::cordl_internals::getStaticField<::BeatSaber::Init::__GameVersion__Content, "kDefault",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::__GameVersion__Content>::get>();
}
inline void BeatSaber::Init::__GameVersion__Content::setStaticF_kPreReleasePrefixLabelMap(
    ::System::Collections::Generic::IReadOnlyList_1<::System::ValueTuple_2<::BeatSaber::Init::__GameVersion__PreReleasePrefix, ::StringW>>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::IReadOnlyList_1<::System::ValueTuple_2<::BeatSaber::Init::__GameVersion__PreReleasePrefix, ::StringW>>*,
                                    "kPreReleasePrefixLabelMap", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::__GameVersion__Content>::get>(
      std::forward<::System::Collections::Generic::IReadOnlyList_1<::System::ValueTuple_2<::BeatSaber::Init::__GameVersion__PreReleasePrefix, ::StringW>>*>(value));
}
inline ::System::Collections::Generic::IReadOnlyList_1<::System::ValueTuple_2<::BeatSaber::Init::__GameVersion__PreReleasePrefix, ::StringW>>*
BeatSaber::Init::__GameVersion__Content::getStaticF_kPreReleasePrefixLabelMap() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::IReadOnlyList_1<::System::ValueTuple_2<::BeatSaber::Init::__GameVersion__PreReleasePrefix, ::StringW>>*,
                                           "kPreReleasePrefixLabelMap", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::__GameVersion__Content>::get>();
}
inline void BeatSaber::Init::__GameVersion__Content::setStaticF_kPrereleasePattern(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "kPrereleasePattern", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::__GameVersion__Content>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW BeatSaber::Init::__GameVersion__Content::getStaticF_kPrereleasePattern() {
  return ::cordl_internals::getStaticField<::StringW, "kPrereleasePattern", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::__GameVersion__Content>::get>();
}
inline void BeatSaber::Init::__GameVersion__Content::setStaticF_kContentVersionPattern(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "kContentVersionPattern", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::__GameVersion__Content>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW BeatSaber::Init::__GameVersion__Content::getStaticF_kContentVersionPattern() {
  return ::cordl_internals::getStaticField<::StringW, "kContentVersionPattern", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::__GameVersion__Content>::get>();
}
/// @param preReleasePrefix: ::BeatSaber::Init::__GameVersion__PreReleasePrefix (default: static_cast<int32_t>(0x1e))
/// @param preReleaseLabel: ::StringW (default: nullptr)
inline void BeatSaber::Init::__GameVersion__Content::_ctor(int32_t major, int32_t minor, int32_t patch, ::BeatSaber::Init::__GameVersion__PreReleasePrefix preReleasePrefix,
                                                           ::StringW preReleaseLabel) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::__GameVersion__Content>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Init::__GameVersion__PreReleasePrefix>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, major, minor, patch, preReleasePrefix, preReleaseLabel);
}
inline ::StringW BeatSaber::Init::__GameVersion__Content::GetPreReleasePrefixText() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::__GameVersion__Content>::get(),
                                                                             "GetPreReleasePrefixText", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::BeatSaber::Init::__GameVersion__Content BeatSaber::Init::__GameVersion__Content::Parse(::StringW contentVersion) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::__GameVersion__Content>::get(), "Parse", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::Init::__GameVersion__Content, false>(nullptr, ___internal_method, contentVersion);
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
inline ::StringW BeatSaber::Init::__GameVersion__Content::GetVersionCore() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::__GameVersion__Content>::get(), "GetVersionCore",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW BeatSaber::Init::__GameVersion__Content::ToString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::__GameVersion__Content>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "major", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "minor", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "patch", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "preReleaseLabel", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name:
// "preReleasePrefix", ty: "::BeatSaber::Init::__GameVersion__PreReleasePrefix", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatSaber::Init::__GameVersion__Content::__GameVersion__Content(int32_t major, int32_t minor, int32_t patch, ::StringW preReleaseLabel,
                                                                            ::BeatSaber::Init::__GameVersion__PreReleasePrefix preReleasePrefix) noexcept {
  this->major = major;
  this->minor = minor;
  this->patch = patch;
  this->preReleaseLabel = preReleaseLabel;
  this->preReleasePrefix = preReleasePrefix;
}
// Ctor Parameters []
constexpr ::BeatSaber::Init::__GameVersion__Content::__GameVersion__Content() {}
//  Writing Method size for method: ::BeatSaber::Init::__GameVersion__Metadata._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::Init::__GameVersion__Metadata::*)(::BeatSaber::Init::__GameVersion__Platform, ::StringW, int32_t)>(
    &::BeatSaber::Init::__GameVersion__Metadata::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2237ccc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::__GameVersion__Metadata>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Init::__GameVersion__Platform>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Init::__GameVersion__Metadata.CompareTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::BeatSaber::Init::__GameVersion__Metadata::*)(::BeatSaber::Init::__GameVersion__Metadata)>(
    &::BeatSaber::Init::__GameVersion__Metadata::CompareTo)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x223721c;

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
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2237cf4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::__GameVersion__Metadata>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Init::__GameVersion__Metadata>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Init::__GameVersion__Metadata.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::BeatSaber::Init::__GameVersion__Metadata::*)()>(&::BeatSaber::Init::__GameVersion__Metadata::ToString)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x2237d8c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::__GameVersion__Metadata>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::__GameVersion__Metadata>::get(), 3));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Init::__GameVersion__Metadata.Parse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatSaber::Init::__GameVersion__Metadata (*)(::StringW)>(&::BeatSaber::Init::__GameVersion__Metadata::Parse)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x2236e0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::__GameVersion__Metadata>::get(), "Parse", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
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
inline void BeatSaber::Init::__GameVersion__Metadata::setStaticF_kPlatformLabel(::System::Collections::Generic::IReadOnlyList_1<::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::IReadOnlyList_1<::StringW>*, "kPlatformLabel",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::__GameVersion__Metadata>::get>(
      std::forward<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>(value));
}
inline ::System::Collections::Generic::IReadOnlyList_1<::StringW>* BeatSaber::Init::__GameVersion__Metadata::getStaticF_kPlatformLabel() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::IReadOnlyList_1<::StringW>*, "kPlatformLabel",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::__GameVersion__Metadata>::get>();
}
inline void BeatSaber::Init::__GameVersion__Metadata::setStaticF_kBuildIdPattern(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "kBuildIdPattern", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::__GameVersion__Metadata>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW BeatSaber::Init::__GameVersion__Metadata::getStaticF_kBuildIdPattern() {
  return ::cordl_internals::getStaticField<::StringW, "kBuildIdPattern", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::__GameVersion__Metadata>::get>();
}
inline void BeatSaber::Init::__GameVersion__Metadata::setStaticF_kPlatformPattern(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "kPlatformPattern", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::__GameVersion__Metadata>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW BeatSaber::Init::__GameVersion__Metadata::getStaticF_kPlatformPattern() {
  return ::cordl_internals::getStaticField<::StringW, "kPlatformPattern", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::__GameVersion__Metadata>::get>();
}
inline void BeatSaber::Init::__GameVersion__Metadata::setStaticF_kPlatformIdPattern(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "kPlatformIdPattern", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::__GameVersion__Metadata>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW BeatSaber::Init::__GameVersion__Metadata::getStaticF_kPlatformIdPattern() {
  return ::cordl_internals::getStaticField<::StringW, "kPlatformIdPattern", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::__GameVersion__Metadata>::get>();
}
inline void BeatSaber::Init::__GameVersion__Metadata::setStaticF_kBuildMetadataPattern(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "kBuildMetadataPattern", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::__GameVersion__Metadata>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW BeatSaber::Init::__GameVersion__Metadata::getStaticF_kBuildMetadataPattern() {
  return ::cordl_internals::getStaticField<::StringW, "kBuildMetadataPattern", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::__GameVersion__Metadata>::get>();
}
inline void BeatSaber::Init::__GameVersion__Metadata::_ctor(::BeatSaber::Init::__GameVersion__Platform platform, ::StringW platformId, int32_t buildId) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::__GameVersion__Metadata>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Init::__GameVersion__Platform>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, platform, platformId, buildId);
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
inline ::StringW BeatSaber::Init::__GameVersion__Metadata::ToString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::__GameVersion__Metadata>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::BeatSaber::Init::__GameVersion__Metadata BeatSaber::Init::__GameVersion__Metadata::Parse(::StringW buildMetadataValue) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::__GameVersion__Metadata>::get(), "Parse", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::Init::__GameVersion__Metadata, false>(nullptr, ___internal_method, buildMetadataValue);
}
// Ctor Parameters [CppParam { name: "buildId", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "platform", ty: "::BeatSaber::Init::__GameVersion__Platform", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "platformId", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "platformIdIntValue", ty: "int32_t", modifiers: "", def_value:
// Some("{}") }]
constexpr ::BeatSaber::Init::__GameVersion__Metadata::__GameVersion__Metadata(int32_t buildId, ::BeatSaber::Init::__GameVersion__Platform platform, ::StringW platformId,
                                                                              int32_t platformIdIntValue) noexcept {
  this->buildId = buildId;
  this->platform = platform;
  this->platformId = platformId;
  this->platformIdIntValue = platformIdIntValue;
}
// Ctor Parameters []
constexpr ::BeatSaber::Init::__GameVersion__Metadata::__GameVersion__Metadata() {}
//  Writing Method size for method: ::BeatSaber::Init::GameVersion._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::Init::GameVersion::*)(
    ::BeatSaber::Init::__GameVersion__Content, ::System::Nullable_1<::BeatSaber::Init::__GameVersion__Metadata>)>(&::BeatSaber::Init::GameVersion::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x223681c;

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
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x2236854;

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
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x223706c;

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
  constexpr static std::size_t addrs = 0x22372e0;

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
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x22372f8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::GameVersion*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::GameVersion*>::get(), 3));
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
constexpr ::System::Nullable_1<::BeatSaber::Init::__GameVersion__Metadata>& BeatSaber::Init::GameVersion::__cordl_internal_get_buildMetadata() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buildMetadata;
}
constexpr ::System::Nullable_1<::BeatSaber::Init::__GameVersion__Metadata> const& BeatSaber::Init::GameVersion::__cordl_internal_get_buildMetadata() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buildMetadata;
}
constexpr void BeatSaber::Init::GameVersion::__cordl_internal_set_buildMetadata(::System::Nullable_1<::BeatSaber::Init::__GameVersion__Metadata> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___buildMetadata = value;
}
inline void BeatSaber::Init::GameVersion::setStaticF_Zero(::BeatSaber::Init::GameVersion* value) {
  ::cordl_internals::setStaticField<::BeatSaber::Init::GameVersion*, "Zero", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::GameVersion*>::get>(
      std::forward<::BeatSaber::Init::GameVersion*>(value));
}
inline ::BeatSaber::Init::GameVersion* BeatSaber::Init::GameVersion::getStaticF_Zero() {
  return ::cordl_internals::getStaticField<::BeatSaber::Init::GameVersion*, "Zero", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::GameVersion*>::get>();
}
/// @param buildMetadata: ::System::Nullable_1<::BeatSaber::Init::__GameVersion__Metadata> (default: {})
inline ::BeatSaber::Init::GameVersion* BeatSaber::Init::GameVersion::New_ctor(::BeatSaber::Init::__GameVersion__Content content,
                                                                              ::System::Nullable_1<::BeatSaber::Init::__GameVersion__Metadata> buildMetadata) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatSaber::Init::GameVersion*>(content, buildMetadata));
}
/// @param buildMetadata: ::System::Nullable_1<::BeatSaber::Init::__GameVersion__Metadata> (default: {})
inline void BeatSaber::Init::GameVersion::_ctor(::BeatSaber::Init::__GameVersion__Content content, ::System::Nullable_1<::BeatSaber::Init::__GameVersion__Metadata> buildMetadata) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::GameVersion*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Init::__GameVersion__Content>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::BeatSaber::Init::__GameVersion__Metadata>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, content, buildMetadata);
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
// Ctor Parameters []
constexpr ::BeatSaber::Init::GameVersion::GameVersion() {}
