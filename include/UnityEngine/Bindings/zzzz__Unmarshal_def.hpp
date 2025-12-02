#pragma once
// IWYU pragma private; include "UnityEngine/Bindings/Unmarshal.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(Unmarshal)
namespace System::Runtime::InteropServices {
struct GCHandle;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace UnityEngine::Bindings {
struct Unmarshal;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Bindings::Unmarshal);
// Dependencies
namespace UnityEngine::Bindings {
// Is value type: true
// CS Name: UnityEngine.Bindings.Unmarshal
#pragma pack(push, 0)
struct CORDL_TYPE Unmarshal {
public:
  // Declarations
  /// @brief Method FromIntPtrUnsafe, addr 0x68cb010, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Runtime::InteropServices::GCHandle FromIntPtrUnsafe(::System::IntPtr gcHandle);

  /// @brief Method UnmarshalUnityObject, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T UnmarshalUnityObject(::System::IntPtr gcHandlePtr);

  // Ctor Parameters []
  // @brief default ctor
  constexpr Unmarshal();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10441 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Bindings::Unmarshal, 0x1>, "Size mismatch!");

} // namespace UnityEngine::Bindings
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Bindings::Unmarshal, "UnityEngine.Bindings", "Unmarshal");
