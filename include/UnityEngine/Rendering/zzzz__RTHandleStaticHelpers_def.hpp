#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RTHandleStaticHelpers.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(RTHandleStaticHelpers)
namespace UnityEngine::Rendering {
class RTHandle;
}
namespace UnityEngine::Rendering {
struct RenderTargetIdentifier;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct RTHandleStaticHelpers;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::RTHandleStaticHelpers);
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.RTHandleStaticHelpers
#pragma pack(push, 0)
struct CORDL_TYPE RTHandleStaticHelpers {
public:
  // Declarations
  /// @brief Field s_RTHandleWrapper, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_RTHandleWrapper, put = setStaticF_s_RTHandleWrapper)) ::UnityEngine::Rendering::RTHandle* s_RTHandleWrapper;

  /// @brief Method SetRTHandleStaticWrapper, addr 0x65f3d2c, size 0xcc, virtual false, abstract: false, final false
  static inline void SetRTHandleStaticWrapper(::UnityEngine::Rendering::RenderTargetIdentifier rtId);

  /// @brief Method SetRTHandleUserManagedWrapper, addr 0x65f3e9c, size 0x30, virtual false, abstract: false, final false
  static inline void SetRTHandleUserManagedWrapper(::ByRef<::UnityEngine::Rendering::RTHandle*> rtWrapper, ::UnityEngine::Rendering::RenderTargetIdentifier rtId);

  static inline ::UnityEngine::Rendering::RTHandle* getStaticF_s_RTHandleWrapper();

  static inline void setStaticF_s_RTHandleWrapper(::UnityEngine::Rendering::RTHandle* value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr RTHandleStaticHelpers();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12215 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::RTHandleStaticHelpers, 0x1>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::RTHandleStaticHelpers, "UnityEngine.Rendering", "RTHandleStaticHelpers");
