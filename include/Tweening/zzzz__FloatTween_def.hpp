#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Tweening/zzzz__Tween_1_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(FloatTween)
namespace GlobalNamespace {
struct EaseType;
}
namespace System {
template <typename T> class Action_1;
}
namespace Zenject {
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TValue> class StaticMemoryPool_7;
}
// Forward declare root types
namespace Tweening {
class FloatTween;
}
// Write type traits
MARK_REF_PTR_T(::Tweening::FloatTween);
// Type: Tweening::FloatTween
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Tweening {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(16099)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(16099), inst: 391 })]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16093))
// CS Name: ::Tweening::FloatTween*
class CORDL_TYPE FloatTween : public ::Tweening::Tween_1<float_t> {
public:
  // Declarations
  /// @brief Field Pool, offset 0xffffffff, size 0x8
  static __declspec(
      property(get = getStaticF_Pool,
               put = setStaticF_Pool))::Zenject::StaticMemoryPool_7<float_t, float_t, ::System::Action_1<float_t>*, float_t, ::GlobalNamespace::EaseType, float_t, ::Tweening::FloatTween*>* Pool;

  static inline void setStaticF_Pool(::Zenject::StaticMemoryPool_7<float_t, float_t, ::System::Action_1<float_t>*, float_t, ::GlobalNamespace::EaseType, float_t, ::Tweening::FloatTween*>* value);

  static inline ::Zenject::StaticMemoryPool_7<float_t, float_t, ::System::Action_1<float_t>*, float_t, ::GlobalNamespace::EaseType, float_t, ::Tweening::FloatTween*>* getStaticF_Pool();

  static inline ::Tweening::FloatTween* New_ctor();

  /// @brief Method .ctor, addr 0x2a0da38, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Tweening::FloatTween* New_ctor(float_t fromValue, float_t toValue, ::System::Action_1<float_t>* onUpdate, float_t duration, ::GlobalNamespace::EaseType easeType, float_t delay);

  /// @brief Method .ctor, addr 0x2a0da80, size 0x90, virtual false, abstract: false, final false
  inline void _ctor(float_t fromValue, float_t toValue, ::System::Action_1<float_t>* onUpdate, float_t duration, ::GlobalNamespace::EaseType easeType, float_t delay);

  /// @brief Method GetValue, addr 0x2a0db10, size 0x2c, virtual true, abstract: false, final false
  inline float_t GetValue(float_t t);

  // Ctor Parameters [CppParam { name: "", ty: "FloatTween", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FloatTween(FloatTween&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FloatTween", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FloatTween(FloatTween const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FloatTween();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Tweening::FloatTween, 0x58>, "Size mismatch!");

} // namespace Tweening
NEED_NO_BOX(::Tweening::FloatTween);
DEFINE_IL2CPP_ARG_TYPE(::Tweening::FloatTween*, "Tweening", "FloatTween");
