#pragma once
// IWYU pragma private; include "BGLib/Polyglot/LocalizationImporter.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BGLib/Polyglot/zzzz__LocalizationImporter_def.hpp"
#include "BGLib/Polyglot/zzzz__LocalizationAsset_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::BGLib::Polyglot::LocalizationImporter.ImportFromFiles
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::StringW>*>* (*)(::System::Collections::Generic::List_1<::BGLib::Polyglot::LocalizationAsset*>*)>(
    &::BGLib::Polyglot::LocalizationImporter::ImportFromFiles)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x3224d38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::LocalizationImporter*>::get(), "ImportFromFiles", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::BGLib::Polyglot::LocalizationAsset*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::Polyglot::LocalizationImporter.IsLineBreak
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&::BGLib::Polyglot::LocalizationImporter::IsLineBreak)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x32255d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::LocalizationImporter*>::get(), "IsLineBreak", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::Polyglot::LocalizationImporter.ImportTextFile
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    ::StringW, ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::StringW>*>*)>(&::BGLib::Polyglot::LocalizationImporter::ImportTextFile)> {
  constexpr static std::size_t size = 0x64c;
  constexpr static std::size_t addrs = 0x3224f84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::LocalizationImporter*>::get(), "ImportTextFile", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::StringW>*>*>::get() })));
    return ___internal_method;
  }
};
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::StringW>*>*
BGLib::Polyglot::LocalizationImporter::ImportFromFiles(::System::Collections::Generic::List_1<::BGLib::Polyglot::LocalizationAsset*>* inputFiles) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::LocalizationImporter*>::get(), "ImportFromFiles", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::BGLib::Polyglot::LocalizationAsset*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::StringW>*>*, false>(nullptr, ___internal_method,
                                                                                                                                                                  inputFiles);
}
inline bool BGLib::Polyglot::LocalizationImporter::IsLineBreak(::StringW currentString) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::LocalizationImporter*>::get(), "IsLineBreak", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, currentString);
}
inline void BGLib::Polyglot::LocalizationImporter::ImportTextFile(::StringW text, ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::StringW>*>* result) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::LocalizationImporter*>::get(), "ImportTextFile", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::StringW>*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, text, result);
}
// Ctor Parameters []
constexpr ::BGLib::Polyglot::LocalizationImporter::LocalizationImporter() {}
