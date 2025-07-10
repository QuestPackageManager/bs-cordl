#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerConditionalActiveByLayout.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MultiplayerPlayerLayout_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MultiplayerConditionalActiveByLayout)
namespace GlobalNamespace {
struct MultiplayerConditionalActiveByLayout_Condition;
}
namespace GlobalNamespace {
class MultiplayerLayoutProvider;
}
namespace GlobalNamespace {
struct MultiplayerPlayerLayout;
}
// Forward declare root types
namespace GlobalNamespace {
struct MultiplayerConditionalActiveByLayout_Condition;
}
namespace GlobalNamespace {
class MultiplayerConditionalActiveByLayout;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MultiplayerConditionalActiveByLayout_Condition);
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerConditionalActiveByLayout);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: MultiplayerConditionalActiveByLayout/Condition
struct CORDL_TYPE MultiplayerConditionalActiveByLayout_Condition {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __MultiplayerConditionalActiveByLayout_Condition_Unwrapped
  enum struct __MultiplayerConditionalActiveByLayout_Condition_Unwrapped : int32_t {
    __E_ShowIf = static_cast<int32_t>(0x0),
    __E_HideIf = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __MultiplayerConditionalActiveByLayout_Condition_Unwrapped() const noexcept {
    return static_cast<__MultiplayerConditionalActiveByLayout_Condition_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerConditionalActiveByLayout_Condition();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr MultiplayerConditionalActiveByLayout_Condition(int32_t value__) noexcept;

  /// @brief Field HideIf value: I32(1)
  static ::GlobalNamespace::MultiplayerConditionalActiveByLayout_Condition const HideIf;

  /// @brief Field ShowIf value: I32(0)
  static ::GlobalNamespace::MultiplayerConditionalActiveByLayout_Condition const ShowIf;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4558 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MultiplayerConditionalActiveByLayout_Condition, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerConditionalActiveByLayout_Condition, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies MultiplayerConditionalActiveByLayout::Condition, MultiplayerPlayerLayout, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: MultiplayerConditionalActiveByLayout
class CORDL_TYPE MultiplayerConditionalActiveByLayout : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using Condition = ::GlobalNamespace::MultiplayerConditionalActiveByLayout_Condition;

  /// @brief Field _condition, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__condition, put = __cordl_internal_set__condition)) ::GlobalNamespace::MultiplayerConditionalActiveByLayout_Condition _condition;

  /// @brief Field _layout, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get__layout, put = __cordl_internal_set__layout)) ::GlobalNamespace::MultiplayerPlayerLayout _layout;

  /// @brief Field _layoutProvider, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__layoutProvider, put = __cordl_internal_set__layoutProvider)) ::GlobalNamespace::MultiplayerLayoutProvider* _layoutProvider;

  /// @brief Method HandlePlayersLayoutWasCalculated, addr 0x3bce018, size 0x58, virtual false, abstract: false, final false
  inline void HandlePlayersLayoutWasCalculated(::GlobalNamespace::MultiplayerPlayerLayout layout, int32_t playersCount);

  static inline ::GlobalNamespace::MultiplayerConditionalActiveByLayout* New_ctor();

  /// @brief Method Start, addr 0x3bcdf7c, size 0x9c, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::GlobalNamespace::MultiplayerConditionalActiveByLayout_Condition const& __cordl_internal_get__condition() const;

  constexpr ::GlobalNamespace::MultiplayerConditionalActiveByLayout_Condition& __cordl_internal_get__condition();

  constexpr ::GlobalNamespace::MultiplayerPlayerLayout const& __cordl_internal_get__layout() const;

  constexpr ::GlobalNamespace::MultiplayerPlayerLayout& __cordl_internal_get__layout();

  constexpr ::GlobalNamespace::MultiplayerLayoutProvider* const& __cordl_internal_get__layoutProvider() const;

  constexpr ::GlobalNamespace::MultiplayerLayoutProvider*& __cordl_internal_get__layoutProvider();

  constexpr void __cordl_internal_set__condition(::GlobalNamespace::MultiplayerConditionalActiveByLayout_Condition value);

  constexpr void __cordl_internal_set__layout(::GlobalNamespace::MultiplayerPlayerLayout value);

  constexpr void __cordl_internal_set__layoutProvider(::GlobalNamespace::MultiplayerLayoutProvider* value);

  /// @brief Method .ctor, addr 0x3bce070, size 0x8, virtual false, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4559 };

  /// @brief Field _condition, offset: 0x20, size: 0x4, def value: None
  ::GlobalNamespace::MultiplayerConditionalActiveByLayout_Condition ____condition;

  /// @brief Field _layout, offset: 0x24, size: 0x4, def value: None
  ::GlobalNamespace::MultiplayerPlayerLayout ____layout;

  /// @brief Field _layoutProvider, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerLayoutProvider* ____layoutProvider;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MultiplayerConditionalActiveByLayout, ____condition) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerConditionalActiveByLayout, ____layout) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerConditionalActiveByLayout, ____layoutProvider) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerConditionalActiveByLayout, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerConditionalActiveByLayout_Condition, "", "MultiplayerConditionalActiveByLayout/Condition");
NEED_NO_BOX(::GlobalNamespace::MultiplayerConditionalActiveByLayout);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerConditionalActiveByLayout*, "", "MultiplayerConditionalActiveByLayout");
