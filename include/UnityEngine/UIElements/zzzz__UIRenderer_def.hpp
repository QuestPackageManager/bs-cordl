#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIRenderer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Renderer_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UIRenderer)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
struct IntPtr;
}
namespace UnityEngine::UIElements::UIR {
class CommandList;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class UIRenderer;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::UIRenderer);
// Dependencies UnityEngine.Renderer
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.UIRenderer
class CORDL_TYPE UIRenderer : public ::UnityEngine::Renderer {
public:
  // Declarations
  /// @brief Field commandLists, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_commandLists,
                      put = __cordl_internal_set_commandLists)) ::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::CommandList*>*,
                                                                         ::Array<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::CommandList*>*>*>
      commandLists;

  /// @brief Field skipRendering, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_skipRendering, put = __cordl_internal_set_skipRendering)) bool skipRendering;

  static inline ::UnityEngine::UIElements::UIRenderer* New_ctor();

  /// @brief Method OnRenderNodeExecute, addr 0x6b82c28, size 0xd4, virtual false, abstract: false, final false
  static inline void OnRenderNodeExecute(::UnityEngine::UIElements::UIRenderer* renderer, int32_t safeFrameIndex, int32_t cmdListIndex);

  /// @brief Method SetNativeData, addr 0x6b82af4, size 0xd8, virtual false, abstract: false, final false
  inline void SetNativeData(int32_t safeFrameIndex, int32_t cmdListIndex, ::UnityEngine::Material* mat);

  /// @brief Method SetNativeData_Injected, addr 0x6b82bcc, size 0x5c, virtual false, abstract: false, final false
  static inline void SetNativeData_Injected(::System::IntPtr _unity_self, int32_t safeFrameIndex, int32_t cmdListIndex, ::System::IntPtr mat);

  constexpr ::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::CommandList*>*,
                     ::Array<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::CommandList*>*>*> const&
  __cordl_internal_get_commandLists() const;

  constexpr ::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::CommandList*>*,
                     ::Array<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::CommandList*>*>*>&
  __cordl_internal_get_commandLists();

  constexpr bool const& __cordl_internal_get_skipRendering() const;

  constexpr bool& __cordl_internal_get_skipRendering();

  constexpr void __cordl_internal_set_commandLists(
      ::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::CommandList*>*, ::Array<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::CommandList*>*>*>
          value);

  constexpr void __cordl_internal_set_skipRendering(bool value);

  /// @brief Method .ctor, addr 0x6b82cfc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UIRenderer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UIRenderer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UIRenderer(UIRenderer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UIRenderer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UIRenderer(UIRenderer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4630 };

  /// @brief Field commandLists, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::CommandList*>*, ::Array<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::CommandList*>*>*>
      ___commandLists;

  /// @brief Field skipRendering, offset: 0x20, size: 0x1, def value: None
  bool ___skipRendering;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::UIRenderer, ___commandLists) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIRenderer, ___skipRendering) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIRenderer, 0x28>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::UIRenderer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIRenderer*, "UnityEngine.UIElements", "UIRenderer");
