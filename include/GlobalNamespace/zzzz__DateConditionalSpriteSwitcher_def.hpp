#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DateConditionalSpriteSwitcher)
namespace GlobalNamespace {
class ConditionalSpriteSwitcher;
}
namespace UnityEngine {
class Sprite;
}
// Forward declare root types
namespace GlobalNamespace {
class DateConditionalSpriteSwitcher;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::DateConditionalSpriteSwitcher);
// Type: ::DateConditionalSpriteSwitcher
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::DateConditionalSpriteSwitcher*
class CORDL_TYPE DateConditionalSpriteSwitcher : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _conditionalSpriteSwitcher, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__conditionalSpriteSwitcher,
                      put = __cordl_internal_set__conditionalSpriteSwitcher))::UnityW<::GlobalNamespace::ConditionalSpriteSwitcher> _conditionalSpriteSwitcher;

  /// @brief Field _day, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__day, put = __cordl_internal_set__day)) int32_t _day;

  /// @brief Field _falseSprite, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__falseSprite, put = __cordl_internal_set__falseSprite))::UnityW<::UnityEngine::Sprite> _falseSprite;

  /// @brief Field _month, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__month, put = __cordl_internal_set__month)) int32_t _month;

  /// @brief Field _trueSprite, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__trueSprite, put = __cordl_internal_set__trueSprite))::UnityW<::UnityEngine::Sprite> _trueSprite;

  /// @brief Method Awake, addr 0x23d88c4, size 0xb8, virtual false, abstract: false, final false
  inline void Awake();

  static inline ::GlobalNamespace::DateConditionalSpriteSwitcher* New_ctor();

  constexpr ::UnityW<::GlobalNamespace::ConditionalSpriteSwitcher> const& __cordl_internal_get__conditionalSpriteSwitcher() const;

  constexpr ::UnityW<::GlobalNamespace::ConditionalSpriteSwitcher>& __cordl_internal_get__conditionalSpriteSwitcher();

  constexpr int32_t const& __cordl_internal_get__day() const;

  constexpr int32_t& __cordl_internal_get__day();

  constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get__falseSprite() const;

  constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get__falseSprite();

  constexpr int32_t const& __cordl_internal_get__month() const;

  constexpr int32_t& __cordl_internal_get__month();

  constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get__trueSprite() const;

  constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get__trueSprite();

  constexpr void __cordl_internal_set__conditionalSpriteSwitcher(::UnityW<::GlobalNamespace::ConditionalSpriteSwitcher> value);

  constexpr void __cordl_internal_set__day(int32_t value);

  constexpr void __cordl_internal_set__falseSprite(::UnityW<::UnityEngine::Sprite> value);

  constexpr void __cordl_internal_set__month(int32_t value);

  constexpr void __cordl_internal_set__trueSprite(::UnityW<::UnityEngine::Sprite> value);

  /// @brief Method .ctor, addr 0x23d897c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DateConditionalSpriteSwitcher();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DateConditionalSpriteSwitcher", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DateConditionalSpriteSwitcher(DateConditionalSpriteSwitcher&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DateConditionalSpriteSwitcher", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DateConditionalSpriteSwitcher(DateConditionalSpriteSwitcher const&) = delete;

  /// @brief Field _day, offset: 0x18, size: 0x4, def value: None
  int32_t ____day;

  /// @brief Field _month, offset: 0x1c, size: 0x4, def value: None
  int32_t ____month;

  /// @brief Field _falseSprite, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Sprite> ____falseSprite;

  /// @brief Field _trueSprite, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Sprite> ____trueSprite;

  /// @brief Field _conditionalSpriteSwitcher, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ConditionalSpriteSwitcher> ____conditionalSpriteSwitcher;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DateConditionalSpriteSwitcher, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::DateConditionalSpriteSwitcher, ____day) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DateConditionalSpriteSwitcher, ____month) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DateConditionalSpriteSwitcher, ____falseSprite) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DateConditionalSpriteSwitcher, ____trueSprite) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DateConditionalSpriteSwitcher, ____conditionalSpriteSwitcher) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::DateConditionalSpriteSwitcher);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DateConditionalSpriteSwitcher*, "", "DateConditionalSpriteSwitcher");
