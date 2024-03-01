#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DefaultExecutionOrder)
// Forward declare root types
namespace UnityEngine {
class DefaultExecutionOrder;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::DefaultExecutionOrder);
// Type: UnityEngine::DefaultExecutionOrder
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::DefaultExecutionOrder*
class CORDL_TYPE DefaultExecutionOrder : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field m_Order, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Order, put = __cordl_internal_set_m_Order)) int32_t m_Order;

  __declspec(property(get = get_order)) int32_t order;

  static inline ::UnityEngine::DefaultExecutionOrder* New_ctor(int32_t order);

  constexpr int32_t const& __cordl_internal_get_m_Order() const;

  constexpr int32_t& __cordl_internal_get_m_Order();

  constexpr void __cordl_internal_set_m_Order(int32_t value);

  /// @brief Method .ctor, addr 0x2dc4f60, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t order);

  /// @brief Method get_order, addr 0x2dc0194, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_order();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DefaultExecutionOrder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DefaultExecutionOrder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DefaultExecutionOrder(DefaultExecutionOrder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DefaultExecutionOrder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DefaultExecutionOrder(DefaultExecutionOrder const&) = delete;

  /// @brief Field m_Order, offset: 0x10, size: 0x4, def value: None
  int32_t ___m_Order;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::DefaultExecutionOrder, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::DefaultExecutionOrder, ___m_Order) == 0x10, "Offset mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::DefaultExecutionOrder);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::DefaultExecutionOrder*, "UnityEngine", "DefaultExecutionOrder");
