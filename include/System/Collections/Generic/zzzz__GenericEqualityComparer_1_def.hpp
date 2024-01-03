#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__EqualityComparer_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GenericEqualityComparer_1)
namespace System {
class Object;
}
// Forward declare root types
namespace System::Collections::Generic {
template <typename T> class GenericEqualityComparer_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Collections::Generic::GenericEqualityComparer_1);
// Type: System.Collections.Generic::GenericEqualityComparer`1
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Collections::Generic {
// cpp template
template <typename T>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3869), inst: 1701 }), TypeDefinitionIndex(TypeDefinitionIndex(3869))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3870))
// CS Name: ::System.Collections.Generic::GenericEqualityComparer`1<T>*
class CORDL_TYPE GenericEqualityComparer_1 : public ::System::Collections::Generic::EqualityComparer_1<T> {
public:
  // Declarations
  /// @brief Method Equals, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool Equals(T x, T y);

  /// @brief Method GetHashCode, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t GetHashCode(T obj);

  /// @brief Method IndexOf, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t IndexOf(::ArrayW<T, ::Array<T>*> array, T value, int32_t startIndex, int32_t count);

  /// @brief Method LastIndexOf, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t LastIndexOf(::ArrayW<T, ::Array<T>*> array, T value, int32_t startIndex, int32_t count);

  /// @brief Method Equals, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::System::Collections::Generic::GenericEqualityComparer_1<T>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GenericEqualityComparer_1(GenericEqualityComparer_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GenericEqualityComparer_1(GenericEqualityComparer_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GenericEqualityComparer_1();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Collections::Generic
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Collections::Generic::GenericEqualityComparer_1, "System.Collections.Generic", "GenericEqualityComparer`1");
