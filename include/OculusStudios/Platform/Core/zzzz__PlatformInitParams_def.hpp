#pragma once
// IWYU pragma private; include "OculusStudios/Platform/Core/PlatformInitParams.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PlatformInitParams)
namespace OculusStudios::Platform::Core {
class IPlatformLogger;
}
namespace OculusStudios::Platform::Core {
class IProductDefinition;
}
namespace OculusStudios::Platform::Core {
class IRichPresenceDefinition;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
// Forward declare root types
namespace OculusStudios::Platform::Core {
class PlatformInitParams;
}
// Write type traits
MARK_REF_PTR_T(::OculusStudios::Platform::Core::PlatformInitParams);
// Dependencies System.Nullable`1<T>, System.Object
namespace OculusStudios::Platform::Core {
// Is value type: false
// CS Name: OculusStudios.Platform.Core.PlatformInitParams
class CORDL_TYPE PlatformInitParams : public ::System::Object {
public:
  // Declarations
  /// @brief Field achievementIdDefinitions, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_achievementIdDefinitions,
                      put = __cordl_internal_set_achievementIdDefinitions)) ::System::Collections::Generic::HashSet_1<::StringW>* achievementIdDefinitions;

  /// @brief Field appId, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_appId, put = __cordl_internal_set_appId)) uint64_t appId;

  /// @brief Field destinationDefinitions, offset 0x20, size 0x8
  __declspec(property(
      get = __cordl_internal_get_destinationDefinitions,
      put = __cordl_internal_set_destinationDefinitions)) ::System::Collections::Generic::IReadOnlyList_1<::OculusStudios::Platform::Core::IRichPresenceDefinition*>* destinationDefinitions;

  /// @brief Field graphApiUrl, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_graphApiUrl, put = __cordl_internal_set_graphApiUrl)) ::StringW graphApiUrl;

  /// @brief Field graphAppId, offset 0x40, size 0x10
  __declspec(property(get = __cordl_internal_get_graphAppId, put = __cordl_internal_set_graphAppId)) ::System::Nullable_1<uint64_t> graphAppId;

  /// @brief Field logger, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_logger, put = __cordl_internal_set_logger)) ::OculusStudios::Platform::Core::IPlatformLogger* logger;

  /// @brief Field productDefinitions, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_productDefinitions,
                      put = __cordl_internal_set_productDefinitions)) ::System::Collections::Generic::IReadOnlyList_1<::OculusStudios::Platform::Core::IProductDefinition*>* productDefinitions;

  static inline ::OculusStudios::Platform::Core::PlatformInitParams* New_ctor();

  constexpr ::System::Collections::Generic::HashSet_1<::StringW>* const& __cordl_internal_get_achievementIdDefinitions() const;

  constexpr ::System::Collections::Generic::HashSet_1<::StringW>*& __cordl_internal_get_achievementIdDefinitions();

  constexpr uint64_t const& __cordl_internal_get_appId() const;

  constexpr uint64_t& __cordl_internal_get_appId();

  constexpr ::System::Collections::Generic::IReadOnlyList_1<::OculusStudios::Platform::Core::IRichPresenceDefinition*>* const& __cordl_internal_get_destinationDefinitions() const;

  constexpr ::System::Collections::Generic::IReadOnlyList_1<::OculusStudios::Platform::Core::IRichPresenceDefinition*>*& __cordl_internal_get_destinationDefinitions();

  constexpr ::StringW const& __cordl_internal_get_graphApiUrl() const;

  constexpr ::StringW& __cordl_internal_get_graphApiUrl();

  constexpr ::System::Nullable_1<uint64_t> const& __cordl_internal_get_graphAppId() const;

  constexpr ::System::Nullable_1<uint64_t>& __cordl_internal_get_graphAppId();

  constexpr ::OculusStudios::Platform::Core::IPlatformLogger* const& __cordl_internal_get_logger() const;

  constexpr ::OculusStudios::Platform::Core::IPlatformLogger*& __cordl_internal_get_logger();

  constexpr ::System::Collections::Generic::IReadOnlyList_1<::OculusStudios::Platform::Core::IProductDefinition*>* const& __cordl_internal_get_productDefinitions() const;

  constexpr ::System::Collections::Generic::IReadOnlyList_1<::OculusStudios::Platform::Core::IProductDefinition*>*& __cordl_internal_get_productDefinitions();

  constexpr void __cordl_internal_set_achievementIdDefinitions(::System::Collections::Generic::HashSet_1<::StringW>* value);

  constexpr void __cordl_internal_set_appId(uint64_t value);

  constexpr void __cordl_internal_set_destinationDefinitions(::System::Collections::Generic::IReadOnlyList_1<::OculusStudios::Platform::Core::IRichPresenceDefinition*>* value);

  constexpr void __cordl_internal_set_graphApiUrl(::StringW value);

  constexpr void __cordl_internal_set_graphAppId(::System::Nullable_1<uint64_t> value);

  constexpr void __cordl_internal_set_logger(::OculusStudios::Platform::Core::IPlatformLogger* value);

  constexpr void __cordl_internal_set_productDefinitions(::System::Collections::Generic::IReadOnlyList_1<::OculusStudios::Platform::Core::IProductDefinition*>* value);

  /// @brief Method .ctor, addr 0x5d80894, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlatformInitParams();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlatformInitParams", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlatformInitParams(PlatformInitParams&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlatformInitParams", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlatformInitParams(PlatformInitParams const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22192 };

  /// @brief Field appId, offset: 0x10, size: 0x8, def value: None
  uint64_t ___appId;

  /// @brief Field logger, offset: 0x18, size: 0x8, def value: None
  ::OculusStudios::Platform::Core::IPlatformLogger* ___logger;

  /// @brief Field destinationDefinitions, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::IReadOnlyList_1<::OculusStudios::Platform::Core::IRichPresenceDefinition*>* ___destinationDefinitions;

  /// @brief Field productDefinitions, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::IReadOnlyList_1<::OculusStudios::Platform::Core::IProductDefinition*>* ___productDefinitions;

  /// @brief Field achievementIdDefinitions, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::StringW>* ___achievementIdDefinitions;

  /// @brief Field graphApiUrl, offset: 0x38, size: 0x8, def value: None
  ::StringW ___graphApiUrl;

  /// @brief Field graphAppId, offset: 0x40, size: 0x10, def value: None
  ::System::Nullable_1<uint64_t> ___graphAppId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::OculusStudios::Platform::Core::PlatformInitParams, ___appId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::Platform::Core::PlatformInitParams, ___logger) == 0x18, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::Platform::Core::PlatformInitParams, ___destinationDefinitions) == 0x20, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::Platform::Core::PlatformInitParams, ___productDefinitions) == 0x28, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::Platform::Core::PlatformInitParams, ___achievementIdDefinitions) == 0x30, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::Platform::Core::PlatformInitParams, ___graphApiUrl) == 0x38, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::Platform::Core::PlatformInitParams, ___graphAppId) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OculusStudios::Platform::Core::PlatformInitParams, 0x50>, "Size mismatch!");

} // namespace OculusStudios::Platform::Core
NEED_NO_BOX(::OculusStudios::Platform::Core::PlatformInitParams);
DEFINE_IL2CPP_ARG_TYPE(::OculusStudios::Platform::Core::PlatformInitParams*, "OculusStudios.Platform.Core", "PlatformInitParams");
