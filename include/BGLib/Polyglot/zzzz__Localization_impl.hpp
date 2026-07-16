#pragma once
// IWYU pragma private; include "BGLib/Polyglot/Localization.hpp"
#include "BGLib/Polyglot/zzzz__LocalizationLanguage_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "BGLib/Polyglot/zzzz__Localization_def.hpp"
#include "BGLib/Polyglot/zzzz__LocalizationLanguage_def.hpp"
#include "BGLib/Polyglot/zzzz__LocalizationModel_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::BGLib::Polyglot::Localization.NoDomainReloadInit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::BGLib::Polyglot::Localization::NoDomainReloadInit)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x331a598;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::Localization*>(), { "NoDomainReloadInit", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::Polyglot::Localization.get_Instance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BGLib::Polyglot::LocalizationModel* (*)()>(&::BGLib::Polyglot::Localization::get_Instance)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x33197c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::Localization*>(), { "get_Instance", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::Polyglot::Localization.Get
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::BGLib::Polyglot::Localization::Get)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x331a5e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::Localization*>(), { "Get", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::Polyglot::Localization.SetSingletonInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::BGLib::Polyglot::LocalizationModel*)>(&::BGLib::Polyglot::Localization::SetSingletonInstance)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x331a6e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::Localization*>(), { "SetSingletonInstance", {}, { ::i2c::type_of<::BGLib::Polyglot::LocalizationModel*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::Polyglot::Localization.get_SupportedLanguages
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::BGLib::Polyglot::LocalizationLanguage>* (::BGLib::Polyglot::Localization::*)()>(
    &::BGLib::Polyglot::Localization::get_SupportedLanguages)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x331a77c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::Localization*>(), { "get_SupportedLanguages", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::Polyglot::Localization.get_FallbackLanguage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BGLib::Polyglot::LocalizationLanguage (::BGLib::Polyglot::Localization::*)()>(&::BGLib::Polyglot::Localization::get_FallbackLanguage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x331a784;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::Localization*>(), { "get_FallbackLanguage", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::Polyglot::Localization.get_selectedLanguageIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::BGLib::Polyglot::Localization::*)()>(&::BGLib::Polyglot::Localization::get_selectedLanguageIndex)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x331a78c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::Localization*>(), { "get_selectedLanguageIndex", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::Polyglot::Localization.IsLanguageSupported
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::BGLib::Polyglot::Localization::*)(::BGLib::Polyglot::LocalizationLanguage)>(&::BGLib::Polyglot::Localization::IsLanguageSupported)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x331a870;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::Localization*>(), { "IsLanguageSupported", {}, { ::i2c::type_of<::BGLib::Polyglot::LocalizationLanguage>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::Polyglot::Localization.HasNoSupportedLanguage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::BGLib::Polyglot::Localization::*)()>(&::BGLib::Polyglot::Localization::HasNoSupportedLanguage)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x331a818;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::Localization*>(), { "HasNoSupportedLanguage", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::Polyglot::Localization._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::Polyglot::Localization::*)()>(&::BGLib::Polyglot::Localization::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x331a8f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::Localization*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::BGLib::Polyglot::LocalizationLanguage>*& BGLib::Polyglot::Localization::__cordl_internal_get_supportedLanguages() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___supportedLanguages;
}
constexpr ::System::Collections::Generic::List_1<::BGLib::Polyglot::LocalizationLanguage>* const& BGLib::Polyglot::Localization::__cordl_internal_get_supportedLanguages() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___supportedLanguages;
}
constexpr void BGLib::Polyglot::Localization::__cordl_internal_set_supportedLanguages(::System::Collections::Generic::List_1<::BGLib::Polyglot::LocalizationLanguage>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___supportedLanguages = value;
}
constexpr ::BGLib::Polyglot::LocalizationLanguage& BGLib::Polyglot::Localization::__cordl_internal_get_selectedLanguage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___selectedLanguage;
}
constexpr ::BGLib::Polyglot::LocalizationLanguage const& BGLib::Polyglot::Localization::__cordl_internal_get_selectedLanguage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___selectedLanguage;
}
constexpr void BGLib::Polyglot::Localization::__cordl_internal_set_selectedLanguage(::BGLib::Polyglot::LocalizationLanguage value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___selectedLanguage = value;
}
constexpr ::BGLib::Polyglot::LocalizationLanguage& BGLib::Polyglot::Localization::__cordl_internal_get_fallbackLanguage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fallbackLanguage;
}
constexpr ::BGLib::Polyglot::LocalizationLanguage const& BGLib::Polyglot::Localization::__cordl_internal_get_fallbackLanguage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fallbackLanguage;
}
constexpr void BGLib::Polyglot::Localization::__cordl_internal_set_fallbackLanguage(::BGLib::Polyglot::LocalizationLanguage value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___fallbackLanguage = value;
}
inline void BGLib::Polyglot::Localization::setStaticF__instance(::BGLib::Polyglot::LocalizationModel* value) {
  ::cordl_internals::setStaticField<::BGLib::Polyglot::LocalizationModel*, "_instance", ::BGLib::Polyglot::Localization*>(std::forward<::BGLib::Polyglot::LocalizationModel*>(value));
}
inline ::BGLib::Polyglot::LocalizationModel* BGLib::Polyglot::Localization::getStaticF__instance() {
  return ::cordl_internals::getStaticField<::BGLib::Polyglot::LocalizationModel*, "_instance", ::BGLib::Polyglot::Localization*>();
}
inline void BGLib::Polyglot::Localization::NoDomainReloadInit() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::Localization*>(), { "NoDomainReloadInit", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::BGLib::Polyglot::LocalizationModel* BGLib::Polyglot::Localization::get_Instance() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::Localization*>(), { "get_Instance", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::BGLib::Polyglot::LocalizationModel*>(nullptr, ___internal_method);
}
inline ::StringW BGLib::Polyglot::Localization::Get(::StringW key) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::Localization*>(), { "Get", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, key);
}
inline void BGLib::Polyglot::Localization::SetSingletonInstance(::BGLib::Polyglot::LocalizationModel* model) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::Localization*>(), { "SetSingletonInstance", {}, { ::i2c::type_of<::BGLib::Polyglot::LocalizationModel*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, model);
}
inline ::System::Collections::Generic::IReadOnlyList_1<::BGLib::Polyglot::LocalizationLanguage>* BGLib::Polyglot::Localization::get_SupportedLanguages() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::Localization*>(), { "get_SupportedLanguages", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::BGLib::Polyglot::LocalizationLanguage>*>(this, ___internal_method);
}
inline ::BGLib::Polyglot::LocalizationLanguage BGLib::Polyglot::Localization::get_FallbackLanguage() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::Localization*>(), { "get_FallbackLanguage", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::BGLib::Polyglot::LocalizationLanguage>(this, ___internal_method);
}
inline int32_t BGLib::Polyglot::Localization::get_selectedLanguageIndex() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::Localization*>(), { "get_selectedLanguageIndex", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool BGLib::Polyglot::Localization::IsLanguageSupported(::BGLib::Polyglot::LocalizationLanguage language) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::Localization*>(), { "IsLanguageSupported", {}, { ::i2c::type_of<::BGLib::Polyglot::LocalizationLanguage>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, language);
}
inline bool BGLib::Polyglot::Localization::HasNoSupportedLanguage() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::Localization*>(), { "HasNoSupportedLanguage", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void BGLib::Polyglot::Localization::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::Localization*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BGLib::Polyglot::Localization* BGLib::Polyglot::Localization::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BGLib::Polyglot::Localization*>());
}
// Ctor Parameters []
constexpr ::BGLib::Polyglot::Localization::Localization() {}
