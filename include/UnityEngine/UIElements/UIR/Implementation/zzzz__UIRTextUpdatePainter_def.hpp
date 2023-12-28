#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Collections/zzzz__NativeSlice_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__Vertex_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(UIRTextUpdatePainter)
namespace UnityEngine::UIElements {
class MeshGenerationContext;
}
namespace UnityEngine::UIElements {
struct __MeshGenerationContextUtils__RectangleParams;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
struct __MeshGenerationContextUtils__TextParams;
}
namespace UnityEngine::UIElements {
class ITextHandle;
}
namespace UnityEngine::UIElements {
class IStylePainter;
}
namespace UnityEngine::UIElements::UIR {
class UIRenderDevice;
}
namespace System {
class IDisposable;
}
namespace System {
class Action;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR::Implementation {
class UIRTextUpdatePainter;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter);
// Type: UnityEngine.UIElements.UIR.Implementation::UIRTextUpdatePainter
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements::UIR::Implementation {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10250)), TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(7330)),
// GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9999), inst: 752 }), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9994), inst: 756 }),
// TypeDefinitionIndex(TypeDefinitionIndex(9994)), TypeDefinitionIndex(TypeDefinitionIndex(9999)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9999), inst: 756 })} Self:
// TypeDefinitionIndex(TypeDefinitionIndex(7451)) CS Name: ::UnityEngine.UIElements.UIR.Implementation::UIRTextUpdatePainter*
class CORDL_TYPE UIRTextUpdatePainter : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_CurrentElement, offset 0x10, size 0x8
  __declspec(property(get = __get_m_CurrentElement, put = __set_m_CurrentElement))::UnityEngine::UIElements::VisualElement* m_CurrentElement;

  /// @brief Field m_TextEntryIndex, offset 0x18, size 0x4
  __declspec(property(get = __get_m_TextEntryIndex, put = __set_m_TextEntryIndex)) int32_t m_TextEntryIndex;

  /// @brief Field m_DudVerts, offset 0x20, size 0x10
  __declspec(property(get = __get_m_DudVerts, put = __set_m_DudVerts))::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::Vertex> m_DudVerts;

  /// @brief Field m_DudIndices, offset 0x30, size 0x10
  __declspec(property(get = __get_m_DudIndices, put = __set_m_DudIndices))::Unity::Collections::NativeArray_1<uint16_t> m_DudIndices;

  /// @brief Field m_MeshDataVerts, offset 0x40, size 0x10
  __declspec(property(get = __get_m_MeshDataVerts, put = __set_m_MeshDataVerts))::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex> m_MeshDataVerts;

  /// @brief Field m_XFormClipPages, offset 0x50, size 0x4
  __declspec(property(get = __get_m_XFormClipPages, put = __set_m_XFormClipPages))::UnityEngine::Color32 m_XFormClipPages;

  /// @brief Field m_IDs, offset 0x54, size 0x4
  __declspec(property(get = __get_m_IDs, put = __set_m_IDs))::UnityEngine::Color32 m_IDs;

  /// @brief Field m_Flags, offset 0x58, size 0x4
  __declspec(property(get = __get_m_Flags, put = __set_m_Flags))::UnityEngine::Color32 m_Flags;

  /// @brief Field m_OpacityColorPages, offset 0x5c, size 0x4
  __declspec(property(get = __get_m_OpacityColorPages, put = __set_m_OpacityColorPages))::UnityEngine::Color32 m_OpacityColorPages;

  /// @brief Field <meshGenerationContext>k__BackingField, offset 0x60, size 0x8
  __declspec(property(get = __get__meshGenerationContext_k__BackingField,
                      put = __set__meshGenerationContext_k__BackingField))::UnityEngine::UIElements::MeshGenerationContext* _meshGenerationContext_k__BackingField;

  __declspec(property(get = get_meshGenerationContext))::UnityEngine::UIElements::MeshGenerationContext* meshGenerationContext;

  /// @brief Convert operator to "::UnityEngine::UIElements::IStylePainter"
  constexpr operator ::UnityEngine::UIElements::IStylePainter*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr ::UnityEngine::UIElements::VisualElement*& __get_m_CurrentElement();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> const& __get_m_CurrentElement() const;

  constexpr void __set_m_CurrentElement(::UnityEngine::UIElements::VisualElement* value);

  constexpr int32_t& __get_m_TextEntryIndex();

  constexpr int32_t const& __get_m_TextEntryIndex() const;

  constexpr void __set_m_TextEntryIndex(int32_t value);

  constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::Vertex>& __get_m_DudVerts();

  constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::Vertex> const& __get_m_DudVerts() const;

  constexpr void __set_m_DudVerts(::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::Vertex> value);

  constexpr ::Unity::Collections::NativeArray_1<uint16_t>& __get_m_DudIndices();

  constexpr ::Unity::Collections::NativeArray_1<uint16_t> const& __get_m_DudIndices() const;

  constexpr void __set_m_DudIndices(::Unity::Collections::NativeArray_1<uint16_t> value);

  constexpr ::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>& __get_m_MeshDataVerts();

  constexpr ::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex> const& __get_m_MeshDataVerts() const;

  constexpr void __set_m_MeshDataVerts(::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex> value);

  constexpr ::UnityEngine::Color32& __get_m_XFormClipPages();

  constexpr ::UnityEngine::Color32 const& __get_m_XFormClipPages() const;

  constexpr void __set_m_XFormClipPages(::UnityEngine::Color32 value);

  constexpr ::UnityEngine::Color32& __get_m_IDs();

  constexpr ::UnityEngine::Color32 const& __get_m_IDs() const;

  constexpr void __set_m_IDs(::UnityEngine::Color32 value);

  constexpr ::UnityEngine::Color32& __get_m_Flags();

  constexpr ::UnityEngine::Color32 const& __get_m_Flags() const;

  constexpr void __set_m_Flags(::UnityEngine::Color32 value);

  constexpr ::UnityEngine::Color32& __get_m_OpacityColorPages();

  constexpr ::UnityEngine::Color32 const& __get_m_OpacityColorPages() const;

  constexpr void __set_m_OpacityColorPages(::UnityEngine::Color32 value);

  constexpr ::UnityEngine::UIElements::MeshGenerationContext*& __get__meshGenerationContext_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::MeshGenerationContext*> const& __get__meshGenerationContext_k__BackingField() const;

  constexpr void __set__meshGenerationContext_k__BackingField(::UnityEngine::UIElements::MeshGenerationContext* value);

  /// @brief Method get_meshGenerationContext addr 0x2ddf198 size 0x8 virtual false final false
  inline ::UnityEngine::UIElements::MeshGenerationContext* get_meshGenerationContext();

  static inline ::UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter* New_ctor();

  /// @brief Method .ctor addr 0x2ddf1a0 size 0x70 virtual false final false
  inline void _ctor();

  /// @brief Method Begin addr 0x2ddf210 size 0x244 virtual false final false
  inline void Begin(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::UIR::UIRenderDevice* device);

  /// @brief Method End addr 0x2ddf454 size 0x8c virtual false final false
  inline void End();

  /// @brief Method Dispose addr 0x2ddf4e0 size 0xc4 virtual true final true
  inline void Dispose();

  /// @brief Method DrawRectangle addr 0x2ddf5a4 size 0x4 virtual true final true
  inline void DrawRectangle(::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams rectParams);

  /// @brief Method DrawImmediate addr 0x2ddf5a8 size 0x4 virtual true final true
  inline void DrawImmediate(::System::Action* callback, bool cullingEnabled);

  /// @brief Method DrawText addr 0x2ddf5ac size 0x368 virtual true final true
  inline void DrawText(::UnityEngine::UIElements::__MeshGenerationContextUtils__TextParams textParams, ::UnityEngine::UIElements::ITextHandle* handle, float_t pixelsPerPoint);

  // Ctor Parameters [CppParam { name: "", ty: "UIRTextUpdatePainter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UIRTextUpdatePainter(UIRTextUpdatePainter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UIRTextUpdatePainter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UIRTextUpdatePainter(UIRTextUpdatePainter const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UIRTextUpdatePainter();

