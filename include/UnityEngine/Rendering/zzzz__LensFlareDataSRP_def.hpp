#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/LensFlareDataSRP.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__LensFlareDataElementSRP_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(LensFlareDataSRP)
// Forward declare root types
namespace UnityEngine::Rendering {
class LensFlareDataSRP;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::LensFlareDataSRP*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::LensFlareDataSRP*, "UnityEngine.Rendering", "LensFlareDataSRP");
// Dependencies UnityEngine.Rendering.LensFlareDataElementSRP, UnityEngine.ScriptableObject
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.LensFlareDataSRP
class CORDL_TYPE LensFlareDataSRP : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  /// @brief Field elements, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_elements, put = __cordl_internal_set_elements)) ::ArrayW<::UnityEngine::Rendering::LensFlareDataElementSRP*> elements;

  /// @brief Method HasAModulateByLightColorElement, addr 0x679ceb0, size 0x60, virtual false, abstract: false, final false
  inline bool HasAModulateByLightColorElement();

  static inline ::UnityEngine::Rendering::LensFlareDataSRP* New_ctor();

  constexpr ::ArrayW<::UnityEngine::Rendering::LensFlareDataElementSRP*> const& __cordl_internal_get_elements() const;

  constexpr ::ArrayW<::UnityEngine::Rendering::LensFlareDataElementSRP*>& __cordl_internal_get_elements();

  constexpr void __cordl_internal_set_elements(::ArrayW<::UnityEngine::Rendering::LensFlareDataElementSRP*> value);

  /// @brief Method .ctor, addr 0x679ce94, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LensFlareDataSRP();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LensFlareDataSRP", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LensFlareDataSRP(LensFlareDataSRP&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LensFlareDataSRP", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LensFlareDataSRP(LensFlareDataSRP const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12152 };

  /// @brief Field elements, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Rendering::LensFlareDataElementSRP*> ___elements;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::LensFlareDataSRP, ___elements) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::LensFlareDataSRP) == 0x20, "Size mismatch!");

} // namespace UnityEngine::Rendering
