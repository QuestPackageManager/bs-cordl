#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__Comparer_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GenericComparer_1)
namespace System {
class Object;
}
// Forward declare root types
namespace System::Collections::Generic {
template <typename T> class GenericComparer_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Collections::Generic::GenericComparer_1);
// Type: System.Collections.Generic::GenericComparer`1
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Collections::Generic {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::System.Collections.Generic::GenericComparer`1<T>*
class CORDL_TYPE GenericComparer_1 : public ::System::Collections::Generic::Comparer_1<T> {
public:
  // Declarations
  /// @brief Method Compare, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t Compare(T x, T y);

  /// @brief Method Equals, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::System::Collections::Generic::GenericComparer_1<T>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GenericComparer_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GenericComparer_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GenericComparer_1(GenericComparer_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GenericComparer_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GenericComparer_1(GenericComparer_1 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Collections::Generic
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Collections::Generic::GenericComparer_1, "System.Collections.Generic", "GenericComparer`1");
