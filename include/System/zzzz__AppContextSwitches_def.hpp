#pragma once
// IWYU pragma private; include "System\AppContextSwitches.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(AppContextSwitches)
// Forward declare root types
namespace System {
class AppContextSwitches;
}
// Write type traits
MARK_REF_T(::System::AppContextSwitches*);
DEFINE_IL2CPP_CLASS(::System::AppContextSwitches*, "System", "AppContextSwitches");
// Dependencies System.Object
namespace System {
// Is value type: false
// CS Name: System.AppContextSwitches
class CORDL_TYPE AppContextSwitches : public ::System::Object {
public:
  // Declarations
  /// @brief Field EnforceJapaneseEraYearRanges, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF_EnforceJapaneseEraYearRanges, put = setStaticF_EnforceJapaneseEraYearRanges)) bool EnforceJapaneseEraYearRanges;

  /// @brief Field EnforceLegacyJapaneseDateParsing, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF_EnforceLegacyJapaneseDateParsing, put = setStaticF_EnforceLegacyJapaneseDateParsing)) bool EnforceLegacyJapaneseDateParsing;

  /// @brief Field FormatJapaneseFirstYearAsANumber, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF_FormatJapaneseFirstYearAsANumber, put = setStaticF_FormatJapaneseFirstYearAsANumber)) bool FormatJapaneseFirstYearAsANumber;

  /// @brief Field NoAsyncCurrentCulture, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF_NoAsyncCurrentCulture, put = setStaticF_NoAsyncCurrentCulture)) bool NoAsyncCurrentCulture;

  /// @brief Field SetActorAsReferenceWhenCopyingClaimsIdentity, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF_SetActorAsReferenceWhenCopyingClaimsIdentity, put = setStaticF_SetActorAsReferenceWhenCopyingClaimsIdentity)) bool SetActorAsReferenceWhenCopyingClaimsIdentity;

  static inline bool getStaticF_EnforceJapaneseEraYearRanges();

  static inline bool getStaticF_EnforceLegacyJapaneseDateParsing();

  static inline bool getStaticF_FormatJapaneseFirstYearAsANumber();

  static inline bool getStaticF_NoAsyncCurrentCulture();

  static inline bool getStaticF_SetActorAsReferenceWhenCopyingClaimsIdentity();

  static inline void setStaticF_EnforceJapaneseEraYearRanges(bool value);

  static inline void setStaticF_EnforceLegacyJapaneseDateParsing(bool value);

  static inline void setStaticF_FormatJapaneseFirstYearAsANumber(bool value);

  static inline void setStaticF_NoAsyncCurrentCulture(bool value);

  static inline void setStaticF_SetActorAsReferenceWhenCopyingClaimsIdentity(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AppContextSwitches();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AppContextSwitches", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AppContextSwitches(AppContextSwitches&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AppContextSwitches", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AppContextSwitches(AppContextSwitches const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2550 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::AppContextSwitches) == 0x10, "Size mismatch!");

} // namespace System
