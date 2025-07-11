#pragma once
// IWYU pragma private; include "Tweening/FloatTween.hpp"
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
// Dependencies Tweening.Tween`1<T>
namespace Tweening {
// Is value type: false
// CS Name: Tweening.FloatTween
class CORDL_TYPE FloatTween : public ::Tweening::Tween_1<float_t> {
public:
  // Declarations
  /// @brief Field Pool, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Pool,
                      put =
                          setStaticF_Pool)) ::Zenject::StaticMemoryPool_7<float_t, float_t, ::System::Action_1<float_t>*, float_t, ::GlobalNamespace::EaseType, float_t, ::Tweening::FloatTween*>* Pool;

  /// @brief Method GetValue, addr 0x44daef8, size 0x2c, virtual true, abstract: false, final false
  inline float_t GetValue(float_t t);

  static inline ::Tweening::FloatTween* New_ctor();

  static inline ::Tweening::FloatTween* New_ctor(float_t fromValue, float_t toValue, ::System::Action_1<float_t>* onUpdate, float_t duration, ::GlobalNamespace::EaseType easeType, float_t delay);

  /// @brief Method .ctor, addr 0x44dae20, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x44dae68, size 0x90, virtual false, abstract: false, final false
  inline void _ctor(float_t fromValue, float_t toValue, ::System::Action_1<float_t>* onUpdate, float_t duration, ::GlobalNamespace::EaseType easeType, float_t delay);

  static inline ::Zenject::StaticMemoryPool_7<float_t, float_t, ::System::Action_1<float_t>*, float_t, ::GlobalNamespace::EaseType, float_t, ::Tweening::FloatTween*>* getStaticF_Pool();

  static inline void setStaticF_Pool(::Zenject::StaticMemoryPool_7<float_t, float_t, ::System::Action_1<float_t>*, float_t, ::GlobalNamespace::EaseType, float_t, ::Tweening::FloatTween*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FloatTween();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FloatTween", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FloatTween(FloatTween&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FloatTween", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FloatTween(FloatTween const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18671 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Tweening::FloatTween, 0x58>, "Size mismatch!");

} // namespace Tweening
NEED_NO_BOX(::Tweening::FloatTween);
DEFINE_IL2CPP_ARG_TYPE(::Tweening::FloatTween*, "Tweening", "FloatTween");
