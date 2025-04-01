#pragma once
// IWYU pragma private; include "GlobalNamespace/SonyVersion.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__SonyVersion_def.hpp"
#include "GlobalNamespace/zzzz__SonyVersion_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::SonyVersion_VersionFormat::SonyVersion_VersionFormat(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SonyVersion_VersionFormat::SonyVersion_VersionFormat() {}
constexpr ::GlobalNamespace::SonyVersion_VersionFormat GlobalNamespace::SonyVersion_VersionFormat::FullLong{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::SonyVersion_VersionFormat GlobalNamespace::SonyVersion_VersionFormat::Long{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::SonyVersion_VersionFormat GlobalNamespace::SonyVersion_VersionFormat::FullShort{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::SonyVersion_VersionFormat GlobalNamespace::SonyVersion_VersionFormat::Short{ static_cast<int32_t>(0x3) };
//  Writing Method size for method: ::GlobalNamespace::SonyVersion.get_majorVersion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::GlobalNamespace::SonyVersion::*)()>(&::GlobalNamespace::SonyVersion::get_majorVersion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26ed568;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyVersion*>::get(), "get_majorVersion",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SonyVersion.get_minorVersion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::GlobalNamespace::SonyVersion::*)()>(&::GlobalNamespace::SonyVersion::get_minorVersion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26ed570;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyVersion*>::get(), "get_minorVersion",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SonyVersion._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SonyVersion::*)(uint32_t, uint32_t)>(&::GlobalNamespace::SonyVersion::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x26ed578;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyVersion*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SonyVersion.GetFromString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::SonyVersion* (*)(::StringW)>(&::GlobalNamespace::SonyVersion::GetFromString)> {
  constexpr static std::size_t size = 0x550;
  constexpr static std::size_t addrs = 0x26ed5a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyVersion*>::get(), "GetFromString", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SonyVersion.IsVersionFormatValid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&::GlobalNamespace::SonyVersion::IsVersionFormatValid)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x26edaf4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyVersion*>::get(), "IsVersionFormatValid", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SonyVersion.Get
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::SonyVersion::*)(::GlobalNamespace::SonyVersion_VersionFormat)>(
    &::GlobalNamespace::SonyVersion::Get)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x26edb84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyVersion*>::get(), "Get", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SonyVersion_VersionFormat>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SonyVersion.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::SonyVersion::*)()>(&::GlobalNamespace::SonyVersion::ToString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26eddac;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyVersion*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyVersion*>::get(), 3));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SonyVersion.op_Implicit___StringW
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::GlobalNamespace::SonyVersion*)>(&::GlobalNamespace::SonyVersion::op_Implicit___StringW)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x26eddb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyVersion*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SonyVersion*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SonyVersion.CopyValueFrom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SonyVersion::*)(::GlobalNamespace::SonyVersion*)>(
    &::GlobalNamespace::SonyVersion::CopyValueFrom)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x26eddc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyVersion*>::get(), "CopyValueFrom", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SonyVersion*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SonyVersion.IncreaseVersion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SonyVersion::*)()>(&::GlobalNamespace::SonyVersion::IncreaseVersion)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x26edde4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyVersion*>::get(), "IncreaseVersion",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr uint32_t& GlobalNamespace::SonyVersion::__cordl_internal_get__majorVersion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____majorVersion;
}
constexpr uint32_t const& GlobalNamespace::SonyVersion::__cordl_internal_get__majorVersion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____majorVersion;
}
constexpr void GlobalNamespace::SonyVersion::__cordl_internal_set__majorVersion(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____majorVersion = value;
}
constexpr uint32_t& GlobalNamespace::SonyVersion::__cordl_internal_get__minorVersion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____minorVersion;
}
constexpr uint32_t const& GlobalNamespace::SonyVersion::__cordl_internal_get__minorVersion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____minorVersion;
}
constexpr void GlobalNamespace::SonyVersion::__cordl_internal_set__minorVersion(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____minorVersion = value;
}
inline uint32_t GlobalNamespace::SonyVersion::get_majorVersion() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyVersion*>::get(), "get_majorVersion",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method);
}
inline uint32_t GlobalNamespace::SonyVersion::get_minorVersion() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyVersion*>::get(), "get_minorVersion",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::SonyVersion::_ctor(uint32_t majorVersion, uint32_t minorVersion) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyVersion*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, majorVersion, minorVersion);
}
inline ::GlobalNamespace::SonyVersion* GlobalNamespace::SonyVersion::GetFromString(::StringW versionString) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyVersion*>::get(), "GetFromString", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SonyVersion*, false>(nullptr, ___internal_method, versionString);
}
inline bool GlobalNamespace::SonyVersion::IsVersionFormatValid(::StringW versionString) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyVersion*>::get(), "IsVersionFormatValid", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, versionString);
}
inline ::StringW GlobalNamespace::SonyVersion::Get(::GlobalNamespace::SonyVersion_VersionFormat format) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyVersion*>::get(), "Get", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SonyVersion_VersionFormat>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, format);
}
inline ::StringW GlobalNamespace::SonyVersion::ToString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyVersion*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::SonyVersion::op_Implicit___StringW(::GlobalNamespace::SonyVersion* version) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyVersion*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SonyVersion*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, version);
}
inline void GlobalNamespace::SonyVersion::CopyValueFrom(::GlobalNamespace::SonyVersion* other) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyVersion*>::get(), "CopyValueFrom", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SonyVersion*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, other);
}
inline void GlobalNamespace::SonyVersion::IncreaseVersion() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyVersion*>::get(), "IncreaseVersion",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::SonyVersion* GlobalNamespace::SonyVersion::New_ctor(uint32_t majorVersion, uint32_t minorVersion) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::SonyVersion*>(majorVersion, minorVersion));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SonyVersion::SonyVersion() {}
