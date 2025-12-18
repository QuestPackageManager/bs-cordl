#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/SimpleTuple_3.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(SimpleTuple_3)
// Forward declare root types
namespace UnityEngine::ProBuilder {
template <typename T1, typename T2, typename T3> struct SimpleTuple_3;
}
// Write type traits
MARK_GEN_VAL_T(::UnityEngine::ProBuilder::SimpleTuple_3);
// Dependencies
namespace UnityEngine::ProBuilder {
// cpp template
template <typename T1, typename T2, typename T3>
// Is value type: true
// CS Name: UnityEngine.ProBuilder.SimpleTuple`3<T1,T2,T3>
struct CORDL_TYPE SimpleTuple_3 {
public:
  // Declarations
  __declspec(property(get = get_item1, put = set_item1)) T1 item1;

  __declspec(property(get = get_item2, put = set_item2)) T2 item2;

  __declspec(property(get = get_item3, put = set_item3)) T3 item3;

  /// @brief Method ToString, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(T1 item1, T2 item2, T3 item3);

  /// @brief Method get_item1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T1 get_item1();

  /// @brief Method get_item2, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T2 get_item2();

  /// @brief Method get_item3, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T3 get_item3();

  /// @brief Method set_item1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_item1(T1 value);

  /// @brief Method set_item2, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_item2(T2 value);

  /// @brief Method set_item3, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_item3(T3 value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr SimpleTuple_3();

  // Ctor Parameters [CppParam { name: "m_Item1", ty: "T1", modifiers: "", def_value: None }, CppParam { name: "m_Item2", ty: "T2", modifiers: "", def_value: None }, CppParam { name: "m_Item3", ty:
  // "T3", modifiers: "", def_value: None }]
  constexpr SimpleTuple_3(T1 m_Item1, T2 m_Item2, T3 m_Item3) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16781 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field m_Item1, offset: 0x0, size: 0x8, def value: None
  T1 m_Item1;

  /// @brief Field m_Item2, offset: 0x8, size: 0x8, def value: None
  T2 m_Item2;

  /// @brief Field m_Item3, offset: 0x10, size: 0x8, def value: None
  T3 m_Item3;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace UnityEngine::ProBuilder
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::UnityEngine::ProBuilder::SimpleTuple_3, "UnityEngine.ProBuilder", "SimpleTuple`3");
