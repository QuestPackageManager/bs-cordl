#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Polyglot/zzzz__GoogleDriveDownloadFormat_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(LocalizationAsset)
namespace UnityEngine {
class TextAsset;
}
namespace Polyglot {
struct GoogleDriveDownloadFormat;
}
// Forward declare root types
namespace Polyglot {
class LocalizationAsset;
}
// Write type traits
MARK_REF_PTR_T(::Polyglot::LocalizationAsset);
// Type: Polyglot::LocalizationAsset
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Polyglot {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(15552))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15559))
// CS Name: ::Polyglot::LocalizationAsset*
class CORDL_TYPE LocalizationAsset : public ::System::Object {
public:
  // Declarations
  /// @brief Field textAsset, offset 0x10, size 0x8
  __declspec(property(get = __get_textAsset, put = __set_textAsset))::UnityEngine::TextAsset* textAsset;

  /// @brief Field format, offset 0x18, size 0x4
  __declspec(property(get = __get_format, put = __set_format))::Polyglot::GoogleDriveDownloadFormat format;

  __declspec(property(get = get_TextAsset, put = set_TextAsset))::UnityEngine::TextAsset* TextAsset;

  __declspec(property(get = get_Format, put = set_Format))::Polyglot::GoogleDriveDownloadFormat Format;

  constexpr ::UnityEngine::TextAsset*& __get_textAsset();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::TextAsset*> const& __get_textAsset() const;

  constexpr void __set_textAsset(::UnityEngine::TextAsset* value);

  constexpr ::Polyglot::GoogleDriveDownloadFormat& __get_format();

  constexpr ::Polyglot::GoogleDriveDownloadFormat const& __get_format() const;

  constexpr void __set_format(::Polyglot::GoogleDriveDownloadFormat value);

  /// @brief Method get_TextAsset, addr 0x2804138, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::TextAsset* get_TextAsset();

  /// @brief Method set_TextAsset, addr 0x2804140, size 0x8, virtual false, abstract: false, final false
  inline void set_TextAsset(::UnityEngine::TextAsset* value);

  /// @brief Method get_Format, addr 0x2804148, size 0x8, virtual false, abstract: false, final false
  inline ::Polyglot::GoogleDriveDownloadFormat get_Format();

  /// @brief Method set_Format, addr 0x2804150, size 0x8, virtual false, abstract: false, final false
  inline void set_Format(::Polyglot::GoogleDriveDownloadFormat value);

  static inline ::Polyglot::LocalizationAsset* New_ctor();

  /// @brief Method .ctor, addr 0x2804158, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "LocalizationAsset", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LocalizationAsset(LocalizationAsset&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LocalizationAsset", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LocalizationAsset(LocalizationAsset const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LocalizationAsset();

public:
  /// @brief Field textAsset, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::TextAsset* ___textAsset;

  /// @brief Field format, offset: 0x18, size: 0x4, def value: None
  ::Polyglot::GoogleDriveDownloadFormat ___format;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Polyglot::LocalizationAsset, 0x20>, "Size mismatch!");

static_assert(offsetof(::Polyglot::LocalizationAsset, ___textAsset) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Polyglot::LocalizationAsset, ___format) == 0x18, "Offset mismatch!");

} // namespace Polyglot
NEED_NO_BOX(::Polyglot::LocalizationAsset);
DEFINE_IL2CPP_ARG_TYPE(::Polyglot::LocalizationAsset*, "Polyglot", "LocalizationAsset");
