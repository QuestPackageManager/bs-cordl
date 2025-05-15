#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Android/AndroidSupport.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AndroidSupport)
namespace UnityEngine::InputSystem::Layouts {
struct InputDeviceDescription;
}
namespace UnityEngine::InputSystem::LowLevel {
class InputDeviceExecuteCommandDelegate;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Android {
class AndroidSupport;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::Android::AndroidSupport);
// Dependencies System.Object
namespace UnityEngine::InputSystem::Android {
// Is value type: false
// CS Name: UnityEngine.InputSystem.Android.AndroidSupport
class CORDL_TYPE AndroidSupport : public ::System::Object {
public:
  // Declarations
  /// @brief Method Initialize, addr 0x4605e78, size 0x910, virtual false, abstract: false, final false
  static inline void Initialize();

  static inline ::UnityEngine::InputSystem::Android::AndroidSupport* New_ctor();

  /// @brief Method OnFindLayoutForDevice, addr 0x4606788, size 0x24c, virtual false, abstract: false, final false
  static inline ::StringW OnFindLayoutForDevice(::ByRef<::UnityEngine::InputSystem::Layouts::InputDeviceDescription> description, ::StringW matchedLayout,
                                                ::UnityEngine::InputSystem::LowLevel::InputDeviceExecuteCommandDelegate* executeCommandDelegate);

  /// @brief Method .ctor, addr 0x4606a90, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AndroidSupport();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AndroidSupport", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AndroidSupport(AndroidSupport&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AndroidSupport", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AndroidSupport(AndroidSupport const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6854 };

  /// @brief Field kAndroidInterface offset 0xffffffff size 0x8
  static constexpr ::ConstString kAndroidInterface{ u"Android" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Android::AndroidSupport, 0x10>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Android
NEED_NO_BOX(::UnityEngine::InputSystem::Android::AndroidSupport);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Android::AndroidSupport*, "UnityEngine.InputSystem.Android", "AndroidSupport");
