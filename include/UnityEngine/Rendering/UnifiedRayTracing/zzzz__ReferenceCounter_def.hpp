#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/UnifiedRayTracing/ReferenceCounter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ReferenceCounter)
// Forward declare root types
namespace UnityEngine::Rendering::UnifiedRayTracing {
class ReferenceCounter;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::UnifiedRayTracing::ReferenceCounter*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::UnifiedRayTracing::ReferenceCounter*, "UnityEngine.Rendering.UnifiedRayTracing", "ReferenceCounter");
// Dependencies System.Object
namespace UnityEngine::Rendering::UnifiedRayTracing {
// Is value type: false
// CS Name: UnityEngine.Rendering.UnifiedRayTracing.ReferenceCounter
class CORDL_TYPE ReferenceCounter : public ::System::Object {
public:
  // Declarations
  /// @brief Field value, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_value, put = __cordl_internal_set_value)) uint64_t value;

  /// @brief Method Dec, addr 0x6e0c824, size 0x10, virtual false, abstract: false, final false
  inline void Dec();

  /// @brief Method Inc, addr 0x6e0c7e4, size 0x10, virtual false, abstract: false, final false
  inline void Inc();

  static inline ::UnityEngine::Rendering::UnifiedRayTracing::ReferenceCounter* New_ctor();

  constexpr uint64_t const& __cordl_internal_get_value() const;

  constexpr uint64_t& __cordl_internal_get_value();

  constexpr void __cordl_internal_set_value(uint64_t value);

  /// @brief Method .ctor, addr 0x6e0d0fc, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReferenceCounter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ReferenceCounter", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReferenceCounter(ReferenceCounter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReferenceCounter", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReferenceCounter(ReferenceCounter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20500 };

  /// @brief Field value, offset: 0x10, size: 0x8, def value: None
  uint64_t ___value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::ReferenceCounter, ___value) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::UnifiedRayTracing::ReferenceCounter) == 0x18, "Size mismatch!");

} // namespace UnityEngine::Rendering::UnifiedRayTracing
