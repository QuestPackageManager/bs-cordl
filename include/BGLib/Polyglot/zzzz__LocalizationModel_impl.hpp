#pragma once
// IWYU pragma private; include "BGLib/Polyglot/LocalizationModel.hpp"
#include "BGLib/Polyglot/zzzz__Language_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BGLib/Polyglot/zzzz__LocalizationModel_def.hpp"
#include "BGLib/Polyglot/zzzz__ILocalize_def.hpp"
#include "BGLib/Polyglot/zzzz__LanguageDirection_def.hpp"
#include "BGLib/Polyglot/zzzz__Language_def.hpp"
#include "BGLib/Polyglot/zzzz__LocalizationAsset_def.hpp"
#include "BGLib/Polyglot/zzzz__LocalizationDocument_def.hpp"
#include "BGLib/Polyglot/zzzz__LocalizationModel_def.hpp"
#include "BGLib/Polyglot/zzzz__Localization_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Globalization/zzzz__CultureInfo_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::BGLib::Polyglot::LocalizationModel___c__DisplayClass30_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::Polyglot::LocalizationModel___c__DisplayClass30_0::*)()>(
    &::BGLib::Polyglot::LocalizationModel___c__DisplayClass30_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22b56b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::LocalizationModel___c__DisplayClass30_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::Polyglot::LocalizationModel___c__DisplayClass30_0._InputFilesContains_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::BGLib::Polyglot::LocalizationModel___c__DisplayClass30_0::*)(::BGLib::Polyglot::LocalizationAsset*)>(
    &::BGLib::Polyglot::LocalizationModel___c__DisplayClass30_0::_InputFilesContains_b__0)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x22b5b28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::LocalizationModel___c__DisplayClass30_0*>::get(), "<InputFilesContains>b__0",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGLib::Polyglot::LocalizationAsset*>::get() })));
    return ___internal_method;
  }
};
constexpr ::BGLib::Polyglot::LocalizationDocument*& BGLib::Polyglot::LocalizationModel___c__DisplayClass30_0::__cordl_internal_get_doc() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___doc;
}
constexpr ::BGLib::Polyglot::LocalizationDocument* const& BGLib::Polyglot::LocalizationModel___c__DisplayClass30_0::__cordl_internal_get_doc() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___doc;
}
constexpr void BGLib::Polyglot::LocalizationModel___c__DisplayClass30_0::__cordl_internal_set_doc(::BGLib::Polyglot::LocalizationDocument* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___doc)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void BGLib::Polyglot::LocalizationModel___c__DisplayClass30_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::LocalizationModel___c__DisplayClass30_0*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool BGLib::Polyglot::LocalizationModel___c__DisplayClass30_0::_InputFilesContains_b__0(::BGLib::Polyglot::LocalizationAsset* inputFile) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::LocalizationModel___c__DisplayClass30_0*>::get(), "<InputFilesContains>b__0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGLib::Polyglot::LocalizationAsset*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, inputFile);
}
inline ::BGLib::Polyglot::LocalizationModel___c__DisplayClass30_0* BGLib::Polyglot::LocalizationModel___c__DisplayClass30_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BGLib::Polyglot::LocalizationModel___c__DisplayClass30_0*>());
}
// Ctor Parameters []
constexpr ::BGLib::Polyglot::LocalizationModel___c__DisplayClass30_0::LocalizationModel___c__DisplayClass30_0() {}
//  Writing Method size for method: ::BGLib::Polyglot::LocalizationModel.get_InputFiles
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::List_1<::BGLib::Polyglot::LocalizationAsset*>* (::BGLib::Polyglot::LocalizationModel::*)()>(&::BGLib::Polyglot::LocalizationModel::get_InputFiles)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22b4f44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::LocalizationModel*>::get(), "get_InputFiles",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::Polyglot::LocalizationModel.get_SelectedCultureInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Globalization::CultureInfo* (::BGLib::Polyglot::LocalizationModel::*)()>(
    &::BGLib::Polyglot::LocalizationModel::get_SelectedCultureInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22b4f4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::LocalizationModel*>::get(),
                                                                               "get_SelectedCultureInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::Polyglot::LocalizationModel.set_SelectedCultureInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::Polyglot::LocalizationModel::*)(::System::Globalization::CultureInfo*)>(
    &::BGLib::Polyglot::LocalizationModel::set_SelectedCultureInfo)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x22b4f54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::LocalizationModel*>::get(), "set_SelectedCultureInfo", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::CultureInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::Polyglot::LocalizationModel.get_SelectedLanguage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BGLib::Polyglot::Language (::BGLib::Polyglot::LocalizationModel::*)()>(
    &::BGLib::Polyglot::LocalizationModel::get_SelectedLanguage)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x22b4fe0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::LocalizationModel*>::get(),
                                                                               "get_SelectedLanguage", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::Polyglot::LocalizationModel.set_SelectedLanguage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::Polyglot::LocalizationModel::*)(::BGLib::Polyglot::Language)>(
    &::BGLib::Polyglot::LocalizationModel::set_SelectedLanguage)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x22b4ffc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::LocalizationModel*>::get(), "set_SelectedLanguage", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGLib::Polyglot::Language>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::Polyglot::LocalizationModel.get_fallbackLanguage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BGLib::Polyglot::Language (::BGLib::Polyglot::LocalizationModel::*)()>(
    &::BGLib::Polyglot::LocalizationModel::get_fallbackLanguage)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x22b2808;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::LocalizationModel*>::get(),
                                                                               "get_fallbackLanguage", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::Polyglot::LocalizationModel.get_SelectedLanguageDirection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BGLib::Polyglot::LanguageDirection (::BGLib::Polyglot::LocalizationModel::*)()>(
    &::BGLib::Polyglot::LocalizationModel::get_SelectedLanguageDirection)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x22b51dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::LocalizationModel*>::get(),
                                                                               "get_SelectedLanguageDirection", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::Polyglot::LocalizationModel.get_SupportedLanguages
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::BGLib::Polyglot::Language>* (
    ::BGLib::Polyglot::LocalizationModel::*)()>(&::BGLib::Polyglot::LocalizationModel::get_SupportedLanguages)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x22b5204;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::LocalizationModel*>::get(),
                                                                               "get_SupportedLanguages", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::Polyglot::LocalizationModel.get_EnglishLanguageNames
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::StringW>* (::BGLib::Polyglot::LocalizationModel::*)()>(
    &::BGLib::Polyglot::LocalizationModel::get_EnglishLanguageNames)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x22b2c74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::LocalizationModel*>::get(),
                                                                               "get_EnglishLanguageNames", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::Polyglot::LocalizationModel.get_LocalizedLanguageNames
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::StringW>* (::BGLib::Polyglot::LocalizationModel::*)()>(
    &::BGLib::Polyglot::LocalizationModel::get_LocalizedLanguageNames)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x22b5220;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::LocalizationModel*>::get(),
                                                                               "get_LocalizedLanguageNames", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::Polyglot::LocalizationModel.get_SelectedLanguageIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::BGLib::Polyglot::LocalizationModel::*)()>(
    &::BGLib::Polyglot::LocalizationModel::get_SelectedLanguageIndex)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x22b2cf0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::LocalizationModel*>::get(),
                                                                               "get_SelectedLanguageIndex", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::Polyglot::LocalizationModel.add__onChangeLanguage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::Polyglot::LocalizationModel::*)(::System::Action_1<::BGLib::Polyglot::LocalizationModel*>*)>(
    &::BGLib::Polyglot::LocalizationModel::add__onChangeLanguage)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x22b529c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::LocalizationModel*>::get(), "add__onChangeLanguage", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::BGLib::Polyglot::LocalizationModel*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::Polyglot::LocalizationModel.remove__onChangeLanguage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::Polyglot::LocalizationModel::*)(::System::Action_1<::BGLib::Polyglot::LocalizationModel*>*)>(
    &::BGLib::Polyglot::LocalizationModel::remove__onChangeLanguage)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x22b534c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::LocalizationModel*>::get(), "remove__onChangeLanguage", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::BGLib::Polyglot::LocalizationModel*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::Polyglot::LocalizationModel._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::Polyglot::LocalizationModel::*)(
    ::BGLib::Polyglot::Localization*, ::BGLib::Polyglot::Language, ::System::Collections::Generic::List_1<::BGLib::Polyglot::LocalizationAsset*>*)>(&::BGLib::Polyglot::LocalizationModel::_ctor)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x22b53fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::LocalizationModel*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGLib::Polyglot::Localization*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGLib::Polyglot::Language>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::BGLib::Polyglot::LocalizationAsset*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::Polyglot::LocalizationModel.SelectLanguage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::Polyglot::LocalizationModel::*)(int32_t)>(&::BGLib::Polyglot::LocalizationModel::SelectLanguage)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x22b550c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::LocalizationModel*>::get(), "SelectLanguage", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::Polyglot::LocalizationModel.AddOnLocalizeEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::Polyglot::LocalizationModel::*)(::BGLib::Polyglot::ILocalize*)>(
    &::BGLib::Polyglot::LocalizationModel::AddOnLocalizeEvent)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x22b2ac4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::LocalizationModel*>::get(), "AddOnLocalizeEvent", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGLib::Polyglot::ILocalize*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::Polyglot::LocalizationModel.InputFilesContains
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::BGLib::Polyglot::LocalizationModel::*)(::BGLib::Polyglot::LocalizationDocument*)>(
    &::BGLib::Polyglot::LocalizationModel::InputFilesContains)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x22b55e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::LocalizationModel*>::get(), "InputFilesContains", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGLib::Polyglot::LocalizationDocument*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::Polyglot::LocalizationModel.GetCultureInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Globalization::CultureInfo* (::BGLib::Polyglot::LocalizationModel::*)(::BGLib::Polyglot::Language)>(
    &::BGLib::Polyglot::LocalizationModel::GetCultureInfo)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x22b512c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::LocalizationModel*>::get(), "GetCultureInfo", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGLib::Polyglot::Language>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::Polyglot::LocalizationModel.Get
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::BGLib::Polyglot::LocalizationModel::*)(::StringW)>(&::BGLib::Polyglot::LocalizationModel::Get)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x22b3128;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::LocalizationModel*>::get(), "Get", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::Polyglot::LocalizationModel.GetOrKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::BGLib::Polyglot::LocalizationModel::*)(::StringW)>(&::BGLib::Polyglot::LocalizationModel::GetOrKey)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x22b5968;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::LocalizationModel*>::get(), "GetOrKey", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::Polyglot::LocalizationModel.TryGet
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::BGLib::Polyglot::LocalizationModel::*)(::StringW, ::BGLib::Polyglot::Language, ::ByRef<::StringW>)>(
    &::BGLib::Polyglot::LocalizationModel::TryGet)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0x22b56c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::LocalizationModel*>::get(), "TryGet", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGLib::Polyglot::Language>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::StringW>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::Polyglot::LocalizationModel.GetFormatOrKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::StringW (::BGLib::Polyglot::LocalizationModel::*)(::StringW, ::ArrayW<::System::Object*, ::Array<::System::Object*>*>)>(&::BGLib::Polyglot::LocalizationModel::GetFormatOrKey)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x22b5a0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::LocalizationModel*>::get(), "GetFormatOrKey", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::Polyglot::LocalizationModel.IsValueValid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&::BGLib::Polyglot::LocalizationModel::IsValueValid)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x22b5994;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::LocalizationModel*>::get(), "IsValueValid", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::Polyglot::LocalizationModel.KeyExist
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::BGLib::Polyglot::LocalizationModel::*)(::StringW)>(&::BGLib::Polyglot::LocalizationModel::KeyExist)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x22b5a64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::LocalizationModel*>::get(), "KeyExist", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::Polyglot::LocalizationModel.KeyExist
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ::BGLib::Polyglot::Language)>(&::BGLib::Polyglot::LocalizationModel::KeyExist)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x22b5a88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::LocalizationModel*>::get(), "KeyExist", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGLib::Polyglot::Language>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::BGLib::Polyglot::Localization>& BGLib::Polyglot::LocalizationModel::__cordl_internal_get_localization() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___localization;
}
constexpr ::UnityW<::BGLib::Polyglot::Localization> const& BGLib::Polyglot::LocalizationModel::__cordl_internal_get_localization() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___localization;
}
constexpr void BGLib::Polyglot::LocalizationModel::__cordl_internal_set_localization(::UnityW<::BGLib::Polyglot::Localization> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___localization)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::BGLib::Polyglot::LocalizationAsset*>*& BGLib::Polyglot::LocalizationModel::__cordl_internal_get_inputFiles() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inputFiles;
}
constexpr ::System::Collections::Generic::List_1<::BGLib::Polyglot::LocalizationAsset*>* const& BGLib::Polyglot::LocalizationModel::__cordl_internal_get_inputFiles() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inputFiles;
}
constexpr void BGLib::Polyglot::LocalizationModel::__cordl_internal_set_inputFiles(::System::Collections::Generic::List_1<::BGLib::Polyglot::LocalizationAsset*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___inputFiles)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Globalization::CultureInfo*& BGLib::Polyglot::LocalizationModel::__cordl_internal_get_selectedCulture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___selectedCulture;
}
constexpr ::System::Globalization::CultureInfo* const& BGLib::Polyglot::LocalizationModel::__cordl_internal_get_selectedCulture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___selectedCulture;
}
constexpr void BGLib::Polyglot::LocalizationModel::__cordl_internal_set_selectedCulture(::System::Globalization::CultureInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___selectedCulture)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____onChangeLanguage)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Collections::Generic::List_1<::BGLib::Polyglot::LocalizationAsset*>* BGLib::Polyglot::LocalizationModel::get_InputFiles() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::LocalizationModel*>::get(), "get_InputFiles",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::BGLib::Polyglot::LocalizationAsset*>*, false>(this, ___internal_method);
}
inline ::System::Globalization::CultureInfo* BGLib::Polyglot::LocalizationModel::get_SelectedCultureInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::LocalizationModel*>::get(),
                                                                             "get_SelectedCultureInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Globalization::CultureInfo*, false>(this, ___internal_method);
}
inline void BGLib::Polyglot::LocalizationModel::set_SelectedCultureInfo(::System::Globalization::CultureInfo* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::LocalizationModel*>::get(), "set_SelectedCultureInfo", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::CultureInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::BGLib::Polyglot::Language BGLib::Polyglot::LocalizationModel::get_SelectedLanguage() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::LocalizationModel*>::get(),
                                                                             "get_SelectedLanguage", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::BGLib::Polyglot::Language, false>(this, ___internal_method);
}
inline void BGLib::Polyglot::LocalizationModel::set_SelectedLanguage(::BGLib::Polyglot::Language value) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::LocalizationModel*>::get(), "set_SelectedLanguage", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGLib::Polyglot::Language>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::BGLib::Polyglot::Language BGLib::Polyglot::LocalizationModel::get_fallbackLanguage() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::LocalizationModel*>::get(),
                                                                             "get_fallbackLanguage", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::BGLib::Polyglot::Language, false>(this, ___internal_method);
}
inline ::BGLib::Polyglot::LanguageDirection BGLib::Polyglot::LocalizationModel::get_SelectedLanguageDirection() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::LocalizationModel*>::get(),
                                                                             "get_SelectedLanguageDirection", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::BGLib::Polyglot::LanguageDirection, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IReadOnlyList_1<::BGLib::Polyglot::Language>* BGLib::Polyglot::LocalizationModel::get_SupportedLanguages() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::LocalizationModel*>::get(),
                                                                             "get_SupportedLanguages", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::BGLib::Polyglot::Language>*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::StringW>* BGLib::Polyglot::LocalizationModel::get_EnglishLanguageNames() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::LocalizationModel*>::get(),
                                                                             "get_EnglishLanguageNames", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::StringW>*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::StringW>* BGLib::Polyglot::LocalizationModel::get_LocalizedLanguageNames() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::LocalizationModel*>::get(),
                                                                             "get_LocalizedLanguageNames", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::StringW>*, false>(this, ___internal_method);
}
inline int32_t BGLib::Polyglot::LocalizationModel::get_SelectedLanguageIndex() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::LocalizationModel*>::get(),
                                                                             "get_SelectedLanguageIndex", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void BGLib::Polyglot::LocalizationModel::add__onChangeLanguage(::System::Action_1<::BGLib::Polyglot::LocalizationModel*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::LocalizationModel*>::get(), "add__onChangeLanguage", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::BGLib::Polyglot::LocalizationModel*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void BGLib::Polyglot::LocalizationModel::remove__onChangeLanguage(::System::Action_1<::BGLib::Polyglot::LocalizationModel*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::LocalizationModel*>::get(), "remove__onChangeLanguage", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::BGLib::Polyglot::LocalizationModel*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void BGLib::Polyglot::LocalizationModel::_ctor(::BGLib::Polyglot::Localization* localization, ::BGLib::Polyglot::Language language,
                                                      ::System::Collections::Generic::List_1<::BGLib::Polyglot::LocalizationAsset*>* inputFiles) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::LocalizationModel*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGLib::Polyglot::Localization*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGLib::Polyglot::Language>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::BGLib::Polyglot::LocalizationAsset*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, localization, language, inputFiles);
}
inline void BGLib::Polyglot::LocalizationModel::SelectLanguage(int32_t selected) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::LocalizationModel*>::get(), "SelectLanguage",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, selected);
}
inline void BGLib::Polyglot::LocalizationModel::AddOnLocalizeEvent(::BGLib::Polyglot::ILocalize* localize) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::LocalizationModel*>::get(), "AddOnLocalizeEvent", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGLib::Polyglot::ILocalize*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, localize);
}
inline bool BGLib::Polyglot::LocalizationModel::InputFilesContains(::BGLib::Polyglot::LocalizationDocument* doc) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::LocalizationModel*>::get(), "InputFilesContains", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGLib::Polyglot::LocalizationDocument*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, doc);
}
inline ::System::Globalization::CultureInfo* BGLib::Polyglot::LocalizationModel::GetCultureInfo(::BGLib::Polyglot::Language language) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::LocalizationModel*>::get(), "GetCultureInfo", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGLib::Polyglot::Language>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Globalization::CultureInfo*, false>(this, ___internal_method, language);
}
inline ::StringW BGLib::Polyglot::LocalizationModel::Get(::StringW key) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::LocalizationModel*>::get(), "Get", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, key);
}
inline ::StringW BGLib::Polyglot::LocalizationModel::GetOrKey(::StringW key) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::LocalizationModel*>::get(), "GetOrKey", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, key);
}
inline bool BGLib::Polyglot::LocalizationModel::TryGet(::StringW key, ::BGLib::Polyglot::Language language, ::ByRef<::StringW> value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::LocalizationModel*>::get(), "TryGet", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGLib::Polyglot::Language>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::StringW>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, key, language, value);
}
inline ::StringW BGLib::Polyglot::LocalizationModel::GetFormatOrKey(::StringW key, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> arguments) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::LocalizationModel*>::get(), "GetFormatOrKey", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, key, arguments);
}
inline bool BGLib::Polyglot::LocalizationModel::IsValueValid(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::LocalizationModel*>::get(), "IsValueValid", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, value);
}
inline bool BGLib::Polyglot::LocalizationModel::KeyExist(::StringW key) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::LocalizationModel*>::get(), "KeyExist", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, key);
}
inline bool BGLib::Polyglot::LocalizationModel::KeyExist(::StringW key, ::BGLib::Polyglot::Language language) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::LocalizationModel*>::get(), "KeyExist", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGLib::Polyglot::Language>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, key, language);
}
inline ::BGLib::Polyglot::LocalizationModel* BGLib::Polyglot::LocalizationModel::New_ctor(::BGLib::Polyglot::Localization* localization, ::BGLib::Polyglot::Language language,
                                                                                          ::System::Collections::Generic::List_1<::BGLib::Polyglot::LocalizationAsset*>* inputFiles) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BGLib::Polyglot::LocalizationModel*>(localization, language, inputFiles));
}
// Ctor Parameters []
constexpr ::BGLib::Polyglot::LocalizationModel::LocalizationModel() {}
constexpr ::BGLib::Polyglot::Language BGLib::Polyglot::LocalizationModel::kDefaultLanguage{ static_cast<int32_t>(0x0) };
