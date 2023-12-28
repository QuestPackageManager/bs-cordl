#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IntVec4)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
struct IntVec4;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ProBuilder::IntVec4);
// Type: UnityEngine.ProBuilder::IntVec4
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10246))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12134))
// CS Name: ::UnityEngine.ProBuilder::IntVec4
struct CORDL_TYPE IntVec4 {
public:
  // Declarations
  __declspec(property(get = get_x)) float_t x;

  __declspec(property(get = get_y)) float_t y;

  __declspec(property(get = get_z)) float_t z;

  __declspec(property(get = get_w)) float_t w;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::ProBuilder::IntVec4>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::ProBuilder::IntVec4>*();

  /// @brief Method get_x addr 0x2b46e20 size 0x8 virtual false final false
  inline float_t get_x();

  /// @brief Method get_y addr 0x2b46e28 size 0x8 virtual false final false
  inline float_t get_y();

  /// @brief Method get_z addr 0x2b46e30 size 0x8 virtual false final false
  inline float_t get_z();

  /// @brief Method get_w addr 0x2b46e38 size 0x8 virtual false final false
  inline float_t get_w();

  /// @brief Method .ctor addr 0x2b46e40 size 0xc virtual false final false
  inline void _ctor(::UnityEngine::Vector4 vector);

  /// @brief Method ToString addr 0x2b46e4c size 0x1ac virtual true final false
  inline ::StringW ToString();

  /// @brief Method op_Equality addr 0x2b46ff8 size 0x38 virtual false final false
  static inline bool op_Equality(::UnityEngine::ProBuilder::IntVec4 a, ::UnityEngine::ProBuilder::IntVec4 b);

  /// @brief Method op_Inequality addr 0x2b470e4 size 0x3c virtual false final false
  static inline bool op_Inequality(::UnityEngine::ProBuilder::IntVec4 a, ::UnityEngine::ProBuilder::IntVec4 b);

  /// @brief Method Equals addr 0x2b47030 size 0xb4 virtual true final true
  inline bool Equals(::UnityEngine::ProBuilder::IntVec4 p);

  /// @brief Method Equals addr 0x2b47188 size 0xb4 virtual false final false
  inline bool Equals(::UnityEngine::Vector4 p);

  /// @brief Method Equals addr 0x2b4723c size 0xc4 virtual true final false
  inline bool Equals(::System::Object* b);

  /// @brief Method GetHashCode addr 0x2b47300 size 0x10 virtual true final false
  inline int32_t GetHashCode();

  /// @brief Method round addr 0x2b47120 size 0x68 virtual false final false
  static inline int32_t round(float_t v);

  /// @brief Method op_Implicit addr 0x2b47310 size 0x4 virtual false final false
  static inline ::UnityEngine::Vector4 op_Implicit___UnityEngine__Vector4(::UnityEngine::ProBuilder::IntVec4 p);

  /// @brief Method op_Implicit addr 0x2b47314 size 0x4 virtual false final false
  static inline ::UnityEngine::ProBuilder::IntVec4 op_Implicit___UnityEngine__ProBuilder__IntVec4(::UnityEngine::Vector4 p);

  // Ctor Parameters [CppParam { name: "value", ty: "::UnityEngine::Vector4", modifiers: "", def_value: None }]
  constexpr IntVec4(::UnityEngine::Vector4 value) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr IntVec4();

  /// @brief Field value, offset: 0x0, size: 0x10, def value: None
  ::UnityEngine::Vector4 value;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::IntVec4, 0x10>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::IntVec4, "UnityEngine.ProBuilder", "IntVec4");
