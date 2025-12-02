#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/IMeshGenerator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(IMeshGenerator)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace Unity::Collections {
template <typename T> struct NativeSlice_1;
}
namespace UnityEngine::TextCore::LowLevel {
struct GlyphRenderMode;
}
namespace UnityEngine::UIElements::UIR {
struct MeshGenerator_BorderParams;
}
namespace UnityEngine::UIElements::UIR {
struct MeshGenerator_RectangleParams;
}
namespace UnityEngine::UIElements {
class UITKTextJobSystem;
}
namespace UnityEngine::UIElements {
struct Vertex;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
class IMeshGenerator;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::UIR::IMeshGenerator);
// Dependencies
namespace UnityEngine::UIElements::UIR {
// Is value type: false
// CS Name: UnityEngine.UIElements.UIR.IMeshGenerator
class CORDL_TYPE IMeshGenerator {
public:
  // Declarations
  __declspec(property(put = set_currentElement)) ::UnityEngine::UIElements::VisualElement* currentElement;

  __declspec(property(get = get_textJobSystem)) ::UnityEngine::UIElements::UITKTextJobSystem* textJobSystem;

  /// @brief Method DrawBorder, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void DrawBorder(::UnityEngine::UIElements::UIR::MeshGenerator_BorderParams borderParams);

  /// @brief Method DrawNativeText, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void DrawNativeText(::bs_hook::ValueTypeWrapper<8> textInfo, ::UnityEngine::Vector2 pos);

  /// @brief Method DrawRectangle, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void DrawRectangle(::UnityEngine::UIElements::UIR::MeshGenerator_RectangleParams rectParams);

  /// @brief Method DrawRectangleRepeat, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void DrawRectangleRepeat(::UnityEngine::UIElements::UIR::MeshGenerator_RectangleParams rectParams, ::UnityEngine::Rect totalRect, float_t scaledPixelsPerPoint);

  /// @brief Method DrawText, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void DrawText(::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>* vertices,
                       ::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<uint16_t>>* indices,
                       ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>* materials,
                       ::System::Collections::Generic::List_1<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>* renderModes);

  /// @brief Method ScheduleJobs, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void ScheduleJobs(Il2CppObject* mgc);

  /// @brief Method get_textJobSystem, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::UITKTextJobSystem* get_textJobSystem();

  /// @brief Method set_currentElement, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_currentElement(::UnityEngine::UIElements::VisualElement* value);

  // Ctor Parameters [CppParam { name: "", ty: "IMeshGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IMeshGenerator(IMeshGenerator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5312 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements::UIR
NEED_NO_BOX(::UnityEngine::UIElements::UIR::IMeshGenerator);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::IMeshGenerator*, "UnityEngine.UIElements.UIR", "IMeshGenerator");
