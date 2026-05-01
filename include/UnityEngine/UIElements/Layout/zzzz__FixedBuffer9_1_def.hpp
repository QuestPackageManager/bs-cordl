#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Layout/FixedBuffer9_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FixedBuffer9_1)
// Forward declare root types
namespace UnityEngine::UIElements::Layout {
template <typename T> struct FixedBuffer9_1;
}
// Write type traits
MARK_GEN_VAL_T(::UnityEngine::UIElements::Layout::FixedBuffer9_1);
// Dependencies
namespace UnityEngine::UIElements::Layout {
// cpp template
template <typename T>
// Is value type: true
// CS Name: UnityEngine.UIElements.Layout.FixedBuffer9`1<T>
struct CORDL_TYPE FixedBuffer9_1 {
public:
  // Declarations
  __declspec(property(get = get_Item)) T Item[];

  /// @brief Method get_Item, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::ByRef<T> get_Item(int32_t index);

  // Ctor Parameters []
  // @brief default ctor
  constexpr FixedBuffer9_1();

  // Ctor Parameters [CppParam { name: "__0", ty: "T", modifiers: "", def_value: None }, CppParam { name: "__1", ty: "T", modifiers: "", def_value: None }, CppParam { name: "__2", ty: "T", modifiers:
  // "", def_value: None }, CppParam { name: "__3", ty: "T", modifiers: "", def_value: None }, CppParam { name: "__4", ty: "T", modifiers: "", def_value: None }, CppParam { name: "__5", ty: "T",
  // modifiers: "", def_value: None }, CppParam { name: "__6", ty: "T", modifiers: "", def_value: None }, CppParam { name: "__7", ty: "T", modifiers: "", def_value: None }, CppParam { name: "__8", ty:
  // "T", modifiers: "", def_value: None }]
  constexpr FixedBuffer9_1(T __0, T __1, T __2, T __3, T __4, T __5, T __6, T __7, T __8) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5421 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  /// @brief Field __0, offset: 0x0, size: 0x8, def value: None
  T __0;

  /// @brief Field __1, offset: 0x8, size: 0x8, def value: None
  T __1;

  /// @brief Field __2, offset: 0x10, size: 0x8, def value: None
  T __2;

  /// @brief Field __3, offset: 0x18, size: 0x8, def value: None
  T __3;

  /// @brief Field __4, offset: 0x20, size: 0x8, def value: None
  T __4;

  /// @brief Field __5, offset: 0x28, size: 0x8, def value: None
  T __5;

  /// @brief Field __6, offset: 0x30, size: 0x8, def value: None
  T __6;

  /// @brief Field __7, offset: 0x38, size: 0x8, def value: None
  T __7;

  /// @brief Field __8, offset: 0x40, size: 0x8, def value: None
  T __8;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace UnityEngine::UIElements::Layout
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::UnityEngine::UIElements::Layout::FixedBuffer9_1, "UnityEngine.UIElements.Layout", "FixedBuffer9`1");
