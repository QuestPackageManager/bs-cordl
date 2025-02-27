#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/SelectPathFaces.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SelectPathFaces)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
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
namespace UnityEngine::ProBuilder {
class SelectPathFaces;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::SelectPathFaces);
// Dependencies System.Object
namespace UnityEngine::ProBuilder {
// Is value type: false
// CS Name: UnityEngine.ProBuilder.SelectPathFaces
class CORDL_TYPE SelectPathFaces : public ::System::Object {
public:
  // Declarations
  /// @brief Field s_cachedFacesCount, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_s_cachedFacesCount, put = setStaticF_s_cachedFacesCount)) int32_t s_cachedFacesCount;

  /// @brief Field s_cachedFacesIndex, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_cachedFacesIndex,
                      put = setStaticF_s_cachedFacesIndex)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::Face*, int32_t>* s_cachedFacesIndex;

  /// @brief Field s_cachedMesh, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_cachedMesh, put = setStaticF_s_cachedMesh)) ::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh> s_cachedMesh;

  /// @brief Field s_cachedPredecessors, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_cachedPredecessors, put = setStaticF_s_cachedPredecessors)) ::ArrayW<int32_t, ::Array<int32_t>*> s_cachedPredecessors;

  /// @brief Field s_cachedStart, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_s_cachedStart, put = setStaticF_s_cachedStart)) int32_t s_cachedStart;

  /// @brief Field s_cachedWings, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_cachedWings, put = setStaticF_s_cachedWings)) ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>* s_cachedWings;

  /// @brief Method Dijkstra, addr 0x4740060, size 0x700, virtual false, abstract: false, final false
  static inline ::ArrayW<int32_t, ::Array<int32_t>*> Dijkstra(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, int32_t start);

  /// @brief Method GetMinimalPath, addr 0x473ff44, size 0x11c, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<int32_t>* GetMinimalPath(::ArrayW<int32_t, ::Array<int32_t>*> predecessors, int32_t start, int32_t end);

  /// @brief Method GetPath, addr 0x473fca0, size 0x2a4, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<int32_t>* GetPath(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, int32_t start, int32_t end);

  /// @brief Method GetWeight, addr 0x4740760, size 0x414, virtual false, abstract: false, final false
  static inline float_t GetWeight(int32_t face1, int32_t face2, ::UnityEngine::ProBuilder::ProBuilderMesh* mesh);

  static inline int32_t getStaticF_s_cachedFacesCount();

  static inline ::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::Face*, int32_t>* getStaticF_s_cachedFacesIndex();

  static inline ::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh> getStaticF_s_cachedMesh();

  static inline ::ArrayW<int32_t, ::Array<int32_t>*> getStaticF_s_cachedPredecessors();

  static inline int32_t getStaticF_s_cachedStart();

  static inline ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>* getStaticF_s_cachedWings();

  static inline void setStaticF_s_cachedFacesCount(int32_t value);

  static inline void setStaticF_s_cachedFacesIndex(::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::Face*, int32_t>* value);

  static inline void setStaticF_s_cachedMesh(::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh> value);

  static inline void setStaticF_s_cachedPredecessors(::ArrayW<int32_t, ::Array<int32_t>*> value);

  static inline void setStaticF_s_cachedStart(int32_t value);

  static inline void setStaticF_s_cachedWings(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SelectPathFaces();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SelectPathFaces", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SelectPathFaces(SelectPathFaces&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SelectPathFaces", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SelectPathFaces(SelectPathFaces const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14311 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::SelectPathFaces, 0x10>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder
NEED_NO_BOX(::UnityEngine::ProBuilder::SelectPathFaces);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::SelectPathFaces*, "UnityEngine.ProBuilder", "SelectPathFaces");
