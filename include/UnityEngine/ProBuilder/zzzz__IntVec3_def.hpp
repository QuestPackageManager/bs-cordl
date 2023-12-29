#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IntVec3)
namespace UnityEngine {
struct Vector3;
}
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
struct IntVec3;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ProBuilder::IntVec3);
// Type: UnityEngine.ProBuilder::IntVec3
// SizeInfo { instance_size: 12, native_size: 12, calculated_instance_size: 12, calculated_native_size: 28, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10176))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12061))
// CS Name: ::UnityEngine.ProBuilder::IntVec3
struct CORDL_TYPE IntVec3 {
public:
  // Declarations
  __declspec(property(get = get_x)) float_t x;

  __declspec(property(get = get_y)) float_t y;

  __declspec(property(get = get_z)) float_t z;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::ProBuilder::IntVec3>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::ProBuilder::IntVec3>*();

  /// @brief Method get_x addr 0x29c4d0c size 0x8 virtual false final false
  inline float_t get_x();

  /// @brief Method get_y addr 0x29c4d14 size 0x8 virtual false final false
  inline float_t get_y();

  /// @brief Method get_z addr 0x29c4d1c size 0x8 virtual false final false
  inline float_t get_z();

  /// @brief Method .ctor addr 0x29c4d24 size 0xc virtual false final false
  inline void _ctor(::UnityEngine::Vector3 vector);

  /// @brief Method ToString addr 0x29c4d30 size 0xc4 virtual true final false
  inline ::StringW ToString();

  /// @brief Method op_Equality addr 0x29c4df4 size 0x34 virtual false final false
  static inline bool op_Equality(::UnityEngine::ProBuilder::IntVec3 a, ::UnityEngine::ProBuilder::IntVec3 b);

  /// @brief Method op_Inequality addr 0x29c4ebc size 0x38 virtual false final false
  static inline bool op_Inequality(::UnityEngine::ProBuilder::IntVec3 a, ::UnityEngine::ProBuilder::IntVec3 b);

  /// @brief Method Equals addr 0x29c4e28 size 0x94 virtual true final true
  inline bool Equals(::UnityEngine::ProBuilder::IntVec3 p);

  /// @brief Method Equals addr 0x29c4f5c size 0x94 virtual false final false
  inline bool Equals(::UnityEngine::Vector3 p);

  /// @brief Method Equals addr 0x29c4ff0 size 0xc4 virtual true final false
  inline bool Equals(::System::Object* b);

  /// @brief Method GetHashCode addr 0x29c50b4 size 0x10 virtual true final false
  inline int32_t GetHashCode();

  /// @brief Method round addr 0x29c4ef4 size 0x68 virtual false final false
  static inline int32_t round(float_t v);

  /// @brief Method op_Implicit addr 0x29c50c4 size 0x4 virtual false final false
  static inline ::UnityEngine::Vector3 op_Implicit___UnityEngine__Vector3(::UnityEngine::ProBuilder::IntVec3 p);

  /// @brief Method op_Implicit addr 0x29c50c8 size 0x4 virtual false final false
  static inline ::UnityEngine::ProBuilder::IntVec3 op_Implicit___UnityEngine__ProBuilder__IntVec3(::UnityEngine::Vector3 p);

  // Ctor Parameters [CppParam { name: "value", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }]
  constexpr IntVec3(::UnityEngine::Vector3 value) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr IntVec3();

  /// @brief Field value, offset: 0x0, size: 0xc, def value: None
  ::UnityEngine::Vector3 value;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xc };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::IntVec3, 0xc>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::IntVec3, value) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::ProBuilder
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::IntVec3, "UnityEngine.ProBuilder", "IntVec3");
