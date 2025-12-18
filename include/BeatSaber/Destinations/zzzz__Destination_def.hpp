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
  /// @brief Field arguments, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_arguments, put = __cordl_internal_set_arguments)) ::ArrayW<::StringW, ::Array<::StringW>*> arguments;

  /// @brief Field levelStartParameters, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_levelStartParameters,
                      put = __cordl_internal_set_levelStartParameters)) ::BeatSaber::Destinations::LevelStartDestinationParameters* levelStartParameters;

  /// @brief Field loadMenu, offset 0x29, size 0x1
  __declspec(property(get = __cordl_internal_get_loadMenu, put = __cordl_internal_set_loadMenu)) bool loadMenu;

  /// @brief Field requiresHealthWarning, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get_requiresHealthWarning, put = __cordl_internal_set_requiresHealthWarning)) bool requiresHealthWarning;

  /// @brief Field stage, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_stage, put = __cordl_internal_set_stage)) ::BeatSaber::Destinations::DestinationTarget stage;

  static inline ::BeatSaber::Destinations::Destination* New_ctor(::BeatSaber::Destinations::DestinationTarget stage, ::BeatSaber::Destinations::LevelStartDestinationParameters* levelStartDestination,
                                                                 ::ArrayW<::StringW, ::Array<::StringW>*> arguments, bool requiresHealthWarning, bool loadMenu);

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_arguments() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_arguments();

  constexpr ::BeatSaber::Destinations::LevelStartDestinationParameters* const& __cordl_internal_get_levelStartParameters() const;

  constexpr ::BeatSaber::Destinations::LevelStartDestinationParameters*& __cordl_internal_get_levelStartParameters();

  constexpr bool const& __cordl_internal_get_loadMenu() const;

  constexpr bool& __cordl_internal_get_loadMenu();

  constexpr bool const& __cordl_internal_get_requiresHealthWarning() const;

  constexpr bool& __cordl_internal_get_requiresHealthWarning();

  constexpr ::BeatSaber::Destinations::DestinationTarget const& __cordl_internal_get_stage() const;

  constexpr ::BeatSaber::Destinations::DestinationTarget& __cordl_internal_get_stage();

  constexpr void __cordl_internal_set_arguments(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set_levelStartParameters(::BeatSaber::Destinations::LevelStartDestinationParameters* value);

  constexpr void __cordl_internal_set_loadMenu(bool value);

  constexpr void __cordl_internal_set_requiresHealthWarning(bool value);

  constexpr void __cordl_internal_set_stage(::BeatSaber::Destinations::DestinationTarget value);

  /// @brief Method .ctor, addr 0x31b17dc, size 0x114, virtual false, abstract: false, final false
  inline void _ctor(::BeatSaber::Destinations::DestinationTarget stage, ::BeatSaber::Destinations::LevelStartDestinationParameters* levelStartDestination,
                    ::ArrayW<::StringW, ::Array<::StringW>*> arguments, bool requiresHealthWarning, bool loadMenu);

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22747 };

  /// @brief Field stage, offset: 0x10, size: 0x4, def value: None
  ::BeatSaber::Destinations::DestinationTarget ___stage;

  /// @brief Field levelStartParameters, offset: 0x18, size: 0x8, def value: None
  ::BeatSaber::Destinations::LevelStartDestinationParameters* ___levelStartParameters;

  /// @brief Field arguments, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___arguments;

  /// @brief Field requiresHealthWarning, offset: 0x28, size: 0x1, def value: None
  bool ___requiresHealthWarning;

  /// @brief Field loadMenu, offset: 0x29, size: 0x1, def value: None
  bool ___loadMenu;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Destinations::Destination, ___stage) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Destinations::Destination, ___levelStartParameters) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Destinations::Destination, ___arguments) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Destinations::Destination, ___requiresHealthWarning) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Destinations::Destination, ___loadMenu) == 0x29, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::Destinations::Destination, 0x30>, "Size mismatch!");

} // namespace BeatSaber::Destinations
NEED_NO_BOX(::BeatSaber::Destinations::Destination);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Destinations::Destination*, "BeatSaber.Destinations", "Destination");
