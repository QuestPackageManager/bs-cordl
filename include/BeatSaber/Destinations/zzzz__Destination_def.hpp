#pragma once
// IWYU pragma private; include "BeatSaber/Destinations/Destination.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatSaber/Destinations/zzzz__DestinationTarget_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(Destination)
namespace BeatSaber::Destinations {
struct DestinationTarget;
}
namespace BeatSaber::Destinations {
class LevelStartDestinationParameters;
}
// Forward declare root types
namespace BeatSaber::Destinations {
class Destination;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::Destinations::Destination);
// Dependencies BeatSaber.Destinations.DestinationTarget, System.Object
namespace BeatSaber::Destinations {
// Is value type: false
// CS Name: BeatSaber.Destinations.Destination
class CORDL_TYPE Destination : public ::System::Object {
public:
  // Declarations
  /// @brief Field _arguments, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__arguments, put = __cordl_internal_set__arguments)) ::ArrayW<::StringW, ::Array<::StringW>*> _arguments;

  /// @brief Field _levelStartParameters, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__levelStartParameters,
                      put = __cordl_internal_set__levelStartParameters)) ::BeatSaber::Destinations::LevelStartDestinationParameters* _levelStartParameters;

  /// @brief Field _requiresHealthWarning, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get__requiresHealthWarning, put = __cordl_internal_set__requiresHealthWarning)) bool _requiresHealthWarning;

  /// @brief Field _stage, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__stage, put = __cordl_internal_set__stage)) ::BeatSaber::Destinations::DestinationTarget _stage;

  __declspec(property(get = get_arguments)) ::ArrayW<::StringW, ::Array<::StringW>*> arguments;

  __declspec(property(get = get_levelStartParameters)) ::BeatSaber::Destinations::LevelStartDestinationParameters* levelStartParameters;

  __declspec(property(get = get_requiresHealthWarning)) bool requiresHealthWarning;

  __declspec(property(get = get_stage)) ::BeatSaber::Destinations::DestinationTarget stage;

  static inline ::BeatSaber::Destinations::Destination* New_ctor(::BeatSaber::Destinations::DestinationTarget stage, ::BeatSaber::Destinations::LevelStartDestinationParameters* levelStartDestination,
                                                                 ::ArrayW<::StringW, ::Array<::StringW>*> arguments, bool requiresHealthWarning);

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get__arguments() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get__arguments();

  constexpr ::BeatSaber::Destinations::LevelStartDestinationParameters* const& __cordl_internal_get__levelStartParameters() const;

  constexpr ::BeatSaber::Destinations::LevelStartDestinationParameters*& __cordl_internal_get__levelStartParameters();

  constexpr bool const& __cordl_internal_get__requiresHealthWarning() const;

  constexpr bool& __cordl_internal_get__requiresHealthWarning();

  constexpr ::BeatSaber::Destinations::DestinationTarget const& __cordl_internal_get__stage() const;

  constexpr ::BeatSaber::Destinations::DestinationTarget& __cordl_internal_get__stage();

  constexpr void __cordl_internal_set__arguments(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set__levelStartParameters(::BeatSaber::Destinations::LevelStartDestinationParameters* value);

  constexpr void __cordl_internal_set__requiresHealthWarning(bool value);

  constexpr void __cordl_internal_set__stage(::BeatSaber::Destinations::DestinationTarget value);

  /// @brief Method .ctor, addr 0x3181ac4, size 0x100, virtual false, abstract: false, final false
  inline void _ctor(::BeatSaber::Destinations::DestinationTarget stage, ::BeatSaber::Destinations::LevelStartDestinationParameters* levelStartDestination,
                    ::ArrayW<::StringW, ::Array<::StringW>*> arguments, bool requiresHealthWarning);

  /// @brief Method get_arguments, addr 0x3181ab4, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> get_arguments();

  /// @brief Method get_levelStartParameters, addr 0x3181aac, size 0x8, virtual false, abstract: false, final false
  inline ::BeatSaber::Destinations::LevelStartDestinationParameters* get_levelStartParameters();

  /// @brief Method get_requiresHealthWarning, addr 0x3181abc, size 0x8, virtual false, abstract: false, final false
  inline bool get_requiresHealthWarning();

  /// @brief Method get_stage, addr 0x3181aa4, size 0x8, virtual false, abstract: false, final false
  inline ::BeatSaber::Destinations::DestinationTarget get_stage();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Destination();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Destination", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Destination(Destination&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Destination", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Destination(Destination const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22658 };

  /// @brief Field _stage, offset: 0x10, size: 0x4, def value: None
  ::BeatSaber::Destinations::DestinationTarget ____stage;

  /// @brief Field _levelStartParameters, offset: 0x18, size: 0x8, def value: None
  ::BeatSaber::Destinations::LevelStartDestinationParameters* ____levelStartParameters;

  /// @brief Field _arguments, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ____arguments;

  /// @brief Field _requiresHealthWarning, offset: 0x28, size: 0x1, def value: None
  bool ____requiresHealthWarning;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Destinations::Destination, ____stage) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Destinations::Destination, ____levelStartParameters) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Destinations::Destination, ____arguments) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Destinations::Destination, ____requiresHealthWarning) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::Destinations::Destination, 0x30>, "Size mismatch!");

} // namespace BeatSaber::Destinations
NEED_NO_BOX(::BeatSaber::Destinations::Destination);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Destinations::Destination*, "BeatSaber.Destinations", "Destination");
