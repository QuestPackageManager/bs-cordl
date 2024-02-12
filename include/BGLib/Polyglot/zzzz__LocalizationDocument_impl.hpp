#pragma once
#include "BGLib/Polyglot/zzzz__GoogleDriveDownloadFormat_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BGLib/Polyglot/zzzz__LocalizationDocument_def.hpp"
#include "BGLib/Polyglot/zzzz__GoogleDriveDownloadFormat_def.hpp"
#include "UnityEngine/zzzz__TextAsset_def.hpp"
//  Writing Method size for method: ::BGLib::Polyglot::LocalizationDocument.get_TextAsset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::TextAsset> (::BGLib::Polyglot::LocalizationDocument::*)()>(
    &::BGLib::Polyglot::LocalizationDocument::get_TextAsset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe4cad8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::LocalizationDocument*>::get(), "get_TextAsset",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::Polyglot::LocalizationDocument.get_DocsId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::BGLib::Polyglot::LocalizationDocument::*)()>(&::BGLib::Polyglot::LocalizationDocument::get_DocsId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe4cae0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::LocalizationDocument*>::get(), "get_DocsId",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::Polyglot::LocalizationDocument.get_SheetId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::BGLib::Polyglot::LocalizationDocument::*)()>(&::BGLib::Polyglot::LocalizationDocument::get_SheetId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe4cae8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::LocalizationDocument*>::get(), "get_SheetId",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::Polyglot::LocalizationDocument.get_Format
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BGLib::Polyglot::GoogleDriveDownloadFormat (::BGLib::Polyglot::LocalizationDocument::*)()>(
    &::BGLib::Polyglot::LocalizationDocument::get_Format)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe4caf0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::LocalizationDocument*>::get(), "get_Format",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::Polyglot::LocalizationDocument._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::Polyglot::LocalizationDocument::*)()>(&::BGLib::Polyglot::LocalizationDocument::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xe4caf8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::LocalizationDocument*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& BGLib::Polyglot::LocalizationDocument::__cordl_internal_get_docsId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___docsId;
}
constexpr ::StringW const& BGLib::Polyglot::LocalizationDocument::__cordl_internal_get_docsId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___docsId;
}
constexpr void BGLib::Polyglot::LocalizationDocument::__cordl_internal_set_docsId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___docsId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& BGLib::Polyglot::LocalizationDocument::__cordl_internal_get_sheetId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sheetId;
}
constexpr ::StringW const& BGLib::Polyglot::LocalizationDocument::__cordl_internal_get_sheetId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sheetId;
}
constexpr void BGLib::Polyglot::LocalizationDocument::__cordl_internal_set_sheetId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___sheetId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::BGLib::Polyglot::GoogleDriveDownloadFormat& BGLib::Polyglot::LocalizationDocument::__cordl_internal_get_format() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___format;
}
constexpr ::BGLib::Polyglot::GoogleDriveDownloadFormat const& BGLib::Polyglot::LocalizationDocument::__cordl_internal_get_format() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___format;
}
constexpr void BGLib::Polyglot::LocalizationDocument::__cordl_internal_set_format(::BGLib::Polyglot::GoogleDriveDownloadFormat value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___format = value;
}
constexpr ::UnityW<::UnityEngine::TextAsset>& BGLib::Polyglot::LocalizationDocument::__cordl_internal_get_textAsset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___textAsset;
}
constexpr ::UnityW<::UnityEngine::TextAsset> const& BGLib::Polyglot::LocalizationDocument::__cordl_internal_get_textAsset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___textAsset;
}
constexpr void BGLib::Polyglot::LocalizationDocument::__cordl_internal_set_textAsset(::UnityW<::UnityEngine::TextAsset> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___textAsset)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityW<::UnityEngine::TextAsset> BGLib::Polyglot::LocalizationDocument::get_TextAsset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::LocalizationDocument*>::get(), "get_TextAsset",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::TextAsset>, false>(this, ___internal_method);
}
inline ::StringW BGLib::Polyglot::LocalizationDocument::get_DocsId() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::LocalizationDocument*>::get(), "get_DocsId",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW BGLib::Polyglot::LocalizationDocument::get_SheetId() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::LocalizationDocument*>::get(), "get_SheetId",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::BGLib::Polyglot::GoogleDriveDownloadFormat BGLib::Polyglot::LocalizationDocument::get_Format() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::LocalizationDocument*>::get(), "get_Format",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::BGLib::Polyglot::GoogleDriveDownloadFormat, false>(this, ___internal_method);
}
inline ::BGLib::Polyglot::LocalizationDocument* BGLib::Polyglot::LocalizationDocument::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BGLib::Polyglot::LocalizationDocument*>());
}
inline void BGLib::Polyglot::LocalizationDocument::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::LocalizationDocument*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::BGLib::Polyglot::LocalizationDocument::LocalizationDocument() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
