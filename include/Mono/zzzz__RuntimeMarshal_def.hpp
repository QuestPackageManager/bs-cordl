#pragma once
// IWYU pragma private; include "Mono/RuntimeMarshal.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RuntimeMarshal)
namespace Mono {
struct MonoAssemblyName;
}
namespace Mono {
struct SafeStringMarshal;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Mono {
class RuntimeMarshal;
}
// Write type traits
MARK_REF_PTR_T(::Mono::RuntimeMarshal);
// Dependencies System.Object
namespace Mono {
// Is value type: false
// CS Name: Mono.RuntimeMarshal
class CORDL_TYPE RuntimeMarshal : public ::System::Object {
public:
  // Declarations
  /// @brief Method AsciHexDigitValue, addr 0x3c6363c, size 0x2c, virtual false, abstract: false, final false
  static inline int32_t AsciHexDigitValue(int32_t c);

  /// @brief Method DecodeBlobArray, addr 0x3c63584, size 0xb8, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> DecodeBlobArray(::System::IntPtr ptr);

  /// @brief Method DecodeBlobSize, addr 0x3c63508, size 0x7c, virtual false, abstract: false, final false
  static inline int32_t DecodeBlobSize(::System::IntPtr in_ptr, ::ByRef<::System::IntPtr> out_ptr);

  /// @brief Method FreeAssemblyName, addr 0x3c63668, size 0x8, virtual false, abstract: false, final false
  static inline void FreeAssemblyName(::ByRef<::Mono::MonoAssemblyName> name, bool freeStruct);

  /// @brief Method MarshalString, addr 0x3c634f8, size 0x8, virtual false, abstract: false, final false
  static inline ::Mono::SafeStringMarshal MarshalString(::StringW str);

  /// @brief Method PtrToUtf8String, addr 0x3c63430, size 0xc8, virtual false, abstract: false, final false
  static inline ::StringW PtrToUtf8String(::System::IntPtr ptr);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RuntimeMarshal();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RuntimeMarshal", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RuntimeMarshal(RuntimeMarshal&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RuntimeMarshal", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RuntimeMarshal(RuntimeMarshal const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2234 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::RuntimeMarshal, 0x10>, "Size mismatch!");

} // namespace Mono
NEED_NO_BOX(::Mono::RuntimeMarshal);
DEFINE_IL2CPP_ARG_TYPE(::Mono::RuntimeMarshal*, "Mono", "RuntimeMarshal");
