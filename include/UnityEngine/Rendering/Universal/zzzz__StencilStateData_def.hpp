#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/StencilStateData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/zzzz__CompareFunction_def.hpp"
#include "UnityEngine/Rendering/zzzz__StencilOp_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(StencilStateData)
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class StencilStateData;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::StencilStateData);
// Dependencies System.Object, UnityEngine.Rendering.CompareFunction, UnityEngine.Rendering.StencilOp
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.StencilStateData
class CORDL_TYPE StencilStateData : public ::System::Object {
public:
  // Declarations
  /// @brief Field failOperation, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_failOperation, put = __cordl_internal_set_failOperation)) ::UnityEngine::Rendering::StencilOp failOperation;

  /// @brief Field overrideStencilState, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_overrideStencilState, put = __cordl_internal_set_overrideStencilState)) bool overrideStencilState;

  /// @brief Field passOperation, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_passOperation, put = __cordl_internal_set_passOperation)) ::UnityEngine::Rendering::StencilOp passOperation;

  /// @brief Field stencilCompareFunction, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_stencilCompareFunction, put = __cordl_internal_set_stencilCompareFunction)) ::UnityEngine::Rendering::CompareFunction stencilCompareFunction;

  /// @brief Field stencilReference, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_stencilReference, put = __cordl_internal_set_stencilReference)) int32_t stencilReference;

  /// @brief Field zFailOperation, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_zFailOperation, put = __cordl_internal_set_zFailOperation)) ::UnityEngine::Rendering::StencilOp zFailOperation;

  static inline ::UnityEngine::Rendering::Universal::StencilStateData* New_ctor();

  constexpr ::UnityEngine::Rendering::StencilOp const& __cordl_internal_get_failOperation() const;

  constexpr ::UnityEngine::Rendering::StencilOp& __cordl_internal_get_failOperation();

  constexpr bool const& __cordl_internal_get_overrideStencilState() const;

  constexpr bool& __cordl_internal_get_overrideStencilState();

  constexpr ::UnityEngine::Rendering::StencilOp const& __cordl_internal_get_passOperation() const;

  constexpr ::UnityEngine::Rendering::StencilOp& __cordl_internal_get_passOperation();

  constexpr ::UnityEngine::Rendering::CompareFunction const& __cordl_internal_get_stencilCompareFunction() const;

  constexpr ::UnityEngine::Rendering::CompareFunction& __cordl_internal_get_stencilCompareFunction();

  constexpr int32_t const& __cordl_internal_get_stencilReference() const;

  constexpr int32_t& __cordl_internal_get_stencilReference();

  constexpr ::UnityEngine::Rendering::StencilOp const& __cordl_internal_get_zFailOperation() const;

  constexpr ::UnityEngine::Rendering::StencilOp& __cordl_internal_get_zFailOperation();

  constexpr void __cordl_internal_set_failOperation(::UnityEngine::Rendering::StencilOp value);

  constexpr void __cordl_internal_set_overrideStencilState(bool value);

  constexpr void __cordl_internal_set_passOperation(::UnityEngine::Rendering::StencilOp value);

  constexpr void __cordl_internal_set_stencilCompareFunction(::UnityEngine::Rendering::CompareFunction value);

  constexpr void __cordl_internal_set_stencilReference(int32_t value);

  constexpr void __cordl_internal_set_zFailOperation(::UnityEngine::Rendering::StencilOp value);

  /// @brief Method .ctor, addr 0x66849c0, size 0xc, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StencilStateData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StencilStateData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StencilStateData(StencilStateData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StencilStateData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StencilStateData(StencilStateData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12551 };

  /// @brief Field overrideStencilState, offset: 0x10, size: 0x1, def value: None
  bool ___overrideStencilState;

  /// @brief Field stencilReference, offset: 0x14, size: 0x4, def value: None
  int32_t ___stencilReference;

  /// @brief Field stencilCompareFunction, offset: 0x18, size: 0x4, def value: None
  ::UnityEngine::Rendering::CompareFunction ___stencilCompareFunction;

  /// @brief Field passOperation, offset: 0x1c, size: 0x4, def value: None
  ::UnityEngine::Rendering::StencilOp ___passOperation;

  /// @brief Field failOperation, offset: 0x20, size: 0x4, def value: None
  ::UnityEngine::Rendering::StencilOp ___failOperation;

  /// @brief Field zFailOperation, offset: 0x24, size: 0x4, def value: None
  ::UnityEngine::Rendering::StencilOp ___zFailOperation;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::StencilStateData, ___overrideStencilState) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::StencilStateData, ___stencilReference) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::StencilStateData, ___stencilCompareFunction) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::StencilStateData, ___passOperation) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::StencilStateData, ___failOperation) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::StencilStateData, ___zFailOperation) == 0x24, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::StencilStateData, 0x28>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::StencilStateData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::StencilStateData*, "UnityEngine.Rendering.Universal", "StencilStateData");
