#pragma once
// IWYU pragma private; include "BeatSaber/GameSettings/LanguageHelper.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(LanguageHelper)
namespace BGLib::Polyglot {
struct Language;
}
// Forward declare root types
namespace BeatSaber::GameSettings {
class LanguageHelper;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::GameSettings::LanguageHelper);
// Type: BeatSaber.GameSettings::LanguageHelper
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace BeatSaber::GameSettings {
// Is value type: false
// CS Name: ::BeatSaber.GameSettings::LanguageHelper*
class CORDL_TYPE LanguageHelper : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetDefaultLanguage, addr 0x106d698, size 0x94, virtual false, abstract: false, final false
  static inline ::BGLib::Polyglot::Language GetDefaultLanguage();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LanguageHelper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LanguageHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LanguageHelper(LanguageHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LanguageHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LanguageHelper(LanguageHelper const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::GameSettings::LanguageHelper, 0x10>, "Size mismatch!");

} // namespace BeatSaber::GameSettings
NEED_NO_BOX(::BeatSaber::GameSettings::LanguageHelper);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::GameSettings::LanguageHelper*, "BeatSaber.GameSettings", "LanguageHelper");
