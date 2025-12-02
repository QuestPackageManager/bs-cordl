#pragma once
// IWYU pragma private; include "UnityEngine/TagHandle.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TagHandle)
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
// Forward declare root types
namespace UnityEngine {
struct TagHandle;
}
// Write type traits
MARK_VAL_T(::UnityEngine::TagHandle);
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.TagHandle
struct CORDL_TYPE TagHandle {
public:
  // Declarations
  /// @brief Method TagToString, addr 0x68b37c4, size 0xcc, virtual false, abstract: false, final false
  static inline ::StringW TagToString(uint32_t tagIndex);

  /// @brief Method TagToString_Injected, addr 0x68b3890, size 0x44, virtual false, abstract: false, final false
  static inline void TagToString_Injected(uint32_t tagIndex, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> ret);

  /// @brief Method ToString, addr 0x68b37bc, size 0x8, virtual true, abstract: false, final false
  inline ::StringW ToString();

  // Ctor Parameters []
  // @brief default ctor
  constexpr TagHandle();

  // Ctor Parameters [CppParam { name: "_tagIndex", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr TagHandle(uint32_t _tagIndex) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10343 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field _tagIndex, offset: 0x0, size: 0x4, def value: None
  uint32_t _tagIndex;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::TagHandle, _tagIndex) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::TagHandle, 0x4>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TagHandle, "UnityEngine", "TagHandle");
