#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/SHCoefficients.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SHCoefficients)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
namespace UnityEngine::Rendering {
struct SphericalHarmonicsL2;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct SHCoefficients;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::SHCoefficients);
// Dependencies UnityEngine.Vector4
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.SHCoefficients
struct CORDL_TYPE SHCoefficients {
public:
  // Declarations
  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Rendering::SHCoefficients>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::Rendering::SHCoefficients>*();

  /// @brief Method Equals, addr 0x6596874, size 0x94, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x6596668, size 0x20c, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::Rendering::SHCoefficients other);

  /// @brief Method GetHashCode, addr 0x6596908, size 0x17c, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetSHA, addr 0x65964c0, size 0xa8, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector4 GetSHA(::UnityEngine::Rendering::SphericalHarmonicsL2 sh, int32_t i);

  /// @brief Method GetSHB, addr 0x6596568, size 0x94, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector4 GetSHB(::UnityEngine::Rendering::SphericalHarmonicsL2 sh, int32_t i);

  /// @brief Method GetSHC, addr 0x65965fc, size 0x14, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector4 GetSHC(::UnityEngine::Rendering::SphericalHarmonicsL2 sh);

  /// @brief Method .ctor, addr 0x6596368, size 0x158, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::SphericalHarmonicsL2 sh);

  /// @brief Method .ctor, addr 0x6596610, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::SphericalHarmonicsL2 sh, ::UnityEngine::Vector4 probesOcclusion);

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::Rendering::SHCoefficients>"
  constexpr ::System::IEquatable_1<::UnityEngine::Rendering::SHCoefficients>* i___System__IEquatable_1___UnityEngine__Rendering__SHCoefficients_();

  /// @brief Method op_Equality, addr 0x6596a84, size 0x34, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::Rendering::SHCoefficients left, ::UnityEngine::Rendering::SHCoefficients right);

  /// @brief Method op_Inequality, addr 0x6596ab8, size 0x38, virtual false, abstract: false, final false
  static inline bool op_Inequality(::UnityEngine::Rendering::SHCoefficients left, ::UnityEngine::Rendering::SHCoefficients right);

  // Ctor Parameters []
  // @brief default ctor
  constexpr SHCoefficients();

  // Ctor Parameters [CppParam { name: "SHAr", ty: "::UnityEngine::Vector4", modifiers: "", def_value: None }, CppParam { name: "SHAg", ty: "::UnityEngine::Vector4", modifiers: "", def_value: None },
  // CppParam { name: "SHAb", ty: "::UnityEngine::Vector4", modifiers: "", def_value: None }, CppParam { name: "SHBr", ty: "::UnityEngine::Vector4", modifiers: "", def_value: None }, CppParam { name:
  // "SHBg", ty: "::UnityEngine::Vector4", modifiers: "", def_value: None }, CppParam { name: "SHBb", ty: "::UnityEngine::Vector4", modifiers: "", def_value: None }, CppParam { name: "SHC", ty:
  // "::UnityEngine::Vector4", modifiers: "", def_value: None }, CppParam { name: "ProbesOcclusion", ty: "::UnityEngine::Vector4", modifiers: "", def_value: None }]
  constexpr SHCoefficients(::UnityEngine::Vector4 SHAr, ::UnityEngine::Vector4 SHAg, ::UnityEngine::Vector4 SHAb, ::UnityEngine::Vector4 SHBr, ::UnityEngine::Vector4 SHBg, ::UnityEngine::Vector4 SHBb,
                           ::UnityEngine::Vector4 SHC, ::UnityEngine::Vector4 ProbesOcclusion) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12226 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x80 };

  /// @brief Field SHAr, offset: 0x0, size: 0x10, def value: None
  ::UnityEngine::Vector4 SHAr;

  /// @brief Field SHAg, offset: 0x10, size: 0x10, def value: None
  ::UnityEngine::Vector4 SHAg;

  /// @brief Field SHAb, offset: 0x20, size: 0x10, def value: None
  ::UnityEngine::Vector4 SHAb;

  /// @brief Field SHBr, offset: 0x30, size: 0x10, def value: None
  ::UnityEngine::Vector4 SHBr;

  /// @brief Field SHBg, offset: 0x40, size: 0x10, def value: None
  ::UnityEngine::Vector4 SHBg;

  /// @brief Field SHBb, offset: 0x50, size: 0x10, def value: None
  ::UnityEngine::Vector4 SHBb;

  /// @brief Field SHC, offset: 0x60, size: 0x10, def value: None
  ::UnityEngine::Vector4 SHC;

  /// @brief Field ProbesOcclusion, offset: 0x70, size: 0x10, def value: None
  ::UnityEngine::Vector4 ProbesOcclusion;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::SHCoefficients, SHAr) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::SHCoefficients, SHAg) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::SHCoefficients, SHAb) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::SHCoefficients, SHBr) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::SHCoefficients, SHBg) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::SHCoefficients, SHBb) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::SHCoefficients, SHC) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::SHCoefficients, ProbesOcclusion) == 0x70, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::SHCoefficients, 0x80>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::SHCoefficients, "UnityEngine.Rendering", "SHCoefficients");
