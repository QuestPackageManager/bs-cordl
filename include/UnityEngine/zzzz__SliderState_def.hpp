#pragma once
// IWYU pragma private; include "UnityEngine\SliderState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SliderState)
// Forward declare root types
namespace UnityEngine {
class SliderState;
}
// Write type traits
MARK_REF_T(::UnityEngine::SliderState*);
DEFINE_IL2CPP_CLASS(::UnityEngine::SliderState*, "UnityEngine", "SliderState");
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.SliderState
class CORDL_TYPE SliderState : public ::System::Object {
public:
  // Declarations
  static inline ::UnityEngine::SliderState* New_ctor();

  /// @brief Method .ctor, addr 0x6b51bd4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SliderState();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SliderState", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SliderState(SliderState&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SliderState", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SliderState(SliderState const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19904 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::SliderState) == 0x10, "Size mismatch!");

} // namespace UnityEngine
