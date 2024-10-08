#pragma once
// IWYU pragma private; include "Tweening/IntTween.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Tweening/zzzz__IntTween_def.hpp"
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
struct __IntTween__RoundingType;
}
// Forward declare root types
namespace Tweening {
struct __IntTween__RoundingType;
}
namespace Tweening {
class IntTween;
}
// Write type traits
MARK_VAL_T(::Tweening::__IntTween__RoundingType);
MARK_REF_PTR_T(::Tweening::IntTween);
// Type: ::RoundingType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace Tweening {
// Is value type: true
// CS Name: ::IntTween::RoundingType
struct CORDL_TYPE __IntTween__RoundingType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____IntTween__RoundingType_Unwrapped
  enum struct ____IntTween__RoundingType_Unwrapped : int32_t {
    __E_Floor = static_cast<int32_t>(0x0),
    __E_Round = static_cast<int32_t>(0x1),
    __E_Ceil = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____IntTween__RoundingType_Unwrapped() const noexcept {
    return static_cast<____IntTween__RoundingType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __IntTween__RoundingType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __IntTween__RoundingType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Ceil value: static_cast<int32_t>(0x2)
  static ::Tweening::__IntTween__RoundingType const Ceil;

  /// @brief Field Floor value: static_cast<int32_t>(0x0)
  static ::Tweening::__IntTween__RoundingType const Floor;

  /// @brief Field Round value: static_cast<int32_t>(0x1)
  static ::Tweening::__IntTween__RoundingType const Round;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18541 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Tweening::__IntTween__RoundingType, 0x4>, "Size mismatch!");

static_assert(offsetof(::Tweening::__IntTween__RoundingType, value__) == 0x0, "Offset mismatch!");

} // namespace Tweening
// Type: Tweening::IntTween
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 92, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Tweening {
// Is value type: false
// CS Name: ::Tweening::IntTween*
class CORDL_TYPE IntTween : public ::Tweening::Tween_1<int32_t> {
public:
  // Declarations
  using RoundingType = ::Tweening::__IntTween__RoundingType;

  /// @brief Field _roundingType, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get__roundingType, put = __cordl_internal_set__roundingType)) ::Tweening::__IntTween__RoundingType _roundingType;

  /// @brief Method GetValue, addr 0x4463b40, size 0x254, virtual true, abstract: false, final false
  inline int32_t GetValue(float_t t);

  static inline ::Tweening::IntTween* New_ctor();

  static inline ::Tweening::IntTween* New_ctor(int32_t fromValue, int32_t toValue, ::System::Action_1<int32_t>* onUpdate, float_t duration, ::GlobalNamespace::EaseType easeType,
                                               ::Tweening::__IntTween__RoundingType roundingType, float_t delay);

  constexpr ::Tweening::__IntTween__RoundingType const& __cordl_internal_get__roundingType() const;

  constexpr ::Tweening::__IntTween__RoundingType& __cordl_internal_get__roundingType();

  constexpr void __cordl_internal_set__roundingType(::Tweening::__IntTween__RoundingType value);

  /// @brief Method .ctor, addr 0x4463a54, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x4463a9c, size 0xa4, virtual false, abstract: false, final false
  inline void _ctor(int32_t fromValue, int32_t toValue, ::System::Action_1<int32_t>* onUpdate, float_t duration, ::GlobalNamespace::EaseType easeType,
                    ::Tweening::__IntTween__RoundingType roundingType, float_t delay);

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

  /// @brief Field _roundingType, offset: 0x58, size: 0x4, def value: None
  ::Tweening::__IntTween__RoundingType ____roundingType;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18542 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Tweening::IntTween, 0x60>, "Size mismatch!");

static_assert(offsetof(::Tweening::IntTween, ____roundingType) == 0x58, "Offset mismatch!");

} // namespace Tweening
DEFINE_IL2CPP_ARG_TYPE(::Tweening::__IntTween__RoundingType, "Tweening", "IntTween/RoundingType");
NEED_NO_BOX(::Tweening::IntTween);
DEFINE_IL2CPP_ARG_TYPE(::Tweening::IntTween*, "Tweening", "IntTween");
