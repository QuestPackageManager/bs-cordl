#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/ParameterBinding.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ParameterBinding)
// Forward declare root types
namespace UnityEngine::UIElements {
struct ParameterBinding;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::ParameterBinding);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::ParameterBinding, "UnityEngine.UIElements", "ParameterBinding");
// Dependencies
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.ParameterBinding
struct CORDL_TYPE ParameterBinding {
public:
  // Declarations
  /// @brief [CreateProperty]
  __declspec(property(get = get_index, put = set_index)) int32_t index;

  /// @brief [CreateProperty]
  __declspec(property(get = get_name, put = set_name)) ::StringW name;

  /// @brief Method get_index, addr 0x7235f1c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_index();

  /// @brief Method get_name, addr 0x7235f2c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_name();

  /// @brief Method set_index, addr 0x7235f24, size 0x8, virtual false, abstract: false, final false
  inline void set_index(int32_t value);

  /// @brief Method set_name, addr 0x7235f34, size 0x8, virtual false, abstract: false, final false
  inline void set_name(::StringW value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr ParameterBinding();

  // Ctor Parameters [CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Name", ty: "::StringW", modifiers: "", def_value: None, comment:
  // None }]
  constexpr ParameterBinding(int32_t m_Index, ::StringW m_Name) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4582 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// [DontCreateProperty]
  /// [SerializeField]
  /// @brief Field m_Index, offset: 0x0, size: 0x4, def value: None
  int32_t m_Index;

  /// [SerializeField]
  /// [DontCreateProperty]
  /// @brief Field m_Name, offset: 0x8, size: 0x8, def value: None
  ::StringW m_Name;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::ParameterBinding, m_Index) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ParameterBinding, m_Name) == 0x8, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::ParameterBinding) == 0x10, "Size mismatch!");

} // namespace UnityEngine::UIElements
