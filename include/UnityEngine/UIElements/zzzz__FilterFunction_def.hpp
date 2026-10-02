#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/FilterFunction.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/Layout/zzzz__FixedBuffer4_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__FilterFunctionType_def.hpp"
#include "UnityEngine/UIElements/zzzz__FilterParameter_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FilterFunction)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
namespace UnityEngine::UIElements::Layout {
template <typename T> struct FixedBuffer4_1;
}
namespace UnityEngine::UIElements {
class FilterFunctionDefinition;
}
namespace UnityEngine::UIElements {
struct FilterFunctionType;
}
namespace UnityEngine::UIElements {
struct FilterParameter;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct FilterFunction;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::FilterFunction);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::FilterFunction, "UnityEngine.UIElements", "FilterFunction");
// Dependencies UnityEngine.UIElements.FilterFunctionType, UnityEngine.UIElements.FilterParameter, UnityEngine.UIElements.Layout.FixedBuffer4`1<T>
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.FilterFunction
struct CORDL_TYPE FilterFunction {
public:
  // Declarations
  __declspec(property(get = get_customDefinition, put = set_customDefinition)) ::UnityW<::UnityEngine::UIElements::FilterFunctionDefinition> customDefinition;

  __declspec(property(get = get_parameterCount)) int32_t parameterCount;

  __declspec(property(get = get_parameters)) ::UnityEngine::UIElements::Layout::FixedBuffer4_1<::UnityEngine::UIElements::FilterParameter> parameters;

  __declspec(property(get = get_type, put = set_type)) ::UnityEngine::UIElements::FilterFunctionType type;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::FilterFunction>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::UIElements::FilterFunction>*();

  /// @brief Method AddParameter, addr 0x727cfe4, size 0x13c, virtual false, abstract: false, final false
  inline void AddParameter(::UnityEngine::UIElements::FilterParameter p);

  /// @brief Method ClearParameters, addr 0x727d120, size 0x8, virtual false, abstract: false, final false
  inline void ClearParameters();

  /// @brief Method Equals, addr 0x727da54, size 0xa4, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x727da10, size 0x44, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::UIElements::FilterFunction other);

  /// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
  /// @brief Method GetDefinition, addr 0x727d30c, size 0x20, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::UIElements::FilterFunctionDefinition> GetDefinition();

  /// @brief Method GetHashCode, addr 0x727daf8, size 0xec, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x727dbe4, size 0x274, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x727d32c, size 0x57c, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::FilterFunctionDefinition* customDefinition, ::UnityEngine::UIElements::Layout::FixedBuffer4_1<::UnityEngine::UIElements::FilterParameter> parameters,
                    int32_t paramCount);

  /// @brief Method .ctor, addr 0x727d128, size 0x1e4, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::FilterFunctionType type, ::UnityEngine::UIElements::Layout::FixedBuffer4_1<::UnityEngine::UIElements::FilterParameter> parameters, int32_t paramCount);

  /// @brief Method get_customDefinition, addr 0x727cfd4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::UIElements::FilterFunctionDefinition> get_customDefinition();

  /// @brief Method get_parameterCount, addr 0x727cfcc, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_parameterCount();

  /// @brief Method get_parameters, addr 0x727cfbc, size 0x10, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::Layout::FixedBuffer4_1<::UnityEngine::UIElements::FilterParameter> get_parameters();

  /// @brief Method get_type, addr 0x727cfac, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::FilterFunctionType get_type();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::UIElements::FilterFunction>"
  constexpr ::System::IEquatable_1<::UnityEngine::UIElements::FilterFunction>* i___System__IEquatable_1___UnityEngine__UIElements__FilterFunction_();

  /// @brief Method op_Equality, addr 0x727d8a8, size 0x11c, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::UIElements::FilterFunction lhs, ::UnityEngine::UIElements::FilterFunction rhs);

  /// @brief Method op_Inequality, addr 0x727d9c4, size 0x4c, virtual false, abstract: false, final false
  static inline bool op_Inequality(::UnityEngine::UIElements::FilterFunction lhs, ::UnityEngine::UIElements::FilterFunction rhs);

  /// @brief Method set_customDefinition, addr 0x727cfdc, size 0x8, virtual false, abstract: false, final false
  inline void set_customDefinition(::UnityEngine::UIElements::FilterFunctionDefinition* value);

  /// @brief Method set_type, addr 0x727cfb4, size 0x8, virtual false, abstract: false, final false
  inline void set_type(::UnityEngine::UIElements::FilterFunctionType value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr FilterFunction();

  // Ctor Parameters [CppParam { name: "m_Type", ty: "::UnityEngine::UIElements::FilterFunctionType", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Parameters", ty:
  // "::UnityEngine::UIElements::Layout::FixedBuffer4_1<::UnityEngine::UIElements::FilterParameter>", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_ParameterCount", ty:
  // "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_CustomDefinition", ty: "::UnityW<::UnityEngine::UIElements::FilterFunctionDefinition>", modifiers: "", def_value:
  // None, comment: None }]
  constexpr FilterFunction(::UnityEngine::UIElements::FilterFunctionType m_Type, ::UnityEngine::UIElements::Layout::FixedBuffer4_1<::UnityEngine::UIElements::FilterParameter> m_Parameters,
                           int32_t m_ParameterCount, ::UnityW<::UnityEngine::UIElements::FilterFunctionDefinition> m_CustomDefinition) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4759 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x70 };

  /// [SerializeField]
  /// @brief Field m_Type, offset: 0x0, size: 0x4, def value: None
  ::UnityEngine::UIElements::FilterFunctionType m_Type;

  /// [SerializeField]
  /// @brief Field m_Parameters, offset: 0x4, size: 0x60, def value: None
  ::UnityEngine::UIElements::Layout::FixedBuffer4_1<::UnityEngine::UIElements::FilterParameter> m_Parameters;

  /// [SerializeField]
  /// @brief Field m_ParameterCount, offset: 0x64, size: 0x4, def value: None
  int32_t m_ParameterCount;

  /// [SerializeField]
  /// @brief Field m_CustomDefinition, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UIElements::FilterFunctionDefinition> m_CustomDefinition;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::FilterFunction, m_Type) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::FilterFunction, m_Parameters) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::FilterFunction, m_ParameterCount) == 0x64, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::FilterFunction, m_CustomDefinition) == 0x68, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::FilterFunction) == 0x70, "Size mismatch!");

} // namespace UnityEngine::UIElements
