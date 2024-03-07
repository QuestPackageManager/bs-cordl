#pragma once
#include "BGLib/Polyglot/zzzz__Language_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "BGLib/Polyglot/zzzz__Localization_def.hpp"
#include "BGLib/Polyglot/zzzz__LanguageDirection_def.hpp"
#include "BGLib/Polyglot/zzzz__Language_def.hpp"
#include "BGLib/Polyglot/zzzz__LocalizationModel_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__SystemLanguage_def.hpp"
//  Writing Method size for method: ::BGLib::Polyglot::Localization.NoDomainReloadInit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::BGLib::Polyglot::Localization::NoDomainReloadInit)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xeb2140;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::Localization*>::get(), "NoDomainReloadInit",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::Polyglot::Localization.get_Instance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BGLib::Polyglot::LocalizationModel* (*)()>(&::BGLib::Polyglot::Localization::get_Instance)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xeb1d1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::Localization*>::get(), "get_Instance",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::Polyglot::Localization.SetSingletonInstance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::BGLib::Polyglot::LocalizationModel*)>(&::BGLib::Polyglot::Localization::SetSingletonInstance)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xeb2188;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::Localization*>::get(), "SetSingletonInstance", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGLib::Polyglot::LocalizationModel*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::Polyglot::Localization.get_SupportedLanguages
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::BGLib::Polyglot::Language>* (::BGLib::Polyglot::Localization::*)()>(
    &::BGLib::Polyglot::Localization::get_SupportedLanguages)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xeb2224;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::Localization*>::get(),
                                                                               "get_SupportedLanguages", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::Polyglot::Localization.get_FallbackLanguage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BGLib::Polyglot::Language (::BGLib::Polyglot::Localization::*)()>(
    &::BGLib::Polyglot::Localization::get_FallbackLanguage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xeb222c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::Localization*>::get(), "get_FallbackLanguage",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::Polyglot::Localization.GetLanguageDirection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BGLib::Polyglot::LanguageDirection (*)(::BGLib::Polyglot::Language)>(
    &::BGLib::Polyglot::Localization::GetLanguageDirection)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xeb2234;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::Localization*>::get(), "GetLanguageDirection", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGLib::Polyglot::Language>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::Polyglot::Localization.get_selectedLanguageIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::BGLib::Polyglot::Localization::*)()>(&::BGLib::Polyglot::Localization::get_selectedLanguageIndex)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xeb2250;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::Localization*>::get(),
                                                                               "get_selectedLanguageIndex", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::Polyglot::Localization.IsLanguageSupported
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::BGLib::Polyglot::Localization::*)(::BGLib::Polyglot::Language)>(
    &::BGLib::Polyglot::Localization::IsLanguageSupported)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xeb2310;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::Localization*>::get(), "IsLanguageSupported", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGLib::Polyglot::Language>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::Polyglot::Localization.HasNoSupportedLanguage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::BGLib::Polyglot::Localization::*)()>(&::BGLib::Polyglot::Localization::HasNoSupportedLanguage)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xeb22c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::Localization*>::get(),
                                                                               "HasNoSupportedLanguage", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::Polyglot::Localization.get_EnglishLanguageName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::BGLib::Polyglot::Localization::*)()>(&::BGLib::Polyglot::Localization::get_EnglishLanguageName)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xeb2384;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::Localization*>::get(),
                                                                               "get_EnglishLanguageName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::Polyglot::Localization.get_LocalizedLanguageName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::BGLib::Polyglot::Localization::*)()>(&::BGLib::Polyglot::Localization::get_LocalizedLanguageName)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xeb23e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::Localization*>::get(),
                                                                               "get_LocalizedLanguageName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::Polyglot::Localization.ConvertSystemLanguage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BGLib::Polyglot::Language (*)(::UnityEngine::SystemLanguage)>(
    &::BGLib::Polyglot::Localization::ConvertSystemLanguage)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xeb2424;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::Localization*>::get(), "ConvertSystemLanguage", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SystemLanguage>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::Polyglot::Localization.Get
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&::BGLib::Polyglot::Localization::Get)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xeb23c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::Localization*>::get(), "Get", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::Polyglot::Localization.GetKeys
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::StringW>* (*)()>(&::BGLib::Polyglot::Localization::GetKeys)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xeb25c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::Localization*>::get(), "GetKeys",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::Polyglot::Localization._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::Polyglot::Localization::*)()>(&::BGLib::Polyglot::Localization::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xeb26a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::Localization*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::BGLib::Polyglot::Language>*& BGLib::Polyglot::Localization::__cordl_internal_get_supportedLanguages() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___supportedLanguages;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::BGLib::Polyglot::Language>*> const&
BGLib::Polyglot::Localization::__cordl_internal_get_supportedLanguages() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___supportedLanguages;
}
constexpr void BGLib::Polyglot::Localization::__cordl_internal_set_supportedLanguages(::System::Collections::Generic::List_1<::BGLib::Polyglot::Language>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___supportedLanguages)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::BGLib::Polyglot::Language& BGLib::Polyglot::Localization::__cordl_internal_get_selectedLanguage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___selectedLanguage;
}
constexpr ::BGLib::Polyglot::Language const& BGLib::Polyglot::Localization::__cordl_internal_get_selectedLanguage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___selectedLanguage;
}
constexpr void BGLib::Polyglot::Localization::__cordl_internal_set_selectedLanguage(::BGLib::Polyglot::Language value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___selectedLanguage = value;
}
constexpr ::BGLib::Polyglot::Language& BGLib::Polyglot::Localization::__cordl_internal_get_fallbackLanguage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fallbackLanguage;
}
constexpr ::BGLib::Polyglot::Language const& BGLib::Polyglot::Localization::__cordl_internal_get_fallbackLanguage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fallbackLanguage;
}
constexpr void BGLib::Polyglot::Localization::__cordl_internal_set_fallbackLanguage(::BGLib::Polyglot::Language value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___fallbackLanguage = value;
}
inline void BGLib::Polyglot::Localization::setStaticF__instance(::BGLib::Polyglot::LocalizationModel* value) {
  ::cordl_internals::setStaticField<::BGLib::Polyglot::LocalizationModel*, "_instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::Localization*>::get>(
      std::forward<::BGLib::Polyglot::LocalizationModel*>(value));
}
inline ::BGLib::Polyglot::LocalizationModel* BGLib::Polyglot::Localization::getStaticF__instance() {
  return ::cordl_internals::getStaticField<::BGLib::Polyglot::LocalizationModel*, "_instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::Localization*>::get>();
}
inline void BGLib::Polyglot::Localization::NoDomainReloadInit() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::Localization*>::get(), "NoDomainReloadInit",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline ::BGLib::Polyglot::LocalizationModel* BGLib::Polyglot::Localization::get_Instance() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::Localization*>::get(), "get_Instance",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::BGLib::Polyglot::LocalizationModel*, false>(nullptr, ___internal_method);
}
inline void BGLib::Polyglot::Localization::SetSingletonInstance(::BGLib::Polyglot::LocalizationModel* model) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::Localization*>::get(), "SetSingletonInstance", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGLib::Polyglot::LocalizationModel*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, model);
}
inline ::System::Collections::Generic::IReadOnlyList_1<::BGLib::Polyglot::Language>* BGLib::Polyglot::Localization::get_SupportedLanguages() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::Localization*>::get(), "get_SupportedLanguages",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::BGLib::Polyglot::Language>*, false>(this, ___internal_method);
}
inline ::BGLib::Polyglot::Language BGLib::Polyglot::Localization::get_FallbackLanguage() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::Localization*>::get(), "get_FallbackLanguage",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::BGLib::Polyglot::Language, false>(this, ___internal_method);
}
inline ::BGLib::Polyglot::LanguageDirection BGLib::Polyglot::Localization::GetLanguageDirection(::BGLib::Polyglot::Language language) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::Localization*>::get(), "GetLanguageDirection", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGLib::Polyglot::Language>::get() })));
  return ::cordl_internals::RunMethodRethrow<::BGLib::Polyglot::LanguageDirection, false>(nullptr, ___internal_method, language);
}
inline int32_t BGLib::Polyglot::Localization::get_selectedLanguageIndex() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::Localization*>::get(),
                                                                             "get_selectedLanguageIndex", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool BGLib::Polyglot::Localization::IsLanguageSupported(::BGLib::Polyglot::Language language) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::Localization*>::get(), "IsLanguageSupported", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGLib::Polyglot::Language>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, language);
}
inline bool BGLib::Polyglot::Localization::HasNoSupportedLanguage() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::Localization*>::get(), "HasNoSupportedLanguage",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::StringW BGLib::Polyglot::Localization::get_EnglishLanguageName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::Localization*>::get(), "get_EnglishLanguageName",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW BGLib::Polyglot::Localization::get_LocalizedLanguageName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::Localization*>::get(),
                                                                             "get_LocalizedLanguageName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::BGLib::Polyglot::Language BGLib::Polyglot::Localization::ConvertSystemLanguage(::UnityEngine::SystemLanguage selected) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::Localization*>::get(), "ConvertSystemLanguage", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SystemLanguage>::get() })));
  return ::cordl_internals::RunMethodRethrow<::BGLib::Polyglot::Language, false>(nullptr, ___internal_method, selected);
}
inline ::StringW BGLib::Polyglot::Localization::Get(::StringW key) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::Localization*>::get(), "Get", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, key);
}
inline ::System::Collections::Generic::List_1<::StringW>* BGLib::Polyglot::Localization::GetKeys() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::Localization*>::get(), "GetKeys",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::StringW>*, false>(nullptr, ___internal_method);
}
inline ::BGLib::Polyglot::Localization* BGLib::Polyglot::Localization::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BGLib::Polyglot::Localization*>());
}
inline void BGLib::Polyglot::Localization::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::Localization*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::BGLib::Polyglot::Localization::Localization() {}
