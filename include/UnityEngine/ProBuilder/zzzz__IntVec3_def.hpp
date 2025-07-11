#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/IntVec3.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IEquatable_1_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IntVec3)
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
// Dependencies System.IEquatable`1<T>, UnityEngine.Vector3
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

  /// @brief Method Equals, addr 0x470f534, size 0xc4, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* b);

  /// @brief Method Equals, addr 0x470f36c, size 0x94, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::ProBuilder::IntVec3 p);

  /// @brief Method Equals, addr 0x470f4a0, size 0x94, virtual false, abstract: false, final false
  inline bool Equals(::UnityEngine::Vector3 p);

  /// @brief Method GetHashCode, addr 0x470f5f8, size 0x10, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x470f274, size 0xc4, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x470f268, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Vector3 vector);

  /// @brief Method get_x, addr 0x470f250, size 0x8, virtual false, abstract: false, final false
  inline float_t get_x();

  /// @brief Method get_y, addr 0x470f258, size 0x8, virtual false, abstract: false, final false
  inline float_t get_y();

  /// @brief Method get_z, addr 0x470f260, size 0x8, virtual false, abstract: false, final false
  inline float_t get_z();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::ProBuilder::IntVec3>"
  constexpr ::System::IEquatable_1<::UnityEngine::ProBuilder::IntVec3>* i___System__IEquatable_1___UnityEngine__ProBuilder__IntVec3_();

  /// @brief Method op_Equality, addr 0x470f338, size 0x34, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::ProBuilder::IntVec3 a, ::UnityEngine::ProBuilder::IntVec3 b);

  /// @brief Method op_Implicit, addr 0x470f60c, size 0x4, virtual false, abstract: false, final false
  static inline ::UnityEngine::ProBuilder::IntVec3 op_Implicit___UnityEngine__ProBuilder__IntVec3(::UnityEngine::Vector3 p);

  /// @brief Method op_Implicit, addr 0x470f608, size 0x4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 op_Implicit___UnityEngine__Vector3(::UnityEngine::ProBuilder::IntVec3 p);

  /// @brief Method op_Inequality, addr 0x470f400, size 0x38, virtual false, abstract: false, final false
  static inline bool op_Inequality(::UnityEngine::ProBuilder::IntVec3 a, ::UnityEngine::ProBuilder::IntVec3 b);

  /// @brief Method round, addr 0x470f438, size 0x68, virtual false, abstract: false, final false
  static inline int32_t round(float_t v);

  // Ctor Parameters []
  // @brief default ctor
  constexpr IntVec3();

  // Ctor Parameters [CppParam { name: "value", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }]
  constexpr IntVec3(::UnityEngine::Vector3 value) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14251 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xc };

  /// @brief Field value, offset: 0x0, size: 0xc, def value: None
  ::UnityEngine::Vector3 value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ProBuilder::IntVec3, value) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::IntVec3, 0xc>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::IntVec3, "UnityEngine.ProBuilder", "IntVec3");
