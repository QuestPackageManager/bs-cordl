#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/Triangle.hpp"
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
namespace System {
class Object;
}
namespace UnityEngine::ProBuilder {
struct Edge;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
struct Triangle;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ProBuilder::Triangle);
// Dependencies
namespace UnityEngine::ProBuilder {
// Is value type: true
// CS Name: UnityEngine.ProBuilder.Triangle
struct CORDL_TYPE Triangle {
public:
  // Declarations
  __declspec(property(get = get_a)) int32_t a;

  __declspec(property(get = get_b)) int32_t b;

  __declspec(property(get = get_c)) int32_t c;

  __declspec(property(get = get_indices)) ::System::Collections::Generic::IEnumerable_1<int32_t>* indices;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::ProBuilder::Triangle>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::ProBuilder::Triangle>*();

  /// @brief Method ContainsEdge, addr 0x64d9e08, size 0xd8, virtual false, abstract: false, final false
  inline bool ContainsEdge(::UnityEngine::ProBuilder::Edge edge);

  /// @brief Method Equals, addr 0x64d9cec, size 0x9c, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x64d9cb8, size 0x34, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::ProBuilder::Triangle other);

  /// @brief Method GetHashCode, addr 0x64d9d88, size 0x20, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method IsAdjacent, addr 0x64d9da8, size 0x60, virtual false, abstract: false, final false
  inline bool IsAdjacent(::UnityEngine::ProBuilder::Triangle other);

  /// @brief Method .ctor, addr 0x64d9cac, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(int32_t a, int32_t b, int32_t c);

  /// @brief Method get_a, addr 0x64d9c08, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_a();

  /// @brief Method get_b, addr 0x64d9c10, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_b();

  /// @brief Method get_c, addr 0x64d9c18, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_c();

  /// @brief Method get_indices, addr 0x64d9c20, size 0x8c, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<int32_t>* get_indices();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::ProBuilder::Triangle>"
  constexpr ::System::IEquatable_1<::UnityEngine::ProBuilder::Triangle>* i___System__IEquatable_1___UnityEngine__ProBuilder__Triangle_();

  // Ctor Parameters []
  // @brief default ctor
  constexpr Triangle();

  // Ctor Parameters [CppParam { name: "m_A", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_B", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_C", ty:
  // "int32_t", modifiers: "", def_value: None }]
  constexpr Triangle(int32_t m_A, int32_t m_B, int32_t m_C) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16774 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xc };

  /// @brief Field m_A, offset: 0x0, size: 0x4, def value: None
  int32_t m_A;

  /// @brief Field m_B, offset: 0x4, size: 0x4, def value: None
  int32_t m_B;

  /// @brief Field m_C, offset: 0x8, size: 0x4, def value: None
  int32_t m_C;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ProBuilder::Triangle, m_A) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Triangle, m_B) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Triangle, m_C) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::Triangle, 0xc>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Triangle, "UnityEngine.ProBuilder", "Triangle");
