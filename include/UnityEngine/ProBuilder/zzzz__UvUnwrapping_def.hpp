#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/UvUnwrapping.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UvUnwrapping)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace UnityEngine::ProBuilder {
struct AutoUnwrapSettings;
}
namespace UnityEngine::ProBuilder {
class Bounds2D;
}
namespace UnityEngine::ProBuilder {
class Face;
}
namespace UnityEngine::ProBuilder {
class ProBuilderMesh;
}
namespace UnityEngine::ProBuilder {
struct __AutoUnwrapSettings__Anchor;
}
namespace UnityEngine::ProBuilder {
struct __UvUnwrapping__UVTransform;
}
namespace UnityEngine::ProBuilder {
class __UvUnwrapping____c;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
class UvUnwrapping;
}
namespace UnityEngine::ProBuilder {
class __UvUnwrapping____c;
}
namespace UnityEngine::ProBuilder {
struct __UvUnwrapping__UVTransform;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::UvUnwrapping);
MARK_REF_PTR_T(::UnityEngine::ProBuilder::__UvUnwrapping____c);
MARK_VAL_T(::UnityEngine::ProBuilder::__UvUnwrapping__UVTransform);
// Type: ::UVTransform
// SizeInfo { instance_size: 20, native_size: 20, calculated_instance_size: 20, calculated_native_size: 36, minimum_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder {
// Is value type: true
// CS Name: ::UvUnwrapping::UVTransform
struct CORDL_TYPE __UvUnwrapping__UVTransform {
public:
  // Declarations
  /// @brief Method ToString, addr 0x46e31dc, size 0x114, virtual true, abstract: false, final false
  inline ::StringW ToString();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __UvUnwrapping__UVTransform();

  // Ctor Parameters [CppParam { name: "translation", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "rotation", ty: "float_t", modifiers: "", def_value: None },
  // CppParam { name: "scale", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }]
  constexpr __UvUnwrapping__UVTransform(::UnityEngine::Vector2 translation, float_t rotation, ::UnityEngine::Vector2 scale) noexcept;

  /// @brief Field translation, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::Vector2 translation;

  /// @brief Field rotation, offset: 0x8, size: 0x4, def value: None
  float_t rotation;

