#pragma once
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
// Type: UnityEngine.UIElements.UIR::VectorImageRenderInfo
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements::UIR {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7399), inst: 413 }), TypeDefinitionIndex(TypeDefinitionIndex(7433)),
// TypeDefinitionIndex(TypeDefinitionIndex(7399))} Self: TypeDefinitionIndex(TypeDefinitionIndex(7419)) CS Name: ::UnityEngine.UIElements.UIR::VectorImageRenderInfo*
class CORDL_TYPE VectorImageRenderInfo : public ::UnityEngine::UIElements::UIR::LinkedPoolItem_1<::UnityEngine::UIElements::UIR::VectorImageRenderInfo*> {
public:
  // Declarations
  /// @brief Field useCount, offset 0x18, size 0x4
  __declspec(property(get = __get_useCount, put = __set_useCount)) int32_t useCount;

  /// @brief Field firstGradientRemap, offset 0x20, size 0x8
  __declspec(property(get = __get_firstGradientRemap, put = __set_firstGradientRemap))::UnityEngine::UIElements::UIR::GradientRemap* firstGradientRemap;

  /// @brief Field gradientSettingsAlloc, offset 0x28, size 0x18
  __declspec(property(get = __get_gradientSettingsAlloc, put = __set_gradientSettingsAlloc))::UnityEngine::UIElements::UIR::Alloc gradientSettingsAlloc;

  constexpr int32_t& __get_useCount();

  constexpr int32_t const& __get_useCount() const;

  constexpr void __set_useCount(int32_t value);

  constexpr ::UnityEngine::UIElements::UIR::GradientRemap*& __get_firstGradientRemap();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UIR::GradientRemap*> const& __get_firstGradientRemap() const;

  constexpr void __set_firstGradientRemap(::UnityEngine::UIElements::UIR::GradientRemap* value);

  constexpr ::UnityEngine::UIElements::UIR::Alloc& __get_gradientSettingsAlloc();

  constexpr ::UnityEngine::UIElements::UIR::Alloc const& __get_gradientSettingsAlloc() const;

  constexpr void __set_gradientSettingsAlloc(::UnityEngine::UIElements::UIR::Alloc value);

  /// @brief Method Reset, addr 0x2dccea8, size 0x10, virtual false, abstract: false, final false
  inline void Reset();

  static inline ::UnityEngine::UIElements::UIR::VectorImageRenderInfo* New_ctor();

  /// @brief Method .ctor, addr 0x2dcce40, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "VectorImageRenderInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VectorImageRenderInfo(VectorImageRenderInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VectorImageRenderInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VectorImageRenderInfo(VectorImageRenderInfo const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VectorImageRenderInfo();

public:
  /// @brief Field useCount, offset: 0x18, size: 0x4, def value: None
  int32_t ___useCount;

  /// @brief Field firstGradientRemap, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::GradientRemap* ___firstGradientRemap;

  /// @brief Field gradientSettingsAlloc, offset: 0x28, size: 0x18, def value: None
  ::UnityEngine::UIElements::UIR::Alloc ___gradientSettingsAlloc;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::VectorImageRenderInfo, 0x40>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::VectorImageRenderInfo, ___useCount) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::VectorImageRenderInfo, ___firstGradientRemap) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::VectorImageRenderInfo, ___gradientSettingsAlloc) == 0x28, "Offset mismatch!");

} // namespace UnityEngine::UIElements::UIR
NEED_NO_BOX(::UnityEngine::UIElements::UIR::VectorImageRenderInfo);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::VectorImageRenderInfo*, "UnityEngine.UIElements.UIR", "VectorImageRenderInfo");
