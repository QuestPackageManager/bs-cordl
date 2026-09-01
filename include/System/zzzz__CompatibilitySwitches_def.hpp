#pragma once
// IWYU pragma private; include "System\CompatibilitySwitches.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(CompatibilitySwitches)
// Forward declare root types
namespace System {
class CompatibilitySwitches;
}
// Write type traits
MARK_REF_T(::System::CompatibilitySwitches*);
DEFINE_IL2CPP_CLASS(::System::CompatibilitySwitches*, "System", "CompatibilitySwitches");
// Dependencies System.Object
namespace System {
// Is value type: false
// CS Name: System.CompatibilitySwitches
class CORDL_TYPE CompatibilitySwitches : public ::System::Object {
public:
  // Declarations
  /// @brief Field IsAppEarlierThanWindowsPhone8, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF_IsAppEarlierThanWindowsPhone8, put = setStaticF_IsAppEarlierThanWindowsPhone8)) bool IsAppEarlierThanWindowsPhone8;

  static inline bool getStaticF_IsAppEarlierThanWindowsPhone8();

  static inline void setStaticF_IsAppEarlierThanWindowsPhone8(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CompatibilitySwitches();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CompatibilitySwitches", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CompatibilitySwitches(CompatibilitySwitches&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CompatibilitySwitches", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CompatibilitySwitches(CompatibilitySwitches const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2587 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::CompatibilitySwitches) == 0x10, "Size mismatch!");

} // namespace System
