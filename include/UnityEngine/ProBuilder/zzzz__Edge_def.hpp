#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/Edge.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IEquatable_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Edge)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
struct Edge;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ProBuilder::Edge);
// Dependencies System.IEquatable`1<T>
namespace UnityEngine::ProBuilder {
// Is value type: true
// CS Name: UnityEngine.ProBuilder.Edge
struct CORDL_TYPE Edge {
public:
  // Declarations
  /// @brief Field Empty, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Empty, put = setStaticF_Empty)) ::UnityEngine::ProBuilder::Edge Empty;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::ProBuilder::Edge>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::ProBuilder::Edge>*();

  /// @brief Method Add, addr 0x470b728, size 0x70, virtual false, abstract: false, final false
  static inline ::UnityEngine::ProBuilder::Edge Add(::UnityEngine::ProBuilder::Edge a, ::UnityEngine::ProBuilder::Edge b);

  /// @brief Method Contains, addr 0x470b93c, size 0x24, virtual false, abstract: false, final false
  inline bool Contains(int32_t index);

  /// @brief Method Contains, addr 0x470b994, size 0xa4, virtual false, abstract: false, final false
  inline bool Contains(int32_t index, ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* lookup);

  /// @brief Method Contains, addr 0x470b960, size 0x34, virtual false, abstract: false, final false
  inline bool Contains(::UnityEngine::ProBuilder::Edge other);

  /// @brief Method Equals, addr 0x470b4dc, size 0xd0, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x470b498, size 0x44, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::ProBuilder::Edge other);

  /// @brief Method Equals, addr 0x470b808, size 0x134, virtual false, abstract: false, final false
  inline bool Equals(::UnityEngine::ProBuilder::Edge other, ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* lookup);

  /// @brief Method GetHashCode, addr 0x470b5ac, size 0x24, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetIndices, addr 0x470ba38, size 0x3cc, virtual false, abstract: false, final false
  static inline void GetIndices(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>* edges, ::System::Collections::Generic::List_1<int32_t>* indices);

  /// @brief Method IsValid, addr 0x470b364, size 0x2c, virtual false, abstract: false, final false
  inline bool IsValid();

  /// @brief Method Subtract, addr 0x470b798, size 0x70, virtual false, abstract: false, final false
  static inline ::UnityEngine::ProBuilder::Edge Subtract(::UnityEngine::ProBuilder::Edge a, ::UnityEngine::ProBuilder::Edge b);

  /// @brief Method ToString, addr 0x470b390, size 0x108, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x470b35c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(int32_t a, int32_t b);

  static inline ::UnityEngine::ProBuilder::Edge getStaticF_Empty();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::ProBuilder::Edge>"
  constexpr ::System::IEquatable_1<::UnityEngine::ProBuilder::Edge>* i___System__IEquatable_1___UnityEngine__ProBuilder__Edge_();

  /// @brief Method op_Addition, addr 0x470b5d0, size 0x18, virtual false, abstract: false, final false
  static inline ::UnityEngine::ProBuilder::Edge op_Addition(::UnityEngine::ProBuilder::Edge a, ::UnityEngine::ProBuilder::Edge b);

  /// @brief Method op_Addition, addr 0x470b600, size 0x14, virtual false, abstract: false, final false
  static inline ::UnityEngine::ProBuilder::Edge op_Addition(::UnityEngine::ProBuilder::Edge a, int32_t b);

  /// @brief Method op_Equality, addr 0x470b628, size 0x90, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::ProBuilder::Edge a, ::UnityEngine::ProBuilder::Edge b);

  /// @brief Method op_Inequality, addr 0x470b6b8, size 0x70, virtual false, abstract: false, final false
  static inline bool op_Inequality(::UnityEngine::ProBuilder::Edge a, ::UnityEngine::ProBuilder::Edge b);

  /// @brief Method op_Subtraction, addr 0x470b5e8, size 0x18, virtual false, abstract: false, final false
  static inline ::UnityEngine::ProBuilder::Edge op_Subtraction(::UnityEngine::ProBuilder::Edge a, ::UnityEngine::ProBuilder::Edge b);

  /// @brief Method op_Subtraction, addr 0x470b614, size 0x14, virtual false, abstract: false, final false
  static inline ::UnityEngine::ProBuilder::Edge op_Subtraction(::UnityEngine::ProBuilder::Edge a, int32_t b);

  static inline void setStaticF_Empty(::UnityEngine::ProBuilder::Edge value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr Edge();

  // Ctor Parameters [CppParam { name: "a", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "b", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr Edge(int32_t a, int32_t b) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14234 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field a, offset: 0x0, size: 0x4, def value: None
  int32_t a;

  /// @brief Field b, offset: 0x4, size: 0x4, def value: None
  int32_t b;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ProBuilder::Edge, a) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Edge, b) == 0x4, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::Edge, 0x8>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Edge, "UnityEngine.ProBuilder", "Edge");
