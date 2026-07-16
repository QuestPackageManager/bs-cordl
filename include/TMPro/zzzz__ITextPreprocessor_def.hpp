#pragma once
// IWYU pragma private; include "TMPro/ITextPreprocessor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ITextPreprocessor)
// Forward declare root types
namespace TMPro {
class ITextPreprocessor;
}
// Write type traits
MARK_REF_T(::TMPro::ITextPreprocessor*);
DEFINE_IL2CPP_CLASS(::TMPro::ITextPreprocessor*, "TMPro", "ITextPreprocessor");
// Dependencies
namespace TMPro {
// Is value type: false
// CS Name: TMPro.ITextPreprocessor
class CORDL_TYPE ITextPreprocessor {
public:
  // Declarations
  /// @brief Method PreprocessText, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW PreprocessText(::StringW text);

  // Ctor Parameters [CppParam { name: "", ty: "ITextPreprocessor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ITextPreprocessor(ITextPreprocessor const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15826 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace TMPro
