#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(LocalizationImporter)
namespace Polyglot {
struct GoogleDriveDownloadFormat;
}
namespace Polyglot {
class __LocalizationImporter____c__DisplayClass8_0;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace Polyglot {
class LocalizationDocument;
}
namespace System {
template <typename T> class Action_1;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace Polyglot {
struct Language;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System::Collections {
class IEnumerator;
}
namespace Polyglot {
class Localization;
}
namespace Polyglot {
class __LocalizationImporter____c__DisplayClass5_0;
}
namespace Polyglot {
class LocalizationAsset;
}
// Forward declare root types
namespace Polyglot {
class LocalizationImporter;
}
namespace Polyglot {
class __LocalizationImporter____c__DisplayClass5_0;
}
namespace Polyglot {
class __LocalizationImporter____c__DisplayClass8_0;
}
// Write type traits
MARK_REF_PTR_T(::Polyglot::LocalizationImporter);
MARK_REF_PTR_T(::Polyglot::__LocalizationImporter____c__DisplayClass5_0);
MARK_REF_PTR_T(::Polyglot::__LocalizationImporter____c__DisplayClass8_0);
// Type: ::<>c__DisplayClass5_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Polyglot {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15545))
// CS Name: ::LocalizationImporter::<>c__DisplayClass5_0*
class CORDL_TYPE __LocalizationImporter____c__DisplayClass5_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field settings, offset 0x10, size 0x8
  __declspec(property(get = __get_settings, put = __set_settings))::Polyglot::Localization* settings;

  constexpr ::Polyglot::Localization*& __get_settings();

  constexpr ::cordl_internals::to_const_pointer<::Polyglot::Localization*> const& __get_settings() const;

  constexpr void __set_settings(::Polyglot::Localization* value);

  static inline ::Polyglot::__LocalizationImporter____c__DisplayClass5_0* New_ctor();

  /// @brief Method .ctor addr 0x268993c size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <ImportFromGoogle>b__0 addr 0x268aa8c size 0x74 virtual false final false
  inline void _ImportFromGoogle_b__0(::StringW s);

  // Ctor Parameters [CppParam { name: "", ty: "__LocalizationImporter____c__DisplayClass5_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LocalizationImporter____c__DisplayClass5_0(__LocalizationImporter____c__DisplayClass5_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LocalizationImporter____c__DisplayClass5_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LocalizationImporter____c__DisplayClass5_0(__LocalizationImporter____c__DisplayClass5_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LocalizationImporter____c__DisplayClass5_0();

public:
  /// @brief Field settings, offset: 0x10, size: 0x8, def value: None
  ::Polyglot::Localization* ___settings;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Polyglot::__LocalizationImporter____c__DisplayClass5_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::Polyglot::__LocalizationImporter____c__DisplayClass5_0, ___settings) == 0x10, "Offset mismatch!");

} // namespace Polyglot
// Type: ::<>c__DisplayClass8_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Polyglot {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15546))
// CS Name: ::LocalizationImporter::<>c__DisplayClass8_0*
class CORDL_TYPE __LocalizationImporter____c__DisplayClass8_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field settings, offset 0x10, size 0x8
  __declspec(property(get = __get_settings, put = __set_settings))::Polyglot::Localization* settings;

  constexpr ::Polyglot::Localization*& __get_settings();

  constexpr ::cordl_internals::to_const_pointer<::Polyglot::Localization*> const& __get_settings() const;

  constexpr void __set_settings(::Polyglot::Localization* value);

  static inline ::Polyglot::__LocalizationImporter____c__DisplayClass8_0* New_ctor();

  /// @brief Method .ctor addr 0x268a1f4 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <DownloadCustomSheet>b__0 addr 0x268ab00 size 0x74 virtual false final false
  inline void _DownloadCustomSheet_b__0(::StringW s);

  // Ctor Parameters [CppParam { name: "", ty: "__LocalizationImporter____c__DisplayClass8_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LocalizationImporter____c__DisplayClass8_0(__LocalizationImporter____c__DisplayClass8_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LocalizationImporter____c__DisplayClass8_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LocalizationImporter____c__DisplayClass8_0(__LocalizationImporter____c__DisplayClass8_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LocalizationImporter____c__DisplayClass8_0();

public:
  /// @brief Field settings, offset: 0x10, size: 0x8, def value: None
  ::Polyglot::Localization* ___settings;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Polyglot::__LocalizationImporter____c__DisplayClass8_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::Polyglot::__LocalizationImporter____c__DisplayClass8_0, ___settings) == 0x10, "Offset mismatch!");

} // namespace Polyglot
// Type: Polyglot::LocalizationImporter
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Polyglot {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15547))
// CS Name: ::Polyglot::LocalizationImporter*
class CORDL_TYPE LocalizationImporter : public ::System::Object {
public:
  // Declarations
  using __c__DisplayClass8_0 = ::Polyglot::__LocalizationImporter____c__DisplayClass8_0;

