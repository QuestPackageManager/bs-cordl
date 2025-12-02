#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/ToggleButtonGroupState.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ToggleButtonGroupState)
namespace System {
template <typename T> class IComparable_1;
}
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
namespace System {
template <typename T> struct Span_1;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct ToggleButtonGroupState;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::ToggleButtonGroupState);
// Dependencies
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.ToggleButtonGroupState
struct CORDL_TYPE ToggleButtonGroupState {
public:
  // Declarations
  __declspec(property(get = get_Item, put = set_Item)) bool Item[];

  __declspec(property(get = get_data)) uint64_t data;

  __declspec(property(get = get_length, put = set_length)) int32_t length;

  /// @brief Convert operator to "::System::IComparable_1<::UnityEngine::UIElements::ToggleButtonGroupState>"
  constexpr operator ::System::IComparable_1<::UnityEngine::UIElements::ToggleButtonGroupState>*();

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::ToggleButtonGroupState>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::UIElements::ToggleButtonGroupState>*();

  /// @brief Method CompareTo, addr 0x6b4658c, size 0x1c, virtual true, abstract: false, final true
  inline int32_t CompareTo(::UnityEngine::UIElements::ToggleButtonGroupState other);

  /// @brief Method Equals, addr 0x6b465dc, size 0x8c, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x6b465b8, size 0x24, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::UIElements::ToggleButtonGroupState other);

  /// @brief Method GetActiveOptions, addr 0x6b442f4, size 0x188, virtual false, abstract: false, final false
  inline ::System::Span_1<int32_t> GetActiveOptions(::System::Span_1<int32_t> activeOptionsIndices);

  /// @brief Method GetHashCode, addr 0x6b46668, size 0x80, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ResetAllOptions, addr 0x6b4447c, size 0x8, virtual false, abstract: false, final false
  inline void ResetAllOptions();

  /// @brief Method ResetOptions, addr 0x6b464dc, size 0x98, virtual false, abstract: false, final false
  inline void ResetOptions(int32_t startingIndex);

  /// @brief Method ToString, addr 0x6b466e8, size 0x88, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x6b44778, size 0x14c, virtual false, abstract: false, final false
  inline void _ctor(uint64_t optionsBitMask, int32_t length);

  /// @brief Method get_Item, addr 0x6b45d8c, size 0xd4, virtual false, abstract: false, final false
  inline bool get_Item(int32_t index);

  /// @brief Method get_data, addr 0x6b46584, size 0x8, virtual false, abstract: false, final false
  inline uint64_t get_data();

  /// @brief Method get_length, addr 0x6b46574, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_length();

  /// @brief Convert to "::System::IComparable_1<::UnityEngine::UIElements::ToggleButtonGroupState>"
  constexpr ::System::IComparable_1<::UnityEngine::UIElements::ToggleButtonGroupState>* i___System__IComparable_1___UnityEngine__UIElements__ToggleButtonGroupState_();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::UIElements::ToggleButtonGroupState>"
  constexpr ::System::IEquatable_1<::UnityEngine::UIElements::ToggleButtonGroupState>* i___System__IEquatable_1___UnityEngine__UIElements__ToggleButtonGroupState_();

  /// @brief Method op_Equality, addr 0x6b465a8, size 0x10, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::UIElements::ToggleButtonGroupState lhs, ::UnityEngine::UIElements::ToggleButtonGroupState rhs);

  /// @brief Method op_Inequality, addr 0x6b45d7c, size 0x10, virtual false, abstract: false, final false
  static inline bool op_Inequality(::UnityEngine::UIElements::ToggleButtonGroupState lhs, ::UnityEngine::UIElements::ToggleButtonGroupState rhs);

  /// @brief Method set_Item, addr 0x6b44484, size 0xe8, virtual false, abstract: false, final false
  inline void set_Item(int32_t index, bool value);

  /// @brief Method set_length, addr 0x6b4657c, size 0x8, virtual false, abstract: false, final false
  inline void set_length(int32_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr ToggleButtonGroupState();

  // Ctor Parameters [CppParam { name: "m_Data", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "m_Length", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ToggleButtonGroupState(uint64_t m_Data, int32_t m_Length) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4346 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field m_Data, offset: 0x0, size: 0x8, def value: None
  uint64_t m_Data;

  /// @brief Field m_Length, offset: 0x8, size: 0x4, def value: None
  int32_t m_Length;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::ToggleButtonGroupState, m_Data) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ToggleButtonGroupState, m_Length) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::ToggleButtonGroupState, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ToggleButtonGroupState, "UnityEngine.UIElements", "ToggleButtonGroupState");
