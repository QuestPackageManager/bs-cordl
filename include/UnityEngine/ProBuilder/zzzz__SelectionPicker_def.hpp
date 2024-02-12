#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SelectionPicker)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace UnityEngine::ProBuilder {
struct Edge;
}
namespace UnityEngine::ProBuilder {
class Face;
}
namespace UnityEngine::ProBuilder {
struct PickerOptions;
}
namespace UnityEngine::ProBuilder {
class ProBuilderMesh;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
class SelectionPicker;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::SelectionPicker);
// Type: UnityEngine.ProBuilder::SelectionPicker
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12081))
// CS Name: ::UnityEngine.ProBuilder::SelectionPicker*
class CORDL_TYPE SelectionPicker : public ::System::Object {
public:
  // Declarations
  /// @brief Method PickVerticesInRect, addr 0x2b625b4, size 0x63c, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>, ::System::Collections::Generic::HashSet_1<int32_t>*>*
  PickVerticesInRect(::UnityEngine::Camera* cam, ::UnityEngine::Rect rect, ::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>* selectable,
                     ::UnityEngine::ProBuilder::PickerOptions options, float_t pixelsPerPoint);

  /// @brief Method PickFacesInRect, addr 0x2b635a8, size 0xf44, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>, ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>*>*
  PickFacesInRect(::UnityEngine::Camera* cam, ::UnityEngine::Rect rect, ::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>* selectable,
                  ::UnityEngine::ProBuilder::PickerOptions options, float_t pixelsPerPoint);

  /// @brief Method PickEdgesInRect, addr 0x2b64ad0, size 0x848, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>, ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Edge>*>*
  PickEdgesInRect(::UnityEngine::Camera* cam, ::UnityEngine::Rect rect, ::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>* selectable,
                  ::UnityEngine::ProBuilder::PickerOptions options, float_t pixelsPerPoint);

  /// @brief Method PickFace, addr 0x2b65ab8, size 0xa0, virtual false, abstract: false, final false
  static inline ::UnityEngine::ProBuilder::Face* PickFace(::UnityEngine::Camera* camera, ::UnityEngine::Vector3 mousePosition, ::UnityEngine::ProBuilder::ProBuilderMesh* pickable);

  // Ctor Parameters [CppParam { name: "", ty: "SelectionPicker", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SelectionPicker(SelectionPicker&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SelectionPicker", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SelectionPicker(SelectionPicker const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SelectionPicker();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::SelectionPicker, 0x10>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder
NEED_NO_BOX(::UnityEngine::ProBuilder::SelectionPicker);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::SelectionPicker*, "UnityEngine.ProBuilder", "SelectionPicker");
