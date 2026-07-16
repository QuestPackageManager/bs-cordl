#pragma once
// IWYU pragma private; include "UnityEngine/ExecuteInEditMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(ExecuteInEditMode)
// Forward declare root types
namespace UnityEngine {
class ExecuteInEditMode;
}
// Write type traits
MARK_REF_T(::UnityEngine::ExecuteInEditMode*);
DEFINE_IL2CPP_CLASS(::UnityEngine::ExecuteInEditMode*, "UnityEngine", "ExecuteInEditMode");
// Dependencies System.Attribute
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.ExecuteInEditMode
class CORDL_TYPE ExecuteInEditMode : public ::System::Attribute {
public:
  // Declarations
  static inline ::UnityEngine::ExecuteInEditMode* New_ctor();

  /// @brief Method .ctor, addr 0x6ad7814, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ExecuteInEditMode();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ExecuteInEditMode", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ExecuteInEditMode(ExecuteInEditMode&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ExecuteInEditMode", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ExecuteInEditMode(ExecuteInEditMode const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10280 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::ExecuteInEditMode) == 0x10, "Size mismatch!");

} // namespace UnityEngine