  using __c__DisplayClass5_0 = ::Polyglot::__LocalizationImporter____c__DisplayClass5_0;

  /// @brief Field languageStrings, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_languageStrings,
                             put = setStaticF_languageStrings))::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::StringW>*>* languageStrings;

  /// @brief Field EmptyList, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_EmptyList, put = setStaticF_EmptyList))::System::Collections::Generic::List_1<::StringW>* EmptyList;

  /// @brief Field InputFiles, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_InputFiles, put = setStaticF_InputFiles))::System::Collections::Generic::List_1<::Polyglot::LocalizationAsset*>* InputFiles;

  static inline void setStaticF_languageStrings(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::StringW>*>* value);

  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::StringW>*>* getStaticF_languageStrings();

  static inline void setStaticF_EmptyList(::System::Collections::Generic::List_1<::StringW>* value);

  static inline ::System::Collections::Generic::List_1<::StringW>* getStaticF_EmptyList();

  static inline void setStaticF_InputFiles(::System::Collections::Generic::List_1<::Polyglot::LocalizationAsset*>* value);

  static inline ::System::Collections::Generic::List_1<::Polyglot::LocalizationAsset*>* getStaticF_InputFiles();

  /// @brief Method Initialize addr 0x2689658 size 0x118 virtual false final false
  static inline void Initialize();

  /// @brief Method ImportFromGoogle addr 0x2689838 size 0x104 virtual false final false
  static inline void ImportFromGoogle(::Polyglot::Localization* settings);

  /// @brief Method Import addr 0x268996c size 0x64 virtual false final false
  static inline void Import(::StringW text, ::Polyglot::GoogleDriveDownloadFormat format);

  /// @brief Method Download addr 0x2689944 size 0x28 virtual false final false
  static inline ::System::Collections::IEnumerator* Download(::Polyglot::LocalizationDocument* document, ::System::Action_1<::StringW>* done, ::System::Func_2<float_t, bool>* progressbar);

  /// @brief Method DownloadCustomSheet addr 0x268a070 size 0x184 virtual false final false
  static inline ::System::Collections::IEnumerator* DownloadCustomSheet(::System::Func_2<float_t, bool>* progressbar);

  /// @brief Method ImportFromFiles addr 0x2689770 size 0xc8 virtual false final false
  static inline void ImportFromFiles(::Polyglot::Localization* settings);

  /// @brief Method ImportInputFiles addr 0x268a1fc size 0x218 virtual false final false
  static inline void ImportInputFiles();

  /// @brief Method ImportTextFile addr 0x26899d0 size 0x6a0 virtual false final false
  static inline void ImportTextFile(::StringW text, ::Polyglot::GoogleDriveDownloadFormat format);

  /// @brief Method IsLineBreak addr 0x2688fc8 size 0x90 virtual false final false
  static inline bool IsLineBreak(::StringW currentString);

  /// @brief Method GetLanguages addr 0x2688650 size 0x310 virtual false final false
  static inline ::System::Collections::Generic::List_1<::StringW>* GetLanguages(::StringW key, ::System::Collections::Generic::List_1<::Polyglot::Language>* supportedLanguages);

  /// @brief Method GetLanguagesStartsWith addr 0x268a414 size 0x2e0 virtual false final false
  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::StringW>*>* GetLanguagesStartsWith(::StringW key);

  /// @brief Method GetLanguagesContains addr 0x268a6f4 size 0x2e0 virtual false final false
  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::StringW>*>* GetLanguagesContains(::StringW key);

  /// @brief Method Refresh addr 0x268a9d4 size 0xb8 virtual false final false
  static inline void Refresh();

  /// @brief Method GetKeys addr 0x2689154 size 0x94 virtual false final false
  static inline ::System::Collections::Generic::List_1<::StringW>* GetKeys();

  // Ctor Parameters [CppParam { name: "", ty: "LocalizationImporter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LocalizationImporter(LocalizationImporter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LocalizationImporter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LocalizationImporter(LocalizationImporter const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LocalizationImporter();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Polyglot::LocalizationImporter, 0x10>, "Size mismatch!");

} // namespace Polyglot
NEED_NO_BOX(::Polyglot::LocalizationImporter);
DEFINE_IL2CPP_ARG_TYPE(::Polyglot::LocalizationImporter*, "Polyglot", "LocalizationImporter");
NEED_NO_BOX(::Polyglot::__LocalizationImporter____c__DisplayClass5_0);
DEFINE_IL2CPP_ARG_TYPE(::Polyglot::__LocalizationImporter____c__DisplayClass5_0*, "Polyglot", "LocalizationImporter/<>c__DisplayClass5_0");
NEED_NO_BOX(::Polyglot::__LocalizationImporter____c__DisplayClass8_0);
DEFINE_IL2CPP_ARG_TYPE(::Polyglot::__LocalizationImporter____c__DisplayClass8_0*, "Polyglot", "LocalizationImporter/<>c__DisplayClass8_0");
