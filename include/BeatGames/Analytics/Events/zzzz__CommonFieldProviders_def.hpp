#pragma once
// IWYU pragma private; include "BeatGames/Analytics/Events/CommonFieldProviders.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CommonFieldProviders)
// Forward declare root types
namespace BeatGames::Analytics::Events {
class CommonFieldProviders;
}
// Write type traits
MARK_REF_PTR_T(::BeatGames::Analytics::Events::CommonFieldProviders);
// Dependencies System.Object
namespace BeatGames::Analytics::Events {
// Is value type: false
// CS Name: BeatGames.Analytics.Events.CommonFieldProviders
class CORDL_TYPE CommonFieldProviders : public ::System::Object {
public:
  // Declarations
  /// @brief Field _cachedVROSVersion, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__cachedVROSVersion, put = setStaticF__cachedVROSVersion)) int32_t _cachedVROSVersion;

  static inline int32_t getStaticF__cachedVROSVersion();

  /// @brief Method get_DeviceType, addr 0x31917a8, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW get_DeviceType();

  /// @brief Method get_RuntimePlatform, addr 0x31913f0, size 0xd0, virtual false, abstract: false, final false
  static inline ::StringW get_RuntimePlatform();

  /// @brief Method get_VROSMajorVersion, addr 0x31914c0, size 0x2e8, virtual false, abstract: false, final false
  static inline int32_t get_VROSMajorVersion();

  static inline void setStaticF__cachedVROSVersion(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CommonFieldProviders();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CommonFieldProviders", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CommonFieldProviders(CommonFieldProviders&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CommonFieldProviders", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CommonFieldProviders(CommonFieldProviders const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22978 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatGames::Analytics::Events::CommonFieldProviders, 0x10>, "Size mismatch!");

} // namespace BeatGames::Analytics::Events
NEED_NO_BOX(::BeatGames::Analytics::Events::CommonFieldProviders);
DEFINE_IL2CPP_ARG_TYPE(::BeatGames::Analytics::Events::CommonFieldProviders*, "BeatGames.Analytics.Events", "CommonFieldProviders");
