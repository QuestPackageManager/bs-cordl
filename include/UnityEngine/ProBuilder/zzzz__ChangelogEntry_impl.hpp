#pragma once
// IWYU pragma private; include "UnityEngine\ProBuilder\ChangelogEntry.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ProBuilder/zzzz__ChangelogEntry_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__SemVer_def.hpp"
//  Writing Method size for method: ::UnityEngine::ProBuilder::ChangelogEntry.get_versionInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ProBuilder::SemVer* (::UnityEngine::ProBuilder::ChangelogEntry::*)()>(
    &::UnityEngine::ProBuilder::ChangelogEntry::get_versionInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66b803c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ChangelogEntry*>(), { "get_versionInfo", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ChangelogEntry.get_releaseNotes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::ProBuilder::ChangelogEntry::*)()>(&::UnityEngine::ProBuilder::ChangelogEntry::get_releaseNotes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66b8044;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ChangelogEntry*>(), { "get_releaseNotes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ChangelogEntry._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::ChangelogEntry::*)(::UnityEngine::ProBuilder::SemVer*, ::StringW)>(
    &::UnityEngine::ProBuilder::ChangelogEntry::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66b804c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ChangelogEntry*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::SemVer*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ChangelogEntry.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::ProBuilder::ChangelogEntry::*)()>(&::UnityEngine::ProBuilder::ChangelogEntry::ToString)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x66b8054;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ChangelogEntry*>(), { ::i2c::class_of<::UnityEngine::ProBuilder::ChangelogEntry*>(), 3 }));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::ProBuilder::SemVer*& UnityEngine::ProBuilder::ChangelogEntry::__cordl_internal_get_m_VersionInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VersionInfo;
}
constexpr ::UnityEngine::ProBuilder::SemVer* const& UnityEngine::ProBuilder::ChangelogEntry::__cordl_internal_get_m_VersionInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VersionInfo;
}
constexpr void UnityEngine::ProBuilder::ChangelogEntry::__cordl_internal_set_m_VersionInfo(::UnityEngine::ProBuilder::SemVer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_VersionInfo = value;
}
constexpr ::StringW& UnityEngine::ProBuilder::ChangelogEntry::__cordl_internal_get_m_ReleaseNotes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ReleaseNotes;
}
constexpr ::StringW const& UnityEngine::ProBuilder::ChangelogEntry::__cordl_internal_get_m_ReleaseNotes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ReleaseNotes;
}
constexpr void UnityEngine::ProBuilder::ChangelogEntry::__cordl_internal_set_m_ReleaseNotes(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ReleaseNotes = value;
}
inline ::UnityEngine::ProBuilder::SemVer* UnityEngine::ProBuilder::ChangelogEntry::get_versionInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ChangelogEntry*>(), { "get_versionInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::SemVer*>(this, ___internal_method);
}
inline ::StringW UnityEngine::ProBuilder::ChangelogEntry::get_releaseNotes() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ChangelogEntry*>(), { "get_releaseNotes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::ChangelogEntry::_ctor(::UnityEngine::ProBuilder::SemVer* version, ::StringW releaseNotes) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ChangelogEntry*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::SemVer*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, version, releaseNotes);
}
inline ::StringW UnityEngine::ProBuilder::ChangelogEntry::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ProBuilder::ChangelogEntry*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::UnityEngine::ProBuilder::ChangelogEntry* UnityEngine::ProBuilder::ChangelogEntry::New_ctor(::UnityEngine::ProBuilder::SemVer* version, ::StringW releaseNotes) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ProBuilder::ChangelogEntry*>(version, releaseNotes));
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::ChangelogEntry::ChangelogEntry() {}
