#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Observable_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(Observable_1)
namespace System {
template <typename T> class Action_1;
}
// Forward declare root types
namespace UnityEngine::Rendering {
template <typename T> struct Observable_1;
}
// Write type traits
MARK_GEN_VAL_T(::UnityEngine::Rendering::Observable_1);
// Dependencies
namespace UnityEngine::Rendering {
// cpp template
template <typename T>
// Is value type: true
// CS Name: UnityEngine.Rendering.Observable`1<T>
struct CORDL_TYPE Observable_1 {
public:
  // Declarations
  __declspec(property(get = get_value, put = set_value)) T value;

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(T newValue);

  /// @brief Method add_onValueChanged, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void add_onValueChanged(::System::Action_1<T>* value);

  /// @brief Method get_value, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T get_value();

  /// @brief Method remove_onValueChanged, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void remove_onValueChanged(::System::Action_1<T>* value);

  /// @brief Method set_value, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_value(T value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr Observable_1();

  // Ctor Parameters [CppParam { name: "onValueChanged", ty: "::System::Action_1<T>*", modifiers: "", def_value: None }, CppParam { name: "m_Value", ty: "T", modifiers: "", def_value: None }]
  constexpr Observable_1(::System::Action_1<T>* onValueChanged, T m_Value) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11903 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field onValueChanged, offset: 0x0, size: 0x8, def value: None
  ::System::Action_1<T>* onValueChanged;

  /// @brief Field m_Value, offset: 0x8, size: 0x8, def value: None
  T m_Value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::UnityEngine::Rendering::Observable_1, "UnityEngine.Rendering", "Observable`1");
