#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MultiplayerConditionalActiveByLayout_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerPlayerLayout_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MultiplayerConditionalActiveByLayout)
namespace GlobalNamespace {
class MultiplayerLayoutProvider;
}
namespace GlobalNamespace {
struct MultiplayerPlayerLayout;
}
namespace GlobalNamespace {
struct __MultiplayerConditionalActiveByLayout__Condition;
}
// Forward declare root types
namespace GlobalNamespace {
struct __MultiplayerConditionalActiveByLayout__Condition;
}
namespace GlobalNamespace {
class MultiplayerConditionalActiveByLayout;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__MultiplayerConditionalActiveByLayout__Condition);
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerConditionalActiveByLayout);
// Type: ::Condition
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::MultiplayerConditionalActiveByLayout::Condition
struct CORDL_TYPE __MultiplayerConditionalActiveByLayout__Condition {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____MultiplayerConditionalActiveByLayout__Condition_Unwrapped
  enum struct ____MultiplayerConditionalActiveByLayout__Condition_Unwrapped : int32_t {
    __E_ShowIf = static_cast<int32_t>(0x0),
    __E_HideIf = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____MultiplayerConditionalActiveByLayout__Condition_Unwrapped() const noexcept {
    return static_cast<____MultiplayerConditionalActiveByLayout__Condition_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __MultiplayerConditionalActiveByLayout__Condition();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __MultiplayerConditionalActiveByLayout__Condition(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field HideIf value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__MultiplayerConditionalActiveByLayout__Condition const HideIf;

  /// @brief Field ShowIf value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__MultiplayerConditionalActiveByLayout__Condition const ShowIf;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MultiplayerConditionalActiveByLayout__Condition, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MultiplayerConditionalActiveByLayout__Condition, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::MultiplayerConditionalActiveByLayout
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MultiplayerConditionalActiveByLayout*
class CORDL_TYPE MultiplayerConditionalActiveByLayout : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using Condition = ::GlobalNamespace::__MultiplayerConditionalActiveByLayout__Condition;

  /// @brief Field _condition, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__condition, put = __cordl_internal_set__condition))::GlobalNamespace::__MultiplayerConditionalActiveByLayout__Condition _condition;

  /// @brief Field _layout, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__layout, put = __cordl_internal_set__layout))::GlobalNamespace::MultiplayerPlayerLayout _layout;

  /// @brief Field _layoutProvider, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__layoutProvider, put = __cordl_internal_set__layoutProvider))::GlobalNamespace::MultiplayerLayoutProvider* _layoutProvider;

  /// @brief Method HandlePlayersLayoutWasCalculated, addr 0x24dbbb4, size 0x58, virtual false, abstract: false, final false
  inline void HandlePlayersLayoutWasCalculated(::GlobalNamespace::MultiplayerPlayerLayout layout, int32_t playersCount);

  static inline ::GlobalNamespace::MultiplayerConditionalActiveByLayout* New_ctor();

  /// @brief Method Start, addr 0x24dbb14, size 0xa0, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::GlobalNamespace::__MultiplayerConditionalActiveByLayout__Condition const& __cordl_internal_get__condition() const;

  constexpr ::GlobalNamespace::__MultiplayerConditionalActiveByLayout__Condition& __cordl_internal_get__condition();

  constexpr ::GlobalNamespace::MultiplayerPlayerLayout const& __cordl_internal_get__layout() const;

  constexpr ::GlobalNamespace::MultiplayerPlayerLayout& __cordl_internal_get__layout();

  constexpr ::GlobalNamespace::MultiplayerLayoutProvider*& __cordl_internal_get__layoutProvider();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerLayoutProvider*> const& __cordl_internal_get__layoutProvider() const;

  constexpr void __cordl_internal_set__condition(::GlobalNamespace::__MultiplayerConditionalActiveByLayout__Condition value);

  constexpr void __cordl_internal_set__layout(::GlobalNamespace::MultiplayerPlayerLayout value);

  constexpr void __cordl_internal_set__layoutProvider(::GlobalNamespace::MultiplayerLayoutProvider* value);

  /// @brief Method .ctor, addr 0x24dbc0c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerConditionalActiveByLayout();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerConditionalActiveByLayout", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerConditionalActiveByLayout(MultiplayerConditionalActiveByLayout&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerConditionalActiveByLayout", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerConditionalActiveByLayout(MultiplayerConditionalActiveByLayout const&) = delete;

  /// @brief Field _condition, offset: 0x18, size: 0x4, def value: None
  ::GlobalNamespace::__MultiplayerConditionalActiveByLayout__Condition ____condition;

  /// @brief Field _layout, offset: 0x1c, size: 0x4, def value: None
  ::GlobalNamespace::MultiplayerPlayerLayout ____layout;

  /// @brief Field _layoutProvider, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerLayoutProvider* ____layoutProvider;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerConditionalActiveByLayout, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerConditionalActiveByLayout, ____condition) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerConditionalActiveByLayout, ____layout) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerConditionalActiveByLayout, ____layoutProvider) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MultiplayerConditionalActiveByLayout__Condition, "", "MultiplayerConditionalActiveByLayout/Condition");
NEED_NO_BOX(::GlobalNamespace::MultiplayerConditionalActiveByLayout);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerConditionalActiveByLayout*, "", "MultiplayerConditionalActiveByLayout");
