#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/VertexPositioning.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(VertexPositioning)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::ProBuilder {
struct Edge;
}
namespace UnityEngine::ProBuilder {
class Face;
}
namespace UnityEngine::ProBuilder {
class ProBuilderMesh;
}
namespace UnityEngine::ProBuilder {
class Vertex;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
class VertexPositioning;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::VertexPositioning);
// Dependencies System.Object
namespace UnityEngine::ProBuilder {
// Is value type: false
// CS Name: UnityEngine.ProBuilder.VertexPositioning
class CORDL_TYPE VertexPositioning : public ::System::Object {
public:
  // Declarations
  /// @brief Field s_CoincidentVertices, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_CoincidentVertices, put = setStaticF_s_CoincidentVertices)) ::System::Collections::Generic::List_1<int32_t>* s_CoincidentVertices;

  /// @brief Method SetSharedVertexPosition, addr 0x4757c84, size 0x3a4, virtual false, abstract: false, final false
  static inline void SetSharedVertexPosition(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, int32_t sharedVertexHandle, ::UnityEngine::Vector3 position);

  /// @brief Method SetSharedVertexValues, addr 0x4758028, size 0x2d0, virtual false, abstract: false, final false
  static inline void SetSharedVertexValues(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, int32_t sharedVertexHandle, ::UnityEngine::ProBuilder::Vertex* vertex);

  /// @brief Method TranslateVertices, addr 0x4757a2c, size 0x12c, virtual false, abstract: false, final false
  static inline void TranslateVertices(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>* edges,
                                       ::UnityEngine::Vector3 offset);

  /// @brief Method TranslateVertices, addr 0x4757b58, size 0x12c, virtual false, abstract: false, final false
  static inline void TranslateVertices(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* faces,
                                       ::UnityEngine::Vector3 offset);

  /// @brief Method TranslateVertices, addr 0x47577a0, size 0x12c, virtual false, abstract: false, final false
  static inline void TranslateVertices(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::IEnumerable_1<int32_t>* indexes, ::UnityEngine::Vector3 offset);

  /// @brief Method TranslateVerticesInWorldSpace, addr 0x47571dc, size 0x114, virtual false, abstract: false, final false
  static inline void TranslateVerticesInWorldSpace(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::ArrayW<int32_t, ::Array<int32_t>*> indexes, ::UnityEngine::Vector3 offset);

  /// @brief Method TranslateVerticesInWorldSpace, addr 0x47572f0, size 0x4b0, virtual false, abstract: false, final false
  static inline void TranslateVerticesInWorldSpace(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::ArrayW<int32_t, ::Array<int32_t>*> indexes, ::UnityEngine::Vector3 offset, float_t snapValue,
                                                   bool snapAxisOnly);

  /// @brief Method TranslateVerticesInternal, addr 0x47578cc, size 0x160, virtual false, abstract: false, final false
  static inline void TranslateVerticesInternal(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::IEnumerable_1<int32_t>* indices, ::UnityEngine::Vector3 offset);

  /// @brief Method VerticesInWorldSpace, addr 0x4757064, size 0x178, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> VerticesInWorldSpace(::UnityEngine::ProBuilder::ProBuilderMesh* mesh);

  static inline ::System::Collections::Generic::List_1<int32_t>* getStaticF_s_CoincidentVertices();

  static inline void setStaticF_s_CoincidentVertices(::System::Collections::Generic::List_1<int32_t>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VertexPositioning();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VertexPositioning", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VertexPositioning(VertexPositioning&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VertexPositioning", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VertexPositioning(VertexPositioning const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14337 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::VertexPositioning, 0x10>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder
NEED_NO_BOX(::UnityEngine::ProBuilder::VertexPositioning);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::VertexPositioning*, "UnityEngine.ProBuilder", "VertexPositioning");
