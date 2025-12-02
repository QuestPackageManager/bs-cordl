#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRProfile.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRProfile)
namespace GlobalNamespace {
struct OVRProfile_State;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVRProfile_State;
}
namespace GlobalNamespace {
class OVRProfile;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRProfile_State);
MARK_REF_PTR_T(::GlobalNamespace::OVRProfile);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRProfile/State
struct CORDL_TYPE OVRProfile_State {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __OVRProfile_State_Unwrapped
  enum struct __OVRProfile_State_Unwrapped : int32_t {
    __E_NOT_TRIGGERED = static_cast<int32_t>(0x0),
    __E_LOADING = static_cast<int32_t>(0x1),
    __E_READY = static_cast<int32_t>(0x2),
    __E_ERROR = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __OVRProfile_State_Unwrapped() const noexcept {
    return static_cast<__OVRProfile_State_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRProfile_State();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr OVRProfile_State(int32_t value__) noexcept;

  /// @brief Field ERROR value: I32(3)
  static ::GlobalNamespace::OVRProfile_State const ERROR;

  /// @brief Field LOADING value: I32(1)
  static ::GlobalNamespace::OVRProfile_State const LOADING;

  /// @brief Field NOT_TRIGGERED value: I32(0)
  static ::GlobalNamespace::OVRProfile_State const NOT_TRIGGERED;

  /// @brief Field READY value: I32(2)
  static ::GlobalNamespace::OVRProfile_State const READY;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7625 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRProfile_State, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRProfile_State, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies UnityEngine.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRProfile
class CORDL_TYPE OVRProfile : public ::UnityEngine::Object {
public:
  // Declarations
  using State = ::GlobalNamespace::OVRProfile_State;

  __declspec(property(get = get_eyeDepth)) float_t eyeDepth;

  __declspec(property(get = get_eyeHeight)) float_t eyeHeight;

  __declspec(property(get = get_id)) ::StringW id;

  __declspec(property(get = get_ipd)) float_t ipd;

  __declspec(property(get = get_locale)) ::StringW locale;

  __declspec(property(get = get_neckHeight)) float_t neckHeight;

  __declspec(property(get = get_state)) ::GlobalNamespace::OVRProfile_State state;

  __declspec(property(get = get_userName)) ::StringW userName;

  static inline ::GlobalNamespace::OVRProfile* New_ctor();

  /// @brief Method .ctor, addr 0x5caa364, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_eyeDepth, addr 0x5caa2ec, size 0x54, virtual false, abstract: false, final false
  inline float_t get_eyeDepth();

  /// @brief Method get_eyeHeight, addr 0x5caa298, size 0x54, virtual false, abstract: false, final false
  inline float_t get_eyeHeight();

  /// @brief Method get_id, addr 0x5caa0d4, size 0x44, virtual false, abstract: false, final false
  inline ::StringW get_id();

  /// @brief Method get_ipd, addr 0x5caa1a0, size 0xf8, virtual false, abstract: false, final false
  inline float_t get_ipd();

  /// @brief Method get_locale, addr 0x5caa15c, size 0x44, virtual false, abstract: false, final false
  inline ::StringW get_locale();

  /// @brief Method get_neckHeight, addr 0x5caa340, size 0x1c, virtual false, abstract: false, final false
  inline float_t get_neckHeight();

  /// @brief Method get_state, addr 0x5caa35c, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRProfile_State get_state();

  /// @brief Method get_userName, addr 0x5caa118, size 0x44, virtual false, abstract: false, final false
  inline ::StringW get_userName();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRProfile();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRProfile", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRProfile(OVRProfile&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRProfile", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRProfile(OVRProfile const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7626 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRProfile, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRProfile_State, "", "OVRProfile/State");
NEED_NO_BOX(::GlobalNamespace::OVRProfile);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRProfile*, "", "OVRProfile");
