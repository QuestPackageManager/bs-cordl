#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__CallingConvention_def.hpp"
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(UnmanagedFunctionPointerAttribute)
namespace System::Runtime::InteropServices {
struct CallingConvention;
}
// Forward declare root types
namespace System::Runtime::InteropServices {
class UnmanagedFunctionPointerAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::InteropServices::UnmanagedFunctionPointerAttribute);
// Type: System.Runtime.InteropServices::UnmanagedFunctionPointerAttribute
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Runtime::InteropServices {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2545)), TypeDefinitionIndex(TypeDefinitionIndex(3330))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3310))
// CS Name: ::System.Runtime.InteropServices::UnmanagedFunctionPointerAttribute*
class CORDL_TYPE UnmanagedFunctionPointerAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field m_callingConvention, offset 0x10, size 0x4
  __declspec(property(get = __get_m_callingConvention, put = __set_m_callingConvention))::System::Runtime::InteropServices::CallingConvention m_callingConvention;

  constexpr ::System::Runtime::InteropServices::CallingConvention& __get_m_callingConvention();

  constexpr ::System::Runtime::InteropServices::CallingConvention const& __get_m_callingConvention() const;

  constexpr void __set_m_callingConvention(::System::Runtime::InteropServices::CallingConvention value);

  static inline ::System::Runtime::InteropServices::UnmanagedFunctionPointerAttribute* New_ctor(::System::Runtime::InteropServices::CallingConvention callingConvention);

  /// @brief Method .ctor addr 0x237e2e8 size 0x28 virtual false final false
  inline void _ctor(::System::Runtime::InteropServices::CallingConvention callingConvention);

  // Ctor Parameters [CppParam { name: "", ty: "UnmanagedFunctionPointerAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnmanagedFunctionPointerAttribute(UnmanagedFunctionPointerAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnmanagedFunctionPointerAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnmanagedFunctionPointerAttribute(UnmanagedFunctionPointerAttribute const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnmanagedFunctionPointerAttribute();

public:
  /// @brief Field m_callingConvention, offset: 0x10, size: 0x4, def value: None
  ::System::Runtime::InteropServices::CallingConvention ___m_callingConvention;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::InteropServices::UnmanagedFunctionPointerAttribute, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::Runtime::InteropServices::UnmanagedFunctionPointerAttribute, ___m_callingConvention) == 0x10, "Offset mismatch!");

} // namespace System::Runtime::InteropServices
NEED_NO_BOX(::System::Runtime::InteropServices::UnmanagedFunctionPointerAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::InteropServices::UnmanagedFunctionPointerAttribute*, "System.Runtime.InteropServices", "UnmanagedFunctionPointerAttribute");
