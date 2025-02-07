#pragma once
// IWYU pragma private; include "GlobalNamespace/SonyContentVersion.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__SonyContentVersion_def.hpp"
#include "GlobalNamespace/zzzz__SonyContentVersion_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::SonyContentVersion_VersionFormat::SonyContentVersion_VersionFormat(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SonyContentVersion_VersionFormat::SonyContentVersion_VersionFormat() {}
constexpr ::GlobalNamespace::SonyContentVersion_VersionFormat GlobalNamespace::SonyContentVersion_VersionFormat::Long{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::SonyContentVersion_VersionFormat GlobalNamespace::SonyContentVersion_VersionFormat::Short{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::GlobalNamespace::SonyContentVersion.get_majorVersion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::GlobalNamespace::SonyContentVersion::*)()>(&::GlobalNamespace::SonyContentVersion::get_majorVersion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26eb1dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyContentVersion*>::get(),
                                                                               "get_majorVersion", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SonyContentVersion.get_minorVersion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::GlobalNamespace::SonyContentVersion::*)()>(&::GlobalNamespace::SonyContentVersion::get_minorVersion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26eb1e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyContentVersion*>::get(),
                                                                               "get_minorVersion", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SonyContentVersion.get_revision
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::GlobalNamespace::SonyContentVersion::*)()>(&::GlobalNamespace::SonyContentVersion::get_revision)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26eb1ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyContentVersion*>::get(), "get_revision",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SonyContentVersion._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SonyContentVersion::*)(uint32_t, uint32_t, uint32_t)>(
    &::GlobalNamespace::SonyContentVersion::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x26eb1f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyContentVersion*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SonyContentVersion.GetFromString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::SonyContentVersion* (*)(::StringW)>(&::GlobalNamespace::SonyContentVersion::GetFromString)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x26eb230;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyContentVersion*>::get(), "GetFromString", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SonyContentVersion.IsVersionFormatValid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&::GlobalNamespace::SonyContentVersion::IsVersionFormatValid)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x26eb530;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyContentVersion*>::get(), "IsVersionFormatValid",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SonyContentVersion.Get
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::SonyContentVersion::*)(::GlobalNamespace::SonyContentVersion_VersionFormat)>(
    &::GlobalNamespace::SonyContentVersion::Get)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x26eb5c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyContentVersion*>::get(), "Get", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SonyContentVersion_VersionFormat>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SonyContentVersion.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::SonyContentVersion::*)()>(&::GlobalNamespace::SonyContentVersion::ToString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26eb774;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyContentVersion*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyContentVersion*>::get(), 3));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SonyContentVersion.op_Implicit___StringW
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::GlobalNamespace::SonyContentVersion*)>(
    &::GlobalNamespace::SonyContentVersion::op_Implicit___StringW)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x26eb77c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyContentVersion*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SonyContentVersion*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SonyContentVersion.CopyValueFrom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SonyContentVersion::*)(::GlobalNamespace::SonyContentVersion*)>(
    &::GlobalNamespace::SonyContentVersion::CopyValueFrom)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x26eb154;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyContentVersion*>::get(), "CopyValueFrom", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SonyContentVersion*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SonyContentVersion.IncreaseMinorVersion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SonyContentVersion::*)()>(&::GlobalNamespace::SonyContentVersion::IncreaseMinorVersion)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x26eb1b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyContentVersion*>::get(),
                                                                               "IncreaseMinorVersion", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr uint32_t& GlobalNamespace::SonyContentVersion::__cordl_internal_get__majorVersion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____majorVersion;
}
constexpr uint32_t const& GlobalNamespace::SonyContentVersion::__cordl_internal_get__majorVersion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____majorVersion;
}
constexpr void GlobalNamespace::SonyContentVersion::__cordl_internal_set__majorVersion(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____majorVersion = value;
}
constexpr uint32_t& GlobalNamespace::SonyContentVersion::__cordl_internal_get__minorVersion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____minorVersion;
}
constexpr uint32_t const& GlobalNamespace::SonyContentVersion::__cordl_internal_get__minorVersion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____minorVersion;
}
constexpr void GlobalNamespace::SonyContentVersion::__cordl_internal_set__minorVersion(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____minorVersion = value;
}
constexpr uint32_t& GlobalNamespace::SonyContentVersion::__cordl_internal_get__revision() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____revision;
}
constexpr uint32_t const& GlobalNamespace::SonyContentVersion::__cordl_internal_get__revision() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____revision;
}
constexpr void GlobalNamespace::SonyContentVersion::__cordl_internal_set__revision(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____revision = value;
}
inline uint32_t GlobalNamespace::SonyContentVersion::get_majorVersion() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyContentVersion*>::get(), "get_majorVersion",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method);
}
inline uint32_t GlobalNamespace::SonyContentVersion::get_minorVersion() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyContentVersion*>::get(), "get_minorVersion",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method);
}
inline uint32_t GlobalNamespace::SonyContentVersion::get_revision() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyContentVersion*>::get(), "get_revision",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::SonyContentVersion::_ctor(uint32_t majorVersion, uint32_t minorVersion, uint32_t revision) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyContentVersion*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, majorVersion, minorVersion, revision);
}
inline ::GlobalNamespace::SonyContentVersion* GlobalNamespace::SonyContentVersion::GetFromString(::StringW versionString) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyContentVersion*>::get(), "GetFromString", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SonyContentVersion*, false>(nullptr, ___internal_method, versionString);
}
inline bool GlobalNamespace::SonyContentVersion::IsVersionFormatValid(::StringW versionString) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyContentVersion*>::get(), "IsVersionFormatValid",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, versionString);
}
inline ::StringW GlobalNamespace::SonyContentVersion::Get(::GlobalNamespace::SonyContentVersion_VersionFormat versionFormat) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyContentVersion*>::get(), "Get", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SonyContentVersion_VersionFormat>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, versionFormat);
}
inline ::StringW GlobalNamespace::SonyContentVersion::ToString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyContentVersion*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::SonyContentVersion::op_Implicit___StringW(::GlobalNamespace::SonyContentVersion* version) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyContentVersion*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SonyContentVersion*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, version);
}
inline void GlobalNamespace::SonyContentVersion::CopyValueFrom(::GlobalNamespace::SonyContentVersion* other) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyContentVersion*>::get(), "CopyValueFrom", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SonyContentVersion*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, other);
}
inline void GlobalNamespace::SonyContentVersion::IncreaseMinorVersion() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyContentVersion*>::get(),
                                                                             "IncreaseMinorVersion", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::SonyContentVersion* GlobalNamespace::SonyContentVersion::New_ctor(uint32_t majorVersion, uint32_t minorVersion, uint32_t revision) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::SonyContentVersion*>(majorVersion, minorVersion, revision));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SonyContentVersion::SonyContentVersion() {}
