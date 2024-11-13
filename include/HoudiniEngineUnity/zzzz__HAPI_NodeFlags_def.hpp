#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HAPI_NodeFlags.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HAPI_NodeFlags)
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_NodeFlags;
}
// Write type traits
MARK_VAL_T(::HoudiniEngineUnity::HAPI_NodeFlags);
// Type: HoudiniEngineUnity::HAPI_NodeFlags
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: true
// CS Name: ::HoudiniEngineUnity::HAPI_NodeFlags
struct CORDL_TYPE HAPI_NodeFlags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __HAPI_NodeFlags_Unwrapped
  enum struct __HAPI_NodeFlags_Unwrapped : int32_t {
    __E_HAPI_NODEFLAGS_ANY = static_cast<int32_t>(0xffffffff),
    __E_HAPI_NODEFLAGS_NONE = static_cast<int32_t>(0x0),
    __E_HAPI_NODEFLAGS_DISPLAY = static_cast<int32_t>(0x1),
    __E_HAPI_NODEFLAGS_RENDER = static_cast<int32_t>(0x2),
    __E_HAPI_NODEFLAGS_TEMPLATED = static_cast<int32_t>(0x4),
    __E_HAPI_NODEFLAGS_LOCKED = static_cast<int32_t>(0x8),
    __E_HAPI_NODEFLAGS_EDITABLE = static_cast<int32_t>(0x10),
    __E_HAPI_NODEFLAGS_BYPASS = static_cast<int32_t>(0x20),
    __E_HAPI_NODEFLAGS_NETWORK = static_cast<int32_t>(0x40),
    __E_HAPI_NODEFLAGS_OBJ_GEOMETRY = static_cast<int32_t>(0x80),
    __E_HAPI_NODEFLAGS_OBJ_CAMERA = static_cast<int32_t>(0x100),
    __E_HAPI_NODEFLAGS_OBJ_LIGHT = static_cast<int32_t>(0x200),
    __E_HAPI_NODEFLAGS_OBJ_SUBNET = static_cast<int32_t>(0x400),
    __E_HAPI_NODEFLAGS_SOP_CURVE = static_cast<int32_t>(0x800),
    __E_HAPI_NODEFLAGS_SOP_GUIDE = static_cast<int32_t>(0x1000),
    __E_HAPI_NODEFLAGS_TOP_NONSCHEDULER = static_cast<int32_t>(0x2000),
    __E_HAPI_NODEFLAGS_NON_BYPASS = static_cast<int32_t>(0x4000),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __HAPI_NodeFlags_Unwrapped() const noexcept {
    return static_cast<__HAPI_NodeFlags_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr HAPI_NodeFlags();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr HAPI_NodeFlags(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field HAPI_NODEFLAGS_ANY value: static_cast<int32_t>(0xffffffff)
  static ::HoudiniEngineUnity::HAPI_NodeFlags const HAPI_NODEFLAGS_ANY;

  /// @brief Field HAPI_NODEFLAGS_BYPASS value: static_cast<int32_t>(0x20)
  static ::HoudiniEngineUnity::HAPI_NodeFlags const HAPI_NODEFLAGS_BYPASS;

  /// @brief Field HAPI_NODEFLAGS_DISPLAY value: static_cast<int32_t>(0x1)
  static ::HoudiniEngineUnity::HAPI_NodeFlags const HAPI_NODEFLAGS_DISPLAY;

  /// @brief Field HAPI_NODEFLAGS_EDITABLE value: static_cast<int32_t>(0x10)
  static ::HoudiniEngineUnity::HAPI_NodeFlags const HAPI_NODEFLAGS_EDITABLE;

  /// @brief Field HAPI_NODEFLAGS_LOCKED value: static_cast<int32_t>(0x8)
  static ::HoudiniEngineUnity::HAPI_NodeFlags const HAPI_NODEFLAGS_LOCKED;

  /// @brief Field HAPI_NODEFLAGS_NETWORK value: static_cast<int32_t>(0x40)
  static ::HoudiniEngineUnity::HAPI_NodeFlags const HAPI_NODEFLAGS_NETWORK;

  /// @brief Field HAPI_NODEFLAGS_NONE value: static_cast<int32_t>(0x0)
  static ::HoudiniEngineUnity::HAPI_NodeFlags const HAPI_NODEFLAGS_NONE;

  /// @brief Field HAPI_NODEFLAGS_NON_BYPASS value: static_cast<int32_t>(0x4000)
  static ::HoudiniEngineUnity::HAPI_NodeFlags const HAPI_NODEFLAGS_NON_BYPASS;

  /// @brief Field HAPI_NODEFLAGS_OBJ_CAMERA value: static_cast<int32_t>(0x100)
  static ::HoudiniEngineUnity::HAPI_NodeFlags const HAPI_NODEFLAGS_OBJ_CAMERA;

  /// @brief Field HAPI_NODEFLAGS_OBJ_GEOMETRY value: static_cast<int32_t>(0x80)
  static ::HoudiniEngineUnity::HAPI_NodeFlags const HAPI_NODEFLAGS_OBJ_GEOMETRY;

  /// @brief Field HAPI_NODEFLAGS_OBJ_LIGHT value: static_cast<int32_t>(0x200)
  static ::HoudiniEngineUnity::HAPI_NodeFlags const HAPI_NODEFLAGS_OBJ_LIGHT;

  /// @brief Field HAPI_NODEFLAGS_OBJ_SUBNET value: static_cast<int32_t>(0x400)
  static ::HoudiniEngineUnity::HAPI_NodeFlags const HAPI_NODEFLAGS_OBJ_SUBNET;

  /// @brief Field HAPI_NODEFLAGS_RENDER value: static_cast<int32_t>(0x2)
  static ::HoudiniEngineUnity::HAPI_NodeFlags const HAPI_NODEFLAGS_RENDER;

  /// @brief Field HAPI_NODEFLAGS_SOP_CURVE value: static_cast<int32_t>(0x800)
  static ::HoudiniEngineUnity::HAPI_NodeFlags const HAPI_NODEFLAGS_SOP_CURVE;

  /// @brief Field HAPI_NODEFLAGS_SOP_GUIDE value: static_cast<int32_t>(0x1000)
  static ::HoudiniEngineUnity::HAPI_NodeFlags const HAPI_NODEFLAGS_SOP_GUIDE;

  /// @brief Field HAPI_NODEFLAGS_TEMPLATED value: static_cast<int32_t>(0x4)
  static ::HoudiniEngineUnity::HAPI_NodeFlags const HAPI_NODEFLAGS_TEMPLATED;

  /// @brief Field HAPI_NODEFLAGS_TOP_NONSCHEDULER value: static_cast<int32_t>(0x2000)
  static ::HoudiniEngineUnity::HAPI_NodeFlags const HAPI_NODEFLAGS_TOP_NONSCHEDULER;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11650 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HAPI_NodeFlags, 0x4>, "Size mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_NodeFlags, value__) == 0x0, "Offset mismatch!");

} // namespace HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_NodeFlags, "HoudiniEngineUnity", "HAPI_NodeFlags");
