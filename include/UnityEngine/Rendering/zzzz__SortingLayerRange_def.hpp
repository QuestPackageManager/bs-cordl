#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/SortingLayerRange.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SortingLayerRange)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct SortingLayerRange;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::SortingLayerRange);
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.SortingLayerRange
struct CORDL_TYPE SortingLayerRange {
public:
  // Declarations
  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Rendering::SortingLayerRange>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::Rendering::SortingLayerRange>*();

  /// @brief Method Equals, addr 0x68f48fc, size 0x88, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x68f48d8, size 0x24, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::Rendering::SortingLayerRange other);

  /// @brief Method GetHashCode, addr 0x68f4984, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method get_all, addr 0x68ed6b8, size 0x8, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::SortingLayerRange get_all();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::Rendering::SortingLayerRange>"
  constexpr ::System::IEquatable_1<::UnityEngine::Rendering::SortingLayerRange>* i___System__IEquatable_1___UnityEngine__Rendering__SortingLayerRange_();

  // Ctor Parameters []
  // @brief default ctor
  constexpr SortingLayerRange();

  // Ctor Parameters [CppParam { name: "m_LowerBound", ty: "int16_t", modifiers: "", def_value: None }, CppParam { name: "m_UpperBound", ty: "int16_t", modifiers: "", def_value: None }]
  constexpr SortingLayerRange(int16_t m_LowerBound, int16_t m_UpperBound) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10809 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field m_LowerBound, offset: 0x0, size: 0x2, def value: None
  int16_t m_LowerBound;

  /// @brief Field m_UpperBound, offset: 0x2, size: 0x2, def value: None
  int16_t m_UpperBound;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::SortingLayerRange, m_LowerBound) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::SortingLayerRange, m_UpperBound) == 0x2, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::SortingLayerRange, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::SortingLayerRange, "UnityEngine.Rendering", "SortingLayerRange");
