#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/IDebugData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IDebugData)
namespace System {
class Action;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class IDebugData;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::IDebugData*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::IDebugData*, "UnityEngine.Rendering", "IDebugData");
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.IDebugData
class CORDL_TYPE IDebugData {
public:
  // Declarations
  /// @brief Method GetReset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Action* GetReset();

  // Ctor Parameters [CppParam { name: "", ty: "IDebugData", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IDebugData(IDebugDataconst&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11987 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Rendering
