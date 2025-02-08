#pragma once
// IWYU pragma private; include "Unity/XR/Oculus/OculusUsages.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/XR/zzzz__InputFeatureUsage_1_def.hpp"
CORDL_MODULE_EXPORT(OculusUsages)
// Forward declare root types
namespace Unity::XR::Oculus {
class OculusUsages;
}
// Write type traits
MARK_REF_PTR_T(::Unity::XR::Oculus::OculusUsages);
// Dependencies System.Object, UnityEngine.XR.InputFeatureUsage`1<T>
namespace Unity::XR::Oculus {
// Is value type: false
// CS Name: Unity.XR.Oculus.OculusUsages
class CORDL_TYPE OculusUsages : public ::System::Object {
public:
  // Declarations
  /// @brief Field indexTouch, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_indexTouch, put = setStaticF_indexTouch)) ::UnityEngine::XR::InputFeatureUsage_1<bool> indexTouch;

  /// @brief Field thumbTouch, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_thumbTouch, put = setStaticF_thumbTouch)) ::UnityEngine::XR::InputFeatureUsage_1<bool> thumbTouch;

  /// @brief Field thumbrest, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_thumbrest, put = setStaticF_thumbrest)) ::UnityEngine::XR::InputFeatureUsage_1<bool> thumbrest;

  static inline ::UnityEngine::XR::InputFeatureUsage_1<bool> getStaticF_indexTouch();

  static inline ::UnityEngine::XR::InputFeatureUsage_1<bool> getStaticF_thumbTouch();

  static inline ::UnityEngine::XR::InputFeatureUsage_1<bool> getStaticF_thumbrest();

  static inline void setStaticF_indexTouch(::UnityEngine::XR::InputFeatureUsage_1<bool> value);

  static inline void setStaticF_thumbTouch(::UnityEngine::XR::InputFeatureUsage_1<bool> value);

  static inline void setStaticF_thumbrest(::UnityEngine::XR::InputFeatureUsage_1<bool> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OculusUsages();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OculusUsages", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OculusUsages(OculusUsages&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OculusUsages", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OculusUsages(OculusUsages const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17416 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::XR::Oculus::OculusUsages, 0x10>, "Size mismatch!");

} // namespace Unity::XR::Oculus
NEED_NO_BOX(::Unity::XR::Oculus::OculusUsages);
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::Oculus::OculusUsages*, "Unity.XR.Oculus", "OculusUsages");
