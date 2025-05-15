#pragma once
// IWYU pragma private; include "UnityEngine/ExecuteAlways.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(ExecuteAlways)
// Forward declare root types
namespace UnityEngine {
class ExecuteAlways;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ExecuteAlways);
// Dependencies System.Attribute
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.ExecuteAlways
class CORDL_TYPE ExecuteAlways : public ::System::Attribute {
public:
  // Declarations
  static inline ::UnityEngine::ExecuteAlways* New_ctor();

  /// @brief Method .ctor, addr 0x48a8fec, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ExecuteAlways();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ExecuteAlways", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ExecuteAlways(ExecuteAlways&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ExecuteAlways", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ExecuteAlways(ExecuteAlways const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10866 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ExecuteAlways, 0x10>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::ExecuteAlways);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ExecuteAlways*, "UnityEngine", "ExecuteAlways");
