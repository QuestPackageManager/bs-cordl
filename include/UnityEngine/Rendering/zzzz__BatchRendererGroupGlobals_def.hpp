#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/BatchRendererGroupGlobals.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__SHCoefficients_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BatchRendererGroupGlobals)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct BatchRendererGroupGlobals;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::BatchRendererGroupGlobals);
// Dependencies UnityEngine.Rendering.SHCoefficients, UnityEngine.Vector4
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.BatchRendererGroupGlobals
struct CORDL_TYPE BatchRendererGroupGlobals {
public:
  // Declarations
  /// @brief Field kGlobalsPropertyId, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_kGlobalsPropertyId, put = setStaticF_kGlobalsPropertyId)) int32_t kGlobalsPropertyId;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Rendering::BatchRendererGroupGlobals>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::Rendering::BatchRendererGroupGlobals>*();

  /// @brief Method Equals, addr 0x6596d70, size 0xa4, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x6596c50, size 0x120, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::Rendering::BatchRendererGroupGlobals other);

  /// @brief Method GetHashCode, addr 0x6596e14, size 0x118, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline int32_t getStaticF_kGlobalsPropertyId();

  /// @brief Method get_Default, addr 0x6596af0, size 0x160, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::BatchRendererGroupGlobals get_Default();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::Rendering::BatchRendererGroupGlobals>"
  constexpr ::System::IEquatable_1<::UnityEngine::Rendering::BatchRendererGroupGlobals>* i___System__IEquatable_1___UnityEngine__Rendering__BatchRendererGroupGlobals_();

  /// @brief Method op_Equality, addr 0x6596f2c, size 0x88, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::Rendering::BatchRendererGroupGlobals left, ::UnityEngine::Rendering::BatchRendererGroupGlobals right);

  /// @brief Method op_Inequality, addr 0x6596fb4, size 0x8c, virtual false, abstract: false, final false
  static inline bool op_Inequality(::UnityEngine::Rendering::BatchRendererGroupGlobals left, ::UnityEngine::Rendering::BatchRendererGroupGlobals right);

  static inline void setStaticF_kGlobalsPropertyId(int32_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr BatchRendererGroupGlobals();

  // Ctor Parameters [CppParam { name: "ProbesOcclusion", ty: "::UnityEngine::Vector4", modifiers: "", def_value: None }, CppParam { name: "SpecCube0_HDR", ty: "::UnityEngine::Vector4", modifiers: "",
  // def_value: None }, CppParam { name: "SpecCube1_HDR", ty: "::UnityEngine::Vector4", modifiers: "", def_value: None }, CppParam { name: "SHCoefficients", ty:
  // "::UnityEngine::Rendering::SHCoefficients", modifiers: "", def_value: None }]
  constexpr BatchRendererGroupGlobals(::UnityEngine::Vector4 ProbesOcclusion, ::UnityEngine::Vector4 SpecCube0_HDR, ::UnityEngine::Vector4 SpecCube1_HDR,
                                      ::UnityEngine::Rendering::SHCoefficients SHCoefficients) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12227 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xb0 };

  /// @brief Field kGlobalsPropertyName offset 0xffffffff size 0x8
  static constexpr ::ConstString kGlobalsPropertyName{ u"unity_DOTSInstanceGlobalValues" };

  /// @brief Field ProbesOcclusion, offset: 0x0, size: 0x10, def value: None
  ::UnityEngine::Vector4 ProbesOcclusion;

  /// @brief Field SpecCube0_HDR, offset: 0x10, size: 0x10, def value: None
  ::UnityEngine::Vector4 SpecCube0_HDR;

  /// @brief Field SpecCube1_HDR, offset: 0x20, size: 0x10, def value: None
  ::UnityEngine::Vector4 SpecCube1_HDR;

  /// @brief Field SHCoefficients, offset: 0x30, size: 0x80, def value: None
  ::UnityEngine::Rendering::SHCoefficients SHCoefficients;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::BatchRendererGroupGlobals, ProbesOcclusion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::BatchRendererGroupGlobals, SpecCube0_HDR) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::BatchRendererGroupGlobals, SpecCube1_HDR) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::BatchRendererGroupGlobals, SHCoefficients) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::BatchRendererGroupGlobals, 0xb0>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::BatchRendererGroupGlobals, "UnityEngine.Rendering", "BatchRendererGroupGlobals");
