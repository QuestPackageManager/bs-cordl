#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StyleValueHandle.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__StyleValueType_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StyleValueHandle)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
namespace UnityEngine::UIElements {
struct StyleValueType;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct StyleValueHandle;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::StyleValueHandle);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::StyleValueHandle, "UnityEngine.UIElements", "StyleValueHandle");
// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
// Dependencies UnityEngine.UIElements.StyleValueType
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.StyleValueHandle
struct CORDL_TYPE StyleValueHandle {
public:
  // Declarations
  __declspec(property(get = get_valueType, put = set_valueType)) ::UnityEngine::UIElements::StyleValueType valueType;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::StyleValueHandle>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::UIElements::StyleValueHandle>*();

  /// @brief Method Equals, addr 0x7119e48, size 0x8c, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x7119e20, size 0x28, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::UIElements::StyleValueHandle other);

  /// @brief Method GetHashCode, addr 0x7119ed4, size 0x7c, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method IsVarFunction, addr 0x7119dfc, size 0x24, virtual false, abstract: false, final false
  inline bool IsVarFunction();

  /// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
  /// @brief Method .ctor, addr 0x7119260, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(int32_t valueIndex, ::UnityEngine::UIElements::StyleValueType valueType);

  /// @brief Method get_valueType, addr 0x7119258, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::StyleValueType get_valueType();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::UIElements::StyleValueHandle>"
  constexpr ::System::IEquatable_1<::UnityEngine::UIElements::StyleValueHandle>* i___System__IEquatable_1___UnityEngine__UIElements__StyleValueHandle_();

  /// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
  /// @brief Method set_valueType, addr 0x7119df4, size 0x8, virtual false, abstract: false, final false
  inline void set_valueType(::UnityEngine::UIElements::StyleValueType value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr StyleValueHandle();

  // Ctor Parameters [CppParam { name: "m_ValueType", ty: "::UnityEngine::UIElements::StyleValueType", modifiers: "", def_value: None, comment: None }, CppParam { name: "valueIndex", ty: "int32_t",
  // modifiers: "", def_value: None, comment: None }]
  constexpr StyleValueHandle(::UnityEngine::UIElements::StyleValueType m_ValueType, int32_t valueIndex) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5153 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// [SerializeField]
  /// @brief Field m_ValueType, offset: 0x0, size: 0x4, def value: None
  ::UnityEngine::UIElements::StyleValueType m_ValueType;

  /// [SerializeField]
  /// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
  /// @brief Field valueIndex, offset: 0x4, size: 0x4, def value: None
  int32_t valueIndex;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::StyleValueHandle, m_ValueType) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleValueHandle, valueIndex) == 0x4, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::StyleValueHandle) == 0x8, "Size mismatch!");

} // namespace UnityEngine::UIElements
