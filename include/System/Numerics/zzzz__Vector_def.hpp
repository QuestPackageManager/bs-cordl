#pragma once
// IWYU pragma private; include "System/Numerics/Vector.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Vector)
namespace System::Numerics {
template <typename T> struct Vector_1;
}
// Forward declare root types
namespace System::Numerics {
class Vector;
}
// Write type traits
MARK_REF_PTR_T(::System::Numerics::Vector);
// Type: System.Numerics::Vector
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Numerics {
// Is value type: false
// CS Name: ::System.Numerics::Vector*
class CORDL_TYPE Vector : public ::System::Object {
public:
  // Declarations
  /// @brief Method AsVectorUInt64, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::System::Numerics::Vector_1<uint64_t> AsVectorUInt64(::System::Numerics::Vector_1<T> value);

  /// @brief Method Equals, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::System::Numerics::Vector_1<T> Equals(::System::Numerics::Vector_1<T> left, ::System::Numerics::Vector_1<T> right);

  /// @brief Method get_IsHardwareAccelerated, addr 0x28958d4, size 0x8, virtual false, abstract: false, final false
  static inline bool get_IsHardwareAccelerated();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Vector();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Vector", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Vector(Vector&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Vector", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Vector(Vector const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Numerics::Vector, 0x10>, "Size mismatch!");

} // namespace System::Numerics
NEED_NO_BOX(::System::Numerics::Vector);
DEFINE_IL2CPP_ARG_TYPE(::System::Numerics::Vector*, "System.Numerics", "Vector");
