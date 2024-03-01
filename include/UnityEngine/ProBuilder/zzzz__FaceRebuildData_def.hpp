#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FaceRebuildData)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
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
class Vertex;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
class FaceRebuildData;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::FaceRebuildData);
// Type: UnityEngine.ProBuilder::FaceRebuildData
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 52, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder {
// Is value type: false
// CS Name: ::UnityEngine.ProBuilder::FaceRebuildData*
class CORDL_TYPE FaceRebuildData : public ::System::Object {
public:
  // Declarations
  /// @brief Field _appliedOffset, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__appliedOffset, put = __cordl_internal_set__appliedOffset)) int32_t _appliedOffset;

  /// @brief Field face, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_face, put = __cordl_internal_set_face))::UnityEngine::ProBuilder::Face* face;

  /// @brief Field sharedIndexes, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_sharedIndexes, put = __cordl_internal_set_sharedIndexes))::System::Collections::Generic::List_1<int32_t>* sharedIndexes;

  /// @brief Field sharedIndexesUV, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_sharedIndexesUV, put = __cordl_internal_set_sharedIndexesUV))::System::Collections::Generic::List_1<int32_t>* sharedIndexesUV;

  /// @brief Field vertices, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_vertices, put = __cordl_internal_set_vertices))::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>* vertices;

  /// @brief Method Apply, addr 0x2c27970, size 0x184, virtual false, abstract: false, final false
  static inline void Apply(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::FaceRebuildData*>* newFaces, ::UnityEngine::ProBuilder::ProBuilderMesh* mesh,
                           ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>* vertices, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>* faces);

  /// @brief Method Apply, addr 0x2c27af4, size 0x590, virtual false, abstract: false, final false
  static inline void Apply(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::FaceRebuildData*>* newFaces,
                           ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>* vertices, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>* faces,
                           ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* sharedVertexLookup, ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* sharedTextureLookup);

  static inline ::UnityEngine::ProBuilder::FaceRebuildData* New_ctor();

  /// @brief Method Offset, addr 0x2c278a0, size 0x8, virtual false, abstract: false, final false
  inline int32_t Offset();

  /// @brief Method ToString, addr 0x2c278a8, size 0xc8, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr int32_t const& __cordl_internal_get__appliedOffset() const;

  constexpr int32_t& __cordl_internal_get__appliedOffset();

  constexpr ::UnityEngine::ProBuilder::Face*& __cordl_internal_get_face();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ProBuilder::Face*> const& __cordl_internal_get_face() const;

  constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_sharedIndexes();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<int32_t>*> const& __cordl_internal_get_sharedIndexes() const;

  constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_sharedIndexesUV();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<int32_t>*> const& __cordl_internal_get_sharedIndexesUV() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*& __cordl_internal_get_vertices();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*> const& __cordl_internal_get_vertices() const;

  constexpr void __cordl_internal_set__appliedOffset(int32_t value);

  constexpr void __cordl_internal_set_face(::UnityEngine::ProBuilder::Face* value);

  constexpr void __cordl_internal_set_sharedIndexes(::System::Collections::Generic::List_1<int32_t>* value);

  constexpr void __cordl_internal_set_sharedIndexesUV(::System::Collections::Generic::List_1<int32_t>* value);

  constexpr void __cordl_internal_set_vertices(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>* value);

  /// @brief Method .ctor, addr 0x2c28084, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FaceRebuildData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FaceRebuildData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FaceRebuildData(FaceRebuildData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FaceRebuildData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FaceRebuildData(FaceRebuildData const&) = delete;

  /// @brief Field face, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::ProBuilder::Face* ___face;

  /// @brief Field vertices, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>* ___vertices;

  /// @brief Field sharedIndexes, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<int32_t>* ___sharedIndexes;

  /// @brief Field sharedIndexesUV, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<int32_t>* ___sharedIndexesUV;

  /// @brief Field _appliedOffset, offset: 0x30, size: 0x4, def value: None
  int32_t ____appliedOffset;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::FaceRebuildData, 0x38>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::FaceRebuildData, ___face) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::FaceRebuildData, ___vertices) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::FaceRebuildData, ___sharedIndexes) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::FaceRebuildData, ___sharedIndexesUV) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::FaceRebuildData, ____appliedOffset) == 0x30, "Offset mismatch!");

} // namespace UnityEngine::ProBuilder
NEED_NO_BOX(::UnityEngine::ProBuilder::FaceRebuildData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::FaceRebuildData*, "UnityEngine.ProBuilder", "FaceRebuildData");
