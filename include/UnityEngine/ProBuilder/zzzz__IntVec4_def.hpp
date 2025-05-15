#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/IntVec4.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IEquatable_1_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IntVec4)
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
// Dependencies System.IEquatable`1<T>, UnityEngine.Vector4
namespace UnityEngine::ProBuilder {
// Is value type: true
// CS Name: UnityEngine.ProBuilder.IntVec4
struct CORDL_TYPE IntVec4 {
public:
  // Declarations
  __declspec(property(get = get_w)) float_t w;

  __declspec(property(get = get_x)) float_t x;

  __declspec(property(get = get_y)) float_t y;

  __declspec(property(get = get_z)) float_t z;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::ProBuilder::IntVec4>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::ProBuilder::IntVec4>*();

  /// @brief Method Equals, addr 0x470fe0c, size 0xc4, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* b);

  /// @brief Method Equals, addr 0x470fc00, size 0xb4, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::ProBuilder::IntVec4 p);

  /// @brief Method Equals, addr 0x470fd58, size 0xb4, virtual false, abstract: false, final false
  inline bool Equals(::UnityEngine::Vector4 p);

  /// @brief Method GetHashCode, addr 0x470fed0, size 0x10, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x470fa1c, size 0x1ac, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x470fa10, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Vector4 vector);

  /// @brief Method get_w, addr 0x470fa08, size 0x8, virtual false, abstract: false, final false
  inline float_t get_w();

  /// @brief Method get_x, addr 0x470f9f0, size 0x8, virtual false, abstract: false, final false
  inline float_t get_x();

  /// @brief Method get_y, addr 0x470f9f8, size 0x8, virtual false, abstract: false, final false
  inline float_t get_y();

  /// @brief Method get_z, addr 0x470fa00, size 0x8, virtual false, abstract: false, final false
  inline float_t get_z();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::ProBuilder::IntVec4>"
  constexpr ::System::IEquatable_1<::UnityEngine::ProBuilder::IntVec4>* i___System__IEquatable_1___UnityEngine__ProBuilder__IntVec4_();

  /// @brief Method op_Equality, addr 0x470fbc8, size 0x38, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::ProBuilder::IntVec4 a, ::UnityEngine::ProBuilder::IntVec4 b);

  /// @brief Method op_Implicit, addr 0x470fee4, size 0x4, virtual false, abstract: false, final false
  static inline ::UnityEngine::ProBuilder::IntVec4 op_Implicit___UnityEngine__ProBuilder__IntVec4(::UnityEngine::Vector4 p);

  /// @brief Method op_Implicit, addr 0x470fee0, size 0x4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector4 op_Implicit___UnityEngine__Vector4(::UnityEngine::ProBuilder::IntVec4 p);

  /// @brief Method op_Inequality, addr 0x470fcb4, size 0x3c, virtual false, abstract: false, final false
  static inline bool op_Inequality(::UnityEngine::ProBuilder::IntVec4 a, ::UnityEngine::ProBuilder::IntVec4 b);

  /// @brief Method round, addr 0x470fcf0, size 0x68, virtual false, abstract: false, final false
  static inline int32_t round(float_t v);

  // Ctor Parameters []
  // @brief default ctor
  constexpr IntVec4();

  // Ctor Parameters [CppParam { name: "value", ty: "::UnityEngine::Vector4", modifiers: "", def_value: None }]
  constexpr IntVec4(::UnityEngine::Vector4 value) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14252 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field value, offset: 0x0, size: 0x10, def value: None
  ::UnityEngine::Vector4 value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ProBuilder::IntVec4, value) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::IntVec4, 0x10>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::IntVec4, "UnityEngine.ProBuilder", "IntVec4");
