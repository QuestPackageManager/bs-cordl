#pragma once
// IWYU pragma private; include "BGLib\Polyglot\LocalizationImporter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(LocalizationImporter)
namespace BGLib::Polyglot {
class LocalizationAsset;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace BGLib::Polyglot {
class LocalizationImporter;
}
// Write type traits
MARK_REF_T(::BGLib::Polyglot::LocalizationImporter*);
DEFINE_IL2CPP_CLASS(::BGLib::Polyglot::LocalizationImporter*, "BGLib.Polyglot", "LocalizationImporter");
// Dependencies System.Object
namespace BGLib::Polyglot {
// Is value type: false
// CS Name: BGLib.Polyglot.LocalizationImporter
class CORDL_TYPE LocalizationImporter : public ::System::Object {
public:
  // Declarations
  /// @brief Method ImportFromFiles, addr 0x331d0e0, size 0x24c, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::StringW>*>*
  ImportFromFiles(::System::Collections::Generic::List_1<::BGLib::Polyglot::LocalizationAsset*>* inputFiles);

  /// @brief Method ImportTextFile, addr 0x331d32c, size 0x650, virtual false, abstract: false, final false
  static inline void ImportTextFile(::StringW text, ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::StringW>*>* result);

  /// @brief Method IsLineBreak, addr 0x331d97c, size 0x60, virtual false, abstract: false, final false
  static inline bool IsLineBreak(::StringW currentString);

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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22209 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::BGLib::Polyglot::LocalizationImporter) == 0x10, "Size mismatch!");

} // namespace BGLib::Polyglot
