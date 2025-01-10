#pragma once
// IWYU pragma private; include "System/LocalAppContextSwitches.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(LocalAppContextSwitches)
// Forward declare root types
namespace System {
class LocalAppContextSwitches;
}
// Write type traits
MARK_REF_PTR_T(::System::LocalAppContextSwitches);
// Dependencies System.Object
namespace System {
// Is value type: false
// CS Name: System.LocalAppContextSwitches
class CORDL_TYPE LocalAppContextSwitches : public ::System::Object {
public:
  // Declarations
  /// @brief Field DontThrowOnInvalidSurrogatePairs, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF_DontThrowOnInvalidSurrogatePairs, put = setStaticF_DontThrowOnInvalidSurrogatePairs)) bool DontThrowOnInvalidSurrogatePairs;

  /// @brief Field IgnoreEmptyKeySequences, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF_IgnoreEmptyKeySequences, put = setStaticF_IgnoreEmptyKeySequences)) bool IgnoreEmptyKeySequences;

  static inline bool getStaticF_DontThrowOnInvalidSurrogatePairs();

  static inline bool getStaticF_IgnoreEmptyKeySequences();

  static inline void setStaticF_DontThrowOnInvalidSurrogatePairs(bool value);

  static inline void setStaticF_IgnoreEmptyKeySequences(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LocalAppContextSwitches();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LocalAppContextSwitches", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LocalAppContextSwitches(LocalAppContextSwitches&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LocalAppContextSwitches", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LocalAppContextSwitches(LocalAppContextSwitches const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7147 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::LocalAppContextSwitches, 0x10>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::LocalAppContextSwitches);
DEFINE_IL2CPP_ARG_TYPE(::System::LocalAppContextSwitches*, "System", "LocalAppContextSwitches");
