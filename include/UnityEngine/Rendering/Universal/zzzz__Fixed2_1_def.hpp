#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/Fixed2_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Fixed2_1)
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
template <typename T> struct Fixed2_1;
}
// Write type traits
MARK_GEN_VAL_T(::UnityEngine::Rendering::Universal::Fixed2_1);
// Dependencies
namespace UnityEngine::Rendering::Universal {
// cpp template
template <typename T>
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.Fixed2`1<T>
struct CORDL_TYPE Fixed2_1 {
public:
  // Declarations
  __declspec(property(get = get_Item, put = set_Item)) T Item[];

  /// @brief Method CheckRange, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void CheckRange(int32_t index);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(T item1);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(T item1, T item2);

  /// @brief Method get_Item, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T get_Item(int32_t index);

  /// @brief Method set_Item, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_Item(int32_t index, T value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr Fixed2_1();

  // Ctor Parameters [CppParam { name: "item1", ty: "T", modifiers: "", def_value: None }, CppParam { name: "item2", ty: "T", modifiers: "", def_value: None }]
  constexpr Fixed2_1(T item1, T item2) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12750 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field item1, offset: 0x0, size: 0x8, def value: None
  T item1;

  /// @brief Field item2, offset: 0x8, size: 0x8, def value: None
  T item2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace UnityEngine::Rendering::Universal
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::UnityEngine::Rendering::Universal::Fixed2_1, "UnityEngine.Rendering.Universal", "Fixed2`1");
