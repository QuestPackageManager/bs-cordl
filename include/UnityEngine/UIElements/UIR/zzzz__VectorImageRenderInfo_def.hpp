#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/VectorImageRenderInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/UIR/zzzz__Alloc_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__LinkedPoolItem_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(VectorImageRenderInfo)
namespace UnityEngine::UIElements::UIR {
class GradientRemap;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
class VectorImageRenderInfo;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::UIR::VectorImageRenderInfo);
// Dependencies UnityEngine.UIElements.UIR.Alloc, UnityEngine.UIElements.UIR.LinkedPoolItem`1<T>
namespace UnityEngine::UIElements::UIR {
// Is value type: false
// CS Name: UnityEngine.UIElements.UIR.VectorImageRenderInfo
class CORDL_TYPE VectorImageRenderInfo : public ::UnityEngine::UIElements::UIR::LinkedPoolItem_1<::UnityEngine::UIElements::UIR::VectorImageRenderInfo*> {
public:
  // Declarations
  /// @brief Field firstGradientRemap, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_firstGradientRemap, put = __cordl_internal_set_firstGradientRemap)) ::UnityEngine::UIElements::UIR::GradientRemap* firstGradientRemap;

  /// @brief Field gradientSettingsAlloc, offset 0x28, size 0x18
  __declspec(property(get = __cordl_internal_get_gradientSettingsAlloc, put = __cordl_internal_set_gradientSettingsAlloc)) ::UnityEngine::UIElements::UIR::Alloc gradientSettingsAlloc;

  /// @brief Field useCount, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_useCount, put = __cordl_internal_set_useCount)) int32_t useCount;

  static inline ::UnityEngine::UIElements::UIR::VectorImageRenderInfo* New_ctor();

  /// @brief Method Reset, addr 0x6b2a574, size 0x10, virtual false, abstract: false, final false
  inline void Reset();

  constexpr ::UnityEngine::UIElements::UIR::GradientRemap* const& __cordl_internal_get_firstGradientRemap() const;

  constexpr ::UnityEngine::UIElements::UIR::GradientRemap*& __cordl_internal_get_firstGradientRemap();

  constexpr ::UnityEngine::UIElements::UIR::Alloc const& __cordl_internal_get_gradientSettingsAlloc() const;

  constexpr ::UnityEngine::UIElements::UIR::Alloc& __cordl_internal_get_gradientSettingsAlloc();

  constexpr int32_t const& __cordl_internal_get_useCount() const;

  constexpr int32_t& __cordl_internal_get_useCount();

  constexpr void __cordl_internal_set_firstGradientRemap(::UnityEngine::UIElements::UIR::GradientRemap* value);

  constexpr void __cordl_internal_set_gradientSettingsAlloc(::UnityEngine::UIElements::UIR::Alloc value);

  constexpr void __cordl_internal_set_useCount(int32_t value);

  /// @brief Method .ctor, addr 0x6b2a51c, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VectorImageRenderInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VectorImageRenderInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VectorImageRenderInfo(VectorImageRenderInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VectorImageRenderInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VectorImageRenderInfo(VectorImageRenderInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5362 };

  /// @brief Field useCount, offset: 0x18, size: 0x4, def value: None
  int32_t ___useCount;

  /// @brief Field firstGradientRemap, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::GradientRemap* ___firstGradientRemap;

  /// @brief Field gradientSettingsAlloc, offset: 0x28, size: 0x18, def value: None
  ::UnityEngine::UIElements::UIR::Alloc ___gradientSettingsAlloc;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::UIR::VectorImageRenderInfo, ___useCount) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::VectorImageRenderInfo, ___firstGradientRemap) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::VectorImageRenderInfo, ___gradientSettingsAlloc) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::VectorImageRenderInfo, 0x40>, "Size mismatch!");

} // namespace UnityEngine::UIElements::UIR
NEED_NO_BOX(::UnityEngine::UIElements::UIR::VectorImageRenderInfo);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::VectorImageRenderInfo*, "UnityEngine.UIElements.UIR", "VectorImageRenderInfo");
