#pragma once
// IWYU pragma private; include "Unity/Burst/IFunctionPointer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IFunctionPointer)
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Unity::Burst {
class IFunctionPointer;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Burst::IFunctionPointer);
// Dependencies
namespace Unity::Burst {
// Is value type: false
// CS Name: Unity.Burst.IFunctionPointer
class CORDL_TYPE IFunctionPointer {
public:
  // Declarations
  /// @brief Method FromIntPtr, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::Unity::Burst::IFunctionPointer* FromIntPtr(::System::IntPtr ptr);

  // Ctor Parameters [CppParam { name: "", ty: "IFunctionPointer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IFunctionPointer(IFunctionPointer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17283 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Burst
NEED_NO_BOX(::Unity::Burst::IFunctionPointer);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Burst::IFunctionPointer*, "Unity.Burst", "IFunctionPointer");
