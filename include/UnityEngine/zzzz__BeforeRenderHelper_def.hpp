#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BeforeRenderHelper)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::Events {
class UnityAction;
}
namespace UnityEngine {
struct __BeforeRenderHelper__OrderBlock;
}
// Forward declare root types
namespace UnityEngine {
class BeforeRenderHelper;
}
namespace UnityEngine {
struct __BeforeRenderHelper__OrderBlock;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::BeforeRenderHelper);
MARK_VAL_T(::UnityEngine::__BeforeRenderHelper__OrderBlock);
// Type: ::OrderBlock
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// CS Name: ::BeforeRenderHelper::OrderBlock
struct CORDL_TYPE __BeforeRenderHelper__OrderBlock {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeforeRenderHelper__OrderBlock();

  // Ctor Parameters [CppParam { name: "order", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "callback", ty: "::UnityEngine::Events::UnityAction*", modifiers: "", def_value: None
  // }]
  constexpr __BeforeRenderHelper__OrderBlock(int32_t order, ::UnityEngine::Events::UnityAction* callback) noexcept;

  /// @brief Field order, offset: 0x0, size: 0x4, def value: None
  int32_t order;

  /// @brief Field callback, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::Events::UnityAction* callback;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::__BeforeRenderHelper__OrderBlock, 0x10>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::__BeforeRenderHelper__OrderBlock, order) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::__BeforeRenderHelper__OrderBlock, callback) == 0x8, "Offset mismatch!");

} // namespace UnityEngine
// Type: UnityEngine::BeforeRenderHelper
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::BeforeRenderHelper*
class CORDL_TYPE BeforeRenderHelper : public ::System::Object {
public:
  // Declarations
  using OrderBlock = ::UnityEngine::__BeforeRenderHelper__OrderBlock;

  /// @brief Field s_OrderBlocks, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_OrderBlocks, put = setStaticF_s_OrderBlocks))::System::Collections::Generic::List_1<::UnityEngine::__BeforeRenderHelper__OrderBlock>* s_OrderBlocks;

  /// @brief Method GetUpdateOrder, addr 0x2db051c, size 0x118, virtual false, abstract: false, final false
  static inline int32_t GetUpdateOrder(::UnityEngine::Events::UnityAction* callback);

  /// @brief Method Invoke, addr 0x2db0c8c, size 0x19c, virtual false, abstract: false, final false
  static inline void Invoke();

  /// @brief Method RegisterCallback, addr 0x2db0634, size 0x348, virtual false, abstract: false, final false
  static inline void RegisterCallback(::UnityEngine::Events::UnityAction* callback);

  /// @brief Method UnregisterCallback, addr 0x2db097c, size 0x310, virtual false, abstract: false, final false
  static inline void UnregisterCallback(::UnityEngine::Events::UnityAction* callback);

  static inline ::System::Collections::Generic::List_1<::UnityEngine::__BeforeRenderHelper__OrderBlock>* getStaticF_s_OrderBlocks();

  static inline void setStaticF_s_OrderBlocks(::System::Collections::Generic::List_1<::UnityEngine::__BeforeRenderHelper__OrderBlock>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeforeRenderHelper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeforeRenderHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeforeRenderHelper(BeforeRenderHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeforeRenderHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeforeRenderHelper(BeforeRenderHelper const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::BeforeRenderHelper, 0x10>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::BeforeRenderHelper);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::BeforeRenderHelper*, "UnityEngine", "BeforeRenderHelper");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__BeforeRenderHelper__OrderBlock, "UnityEngine", "BeforeRenderHelper/OrderBlock");
