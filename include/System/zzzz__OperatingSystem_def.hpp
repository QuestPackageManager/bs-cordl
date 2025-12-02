#pragma once
// IWYU pragma private; include "System/OperatingSystem.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__PlatformID_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(OperatingSystem)
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
class ICloneable;
}
namespace System {
class Object;
}
namespace System {
struct PlatformID;
}
namespace System {
class Version;
}
// Forward declare root types
namespace System {
class OperatingSystem;
}
// Write type traits
MARK_REF_PTR_T(::System::OperatingSystem);
// Dependencies System.Object, System.PlatformID
namespace System {
// Is value type: false
// CS Name: System.OperatingSystem
class CORDL_TYPE OperatingSystem : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Platform)) ::System::PlatformID Platform;

  __declspec(property(get = get_Version)) ::System::Version* Version;

  __declspec(property(get = get_VersionString)) ::StringW VersionString;

  /// @brief Field _platform, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__platform, put = __cordl_internal_set__platform)) ::System::PlatformID _platform;

  /// @brief Field _servicePack, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__servicePack, put = __cordl_internal_set__servicePack)) ::StringW _servicePack;

  /// @brief Field _version, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__version, put = __cordl_internal_set__version)) ::System::Version* _version;

  /// @brief Field _versionString, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__versionString, put = __cordl_internal_set__versionString)) ::StringW _versionString;

  /// @brief Convert operator to "::System::ICloneable"
  constexpr operator ::System::ICloneable*() noexcept;

  /// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
  constexpr operator ::System::Runtime::Serialization::ISerializable*() noexcept;

  /// @brief Method Clone, addr 0x5a53718, size 0x78, virtual true, abstract: false, final true
  inline ::System::Object* Clone();

  /// @brief Method GetObjectData, addr 0x5a536d4, size 0x34, virtual true, abstract: false, final true
  inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  static inline ::System::OperatingSystem* New_ctor(::System::PlatformID platform, ::System::Version* version);

  static inline ::System::OperatingSystem* New_ctor(::System::PlatformID platform, ::System::Version* version, ::StringW servicePack);

  /// @brief Method ToString, addr 0x5a53790, size 0x4, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr ::System::PlatformID const& __cordl_internal_get__platform() const;

  constexpr ::System::PlatformID& __cordl_internal_get__platform();

  constexpr ::StringW const& __cordl_internal_get__servicePack() const;

  constexpr ::StringW& __cordl_internal_get__servicePack();

  constexpr ::System::Version* const& __cordl_internal_get__version() const;

  constexpr ::System::Version*& __cordl_internal_get__version();

  constexpr ::StringW const& __cordl_internal_get__versionString() const;

  constexpr ::StringW& __cordl_internal_get__versionString();

  constexpr void __cordl_internal_set__platform(::System::PlatformID value);

  constexpr void __cordl_internal_set__servicePack(::StringW value);

  constexpr void __cordl_internal_set__version(::System::Version* value);

  constexpr void __cordl_internal_set__versionString(::StringW value);

  /// @brief Method .ctor, addr 0x5a535a8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::PlatformID platform, ::System::Version* version);

  /// @brief Method .ctor, addr 0x5a535b0, size 0x124, virtual false, abstract: false, final false
  inline void _ctor(::System::PlatformID platform, ::System::Version* version, ::StringW servicePack);

  /// @brief Method get_Platform, addr 0x5a53708, size 0x8, virtual false, abstract: false, final false
  inline ::System::PlatformID get_Platform();

  /// @brief Method get_Version, addr 0x5a53710, size 0x8, virtual false, abstract: false, final false
  inline ::System::Version* get_Version();

  /// @brief Method get_VersionString, addr 0x5a53794, size 0x248, virtual false, abstract: false, final false
  inline ::StringW get_VersionString();

  /// @brief Convert to "::System::ICloneable"
  constexpr ::System::ICloneable* i___System__ICloneable() noexcept;

  /// @brief Convert to "::System::Runtime::Serialization::ISerializable"
  constexpr ::System::Runtime::Serialization::ISerializable* i___System__Runtime__Serialization__ISerializable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OperatingSystem();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OperatingSystem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OperatingSystem(OperatingSystem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OperatingSystem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OperatingSystem(OperatingSystem const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2533 };

  /// @brief Field _version, offset: 0x10, size: 0x8, def value: None
  ::System::Version* ____version;

  /// @brief Field _platform, offset: 0x18, size: 0x4, def value: None
  ::System::PlatformID ____platform;

  /// @brief Field _servicePack, offset: 0x20, size: 0x8, def value: None
  ::StringW ____servicePack;

  /// @brief Field _versionString, offset: 0x28, size: 0x8, def value: None
  ::StringW ____versionString;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::OperatingSystem, ____version) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::OperatingSystem, ____platform) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::OperatingSystem, ____servicePack) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::OperatingSystem, ____versionString) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::OperatingSystem, 0x30>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::OperatingSystem);
DEFINE_IL2CPP_ARG_TYPE(::System::OperatingSystem*, "System", "OperatingSystem");
