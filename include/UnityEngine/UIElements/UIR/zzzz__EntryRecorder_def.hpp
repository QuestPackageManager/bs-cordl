#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/EntryRecorder.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(EntryRecorder)
namespace System {
class Action;
}
namespace Unity::Collections {
template <typename T> struct NativeSlice_1;
}
namespace UnityEngine::UIElements::UIR {
class EntryPool;
}
namespace UnityEngine::UIElements::UIR {
class Entry;
}
namespace UnityEngine::UIElements {
class VectorImage;
}
namespace UnityEngine::UIElements {
struct Vertex;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Texture;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
class EntryRecorder;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::UIR::EntryRecorder);
// Dependencies System.Object
namespace UnityEngine::UIElements::UIR {
// Is value type: false
// CS Name: UnityEngine.UIElements.UIR.EntryRecorder
class CORDL_TYPE EntryRecorder : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_EntryPool, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_EntryPool, put = __cordl_internal_set_m_EntryPool)) ::UnityEngine::UIElements::UIR::EntryPool* m_EntryPool;

  /// @brief Method Append, addr 0x6b116a4, size 0x98, virtual false, abstract: false, final false
  static inline void Append(::UnityEngine::UIElements::UIR::Entry* parentEntry, ::UnityEngine::UIElements::UIR::Entry* entry);

  /// @brief Method AppendMeshEntry, addr 0x6b106e8, size 0x270, virtual false, abstract: false, final false
  static inline void AppendMeshEntry(::UnityEngine::UIElements::UIR::Entry* parentEntry, ::UnityEngine::UIElements::UIR::Entry* entry);

  /// @brief Method BeginStencilMask, addr 0x6b10c48, size 0xb0, virtual false, abstract: false, final false
  inline void BeginStencilMask(::UnityEngine::UIElements::UIR::Entry* parentEntry);

  /// @brief Method BlitAndPopRenderTexture, addr 0x6b11328, size 0xb0, virtual false, abstract: false, final false
  inline void BlitAndPopRenderTexture(::UnityEngine::UIElements::UIR::Entry* parentEntry);

  /// @brief Method CutRenderChain, addr 0x6b11540, size 0xb0, virtual false, abstract: false, final false
  inline void CutRenderChain(::UnityEngine::UIElements::UIR::Entry* parentEntry);

  /// @brief Method DrawChildren, addr 0x6b10b98, size 0xb0, virtual false, abstract: false, final false
  inline void DrawChildren(::UnityEngine::UIElements::UIR::Entry* parentEntry);

  /// @brief Method DrawGradients, addr 0x6b10a68, size 0x6c, virtual false, abstract: false, final false
  inline void DrawGradients(::UnityEngine::UIElements::UIR::Entry* parentEntry, ::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex> vertices,
                            ::Unity::Collections::NativeSlice_1<uint16_t> indices, ::UnityEngine::UIElements::VectorImage* gradientsOwner);

  /// @brief Method DrawImmediate, addr 0x6b10ad4, size 0xc4, virtual false, abstract: false, final false
  inline void DrawImmediate(::UnityEngine::UIElements::UIR::Entry* parentEntry, ::System::Action* callback, bool cullingEnabled);

  /// @brief Method DrawMesh, addr 0x6b10668, size 0x80, virtual false, abstract: false, final false
  inline void DrawMesh(::UnityEngine::UIElements::UIR::Entry* parentEntry, ::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex> vertices,
                       ::Unity::Collections::NativeSlice_1<uint16_t> indices, ::UnityEngine::Texture* texture, bool skipAtlas);

  /// @brief Method DrawRasterText, addr 0x6b10958, size 0x88, virtual false, abstract: false, final false
  inline void DrawRasterText(::UnityEngine::UIElements::UIR::Entry* parentEntry, ::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex> vertices,
                             ::Unity::Collections::NativeSlice_1<uint16_t> indices, ::UnityEngine::Texture* texture, bool multiChannel);

  /// @brief Method DrawSdfText, addr 0x6b109e0, size 0x88, virtual false, abstract: false, final false
  inline void DrawSdfText(::UnityEngine::UIElements::UIR::Entry* parentEntry, ::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex> vertices,
                          ::Unity::Collections::NativeSlice_1<uint16_t> indices, ::UnityEngine::Texture* texture, float_t scale, float_t sharpness);

  /// @brief Method EndStencilMask, addr 0x6b10cf8, size 0xb0, virtual false, abstract: false, final false
  inline void EndStencilMask(::UnityEngine::UIElements::UIR::Entry* parentEntry);

  /// @brief Method InsertPlaceholder, addr 0x6b115f0, size 0xb4, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::UIR::Entry* InsertPlaceholder(::UnityEngine::UIElements::UIR::Entry* parentEntry);

  static inline ::UnityEngine::UIElements::UIR::EntryRecorder* New_ctor(::UnityEngine::UIElements::UIR::EntryPool* entryPool);

  /// @brief Method PopClippingRect, addr 0x6b10f08, size 0xb0, virtual false, abstract: false, final false
  inline void PopClippingRect(::UnityEngine::UIElements::UIR::Entry* parentEntry);

  /// @brief Method PopDefaultMaterial, addr 0x6b11490, size 0xb0, virtual false, abstract: false, final false
  inline void PopDefaultMaterial(::UnityEngine::UIElements::UIR::Entry* parentEntry);

  /// @brief Method PopGroupMatrix, addr 0x6b111c8, size 0xb0, virtual false, abstract: false, final false
  inline void PopGroupMatrix(::UnityEngine::UIElements::UIR::Entry* parentEntry);

  /// @brief Method PopScissors, addr 0x6b11068, size 0xb0, virtual false, abstract: false, final false
  inline void PopScissors(::UnityEngine::UIElements::UIR::Entry* parentEntry);

  /// @brief Method PopStencilMask, addr 0x6b10da8, size 0xb0, virtual false, abstract: false, final false
  inline void PopStencilMask(::UnityEngine::UIElements::UIR::Entry* parentEntry);

  /// @brief Method PushClippingRect, addr 0x6b10e58, size 0xb0, virtual false, abstract: false, final false
  inline void PushClippingRect(::UnityEngine::UIElements::UIR::Entry* parentEntry);

  /// @brief Method PushDefaultMaterial, addr 0x6b113d8, size 0xb8, virtual false, abstract: false, final false
  inline void PushDefaultMaterial(::UnityEngine::UIElements::UIR::Entry* parentEntry, ::UnityEngine::Material* material);

  /// @brief Method PushGroupMatrix, addr 0x6b11118, size 0xb0, virtual false, abstract: false, final false
  inline void PushGroupMatrix(::UnityEngine::UIElements::UIR::Entry* parentEntry);

  /// @brief Method PushRenderTexture, addr 0x6b11278, size 0xb0, virtual false, abstract: false, final false
  inline void PushRenderTexture(::UnityEngine::UIElements::UIR::Entry* parentEntry);

  /// @brief Method PushScissors, addr 0x6b10fb8, size 0xb0, virtual false, abstract: false, final false
  inline void PushScissors(::UnityEngine::UIElements::UIR::Entry* parentEntry);

  constexpr ::UnityEngine::UIElements::UIR::EntryPool* const& __cordl_internal_get_m_EntryPool() const;

  constexpr ::UnityEngine::UIElements::UIR::EntryPool*& __cordl_internal_get_m_EntryPool();

  constexpr void __cordl_internal_set_m_EntryPool(::UnityEngine::UIElements::UIR::EntryPool* value);

  /// @brief Method .ctor, addr 0x6b105f4, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::UIR::EntryPool* entryPool);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EntryRecorder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EntryRecorder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EntryRecorder(EntryRecorder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EntryRecorder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EntryRecorder(EntryRecorder const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5296 };

  /// @brief Field m_EntryPool, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::EntryPool* ___m_EntryPool;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::UIR::EntryRecorder, ___m_EntryPool) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::EntryRecorder, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UIElements::UIR
NEED_NO_BOX(::UnityEngine::UIElements::UIR::EntryRecorder);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::EntryRecorder*, "UnityEngine.UIElements.UIR", "EntryRecorder");
