#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
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
// Type: UnityEngine.InputSystem.Android::AndroidSupport
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::Android {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6444))
// CS Name: ::UnityEngine.InputSystem.Android::AndroidSupport*
class CORDL_TYPE AndroidSupport : public ::System::Object {
public:
  // Declarations
  /// @brief Method Initialize, addr 0x2ae5a28, size 0x8f4, virtual false, abstract: false, final false
  static inline void Initialize();

  /// @brief Method OnFindLayoutForDevice, addr 0x2ae631c, size 0x254, virtual false, abstract: false, final false
  static inline ::StringW OnFindLayoutForDevice(ByRef<::UnityEngine::InputSystem::Layouts::InputDeviceDescription> description, ::StringW matchedLayout,
                                                ::UnityEngine::InputSystem::LowLevel::InputDeviceExecuteCommandDelegate* executeCommandDelegate);

  static inline ::UnityEngine::InputSystem::Android::AndroidSupport* New_ctor();

  /// @brief Method .ctor, addr 0x2ae6630, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "AndroidSupport", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AndroidSupport(AndroidSupport&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AndroidSupport", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AndroidSupport(AndroidSupport const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AndroidSupport();

public:
  /// @brief Field kAndroidInterface offset 0xffffffff size 0x8
  static constexpr ::ConstString kAndroidInterface{ u"Android" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Android::AndroidSupport, 0x10>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Android
NEED_NO_BOX(::UnityEngine::InputSystem::Android::AndroidSupport);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Android::AndroidSupport*, "UnityEngine.InputSystem.Android", "AndroidSupport");
