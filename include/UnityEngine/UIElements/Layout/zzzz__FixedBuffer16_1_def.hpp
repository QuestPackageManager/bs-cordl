#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Layout/FixedBuffer16_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(FixedBuffer16_1)
// Forward declare root types
namespace UnityEngine::UIElements::Layout {
template <typename T> struct FixedBuffer16_1;
}
// Write type traits
MARK_GEN_VAL_T(::UnityEngine::UIElements::Layout::FixedBuffer16_1);
// Dependencies
namespace UnityEngine::UIElements::Layout {
// cpp template
template <typename T>
// Is value type: true
// CS Name: UnityEngine.UIElements.Layout.FixedBuffer16`1<T>
struct CORDL_TYPE FixedBuffer16_1 {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr FixedBuffer16_1();

  // Ctor Parameters [CppParam { name: "__0", ty: "T", modifiers: "", def_value: None }, CppParam { name: "__1", ty: "T", modifiers: "", def_value: None }, CppParam { name: "__2", ty: "T", modifiers:
  // "", def_value: None }, CppParam { name: "__3", ty: "T", modifiers: "", def_value: None }, CppParam { name: "__4", ty: "T", modifiers: "", def_value: None }, CppParam { name: "__5", ty: "T",
  // modifiers: "", def_value: None }, CppParam { name: "__6", ty: "T", modifiers: "", def_value: None }, CppParam { name: "__7", ty: "T", modifiers: "", def_value: None }, CppParam { name: "__8", ty:
  // "T", modifiers: "", def_value: None }, CppParam { name: "__9", ty: "T", modifiers: "", def_value: None }, CppParam { name: "_10", ty: "T", modifiers: "", def_value: None }, CppParam { name:
  // "_11", ty: "T", modifiers: "", def_value: None }, CppParam { name: "_12", ty: "T", modifiers: "", def_value: None }, CppParam { name: "_13", ty: "T", modifiers: "", def_value: None }, CppParam {
  // name: "_14", ty: "T", modifiers: "", def_value: None }, CppParam { name: "_15", ty: "T", modifiers: "", def_value: None }]
  constexpr FixedBuffer16_1(T __0, T __1, T __2, T __3, T __4, T __5, T __6, T __7, T __8, T __9, T _10, T _11, T _12, T _13, T _14, T _15) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5422 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x80 };

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

  /// @brief Field __9, offset: 0x48, size: 0x8, def value: None
  T __9;

  /// @brief Field _10, offset: 0x50, size: 0x8, def value: None
  T _10;

  /// @brief Field _11, offset: 0x58, size: 0x8, def value: None
  T _11;

  /// @brief Field _12, offset: 0x60, size: 0x8, def value: None
  T _12;

  /// @brief Field _13, offset: 0x68, size: 0x8, def value: None
  T _13;

  /// @brief Field _14, offset: 0x70, size: 0x8, def value: None
  T _14;

  /// @brief Field _15, offset: 0x78, size: 0x8, def value: None
  T _15;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace UnityEngine::UIElements::Layout
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::UnityEngine::UIElements::Layout::FixedBuffer16_1, "UnityEngine.UIElements.Layout", "FixedBuffer16`1");
