#pragma once
// IWYU pragma private; include "UnityEngineInternal/DisplayInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DisplayInternal)
// Forward declare root types
namespace UnityEngineInternal {
class DisplayInternal;
}
// Write type traits
MARK_REF_T(::UnityEngineInternal::DisplayInternal*);
DEFINE_IL2CPP_CLASS(::UnityEngineInternal::DisplayInternal*, "UnityEngineInternal", "DisplayInternal");
// Dependencies System.Object
namespace UnityEngineInternal {
// Is value type: false
// CS Name: UnityEngineInternal.DisplayInternal
class CORDL_TYPE DisplayInternal : public ::System::Object {
public:
  // Declarations
  /// @brief Method IsASecondaryDisplayIndex, addr 0x6ead254, size 0xa8, virtual false, abstract: false, final false
  static inline bool IsASecondaryDisplayIndex(int32_t displayIndex);

  /// [FreeFunction("UnityDisplayManager_PrimaryDisplayIndex")]
  /// @brief Method PrimaryDisplayIndex, addr 0x6ead22c, size 0x28, virtual false, abstract: false, final false
  static inline int32_t PrimaryDisplayIndex();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DisplayInternal();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DisplayInternal", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DisplayInternal(DisplayInternal&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DisplayInternal", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DisplayInternal(DisplayInternal const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9481 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngineInternal::DisplayInternal) == 0x10, "Size mismatch!");

} // namespace UnityEngineInternal
