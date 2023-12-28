#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
// Type: UnityEngine.ProBuilder::Normals
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12146))
// CS Name: ::UnityEngine.ProBuilder::Normals*
class CORDL_TYPE Normals : public ::System::Object {
public:
  // Declarations
  /// @brief Field s_SmoothAvg, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_SmoothAvg, put = setStaticF_s_SmoothAvg))::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> s_SmoothAvg;

  /// @brief Field s_SmoothAvgCount, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_SmoothAvgCount, put = setStaticF_s_SmoothAvgCount))::ArrayW<float_t, ::Array<float_t>*> s_SmoothAvgCount;

  /// @brief Field s_CachedIntArray, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_CachedIntArray, put = setStaticF_s_CachedIntArray))::ArrayW<int32_t, ::Array<int32_t>*> s_CachedIntArray;

  static inline void setStaticF_s_SmoothAvg(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value);

  static inline ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> getStaticF_s_SmoothAvg();

  static inline void setStaticF_s_SmoothAvgCount(::ArrayW<float_t, ::Array<float_t>*> value);

  static inline ::ArrayW<float_t, ::Array<float_t>*> getStaticF_s_SmoothAvgCount();

  static inline void setStaticF_s_CachedIntArray(::ArrayW<int32_t, ::Array<int32_t>*> value);

  static inline ::ArrayW<int32_t, ::Array<int32_t>*> getStaticF_s_CachedIntArray();

  /// @brief Method ClearIntArray addr 0x2b54ce8 size 0xfc virtual false final false
  static inline void ClearIntArray(int32_t count);

  /// @brief Method CalculateTangents addr 0x2b54de4 size 0x4fc virtual false final false
  static inline void CalculateTangents(::UnityEngine::ProBuilder::ProBuilderMesh* mesh);

  /// @brief Method CalculateHardNormals addr 0x2b552e0 size 0x4c8 virtual false final false
  static inline void CalculateHardNormals(::UnityEngine::ProBuilder::ProBuilderMesh* mesh);

  /// @brief Method CalculateNormals addr 0x2b557a8 size 0x5a8 virtual false final false
  static inline void CalculateNormals(::UnityEngine::ProBuilder::ProBuilderMesh* mesh);

  // Ctor Parameters [CppParam { name: "", ty: "Normals", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Normals(Normals&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Normals", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Normals(Normals const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Normals();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::Normals, 0x10>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder
NEED_NO_BOX(::UnityEngine::ProBuilder::Normals);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Normals*, "UnityEngine.ProBuilder", "Normals");
