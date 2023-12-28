#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__Edge_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EdgeLookup)
namespace UnityEngine::ProBuilder {
struct Edge;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace UnityEngine::ProBuilder {
class __EdgeLookup____c__DisplayClass16_0;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
class __EdgeLookup____c__DisplayClass16_0;
}
namespace UnityEngine::ProBuilder {
struct EdgeLookup;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::__EdgeLookup____c__DisplayClass16_0);
MARK_VAL_T(::UnityEngine::ProBuilder::EdgeLookup);
// Type: ::<>c__DisplayClass16_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12118))
// CS Name: ::EdgeLookup::<>c__DisplayClass16_0*
class CORDL_TYPE __EdgeLookup____c__DisplayClass16_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field lookup, offset 0x10, size 0x8
  __declspec(property(get = __get_lookup, put = __set_lookup))::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* lookup;

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>*& __get_lookup();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t, int32_t>*> const& __get_lookup() const;

  constexpr void __set_lookup(::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* value);

  static inline ::UnityEngine::ProBuilder::__EdgeLookup____c__DisplayClass16_0* New_ctor();

  /// @brief Method .ctor addr 0x2b3f2b8 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <GetEdgeLookup>b__0 addr 0x2b3f65c size 0x84 virtual false final false
  inline ::UnityEngine::ProBuilder::EdgeLookup _GetEdgeLookup_b__0(::UnityEngine::ProBuilder::Edge x);

  // Ctor Parameters [CppParam { name: "", ty: "__EdgeLookup____c__DisplayClass16_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __EdgeLookup____c__DisplayClass16_0(__EdgeLookup____c__DisplayClass16_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__EdgeLookup____c__DisplayClass16_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __EdgeLookup____c__DisplayClass16_0(__EdgeLookup____c__DisplayClass16_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __EdgeLookup____c__DisplayClass16_0();

public:
  /// @brief Field lookup, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* ___lookup;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::__EdgeLookup____c__DisplayClass16_0, 0x18>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder
// Type: UnityEngine.ProBuilder::EdgeLookup
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12117))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12119))
// CS Name: ::UnityEngine.ProBuilder::EdgeLookup
struct CORDL_TYPE EdgeLookup {
public:
  // Declarations
  using __c__DisplayClass16_0 = ::UnityEngine::ProBuilder::__EdgeLookup____c__DisplayClass16_0;

  __declspec(property(get = get_local, put = set_local))::UnityEngine::ProBuilder::Edge local;

  __declspec(property(get = get_common, put = set_common))::UnityEngine::ProBuilder::Edge common;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::ProBuilder::EdgeLookup>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::ProBuilder::EdgeLookup>*();

  /// @brief Method get_local addr 0x2b3edb8 size 0x8 virtual false final false
  inline ::UnityEngine::ProBuilder::Edge get_local();

  /// @brief Method set_local addr 0x2b3edc0 size 0x8 virtual false final false
  inline void set_local(::UnityEngine::ProBuilder::Edge value);

  /// @brief Method get_common addr 0x2b3edc8 size 0x8 virtual false final false
  inline ::UnityEngine::ProBuilder::Edge get_common();

  /// @brief Method set_common addr 0x2b3edd0 size 0x8 virtual false final false
  inline void set_common(::UnityEngine::ProBuilder::Edge value);

  /// @brief Method .ctor addr 0x2b3edd8 size 0x8 virtual false final false
  inline void _ctor(::UnityEngine::ProBuilder::Edge common, ::UnityEngine::ProBuilder::Edge local);

  /// @brief Method .ctor addr 0x2b3ede0 size 0x18 virtual false final false
  inline void _ctor(int32_t cx, int32_t cy, int32_t x, int32_t y);

  /// @brief Method Equals addr 0x2b3edf8 size 0x38 virtual true final true
  inline bool Equals(::UnityEngine::ProBuilder::EdgeLookup other);

  /// @brief Method Equals addr 0x2b3ee30 size 0xa8 virtual true final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode addr 0x2b3eed8 size 0x24 virtual true final false
  inline int32_t GetHashCode();

  /// @brief Method op_Equality addr 0x2b3eefc size 0x9c virtual false final false
  static inline bool op_Equality(::UnityEngine::ProBuilder::EdgeLookup a, ::UnityEngine::ProBuilder::EdgeLookup b);

  /// @brief Method op_Inequality addr 0x2b3ef98 size 0xa0 virtual false final false
  static inline bool op_Inequality(::UnityEngine::ProBuilder::EdgeLookup a, ::UnityEngine::ProBuilder::EdgeLookup b);

  /// @brief Method ToString addr 0x2b3f038 size 0x1ac virtual true final false
  inline ::StringW ToString();

  /// @brief Method GetEdgeLookup addr 0x2b3f1e4 size 0xd4 virtual false final false
  static inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::EdgeLookup>*
  GetEdgeLookup(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>* edges, ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* lookup);

  /// @brief Method GetEdgeLookupHashSet addr 0x2b3f2c0 size 0x39c virtual false final false
  static inline ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::EdgeLookup>*
  GetEdgeLookupHashSet(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>* edges, ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* lookup);

  // Ctor Parameters [CppParam { name: "m_Local", ty: "::UnityEngine::ProBuilder::Edge", modifiers: "", def_value: None }, CppParam { name: "m_Common", ty: "::UnityEngine::ProBuilder::Edge",
  // modifiers: "", def_value: None }]
  constexpr EdgeLookup(::UnityEngine::ProBuilder::Edge m_Local, ::UnityEngine::ProBuilder::Edge m_Common) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr EdgeLookup();

  /// @brief Field m_Local, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::ProBuilder::Edge m_Local;

  /// @brief Field m_Common, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::ProBuilder::Edge m_Common;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::EdgeLookup, 0x10>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder
NEED_NO_BOX(::UnityEngine::ProBuilder::__EdgeLookup____c__DisplayClass16_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::__EdgeLookup____c__DisplayClass16_0*, "UnityEngine.ProBuilder", "EdgeLookup/<>c__DisplayClass16_0");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::EdgeLookup, "UnityEngine.ProBuilder", "EdgeLookup");