  /// @brief Field scale, offset: 0xc, size: 0x8, def value: None
  ::UnityEngine::Vector2 scale;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14291 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x14 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::__UvUnwrapping__UVTransform, 0x14>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::__UvUnwrapping__UVTransform, translation) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::__UvUnwrapping__UVTransform, rotation) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::__UvUnwrapping__UVTransform, scale) == 0xc, "Offset mismatch!");

} // namespace UnityEngine::ProBuilder
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder {
// Is value type: false
// CS Name: ::UvUnwrapping::<>c*
class CORDL_TYPE __UvUnwrapping____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::ProBuilder::__UvUnwrapping____c* __9;

  /// @brief Field <>9__0_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__0_0, put = setStaticF___9__0_0)) ::System::Func_2<::UnityEngine::ProBuilder::Face*, bool>* __9__0_0;

  static inline ::UnityEngine::ProBuilder::__UvUnwrapping____c* New_ctor();

  /// @brief Method <SetAutoUV>b__0_0, addr 0x46e3354, size 0x18, virtual false, abstract: false, final false
  inline bool _SetAutoUV_b__0_0(::UnityEngine::ProBuilder::Face* x);

  /// @brief Method .ctor, addr 0x46e334c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::ProBuilder::__UvUnwrapping____c* getStaticF___9();

  static inline ::System::Func_2<::UnityEngine::ProBuilder::Face*, bool>* getStaticF___9__0_0();

  static inline void setStaticF___9(::UnityEngine::ProBuilder::__UvUnwrapping____c* value);

  static inline void setStaticF___9__0_0(::System::Func_2<::UnityEngine::ProBuilder::Face*, bool>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __UvUnwrapping____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__UvUnwrapping____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __UvUnwrapping____c(__UvUnwrapping____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__UvUnwrapping____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __UvUnwrapping____c(__UvUnwrapping____c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14292 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::__UvUnwrapping____c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder
// Type: UnityEngine.ProBuilder::UvUnwrapping
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder {
// Is value type: false
// CS Name: ::UnityEngine.ProBuilder::UvUnwrapping*
class CORDL_TYPE UvUnwrapping : public ::System::Object {
public:
  // Declarations
  using UVTransform = ::UnityEngine::ProBuilder::__UvUnwrapping__UVTransform;

  using __c = ::UnityEngine::ProBuilder::__UvUnwrapping____c;

  /// @brief Field s_IndexBuffer, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_IndexBuffer, put = setStaticF_s_IndexBuffer)) ::System::Collections::Generic::List_1<int32_t>* s_IndexBuffer;

  /// @brief Field s_TempVector2, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_TempVector2, put = setStaticF_s_TempVector2)) ::UnityEngine::Vector2 s_TempVector2;

  /// @brief Field s_UVTransformProjectionBuffer, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_UVTransformProjectionBuffer,
                             put = setStaticF_s_UVTransformProjectionBuffer)) ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* s_UVTransformProjectionBuffer;

  /// @brief Method ApplyUVAnchor, addr 0x46e2c1c, size 0x380, virtual false, abstract: false, final false
  static inline void ApplyUVAnchor(::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> uvs, ::System::Collections::Generic::IList_1<int32_t>* indexes,
                                   ::UnityEngine::ProBuilder::__AutoUnwrapSettings__Anchor anchor);

  /// @brief Method ApplyUVSettings, addr 0x46e1f7c, size 0x8f0, virtual false, abstract: false, final false
  static inline void ApplyUVSettings(::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> uvs, ::System::Collections::Generic::IList_1<int32_t>* indexes,
                                     ::UnityEngine::ProBuilder::AutoUnwrapSettings uvSettings);

  /// @brief Method CalculateDelta, addr 0x46e1580, size 0x444, virtual false, abstract: false, final false
  static inline ::UnityEngine::ProBuilder::__UvUnwrapping__UVTransform CalculateDelta(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>* src,
                                                                                      ::System::Collections::Generic::IList_1<int32_t>* srcIndices,
                                                                                      ::System::Collections::Generic::IList_1<::UnityEngine::Vector2>* dst,
                                                                                      ::System::Collections::Generic::IList_1<int32_t>* dstIndices);

  /// @brief Method CopyUVs, addr 0x46d9acc, size 0xbc, virtual false, abstract: false, final false
  static inline void CopyUVs(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::ProBuilder::Face* source, ::UnityEngine::ProBuilder::Face* dest);

  /// @brief Method GetAutoUnwrapSettings, addr 0x46e19c4, size 0x104, virtual false, abstract: false, final false
  static inline ::UnityEngine::ProBuilder::AutoUnwrapSettings GetAutoUnwrapSettings(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::ProBuilder::Face* face);

  /// @brief Method GetIndex, addr 0x46e1bd0, size 0xb0, virtual false, abstract: false, final false
  static inline int32_t GetIndex(::System::Collections::Generic::IList_1<int32_t>* collection, int32_t index);

  /// @brief Method GetRotatedSize, addr 0x46e1c80, size 0x2fc, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 GetRotatedSize(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>* points, ::System::Collections::Generic::IList_1<int32_t>* indices,
                                                      ::UnityEngine::Vector2 center, float_t rotation);

  /// @brief Method GetUVTransform, addr 0x46e1ac8, size 0x108, virtual false, abstract: false, final false
  static inline ::UnityEngine::ProBuilder::__UvUnwrapping__UVTransform GetUVTransform(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::ProBuilder::Face* face);

  /// @brief Method ProjectTextureGroup, addr 0x46e286c, size 0x194, virtual false, abstract: false, final false
  static inline void ProjectTextureGroup(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, int32_t group, ::UnityEngine::ProBuilder::AutoUnwrapSettings unwrapSettings);

  /// @brief Method ScaleUVs, addr 0x46e2a00, size 0x21c, virtual false, abstract: false, final false
  static inline void ScaleUVs(::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> uvs, ::System::Collections::Generic::IList_1<int32_t>* indexes, ::UnityEngine::Vector2 scale,
                              ::UnityEngine::ProBuilder::Bounds2D* bounds);

  /// @brief Method SetAutoAndAlignUnwrapParamsToUVs, addr 0x46e1394, size 0x1ec, virtual false, abstract: false, final false
  static inline void SetAutoAndAlignUnwrapParamsToUVs(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* facesToConvert);

  /// @brief Method SetAutoUV, addr 0x46e1204, size 0x190, virtual false, abstract: false, final false
  static inline void SetAutoUV(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::ArrayW<::UnityEngine::ProBuilder::Face*, ::Array<::UnityEngine::ProBuilder::Face*>*> faces, bool _cordl_auto);

  /// @brief Method Unwrap, addr 0x46d998c, size 0x140, virtual false, abstract: false, final false
  static inline void Unwrap(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::ProBuilder::Face* face, ::UnityEngine::Vector3 projection);

  /// @brief Method UpgradeAutoUVScaleOffset, addr 0x46e2f9c, size 0x124, virtual false, abstract: false, final false
  static inline void UpgradeAutoUVScaleOffset(::UnityEngine::ProBuilder::ProBuilderMesh* mesh);

  static inline ::System::Collections::Generic::List_1<int32_t>* getStaticF_s_IndexBuffer();

  static inline ::UnityEngine::Vector2 getStaticF_s_TempVector2();

  static inline ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* getStaticF_s_UVTransformProjectionBuffer();

  static inline void setStaticF_s_IndexBuffer(::System::Collections::Generic::List_1<int32_t>* value);

  static inline void setStaticF_s_TempVector2(::UnityEngine::Vector2 value);

  static inline void setStaticF_s_UVTransformProjectionBuffer(::System::Collections::Generic::List_1<::UnityEngine::Vector2>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UvUnwrapping();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UvUnwrapping", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UvUnwrapping(UvUnwrapping&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UvUnwrapping", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UvUnwrapping(UvUnwrapping const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14293 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::UvUnwrapping, 0x10>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder
NEED_NO_BOX(::UnityEngine::ProBuilder::UvUnwrapping);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::UvUnwrapping*, "UnityEngine.ProBuilder", "UvUnwrapping");
NEED_NO_BOX(::UnityEngine::ProBuilder::__UvUnwrapping____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::__UvUnwrapping____c*, "UnityEngine.ProBuilder", "UvUnwrapping/<>c");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::__UvUnwrapping__UVTransform, "UnityEngine.ProBuilder", "UvUnwrapping/UVTransform");
