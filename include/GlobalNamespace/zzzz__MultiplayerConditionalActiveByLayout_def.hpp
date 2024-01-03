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
struct __MultiplayerConditionalActiveByLayout__Condition;
}
namespace GlobalNamespace {
class MultiplayerLayoutProvider;
}
namespace GlobalNamespace {
struct MultiplayerPlayerLayout;
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
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5195))
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __MultiplayerConditionalActiveByLayout__Condition(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __MultiplayerConditionalActiveByLayout__Condition();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field ShowIf value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__MultiplayerConditionalActiveByLayout__Condition const ShowIf;

  /// @brief Field HideIf value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__MultiplayerConditionalActiveByLayout__Condition const HideIf;

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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5233)), TypeDefinitionIndex(TypeDefinitionIndex(10225)), TypeDefinitionIndex(TypeDefinitionIndex(5195))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5196))
// CS Name: ::MultiplayerConditionalActiveByLayout*
class CORDL_TYPE MultiplayerConditionalActiveByLayout : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using Condition = ::GlobalNamespace::__MultiplayerConditionalActiveByLayout__Condition;

  /// @brief Field _condition, offset 0x18, size 0x4
  __declspec(property(get = __get__condition, put = __set__condition))::GlobalNamespace::__MultiplayerConditionalActiveByLayout__Condition _condition;

  /// @brief Field _layout, offset 0x1c, size 0x4
  __declspec(property(get = __get__layout, put = __set__layout))::GlobalNamespace::MultiplayerPlayerLayout _layout;

  /// @brief Field _layoutProvider, offset 0x20, size 0x8
  __declspec(property(get = __get__layoutProvider, put = __set__layoutProvider))::GlobalNamespace::MultiplayerLayoutProvider* _layoutProvider;

  constexpr ::GlobalNamespace::__MultiplayerConditionalActiveByLayout__Condition& __get__condition();

  constexpr ::GlobalNamespace::__MultiplayerConditionalActiveByLayout__Condition const& __get__condition() const;

  constexpr void __set__condition(::GlobalNamespace::__MultiplayerConditionalActiveByLayout__Condition value);

  constexpr ::GlobalNamespace::MultiplayerPlayerLayout& __get__layout();

  constexpr ::GlobalNamespace::MultiplayerPlayerLayout const& __get__layout() const;

  constexpr void __set__layout(::GlobalNamespace::MultiplayerPlayerLayout value);

  constexpr ::GlobalNamespace::MultiplayerLayoutProvider*& __get__layoutProvider();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerLayoutProvider*> const& __get__layoutProvider() const;

  constexpr void __set__layoutProvider(::GlobalNamespace::MultiplayerLayoutProvider* value);

  /// @brief Method Start, addr 0x22462a4, size 0xa0, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method HandlePlayersLayoutWasCalculated, addr 0x2246344, size 0x58, virtual false, abstract: false, final false
  inline void HandlePlayersLayoutWasCalculated(::GlobalNamespace::MultiplayerPlayerLayout layout, int32_t playersCount);

  static inline ::GlobalNamespace::MultiplayerConditionalActiveByLayout* New_ctor();

  /// @brief Method .ctor, addr 0x224639c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerConditionalActiveByLayout", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerConditionalActiveByLayout(MultiplayerConditionalActiveByLayout&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerConditionalActiveByLayout", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerConditionalActiveByLayout(MultiplayerConditionalActiveByLayout const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerConditionalActiveByLayout();

public:
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
