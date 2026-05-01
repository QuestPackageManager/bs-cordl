#pragma once
// IWYU pragma private; include "BeatSaber/Analytics/Gameplay/Events/SpaceshipGlobalFields.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SpaceshipGlobalFields)
// Forward declare root types
namespace BeatSaber::Analytics::Gameplay::Events {
class SpaceshipGlobalFields;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::Analytics::Gameplay::Events::SpaceshipGlobalFields);
// Dependencies System.Object
namespace BeatSaber::Analytics::Gameplay::Events {
// Is value type: false
// CS Name: BeatSaber.Analytics.Gameplay.Events.SpaceshipGlobalFields
class CORDL_TYPE SpaceshipGlobalFields : public ::System::Object {
public:
  // Declarations
  /// @brief Field _appId, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__appId, put = setStaticF__appId)) uint64_t _appId;

  /// @brief Method SetGlobalAppID, addr 0x31d0220, size 0x50, virtual false, abstract: false, final false
  static inline void SetGlobalAppID(uint64_t appId);

  static inline uint64_t getStaticF__appId();

  /// @brief Method get_appId, addr 0x31d02c4, size 0x4c, virtual false, abstract: false, final false
  static inline uint64_t get_appId();

  /// @brief Method get_buildVersion, addr 0x31d0270, size 0x54, virtual false, abstract: false, final false
  static inline ::StringW get_buildVersion();

  /// @brief Method get_userType, addr 0x31d0310, size 0x44, virtual false, abstract: false, final false
  static inline ::StringW get_userType();

  static inline void setStaticF__appId(uint64_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SpaceshipGlobalFields();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SpaceshipGlobalFields", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SpaceshipGlobalFields(SpaceshipGlobalFields&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SpaceshipGlobalFields", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SpaceshipGlobalFields(SpaceshipGlobalFields const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22104 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::Analytics::Gameplay::Events::SpaceshipGlobalFields, 0x10>, "Size mismatch!");

} // namespace BeatSaber::Analytics::Gameplay::Events
NEED_NO_BOX(::BeatSaber::Analytics::Gameplay::Events::SpaceshipGlobalFields);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Analytics::Gameplay::Events::SpaceshipGlobalFields*, "BeatSaber.Analytics.Gameplay.Events", "SpaceshipGlobalFields");
