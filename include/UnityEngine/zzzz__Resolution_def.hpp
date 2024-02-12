#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Resolution)
// Forward declare root types
namespace UnityEngine {
struct Resolution;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Resolution);
// Type: UnityEngine::Resolution
// SizeInfo { instance_size: 12, native_size: 12, calculated_instance_size: 12, calculated_native_size: 28, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8815))
// CS Name: ::UnityEngine::Resolution
struct CORDL_TYPE Resolution {
public:
  // Declarations
  __declspec(property(get = get_width, put = set_width)) int32_t width;

  __declspec(property(get = get_height, put = set_height)) int32_t height;

  __declspec(property(get = get_refreshRate, put = set_refreshRate)) int32_t refreshRate;

  /// @brief Method get_width, addr 0x2cb828c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_width();

  /// @brief Method set_width, addr 0x2cb8294, size 0x8, virtual false, abstract: false, final false
  inline void set_width(int32_t value);

  /// @brief Method get_height, addr 0x2cb829c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_height();

  /// @brief Method set_height, addr 0x2cb82a4, size 0x8, virtual false, abstract: false, final false
  inline void set_height(int32_t value);

  /// @brief Method get_refreshRate, addr 0x2cb82ac, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_refreshRate();

  /// @brief Method set_refreshRate, addr 0x2cb82b4, size 0x8, virtual false, abstract: false, final false
  inline void set_refreshRate(int32_t value);

  /// @brief Method ToString, addr 0x2cb82bc, size 0x16c, virtual true, abstract: false, final false
  inline ::StringW ToString();

  // Ctor Parameters [CppParam { name: "m_Width", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Height", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "m_RefreshRate", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr Resolution(int32_t m_Width, int32_t m_Height, int32_t m_RefreshRate) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr Resolution();

  /// @brief Field m_Width, offset: 0x0, size: 0x4, def value: None
  int32_t m_Width;

  /// @brief Field m_Height, offset: 0x4, size: 0x4, def value: None
  int32_t m_Height;

  /// @brief Field m_RefreshRate, offset: 0x8, size: 0x4, def value: None
  int32_t m_RefreshRate;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xc };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Resolution, 0xc>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Resolution, m_Width) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Resolution, m_Height) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Resolution, m_RefreshRate) == 0x8, "Offset mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Resolution, "UnityEngine", "Resolution");
