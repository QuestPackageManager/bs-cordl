#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/BaseElementBuilder.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(BaseElementBuilder)
namespace UnityEngine::UIElements {
class VisualElement;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
class BaseElementBuilder;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::UIR::BaseElementBuilder);
// Dependencies System.Object
namespace UnityEngine::UIElements::UIR {
// Is value type: false
// CS Name: UnityEngine.UIElements.UIR.BaseElementBuilder
class CORDL_TYPE BaseElementBuilder : public ::System::Object {
public:
  // Declarations
  /// @brief Method Build, addr 0x6aa1660, size 0x6bc, virtual false, abstract: false, final false
  inline void Build(Il2CppObject* mgc);

  /// @brief Method DrawVisualElementBackground, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void DrawVisualElementBackground(Il2CppObject* mgc);

  /// @brief Method DrawVisualElementBorder, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void DrawVisualElementBorder(Il2CppObject* mgc);

  /// @brief Method DrawVisualElementStencilMask, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void DrawVisualElementStencilMask(Il2CppObject* mgc);

  /// @brief Method InvokeGenerateVisualContent, addr 0x6aa1f6c, size 0x104, virtual false, abstract: false, final false
  static inline void InvokeGenerateVisualContent(Il2CppObject* mgc);

  static inline ::UnityEngine::UIElements::UIR::BaseElementBuilder* New_ctor();

  /// @brief Method PopVisualElementClipping, addr 0x6aa2070, size 0x1a4, virtual false, abstract: false, final false
  static inline void PopVisualElementClipping(Il2CppObject* mgc);

  /// @brief Method PushVisualElementClipping, addr 0x6aa1d1c, size 0x250, virtual false, abstract: false, final false
  inline void PushVisualElementClipping(Il2CppObject* mgc);

  /// @brief Method RequiresStencilMask, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool RequiresStencilMask(::UnityEngine::UIElements::VisualElement* ve);

  /// @brief Method ScheduleMeshGenerationJobs, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void ScheduleMeshGenerationJobs(Il2CppObject* mgc);

  /// @brief Method .ctor, addr 0x6aa2214, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BaseElementBuilder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BaseElementBuilder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BaseElementBuilder(BaseElementBuilder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BaseElementBuilder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BaseElementBuilder(BaseElementBuilder const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5285 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::BaseElementBuilder, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements::UIR
NEED_NO_BOX(::UnityEngine::UIElements::UIR::BaseElementBuilder);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::BaseElementBuilder*, "UnityEngine.UIElements.UIR", "BaseElementBuilder");