public:
  /// @brief Field m_CurrentElement, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ___m_CurrentElement;

  /// @brief Field m_TextEntryIndex, offset: 0x18, size: 0x4, def value: None
  int32_t ___m_TextEntryIndex;

  /// @brief Field m_DudVerts, offset: 0x20, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::Vertex> ___m_DudVerts;

  /// @brief Field m_DudIndices, offset: 0x30, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<uint16_t> ___m_DudIndices;

  /// @brief Field m_MeshDataVerts, offset: 0x40, size: 0x10, def value: None
  ::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex> ___m_MeshDataVerts;

  /// @brief Field m_XFormClipPages, offset: 0x50, size: 0x4, def value: None
  ::UnityEngine::Color32 ___m_XFormClipPages;

  /// @brief Field m_IDs, offset: 0x54, size: 0x4, def value: None
  ::UnityEngine::Color32 ___m_IDs;

  /// @brief Field m_Flags, offset: 0x58, size: 0x4, def value: None
  ::UnityEngine::Color32 ___m_Flags;

  /// @brief Field m_OpacityColorPages, offset: 0x5c, size: 0x4, def value: None
  ::UnityEngine::Color32 ___m_OpacityColorPages;

  /// @brief Field <meshGenerationContext>k__BackingField, offset: 0x60, size: 0x8, def value: None
  ::UnityEngine::UIElements::MeshGenerationContext* ____meshGenerationContext_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter, 0x68>, "Size mismatch!");

} // namespace UnityEngine::UIElements::UIR::Implementation
NEED_NO_BOX(::UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter*, "UnityEngine.UIElements.UIR.Implementation", "UIRTextUpdatePainter");
