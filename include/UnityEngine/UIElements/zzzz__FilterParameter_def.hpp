#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/FilterParameter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__FilterParameterType_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FilterParameter)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
namespace UnityEngine::UIElements {
struct FilterParameterType;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct FilterParameter;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::FilterParameter);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::FilterParameter, "UnityEngine.UIElements", "FilterParameter");
// Dependencies UnityEngine.Color, UnityEngine.UIElements.FilterParameterType
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.FilterParameter
struct CORDL_TYPE FilterParameter {
public:
  // Declarations
  __declspec(property(get = get_colorValue, put = set_colorValue)) ::UnityEngine::Color colorValue;

  __declspec(property(get = get_floatValue, put = set_floatValue)) float_t floatValue;

  __declspec(property(get = get_type, put = set_type)) ::UnityEngine::UIElements::FilterParameterType type;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::FilterParameter>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::UIElements::FilterParameter>*();

  /// @brief Method Equals, addr 0x70b1e5c, size 0xd0, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x70b1f2c, size 0x70, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::UIElements::FilterParameter other);

  /// @brief Method GetHashCode, addr 0x70b1f9c, size 0x8c, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x70b2028, size 0xa4, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method get_colorValue, addr 0x70b1d60, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_colorValue();

  /// @brief Method get_floatValue, addr 0x70b1d50, size 0x8, virtual false, abstract: false, final false
  inline float_t get_floatValue();

  /// @brief Method get_type, addr 0x70b1d40, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::FilterParameterType get_type();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::UIElements::FilterParameter>"
  constexpr ::System::IEquatable_1<::UnityEngine::UIElements::FilterParameter>* i___System__IEquatable_1___UnityEngine__UIElements__FilterParameter_();

  /// @brief Method op_Equality, addr 0x70b1d78, size 0x70, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::UIElements::FilterParameter a, ::UnityEngine::UIElements::FilterParameter b);

  /// @brief Method op_Inequality, addr 0x70b1de8, size 0x74, virtual false, abstract: false, final false
  static inline bool op_Inequality(::UnityEngine::UIElements::FilterParameter a, ::UnityEngine::UIElements::FilterParameter b);

  /// @brief Method set_colorValue, addr 0x70b1d6c, size 0xc, virtual false, abstract: false, final false
  inline void set_colorValue(::UnityEngine::Color value);

  /// @brief Method set_floatValue, addr 0x70b1d58, size 0x8, virtual false, abstract: false, final false
  inline void set_floatValue(float_t value);

  /// @brief Method set_type, addr 0x70b1d48, size 0x8, virtual false, abstract: false, final false
  inline void set_type(::UnityEngine::UIElements::FilterParameterType value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr FilterParameter();

  // Ctor Parameters [CppParam { name: "m_Type", ty: "::UnityEngine::UIElements::FilterParameterType", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_FloatValue", ty: "float_t",
  // modifiers: "", def_value: None, comment: None }, CppParam { name: "m_ColorValue", ty: "::UnityEngine::Color", modifiers: "", def_value: None, comment: None }]
  constexpr FilterParameter(::UnityEngine::UIElements::FilterParameterType m_Type, float_t m_FloatValue, ::UnityEngine::Color m_ColorValue) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4762 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// [SerializeField]
  /// @brief Field m_Type, offset: 0x0, size: 0x4, def value: None
  ::UnityEngine::UIElements::FilterParameterType m_Type;

  /// [SerializeField]
  /// @brief Field m_FloatValue, offset: 0x4, size: 0x4, def value: None
  float_t m_FloatValue;

  /// [SerializeField]
  /// @brief Field m_ColorValue, offset: 0x8, size: 0x10, def value: None
  ::UnityEngine::Color m_ColorValue;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::FilterParameter, m_Type) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::FilterParameter, m_FloatValue) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::FilterParameter, m_ColorValue) == 0x8, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::FilterParameter) == 0x18, "Size mismatch!");

} // namespace UnityEngine::UIElements
