#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__StyleValueType_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StyleValueHandle)
namespace UnityEngine::UIElements {
struct StyleValueType;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct StyleValueHandle;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::StyleValueHandle);
// Type: UnityEngine.UIElements::StyleValueHandle
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(6522))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6536))
// CS Name: ::UnityEngine.UIElements::StyleValueHandle
struct CORDL_TYPE StyleValueHandle {
public:
  // Declarations
  __declspec(property(get = get_valueType, put = set_valueType))::UnityEngine::UIElements::StyleValueType valueType;

  /// @brief Method get_valueType, addr 0x2e84d5c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::StyleValueType get_valueType();

  /// @brief Method set_valueType, addr 0x2e85924, size 0x8, virtual false, abstract: false, final false
  inline void set_valueType(::UnityEngine::UIElements::StyleValueType value);

  // Ctor Parameters [CppParam { name: "m_ValueType", ty: "::UnityEngine::UIElements::StyleValueType", modifiers: "", def_value: None }, CppParam { name: "valueIndex", ty: "int32_t", modifiers: "",
  // def_value: None }]
  constexpr StyleValueHandle(::UnityEngine::UIElements::StyleValueType m_ValueType, int32_t valueIndex) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr StyleValueHandle();

  /// @brief Field m_ValueType, offset: 0x0, size: 0x4, def value: None
  ::UnityEngine::UIElements::StyleValueType m_ValueType;

  /// @brief Field valueIndex, offset: 0x4, size: 0x4, def value: None
  int32_t valueIndex;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StyleValueHandle, 0x8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleValueHandle, m_ValueType) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleValueHandle, valueIndex) == 0x4, "Offset mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleValueHandle, "UnityEngine.UIElements", "StyleValueHandle");
