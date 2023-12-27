#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StencilState)
namespace UnityEngine::Rendering {
struct CompareFunction;
}
namespace System {
template <typename T> class IEquatable_1;
}
namespace UnityEngine::Rendering {
struct StencilOp;
}
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct StencilState;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::StencilState);
// Type: UnityEngine.Rendering::StencilState
// SizeInfo { instance_size: 12, native_size: 12, calculated_instance_size: 12, calculated_native_size: 28, minimum_alignment: 1, natural_alignment: 1, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10359))
// CS Name: ::UnityEngine.Rendering::StencilState
struct CORDL_TYPE StencilState {
public:
  // Declarations
  __declspec(property(put = set_enabled)) bool enabled;

  __declspec(property(put = set_readMask)) uint8_t readMask;

  __declspec(property(put = set_writeMask)) uint8_t writeMask;

  __declspec(property(put = set_compareFunctionFront))::UnityEngine::Rendering::CompareFunction compareFunctionFront;

  __declspec(property(put = set_passOperationFront))::UnityEngine::Rendering::StencilOp passOperationFront;

  __declspec(property(put = set_failOperationFront))::UnityEngine::Rendering::StencilOp failOperationFront;

  __declspec(property(put = set_zFailOperationFront))::UnityEngine::Rendering::StencilOp zFailOperationFront;

  __declspec(property(put = set_compareFunctionBack))::UnityEngine::Rendering::CompareFunction compareFunctionBack;

  __declspec(property(put = set_passOperationBack))::UnityEngine::Rendering::StencilOp passOperationBack;

  __declspec(property(put = set_failOperationBack))::UnityEngine::Rendering::StencilOp failOperationBack;

  __declspec(property(put = set_zFailOperationBack))::UnityEngine::Rendering::StencilOp zFailOperationBack;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Rendering::StencilState>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::Rendering::StencilState>*();

  /// @brief Method set_enabled addr 0x2cedfa4 size 0x6c virtual false final false
  inline void set_enabled(bool value);

  /// @brief Method set_readMask addr 0x2cee010 size 0x8 virtual false final false
  inline void set_readMask(uint8_t value);

  /// @brief Method set_writeMask addr 0x2cee018 size 0x8 virtual false final false
  inline void set_writeMask(uint8_t value);

  /// @brief Method set_compareFunctionFront addr 0x2cee020 size 0x8 virtual false final false
  inline void set_compareFunctionFront(::UnityEngine::Rendering::CompareFunction value);

  /// @brief Method set_passOperationFront addr 0x2cee028 size 0x8 virtual false final false
  inline void set_passOperationFront(::UnityEngine::Rendering::StencilOp value);

  /// @brief Method set_failOperationFront addr 0x2cee030 size 0x8 virtual false final false
  inline void set_failOperationFront(::UnityEngine::Rendering::StencilOp value);

  /// @brief Method set_zFailOperationFront addr 0x2cee038 size 0x8 virtual false final false
  inline void set_zFailOperationFront(::UnityEngine::Rendering::StencilOp value);

  /// @brief Method set_compareFunctionBack addr 0x2cee040 size 0x8 virtual false final false
  inline void set_compareFunctionBack(::UnityEngine::Rendering::CompareFunction value);

  /// @brief Method set_passOperationBack addr 0x2cee048 size 0x8 virtual false final false
  inline void set_passOperationBack(::UnityEngine::Rendering::StencilOp value);

  /// @brief Method set_failOperationBack addr 0x2cee050 size 0x8 virtual false final false
  inline void set_failOperationBack(::UnityEngine::Rendering::StencilOp value);

  /// @brief Method set_zFailOperationBack addr 0x2cee058 size 0x8 virtual false final false
  inline void set_zFailOperationBack(::UnityEngine::Rendering::StencilOp value);

  /// @brief Method Equals addr 0x2cee060 size 0xb0 virtual true final true
  inline bool Equals(::UnityEngine::Rendering::StencilState other);

  /// @brief Method Equals addr 0x2cee110 size 0x7c virtual true final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode addr 0x2cee18c size 0xf0 virtual true final false
  inline int32_t GetHashCode();

  // Ctor Parameters [CppParam { name: "m_Enabled", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "m_ReadMask", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name:
  // "m_WriteMask", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "m_Padding", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "m_CompareFunctionFront", ty:
  // "uint8_t", modifiers: "", def_value: None }, CppParam { name: "m_PassOperationFront", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "m_FailOperationFront", ty: "uint8_t",
  // modifiers: "", def_value: None }, CppParam { name: "m_ZFailOperationFront", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "m_CompareFunctionBack", ty: "uint8_t", modifiers:
  // "", def_value: None }, CppParam { name: "m_PassOperationBack", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "m_FailOperationBack", ty: "uint8_t", modifiers: "", def_value:
  // None }, CppParam { name: "m_ZFailOperationBack", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr StencilState(uint8_t m_Enabled, uint8_t m_ReadMask, uint8_t m_WriteMask, uint8_t m_Padding, uint8_t m_CompareFunctionFront, uint8_t m_PassOperationFront, uint8_t m_FailOperationFront,
                         uint8_t m_ZFailOperationFront, uint8_t m_CompareFunctionBack, uint8_t m_PassOperationBack, uint8_t m_FailOperationBack, uint8_t m_ZFailOperationBack) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr StencilState();

  /// @brief Field m_Enabled, offset: 0x0, size: 0x1, def value: None
  uint8_t m_Enabled;

  /// @brief Field m_ReadMask, offset: 0x1, size: 0x1, def value: None
  uint8_t m_ReadMask;

  /// @brief Field m_WriteMask, offset: 0x2, size: 0x1, def value: None
  uint8_t m_WriteMask;

  /// @brief Field m_Padding, offset: 0x3, size: 0x1, def value: None
  uint8_t m_Padding;

  /// @brief Field m_CompareFunctionFront, offset: 0x4, size: 0x1, def value: None
  uint8_t m_CompareFunctionFront;

  /// @brief Field m_PassOperationFront, offset: 0x5, size: 0x1, def value: None
  uint8_t m_PassOperationFront;

  /// @brief Field m_FailOperationFront, offset: 0x6, size: 0x1, def value: None
  uint8_t m_FailOperationFront;

  /// @brief Field m_ZFailOperationFront, offset: 0x7, size: 0x1, def value: None
  uint8_t m_ZFailOperationFront;

  /// @brief Field m_CompareFunctionBack, offset: 0x8, size: 0x1, def value: None
  uint8_t m_CompareFunctionBack;

  /// @brief Field m_PassOperationBack, offset: 0x9, size: 0x1, def value: None
  uint8_t m_PassOperationBack;

  /// @brief Field m_FailOperationBack, offset: 0xa, size: 0x1, def value: None
  uint8_t m_FailOperationBack;

  /// @brief Field m_ZFailOperationBack, offset: 0xb, size: 0x1, def value: None
  uint8_t m_ZFailOperationBack;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xc };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::StencilState, 0xc>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::StencilState, "UnityEngine.Rendering", "StencilState");
