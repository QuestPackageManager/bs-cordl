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
struct __OVRProfile__State;
}
// Forward declare root types
namespace GlobalNamespace {
struct __OVRProfile__State;
}
namespace GlobalNamespace {
class OVRProfile;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__OVRProfile__State);
MARK_REF_PTR_T(::GlobalNamespace::OVRProfile);
// Type: ::State
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::OVRProfile::State
struct CORDL_TYPE __OVRProfile__State {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRProfile__State_Unwrapped
  enum struct ____OVRProfile__State_Unwrapped : int32_t {
    __E_NOT_TRIGGERED = static_cast<int32_t>(0x0),
    __E_LOADING = static_cast<int32_t>(0x1),
    __E_READY = static_cast<int32_t>(0x2),
    __E_ERROR = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRProfile__State_Unwrapped() const noexcept {
    return static_cast<____OVRProfile__State_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRProfile__State();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRProfile__State(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field ERROR value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::__OVRProfile__State const ERROR;

  /// @brief Field LOADING value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRProfile__State const LOADING;

  /// @brief Field NOT_TRIGGERED value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRProfile__State const NOT_TRIGGERED;

  /// @brief Field READY value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__OVRProfile__State const READY;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8230 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRProfile__State, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRProfile__State, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRProfile
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OVRProfile*
class CORDL_TYPE OVRProfile : public ::UnityEngine::Object {
public:
  // Declarations
  using State = ::GlobalNamespace::__OVRProfile__State;

  __declspec(property(get = get_eyeDepth)) float_t eyeDepth;

  __declspec(property(get = get_eyeHeight)) float_t eyeHeight;

  __declspec(property(get = get_id)) ::StringW id;

  __declspec(property(get = get_ipd)) float_t ipd;

  __declspec(property(get = get_locale)) ::StringW locale;

  __declspec(property(get = get_neckHeight)) float_t neckHeight;

  __declspec(property(get = get_state)) ::GlobalNamespace::__OVRProfile__State state;

  __declspec(property(get = get_userName)) ::StringW userName;

  static inline ::GlobalNamespace::OVRProfile* New_ctor();

  /// @brief Method .ctor, addr 0x3f90b80, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_eyeDepth, addr 0x3f90b0c, size 0x50, virtual false, abstract: false, final false
  inline float_t get_eyeDepth();

  /// @brief Method get_eyeHeight, addr 0x3f90abc, size 0x50, virtual false, abstract: false, final false
  inline float_t get_eyeHeight();

  /// @brief Method get_id, addr 0x3f908c8, size 0x40, virtual false, abstract: false, final false
  inline ::StringW get_id();

  /// @brief Method get_ipd, addr 0x3f90988, size 0x134, virtual false, abstract: false, final false
  inline float_t get_ipd();

  /// @brief Method get_locale, addr 0x3f90948, size 0x40, virtual false, abstract: false, final false
  inline ::StringW get_locale();

  /// @brief Method get_neckHeight, addr 0x3f90b5c, size 0x1c, virtual false, abstract: false, final false
  inline float_t get_neckHeight();

  /// @brief Method get_state, addr 0x3f90b78, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__OVRProfile__State get_state();

  /// @brief Method get_userName, addr 0x3f90908, size 0x40, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8231 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRProfile, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRProfile__State, "", "OVRProfile/State");
NEED_NO_BOX(::GlobalNamespace::OVRProfile);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRProfile*, "", "OVRProfile");
