#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/Normals.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Normals)
namespace UnityEngine::ProBuilder {
class ProBuilderMesh;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
class Normals;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::Normals);
// Dependencies System.Object
namespace UnityEngine::ProBuilder {
// Is value type: false
// CS Name: UnityEngine.ProBuilder.Normals
class CORDL_TYPE Normals : public ::System::Object {
public:
  // Declarations
  /// @brief Field s_CachedIntArray, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_CachedIntArray, put = setStaticF_s_CachedIntArray)) ::ArrayW<int32_t, ::Array<int32_t>*> s_CachedIntArray;

  /// @brief Field s_SmoothAvg, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_SmoothAvg, put = setStaticF_s_SmoothAvg)) ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> s_SmoothAvg;

  /// @brief Field s_SmoothAvgCount, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_SmoothAvgCount, put = setStaticF_s_SmoothAvgCount)) ::ArrayW<float_t, ::Array<float_t>*> s_SmoothAvgCount;

  /// @brief Method CalculateHardNormals, addr 0x6519934, size 0x4ac, virtual false, abstract: false, final false
  static inline void CalculateHardNormals(::UnityEngine::ProBuilder::ProBuilderMesh* mesh);

  /// @brief Method CalculateNormals, addr 0x6519de0, size 0x58c, virtual false, abstract: false, final false
  static inline void CalculateNormals(::UnityEngine::ProBuilder::ProBuilderMesh* mesh);

  /// @brief Method CalculateTangents, addr 0x65193fc, size 0x538, virtual false, abstract: false, final false
  static inline void CalculateTangents(::UnityEngine::ProBuilder::ProBuilderMesh* mesh);

  /// @brief Method ClearIntArray, addr 0x65192f8, size 0x104, virtual false, abstract: false, final false
  static inline void ClearIntArray(int32_t count);

  static inline ::ArrayW<int32_t, ::Array<int32_t>*> getStaticF_s_CachedIntArray();

  static inline ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> getStaticF_s_SmoothAvg();

  static inline ::ArrayW<float_t, ::Array<float_t>*> getStaticF_s_SmoothAvgCount();

  static inline void setStaticF_s_CachedIntArray(::ArrayW<int32_t, ::Array<int32_t>*> value);

  static inline void setStaticF_s_SmoothAvg(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value);

  static inline void setStaticF_s_SmoothAvgCount(::ArrayW<float_t, ::Array<float_t>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Normals();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Normals", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Normals(Normals&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Normals", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Normals(Normals const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16725 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::Normals, 0x10>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder
NEED_NO_BOX(::UnityEngine::ProBuilder::Normals);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Normals*, "UnityEngine.ProBuilder", "Normals");
