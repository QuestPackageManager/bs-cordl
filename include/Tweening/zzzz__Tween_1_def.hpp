#pragma once
// IWYU pragma private; include "Tweening/Tween_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Tweening/zzzz__Tween_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Tween_1)
namespace GlobalNamespace {
struct EaseType;
}
namespace System {
template <typename T> class Action_1;
}
// Forward declare root types
namespace Tweening {
template <typename T> class Tween_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Tweening::Tween_1);
// Dependencies Tweening.Tween
namespace Tweening {
// cpp template
template <typename T>
// Is value type: false
// CS Name: Tweening.Tween`1<T>
class CORDL_TYPE Tween_1 : public ::Tweening::Tween {
public:
  // Declarations
  /// @brief Field fromValue, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_fromValue, put = __cordl_internal_set_fromValue)) T fromValue;

  /// @brief Field onUpdate, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_onUpdate, put = __cordl_internal_set_onUpdate)) ::System::Action_1<T>* onUpdate;

  /// @brief Field toValue, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_toValue, put = __cordl_internal_set_toValue)) T toValue;

  /// @brief Method ForceOnUpdate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void ForceOnUpdate();

  /// @brief Method GetValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline T GetValue(float_t t);

  /// @brief Method Init, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Init(T fromValue, T toValue, ::System::Action_1<T>* onUpdate, float_t duration, ::GlobalNamespace::EaseType easeType, float_t delay);

  static inline ::Tweening::Tween_1<T>* New_ctor();

  static inline ::Tweening::Tween_1<T>* New_ctor(T fromValue, T toValue, ::System::Action_1<T>* onUpdate, float_t duration, ::GlobalNamespace::EaseType easeType, float_t delay);

  /// @brief Method OnDespawned, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void OnDespawned(::Tweening::Tween_1<T>* t);

  /// @brief Method OnSpawned, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void OnSpawned(T fromValue, T toValue, ::System::Action_1<T>* onUpdate, float_t duration, ::GlobalNamespace::EaseType easeType, float_t delay, ::Tweening::Tween_1<T>* t);

  /// @brief Method Sample, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Sample(float_t t);

  /// @brief Method Update, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Update(float_t currentTime);

  constexpr T const& __cordl_internal_get_fromValue() const;

  constexpr T& __cordl_internal_get_fromValue();

  constexpr ::System::Action_1<T>* const& __cordl_internal_get_onUpdate() const;

  constexpr ::System::Action_1<T>*& __cordl_internal_get_onUpdate();

  constexpr T const& __cordl_internal_get_toValue() const;

  constexpr T& __cordl_internal_get_toValue();

  constexpr void __cordl_internal_set_fromValue(T value);

  constexpr void __cordl_internal_set_onUpdate(::System::Action_1<T>* value);

  constexpr void __cordl_internal_set_toValue(T value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(T fromValue, T toValue, ::System::Action_1<T>* onUpdate, float_t duration, ::GlobalNamespace::EaseType easeType, float_t delay);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Tween_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Tween_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Tween_1(Tween_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Tween_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Tween_1(Tween_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18670 };

  /// @brief Field fromValue, offset: 0x48, size: 0x8, def value: None
  T ___fromValue;

  /// @brief Field toValue, offset: 0x50, size: 0x8, def value: None
  T ___toValue;

  /// @brief Field onUpdate, offset: 0x58, size: 0x8, def value: None
  ::System::Action_1<T>* ___onUpdate;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Tweening
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Tweening::Tween_1, "Tweening", "Tween`1");
