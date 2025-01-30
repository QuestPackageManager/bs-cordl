#pragma once
// IWYU pragma private; include "System/Runtime/RuntimeImports.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RuntimeImports)
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace System::Runtime {
class RuntimeImports;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::RuntimeImports);
// Dependencies System.Object
namespace System::Runtime {
// Is value type: false
// CS Name: System.Runtime.RuntimeImports
class CORDL_TYPE RuntimeImports : public ::System::Object {
public:
  // Declarations
  /// @brief Method Memmove, addr 0x3cc8a20, size 0x4, virtual false, abstract: false, final false
  static inline void Memmove(::cordl_internals::Ptr<uint8_t> dest, ::cordl_internals::Ptr<uint8_t> src, uint32_t len);

  /// @brief Method Memmove_wbarrier, addr 0x3cc8a24, size 0x4, virtual false, abstract: false, final false
  static inline void Memmove_wbarrier(::cordl_internals::Ptr<uint8_t> dest, ::cordl_internals::Ptr<uint8_t> src, uint32_t len, ::System::IntPtr type_handle);

  /// @brief Method RhZeroMemory, addr 0x3cc8a18, size 0x4, virtual false, abstract: false, final false
  static inline void RhZeroMemory(::ByRef<uint8_t> b, uint64_t byteLength);

  /// @brief Method ZeroMemory, addr 0x3cc8a1c, size 0x4, virtual false, abstract: false, final false
  static inline void ZeroMemory(::cordl_internals::Ptr<void> p, uint32_t byteLength);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RuntimeImports();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RuntimeImports", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RuntimeImports(RuntimeImports&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RuntimeImports", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RuntimeImports(RuntimeImports const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3050 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::RuntimeImports, 0x10>, "Size mismatch!");

} // namespace System::Runtime
NEED_NO_BOX(::System::Runtime::RuntimeImports);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::RuntimeImports*, "System.Runtime", "RuntimeImports");
