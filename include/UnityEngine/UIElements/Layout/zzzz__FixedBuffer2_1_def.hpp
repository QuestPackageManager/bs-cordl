#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Layout/FixedBuffer2_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FixedBuffer2_1)
// Forward declare root types
namespace UnityEngine::UIElements::Layout {
template <typename T> struct FixedBuffer2_1;
}
// Write type traits
MARK_GEN_VAL_T(::UnityEngine::UIElements::Layout::FixedBuffer2_1);
// Dependencies
namespace UnityEngine::UIElements::Layout {
// cpp template
template <typename T>
// Is value type: true
// CS Name: UnityEngine.UIElements.Layout.FixedBuffer2`1<T>
struct CORDL_TYPE FixedBuffer2_1 {
public:
  // Declarations
  __declspec(property(get = get_Item)) T Item[];

  /// @brief Method get_Item, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::ByRef<T> get_Item(int32_t index);

  // Ctor Parameters []
  // @brief default ctor
  constexpr FixedBuffer2_1();

  // Ctor Parameters [CppParam { name: "__0", ty: "T", modifiers: "", def_value: None }, CppParam { name: "__1", ty: "T", modifiers: "", def_value: None }]
  constexpr FixedBuffer2_1(T __0, T __1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5420 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field __0, offset: 0x0, size: 0x8, def value: None
  T __0;

  /// @brief Field __1, offset: 0x8, size: 0x8, def value: None
  T __1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace UnityEngine::UIElements::Layout
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::UnityEngine::UIElements::Layout::FixedBuffer2_1, "UnityEngine.UIElements.Layout", "FixedBuffer2`1");
