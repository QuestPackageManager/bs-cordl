#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SphericalHarmonicsL2)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct SphericalHarmonicsL2;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::SphericalHarmonicsL2);
// Type: UnityEngine.Rendering::SphericalHarmonicsL2
// SizeInfo { instance_size: 108, native_size: 108, calculated_instance_size: 108, calculated_native_size: 124, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: ::UnityEngine.Rendering::SphericalHarmonicsL2
struct CORDL_TYPE SphericalHarmonicsL2 {
public:
  // Declarations
  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Rendering::SphericalHarmonicsL2>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::Rendering::SphericalHarmonicsL2>*();

  /// @brief Method Equals, addr 0x2e41970, size 0xb8, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* other);

  /// @brief Method Equals, addr 0x2e41a28, size 0x48, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::Rendering::SphericalHarmonicsL2 other);

  /// @brief Method GetHashCode, addr 0x2e4179c, size 0x1d4, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::Rendering::SphericalHarmonicsL2>"
  constexpr ::System::IEquatable_1<::UnityEngine::Rendering::SphericalHarmonicsL2>* i___System__IEquatable_1___UnityEngine__Rendering__SphericalHarmonicsL2_();

  /// @brief Method op_Equality, addr 0x2e41a70, size 0x1bc, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::Rendering::SphericalHarmonicsL2 lhs, ::UnityEngine::Rendering::SphericalHarmonicsL2 rhs);

  // Ctor Parameters []
  // @brief default ctor
  constexpr SphericalHarmonicsL2();

  // Ctor Parameters [CppParam { name: "shr0", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "shr1", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "shr2", ty:
  // "float_t", modifiers: "", def_value: None }, CppParam { name: "shr3", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "shr4", ty: "float_t", modifiers: "", def_value: None },
  // CppParam { name: "shr5", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "shr6", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "shr7", ty: "float_t",
  // modifiers: "", def_value: None }, CppParam { name: "shr8", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "shg0", ty: "float_t", modifiers: "", def_value: None }, CppParam {
  // name: "shg1", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "shg2", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "shg3", ty: "float_t", modifiers: "",
  // def_value: None }, CppParam { name: "shg4", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "shg5", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "shg6", ty:
  // "float_t", modifiers: "", def_value: None }, CppParam { name: "shg7", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "shg8", ty: "float_t", modifiers: "", def_value: None },
  // CppParam { name: "shb0", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "shb1", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "shb2", ty: "float_t",
  // modifiers: "", def_value: None }, CppParam { name: "shb3", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "shb4", ty: "float_t", modifiers: "", def_value: None }, CppParam {
  // name: "shb5", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "shb6", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "shb7", ty: "float_t", modifiers: "",
  // def_value: None }, CppParam { name: "shb8", ty: "float_t", modifiers: "", def_value: None }]
  constexpr SphericalHarmonicsL2(float_t shr0, float_t shr1, float_t shr2, float_t shr3, float_t shr4, float_t shr5, float_t shr6, float_t shr7, float_t shr8, float_t shg0, float_t shg1, float_t shg2,
                                 float_t shg3, float_t shg4, float_t shg5, float_t shg6, float_t shg7, float_t shg8, float_t shb0, float_t shb1, float_t shb2, float_t shb3, float_t shb4, float_t shb5,
                                 float_t shb6, float_t shb7, float_t shb8) noexcept;

  /// @brief Field shr0, offset: 0x0, size: 0x4, def value: None
  float_t shr0;

  /// @brief Field shr1, offset: 0x4, size: 0x4, def value: None
  float_t shr1;

  /// @brief Field shr2, offset: 0x8, size: 0x4, def value: None
  float_t shr2;

  /// @brief Field shr3, offset: 0xc, size: 0x4, def value: None
  float_t shr3;

  /// @brief Field shr4, offset: 0x10, size: 0x4, def value: None
  float_t shr4;

  /// @brief Field shr5, offset: 0x14, size: 0x4, def value: None
  float_t shr5;

  /// @brief Field shr6, offset: 0x18, size: 0x4, def value: None
  float_t shr6;

  /// @brief Field shr7, offset: 0x1c, size: 0x4, def value: None
  float_t shr7;

  /// @brief Field shr8, offset: 0x20, size: 0x4, def value: None
  float_t shr8;

  /// @brief Field shg0, offset: 0x24, size: 0x4, def value: None
  float_t shg0;

  /// @brief Field shg1, offset: 0x28, size: 0x4, def value: None
  float_t shg1;

  /// @brief Field shg2, offset: 0x2c, size: 0x4, def value: None
  float_t shg2;

  /// @brief Field shg3, offset: 0x30, size: 0x4, def value: None
  float_t shg3;

  /// @brief Field shg4, offset: 0x34, size: 0x4, def value: None
  float_t shg4;

  /// @brief Field shg5, offset: 0x38, size: 0x4, def value: None
  float_t shg5;

  /// @brief Field shg6, offset: 0x3c, size: 0x4, def value: None
  float_t shg6;

  /// @brief Field shg7, offset: 0x40, size: 0x4, def value: None
  float_t shg7;

  /// @brief Field shg8, offset: 0x44, size: 0x4, def value: None
  float_t shg8;

  /// @brief Field shb0, offset: 0x48, size: 0x4, def value: None
  float_t shb0;

  /// @brief Field shb1, offset: 0x4c, size: 0x4, def value: None
  float_t shb1;

  /// @brief Field shb2, offset: 0x50, size: 0x4, def value: None
  float_t shb2;

  /// @brief Field shb3, offset: 0x54, size: 0x4, def value: None
  float_t shb3;

  /// @brief Field shb4, offset: 0x58, size: 0x4, def value: None
  float_t shb4;

  /// @brief Field shb5, offset: 0x5c, size: 0x4, def value: None
  float_t shb5;

  /// @brief Field shb6, offset: 0x60, size: 0x4, def value: None
  float_t shb6;

  /// @brief Field shb7, offset: 0x64, size: 0x4, def value: None
  float_t shb7;

  /// @brief Field shb8, offset: 0x68, size: 0x4, def value: None
  float_t shb8;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x6c };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::SphericalHarmonicsL2, 0x6c>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::SphericalHarmonicsL2, shr0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::SphericalHarmonicsL2, shr1) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::SphericalHarmonicsL2, shr2) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::SphericalHarmonicsL2, shr3) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::SphericalHarmonicsL2, shr4) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::SphericalHarmonicsL2, shr5) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::SphericalHarmonicsL2, shr6) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::SphericalHarmonicsL2, shr7) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::SphericalHarmonicsL2, shr8) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::SphericalHarmonicsL2, shg0) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::SphericalHarmonicsL2, shg1) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::SphericalHarmonicsL2, shg2) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::SphericalHarmonicsL2, shg3) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::SphericalHarmonicsL2, shg4) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::SphericalHarmonicsL2, shg5) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::SphericalHarmonicsL2, shg6) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::SphericalHarmonicsL2, shg7) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::SphericalHarmonicsL2, shg8) == 0x44, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::SphericalHarmonicsL2, shb0) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::SphericalHarmonicsL2, shb1) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::SphericalHarmonicsL2, shb2) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::SphericalHarmonicsL2, shb3) == 0x54, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::SphericalHarmonicsL2, shb4) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::SphericalHarmonicsL2, shb5) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::SphericalHarmonicsL2, shb6) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::SphericalHarmonicsL2, shb7) == 0x64, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::SphericalHarmonicsL2, shb8) == 0x68, "Offset mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::SphericalHarmonicsL2, "UnityEngine.Rendering", "SphericalHarmonicsL2");
