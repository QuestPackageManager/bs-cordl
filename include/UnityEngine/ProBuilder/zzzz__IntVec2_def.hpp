#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/IntVec2.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IntVec2)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
struct IntVec2;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ProBuilder::IntVec2);
// Type: UnityEngine.ProBuilder::IntVec2
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder {
// Is value type: true
// CS Name: ::UnityEngine.ProBuilder::IntVec2
struct CORDL_TYPE IntVec2 {
public:
  // Declarations
  __declspec(property(get = get_x)) float_t x;

  __declspec(property(get = get_y)) float_t y;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::ProBuilder::IntVec2>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::ProBuilder::IntVec2>*();

  /// @brief Method Equals, addr 0x46ac80c, size 0xbc, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* b);

  /// @brief Method Equals, addr 0x46ac6a4, size 0x6c, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::ProBuilder::IntVec2 p);

  /// @brief Method Equals, addr 0x46ac7a0, size 0x6c, virtual false, abstract: false, final false
  inline bool Equals(::UnityEngine::Vector2 p);

  /// @brief Method GetHashCode, addr 0x46ac8c8, size 0xc, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x46ac5e0, size 0xa0, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x46ac5d8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Vector2 vector);

  /// @brief Method get_x, addr 0x46ac5c8, size 0x8, virtual false, abstract: false, final false
  inline float_t get_x();

  /// @brief Method get_y, addr 0x46ac5d0, size 0x8, virtual false, abstract: false, final false
  inline float_t get_y();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::ProBuilder::IntVec2>"
  constexpr ::System::IEquatable_1<::UnityEngine::ProBuilder::IntVec2>* i___System__IEquatable_1___UnityEngine__ProBuilder__IntVec2_();

  /// @brief Method op_Equality, addr 0x46ac680, size 0x24, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::ProBuilder::IntVec2 a, ::UnityEngine::ProBuilder::IntVec2 b);

  /// @brief Method op_Implicit, addr 0x46ac8d8, size 0x4, virtual false, abstract: false, final false
  static inline ::UnityEngine::ProBuilder::IntVec2 op_Implicit___UnityEngine__ProBuilder__IntVec2(::UnityEngine::Vector2 p);

  /// @brief Method op_Implicit, addr 0x46ac8d4, size 0x4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 op_Implicit___UnityEngine__Vector2(::UnityEngine::ProBuilder::IntVec2 p);

  /// @brief Method op_Inequality, addr 0x46ac710, size 0x28, virtual false, abstract: false, final false
  static inline bool op_Inequality(::UnityEngine::ProBuilder::IntVec2 a, ::UnityEngine::ProBuilder::IntVec2 b);

  /// @brief Method round, addr 0x46ac738, size 0x68, virtual false, abstract: false, final false
  static inline int32_t round(float_t v);

  // Ctor Parameters []
  // @brief default ctor
  constexpr IntVec2();

  // Ctor Parameters [CppParam { name: "value", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }]
  constexpr IntVec2(::UnityEngine::Vector2 value) noexcept;

  /// @brief Field value, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::Vector2 value;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14211 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::IntVec2, 0x8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::IntVec2, value) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::ProBuilder
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::IntVec2, "UnityEngine.ProBuilder", "IntVec2");
