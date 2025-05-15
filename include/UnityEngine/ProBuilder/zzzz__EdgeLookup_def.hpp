#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/EdgeLookup.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__Edge_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EdgeLookup)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System {
class Object;
}
namespace UnityEngine::ProBuilder {
class EdgeLookup___c__DisplayClass16_0;
}
namespace UnityEngine::ProBuilder {
struct Edge;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
class EdgeLookup___c__DisplayClass16_0;
}
namespace UnityEngine::ProBuilder {
struct EdgeLookup;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::EdgeLookup___c__DisplayClass16_0);
MARK_VAL_T(::UnityEngine::ProBuilder::EdgeLookup);
// Dependencies System.Object
namespace UnityEngine::ProBuilder {
// Is value type: false
// CS Name: UnityEngine.ProBuilder.EdgeLookup/<>c__DisplayClass16_0
class CORDL_TYPE EdgeLookup___c__DisplayClass16_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field lookup, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_lookup, put = __cordl_internal_set_lookup)) ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* lookup;

  static inline ::UnityEngine::ProBuilder::EdgeLookup___c__DisplayClass16_0* New_ctor();

  /// @brief Method <GetEdgeLookup>b__0, addr 0x47082f8, size 0x84, virtual false, abstract: false, final false
  inline ::UnityEngine::ProBuilder::EdgeLookup _GetEdgeLookup_b__0(::UnityEngine::ProBuilder::Edge x);

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* const& __cordl_internal_get_lookup() const;

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>*& __cordl_internal_get_lookup();

  constexpr void __cordl_internal_set_lookup(::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* value);

  /// @brief Method .ctor, addr 0x4707f54, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EdgeLookup___c__DisplayClass16_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EdgeLookup___c__DisplayClass16_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EdgeLookup___c__DisplayClass16_0(EdgeLookup___c__DisplayClass16_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EdgeLookup___c__DisplayClass16_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EdgeLookup___c__DisplayClass16_0(EdgeLookup___c__DisplayClass16_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14236 };

  /// @brief Field lookup, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* ___lookup;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ProBuilder::EdgeLookup___c__DisplayClass16_0, ___lookup) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::EdgeLookup___c__DisplayClass16_0, 0x18>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder
// Dependencies System.IEquatable`1<T>, UnityEngine.ProBuilder.Edge
namespace UnityEngine::ProBuilder {
// Is value type: true
// CS Name: UnityEngine.ProBuilder.EdgeLookup
struct CORDL_TYPE EdgeLookup {
public:
  // Declarations
  using __c__DisplayClass16_0 = ::UnityEngine::ProBuilder::EdgeLookup___c__DisplayClass16_0;

  __declspec(property(get = get_common, put = set_common)) ::UnityEngine::ProBuilder::Edge common;

  __declspec(property(get = get_local, put = set_local)) ::UnityEngine::ProBuilder::Edge local;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::ProBuilder::EdgeLookup>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::ProBuilder::EdgeLookup>*();

  /// @brief Method Equals, addr 0x4707aa8, size 0x84, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x4707a14, size 0x94, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::ProBuilder::EdgeLookup other);

  /// @brief Method GetEdgeLookup, addr 0x4707e84, size 0xd0, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::EdgeLookup>*
  GetEdgeLookup(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>* edges, ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* lookup);

  /// @brief Method GetEdgeLookupHashSet, addr 0x4707f5c, size 0x39c, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::EdgeLookup>*
  GetEdgeLookupHashSet(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>* edges, ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* lookup);

  /// @brief Method GetHashCode, addr 0x4707b2c, size 0x70, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x4707cd8, size 0x1ac, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x47079f4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::ProBuilder::Edge common, ::UnityEngine::ProBuilder::Edge local);

  /// @brief Method .ctor, addr 0x47079fc, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(int32_t cx, int32_t cy, int32_t x, int32_t y);

  /// @brief Method get_common, addr 0x47079e4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::ProBuilder::Edge get_common();

  /// @brief Method get_local, addr 0x47079d4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::ProBuilder::Edge get_local();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::ProBuilder::EdgeLookup>"
  constexpr ::System::IEquatable_1<::UnityEngine::ProBuilder::EdgeLookup>* i___System__IEquatable_1___UnityEngine__ProBuilder__EdgeLookup_();

  /// @brief Method op_Equality, addr 0x4707b9c, size 0x9c, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::ProBuilder::EdgeLookup a, ::UnityEngine::ProBuilder::EdgeLookup b);

  /// @brief Method op_Inequality, addr 0x4707c38, size 0xa0, virtual false, abstract: false, final false
  static inline bool op_Inequality(::UnityEngine::ProBuilder::EdgeLookup a, ::UnityEngine::ProBuilder::EdgeLookup b);

  /// @brief Method set_common, addr 0x47079ec, size 0x8, virtual false, abstract: false, final false
  inline void set_common(::UnityEngine::ProBuilder::Edge value);

  /// @brief Method set_local, addr 0x47079dc, size 0x8, virtual false, abstract: false, final false
  inline void set_local(::UnityEngine::ProBuilder::Edge value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr EdgeLookup();

  // Ctor Parameters [CppParam { name: "m_Local", ty: "::UnityEngine::ProBuilder::Edge", modifiers: "", def_value: None }, CppParam { name: "m_Common", ty: "::UnityEngine::ProBuilder::Edge",
  // modifiers: "", def_value: None }]
  constexpr EdgeLookup(::UnityEngine::ProBuilder::Edge m_Local, ::UnityEngine::ProBuilder::Edge m_Common) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14237 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field m_Local, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::ProBuilder::Edge m_Local;

  /// @brief Field m_Common, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::ProBuilder::Edge m_Common;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ProBuilder::EdgeLookup, m_Local) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::EdgeLookup, m_Common) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::EdgeLookup, 0x10>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder
NEED_NO_BOX(::UnityEngine::ProBuilder::EdgeLookup___c__DisplayClass16_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::EdgeLookup___c__DisplayClass16_0*, "UnityEngine.ProBuilder", "EdgeLookup/<>c__DisplayClass16_0");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::EdgeLookup, "UnityEngine.ProBuilder", "EdgeLookup");
