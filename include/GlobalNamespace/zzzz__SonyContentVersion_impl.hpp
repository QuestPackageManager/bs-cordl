#pragma once
// IWYU pragma private; include "GlobalNamespace/SonyContentVersion.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__SonyContentVersion_def.hpp"
#include "GlobalNamespace/zzzz__SonyContentVersion_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__SonyContentVersion__VersionFormat::__SonyContentVersion__VersionFormat(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__SonyContentVersion__VersionFormat::__SonyContentVersion__VersionFormat() {}
constexpr ::GlobalNamespace::__SonyContentVersion__VersionFormat GlobalNamespace::__SonyContentVersion__VersionFormat::Long{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__SonyContentVersion__VersionFormat GlobalNamespace::__SonyContentVersion__VersionFormat::Short{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::GlobalNamespace::SonyContentVersion.get_majorVersion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::GlobalNamespace::SonyContentVersion::*)()>(&::GlobalNamespace::SonyContentVersion::get_majorVersion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26a6a94;

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
  constexpr static std::size_t addrs = 0x26a6a9c;

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
  constexpr static std::size_t addrs = 0x26a6aa4;

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
  constexpr static std::size_t addrs = 0x26a6aac;

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
  constexpr static std::size_t addrs = 0x26a6ae8;

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
  constexpr static std::size_t addrs = 0x26a6de8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyContentVersion*>::get(), "IsVersionFormatValid",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SonyContentVersion.Get
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::SonyContentVersion::*)(::GlobalNamespace::__SonyContentVersion__VersionFormat)>(
    &::GlobalNamespace::SonyContentVersion::Get)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x26a6e78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyContentVersion*>::get(), "Get", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__SonyContentVersion__VersionFormat>::get() })));
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
inline ::GlobalNamespace::SonyContentVersion* GlobalNamespace::SonyContentVersion::New_ctor(uint32_t majorVersion, uint32_t minorVersion, uint32_t revision) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::SonyContentVersion*>(majorVersion, minorVersion, revision));
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
inline ::StringW GlobalNamespace::SonyContentVersion::Get(::GlobalNamespace::__SonyContentVersion__VersionFormat versionFormat) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyContentVersion*>::get(), "Get", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__SonyContentVersion__VersionFormat>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, versionFormat);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SonyContentVersion::SonyContentVersion() {}
