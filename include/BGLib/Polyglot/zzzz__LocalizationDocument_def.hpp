#pragma once
// IWYU pragma private; include "BGLib/Polyglot/LocalizationDocument.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BGLib/Polyglot/zzzz__GoogleDriveDownloadFormat_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(LocalizationDocument)
namespace BGLib::Polyglot {
struct GoogleDriveDownloadFormat;
}
namespace UnityEngine {
class TextAsset;
}
// Forward declare root types
namespace BGLib::Polyglot {
class LocalizationDocument;
}
// Write type traits
MARK_REF_PTR_T(::BGLib::Polyglot::LocalizationDocument);
// Dependencies BGLib.Polyglot.GoogleDriveDownloadFormat, System.Object
namespace BGLib::Polyglot {
// Is value type: false
// CS Name: BGLib.Polyglot.LocalizationDocument
class CORDL_TYPE LocalizationDocument : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_DocsId)) ::StringW DocsId;

  __declspec(property(get = get_Format)) ::BGLib::Polyglot::GoogleDriveDownloadFormat Format;

  __declspec(property(get = get_SheetId)) ::StringW SheetId;

  __declspec(property(get = get_TextAsset)) ::UnityW<::UnityEngine::TextAsset> TextAsset;

  /// @brief Field docsId, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_docsId, put = __cordl_internal_set_docsId)) ::StringW docsId;

  /// @brief Field format, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_format, put = __cordl_internal_set_format)) ::BGLib::Polyglot::GoogleDriveDownloadFormat format;

  /// @brief Field sheetId, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_sheetId, put = __cordl_internal_set_sheetId)) ::StringW sheetId;

  /// @brief Field textAsset, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_textAsset, put = __cordl_internal_set_textAsset)) ::UnityW<::UnityEngine::TextAsset> textAsset;

  static inline ::BGLib::Polyglot::LocalizationDocument* New_ctor();

  constexpr ::StringW const& __cordl_internal_get_docsId() const;

  constexpr ::StringW& __cordl_internal_get_docsId();

  constexpr ::BGLib::Polyglot::GoogleDriveDownloadFormat const& __cordl_internal_get_format() const;

  constexpr ::BGLib::Polyglot::GoogleDriveDownloadFormat& __cordl_internal_get_format();

  constexpr ::StringW const& __cordl_internal_get_sheetId() const;

  constexpr ::StringW& __cordl_internal_get_sheetId();

  constexpr ::UnityW<::UnityEngine::TextAsset> const& __cordl_internal_get_textAsset() const;

  constexpr ::UnityW<::UnityEngine::TextAsset>& __cordl_internal_get_textAsset();

  constexpr void __cordl_internal_set_docsId(::StringW value);

  constexpr void __cordl_internal_set_format(::BGLib::Polyglot::GoogleDriveDownloadFormat value);

  constexpr void __cordl_internal_set_sheetId(::StringW value);

  constexpr void __cordl_internal_set_textAsset(::UnityW<::UnityEngine::TextAsset> value);

  /// @brief Method .ctor, addr 0x22b376c, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_DocsId, addr 0x22b3754, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_DocsId();

  /// @brief Method get_Format, addr 0x22b3764, size 0x8, virtual false, abstract: false, final false
  inline ::BGLib::Polyglot::GoogleDriveDownloadFormat get_Format();

  /// @brief Method get_SheetId, addr 0x22b375c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_SheetId();

  /// @brief Method get_TextAsset, addr 0x22b374c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::TextAsset> get_TextAsset();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LocalizationDocument();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LocalizationDocument", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LocalizationDocument(LocalizationDocument&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LocalizationDocument", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LocalizationDocument(LocalizationDocument const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18058 };

  /// @brief Field docsId, offset: 0x10, size: 0x8, def value: None
  ::StringW ___docsId;

  /// @brief Field sheetId, offset: 0x18, size: 0x8, def value: None
  ::StringW ___sheetId;

  /// @brief Field format, offset: 0x20, size: 0x4, def value: None
  ::BGLib::Polyglot::GoogleDriveDownloadFormat ___format;

  /// @brief Field textAsset, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::TextAsset> ___textAsset;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BGLib::Polyglot::LocalizationDocument, ___docsId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BGLib::Polyglot::LocalizationDocument, ___sheetId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BGLib::Polyglot::LocalizationDocument, ___format) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BGLib::Polyglot::LocalizationDocument, ___textAsset) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BGLib::Polyglot::LocalizationDocument, 0x30>, "Size mismatch!");

} // namespace BGLib::Polyglot
NEED_NO_BOX(::BGLib::Polyglot::LocalizationDocument);
DEFINE_IL2CPP_ARG_TYPE(::BGLib::Polyglot::LocalizationDocument*, "BGLib.Polyglot", "LocalizationDocument");
