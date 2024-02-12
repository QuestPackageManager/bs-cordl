#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ValuePair_3)
namespace System {
class Object;
}
// Forward declare root types
namespace ModestTree::Util {
template <typename T1, typename T2, typename T3> class ValuePair_3;
}
// Write type traits
MARK_GEN_REF_PTR_T(::ModestTree::Util::ValuePair_3);
// Type: ModestTree.Util::ValuePair`3
// SizeInfo { instance_size: 40, native_size: 40, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace ModestTree::Util {
// cpp template
template <typename T1, typename T2, typename T3>
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9769))
// CS Name: ::ModestTree.Util::ValuePair`3<T1,T2,T3>*
class CORDL_TYPE ValuePair_3 : public ::System::Object {
public:
  // Declarations
  /// @brief Field First, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_First, put = __cordl_internal_set_First)) T1 First;

  /// @brief Field Second, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_Second, put = __cordl_internal_set_Second)) T2 Second;

  /// @brief Field Third, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_Third, put = __cordl_internal_set_Third)) T3 Third;

  constexpr T1& __cordl_internal_get_First();

  constexpr T1 const& __cordl_internal_get_First() const;

  constexpr void __cordl_internal_set_First(T1 value);

  constexpr T2& __cordl_internal_get_Second();

  constexpr T2 const& __cordl_internal_get_Second() const;

  constexpr void __cordl_internal_set_Second(T2 value);

  constexpr T3& __cordl_internal_get_Third();

  constexpr T3 const& __cordl_internal_get_Third() const;

  constexpr void __cordl_internal_set_Third(T3 value);

  static inline ::ModestTree::Util::ValuePair_3<T1, T2, T3>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::ModestTree::Util::ValuePair_3<T1, T2, T3>* New_ctor(T1 first, T2 second, T3 third);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(T1 first, T2 second, T3 third);

  /// @brief Method Equals, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool Equals(::ModestTree::Util::ValuePair_3<T1, T2, T3>* that);

  /// @brief Method GetHashCode, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  // Ctor Parameters [CppParam { name: "", ty: "ValuePair_3", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ValuePair_3(ValuePair_3&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ValuePair_3", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ValuePair_3(ValuePair_3 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ValuePair_3();

public:
  /// @brief Field First, offset: 0x10, size: 0x8, def value: None
  T1 ___First;

  /// @brief Field Second, offset: 0x18, size: 0x8, def value: None
  T2 ___Second;

  /// @brief Field Third, offset: 0x20, size: 0x8, def value: None
  T3 ___Third;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace ModestTree::Util
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::ModestTree::Util::ValuePair_3, "ModestTree.Util", "ValuePair`3");
