#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/ExtraRenderChainVEData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/UIR/zzzz__LinkedPoolItem_1_def.hpp"
CORDL_MODULE_EXPORT(ExtraRenderChainVEData)
namespace UnityEngine::UIElements::UIR {
template <typename T> class BasicNode_1;
}
namespace UnityEngine::UIElements::UIR {
class MeshHandle;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
class ExtraRenderChainVEData;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::UIR::ExtraRenderChainVEData);
// Dependencies UnityEngine.UIElements.UIR.LinkedPoolItem`1<T>
namespace UnityEngine::UIElements::UIR {
// Is value type: false
// CS Name: UnityEngine.UIElements.UIR.ExtraRenderChainVEData
class CORDL_TYPE ExtraRenderChainVEData : public ::UnityEngine::UIElements::UIR::LinkedPoolItem_1<::UnityEngine::UIElements::UIR::ExtraRenderChainVEData*> {
public:
  // Declarations
  /// @brief Field extraMesh, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_extraMesh, put = __cordl_internal_set_extraMesh)) ::UnityEngine::UIElements::UIR::BasicNode_1<::UnityEngine::UIElements::UIR::MeshHandle*>* extraMesh;

  static inline ::UnityEngine::UIElements::UIR::ExtraRenderChainVEData* New_ctor();

  /// @brief Method Reset, addr 0x6b20bf4, size 0x64, virtual false, abstract: false, final false
  inline void Reset();

  constexpr ::UnityEngine::UIElements::UIR::BasicNode_1<::UnityEngine::UIElements::UIR::MeshHandle*>* const& __cordl_internal_get_extraMesh() const;

  constexpr ::UnityEngine::UIElements::UIR::BasicNode_1<::UnityEngine::UIElements::UIR::MeshHandle*>*& __cordl_internal_get_extraMesh();

  constexpr void __cordl_internal_set_extraMesh(::UnityEngine::UIElements::UIR::BasicNode_1<::UnityEngine::UIElements::UIR::MeshHandle*>* value);

  /// @brief Method .ctor, addr 0x6b20ba4, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ExtraRenderChainVEData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ExtraRenderChainVEData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ExtraRenderChainVEData(ExtraRenderChainVEData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ExtraRenderChainVEData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ExtraRenderChainVEData(ExtraRenderChainVEData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5338 };

  /// @brief Field extraMesh, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::BasicNode_1<::UnityEngine::UIElements::UIR::MeshHandle*>* ___extraMesh;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::UIR::ExtraRenderChainVEData, ___extraMesh) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::ExtraRenderChainVEData, 0x20>, "Size mismatch!");

} // namespace UnityEngine::UIElements::UIR
NEED_NO_BOX(::UnityEngine::UIElements::UIR::ExtraRenderChainVEData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::ExtraRenderChainVEData*, "UnityEngine.UIElements.UIR", "ExtraRenderChainVEData");
