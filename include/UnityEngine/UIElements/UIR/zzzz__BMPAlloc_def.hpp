#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/UIR/zzzz__OwnedState_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BMPAlloc)
namespace UnityEngine::UIElements::UIR {
struct OwnedState;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
struct BMPAlloc;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::UIR::BMPAlloc);
// Type: UnityEngine.UIElements.UIR::BMPAlloc
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UIElements::UIR {
// Is value type: true
// CS Name: ::UnityEngine.UIElements.UIR::BMPAlloc
struct CORDL_TYPE BMPAlloc {
public:
  // Declarations
  /// @brief Field Invalid, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Invalid, put = setStaticF_Invalid))::UnityEngine::UIElements::UIR::BMPAlloc Invalid;

  /// @brief Method Equals, addr 0x2ff01cc, size 0x38, virtual false, abstract: false, final false
  inline bool Equals(::UnityEngine::UIElements::UIR::BMPAlloc other);

  /// @brief Method IsValid, addr 0x2ff0204, size 0x10, virtual false, abstract: false, final false
  inline bool IsValid();

  /// @brief Method ToString, addr 0x2ff0214, size 0xf4, virtual true, abstract: false, final false
  inline ::StringW ToString();

  static inline ::UnityEngine::UIElements::UIR::BMPAlloc getStaticF_Invalid();

  static inline void setStaticF_Invalid(::UnityEngine::UIElements::UIR::BMPAlloc value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr BMPAlloc();

  // Ctor Parameters [CppParam { name: "page", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "pageLine", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name:
  // "bitIndex", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "ownedState", ty: "::UnityEngine::UIElements::UIR::OwnedState", modifiers: "", def_value: None }]
  constexpr BMPAlloc(int32_t page, uint16_t pageLine, uint8_t bitIndex, ::UnityEngine::UIElements::UIR::OwnedState ownedState) noexcept;

  /// @brief Field page, offset: 0x0, size: 0x4, def value: None
  int32_t page;

  /// @brief Field pageLine, offset: 0x4, size: 0x2, def value: None
  uint16_t pageLine;

  /// @brief Field bitIndex, offset: 0x6, size: 0x1, def value: None
  uint8_t bitIndex;

  /// @brief Field ownedState, offset: 0x7, size: 0x1, def value: None
  ::UnityEngine::UIElements::UIR::OwnedState ownedState;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::BMPAlloc, 0x8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::BMPAlloc, page) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::BMPAlloc, pageLine) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::BMPAlloc, bitIndex) == 0x6, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::BMPAlloc, ownedState) == 0x7, "Offset mismatch!");

} // namespace UnityEngine::UIElements::UIR
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::BMPAlloc, "UnityEngine.UIElements.UIR", "BMPAlloc");
