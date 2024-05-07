#pragma once
// IWYU pragma private; include "System/TupleExtensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
CORDL_MODULE_EXPORT(TupleExtensions)
namespace System {
template <typename T1, typename T2> class Tuple_2;
}
// Forward declare root types
namespace System {
class TupleExtensions;
}
// Write type traits
MARK_REF_PTR_T(::System::TupleExtensions);
// Type: System::TupleExtensions
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// CS Name: ::System::TupleExtensions*
class CORDL_TYPE TupleExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method Deconstruct, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2> static inline void Deconstruct(::System::Tuple_2<T1, T2>* value, ByRef<T1> item1, ByRef<T2> item2);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TupleExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TupleExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TupleExtensions(TupleExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TupleExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TupleExtensions(TupleExtensions const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::TupleExtensions, 0x10>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::TupleExtensions);
DEFINE_IL2CPP_ARG_TYPE(::System::TupleExtensions*, "System", "TupleExtensions");
