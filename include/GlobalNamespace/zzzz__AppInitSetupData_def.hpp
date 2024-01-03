#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__AppInitSetupData_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AppInitSetupData)
namespace GlobalNamespace {
struct __AppInitSetupData__RunMode;
}
// Forward declare root types
namespace GlobalNamespace {
struct __AppInitSetupData__RunMode;
}
namespace GlobalNamespace {
class AppInitSetupData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__AppInitSetupData__RunMode);
MARK_REF_PTR_T(::GlobalNamespace::AppInitSetupData);
// Type: ::RunMode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15393))
// CS Name: ::AppInitSetupData::RunMode
struct CORDL_TYPE __AppInitSetupData__RunMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____AppInitSetupData__RunMode_Unwrapped
  enum struct ____AppInitSetupData__RunMode_Unwrapped : int32_t {
    __E_Game = static_cast<int32_t>(0x0),
    __E_PlayTest = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____AppInitSetupData__RunMode_Unwrapped() const noexcept {
    return static_cast<____AppInitSetupData__RunMode_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __AppInitSetupData__RunMode(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __AppInitSetupData__RunMode();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Game value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__AppInitSetupData__RunMode const Game;

  /// @brief Field PlayTest value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__AppInitSetupData__RunMode const PlayTest;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AppInitSetupData__RunMode, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__AppInitSetupData__RunMode, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::AppInitSetupData
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15393)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15394))
// CS Name: ::AppInitSetupData*
class CORDL_TYPE AppInitSetupData : public ::System::Object {
public:
  // Declarations
  using RunMode = ::GlobalNamespace::__AppInitSetupData__RunMode;

  /// @brief Field runMode, offset 0x10, size 0x4
  __declspec(property(get = __get_runMode, put = __set_runMode))::GlobalNamespace::__AppInitSetupData__RunMode runMode;

  constexpr ::GlobalNamespace::__AppInitSetupData__RunMode& __get_runMode();

  constexpr ::GlobalNamespace::__AppInitSetupData__RunMode const& __get_runMode() const;

  constexpr void __set_runMode(::GlobalNamespace::__AppInitSetupData__RunMode value);

  static inline ::GlobalNamespace::AppInitSetupData* New_ctor();

  /// @brief Method .ctor, addr 0xe1eac0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "AppInitSetupData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AppInitSetupData(AppInitSetupData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AppInitSetupData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AppInitSetupData(AppInitSetupData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AppInitSetupData();

public:
  /// @brief Field runMode, offset: 0x10, size: 0x4, def value: None
  ::GlobalNamespace::__AppInitSetupData__RunMode ___runMode;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AppInitSetupData, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::AppInitSetupData, ___runMode) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AppInitSetupData__RunMode, "", "AppInitSetupData/RunMode");
NEED_NO_BOX(::GlobalNamespace::AppInitSetupData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AppInitSetupData*, "", "AppInitSetupData");
