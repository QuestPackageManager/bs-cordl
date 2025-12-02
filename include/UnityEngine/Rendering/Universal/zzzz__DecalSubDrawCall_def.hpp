#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/DecalSubDrawCall.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DecalSubDrawCall)
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
struct DecalSubDrawCall;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::Universal::DecalSubDrawCall);
// Dependencies
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.DecalSubDrawCall
struct CORDL_TYPE DecalSubDrawCall {
public:
  // Declarations
  __declspec(property(get = get_count)) int32_t count;

  /// @brief Method get_count, addr 0x6639ed8, size 0xc, virtual false, abstract: false, final false
  inline int32_t get_count();

  // Ctor Parameters []
  // @brief default ctor
  constexpr DecalSubDrawCall();

  // Ctor Parameters [CppParam { name: "start", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "end", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr DecalSubDrawCall(int32_t start, int32_t end) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12659 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field start, offset: 0x0, size: 0x4, def value: None
  int32_t start;

  /// @brief Field end, offset: 0x4, size: 0x4, def value: None
  int32_t end;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalSubDrawCall, start) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalSubDrawCall, end) == 0x4, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::DecalSubDrawCall, 0x8>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::DecalSubDrawCall, "UnityEngine.Rendering.Universal", "DecalSubDrawCall");
