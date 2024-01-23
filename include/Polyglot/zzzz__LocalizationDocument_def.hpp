#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Polyglot/zzzz__GoogleDriveDownloadFormat_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(LocalizationDocument)
namespace Polyglot {
struct GoogleDriveDownloadFormat;
}
namespace UnityEngine {
class TextAsset;
}
// Forward declare root types
namespace Polyglot {
class LocalizationDocument;
}
// Write type traits
MARK_REF_PTR_T(::Polyglot::LocalizationDocument);
// Type: Polyglot::LocalizationDocument
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 49, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Polyglot {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(15552))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15560))
// CS Name: ::Polyglot::LocalizationDocument*
class CORDL_TYPE LocalizationDocument : public ::System::Object {
public:
  // Declarations
  /// @brief Field docsId, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_docsId, put = __cordl_internal_set_docsId))::StringW docsId;

  /// @brief Field sheetId, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_sheetId, put = __cordl_internal_set_sheetId))::StringW sheetId;

  /// @brief Field format, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_format, put = __cordl_internal_set_format))::Polyglot::GoogleDriveDownloadFormat format;

  /// @brief Field textAsset, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_textAsset, put = __cordl_internal_set_textAsset))::UnityW<::UnityEngine::TextAsset> textAsset;

  /// @brief Field downloadOnStart, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get_downloadOnStart, put = __cordl_internal_set_downloadOnStart)) bool downloadOnStart;

  __declspec(property(get = get_TextAsset, put = set_TextAsset))::UnityW<::UnityEngine::TextAsset> TextAsset;

  __declspec(property(get = get_DocsId, put = set_DocsId))::StringW DocsId;

  __declspec(property(get = get_SheetId, put = set_SheetId))::StringW SheetId;

  __declspec(property(get = get_Format, put = set_Format))::Polyglot::GoogleDriveDownloadFormat Format;

  __declspec(property(get = get_DownloadOnStart, put = set_DownloadOnStart)) bool DownloadOnStart;

  constexpr ::StringW& __cordl_internal_get_docsId();

  constexpr ::StringW const& __cordl_internal_get_docsId() const;

  constexpr void __cordl_internal_set_docsId(::StringW value);

  constexpr ::StringW& __cordl_internal_get_sheetId();

  constexpr ::StringW const& __cordl_internal_get_sheetId() const;

  constexpr void __cordl_internal_set_sheetId(::StringW value);

  constexpr ::Polyglot::GoogleDriveDownloadFormat& __cordl_internal_get_format();

  constexpr ::Polyglot::GoogleDriveDownloadFormat const& __cordl_internal_get_format() const;

  constexpr void __cordl_internal_set_format(::Polyglot::GoogleDriveDownloadFormat value);

  constexpr ::UnityW<::UnityEngine::TextAsset>& __cordl_internal_get_textAsset();

  constexpr ::UnityW<::UnityEngine::TextAsset> const& __cordl_internal_get_textAsset() const;

  constexpr void __cordl_internal_set_textAsset(::UnityW<::UnityEngine::TextAsset> value);

  constexpr bool& __cordl_internal_get_downloadOnStart();

  constexpr bool const& __cordl_internal_get_downloadOnStart() const;

  constexpr void __cordl_internal_set_downloadOnStart(bool value);

  /// @brief Method get_TextAsset, addr 0x2804160, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::TextAsset> get_TextAsset();

  /// @brief Method set_TextAsset, addr 0x2804168, size 0x8, virtual false, abstract: false, final false
  inline void set_TextAsset(::UnityEngine::TextAsset* value);

  /// @brief Method get_DocsId, addr 0x2804170, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_DocsId();

  /// @brief Method set_DocsId, addr 0x2804178, size 0x8, virtual false, abstract: false, final false
  inline void set_DocsId(::StringW value);

  /// @brief Method get_SheetId, addr 0x2804180, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_SheetId();

  /// @brief Method set_SheetId, addr 0x2804188, size 0x8, virtual false, abstract: false, final false
  inline void set_SheetId(::StringW value);

  /// @brief Method get_Format, addr 0x2804190, size 0x8, virtual false, abstract: false, final false
  inline ::Polyglot::GoogleDriveDownloadFormat get_Format();

  /// @brief Method set_Format, addr 0x2804198, size 0x8, virtual false, abstract: false, final false
  inline void set_Format(::Polyglot::GoogleDriveDownloadFormat value);

  /// @brief Method get_DownloadOnStart, addr 0x28041a0, size 0x8, virtual false, abstract: false, final false
  inline bool get_DownloadOnStart();

  /// @brief Method set_DownloadOnStart, addr 0x28041a8, size 0xc, virtual false, abstract: false, final false
  inline void set_DownloadOnStart(bool value);

  static inline ::Polyglot::LocalizationDocument* New_ctor();

  /// @brief Method .ctor, addr 0x28041b4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "LocalizationDocument", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LocalizationDocument(LocalizationDocument&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LocalizationDocument", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LocalizationDocument(LocalizationDocument const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LocalizationDocument();

public:
  /// @brief Field docsId, offset: 0x10, size: 0x8, def value: None
  ::StringW ___docsId;

  /// @brief Field sheetId, offset: 0x18, size: 0x8, def value: None
  ::StringW ___sheetId;

  /// @brief Field format, offset: 0x20, size: 0x4, def value: None
  ::Polyglot::GoogleDriveDownloadFormat ___format;

  /// @brief Field textAsset, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::TextAsset> ___textAsset;

  /// @brief Field downloadOnStart, offset: 0x30, size: 0x1, def value: None
  bool ___downloadOnStart;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Polyglot::LocalizationDocument, 0x38>, "Size mismatch!");

static_assert(offsetof(::Polyglot::LocalizationDocument, ___docsId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Polyglot::LocalizationDocument, ___sheetId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Polyglot::LocalizationDocument, ___format) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Polyglot::LocalizationDocument, ___textAsset) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Polyglot::LocalizationDocument, ___downloadOnStart) == 0x30, "Offset mismatch!");

} // namespace Polyglot
NEED_NO_BOX(::Polyglot::LocalizationDocument);
DEFINE_IL2CPP_ARG_TYPE(::Polyglot::LocalizationDocument*, "Polyglot", "LocalizationDocument");
