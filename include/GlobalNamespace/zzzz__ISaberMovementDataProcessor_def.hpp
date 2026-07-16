#pragma once
// IWYU pragma private; include "GlobalNamespace/ISaberMovementDataProcessor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ISaberMovementDataProcessor)
namespace GlobalNamespace {
struct BladeMovementDataElement;
}
// Forward declare root types
namespace GlobalNamespace {
class ISaberMovementDataProcessor;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ISaberMovementDataProcessor*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ISaberMovementDataProcessor*, "", "ISaberMovementDataProcessor");
// Dependencies
namespace GlobalNamespace {
// Is value type: false
// CS Name: ISaberMovementDataProcessor
class CORDL_TYPE ISaberMovementDataProcessor {
public:
  // Declarations
  /// @brief Method ProcessNewData, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void ProcessNewData(::GlobalNamespace::BladeMovementDataElement newData, ::GlobalNamespace::BladeMovementDataElement prevData, bool prevDataAreValid);

  // Ctor Parameters [CppParam { name: "", ty: "ISaberMovementDataProcessor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ISaberMovementDataProcessor(ISaberMovementDataProcessor const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21136 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
