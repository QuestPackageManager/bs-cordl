#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/SerializedVirtualizationData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SerializedVirtualizationData)
// Forward declare root types
namespace UnityEngine::UIElements {
class SerializedVirtualizationData;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::SerializedVirtualizationData);
// Type: UnityEngine.UIElements::SerializedVirtualizationData
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 44, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::SerializedVirtualizationData*
class CORDL_TYPE SerializedVirtualizationData : public ::System::Object {
public:
  // Declarations
  /// @brief Field anchorOffset, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_anchorOffset, put = __cordl_internal_set_anchorOffset)) float_t anchorOffset;

  /// @brief Field anchoredItemIndex, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_anchoredItemIndex, put = __cordl_internal_set_anchoredItemIndex)) int32_t anchoredItemIndex;

  /// @brief Field contentHeight, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_contentHeight, put = __cordl_internal_set_contentHeight)) float_t contentHeight;

  /// @brief Field contentPadding, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_contentPadding, put = __cordl_internal_set_contentPadding)) float_t contentPadding;

  /// @brief Field firstVisibleIndex, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_firstVisibleIndex, put = __cordl_internal_set_firstVisibleIndex)) int32_t firstVisibleIndex;

  /// @brief Field scrollOffset, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_scrollOffset, put = __cordl_internal_set_scrollOffset)) ::UnityEngine::Vector2 scrollOffset;

  static inline ::UnityEngine::UIElements::SerializedVirtualizationData* New_ctor();

  constexpr float_t const& __cordl_internal_get_anchorOffset() const;

  constexpr float_t& __cordl_internal_get_anchorOffset();

  constexpr int32_t const& __cordl_internal_get_anchoredItemIndex() const;

  constexpr int32_t& __cordl_internal_get_anchoredItemIndex();

  constexpr float_t const& __cordl_internal_get_contentHeight() const;

  constexpr float_t& __cordl_internal_get_contentHeight();

  constexpr float_t const& __cordl_internal_get_contentPadding() const;

  constexpr float_t& __cordl_internal_get_contentPadding();

  constexpr int32_t const& __cordl_internal_get_firstVisibleIndex() const;

  constexpr int32_t& __cordl_internal_get_firstVisibleIndex();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_scrollOffset() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get_scrollOffset();

  constexpr void __cordl_internal_set_anchorOffset(float_t value);

  constexpr void __cordl_internal_set_anchoredItemIndex(int32_t value);

  constexpr void __cordl_internal_set_contentHeight(float_t value);

  constexpr void __cordl_internal_set_contentPadding(float_t value);

  constexpr void __cordl_internal_set_firstVisibleIndex(int32_t value);

  constexpr void __cordl_internal_set_scrollOffset(::UnityEngine::Vector2 value);

  /// @brief Method .ctor, addr 0x491ea2c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SerializedVirtualizationData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SerializedVirtualizationData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SerializedVirtualizationData(SerializedVirtualizationData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SerializedVirtualizationData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SerializedVirtualizationData(SerializedVirtualizationData const&) = delete;

  /// @brief Field scrollOffset, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___scrollOffset;

  /// @brief Field firstVisibleIndex, offset: 0x18, size: 0x4, def value: None
  int32_t ___firstVisibleIndex;

  /// @brief Field contentPadding, offset: 0x1c, size: 0x4, def value: None
  float_t ___contentPadding;

  /// @brief Field contentHeight, offset: 0x20, size: 0x4, def value: None
  float_t ___contentHeight;

  /// @brief Field anchoredItemIndex, offset: 0x24, size: 0x4, def value: None
  int32_t ___anchoredItemIndex;

  /// @brief Field anchorOffset, offset: 0x28, size: 0x4, def value: None
  float_t ___anchorOffset;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5486 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::SerializedVirtualizationData, 0x30>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::SerializedVirtualizationData, ___scrollOffset) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::SerializedVirtualizationData, ___firstVisibleIndex) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::SerializedVirtualizationData, ___contentPadding) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::SerializedVirtualizationData, ___contentHeight) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::SerializedVirtualizationData, ___anchoredItemIndex) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::SerializedVirtualizationData, ___anchorOffset) == 0x28, "Offset mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::SerializedVirtualizationData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::SerializedVirtualizationData*, "UnityEngine.UIElements", "SerializedVirtualizationData");
