#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BoneWeight1)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine {
struct BoneWeight1;
}
// Write type traits
MARK_VAL_T(::UnityEngine::BoneWeight1);
// Type: UnityEngine::BoneWeight1
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// CS Name: ::UnityEngine::BoneWeight1
struct CORDL_TYPE BoneWeight1 {
public:
  // Declarations
  __declspec(property(get = get_boneIndex)) int32_t boneIndex;

  __declspec(property(get = get_weight)) float_t weight;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::BoneWeight1>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::BoneWeight1>*();

  /// @brief Method Equals, addr 0x31f5080, size 0x78, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* other);

  /// @brief Method Equals, addr 0x31f50f8, size 0x5c, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::BoneWeight1 other);

  /// @brief Method GetHashCode, addr 0x31f5154, size 0x48, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method get_boneIndex, addr 0x31f5078, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_boneIndex();

  /// @brief Method get_weight, addr 0x31f5070, size 0x8, virtual false, abstract: false, final false
  inline float_t get_weight();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::BoneWeight1>"
  constexpr ::System::IEquatable_1<::UnityEngine::BoneWeight1>* i___System__IEquatable_1___UnityEngine__BoneWeight1_();

  // Ctor Parameters []
  // @brief default ctor
  constexpr BoneWeight1();

  // Ctor Parameters [CppParam { name: "m_Weight", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_BoneIndex", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr BoneWeight1(float_t m_Weight, int32_t m_BoneIndex) noexcept;

  /// @brief Field m_Weight, offset: 0x0, size: 0x4, def value: None
  float_t m_Weight;

  /// @brief Field m_BoneIndex, offset: 0x4, size: 0x4, def value: None
  int32_t m_BoneIndex;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::BoneWeight1, 0x8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::BoneWeight1, m_Weight) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::BoneWeight1, m_BoneIndex) == 0x4, "Offset mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::BoneWeight1, "UnityEngine", "BoneWeight1");
