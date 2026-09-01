#pragma once
// IWYU pragma private; include "UnityEngine\Avatar.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Avatar)
namespace System {
struct IntPtr;
}
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
MARK_REF_T(::UnityEngine::Avatar*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Avatar*, "UnityEngine", "Avatar");
// Dependencies UnityEngine.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Avatar
class CORDL_TYPE Avatar : public ::UnityEngine::Object {
public:
  // Declarations
  __declspec(property(get = get_humanDescription)) ::UnityEngine::HumanDescription humanDescription;

  __declspec(property(get = get_isHuman)) bool isHuman;

  __declspec(property(get = get_isValid)) bool isValid;

  /// @brief Method GetAxisLength, addr 0x6a46330, size 0x4c, virtual false, abstract: false, final false
  inline float_t GetAxisLength(int32_t humanId);

  /// @brief Method GetLimitSign, addr 0x6a46898, size 0x4c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetLimitSign(int32_t humanId);

  /// @brief Method GetPostRotation, addr 0x6a46504, size 0x4c, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion GetPostRotation(int32_t humanId);

  /// @brief Method GetPreRotation, addr 0x6a4640c, size 0x4c, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion GetPreRotation(int32_t humanId);

  /// @brief Method GetZYPostQ, addr 0x6a465fc, size 0xac, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion GetZYPostQ(int32_t humanId, ::UnityEngine::Quaternion parentQ, ::UnityEngine::Quaternion q);

  /// @brief Method GetZYRoll, addr 0x6a4676c, size 0x74, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion GetZYRoll(int32_t humanId, ::UnityEngine::Vector3 uvw);

  /// @brief Method Internal_GetAxisLength, addr 0x6a4637c, size 0x90, virtual false, abstract: false, final false
  inline float_t Internal_GetAxisLength(int32_t humanId);

  /// @brief Method Internal_GetAxisLength_Injected, addr 0x6a46994, size 0x44, virtual false, abstract: false, final false
  static inline float_t Internal_GetAxisLength_Injected(::System::IntPtr _unity_self, int32_t humanId);

  /// @brief Method Internal_GetLimitSign, addr 0x6a468e4, size 0xb0, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 Internal_GetLimitSign(int32_t humanId);

  /// @brief Method Internal_GetLimitSign_Injected, addr 0x6a46b48, size 0x54, virtual false, abstract: false, final false
  static inline void Internal_GetLimitSign_Injected(::System::IntPtr _unity_self, int32_t humanId, ::by_ref<::UnityEngine::Vector3> ret);

  /// @brief Method Internal_GetPostRotation, addr 0x6a46550, size 0xac, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion Internal_GetPostRotation(int32_t humanId);

  /// @brief Method Internal_GetPostRotation_Injected, addr 0x6a46a2c, size 0x54, virtual false, abstract: false, final false
  static inline void Internal_GetPostRotation_Injected(::System::IntPtr _unity_self, int32_t humanId, ::by_ref<::UnityEngine::Quaternion> ret);

  /// @brief Method Internal_GetPreRotation, addr 0x6a46458, size 0xac, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion Internal_GetPreRotation(int32_t humanId);

  /// @brief Method Internal_GetPreRotation_Injected, addr 0x6a469d8, size 0x54, virtual false, abstract: false, final false
  static inline void Internal_GetPreRotation_Injected(::System::IntPtr _unity_self, int32_t humanId, ::by_ref<::UnityEngine::Quaternion> ret);

  /// @brief Method Internal_GetZYPostQ, addr 0x6a466a8, size 0xc4, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion Internal_GetZYPostQ(int32_t humanId, ::UnityEngine::Quaternion parentQ, ::UnityEngine::Quaternion q);

  /// @brief Method Internal_GetZYPostQ_Injected, addr 0x6a46a80, size 0x6c, virtual false, abstract: false, final false
  static inline void Internal_GetZYPostQ_Injected(::System::IntPtr _unity_self, int32_t humanId, ::by_ref<::UnityEngine::Quaternion> parentQ, ::by_ref<::UnityEngine::Quaternion> q,
                                                  ::by_ref<::UnityEngine::Quaternion> ret);

  /// @brief Method Internal_GetZYRoll, addr 0x6a467e0, size 0xb8, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion Internal_GetZYRoll(int32_t humanId, ::UnityEngine::Vector3 uvw);

  /// @brief Method Internal_GetZYRoll_Injected, addr 0x6a46aec, size 0x5c, virtual false, abstract: false, final false
  static inline void Internal_GetZYRoll_Injected(::System::IntPtr _unity_self, int32_t humanId, ::by_ref<::UnityEngine::Vector3> uvw, ::by_ref<::UnityEngine::Quaternion> ret);

  static inline ::UnityEngine::Avatar* New_ctor();

  /// @brief Method SetMuscleMinMax, addr 0x6a46138, size 0xa8, virtual false, abstract: false, final false
  inline void SetMuscleMinMax(int32_t muscleId, float_t min, float_t max);

  /// @brief Method SetMuscleMinMax_Injected, addr 0x6a461e0, size 0x5c, virtual false, abstract: false, final false
  static inline void SetMuscleMinMax_Injected(::System::IntPtr _unity_self, int32_t muscleId, float_t min, float_t max);

  /// @brief Method SetParameter, addr 0x6a4623c, size 0xa0, virtual false, abstract: false, final false
  inline void SetParameter(int32_t parameterId, float_t value);

  /// @brief Method SetParameter_Injected, addr 0x6a462dc, size 0x54, virtual false, abstract: false, final false
  static inline void SetParameter_Injected(::System::IntPtr _unity_self, int32_t parameterId, float_t value);

  /// @brief Method .ctor, addr 0x6a45f6c, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_humanDescription, addr 0x6a4603c, size 0xb8, virtual false, abstract: false, final false
  inline ::UnityEngine::HumanDescription get_humanDescription();

  /// @brief Method get_humanDescription_Injected, addr 0x6a460f4, size 0x44, virtual false, abstract: false, final false
  static inline void get_humanDescription_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::HumanDescription> ret);

  /// @brief Method get_isHuman, addr 0x6a4299c, size 0x80, virtual false, abstract: false, final false
  inline bool get_isHuman();

  /// @brief Method get_isHuman_Injected, addr 0x6a46000, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_isHuman_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_isValid, addr 0x6a4291c, size 0x80, virtual false, abstract: false, final false
  inline bool get_isValid();

  /// @brief Method get_isValid_Injected, addr 0x6a45fc4, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_isValid_Injected(::System::IntPtr _unity_self);

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20231 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Avatar) == 0x18, "Size mismatch!");

} // namespace UnityEngine
