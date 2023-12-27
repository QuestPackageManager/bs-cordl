#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Triangle)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System {
template <typename T> class IEquatable_1;
}
namespace UnityEngine::ProBuilder {
struct Edge;
}
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
struct Triangle;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ProBuilder::Triangle);
// Type: UnityEngine.ProBuilder::Triangle
// SizeInfo { instance_size: 12, native_size: 12, calculated_instance_size: 12, calculated_native_size: 28, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12209))
// CS Name: ::UnityEngine.ProBuilder::Triangle
struct CORDL_TYPE Triangle {
public:
  // Declarations
  __declspec(property(get = get_a)) int32_t a;

  __declspec(property(get = get_b)) int32_t b;

  __declspec(property(get = get_c)) int32_t c;

  __declspec(property(get = get_indices))::System::Collections::Generic::IEnumerable_1<int32_t>* indices;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::ProBuilder::Triangle>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::ProBuilder::Triangle>*();

  /// @brief Method get_a addr 0x2b7c9a8 size 0x8 virtual false final false
  inline int32_t get_a();

  /// @brief Method get_b addr 0x2b7c9b0 size 0x8 virtual false final false
  inline int32_t get_b();

  /// @brief Method get_c addr 0x2b7c9b8 size 0x8 virtual false final false
  inline int32_t get_c();

  /// @brief Method get_indices addr 0x2b7c9c0 size 0x88 virtual false final false
  inline ::System::Collections::Generic::IEnumerable_1<int32_t>* get_indices();

  /// @brief Method .ctor addr 0x2b7ca48 size 0xc virtual false final false
  inline void _ctor(int32_t a, int32_t b, int32_t c);

  /// @brief Method Equals addr 0x2b7ca54 size 0x34 virtual true final true
  inline bool Equals(::UnityEngine::ProBuilder::Triangle other);

  /// @brief Method Equals addr 0x2b7ca88 size 0x98 virtual true final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode addr 0x2b7cb20 size 0x20 virtual true final false
  inline int32_t GetHashCode();

  /// @brief Method IsAdjacent addr 0x2b7cb40 size 0x94 virtual false final false
  inline bool IsAdjacent(::UnityEngine::ProBuilder::Triangle other);

  /// @brief Method ContainsEdge addr 0x2b7cbd4 size 0x100 virtual false final false
  inline bool ContainsEdge(::UnityEngine::ProBuilder::Edge edge);

  // Ctor Parameters [CppParam { name: "m_A", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_B", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_C", ty:
  // "int32_t", modifiers: "", def_value: None }]
  constexpr Triangle(int32_t m_A, int32_t m_B, int32_t m_C) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr Triangle();

  /// @brief Field m_A, offset: 0x0, size: 0x4, def value: None
  int32_t m_A;

  /// @brief Field m_B, offset: 0x4, size: 0x4, def value: None
  int32_t m_B;

  /// @brief Field m_C, offset: 0x8, size: 0x4, def value: None
  int32_t m_C;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xc };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::Triangle, 0xc>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Triangle, "UnityEngine.ProBuilder", "Triangle");
