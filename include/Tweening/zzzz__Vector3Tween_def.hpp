#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Tweening/zzzz__Tween_1_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Vector3Tween)
namespace Zenject {
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TValue> class StaticMemoryPool_7;
}
namespace UnityEngine {
struct Vector3;
}
namespace System {
template <typename T> class Action_1;
}
namespace GlobalNamespace {
struct EaseType;
}
// Forward declare root types
namespace Tweening {
class Vector3Tween;
}
// Write type traits
MARK_REF_PTR_T(::Tweening::Vector3Tween);
// Type: Tweening::Vector3Tween
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Tweening {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10249)), TypeDefinitionIndex(TypeDefinitionIndex(16099)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(16099), inst:
// 412 })} Self: TypeDefinitionIndex(TypeDefinitionIndex(16095)) CS Name: ::Tweening::Vector3Tween*
class CORDL_TYPE Vector3Tween : public ::Tweening::Tween_1<::UnityEngine::Vector3> {
public:
  // Declarations
  /// @brief Field Pool, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Pool, put = setStaticF_Pool))::Zenject::StaticMemoryPool_7<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Action_1<::UnityEngine::Vector3>*,
                                                                                                         float_t, ::GlobalNamespace::EaseType, float_t, ::Tweening::Vector3Tween*>* Pool;

  static inline void setStaticF_Pool(::Zenject::StaticMemoryPool_7<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Action_1<::UnityEngine::Vector3>*, float_t, ::GlobalNamespace::EaseType,
                                                                   float_t, ::Tweening::Vector3Tween*>* value);

  static inline ::Zenject::StaticMemoryPool_7<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Action_1<::UnityEngine::Vector3>*, float_t, ::GlobalNamespace::EaseType, float_t,
                                              ::Tweening::Vector3Tween*>*
  getStaticF_Pool();

  static inline ::Tweening::Vector3Tween* New_ctor();

  /// @brief Method .ctor addr 0x2a0deb8 size 0x48 virtual false final false
  inline void _ctor();

  static inline ::Tweening::Vector3Tween* New_ctor(::UnityEngine::Vector3 fromValue, ::UnityEngine::Vector3 toValue, ::System::Action_1<::UnityEngine::Vector3>* onUpdate, float_t duration,
                                                   ::GlobalNamespace::EaseType easeType, float_t delay);

  /// @brief Method .ctor addr 0x2a0df00 size 0xc0 virtual false final false
  inline void _ctor(::UnityEngine::Vector3 fromValue, ::UnityEngine::Vector3 toValue, ::System::Action_1<::UnityEngine::Vector3>* onUpdate, float_t duration, ::GlobalNamespace::EaseType easeType,
                    float_t delay);

  /// @brief Method GetValue addr 0x2a0dfc0 size 0x50 virtual true final false
  inline ::UnityEngine::Vector3 GetValue(float_t t);

  // Ctor Parameters [CppParam { name: "", ty: "Vector3Tween", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Vector3Tween(Vector3Tween&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Vector3Tween", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Vector3Tween(Vector3Tween const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Vector3Tween();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Tweening::Vector3Tween, 0x68>, "Size mismatch!");

} // namespace Tweening
NEED_NO_BOX(::Tweening::Vector3Tween);
DEFINE_IL2CPP_ARG_TYPE(::Tweening::Vector3Tween*, "Tweening", "Vector3Tween");
