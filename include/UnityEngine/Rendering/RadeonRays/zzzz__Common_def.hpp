#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RadeonRays/Common.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Common)
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine {
class ComputeShader;
}
// Forward declare root types
namespace UnityEngine::Rendering::RadeonRays {
class Common;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::RadeonRays::Common*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::RadeonRays::Common*, "UnityEngine.Rendering.RadeonRays", "Common");
// Dependencies System.Object
namespace UnityEngine::Rendering::RadeonRays {
// Is value type: false
// CS Name: UnityEngine.Rendering.RadeonRays.Common
class CORDL_TYPE Common : public ::System::Object {
public:
  // Declarations
  /// @brief Method CeilDivide, addr 0x6dfb71c, size 0x10, virtual false, abstract: false, final false
  static inline uint32_t CeilDivide(uint32_t val, uint32_t div);

  /// @brief Method EnableKeyword, addr 0x6dfb72c, size 0xa8, virtual false, abstract: false, final false
  static inline void EnableKeyword(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::ComputeShader* shader, ::StringW keyword, bool enable);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Common();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Common", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Common(Common&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Common", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Common(Common const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20421 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::RadeonRays::Common) == 0x10, "Size mismatch!");

} // namespace UnityEngine::Rendering::RadeonRays
