#pragma once
// IWYU pragma private; include "UnityEngine/Avatar.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Avatar)
namespace UnityEngine {
struct HumanDescription;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
class Avatar;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Avatar);
// Type: UnityEngine::Avatar
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::Avatar*
class CORDL_TYPE Avatar : public ::UnityEngine::Object {
public:
  // Declarations
  __declspec(property(get = get_humanDescription)) ::UnityEngine::HumanDescription humanDescription;

  __declspec(property(get = get_isHuman)) bool isHuman;

  __declspec(property(get = get_isValid)) bool isValid;

  /// @brief Method GetAxisLength, addr 0x47f13a8, size 0x70, virtual false, abstract: false, final false
  inline float_t GetAxisLength(int32_t humanId);

  /// @brief Method GetLimitSign, addr 0x47f17b8, size 0x4c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetLimitSign(int32_t humanId);

  /// @brief Method GetPostRotation, addr 0x47f1508, size 0x4c, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion GetPostRotation(int32_t humanId);

  /// @brief Method GetPreRotation, addr 0x47f145c, size 0x4c, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion GetPreRotation(int32_t humanId);

  /// @brief Method GetZYPostQ, addr 0x47f15b4, size 0xac, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion GetZYPostQ(int32_t humanId, ::UnityEngine::Quaternion parentQ, ::UnityEngine::Quaternion q);

  /// @brief Method GetZYRoll, addr 0x47f16d8, size 0x74, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion GetZYRoll(int32_t humanId, ::UnityEngine::Vector3 uvw);

  /// @brief Method Internal_GetAxisLength, addr 0x47f1418, size 0x44, virtual false, abstract: false, final false
  inline float_t Internal_GetAxisLength(int32_t humanId);

  /// @brief Method Internal_GetLimitSign, addr 0x47f1804, size 0x64, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 Internal_GetLimitSign(int32_t humanId);

  /// @brief Method Internal_GetLimitSign_Injected, addr 0x47f19d8, size 0x54, virtual false, abstract: false, final false
  inline void Internal_GetLimitSign_Injected(int32_t humanId, ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method Internal_GetPostRotation, addr 0x47f1554, size 0x60, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion Internal_GetPostRotation(int32_t humanId);

  /// @brief Method Internal_GetPostRotation_Injected, addr 0x47f18bc, size 0x54, virtual false, abstract: false, final false
  inline void Internal_GetPostRotation_Injected(int32_t humanId, ByRef<::UnityEngine::Quaternion> ret);

  /// @brief Method Internal_GetPreRotation, addr 0x47f14a8, size 0x60, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion Internal_GetPreRotation(int32_t humanId);

  /// @brief Method Internal_GetPreRotation_Injected, addr 0x47f1868, size 0x54, virtual false, abstract: false, final false
  inline void Internal_GetPreRotation_Injected(int32_t humanId, ByRef<::UnityEngine::Quaternion> ret);

  /// @brief Method Internal_GetZYPostQ, addr 0x47f1660, size 0x78, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion Internal_GetZYPostQ(int32_t humanId, ::UnityEngine::Quaternion parentQ, ::UnityEngine::Quaternion q);

  /// @brief Method Internal_GetZYPostQ_Injected, addr 0x47f1910, size 0x6c, virtual false, abstract: false, final false
  inline void Internal_GetZYPostQ_Injected(int32_t humanId, ByRef<::UnityEngine::Quaternion> parentQ, ByRef<::UnityEngine::Quaternion> q, ByRef<::UnityEngine::Quaternion> ret);

  /// @brief Method Internal_GetZYRoll, addr 0x47f174c, size 0x6c, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion Internal_GetZYRoll(int32_t humanId, ::UnityEngine::Vector3 uvw);

  /// @brief Method Internal_GetZYRoll_Injected, addr 0x47f197c, size 0x5c, virtual false, abstract: false, final false
  inline void Internal_GetZYRoll_Injected(int32_t humanId, ByRef<::UnityEngine::Vector3> uvw, ByRef<::UnityEngine::Quaternion> ret);

  static inline ::UnityEngine::Avatar* New_ctor();

  /// @brief Method SetMuscleMinMax, addr 0x47f12f8, size 0x5c, virtual false, abstract: false, final false
  inline void SetMuscleMinMax(int32_t muscleId, float_t min, float_t max);

  /// @brief Method SetParameter, addr 0x47f1354, size 0x54, virtual false, abstract: false, final false
  inline void SetParameter(int32_t parameterId, float_t value);

  /// @brief Method .ctor, addr 0x47f11f0, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_humanDescription, addr 0x47f1248, size 0x6c, virtual false, abstract: false, final false
  inline ::UnityEngine::HumanDescription get_humanDescription();

  /// @brief Method get_humanDescription_Injected, addr 0x47f12b4, size 0x44, virtual false, abstract: false, final false
  inline void get_humanDescription_Injected(ByRef<::UnityEngine::HumanDescription> ret);

  /// @brief Method get_isHuman, addr 0x47efd4c, size 0x3c, virtual false, abstract: false, final false
  inline bool get_isHuman();

  /// @brief Method get_isValid, addr 0x47efd10, size 0x3c, virtual false, abstract: false, final false
  inline bool get_isValid();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Avatar();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Avatar", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Avatar(Avatar&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Avatar", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Avatar(Avatar const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16833 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Avatar, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::Avatar);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Avatar*, "UnityEngine", "Avatar");
