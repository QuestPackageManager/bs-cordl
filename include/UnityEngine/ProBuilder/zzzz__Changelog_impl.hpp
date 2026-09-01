#pragma once
// IWYU pragma private; include "UnityEngine\ProBuilder\Changelog.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ProBuilder/zzzz__Changelog_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/ObjectModel/zzzz__ReadOnlyCollection_1_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__ChangelogEntry_def.hpp"
//  Writing Method size for method: ::UnityEngine::ProBuilder::Changelog.get_entries
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::ProBuilder::ChangelogEntry*>* (
    ::UnityEngine::ProBuilder::Changelog::*)()>(&::UnityEngine::ProBuilder::Changelog::get_entries)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x66b80bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Changelog*>(), { "get_entries", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Changelog._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::Changelog::*)(::StringW)>(&::UnityEngine::ProBuilder::Changelog::_ctor)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x66b8134;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Changelog*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Changelog.CreateEntry
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ProBuilder::ChangelogEntry* (::UnityEngine::ProBuilder::Changelog::*)(::StringW, ::StringW)>(
    &::UnityEngine::ProBuilder::Changelog::CreateEntry)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x66b8424;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Changelog*>(), { "CreateEntry", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::ChangelogEntry*>*& UnityEngine::ProBuilder::Changelog::__cordl_internal_get_m_Entries() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Entries;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::ChangelogEntry*>* const& UnityEngine::ProBuilder::Changelog::__cordl_internal_get_m_Entries() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Entries;
}
constexpr void UnityEngine::ProBuilder::Changelog::__cordl_internal_set_m_Entries(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::ChangelogEntry*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Entries = value;
}
inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::ProBuilder::ChangelogEntry*>* UnityEngine::ProBuilder::Changelog::get_entries() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Changelog*>(), { "get_entries", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::ProBuilder::ChangelogEntry*>*>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::Changelog::_ctor(::StringW log) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Changelog*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, log);
}
inline ::UnityEngine::ProBuilder::ChangelogEntry* UnityEngine::ProBuilder::Changelog::CreateEntry(::StringW version, ::StringW contents) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Changelog*>(), { "CreateEntry", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::ChangelogEntry*>(this, ___internal_method, version, contents);
}
inline ::UnityEngine::ProBuilder::Changelog* UnityEngine::ProBuilder::Changelog::New_ctor(::StringW log) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ProBuilder::Changelog*>(log));
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::Changelog::Changelog() {}
