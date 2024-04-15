#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(VectorHash)
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
class VectorHash;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::VectorHash);
// Type: UnityEngine.ProBuilder::VectorHash
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder {
// Is value type: false
// CS Name: ::UnityEngine.ProBuilder::VectorHash*
class CORDL_TYPE VectorHash : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetHashCode, addr 0x30afde0, size 0x7c, virtual false, abstract: false, final false
  static inline int32_t GetHashCode(::UnityEngine::Vector2 v);

  /// @brief Method GetHashCode, addr 0x309a70c, size 0xb0, virtual false, abstract: false, final false
  static inline int32_t GetHashCode(::UnityEngine::Vector3 v);

  /// @brief Method GetHashCode, addr 0x30afe5c, size 0xe0, virtual false, abstract: false, final false
  static inline int32_t GetHashCode(::UnityEngine::Vector4 v);

  /// @brief Method HashFloat, addr 0x30afda0, size 0x40, virtual false, abstract: false, final false
  static inline int32_t HashFloat(float_t f);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VectorHash();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VectorHash", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VectorHash(VectorHash&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VectorHash", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VectorHash(VectorHash const&) = delete;

  /// @brief Field FltCompareResolution offset 0xffffffff size 0x4
  static constexpr float_t FltCompareResolution{ 1000.0 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::VectorHash, 0x10>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder
NEED_NO_BOX(::UnityEngine::ProBuilder::VectorHash);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::VectorHash*, "UnityEngine.ProBuilder", "VectorHash");
