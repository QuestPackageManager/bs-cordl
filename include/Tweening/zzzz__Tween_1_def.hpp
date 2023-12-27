#pragma once
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
// Type: Tweening::Tween`1
// SizeInfo { instance_size: 96, native_size: 96, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Tweening {
// cpp template
template <typename T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(16098))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16099))
// CS Name: ::Tweening::Tween`1<T>*
class CORDL_TYPE Tween_1 : public ::Tweening::Tween {
public:
  // Declarations
  /// @brief Field fromValue, offset 0x48, size 0x8
  __declspec(property(get = __get_fromValue, put = __set_fromValue)) T fromValue;

  /// @brief Field toValue, offset 0x50, size 0x8
  __declspec(property(get = __get_toValue, put = __set_toValue)) T toValue;

  /// @brief Field onUpdate, offset 0x58, size 0x8
  __declspec(property(get = __get_onUpdate, put = __set_onUpdate))::System::Action_1<T>* onUpdate;

  constexpr T& __get_fromValue();

  constexpr T const& __get_fromValue() const;

  constexpr void __set_fromValue(T value);

  constexpr T& __get_toValue();

  constexpr T const& __get_toValue() const;

  constexpr void __set_toValue(T value);

  constexpr ::System::Action_1<T>*& __get_onUpdate();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<T>*> const& __get_onUpdate() const;

  constexpr void __set_onUpdate(::System::Action_1<T>* value);

  /// @brief Method OnSpawned addr 0x0 size 0xffffffffffffffff virtual false final false
  static inline void OnSpawned(T fromValue, T toValue, ::System::Action_1<T>* onUpdate, float_t duration, ::GlobalNamespace::EaseType easeType, float_t delay, ::Tweening::Tween_1<T>* t);

  /// @brief Method OnDespawned addr 0x0 size 0xffffffffffffffff virtual false final false
  static inline void OnDespawned(::Tweening::Tween_1<T>* t);

  static inline ::Tweening::Tween_1<T>* New_ctor();

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor();

  static inline ::Tweening::Tween_1<T>* New_ctor(T fromValue, T toValue, ::System::Action_1<T>* onUpdate, float_t duration, ::GlobalNamespace::EaseType easeType, float_t delay);

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor(T fromValue, T toValue, ::System::Action_1<T>* onUpdate, float_t duration, ::GlobalNamespace::EaseType easeType, float_t delay);

  /// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void Init(T fromValue, T toValue, ::System::Action_1<T>* onUpdate, float_t duration, ::GlobalNamespace::EaseType easeType, float_t delay);

  /// @brief Method Update addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void Update(float_t currentTime);

  /// @brief Method Sample addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void Sample(float_t t);

  /// @brief Method ForceOnUpdate addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void ForceOnUpdate();

  /// @brief Method GetValue addr 0x0 size 0xffffffffffffffff virtual true final false
  inline T GetValue(float_t t);

  // Ctor Parameters [CppParam { name: "", ty: "Tween_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Tween_1(Tween_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Tween_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Tween_1(Tween_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Tween_1();

public:
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
