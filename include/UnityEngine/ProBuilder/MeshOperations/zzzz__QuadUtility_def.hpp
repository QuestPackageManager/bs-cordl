#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/MeshOperations/QuadUtility.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(QuadUtility)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::ProBuilder {
struct EdgeLookup;
}
namespace UnityEngine::ProBuilder {
class Face;
}
namespace UnityEngine::ProBuilder {
class ProBuilderMesh;
}
namespace UnityEngine::ProBuilder {
class WingedEdge;
}
// Forward declare root types
namespace UnityEngine::ProBuilder::MeshOperations {
class QuadUtility;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::MeshOperations::QuadUtility);
// Dependencies System.Object
namespace UnityEngine::ProBuilder::MeshOperations {
// Is value type: false
// CS Name: UnityEngine.ProBuilder.MeshOperations.QuadUtility
class CORDL_TYPE QuadUtility : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetBestQuadConnection, addr 0x6581f2c, size 0x238, virtual false, abstract: false, final false
  static inline ::UnityEngine::ProBuilder::Face* GetBestQuadConnection(::UnityEngine::ProBuilder::WingedEdge* wing,
                                                                       ::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::EdgeLookup, float_t>* connections);

  /// @brief Method GetQuadScore, addr 0x6581898, size 0x694, virtual false, abstract: false, final false
  static inline float_t GetQuadScore(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::ProBuilder::WingedEdge* left, ::UnityEngine::ProBuilder::WingedEdge* right,
                                     float_t normalThreshold);

  /// @brief Method ToQuads, addr 0x657db74, size 0x800, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>* ToQuads(::UnityEngine::ProBuilder::ProBuilderMesh* mesh,
                                                                                                  ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Face*>* faces, bool smoothing);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr QuadUtility();

public:
  // Ctor Parameters [CppParam { name: "", ty: "QuadUtility", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  QuadUtility(QuadUtility&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "QuadUtility", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  QuadUtility(QuadUtility const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16858 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::MeshOperations::QuadUtility, 0x10>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder::MeshOperations
NEED_NO_BOX(::UnityEngine::ProBuilder::MeshOperations::QuadUtility);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::MeshOperations::QuadUtility*, "UnityEngine.ProBuilder.MeshOperations", "QuadUtility");
