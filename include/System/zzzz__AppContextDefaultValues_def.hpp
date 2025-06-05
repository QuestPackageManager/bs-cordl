#pragma once
// IWYU pragma private; include "System/AppContextDefaultValues.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AppContextDefaultValues)
// Forward declare root types
namespace System {
class AppContextDefaultValues;
}
// Write type traits
MARK_REF_PTR_T(::System::AppContextDefaultValues);
// Dependencies System.Object
namespace System {
// Is value type: false
// CS Name: System.AppContextDefaultValues
class CORDL_TYPE AppContextDefaultValues : public ::System::Object {
public:
  // Declarations
  /// @brief Field SwitchEnforceJapaneseEraYearRanges, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_SwitchEnforceJapaneseEraYearRanges, put = setStaticF_SwitchEnforceJapaneseEraYearRanges)) ::StringW SwitchEnforceJapaneseEraYearRanges;

  /// @brief Field SwitchEnforceLegacyJapaneseDateParsing, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_SwitchEnforceLegacyJapaneseDateParsing, put = setStaticF_SwitchEnforceLegacyJapaneseDateParsing)) ::StringW SwitchEnforceLegacyJapaneseDateParsing;

  /// @brief Field SwitchFormatJapaneseFirstYearAsANumber, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_SwitchFormatJapaneseFirstYearAsANumber, put = setStaticF_SwitchFormatJapaneseFirstYearAsANumber)) ::StringW SwitchFormatJapaneseFirstYearAsANumber;

  /// @brief Method PopulateDefaultValues, addr 0x3e30330, size 0x4, virtual false, abstract: false, final false
  static inline void PopulateDefaultValues();

  /// @brief Method TryGetSwitchOverride, addr 0x3e30334, size 0xc, virtual false, abstract: false, final false
  static inline bool TryGetSwitchOverride(::StringW switchName, ::ByRef<bool> overrideValue);

  static inline ::StringW getStaticF_SwitchEnforceJapaneseEraYearRanges();

  static inline ::StringW getStaticF_SwitchEnforceLegacyJapaneseDateParsing();

  static inline ::StringW getStaticF_SwitchFormatJapaneseFirstYearAsANumber();

  static inline void setStaticF_SwitchEnforceJapaneseEraYearRanges(::StringW value);

  static inline void setStaticF_SwitchEnforceLegacyJapaneseDateParsing(::StringW value);

  static inline void setStaticF_SwitchFormatJapaneseFirstYearAsANumber(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AppContextDefaultValues();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AppContextDefaultValues", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AppContextDefaultValues(AppContextDefaultValues&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AppContextDefaultValues", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AppContextDefaultValues(AppContextDefaultValues const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2576 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::AppContextDefaultValues, 0x10>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::AppContextDefaultValues);
DEFINE_IL2CPP_ARG_TYPE(::System::AppContextDefaultValues*, "System", "AppContextDefaultValues");
