#pragma once
// IWYU pragma private; include "OculusStudios/Platform/Oculus/MockedOculusPlatform.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "OculusStudios/Platform/Core/zzzz__MockedPlatform_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(MockedOculusPlatform)
namespace OculusStudios::Platform::Core {
class IPlatformInternal;
}
namespace OculusStudios::Platform::Core {
class IPlatformUser;
}
namespace OculusStudios::Platform::Core {
class PlatformInitParams;
}
namespace OculusStudios::Platform::Core {
struct Vendor;
}
namespace OculusStudios::Platform::Oculus {
class MockedPlatformUser;
}
namespace System::Threading::Tasks {
class Task;
}
// Forward declare root types
namespace OculusStudios::Platform::Oculus {
class MockedOculusPlatform;
}
// Write type traits
MARK_REF_PTR_T(::OculusStudios::Platform::Oculus::MockedOculusPlatform);
// Dependencies OculusStudios.Platform.Core.MockedPlatform
namespace OculusStudios::Platform::Oculus {
// Is value type: false
// CS Name: OculusStudios.Platform.Oculus.MockedOculusPlatform
class CORDL_TYPE MockedOculusPlatform : public ::OculusStudios::Platform::Core::MockedPlatform {
public:
  // Declarations
  /// @brief Field _user, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__user, put = __cordl_internal_set__user)) ::OculusStudios::Platform::Oculus::MockedPlatformUser* _user;

  __declspec(property(get = get_displayName)) ::StringW displayName;

  __declspec(property(get = get_key)) ::StringW key;

  __declspec(property(get = get_user)) ::OculusStudios::Platform::Core::IPlatformUser* user;

  __declspec(property(get = get_vendor)) ::OculusStudios::Platform::Core::Vendor vendor;

  /// @brief Convert operator to "::OculusStudios::Platform::Core::IPlatformInternal"
  constexpr operator ::OculusStudios::Platform::Core::IPlatformInternal*() noexcept;

  static inline ::OculusStudios::Platform::Oculus::MockedOculusPlatform* New_ctor();

  /// @brief Method OculusStudios.Platform.Core.IPlatformInternal.InitializeAsync, addr 0x5d83e34, size 0xd4, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task* OculusStudios_Platform_Core_IPlatformInternal_InitializeAsync(::OculusStudios::Platform::Core::PlatformInitParams* initParams);

  constexpr ::OculusStudios::Platform::Oculus::MockedPlatformUser* const& __cordl_internal_get__user() const;

  constexpr ::OculusStudios::Platform::Oculus::MockedPlatformUser*& __cordl_internal_get__user();

  constexpr void __cordl_internal_set__user(::OculusStudios::Platform::Oculus::MockedPlatformUser* value);

  /// @brief Method .ctor, addr 0x5d8401c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_displayName, addr 0x5d83d9c, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_displayName();

  /// @brief Method get_key, addr 0x5d83de0, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_key();

  /// @brief Method get_user, addr 0x5d83e2c, size 0x8, virtual true, abstract: false, final false
  inline ::OculusStudios::Platform::Core::IPlatformUser* get_user();

  /// @brief Method get_vendor, addr 0x5d83e24, size 0x8, virtual true, abstract: false, final false
  inline ::OculusStudios::Platform::Core::Vendor get_vendor();

  /// @brief Convert to "::OculusStudios::Platform::Core::IPlatformInternal"
  constexpr ::OculusStudios::Platform::Core::IPlatformInternal* i___OculusStudios__Platform__Core__IPlatformInternal() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MockedOculusPlatform();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MockedOculusPlatform", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MockedOculusPlatform(MockedOculusPlatform&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MockedOculusPlatform", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MockedOculusPlatform(MockedOculusPlatform const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21908 };

  /// @brief Field _user, offset: 0x28, size: 0x8, def value: None
  ::OculusStudios::Platform::Oculus::MockedPlatformUser* ____user;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::OculusStudios::Platform::Oculus::MockedOculusPlatform, ____user) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OculusStudios::Platform::Oculus::MockedOculusPlatform, 0x30>, "Size mismatch!");

} // namespace OculusStudios::Platform::Oculus
NEED_NO_BOX(::OculusStudios::Platform::Oculus::MockedOculusPlatform);
DEFINE_IL2CPP_ARG_TYPE(::OculusStudios::Platform::Oculus::MockedOculusPlatform*, "OculusStudios.Platform.Oculus", "MockedOculusPlatform");
