#pragma once
// IWYU pragma private; include "BGLib/Polyglot/LocalizationModel.hpp"
#include "BGLib/Polyglot/zzzz__LocalizationLanguage_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BGLib/Polyglot/zzzz__LocalizationModel_def.hpp"
#include "BGLib/Polyglot/zzzz__ILocalize_def.hpp"
#include "BGLib/Polyglot/zzzz__LanguageDirection_def.hpp"
#include "BGLib/Polyglot/zzzz__LocalizationAsset_def.hpp"
#include "BGLib/Polyglot/zzzz__LocalizationLanguage_def.hpp"
#include "BGLib/Polyglot/zzzz__Localization_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Globalization/zzzz__CultureInfo_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__TextAsset_def.hpp"
//  Writing Method size for method: ::BGLib::Polyglot::LocalizationModel.get_inputFiles
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::BGLib::Polyglot::LocalizationAsset*>* (::BGLib::Polyglot::LocalizationModel::*)()>(
    &::BGLib::Polyglot::LocalizationModel::get_inputFiles)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x331d768;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::LocalizationModel*>(), { "get_inputFiles", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::Polyglot::LocalizationModel.get_SelectedCultureInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Globalization::CultureInfo* (::BGLib::Polyglot::LocalizationModel::*)()>(
    &::BGLib::Polyglot::LocalizationModel::get_SelectedCultureInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x331d770;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::LocalizationModel*>(), { "get_SelectedCultureInfo", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::Polyglot::LocalizationModel.set_SelectedCultureInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::Polyglot::LocalizationModel::*)(::System::Globalization::CultureInfo*)>(
    &::BGLib::Polyglot::LocalizationModel::set_SelectedCultureInfo)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x331d778;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::LocalizationModel*>(), { "set_SelectedCultureInfo", {}, { ::i2c::type_of<::System::Globalization::CultureInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::Polyglot::LocalizationModel.get_SelectedLanguage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BGLib::Polyglot::LocalizationLanguage (::BGLib::Polyglot::LocalizationModel::*)()>(
    &::BGLib::Polyglot::LocalizationModel::get_SelectedLanguage)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3319e40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::LocalizationModel*>(), { "get_SelectedLanguage", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::Polyglot::LocalizationModel.set_SelectedLanguage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::Polyglot::LocalizationModel::*)(::BGLib::Polyglot::LocalizationLanguage)>(
    &::BGLib::Polyglot::LocalizationModel::set_SelectedLanguage)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x331d808;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::LocalizationModel*>(), { "set_SelectedLanguage", {}, { ::i2c::type_of<::BGLib::Polyglot::LocalizationLanguage>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::Polyglot::LocalizationModel.get_fallbackLanguage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BGLib::Polyglot::LocalizationLanguage (::BGLib::Polyglot::LocalizationModel::*)()>(
    &::BGLib::Polyglot::LocalizationModel::get_fallbackLanguage)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x331d740;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::LocalizationModel*>(), { "get_fallbackLanguage", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::Polyglot::LocalizationModel.get_selectedLanguageDirection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BGLib::Polyglot::LanguageDirection (::BGLib::Polyglot::LocalizationModel::*)()>(
    &::BGLib::Polyglot::LocalizationModel::get_selectedLanguageDirection)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x331a120;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::LocalizationModel*>(), { "get_selectedLanguageDirection", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::Polyglot::LocalizationModel.get_supportedLanguages
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::BGLib::Polyglot::LocalizationLanguage>* (::BGLib::Polyglot::LocalizationModel::*)()>(
    &::BGLib::Polyglot::LocalizationModel::get_supportedLanguages)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x331da10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::LocalizationModel*>(), { "get_supportedLanguages", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::Polyglot::LocalizationModel.get_englishLanguageNames
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::StringW>* (::BGLib::Polyglot::LocalizationModel::*)()>(
    &::BGLib::Polyglot::LocalizationModel::get_englishLanguageNames)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x3319a14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::LocalizationModel*>(), { "get_englishLanguageNames", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::Polyglot::LocalizationModel.get_localizedLanguageNames
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::StringW>* (::BGLib::Polyglot::LocalizationModel::*)()>(
    &::BGLib::Polyglot::LocalizationModel::get_localizedLanguageNames)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x331def8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::LocalizationModel*>(), { "get_localizedLanguageNames", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::Polyglot::LocalizationModel.get_selectedLanguageIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::BGLib::Polyglot::LocalizationModel::*)()>(&::BGLib::Polyglot::LocalizationModel::get_selectedLanguageIndex)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3319a70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::LocalizationModel*>(), { "get_selectedLanguageIndex", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::Polyglot::LocalizationModel.add__onChangeLanguage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::Polyglot::LocalizationModel::*)(::System::Action_1<::BGLib::Polyglot::LocalizationModel*>*)>(
    &::BGLib::Polyglot::LocalizationModel::add__onChangeLanguage)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x331df54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::LocalizationModel*>(),
                                                             { "add__onChangeLanguage", {}, { ::i2c::type_of<::System::Action_1<::BGLib::Polyglot::LocalizationModel*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::Polyglot::LocalizationModel.remove__onChangeLanguage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::Polyglot::LocalizationModel::*)(::System::Action_1<::BGLib::Polyglot::LocalizationModel*>*)>(
    &::BGLib::Polyglot::LocalizationModel::remove__onChangeLanguage)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x331e014;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::LocalizationModel*>(),
                                                             { "remove__onChangeLanguage", {}, { ::i2c::type_of<::System::Action_1<::BGLib::Polyglot::LocalizationModel*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::Polyglot::LocalizationModel._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::Polyglot::LocalizationModel::*)(::BGLib::Polyglot::Localization*, ::BGLib::Polyglot::LocalizationLanguage,
                                                                                                      ::System::Collections::Generic::List_1<::BGLib::Polyglot::LocalizationAsset*>*)>(
    &::BGLib::Polyglot::LocalizationModel::_ctor)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x331e0d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::LocalizationModel*>(), { ".ctor",
                                                                                        {},
                                                                                        { ::i2c::type_of<::BGLib::Polyglot::Localization*>(), ::i2c::type_of<::BGLib::Polyglot::LocalizationLanguage>(),
                                                                                          ::i2c::type_of<::System::Collections::Generic::List_1<::BGLib::Polyglot::LocalizationAsset*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::Polyglot::LocalizationModel.SelectLanguage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::Polyglot::LocalizationModel::*)(int32_t)>(&::BGLib::Polyglot::LocalizationModel::SelectLanguage)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x331e238;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::LocalizationModel*>(), { "SelectLanguage", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::Polyglot::LocalizationModel.AddOnLocalizeEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::Polyglot::LocalizationModel::*)(::BGLib::Polyglot::ILocalize*)>(&::BGLib::Polyglot::LocalizationModel::AddOnLocalizeEvent)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x331985c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::LocalizationModel*>(), { "AddOnLocalizeEvent", {}, { ::i2c::type_of<::BGLib::Polyglot::ILocalize*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::Polyglot::LocalizationModel.RemoveOnLocalizeEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::Polyglot::LocalizationModel::*)(::BGLib::Polyglot::ILocalize*)>(&::BGLib::Polyglot::LocalizationModel::RemoveOnLocalizeEvent)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x331e31c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::LocalizationModel*>(), { "RemoveOnLocalizeEvent", {}, { ::i2c::type_of<::BGLib::Polyglot::ILocalize*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::Polyglot::LocalizationModel.GetCultureInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Globalization::CultureInfo* (::BGLib::Polyglot::LocalizationModel::*)(::BGLib::Polyglot::LocalizationLanguage)>(
    &::BGLib::Polyglot::LocalizationModel::GetCultureInfo)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x331d950;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::LocalizationModel*>(), { "GetCultureInfo", {}, { ::i2c::type_of<::BGLib::Polyglot::LocalizationLanguage>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::Polyglot::LocalizationModel.Get
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::BGLib::Polyglot::LocalizationModel::*)(::StringW)>(&::BGLib::Polyglot::LocalizationModel::Get)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x331a5fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::LocalizationModel*>(), { "Get", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::Polyglot::LocalizationModel.GetOrKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::BGLib::Polyglot::LocalizationModel::*)(::StringW)>(&::BGLib::Polyglot::LocalizationModel::GetOrKey)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x331e400;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::LocalizationModel*>(), { "GetOrKey", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::Polyglot::LocalizationModel.TryGet
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::BGLib::Polyglot::LocalizationModel::*)(::StringW, ::BGLib::Polyglot::LocalizationLanguage, ::by_ref<::StringW>)>(
    &::BGLib::Polyglot::LocalizationModel::TryGet)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0x3319e58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::LocalizationModel*>(),
                                                { "TryGet", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::BGLib::Polyglot::LocalizationLanguage>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::Polyglot::LocalizationModel.GetFormatOrKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::BGLib::Polyglot::LocalizationModel::*)(::StringW, ::ArrayW<::System::Object*>)>(
    &::BGLib::Polyglot::LocalizationModel::GetFormatOrKey)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x331e504;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::LocalizationModel*>(),
                                                                                           { "GetFormatOrKey", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::Polyglot::LocalizationModel.KeyExist
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::BGLib::Polyglot::LocalizationModel::*)(::StringW)>(&::BGLib::Polyglot::LocalizationModel::KeyExist)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x331e560;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::LocalizationModel*>(), { "KeyExist", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::Polyglot::LocalizationModel.KeyExist
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::BGLib::Polyglot::LocalizationModel::*)(::StringW, ::BGLib::Polyglot::LocalizationLanguage)>(
    &::BGLib::Polyglot::LocalizationModel::KeyExist)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x331e578;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::LocalizationModel*>(), { "KeyExist", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::BGLib::Polyglot::LocalizationLanguage>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::Polyglot::LocalizationModel.GetLanguages
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::StringW>* (::BGLib::Polyglot::LocalizationModel::*)(::StringW)>(
    &::BGLib::Polyglot::LocalizationModel::GetLanguages)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x331e428;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::LocalizationModel*>(), { "GetLanguages", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::Polyglot::LocalizationModel.GetLanguages
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::StringW>* (
    ::BGLib::Polyglot::LocalizationModel::*)(::StringW, ::System::Collections::Generic::IReadOnlyList_1<::BGLib::Polyglot::LocalizationLanguage>*)>(
    &::BGLib::Polyglot::LocalizationModel::GetLanguages)> {
  constexpr static std::size_t size = 0x4d0;
  constexpr static std::size_t addrs = 0x331da28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::LocalizationModel*>(),
                            { "GetLanguages", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::BGLib::Polyglot::LocalizationLanguage>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::Polyglot::LocalizationModel.GetLanguagesStartsWith
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::StringW>*>* (
    ::BGLib::Polyglot::LocalizationModel::*)(::StringW)>(&::BGLib::Polyglot::LocalizationModel::GetLanguagesStartsWith)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0x331e5ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::LocalizationModel*>(), { "GetLanguagesStartsWith", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::Polyglot::LocalizationModel.GetLanguagesContains
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::StringW>*>* (
    ::BGLib::Polyglot::LocalizationModel::*)(::StringW)>(&::BGLib::Polyglot::LocalizationModel::GetLanguagesContains)> {
  constexpr static std::size_t size = 0x30c;
  constexpr static std::size_t addrs = 0x331e8f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::LocalizationModel*>(), { "GetLanguagesContains", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::Polyglot::LocalizationModel.GetKeys
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::StringW>* (::BGLib::Polyglot::LocalizationModel::*)()>(
    &::BGLib::Polyglot::LocalizationModel::GetKeys)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x331ebfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::LocalizationModel*>(), { "GetKeys", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::Polyglot::LocalizationModel.ApplyLocalizationContent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::Polyglot::LocalizationModel::*)(::UnityEngine::TextAsset*)>(&::BGLib::Polyglot::LocalizationModel::ApplyLocalizationContent)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x331ec70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::LocalizationModel*>(), { "ApplyLocalizationContent", {}, { ::i2c::type_of<::UnityEngine::TextAsset*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::Polyglot::LocalizationModel.AddLocalizedString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::Polyglot::LocalizationModel::*)(::StringW, ::System::Collections::Generic::List_1<::StringW>*)>(
    &::BGLib::Polyglot::LocalizationModel::AddLocalizedString)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x331ec98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::LocalizationModel*>(),
                                                             { "AddLocalizedString", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::Polyglot::LocalizationModel.IsValueValid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::BGLib::Polyglot::LocalizationModel::IsValueValid)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x331e4d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::LocalizationModel*>(), { "IsValueValid", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::BGLib::Polyglot::Localization>& BGLib::Polyglot::LocalizationModel::__cordl_internal_get__localization() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localization;
}
constexpr ::UnityW<::BGLib::Polyglot::Localization> const& BGLib::Polyglot::LocalizationModel::__cordl_internal_get__localization() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localization;
}
constexpr void BGLib::Polyglot::LocalizationModel::__cordl_internal_set__localization(::UnityW<::BGLib::Polyglot::Localization> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____localization = value;
}
constexpr ::System::Collections::Generic::List_1<::BGLib::Polyglot::LocalizationAsset*>*& BGLib::Polyglot::LocalizationModel::__cordl_internal_get__inputFiles() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inputFiles;
}
constexpr ::System::Collections::Generic::List_1<::BGLib::Polyglot::LocalizationAsset*>* const& BGLib::Polyglot::LocalizationModel::__cordl_internal_get__inputFiles() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inputFiles;
}
constexpr void BGLib::Polyglot::LocalizationModel::__cordl_internal_set__inputFiles(::System::Collections::Generic::List_1<::BGLib::Polyglot::LocalizationAsset*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____inputFiles = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::StringW>*>*& BGLib::Polyglot::LocalizationModel::__cordl_internal_get__languageStrings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____languageStrings;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::StringW>*>* const&
BGLib::Polyglot::LocalizationModel::__cordl_internal_get__languageStrings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____languageStrings;
}
constexpr void
BGLib::Polyglot::LocalizationModel::__cordl_internal_set__languageStrings(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::StringW>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____languageStrings = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& BGLib::Polyglot::LocalizationModel::__cordl_internal_get__emptyList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____emptyList;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& BGLib::Polyglot::LocalizationModel::__cordl_internal_get__emptyList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____emptyList;
}
constexpr void BGLib::Polyglot::LocalizationModel::__cordl_internal_set__emptyList(::System::Collections::Generic::List_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____emptyList = value;
}
constexpr ::System::Globalization::CultureInfo*& BGLib::Polyglot::LocalizationModel::__cordl_internal_get__selectedCulture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedCulture;
}
constexpr ::System::Globalization::CultureInfo* const& BGLib::Polyglot::LocalizationModel::__cordl_internal_get__selectedCulture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedCulture;
}
constexpr void BGLib::Polyglot::LocalizationModel::__cordl_internal_set__selectedCulture(::System::Globalization::CultureInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____selectedCulture = value;
}
constexpr ::System::Action_1<::BGLib::Polyglot::LocalizationModel*>*& BGLib::Polyglot::LocalizationModel::__cordl_internal_get__onChangeLanguage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onChangeLanguage;
}
constexpr ::System::Action_1<::BGLib::Polyglot::LocalizationModel*>* const& BGLib::Polyglot::LocalizationModel::__cordl_internal_get__onChangeLanguage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onChangeLanguage;
}
constexpr void BGLib::Polyglot::LocalizationModel::__cordl_internal_set__onChangeLanguage(::System::Action_1<::BGLib::Polyglot::LocalizationModel*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____onChangeLanguage = value;
}
inline ::System::Collections::Generic::List_1<::BGLib::Polyglot::LocalizationAsset*>* BGLib::Polyglot::LocalizationModel::get_inputFiles() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::LocalizationModel*>(), { "get_inputFiles", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::BGLib::Polyglot::LocalizationAsset*>*>(this, ___internal_method);
}
inline ::System::Globalization::CultureInfo* BGLib::Polyglot::LocalizationModel::get_SelectedCultureInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::LocalizationModel*>(), { "get_SelectedCultureInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Globalization::CultureInfo*>(this, ___internal_method);
}
inline void BGLib::Polyglot::LocalizationModel::set_SelectedCultureInfo(::System::Globalization::CultureInfo* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::LocalizationModel*>(), { "set_SelectedCultureInfo", {}, { ::i2c::type_of<::System::Globalization::CultureInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::BGLib::Polyglot::LocalizationLanguage BGLib::Polyglot::LocalizationModel::get_SelectedLanguage() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::LocalizationModel*>(), { "get_SelectedLanguage", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::BGLib::Polyglot::LocalizationLanguage>(this, ___internal_method);
}
inline void BGLib::Polyglot::LocalizationModel::set_SelectedLanguage(::BGLib::Polyglot::LocalizationLanguage value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::LocalizationModel*>(), { "set_SelectedLanguage", {}, { ::i2c::type_of<::BGLib::Polyglot::LocalizationLanguage>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::BGLib::Polyglot::LocalizationLanguage BGLib::Polyglot::LocalizationModel::get_fallbackLanguage() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::LocalizationModel*>(), { "get_fallbackLanguage", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::BGLib::Polyglot::LocalizationLanguage>(this, ___internal_method);
}
inline ::BGLib::Polyglot::LanguageDirection BGLib::Polyglot::LocalizationModel::get_selectedLanguageDirection() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::LocalizationModel*>(), { "get_selectedLanguageDirection", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::BGLib::Polyglot::LanguageDirection>(this, ___internal_method);
}
inline ::System::Collections::Generic::IReadOnlyList_1<::BGLib::Polyglot::LocalizationLanguage>* BGLib::Polyglot::LocalizationModel::get_supportedLanguages() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::LocalizationModel*>(), { "get_supportedLanguages", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::BGLib::Polyglot::LocalizationLanguage>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::StringW>* BGLib::Polyglot::LocalizationModel::get_englishLanguageNames() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::LocalizationModel*>(), { "get_englishLanguageNames", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::StringW>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::StringW>* BGLib::Polyglot::LocalizationModel::get_localizedLanguageNames() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::LocalizationModel*>(), { "get_localizedLanguageNames", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::StringW>*>(this, ___internal_method);
}
inline int32_t BGLib::Polyglot::LocalizationModel::get_selectedLanguageIndex() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::LocalizationModel*>(), { "get_selectedLanguageIndex", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void BGLib::Polyglot::LocalizationModel::add__onChangeLanguage(::System::Action_1<::BGLib::Polyglot::LocalizationModel*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::LocalizationModel*>(),
                                                           { "add__onChangeLanguage", {}, { ::i2c::type_of<::System::Action_1<::BGLib::Polyglot::LocalizationModel*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void BGLib::Polyglot::LocalizationModel::remove__onChangeLanguage(::System::Action_1<::BGLib::Polyglot::LocalizationModel*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::LocalizationModel*>(),
                                                           { "remove__onChangeLanguage", {}, { ::i2c::type_of<::System::Action_1<::BGLib::Polyglot::LocalizationModel*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void BGLib::Polyglot::LocalizationModel::_ctor(::BGLib::Polyglot::Localization* localization, ::BGLib::Polyglot::LocalizationLanguage language,
                                                      ::System::Collections::Generic::List_1<::BGLib::Polyglot::LocalizationAsset*>* inputFiles) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::LocalizationModel*>(), { ".ctor",
                                                                                      {},
                                                                                      { ::i2c::type_of<::BGLib::Polyglot::Localization*>(), ::i2c::type_of<::BGLib::Polyglot::LocalizationLanguage>(),
                                                                                        ::i2c::type_of<::System::Collections::Generic::List_1<::BGLib::Polyglot::LocalizationAsset*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, localization, language, inputFiles);
}
inline void BGLib::Polyglot::LocalizationModel::SelectLanguage(int32_t selected) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::LocalizationModel*>(), { "SelectLanguage", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, selected);
}
inline void BGLib::Polyglot::LocalizationModel::AddOnLocalizeEvent(::BGLib::Polyglot::ILocalize* localize) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::LocalizationModel*>(), { "AddOnLocalizeEvent", {}, { ::i2c::type_of<::BGLib::Polyglot::ILocalize*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, localize);
}
inline void BGLib::Polyglot::LocalizationModel::RemoveOnLocalizeEvent(::BGLib::Polyglot::ILocalize* localize) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::LocalizationModel*>(), { "RemoveOnLocalizeEvent", {}, { ::i2c::type_of<::BGLib::Polyglot::ILocalize*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, localize);
}
inline ::System::Globalization::CultureInfo* BGLib::Polyglot::LocalizationModel::GetCultureInfo(::BGLib::Polyglot::LocalizationLanguage language) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::LocalizationModel*>(), { "GetCultureInfo", {}, { ::i2c::type_of<::BGLib::Polyglot::LocalizationLanguage>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Globalization::CultureInfo*>(this, ___internal_method, language);
}
inline ::StringW BGLib::Polyglot::LocalizationModel::Get(::StringW key) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::LocalizationModel*>(), { "Get", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, key);
}
inline ::StringW BGLib::Polyglot::LocalizationModel::GetOrKey(::StringW key) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::LocalizationModel*>(), { "GetOrKey", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, key);
}
inline bool BGLib::Polyglot::LocalizationModel::TryGet(::StringW key, ::BGLib::Polyglot::LocalizationLanguage language, ::by_ref<::StringW> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::LocalizationModel*>(),
                                              { "TryGet", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::BGLib::Polyglot::LocalizationLanguage>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key, language, value);
}
inline ::StringW BGLib::Polyglot::LocalizationModel::GetFormatOrKey(::StringW key, ::ArrayW<::System::Object*> arguments) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::LocalizationModel*>(),
                                                                                         { "GetFormatOrKey", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, key, arguments);
}
inline bool BGLib::Polyglot::LocalizationModel::KeyExist(::StringW key) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::LocalizationModel*>(), { "KeyExist", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key);
}
inline bool BGLib::Polyglot::LocalizationModel::KeyExist(::StringW key, ::BGLib::Polyglot::LocalizationLanguage language) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::LocalizationModel*>(), { "KeyExist", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::BGLib::Polyglot::LocalizationLanguage>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key, language);
}
inline ::System::Collections::Generic::List_1<::StringW>* BGLib::Polyglot::LocalizationModel::GetLanguages(::StringW key) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::LocalizationModel*>(), { "GetLanguages", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::StringW>*>(this, ___internal_method, key);
}
inline ::System::Collections::Generic::List_1<::StringW>*
BGLib::Polyglot::LocalizationModel::GetLanguages(::StringW key, ::System::Collections::Generic::IReadOnlyList_1<::BGLib::Polyglot::LocalizationLanguage>* languages) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::LocalizationModel*>(),
                          { "GetLanguages", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::BGLib::Polyglot::LocalizationLanguage>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::StringW>*>(this, ___internal_method, key, languages);
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::StringW>*>* BGLib::Polyglot::LocalizationModel::GetLanguagesStartsWith(::StringW key) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::LocalizationModel*>(), { "GetLanguagesStartsWith", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::StringW>*>*>(this, ___internal_method, key);
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::StringW>*>* BGLib::Polyglot::LocalizationModel::GetLanguagesContains(::StringW key) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::LocalizationModel*>(), { "GetLanguagesContains", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::StringW>*>*>(this, ___internal_method, key);
}
inline ::System::Collections::Generic::List_1<::StringW>* BGLib::Polyglot::LocalizationModel::GetKeys() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::LocalizationModel*>(), { "GetKeys", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::StringW>*>(this, ___internal_method);
}
inline void BGLib::Polyglot::LocalizationModel::ApplyLocalizationContent(::UnityEngine::TextAsset* asset) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::LocalizationModel*>(), { "ApplyLocalizationContent", {}, { ::i2c::type_of<::UnityEngine::TextAsset*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, asset);
}
inline void BGLib::Polyglot::LocalizationModel::AddLocalizedString(::StringW key, ::System::Collections::Generic::List_1<::StringW>* values) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::LocalizationModel*>(),
                                                           { "AddLocalizedString", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, values);
}
inline bool BGLib::Polyglot::LocalizationModel::IsValueValid(::StringW currentString) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::LocalizationModel*>(), { "IsValueValid", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, currentString);
}
inline ::BGLib::Polyglot::LocalizationModel* BGLib::Polyglot::LocalizationModel::New_ctor(::BGLib::Polyglot::Localization* localization, ::BGLib::Polyglot::LocalizationLanguage language,
                                                                                          ::System::Collections::Generic::List_1<::BGLib::Polyglot::LocalizationAsset*>* inputFiles) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BGLib::Polyglot::LocalizationModel*>(localization, language, inputFiles));
}
// Ctor Parameters []
constexpr ::BGLib::Polyglot::LocalizationModel::LocalizationModel() {}
constexpr ::BGLib::Polyglot::LocalizationLanguage BGLib::Polyglot::LocalizationModel::kDefaultLanguage{ static_cast<int32_t>(0x0) };
