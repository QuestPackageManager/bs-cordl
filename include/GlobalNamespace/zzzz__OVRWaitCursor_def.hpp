#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
CORDL_MODULE_EXPORT(OVRWaitCursor)
// Forward declare root types
namespace GlobalNamespace {
class OVRWaitCursor;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRWaitCursor);
// Type: ::OVRWaitCursor
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OVRWaitCursor*
class CORDL_TYPE OVRWaitCursor : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field rotateSpeeds, offset 0x18, size 0xc
  __declspec(property(get = __cordl_internal_get_rotateSpeeds, put = __cordl_internal_set_rotateSpeeds))::UnityEngine::Vector3 rotateSpeeds;

  static inline ::GlobalNamespace::OVRWaitCursor* New_ctor();

  /// @brief Method Update, addr 0x28b740c, size 0x5c, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_rotateSpeeds() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_rotateSpeeds();

  constexpr void __cordl_internal_set_rotateSpeeds(::UnityEngine::Vector3 value);

  /// @brief Method .ctor, addr 0x28b7468, size 0x14, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRWaitCursor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRWaitCursor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRWaitCursor(OVRWaitCursor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRWaitCursor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRWaitCursor(OVRWaitCursor const&) = delete;

  /// @brief Field rotateSpeeds, offset: 0x18, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___rotateSpeeds;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRWaitCursor, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRWaitCursor, ___rotateSpeeds) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRWaitCursor);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRWaitCursor*, "", "OVRWaitCursor");
