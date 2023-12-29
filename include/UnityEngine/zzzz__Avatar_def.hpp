#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Avatar)
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct HumanDescription;
}
namespace UnityEngine {
struct Quaternion;
}
// Forward declare root types
namespace UnityEngine {
class Avatar;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Avatar);
// Type: UnityEngine::Avatar
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10128))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15084))
// CS Name: ::UnityEngine::Avatar*
class CORDL_TYPE Avatar : public ::UnityEngine::Object {
public:
  // Declarations
  __declspec(property(get = get_isValid)) bool isValid;

  __declspec(property(get = get_isHuman)) bool isHuman;

  __declspec(property(get = get_humanDescription))::UnityEngine::HumanDescription humanDescription;

  static inline ::UnityEngine::Avatar* New_ctor();

  /// @brief Method .ctor addr 0x2b296cc size 0x58 virtual false final false
  inline void _ctor();

  /// @brief Method get_isValid addr 0x2b29724 size 0x3c virtual false final false
  inline bool get_isValid();

  /// @brief Method get_isHuman addr 0x2b29760 size 0x3c virtual false final false
  inline bool get_isHuman();

  /// @brief Method get_humanDescription addr 0x2b2979c size 0x6c virtual false final false
  inline ::UnityEngine::HumanDescription get_humanDescription();

  /// @brief Method SetMuscleMinMax addr 0x2b2984c size 0x5c virtual false final false
  inline void SetMuscleMinMax(int32_t muscleId, float_t min, float_t max);

  /// @brief Method SetParameter addr 0x2b298a8 size 0x54 virtual false final false
  inline void SetParameter(int32_t parameterId, float_t value);

  /// @brief Method GetAxisLength addr 0x2b298fc size 0x70 virtual false final false
  inline float_t GetAxisLength(int32_t humanId);

  /// @brief Method GetPreRotation addr 0x2b299ec size 0x4c virtual false final false
  inline ::UnityEngine::Quaternion GetPreRotation(int32_t humanId);

  /// @brief Method GetPostRotation addr 0x2b29a98 size 0x4c virtual false final false
  inline ::UnityEngine::Quaternion GetPostRotation(int32_t humanId);

  /// @brief Method GetZYPostQ addr 0x2b29b44 size 0xac virtual false final false
  inline ::UnityEngine::Quaternion GetZYPostQ(int32_t humanId, ::UnityEngine::Quaternion parentQ, ::UnityEngine::Quaternion q);

  /// @brief Method GetZYRoll addr 0x2b29c68 size 0x74 virtual false final false
  inline ::UnityEngine::Quaternion GetZYRoll(int32_t humanId, ::UnityEngine::Vector3 uvw);

  /// @brief Method GetLimitSign addr 0x2b29d48 size 0x4c virtual false final false
  inline ::UnityEngine::Vector3 GetLimitSign(int32_t humanId);

  /// @brief Method Internal_GetAxisLength addr 0x2b299a8 size 0x44 virtual false final false
  inline float_t Internal_GetAxisLength(int32_t humanId);

  /// @brief Method Internal_GetPreRotation addr 0x2b29a38 size 0x60 virtual false final false
  inline ::UnityEngine::Quaternion Internal_GetPreRotation(int32_t humanId);

  /// @brief Method Internal_GetPostRotation addr 0x2b29ae4 size 0x60 virtual false final false
  inline ::UnityEngine::Quaternion Internal_GetPostRotation(int32_t humanId);

  /// @brief Method Internal_GetZYPostQ addr 0x2b29bf0 size 0x78 virtual false final false
  inline ::UnityEngine::Quaternion Internal_GetZYPostQ(int32_t humanId, ::UnityEngine::Quaternion parentQ, ::UnityEngine::Quaternion q);

  /// @brief Method Internal_GetZYRoll addr 0x2b29cdc size 0x6c virtual false final false
  inline ::UnityEngine::Quaternion Internal_GetZYRoll(int32_t humanId, ::UnityEngine::Vector3 uvw);

  /// @brief Method Internal_GetLimitSign addr 0x2b29d94 size 0x64 virtual false final false
  inline ::UnityEngine::Vector3 Internal_GetLimitSign(int32_t humanId);

  /// @brief Method get_humanDescription_Injected addr 0x2b29808 size 0x44 virtual false final false
  inline void get_humanDescription_Injected(ByRef<::UnityEngine::HumanDescription> ret);

  /// @brief Method Internal_GetPreRotation_Injected addr 0x2b29df8 size 0x54 virtual false final false
  inline void Internal_GetPreRotation_Injected(int32_t humanId, ByRef<::UnityEngine::Quaternion> ret);

  /// @brief Method Internal_GetPostRotation_Injected addr 0x2b29e4c size 0x54 virtual false final false
  inline void Internal_GetPostRotation_Injected(int32_t humanId, ByRef<::UnityEngine::Quaternion> ret);

  /// @brief Method Internal_GetZYPostQ_Injected addr 0x2b29ea0 size 0x6c virtual false final false
  inline void Internal_GetZYPostQ_Injected(int32_t humanId, ByRef<::UnityEngine::Quaternion> parentQ, ByRef<::UnityEngine::Quaternion> q, ByRef<::UnityEngine::Quaternion> ret);

  /// @brief Method Internal_GetZYRoll_Injected addr 0x2b29f0c size 0x5c virtual false final false
  inline void Internal_GetZYRoll_Injected(int32_t humanId, ByRef<::UnityEngine::Vector3> uvw, ByRef<::UnityEngine::Quaternion> ret);

  /// @brief Method Internal_GetLimitSign_Injected addr 0x2b29f68 size 0x54 virtual false final false
  inline void Internal_GetLimitSign_Injected(int32_t humanId, ByRef<::UnityEngine::Vector3> ret);

  // Ctor Parameters [CppParam { name: "", ty: "Avatar", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Avatar(Avatar&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Avatar", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Avatar(Avatar const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Avatar();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Avatar, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::Avatar);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Avatar*, "UnityEngine", "Avatar");
