#pragma once
// IWYU pragma private; include "System/Runtime/Versioning/BinaryCompatibility.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(BinaryCompatibility)
// Forward declare root types
namespace System::Runtime::Versioning {
class BinaryCompatibility;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Versioning::BinaryCompatibility);
// Type: System.Runtime.Versioning::BinaryCompatibility
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Runtime::Versioning {
// Is value type: false
// CS Name: ::System.Runtime.Versioning::BinaryCompatibility*
class CORDL_TYPE BinaryCompatibility : public ::System::Object {
public:
  // Declarations
  /// @brief Field TargetsAtLeast_Desktop_V4_5, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_TargetsAtLeast_Desktop_V4_5, put = setStaticF_TargetsAtLeast_Desktop_V4_5)) bool TargetsAtLeast_Desktop_V4_5;

  /// @brief Field TargetsAtLeast_Desktop_V4_5_1, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_TargetsAtLeast_Desktop_V4_5_1, put = setStaticF_TargetsAtLeast_Desktop_V4_5_1)) bool TargetsAtLeast_Desktop_V4_5_1;

  static inline bool getStaticF_TargetsAtLeast_Desktop_V4_5();

  static inline bool getStaticF_TargetsAtLeast_Desktop_V4_5_1();

  static inline void setStaticF_TargetsAtLeast_Desktop_V4_5(bool value);

  static inline void setStaticF_TargetsAtLeast_Desktop_V4_5_1(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BinaryCompatibility();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BinaryCompatibility", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BinaryCompatibility(BinaryCompatibility&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BinaryCompatibility", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BinaryCompatibility(BinaryCompatibility const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Versioning::BinaryCompatibility, 0x10>, "Size mismatch!");

} // namespace System::Runtime::Versioning
NEED_NO_BOX(::System::Runtime::Versioning::BinaryCompatibility);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Versioning::BinaryCompatibility*, "System.Runtime.Versioning", "BinaryCompatibility");
