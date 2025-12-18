#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ListChangedEventArgs_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__EventArgs_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ListChangedEventArgs_1)
// Forward declare root types
namespace UnityEngine::Rendering {
template <typename T> class ListChangedEventArgs_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::Rendering::ListChangedEventArgs_1);
// Dependencies System.EventArgs
namespace UnityEngine::Rendering {
// cpp template
template <typename T>
// Is value type: false
// CS Name: UnityEngine.Rendering.ListChangedEventArgs`1<T>
class CORDL_TYPE ListChangedEventArgs_1 : public ::System::EventArgs {
public:
  // Declarations
  /// @brief Field index, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_index, put = __cordl_internal_set_index)) int32_t index;

  /// @brief Field item, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_item, put = __cordl_internal_set_item)) T item;

  static inline ::UnityEngine::Rendering::ListChangedEventArgs_1<T>* New_ctor(int32_t index, T item);

  constexpr int32_t const& __cordl_internal_get_index() const;

  constexpr int32_t& __cordl_internal_get_index();

  constexpr T const& __cordl_internal_get_item() const;

  constexpr T& __cordl_internal_get_item();

  constexpr void __cordl_internal_set_index(int32_t value);

  constexpr void __cordl_internal_set_item(T value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(int32_t index, T item);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ListChangedEventArgs_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ListChangedEventArgs_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ListChangedEventArgs_1(ListChangedEventArgs_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ListChangedEventArgs_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ListChangedEventArgs_1(ListChangedEventArgs_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11908 };

  /// @brief Field index, offset: 0x10, size: 0x4, def value: None
  int32_t ___index;

  /// @brief Field item, offset: 0x18, size: 0x8, def value: None
  T ___item;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::Rendering::ListChangedEventArgs_1, "UnityEngine.Rendering", "ListChangedEventArgs`1");
