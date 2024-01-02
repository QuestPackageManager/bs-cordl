#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RuntimeImports)
// Forward declare root types
namespace System::Runtime {
class RuntimeImports;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::RuntimeImports);
// Type: System.Runtime::RuntimeImports
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Runtime {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3051))
// CS Name: ::System.Runtime::RuntimeImports*
class CORDL_TYPE RuntimeImports : public ::System::Object {
public:
  // Declarations
  /// @brief Method RhZeroMemory, addr 0x2484c6c, size 0x4, virtual false, abstract: false, final false
  static inline void RhZeroMemory(ByRef<uint8_t> b, uint64_t byteLength);

  /// @brief Method ZeroMemory, addr 0x2484c70, size 0x4, virtual false, abstract: false, final false
  static inline void ZeroMemory(::cordl_internals::Ptr<void> p, uint32_t byteLength);

  /// @brief Method Memmove, addr 0x2484c74, size 0x4, virtual false, abstract: false, final false
  static inline void Memmove(::cordl_internals::Ptr<uint8_t> dest, ::cordl_internals::Ptr<uint8_t> src, uint32_t len);

  /// @brief Method Memmove_wbarrier, addr 0x2484c78, size 0x4, virtual false, abstract: false, final false
  static inline void Memmove_wbarrier(::cordl_internals::Ptr<uint8_t> dest, ::cordl_internals::Ptr<uint8_t> src, uint32_t len, void* type_handle);

  // Ctor Parameters [CppParam { name: "", ty: "RuntimeImports", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RuntimeImports(RuntimeImports&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RuntimeImports", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RuntimeImports(RuntimeImports const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RuntimeImports();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::RuntimeImports, 0x10>, "Size mismatch!");

} // namespace System::Runtime
NEED_NO_BOX(::System::Runtime::RuntimeImports);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::RuntimeImports*, "System.Runtime", "RuntimeImports");
