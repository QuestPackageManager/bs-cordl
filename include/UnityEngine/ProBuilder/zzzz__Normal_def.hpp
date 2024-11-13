#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/Normal.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Normal)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
struct Normal;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ProBuilder::Normal);
// Type: UnityEngine.ProBuilder::Normal
// SizeInfo { instance_size: 40, native_size: 40, calculated_instance_size: 40, calculated_native_size: 56, minimum_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder {
// Is value type: true
// CS Name: ::UnityEngine.ProBuilder::Normal
struct CORDL_TYPE Normal {
public:
  // Declarations
  __declspec(property(get = get_bitangent, put = set_bitangent)) ::UnityEngine::Vector3 bitangent;

  __declspec(property(get = get_normal, put = set_normal)) ::UnityEngine::Vector3 normal;

  __declspec(property(get = get_tangent, put = set_tangent)) ::UnityEngine::Vector4 tangent;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::ProBuilder::Normal>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::ProBuilder::Normal>*();

  /// @brief Method Equals, addr 0x46b93cc, size 0x90, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x46b945c, size 0x98, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::ProBuilder::Normal other);

  /// @brief Method GetHashCode, addr 0x46b94f4, size 0x64, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method get_bitangent, addr 0x46b93b4, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_bitangent();

  /// @brief Method get_normal, addr 0x46b9384, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_normal();

  /// @brief Method get_tangent, addr 0x46b939c, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector4 get_tangent();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::ProBuilder::Normal>"
  constexpr ::System::IEquatable_1<::UnityEngine::ProBuilder::Normal>* i___System__IEquatable_1___UnityEngine__ProBuilder__Normal_();

  /// @brief Method op_Equality, addr 0x46b9558, size 0x30, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::ProBuilder::Normal a, ::UnityEngine::ProBuilder::Normal b);

  /// @brief Method op_Inequality, addr 0x46b9588, size 0x48, virtual false, abstract: false, final false
  static inline bool op_Inequality(::UnityEngine::ProBuilder::Normal a, ::UnityEngine::ProBuilder::Normal b);

  /// @brief Method set_bitangent, addr 0x46b93c0, size 0xc, virtual false, abstract: false, final false
  inline void set_bitangent(::UnityEngine::Vector3 value);

  /// @brief Method set_normal, addr 0x46b9390, size 0xc, virtual false, abstract: false, final false
  inline void set_normal(::UnityEngine::Vector3 value);

  /// @brief Method set_tangent, addr 0x46b93a8, size 0xc, virtual false, abstract: false, final false
  inline void set_tangent(::UnityEngine::Vector4 value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr Normal();

  // Ctor Parameters [CppParam { name: "_normal_k__BackingField", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "_tangent_k__BackingField", ty:
  // "::UnityEngine::Vector4", modifiers: "", def_value: None }, CppParam { name: "_bitangent_k__BackingField", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }]
  constexpr Normal(::UnityEngine::Vector3 _normal_k__BackingField, ::UnityEngine::Vector4 _tangent_k__BackingField, ::UnityEngine::Vector3 _bitangent_k__BackingField) noexcept;

  /// @brief Field <normal>k__BackingField, offset: 0x0, size: 0xc, def value: None
  ::UnityEngine::Vector3 _normal_k__BackingField;

  /// @brief Field <tangent>k__BackingField, offset: 0xc, size: 0x10, def value: None
  ::UnityEngine::Vector4 _tangent_k__BackingField;

  /// @brief Field <bitangent>k__BackingField, offset: 0x1c, size: 0xc, def value: None
  ::UnityEngine::Vector3 _bitangent_k__BackingField;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14224 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::Normal, 0x28>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Normal, _normal_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Normal, _tangent_k__BackingField) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Normal, _bitangent_k__BackingField) == 0x1c, "Offset mismatch!");

} // namespace UnityEngine::ProBuilder
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Normal, "UnityEngine.ProBuilder", "Normal");
