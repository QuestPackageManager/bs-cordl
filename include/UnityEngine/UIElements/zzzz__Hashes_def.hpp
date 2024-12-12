#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Hashes.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Hashes)
namespace UnityEngine::UIElements {
struct Hashes__hashes_e__FixedBuffer;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct Hashes;
}
namespace UnityEngine::UIElements {
struct Hashes__hashes_e__FixedBuffer;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::Hashes);
MARK_VAL_T(::UnityEngine::UIElements::Hashes__hashes_e__FixedBuffer);
// Dependencies
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.Hashes/<hashes>e__FixedBuffer
#pragma pack(push, 0)
struct CORDL_TYPE Hashes__hashes_e__FixedBuffer {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr Hashes__hashes_e__FixedBuffer();

  // Ctor Parameters [CppParam { name: "FixedElementField", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr Hashes__hashes_e__FixedBuffer(int32_t FixedElementField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6163 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field FixedElementField, offset: 0x0, size: 0x4, def value: None
  int32_t FixedElementField;

  /// @brief Size padding 0x10 - 0x4 = 0xc, packed as 0xc
  uint8_t _cordl_size_padding[0xc];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::Hashes__hashes_e__FixedBuffer, FixedElementField) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Hashes__hashes_e__FixedBuffer, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.Hashes::<hashes>e__FixedBuffer
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.Hashes
struct CORDL_TYPE Hashes {
public:
  // Declarations
  using _hashes_e__FixedBuffer = ::UnityEngine::UIElements::Hashes__hashes_e__FixedBuffer;

  // Ctor Parameters []
  // @brief default ctor
  constexpr Hashes();

  // Ctor Parameters [CppParam { name: "hashes", ty: "::UnityEngine::UIElements::Hashes__hashes_e__FixedBuffer", modifiers: "", def_value: None }]
  constexpr Hashes(::UnityEngine::UIElements::Hashes__hashes_e__FixedBuffer hashes) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6164 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field kSize offset 0xffffffff size 0x4
  static constexpr int32_t kSize{ static_cast<int32_t>(0x4) };

  /// @brief Field hashes, offset: 0x0, size: 0x10, def value: None
  ::UnityEngine::UIElements::Hashes__hashes_e__FixedBuffer hashes;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::Hashes, hashes) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Hashes, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Hashes, "UnityEngine.UIElements", "Hashes");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Hashes__hashes_e__FixedBuffer, "UnityEngine.UIElements", "Hashes/<hashes>e__FixedBuffer");
