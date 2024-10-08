#pragma once
// IWYU pragma private; include "System/Runtime/InteropServices/ICustomMarshaler.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(ICustomMarshaler)
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Runtime::InteropServices {
class ICustomMarshaler;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::InteropServices::ICustomMarshaler);
// Type: System.Runtime.InteropServices::ICustomMarshaler
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::InteropServices {
// Is value type: false
// CS Name: ::System.Runtime.InteropServices::ICustomMarshaler*
class CORDL_TYPE ICustomMarshaler {
public:
  // Declarations
  /// @brief Method CleanUpManagedData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void CleanUpManagedData(::System::Object* ManagedObj);

  /// @brief Method CleanUpNativeData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void CleanUpNativeData(::System::IntPtr pNativeData);

  /// @brief Method GetNativeDataSize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t GetNativeDataSize();

  /// @brief Method MarshalManagedToNative, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::IntPtr MarshalManagedToNative(::System::Object* ManagedObj);

  /// @brief Method MarshalNativeToManaged, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Object* MarshalNativeToManaged(::System::IntPtr pNativeData);

  // Ctor Parameters [CppParam { name: "", ty: "ICustomMarshaler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ICustomMarshaler(ICustomMarshaler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ICustomMarshaler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ICustomMarshaler(ICustomMarshaler const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3312 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Runtime::InteropServices
NEED_NO_BOX(::System::Runtime::InteropServices::ICustomMarshaler);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::InteropServices::ICustomMarshaler*, "System.Runtime.InteropServices", "ICustomMarshaler");
