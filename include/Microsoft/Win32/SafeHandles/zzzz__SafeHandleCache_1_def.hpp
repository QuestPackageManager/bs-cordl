#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SafeHandleCache_1)
namespace System::Runtime::InteropServices {
class SafeHandle;
}
// Forward declare root types
namespace Microsoft::Win32::SafeHandles {
template <typename T> class SafeHandleCache_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Microsoft::Win32::SafeHandles::SafeHandleCache_1);
// Type: Microsoft.Win32.SafeHandles::SafeHandleCache`1
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Microsoft::Win32::SafeHandles {
// cpp template
template <typename T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2297))
// CS Name: ::Microsoft.Win32.SafeHandles::SafeHandleCache`1<T>*
class CORDL_TYPE SafeHandleCache_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field s_invalidHandle, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_invalidHandle, put = setStaticF_s_invalidHandle)) T s_invalidHandle;

  static inline void setStaticF_s_invalidHandle(T value);

  static inline T getStaticF_s_invalidHandle();

  /// @brief Method IsCachedInvalidHandle addr 0x0 size 0xffffffffffffffff virtual false final false
  static inline bool IsCachedInvalidHandle(::System::Runtime::InteropServices::SafeHandle* handle);

  // Ctor Parameters [CppParam { name: "", ty: "SafeHandleCache_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SafeHandleCache_1(SafeHandleCache_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SafeHandleCache_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SafeHandleCache_1(SafeHandleCache_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SafeHandleCache_1();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Microsoft::Win32::SafeHandles
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Microsoft::Win32::SafeHandles::SafeHandleCache_1, "Microsoft.Win32.SafeHandles", "SafeHandleCache`1");
