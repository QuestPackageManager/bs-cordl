#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/DynamicAtlasSettings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__DynamicAtlasFiltersInternal_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DynamicAtlasSettings)
namespace UnityEngine::UIElements {
class DynamicAtlasCustomFilter;
}
namespace UnityEngine::UIElements {
struct DynamicAtlasFilters;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class DynamicAtlasSettings;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::DynamicAtlasSettings);
// Type: UnityEngine.UIElements::DynamicAtlasSettings
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::DynamicAtlasSettings*
class CORDL_TYPE DynamicAtlasSettings : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_activeFilters, put = set_activeFilters))::UnityEngine::UIElements::DynamicAtlasFilters activeFilters;

  __declspec(property(get = get_customFilter, put = set_customFilter))::UnityEngine::UIElements::DynamicAtlasCustomFilter* customFilter;

  /// @brief Field m_ActiveFilters, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ActiveFilters, put = __cordl_internal_set_m_ActiveFilters))::UnityEngine::UIElements::DynamicAtlasFiltersInternal m_ActiveFilters;

  /// @brief Field m_CustomFilter, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CustomFilter, put = __cordl_internal_set_m_CustomFilter))::UnityEngine::UIElements::DynamicAtlasCustomFilter* m_CustomFilter;

  /// @brief Field m_MaxAtlasSize, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MaxAtlasSize, put = __cordl_internal_set_m_MaxAtlasSize)) int32_t m_MaxAtlasSize;

  /// @brief Field m_MaxSubTextureSize, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MaxSubTextureSize, put = __cordl_internal_set_m_MaxSubTextureSize)) int32_t m_MaxSubTextureSize;

  /// @brief Field m_MinAtlasSize, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MinAtlasSize, put = __cordl_internal_set_m_MinAtlasSize)) int32_t m_MinAtlasSize;

  __declspec(property(get = get_maxAtlasSize, put = set_maxAtlasSize)) int32_t maxAtlasSize;

  __declspec(property(get = get_maxSubTextureSize, put = set_maxSubTextureSize)) int32_t maxSubTextureSize;

  __declspec(property(get = get_minAtlasSize, put = set_minAtlasSize)) int32_t minAtlasSize;

  static inline ::UnityEngine::UIElements::DynamicAtlasSettings* New_ctor();

  constexpr ::UnityEngine::UIElements::DynamicAtlasFiltersInternal const& __cordl_internal_get_m_ActiveFilters() const;

  constexpr ::UnityEngine::UIElements::DynamicAtlasFiltersInternal& __cordl_internal_get_m_ActiveFilters();

  constexpr ::UnityEngine::UIElements::DynamicAtlasCustomFilter*& __cordl_internal_get_m_CustomFilter();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::DynamicAtlasCustomFilter*> const& __cordl_internal_get_m_CustomFilter() const;

  constexpr int32_t const& __cordl_internal_get_m_MaxAtlasSize() const;

  constexpr int32_t& __cordl_internal_get_m_MaxAtlasSize();

  constexpr int32_t const& __cordl_internal_get_m_MaxSubTextureSize() const;

  constexpr int32_t& __cordl_internal_get_m_MaxSubTextureSize();

  constexpr int32_t const& __cordl_internal_get_m_MinAtlasSize() const;

  constexpr int32_t& __cordl_internal_get_m_MinAtlasSize();

  constexpr void __cordl_internal_set_m_ActiveFilters(::UnityEngine::UIElements::DynamicAtlasFiltersInternal value);

  constexpr void __cordl_internal_set_m_CustomFilter(::UnityEngine::UIElements::DynamicAtlasCustomFilter* value);

  constexpr void __cordl_internal_set_m_MaxAtlasSize(int32_t value);

  constexpr void __cordl_internal_set_m_MaxSubTextureSize(int32_t value);

  constexpr void __cordl_internal_set_m_MinAtlasSize(int32_t value);

  /// @brief Method .ctor, addr 0x35ad7d8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_activeFilters, addr 0x35ad730, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::DynamicAtlasFilters get_activeFilters();

  /// @brief Method get_customFilter, addr 0x35ad748, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::DynamicAtlasCustomFilter* get_customFilter();

  /// @brief Method get_defaultFilters, addr 0x35ad740, size 0x8, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::DynamicAtlasFilters get_defaultFilters();

  /// @brief Method get_defaults, addr 0x35ad758, size 0x80, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::DynamicAtlasSettings* get_defaults();

  /// @brief Method get_maxAtlasSize, addr 0x35ad710, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_maxAtlasSize();

  /// @brief Method get_maxSubTextureSize, addr 0x35ad720, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_maxSubTextureSize();

  /// @brief Method get_minAtlasSize, addr 0x35ad700, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_minAtlasSize();

  /// @brief Method set_activeFilters, addr 0x35ad738, size 0x8, virtual false, abstract: false, final false
  inline void set_activeFilters(::UnityEngine::UIElements::DynamicAtlasFilters value);

  /// @brief Method set_customFilter, addr 0x35ad750, size 0x8, virtual false, abstract: false, final false
  inline void set_customFilter(::UnityEngine::UIElements::DynamicAtlasCustomFilter* value);

  /// @brief Method set_maxAtlasSize, addr 0x35ad718, size 0x8, virtual false, abstract: false, final false
  inline void set_maxAtlasSize(int32_t value);

  /// @brief Method set_maxSubTextureSize, addr 0x35ad728, size 0x8, virtual false, abstract: false, final false
  inline void set_maxSubTextureSize(int32_t value);

  /// @brief Method set_minAtlasSize, addr 0x35ad708, size 0x8, virtual false, abstract: false, final false
  inline void set_minAtlasSize(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DynamicAtlasSettings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DynamicAtlasSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DynamicAtlasSettings(DynamicAtlasSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DynamicAtlasSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DynamicAtlasSettings(DynamicAtlasSettings const&) = delete;

  /// @brief Field m_MinAtlasSize, offset: 0x10, size: 0x4, def value: None
  int32_t ___m_MinAtlasSize;

  /// @brief Field m_MaxAtlasSize, offset: 0x14, size: 0x4, def value: None
  int32_t ___m_MaxAtlasSize;

  /// @brief Field m_MaxSubTextureSize, offset: 0x18, size: 0x4, def value: None
  int32_t ___m_MaxSubTextureSize;

  /// @brief Field m_ActiveFilters, offset: 0x1c, size: 0x4, def value: None
  ::UnityEngine::UIElements::DynamicAtlasFiltersInternal ___m_ActiveFilters;

  /// @brief Field m_CustomFilter, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::UIElements::DynamicAtlasCustomFilter* ___m_CustomFilter;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::DynamicAtlasSettings, 0x28>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DynamicAtlasSettings, ___m_MinAtlasSize) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DynamicAtlasSettings, ___m_MaxAtlasSize) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DynamicAtlasSettings, ___m_MaxSubTextureSize) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DynamicAtlasSettings, ___m_ActiveFilters) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DynamicAtlasSettings, ___m_CustomFilter) == 0x20, "Offset mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::DynamicAtlasSettings);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::DynamicAtlasSettings*, "UnityEngine.UIElements", "DynamicAtlasSettings");
