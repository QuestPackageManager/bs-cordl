#pragma once
// IWYU pragma private; include "UnityEngine/BoneWeight.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IEquatable_1_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BoneWeight)
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine {
struct BoneWeight;
}
// Write type traits
MARK_VAL_T(::UnityEngine::BoneWeight);
// Dependencies System.IEquatable`1<T>
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.BoneWeight
struct CORDL_TYPE BoneWeight {
public:
  // Declarations
  __declspec(property(get = get_boneIndex0, put = set_boneIndex0)) int32_t boneIndex0;

  __declspec(property(get = get_boneIndex1, put = set_boneIndex1)) int32_t boneIndex1;

  __declspec(property(get = get_boneIndex2, put = set_boneIndex2)) int32_t boneIndex2;

  __declspec(property(get = get_boneIndex3, put = set_boneIndex3)) int32_t boneIndex3;

  __declspec(property(get = get_weight0, put = set_weight0)) float_t weight0;

  __declspec(property(get = get_weight1, put = set_weight1)) float_t weight1;

  __declspec(property(get = get_weight2, put = set_weight2)) float_t weight2;

  __declspec(property(get = get_weight3, put = set_weight3)) float_t weight3;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::BoneWeight>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::BoneWeight>*();

  /// @brief Method Equals, addr 0x4890cf8, size 0x88, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* other);

  /// @brief Method Equals, addr 0x4890d80, size 0xd8, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::BoneWeight other);

  /// @brief Method GetHashCode, addr 0x4890bf0, size 0x108, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method get_boneIndex0, addr 0x4890bb0, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_boneIndex0();

  /// @brief Method get_boneIndex1, addr 0x4890bc0, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_boneIndex1();

  /// @brief Method get_boneIndex2, addr 0x4890bd0, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_boneIndex2();

  /// @brief Method get_boneIndex3, addr 0x4890be0, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_boneIndex3();

  /// @brief Method get_weight0, addr 0x4890b70, size 0x8, virtual false, abstract: false, final false
  inline float_t get_weight0();

  /// @brief Method get_weight1, addr 0x4890b80, size 0x8, virtual false, abstract: false, final false
  inline float_t get_weight1();

  /// @brief Method get_weight2, addr 0x4890b90, size 0x8, virtual false, abstract: false, final false
  inline float_t get_weight2();

  /// @brief Method get_weight3, addr 0x4890ba0, size 0x8, virtual false, abstract: false, final false
  inline float_t get_weight3();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::BoneWeight>"
  constexpr ::System::IEquatable_1<::UnityEngine::BoneWeight>* i___System__IEquatable_1___UnityEngine__BoneWeight_();

  /// @brief Method set_boneIndex0, addr 0x4890bb8, size 0x8, virtual false, abstract: false, final false
  inline void set_boneIndex0(int32_t value);

  /// @brief Method set_boneIndex1, addr 0x4890bc8, size 0x8, virtual false, abstract: false, final false
  inline void set_boneIndex1(int32_t value);

  /// @brief Method set_boneIndex2, addr 0x4890bd8, size 0x8, virtual false, abstract: false, final false
  inline void set_boneIndex2(int32_t value);

  /// @brief Method set_boneIndex3, addr 0x4890be8, size 0x8, virtual false, abstract: false, final false
  inline void set_boneIndex3(int32_t value);

  /// @brief Method set_weight0, addr 0x4890b78, size 0x8, virtual false, abstract: false, final false
  inline void set_weight0(float_t value);

  /// @brief Method set_weight1, addr 0x4890b88, size 0x8, virtual false, abstract: false, final false
  inline void set_weight1(float_t value);

  /// @brief Method set_weight2, addr 0x4890b98, size 0x8, virtual false, abstract: false, final false
  inline void set_weight2(float_t value);

  /// @brief Method set_weight3, addr 0x4890ba8, size 0x8, virtual false, abstract: false, final false
  inline void set_weight3(float_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr BoneWeight();

  // Ctor Parameters [CppParam { name: "m_Weight0", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_Weight1", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "m_Weight2", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_Weight3", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_BoneIndex0", ty: "int32_t",
  // modifiers: "", def_value: None }, CppParam { name: "m_BoneIndex1", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_BoneIndex2", ty: "int32_t", modifiers: "", def_value: None
  // }, CppParam { name: "m_BoneIndex3", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr BoneWeight(float_t m_Weight0, float_t m_Weight1, float_t m_Weight2, float_t m_Weight3, int32_t m_BoneIndex0, int32_t m_BoneIndex1, int32_t m_BoneIndex2, int32_t m_BoneIndex3) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10788 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field m_Weight0, offset: 0x0, size: 0x4, def value: None
  float_t m_Weight0;

  /// @brief Field m_Weight1, offset: 0x4, size: 0x4, def value: None
  float_t m_Weight1;

  /// @brief Field m_Weight2, offset: 0x8, size: 0x4, def value: None
  float_t m_Weight2;

  /// @brief Field m_Weight3, offset: 0xc, size: 0x4, def value: None
  float_t m_Weight3;

  /// @brief Field m_BoneIndex0, offset: 0x10, size: 0x4, def value: None
  int32_t m_BoneIndex0;

  /// @brief Field m_BoneIndex1, offset: 0x14, size: 0x4, def value: None
  int32_t m_BoneIndex1;

  /// @brief Field m_BoneIndex2, offset: 0x18, size: 0x4, def value: None
  int32_t m_BoneIndex2;

  /// @brief Field m_BoneIndex3, offset: 0x1c, size: 0x4, def value: None
  int32_t m_BoneIndex3;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::BoneWeight, m_Weight0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::BoneWeight, m_Weight1) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::BoneWeight, m_Weight2) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::BoneWeight, m_Weight3) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::BoneWeight, m_BoneIndex0) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::BoneWeight, m_BoneIndex1) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::BoneWeight, m_BoneIndex2) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::BoneWeight, m_BoneIndex3) == 0x1c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::BoneWeight, 0x20>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::BoneWeight, "UnityEngine", "BoneWeight");
