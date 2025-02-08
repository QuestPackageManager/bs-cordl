#pragma once
// IWYU pragma private; include "BGLib/Polyglot/LocalizationAsset.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BGLib/Polyglot/zzzz__GoogleDriveDownloadFormat_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(LocalizationAsset)
namespace BGLib::Polyglot {
struct GoogleDriveDownloadFormat;
}
namespace UnityEngine {
class TextAsset;
}
// Forward declare root types
namespace BGLib::Polyglot {
class LocalizationAsset;
}
// Write type traits
MARK_REF_PTR_T(::BGLib::Polyglot::LocalizationAsset);
// Dependencies BGLib.Polyglot.GoogleDriveDownloadFormat, System.Object
namespace BGLib::Polyglot {
// Is value type: false
// CS Name: BGLib.Polyglot.LocalizationAsset
class CORDL_TYPE LocalizationAsset : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Format)) ::BGLib::Polyglot::GoogleDriveDownloadFormat Format;

  __declspec(property(get = get_TextAsset)) ::UnityW<::UnityEngine::TextAsset> TextAsset;

  /// @brief Field format, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_format, put = __cordl_internal_set_format)) ::BGLib::Polyglot::GoogleDriveDownloadFormat format;

  /// @brief Field textAsset, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_textAsset, put = __cordl_internal_set_textAsset)) ::UnityW<::UnityEngine::TextAsset> textAsset;

  static inline ::BGLib::Polyglot::LocalizationAsset* New_ctor(::UnityEngine::TextAsset* textAsset, ::BGLib::Polyglot::GoogleDriveDownloadFormat format);

  constexpr ::BGLib::Polyglot::GoogleDriveDownloadFormat const& __cordl_internal_get_format() const;

  constexpr ::BGLib::Polyglot::GoogleDriveDownloadFormat& __cordl_internal_get_format();

  constexpr ::UnityW<::UnityEngine::TextAsset> const& __cordl_internal_get_textAsset() const;

  constexpr ::UnityW<::UnityEngine::TextAsset>& __cordl_internal_get_textAsset();

  constexpr void __cordl_internal_set_format(::BGLib::Polyglot::GoogleDriveDownloadFormat value);

  constexpr void __cordl_internal_set_textAsset(::UnityW<::UnityEngine::TextAsset> value);

  /// @brief Method .ctor, addr 0x22af5c0, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::TextAsset* textAsset, ::BGLib::Polyglot::GoogleDriveDownloadFormat format);

  /// @brief Method get_Format, addr 0x22af5b8, size 0x8, virtual false, abstract: false, final false
  inline ::BGLib::Polyglot::GoogleDriveDownloadFormat get_Format();

  /// @brief Method get_TextAsset, addr 0x22af5b0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::TextAsset> get_TextAsset();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LocalizationAsset();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LocalizationAsset", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LocalizationAsset(LocalizationAsset&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LocalizationAsset", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LocalizationAsset(LocalizationAsset const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18050 };

  /// @brief Field textAsset, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::TextAsset> ___textAsset;

  /// @brief Field format, offset: 0x18, size: 0x4, def value: None
  ::BGLib::Polyglot::GoogleDriveDownloadFormat ___format;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BGLib::Polyglot::LocalizationAsset, ___textAsset) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BGLib::Polyglot::LocalizationAsset, ___format) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BGLib::Polyglot::LocalizationAsset, 0x20>, "Size mismatch!");

} // namespace BGLib::Polyglot
NEED_NO_BOX(::BGLib::Polyglot::LocalizationAsset);
DEFINE_IL2CPP_ARG_TYPE(::BGLib::Polyglot::LocalizationAsset*, "BGLib.Polyglot", "LocalizationAsset");
