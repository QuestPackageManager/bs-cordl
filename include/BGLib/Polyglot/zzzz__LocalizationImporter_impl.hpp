#pragma once
// IWYU pragma private; include "BGLib/Polyglot/LocalizationImporter.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BGLib/Polyglot/zzzz__LocalizationImporter_def.hpp"
#include "BGLib/Polyglot/zzzz__LocalizationAsset_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::BGLib::Polyglot::LocalizationImporter.ImportFromFiles
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<
    ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::StringW>*>* (*)(::System::Collections::Generic::List_1<::BGLib::Polyglot::LocalizationAsset*>*)>(
    &::BGLib::Polyglot::LocalizationImporter::ImportFromFiles)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x331ad58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::LocalizationImporter*>(),
                                                             { "ImportFromFiles", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::BGLib::Polyglot::LocalizationAsset*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::Polyglot::LocalizationImporter.IsLineBreak
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::BGLib::Polyglot::LocalizationImporter::IsLineBreak)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x331b5f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::LocalizationImporter*>(), { "IsLineBreak", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::Polyglot::LocalizationImporter.ImportTextFile
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::StringW>*>*)>(
    &::BGLib::Polyglot::LocalizationImporter::ImportTextFile)> {
  constexpr static std::size_t size = 0x650;
  constexpr static std::size_t addrs = 0x331afa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::LocalizationImporter*>(),
                            { "ImportTextFile",
                              {},
                              { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::StringW>*>*>() } })));
    return ___internal_method;
  }
};
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::StringW>*>*
BGLib::Polyglot::LocalizationImporter::ImportFromFiles(::System::Collections::Generic::List_1<::BGLib::Polyglot::LocalizationAsset*>* inputFiles) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::LocalizationImporter*>(),
                                                           { "ImportFromFiles", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::BGLib::Polyglot::LocalizationAsset*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::StringW>*>*>(nullptr, ___internal_method, inputFiles);
}
inline bool BGLib::Polyglot::LocalizationImporter::IsLineBreak(::StringW currentString) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::LocalizationImporter*>(), { "IsLineBreak", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, currentString);
}
inline void BGLib::Polyglot::LocalizationImporter::ImportTextFile(::StringW text, ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::StringW>*>* result) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::BGLib::Polyglot::LocalizationImporter*>(),
          { "ImportTextFile", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::StringW>*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, text, result);
}
// Ctor Parameters []
constexpr ::BGLib::Polyglot::LocalizationImporter::LocalizationImporter() {}
