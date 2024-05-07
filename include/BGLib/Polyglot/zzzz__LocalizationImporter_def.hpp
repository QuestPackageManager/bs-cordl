#pragma once
// IWYU pragma private; include "BGLib/Polyglot/LocalizationImporter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(LocalizationImporter)
namespace BGLib::Polyglot {
struct GoogleDriveDownloadFormat;
}
namespace BGLib::Polyglot {
struct Language;
}
namespace BGLib::Polyglot {
class LocalizationAsset;
}
namespace BGLib::Polyglot {
class LocalizationModel;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace BGLib::Polyglot {
class LocalizationImporter;
}
// Write type traits
MARK_REF_PTR_T(::BGLib::Polyglot::LocalizationImporter);
// Type: BGLib.Polyglot::LocalizationImporter
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace BGLib::Polyglot {
// Is value type: false
// CS Name: ::BGLib.Polyglot::LocalizationImporter*
class CORDL_TYPE LocalizationImporter : public ::System::Object {
public:
  // Declarations
  /// @brief Field EmptyList, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_EmptyList, put = setStaticF_EmptyList))::System::Collections::Generic::List_1<::StringW>* EmptyList;

  /// @brief Field InputFiles, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_InputFiles, put = setStaticF_InputFiles))::System::Collections::Generic::List_1<::BGLib::Polyglot::LocalizationAsset*>* InputFiles;

  /// @brief Field languageStrings, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_languageStrings,
                             put = setStaticF_languageStrings))::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::StringW>*>* languageStrings;

  /// @brief Method GetKeys, addr 0x107d784, size 0x94, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::StringW>* GetKeys();

  /// @brief Method GetLanguages, addr 0x107e8f0, size 0xb0, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::StringW>* GetLanguages(::StringW key);

  /// @brief Method GetLanguages, addr 0x107e9a0, size 0x440, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::StringW>* GetLanguages(::StringW key, ::System::Collections::Generic::IReadOnlyList_1<::BGLib::Polyglot::Language>* supportedLanguages);

  /// @brief Method GetLanguagesContains, addr 0x107f0a0, size 0x2c0, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::StringW>*>* GetLanguagesContains(::StringW key);

  /// @brief Method GetLanguagesStartsWith, addr 0x107ede0, size 0x2c0, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::StringW>*>* GetLanguagesStartsWith(::StringW key);

  /// @brief Method Import, addr 0x107df44, size 0x64, virtual false, abstract: false, final false
  static inline void Import(::StringW text, ::BGLib::Polyglot::GoogleDriveDownloadFormat format);

  /// @brief Method ImportFromFiles, addr 0x107de7c, size 0xc8, virtual false, abstract: false, final false
  static inline void ImportFromFiles(::BGLib::Polyglot::LocalizationModel* settings);

  /// @brief Method ImportInputFiles, addr 0x107e648, size 0x218, virtual false, abstract: false, final false
  static inline void ImportInputFiles();

  /// @brief Method ImportTextFile, addr 0x107dfa8, size 0x6a0, virtual false, abstract: false, final false
  static inline void ImportTextFile(::StringW text, ::BGLib::Polyglot::GoogleDriveDownloadFormat format);

  /// @brief Method Initialize, addr 0x107ddf8, size 0x84, virtual false, abstract: false, final false
  static inline void Initialize(::BGLib::Polyglot::LocalizationModel* settings);

  /// @brief Method IsLineBreak, addr 0x107e860, size 0x90, virtual false, abstract: false, final false
  static inline bool IsLineBreak(::StringW currentString);

  /// @brief Method NoDomainReloadInit, addr 0x107dd10, size 0xe8, virtual false, abstract: false, final false
  static inline void NoDomainReloadInit();

  static inline ::System::Collections::Generic::List_1<::StringW>* getStaticF_EmptyList();

  static inline ::System::Collections::Generic::List_1<::BGLib::Polyglot::LocalizationAsset*>* getStaticF_InputFiles();

  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::StringW>*>* getStaticF_languageStrings();

  static inline void setStaticF_EmptyList(::System::Collections::Generic::List_1<::StringW>* value);

  static inline void setStaticF_InputFiles(::System::Collections::Generic::List_1<::BGLib::Polyglot::LocalizationAsset*>* value);

  static inline void setStaticF_languageStrings(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::StringW>*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LocalizationImporter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LocalizationImporter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LocalizationImporter(LocalizationImporter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LocalizationImporter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LocalizationImporter(LocalizationImporter const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGLib::Polyglot::LocalizationImporter, 0x10>, "Size mismatch!");

} // namespace BGLib::Polyglot
NEED_NO_BOX(::BGLib::Polyglot::LocalizationImporter);
DEFINE_IL2CPP_ARG_TYPE(::BGLib::Polyglot::LocalizationImporter*, "BGLib.Polyglot", "LocalizationImporter");
