#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/TransitionData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IEquatable_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__IStyleDataGroup_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TransitionData)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class Object;
}
namespace UnityEngine::UIElements {
struct EasingFunction;
}
namespace UnityEngine::UIElements {
struct StylePropertyName;
}
namespace UnityEngine::UIElements {
struct TimeValue;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct TransitionData;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::TransitionData);
// Dependencies System.IEquatable`1<T>, UnityEngine.UIElements.IStyleDataGroup`1<T>
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.TransitionData
struct CORDL_TYPE TransitionData {
public:
  // Declarations
  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::TransitionData>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::UIElements::TransitionData>*();

  /// @brief Convert operator to "::UnityEngine::UIElements::IStyleDataGroup_1<::UnityEngine::UIElements::TransitionData>"
  constexpr operator ::UnityEngine::UIElements::IStyleDataGroup_1<::UnityEngine::UIElements::TransitionData>*();

  /// @brief Method Copy, addr 0x4a833b0, size 0x140, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::TransitionData Copy();

  /// @brief Method CopyFrom, addr 0x4a834f0, size 0x160, virtual true, abstract: false, final true
  inline void CopyFrom(::ByRef<::UnityEngine::UIElements::TransitionData> other);

  /// @brief Method Equals, addr 0x4a836e8, size 0xb0, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x4a8369c, size 0x4c, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::UIElements::TransitionData other);

  /// @brief Method GetHashCode, addr 0x4a83798, size 0x9c, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::UIElements::TransitionData>"
  constexpr ::System::IEquatable_1<::UnityEngine::UIElements::TransitionData>* i___System__IEquatable_1___UnityEngine__UIElements__TransitionData_();

  /// @brief Convert to "::UnityEngine::UIElements::IStyleDataGroup_1<::UnityEngine::UIElements::TransitionData>"
  constexpr ::UnityEngine::UIElements::IStyleDataGroup_1<::UnityEngine::UIElements::TransitionData>* i___UnityEngine__UIElements__IStyleDataGroup_1___UnityEngine__UIElements__TransitionData_();

  /// @brief Method op_Equality, addr 0x4a83650, size 0x4c, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::UIElements::TransitionData lhs, ::UnityEngine::UIElements::TransitionData rhs);

  // Ctor Parameters []
  // @brief default ctor
  constexpr TransitionData();

  // Ctor Parameters [CppParam { name: "transitionDelay", ty: "::System::Collections::Generic::List_1<::UnityEngine::UIElements::TimeValue>*", modifiers: "", def_value: None }, CppParam { name:
  // "transitionDuration", ty: "::System::Collections::Generic::List_1<::UnityEngine::UIElements::TimeValue>*", modifiers: "", def_value: None }, CppParam { name: "transitionProperty", ty:
  // "::System::Collections::Generic::List_1<::UnityEngine::UIElements::StylePropertyName>*", modifiers: "", def_value: None }, CppParam { name: "transitionTimingFunction", ty:
  // "::System::Collections::Generic::List_1<::UnityEngine::UIElements::EasingFunction>*", modifiers: "", def_value: None }]
  constexpr TransitionData(::System::Collections::Generic::List_1<::UnityEngine::UIElements::TimeValue>* transitionDelay,
                           ::System::Collections::Generic::List_1<::UnityEngine::UIElements::TimeValue>* transitionDuration,
                           ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StylePropertyName>* transitionProperty,
                           ::System::Collections::Generic::List_1<::UnityEngine::UIElements::EasingFunction>* transitionTimingFunction) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6087 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field transitionDelay, offset: 0x0, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::TimeValue>* transitionDelay;

  /// @brief Field transitionDuration, offset: 0x8, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::TimeValue>* transitionDuration;

  /// @brief Field transitionProperty, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StylePropertyName>* transitionProperty;

  /// @brief Field transitionTimingFunction, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::EasingFunction>* transitionTimingFunction;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::TransitionData, transitionDelay) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TransitionData, transitionDuration) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TransitionData, transitionProperty) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TransitionData, transitionTimingFunction) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::TransitionData, 0x20>, "Size mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::TransitionData, "UnityEngine.UIElements", "TransitionData");
