#pragma once
// IWYU pragma private; include "UnityEngine/BeforeRenderHelper.hpp"
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
struct BeforeRenderHelper_OrderBlock;
}
// Forward declare root types
namespace UnityEngine {
class BeforeRenderHelper;
}
namespace UnityEngine {
struct BeforeRenderHelper_OrderBlock;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::BeforeRenderHelper);
MARK_VAL_T(::UnityEngine::BeforeRenderHelper_OrderBlock);
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.BeforeRenderHelper/OrderBlock
struct CORDL_TYPE BeforeRenderHelper_OrderBlock {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeforeRenderHelper_OrderBlock();

  // Ctor Parameters [CppParam { name: "order", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "callback", ty: "::UnityEngine::Events::UnityAction*", modifiers: "", def_value: None
  // }]
  constexpr BeforeRenderHelper_OrderBlock(int32_t order, ::UnityEngine::Events::UnityAction* callback) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10712 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field order, offset: 0x0, size: 0x4, def value: None
  int32_t order;

  /// @brief Field callback, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::Events::UnityAction* callback;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::BeforeRenderHelper_OrderBlock, order) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::BeforeRenderHelper_OrderBlock, callback) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::BeforeRenderHelper_OrderBlock, 0x10>, "Size mismatch!");

} // namespace UnityEngine
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.BeforeRenderHelper
class CORDL_TYPE BeforeRenderHelper : public ::System::Object {
public:
  // Declarations
  using OrderBlock = ::UnityEngine::BeforeRenderHelper_OrderBlock;

  /// @brief Field s_OrderBlocks, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_OrderBlocks, put = setStaticF_s_OrderBlocks)) ::System::Collections::Generic::List_1<::UnityEngine::BeforeRenderHelper_OrderBlock>* s_OrderBlocks;

  /// @brief Method GetUpdateOrder, addr 0x486e4c4, size 0x118, virtual false, abstract: false, final false
  static inline int32_t GetUpdateOrder(::UnityEngine::Events::UnityAction* callback);

  /// @brief Method Invoke, addr 0x485ea40, size 0x1a8, virtual false, abstract: false, final false
  static inline void Invoke();

  /// @brief Method RegisterCallback, addr 0x485daec, size 0x34c, virtual false, abstract: false, final false
  static inline void RegisterCallback(::UnityEngine::Events::UnityAction* callback);

  /// @brief Method UnregisterCallback, addr 0x485de8c, size 0x304, virtual false, abstract: false, final false
  static inline void UnregisterCallback(::UnityEngine::Events::UnityAction* callback);

  static inline ::System::Collections::Generic::List_1<::UnityEngine::BeforeRenderHelper_OrderBlock>* getStaticF_s_OrderBlocks();

  static inline void setStaticF_s_OrderBlocks(::System::Collections::Generic::List_1<::UnityEngine::BeforeRenderHelper_OrderBlock>* value);

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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10713 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::BeforeRenderHelper, 0x10>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::BeforeRenderHelper);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::BeforeRenderHelper*, "UnityEngine", "BeforeRenderHelper");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::BeforeRenderHelper_OrderBlock, "UnityEngine", "BeforeRenderHelper/OrderBlock");
