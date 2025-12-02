#pragma once
// IWYU pragma private; include "BeatGames/Analytics/Events/FunctionalLogger.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(FunctionalLogger)
// Forward declare root types
namespace BeatGames::Analytics::Events {
class FunctionalLogger;
}
// Write type traits
MARK_REF_PTR_T(::BeatGames::Analytics::Events::FunctionalLogger);
// Dependencies System.Object
namespace BeatGames::Analytics::Events {
// Is value type: false
// CS Name: BeatGames.Analytics.Events.FunctionalLogger
class CORDL_TYPE FunctionalLogger : public ::System::Object {
public:
  // Declarations
  /// @brief Field Navigation, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Navigation, put = setStaticF_Navigation)) ::StringW Navigation;

  /// @brief Field Session, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Session, put = setStaticF_Session)) ::StringW Session;

  /// @brief Field Telemetry, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Telemetry, put = setStaticF_Telemetry)) ::StringW Telemetry;

  static inline ::StringW getStaticF_Navigation();

  static inline ::StringW getStaticF_Session();

  static inline ::StringW getStaticF_Telemetry();

  static inline void setStaticF_Navigation(::StringW value);

  static inline void setStaticF_Session(::StringW value);

  static inline void setStaticF_Telemetry(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FunctionalLogger();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FunctionalLogger", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FunctionalLogger(FunctionalLogger&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FunctionalLogger", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FunctionalLogger(FunctionalLogger const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22955 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatGames::Analytics::Events::FunctionalLogger, 0x10>, "Size mismatch!");

} // namespace BeatGames::Analytics::Events
NEED_NO_BOX(::BeatGames::Analytics::Events::FunctionalLogger);
DEFINE_IL2CPP_ARG_TYPE(::BeatGames::Analytics::Events::FunctionalLogger*, "BeatGames.Analytics.Events", "FunctionalLogger");
