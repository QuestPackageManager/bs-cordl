#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__EqualityComparer_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NullableEqualityComparer_1)
namespace System {
class Object;
}
namespace System {
template <typename T> struct Nullable_1;
}
// Forward declare root types
namespace System::Collections::Generic {
template <typename T> class NullableEqualityComparer_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Collections::Generic::NullableEqualityComparer_1);
// Type: System.Collections.Generic::NullableEqualityComparer`1
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Collections::Generic {
// cpp template
template <typename T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2448)), TypeDefinitionIndex(TypeDefinitionIndex(3869)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2448), inst: 3231
// }), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3869), inst: 1704 })} Self: TypeDefinitionIndex(TypeDefinitionIndex(3871)) CS Name:
// ::System.Collections.Generic::NullableEqualityComparer`1<T>*
class CORDL_TYPE NullableEqualityComparer_1 : public ::System::Collections::Generic::EqualityComparer_1<::System::Nullable_1<T>> {
public:
  // Declarations
  /// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool Equals(::System::Nullable_1<T> x, ::System::Nullable_1<T> y);

  /// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
  inline int32_t GetHashCode(::System::Nullable_1<T> obj);

  /// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
  inline int32_t IndexOf(::ArrayW<::System::Nullable_1<T>, ::Array<::System::Nullable_1<T>>*> array, ::System::Nullable_1<T> value, int32_t startIndex, int32_t count);

  /// @brief Method LastIndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
  inline int32_t LastIndexOf(::ArrayW<::System::Nullable_1<T>, ::Array<::System::Nullable_1<T>>*> array, ::System::Nullable_1<T> value, int32_t startIndex, int32_t count);

  /// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
  inline int32_t GetHashCode();

  static inline ::System::Collections::Generic::NullableEqualityComparer_1<T>* New_ctor();

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "NullableEqualityComparer_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NullableEqualityComparer_1(NullableEqualityComparer_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NullableEqualityComparer_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NullableEqualityComparer_1(NullableEqualityComparer_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NullableEqualityComparer_1();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Collections::Generic
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Collections::Generic::NullableEqualityComparer_1, "System.Collections.Generic", "NullableEqualityComparer`1");
