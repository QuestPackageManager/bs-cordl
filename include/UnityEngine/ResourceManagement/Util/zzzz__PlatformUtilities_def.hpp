#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/Util/PlatformUtilities.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(PlatformUtilities)
namespace UnityEngine {
struct RuntimePlatform;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::Util {
class PlatformUtilities;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ResourceManagement::Util::PlatformUtilities);
// Dependencies System.Object
namespace UnityEngine::ResourceManagement::Util {
// Is value type: false
// CS Name: UnityEngine.ResourceManagement.Util.PlatformUtilities
class CORDL_TYPE PlatformUtilities : public ::System::Object {
public:
  // Declarations
  static inline ::UnityEngine::ResourceManagement::Util::PlatformUtilities* New_ctor();

  /// @brief Method PlatformUsesMultiThreading, addr 0x47a5300, size 0xc, virtual false, abstract: false, final false
  static inline bool PlatformUsesMultiThreading(::UnityEngine::RuntimePlatform platform);

  /// @brief Method .ctor, addr 0x47a530c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlatformUtilities();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlatformUtilities", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlatformUtilities(PlatformUtilities&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlatformUtilities", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlatformUtilities(PlatformUtilities const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15638 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourceManagement::Util::PlatformUtilities, 0x10>, "Size mismatch!");

} // namespace UnityEngine::ResourceManagement::Util
NEED_NO_BOX(::UnityEngine::ResourceManagement::Util::PlatformUtilities);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::Util::PlatformUtilities*, "UnityEngine.ResourceManagement.Util", "PlatformUtilities");
