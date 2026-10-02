#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/VrsLut.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(VrsLut)
namespace UnityEngine::Rendering {
struct ShadingRateFragmentSize;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class GraphicsBuffer;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class VrsLut;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::VrsLut*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::VrsLut*, "UnityEngine.Rendering", "VrsLut");
// [DefaultMember("Item")]
// Dependencies System.Object, UnityEngine.Color
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.VrsLut
class CORDL_TYPE VrsLut : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Item, put = set_Item)) ::UnityEngine::Color Item[];

  /// @brief Field m_Data, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Data, put = __cordl_internal_set_m_Data)) ::ArrayW<::UnityEngine::Color> m_Data;

  /// @brief Method CreateBuffer, addr 0x6beff8c, size 0x414, virtual false, abstract: false, final false
  inline ::UnityEngine::GraphicsBuffer* CreateBuffer(bool forVisualization);

  /// @brief Method CreateDefault, addr 0x6befd04, size 0x19c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::VrsLut* CreateDefault();

  /// @brief Method EncodeShadingRate, addr 0x6bf03c4, size 0x8, virtual false, abstract: false, final false
  inline uint32_t EncodeShadingRate(uint32_t x, uint32_t y);

  /// @brief Method MapFragmentShadingRateToBinary, addr 0x6bf03a0, size 0x24, virtual false, abstract: false, final false
  inline uint32_t MapFragmentShadingRateToBinary(::UnityEngine::Rendering::ShadingRateFragmentSize fs);

  static inline ::UnityEngine::Rendering::VrsLut* New_ctor();

  constexpr ::ArrayW<::UnityEngine::Color> const& __cordl_internal_get_m_Data() const;

  constexpr ::ArrayW<::UnityEngine::Color>& __cordl_internal_get_m_Data();

  constexpr void __cordl_internal_set_m_Data(::ArrayW<::UnityEngine::Color> value);

  /// @brief Method .ctor, addr 0x6befea0, size 0x84, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Item, addr 0x6beff58, size 0x34, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_Item(::UnityEngine::Rendering::ShadingRateFragmentSize fragmentSize);

  /// @brief Method set_Item, addr 0x6beff24, size 0x34, virtual false, abstract: false, final false
  inline void set_Item(::UnityEngine::Rendering::ShadingRateFragmentSize fragmentSize, ::UnityEngine::Color value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VrsLut();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VrsLut", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VrsLut(VrsLut&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VrsLut", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VrsLut(VrsLut const&) = delete;

  /// @brief Field Rate1x offset 0xffffffff size 0x4
  static constexpr uint32_t Rate1x{ static_cast<uint32_t>(0x0u) };

  /// @brief Field Rate2x offset 0xffffffff size 0x4
  static constexpr uint32_t Rate2x{ static_cast<uint32_t>(0x1u) };

  /// @brief Field Rate4x offset 0xffffffff size 0x4
  static constexpr uint32_t Rate4x{ static_cast<uint32_t>(0x2u) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9264 };

  /// [SerializeField]
  /// @brief Field m_Data, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Color> ___m_Data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::VrsLut, ___m_Data) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::VrsLut) == 0x18, "Size mismatch!");

} // namespace UnityEngine::Rendering
