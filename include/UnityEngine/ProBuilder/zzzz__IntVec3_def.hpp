#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/IntVec3.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IntVec3)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
struct IntVec3;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ProBuilder::IntVec3);
DEFINE_IL2CPP_CLASS(::UnityEngine::ProBuilder::IntVec3, "UnityEngine.ProBuilder", "IntVec3");
// Dependencies UnityEngine.Vector3
namespace UnityEngine::ProBuilder {
// Is value type: true
// CS Name: UnityEngine.ProBuilder.IntVec3
struct CORDL_TYPE IntVec3 {
public:
  // Declarations
  __declspec(property(get = get_x)) float_t x;

  __declspec(property(get = get_y)) float_t y;

  __declspec(property(get = get_z)) float_t z;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::ProBuilder::IntVec3>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::ProBuilder::IntVec3>*();

  /// @brief Method Equals, addr 0x6b09f54, size 0xc8, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* b);

  /// @brief Method Equals, addr 0x6b09d88, size 0x94, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::ProBuilder::IntVec3 p);

  /// @brief Method Equals, addr 0x6b09ec0, size 0x94, virtual false, abstract: false, final false
  inline bool Equals(::UnityEngine::Vector3 p);

  /// @brief Method GetHashCode, addr 0x6b0a01c, size 0x14, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x6b09c7c, size 0xd8, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x6b09c70, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Vector3 vector);

  /// @brief Method get_x, addr 0x6b09c58, size 0x8, virtual false, abstract: false, final false
  inline float_t get_x();

  /// @brief Method get_y, addr 0x6b09c60, size 0x8, virtual false, abstract: false, final false
  inline float_t get_y();

  /// @brief Method get_z, addr 0x6b09c68, size 0x8, virtual false, abstract: false, final false
  inline float_t get_z();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::ProBuilder::IntVec3>"
  constexpr ::System::IEquatable_1<::UnityEngine::ProBuilder::IntVec3>* i___System__IEquatable_1___UnityEngine__ProBuilder__IntVec3_();

  /// @brief Method op_Equality, addr 0x6b09d54, size 0x34, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::ProBuilder::IntVec3 a, ::UnityEngine::ProBuilder::IntVec3 b);

  /// @brief Method op_Implicit, addr 0x6b0a034, size 0x4, virtual false, abstract: false, final false
  static inline ::UnityEngine::ProBuilder::IntVec3 op_Implicit___UnityEngine__ProBuilder__IntVec3(::UnityEngine::Vector3 p);

  /// @brief Method op_Implicit, addr 0x6b0a030, size 0x4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 op_Implicit___UnityEngine__Vector3(::UnityEngine::ProBuilder::IntVec3 p);

  /// @brief Method op_Inequality, addr 0x6b09e1c, size 0x38, virtual false, abstract: false, final false
  static inline bool op_Inequality(::UnityEngine::ProBuilder::IntVec3 a, ::UnityEngine::ProBuilder::IntVec3 b);

  /// @brief Method round, addr 0x6b09e54, size 0x6c, virtual false, abstract: false, final false
  static inline int32_t round(float_t v);

  // Ctor Parameters []
  // @brief default ctor
  constexpr IntVec3();

  // Ctor Parameters [CppParam { name: "value", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }]
  constexpr IntVec3(::UnityEngine::Vector3 value) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17295 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xc };

  /// @brief Field value, offset: 0x0, size: 0xc, def value: None
  ::UnityEngine::Vector3 value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ProBuilder::IntVec3, value) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::ProBuilder::IntVec3) == 0xc, "Size mismatch!");

} // namespace UnityEngine::ProBuilder
