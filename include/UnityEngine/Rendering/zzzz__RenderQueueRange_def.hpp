#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderQueueRange.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RenderQueueRange)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct RenderQueueRange;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::RenderQueueRange);
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.RenderQueueRange
struct CORDL_TYPE RenderQueueRange {
public:
  // Declarations
  __declspec(property(get = get_lowerBound)) int32_t lowerBound;

  /// @brief Field maximumBound, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_maximumBound, put = setStaticF_maximumBound)) int32_t maximumBound;

  /// @brief Field minimumBound, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_minimumBound, put = setStaticF_minimumBound)) int32_t minimumBound;

  __declspec(property(get = get_upperBound)) int32_t upperBound;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Rendering::RenderQueueRange>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::Rendering::RenderQueueRange>*();

  /// @brief Method Equals, addr 0x69591f4, size 0xc0, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x6956644, size 0x28, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::Rendering::RenderQueueRange other);

  /// @brief Method GetHashCode, addr 0x6956790, size 0x14, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline int32_t getStaticF_maximumBound();

  static inline int32_t getStaticF_minimumBound();

  /// @brief Method get_all, addr 0x6956534, size 0x8, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::RenderQueueRange get_all();

  /// @brief Method get_lowerBound, addr 0x69591e4, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_lowerBound();

  /// @brief Method get_opaque, addr 0x69591d0, size 0x8, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::RenderQueueRange get_opaque();

  /// @brief Method get_transparent, addr 0x69591d8, size 0xc, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::RenderQueueRange get_transparent();

  /// @brief Method get_upperBound, addr 0x69591ec, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_upperBound();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::Rendering::RenderQueueRange>"
  constexpr ::System::IEquatable_1<::UnityEngine::Rendering::RenderQueueRange>* i___System__IEquatable_1___UnityEngine__Rendering__RenderQueueRange_();

  /// @brief Method op_Equality, addr 0x69592b4, size 0x68, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::Rendering::RenderQueueRange left, ::UnityEngine::Rendering::RenderQueueRange right);

  static inline void setStaticF_maximumBound(int32_t value);

  static inline void setStaticF_minimumBound(int32_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderQueueRange();

  // Ctor Parameters [CppParam { name: "m_LowerBound", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_UpperBound", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr RenderQueueRange(int32_t m_LowerBound, int32_t m_UpperBound) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10799 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field k_MaximumBound offset 0xffffffff size 0x4
  static constexpr int32_t k_MaximumBound{ static_cast<int32_t>(0x1388) };

  /// @brief Field k_MinimumBound offset 0xffffffff size 0x4
  static constexpr int32_t k_MinimumBound{ static_cast<int32_t>(0x0) };

  /// @brief Field m_LowerBound, offset: 0x0, size: 0x4, def value: None
  int32_t m_LowerBound;

  /// @brief Field m_UpperBound, offset: 0x4, size: 0x4, def value: None
  int32_t m_UpperBound;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RenderQueueRange, m_LowerBound) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderQueueRange, m_UpperBound) == 0x4, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::RenderQueueRange, 0x8>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::RenderQueueRange, "UnityEngine.Rendering", "RenderQueueRange");
