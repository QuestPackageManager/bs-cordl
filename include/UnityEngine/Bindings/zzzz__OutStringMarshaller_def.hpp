#pragma once
// IWYU pragma private; include "UnityEngine/Bindings/OutStringMarshaller.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(OutStringMarshaller)
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
// Forward declare root types
namespace UnityEngine::Bindings {
struct OutStringMarshaller;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Bindings::OutStringMarshaller);
// Dependencies
namespace UnityEngine::Bindings {
// Is value type: true
// CS Name: UnityEngine.Bindings.OutStringMarshaller
#pragma pack(push, 0)
struct CORDL_TYPE OutStringMarshaller {
public:
  // Declarations
  /// @brief Method GetStringAndDispose, addr 0x693402c, size 0x7c, virtual false, abstract: false, final false
  static inline ::StringW GetStringAndDispose(::UnityEngine::Bindings::ManagedSpanWrapper managedSpan);

  // Ctor Parameters []
  // @brief default ctor
  constexpr OutStringMarshaller();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10455 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Bindings::OutStringMarshaller, 0x1>, "Size mismatch!");

} // namespace UnityEngine::Bindings
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Bindings::OutStringMarshaller, "UnityEngine.Bindings", "OutStringMarshaller");
