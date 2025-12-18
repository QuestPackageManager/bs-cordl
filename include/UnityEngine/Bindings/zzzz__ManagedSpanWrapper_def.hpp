#pragma once
// IWYU pragma private; include "UnityEngine/Bindings/ManagedSpanWrapper.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ManagedSpanWrapper)
// Forward declare root types
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Bindings::ManagedSpanWrapper);
// Dependencies
namespace UnityEngine::Bindings {
// Is value type: true
// CS Name: UnityEngine.Bindings.ManagedSpanWrapper
struct CORDL_TYPE ManagedSpanWrapper {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x69293b4, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(void* begin, int32_t length);

  // Ctor Parameters []
  // @brief default ctor
  constexpr ManagedSpanWrapper();

  // Ctor Parameters [CppParam { name: "begin", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "length", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ManagedSpanWrapper(void* begin, int32_t length) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10453 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field begin, offset: 0x0, size: 0x8, def value: None
  void* begin;

  /// @brief Field length, offset: 0x8, size: 0x4, def value: None
  int32_t length;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Bindings::ManagedSpanWrapper, begin) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Bindings::ManagedSpanWrapper, length) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Bindings::ManagedSpanWrapper, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Bindings
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Bindings::ManagedSpanWrapper, "UnityEngine.Bindings", "ManagedSpanWrapper");
