#pragma once
// IWYU pragma private; include "Tweening/IntTween.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Tweening/zzzz__Tween_1_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IntTween)
namespace GlobalNamespace {
struct EaseType;
}
namespace System {
template <typename T> class Action_1;
}
namespace Tweening {
struct IntTween_RoundingType;
}
// Forward declare root types
namespace Tweening {
struct IntTween_RoundingType;
}
namespace Tweening {
class IntTween;
}
// Write type traits
MARK_VAL_T(::Tweening::IntTween_RoundingType);
MARK_REF_PTR_T(::Tweening::IntTween);
// Dependencies
namespace Tweening {
// Is value type: true
// CS Name: Tweening.IntTween/RoundingType
struct CORDL_TYPE IntTween_RoundingType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __IntTween_RoundingType_Unwrapped
  enum struct __IntTween_RoundingType_Unwrapped : int32_t {
    __E_Floor = static_cast<int32_t>(0x0),
    __E_Round = static_cast<int32_t>(0x1),
    __E_Ceil = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __IntTween_RoundingType_Unwrapped() const noexcept {
    return static_cast<__IntTween_RoundingType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr IntTween_RoundingType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr IntTween_RoundingType(int32_t value__) noexcept;

  /// @brief Field Ceil value: I32(2)
  static ::Tweening::IntTween_RoundingType const Ceil;

  /// @brief Field Floor value: I32(0)
  static ::Tweening::IntTween_RoundingType const Floor;

  /// @brief Field Round value: I32(1)
  static ::Tweening::IntTween_RoundingType const Round;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22611 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Tweening::IntTween_RoundingType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Tweening::IntTween_RoundingType, 0x4>, "Size mismatch!");

} // namespace Tweening
// Dependencies Tweening.IntTween::RoundingType, Tweening.Tween`1<T>
namespace Tweening {
// Is value type: false
// CS Name: Tweening.IntTween
class CORDL_TYPE IntTween : public ::Tweening::Tween_1<int32_t> {
public:
  // Declarations
  using RoundingType = ::Tweening::IntTween_RoundingType;

  /// @brief Field _roundingType, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get__roundingType, put = __cordl_internal_set__roundingType)) ::Tweening::IntTween_RoundingType _roundingType;

  /// @brief Method GetValue, addr 0x622a088, size 0x28c, virtual true, abstract: false, final false
  inline int32_t GetValue(float_t t);

  static inline ::Tweening::IntTween* New_ctor();

  static inline ::Tweening::IntTween* New_ctor(int32_t fromValue, int32_t toValue, ::System::Action_1<int32_t>* onUpdate, float_t duration, ::GlobalNamespace::EaseType easeType,
                                               ::Tweening::IntTween_RoundingType roundingType, float_t delay);

  constexpr ::Tweening::IntTween_RoundingType const& __cordl_internal_get__roundingType() const;

  constexpr ::Tweening::IntTween_RoundingType& __cordl_internal_get__roundingType();

  constexpr void __cordl_internal_set__roundingType(::Tweening::IntTween_RoundingType value);

  /// @brief Method .ctor, addr 0x6229f9c, size 0x54, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x6229ff0, size 0x98, virtual false, abstract: false, final false
  inline void _ctor(int32_t fromValue, int32_t toValue, ::System::Action_1<int32_t>* onUpdate, float_t duration, ::GlobalNamespace::EaseType easeType, ::Tweening::IntTween_RoundingType roundingType,
                    float_t delay);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IntTween();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IntTween", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IntTween(IntTween&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IntTween", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IntTween(IntTween const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22612 };

  /// @brief Field _roundingType, offset: 0x58, size: 0x4, def value: None
  ::Tweening::IntTween_RoundingType ____roundingType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Tweening::IntTween, ____roundingType) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Tweening::IntTween, 0x60>, "Size mismatch!");

} // namespace Tweening
DEFINE_IL2CPP_ARG_TYPE(::Tweening::IntTween_RoundingType, "Tweening", "IntTween/RoundingType");
NEED_NO_BOX(::Tweening::IntTween);
DEFINE_IL2CPP_ARG_TYPE(::Tweening::IntTween*, "Tweening", "IntTween");
