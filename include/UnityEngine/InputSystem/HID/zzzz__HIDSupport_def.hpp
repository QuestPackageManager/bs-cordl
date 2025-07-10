#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/HID/HIDSupport.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/InputSystem/HID/zzzz__HID_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HIDSupport)
namespace UnityEngine::InputSystem::HID {
struct HIDSupport_HIDPageUsage;
}
namespace UnityEngine::InputSystem::HID {
struct HID_GenericDesktop;
}
namespace UnityEngine::InputSystem::HID {
struct HID_UsagePage;
}
namespace UnityEngine::InputSystem::Utilities {
template <typename TValue> struct ReadOnlyArray_1;
}
// Forward declare root types
namespace UnityEngine::InputSystem::HID {
class HIDSupport;
}
namespace UnityEngine::InputSystem::HID {
struct HIDSupport_HIDPageUsage;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::HID::HIDSupport);
MARK_VAL_T(::UnityEngine::InputSystem::HID::HIDSupport_HIDPageUsage);
// Dependencies UnityEngine.InputSystem.HID.HID::UsagePage
namespace UnityEngine::InputSystem::HID {
// Is value type: true
// CS Name: UnityEngine.InputSystem.HID.HIDSupport/HIDPageUsage
struct CORDL_TYPE HIDSupport_HIDPageUsage {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x45ff9d0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::InputSystem::HID::HID_UsagePage page, int32_t usage);

  /// @brief Method .ctor, addr 0x45ffb20, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::InputSystem::HID::HID_GenericDesktop usage);

  // Ctor Parameters []
  // @brief default ctor
  constexpr HIDSupport_HIDPageUsage();

  // Ctor Parameters [CppParam { name: "page", ty: "::UnityEngine::InputSystem::HID::HID_UsagePage", modifiers: "", def_value: None }, CppParam { name: "usage", ty: "int32_t", modifiers: "",
  // def_value: None }]
  constexpr HIDSupport_HIDPageUsage(::UnityEngine::InputSystem::HID::HID_UsagePage page, int32_t usage) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6821 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field page, offset: 0x0, size: 0x4, def value: None
  ::UnityEngine::InputSystem::HID::HID_UsagePage page;

  /// @brief Field usage, offset: 0x4, size: 0x4, def value: None
  int32_t usage;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::HID::HIDSupport_HIDPageUsage, page) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::HID::HIDSupport_HIDPageUsage, usage) == 0x4, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::HID::HIDSupport_HIDPageUsage, 0x8>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::HID
// Dependencies System.Object
namespace UnityEngine::InputSystem::HID {
// Is value type: false
// CS Name: UnityEngine.InputSystem.HID.HIDSupport
class CORDL_TYPE HIDSupport : public ::System::Object {
public:
  // Declarations
  using HIDPageUsage = ::UnityEngine::InputSystem::HID::HIDSupport_HIDPageUsage;

  /// @brief Field s_SupportedHIDUsages, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_SupportedHIDUsages,
                      put = setStaticF_s_SupportedHIDUsages)) ::ArrayW<::UnityEngine::InputSystem::HID::HIDSupport_HIDPageUsage, ::Array<::UnityEngine::InputSystem::HID::HIDSupport_HIDPageUsage>*>
      s_SupportedHIDUsages;

  /// @brief Method Initialize, addr 0x45ff9d8, size 0x148, virtual false, abstract: false, final false
  static inline void Initialize();

  static inline ::ArrayW<::UnityEngine::InputSystem::HID::HIDSupport_HIDPageUsage, ::Array<::UnityEngine::InputSystem::HID::HIDSupport_HIDPageUsage>*> getStaticF_s_SupportedHIDUsages();

  /// @brief Method get_supportedHIDUsages, addr 0x45ff744, size 0x60, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::HID::HIDSupport_HIDPageUsage> get_supportedHIDUsages();

  static inline void setStaticF_s_SupportedHIDUsages(::ArrayW<::UnityEngine::InputSystem::HID::HIDSupport_HIDPageUsage, ::Array<::UnityEngine::InputSystem::HID::HIDSupport_HIDPageUsage>*> value);

  /// @brief Method set_supportedHIDUsages, addr 0x45ff7a4, size 0x22c, virtual false, abstract: false, final false
  static inline void set_supportedHIDUsages(::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::HID::HIDSupport_HIDPageUsage> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HIDSupport();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HIDSupport", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HIDSupport(HIDSupport&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HIDSupport", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HIDSupport(HIDSupport const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6822 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::HID::HIDSupport, 0x10>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::HID
NEED_NO_BOX(::UnityEngine::InputSystem::HID::HIDSupport);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::HID::HIDSupport*, "UnityEngine.InputSystem.HID", "HIDSupport");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::HID::HIDSupport_HIDPageUsage, "UnityEngine.InputSystem.HID", "HIDSupport/HIDPageUsage");
