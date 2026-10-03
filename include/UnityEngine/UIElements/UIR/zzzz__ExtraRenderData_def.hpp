#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/ExtraRenderData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/UIR/zzzz__LinkedPoolItem_1_def.hpp"
CORDL_MODULE_EXPORT(ExtraRenderData)
namespace UnityEngine::UIElements::UIR {
template <typename T> class BasicNode_1;
}
namespace UnityEngine::UIElements::UIR {
class MeshHandle;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
class ExtraRenderData;
}
// Write type traits
MARK_REF_T(::UnityEngine::UIElements::UIR::ExtraRenderData*);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::UIR::ExtraRenderData*, "UnityEngine.UIElements.UIR", "ExtraRenderData");
// Dependencies UnityEngine.UIElements.UIR.LinkedPoolItem`1<T>
namespace UnityEngine::UIElements::UIR {
// Is value type: false
// CS Name: UnityEngine.UIElements.UIR.ExtraRenderData
class CORDL_TYPE ExtraRenderData : public ::UnityEngine::UIElements::UIR::LinkedPoolItem_1<::UnityEngine::UIElements::UIR::ExtraRenderData*> {
public:
  // Declarations
  /// @brief Field extraMesh, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_extraMesh, put = __cordl_internal_set_extraMesh)) ::UnityEngine::UIElements::UIR::BasicNode_1<::UnityEngine::UIElements::UIR::MeshHandle*>* extraMesh;

  static inline ::UnityEngine::UIElements::UIR::ExtraRenderData* New_ctor();

  constexpr ::UnityEngine::UIElements::UIR::BasicNode_1<::UnityEngine::UIElements::UIR::MeshHandle*>* const& __cordl_internal_get_extraMesh() const;

  constexpr ::UnityEngine::UIElements::UIR::BasicNode_1<::UnityEngine::UIElements::UIR::MeshHandle*>*& __cordl_internal_get_extraMesh();

  constexpr void __cordl_internal_set_extraMesh(::UnityEngine::UIElements::UIR::BasicNode_1<::UnityEngine::UIElements::UIR::MeshHandle*>* value);

  /// @brief Method .ctor, addr 0x7176370, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ExtraRenderData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ExtraRenderData", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ExtraRenderData(ExtraRenderData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ExtraRenderData", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ExtraRenderData(ExtraRenderData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5436 };

  /// @brief Field extraMesh, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::BasicNode_1<::UnityEngine::UIElements::UIR::MeshHandle*>* ___extraMesh;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::UIR::ExtraRenderData, ___extraMesh) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::UIR::ExtraRenderData) == 0x20, "Size mismatch!");

} // namespace UnityEngine::UIElements::UIR
