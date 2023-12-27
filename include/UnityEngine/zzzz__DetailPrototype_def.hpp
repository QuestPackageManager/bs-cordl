#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(DetailPrototype)
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct DetailRenderMode;
}
namespace System {
class Object;
}
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace UnityEngine {
class DetailPrototype;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::DetailPrototype);
// Type: UnityEngine::DetailPrototype
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(10251))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15469))
// CS Name: ::UnityEngine::DetailPrototype*
class CORDL_TYPE DetailPrototype : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_Prototype, offset 0x10, size 0x8
  __declspec(property(get = __get_m_Prototype, put = __set_m_Prototype))::UnityEngine::GameObject* m_Prototype;

  /// @brief Field m_PrototypeTexture, offset 0x18, size 0x8
  __declspec(property(get = __get_m_PrototypeTexture, put = __set_m_PrototypeTexture))::UnityEngine::Texture2D* m_PrototypeTexture;

  /// @brief Field m_HealthyColor, offset 0x20, size 0x10
  __declspec(property(get = __get_m_HealthyColor, put = __set_m_HealthyColor))::UnityEngine::Color m_HealthyColor;

  /// @brief Field m_DryColor, offset 0x30, size 0x10
  __declspec(property(get = __get_m_DryColor, put = __set_m_DryColor))::UnityEngine::Color m_DryColor;

  /// @brief Field m_MinWidth, offset 0x40, size 0x4
  __declspec(property(get = __get_m_MinWidth, put = __set_m_MinWidth)) float_t m_MinWidth;

  /// @brief Field m_MaxWidth, offset 0x44, size 0x4
  __declspec(property(get = __get_m_MaxWidth, put = __set_m_MaxWidth)) float_t m_MaxWidth;

  /// @brief Field m_MinHeight, offset 0x48, size 0x4
  __declspec(property(get = __get_m_MinHeight, put = __set_m_MinHeight)) float_t m_MinHeight;

  /// @brief Field m_MaxHeight, offset 0x4c, size 0x4
  __declspec(property(get = __get_m_MaxHeight, put = __set_m_MaxHeight)) float_t m_MaxHeight;

  /// @brief Field m_NoiseSeed, offset 0x50, size 0x4
  __declspec(property(get = __get_m_NoiseSeed, put = __set_m_NoiseSeed)) int32_t m_NoiseSeed;

  /// @brief Field m_NoiseSpread, offset 0x54, size 0x4
  __declspec(property(get = __get_m_NoiseSpread, put = __set_m_NoiseSpread)) float_t m_NoiseSpread;

  /// @brief Field m_HoleEdgePadding, offset 0x58, size 0x4
  __declspec(property(get = __get_m_HoleEdgePadding, put = __set_m_HoleEdgePadding)) float_t m_HoleEdgePadding;

  /// @brief Field m_RenderMode, offset 0x5c, size 0x4
  __declspec(property(get = __get_m_RenderMode, put = __set_m_RenderMode)) int32_t m_RenderMode;

  /// @brief Field m_UsePrototypeMesh, offset 0x60, size 0x4
  __declspec(property(get = __get_m_UsePrototypeMesh, put = __set_m_UsePrototypeMesh)) int32_t m_UsePrototypeMesh;

  /// @brief Field m_UseInstancing, offset 0x64, size 0x4
  __declspec(property(get = __get_m_UseInstancing, put = __set_m_UseInstancing)) int32_t m_UseInstancing;

  /// @brief Field DefaultHealthColor, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_DefaultHealthColor, put = setStaticF_DefaultHealthColor))::UnityEngine::Color DefaultHealthColor;

  /// @brief Field DefaultDryColor, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_DefaultDryColor, put = setStaticF_DefaultDryColor))::UnityEngine::Color DefaultDryColor;

  __declspec(property(put = set_prototype))::UnityEngine::GameObject* prototype;

  __declspec(property(put = set_prototypeTexture))::UnityEngine::Texture2D* prototypeTexture;

  __declspec(property(get = get_minWidth, put = set_minWidth)) float_t minWidth;

  __declspec(property(get = get_maxWidth, put = set_maxWidth)) float_t maxWidth;

  __declspec(property(get = get_minHeight, put = set_minHeight)) float_t minHeight;

  __declspec(property(get = get_maxHeight, put = set_maxHeight)) float_t maxHeight;

  __declspec(property(get = get_noiseSpread, put = set_noiseSpread)) float_t noiseSpread;

  __declspec(property(get = get_healthyColor, put = set_healthyColor))::UnityEngine::Color healthyColor;

  __declspec(property(get = get_dryColor, put = set_dryColor))::UnityEngine::Color dryColor;

  __declspec(property(get = get_renderMode, put = set_renderMode))::UnityEngine::DetailRenderMode renderMode;

  __declspec(property(put = set_usePrototypeMesh)) bool usePrototypeMesh;

  constexpr ::UnityEngine::GameObject*& __get_m_Prototype();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get_m_Prototype() const;

  constexpr void __set_m_Prototype(::UnityEngine::GameObject* value);

  constexpr ::UnityEngine::Texture2D*& __get_m_PrototypeTexture();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Texture2D*> const& __get_m_PrototypeTexture() const;

  constexpr void __set_m_PrototypeTexture(::UnityEngine::Texture2D* value);

  constexpr ::UnityEngine::Color& __get_m_HealthyColor();

  constexpr ::UnityEngine::Color const& __get_m_HealthyColor() const;

  constexpr void __set_m_HealthyColor(::UnityEngine::Color value);

  constexpr ::UnityEngine::Color& __get_m_DryColor();

  constexpr ::UnityEngine::Color const& __get_m_DryColor() const;

  constexpr void __set_m_DryColor(::UnityEngine::Color value);

  constexpr float_t& __get_m_MinWidth();

  constexpr float_t const& __get_m_MinWidth() const;

  constexpr void __set_m_MinWidth(float_t value);

  constexpr float_t& __get_m_MaxWidth();

  constexpr float_t const& __get_m_MaxWidth() const;

  constexpr void __set_m_MaxWidth(float_t value);

  constexpr float_t& __get_m_MinHeight();

  constexpr float_t const& __get_m_MinHeight() const;

  constexpr void __set_m_MinHeight(float_t value);

  constexpr float_t& __get_m_MaxHeight();

  constexpr float_t const& __get_m_MaxHeight() const;

  constexpr void __set_m_MaxHeight(float_t value);

  constexpr int32_t& __get_m_NoiseSeed();

  constexpr int32_t const& __get_m_NoiseSeed() const;

  constexpr void __set_m_NoiseSeed(int32_t value);

  constexpr float_t& __get_m_NoiseSpread();

  constexpr float_t const& __get_m_NoiseSpread() const;

  constexpr void __set_m_NoiseSpread(float_t value);

  constexpr float_t& __get_m_HoleEdgePadding();

  constexpr float_t const& __get_m_HoleEdgePadding() const;

  constexpr void __set_m_HoleEdgePadding(float_t value);

  constexpr int32_t& __get_m_RenderMode();

  constexpr int32_t const& __get_m_RenderMode() const;

  constexpr void __set_m_RenderMode(int32_t value);

  constexpr int32_t& __get_m_UsePrototypeMesh();

  constexpr int32_t const& __get_m_UsePrototypeMesh() const;

  constexpr void __set_m_UsePrototypeMesh(int32_t value);

  constexpr int32_t& __get_m_UseInstancing();

  constexpr int32_t const& __get_m_UseInstancing() const;

  constexpr void __set_m_UseInstancing(int32_t value);

  static inline void setStaticF_DefaultHealthColor(::UnityEngine::Color value);

  static inline ::UnityEngine::Color getStaticF_DefaultHealthColor();

  static inline void setStaticF_DefaultDryColor(::UnityEngine::Color value);

  static inline ::UnityEngine::Color getStaticF_DefaultDryColor();

  /// @brief Method set_prototype addr 0x2d1c420 size 0x8 virtual false final false
  inline void set_prototype(::UnityEngine::GameObject* value);

  /// @brief Method set_prototypeTexture addr 0x2d1c428 size 0x8 virtual false final false
  inline void set_prototypeTexture(::UnityEngine::Texture2D* value);

  /// @brief Method get_minWidth addr 0x2d1c430 size 0x8 virtual false final false
  inline float_t get_minWidth();

  /// @brief Method set_minWidth addr 0x2d1c438 size 0x8 virtual false final false
  inline void set_minWidth(float_t value);

  /// @brief Method get_maxWidth addr 0x2d1c440 size 0x8 virtual false final false
  inline float_t get_maxWidth();

  /// @brief Method set_maxWidth addr 0x2d1c448 size 0x8 virtual false final false
  inline void set_maxWidth(float_t value);

  /// @brief Method get_minHeight addr 0x2d1c450 size 0x8 virtual false final false
  inline float_t get_minHeight();

  /// @brief Method set_minHeight addr 0x2d1c458 size 0x8 virtual false final false
  inline void set_minHeight(float_t value);

  /// @brief Method get_maxHeight addr 0x2d1c460 size 0x8 virtual false final false
  inline float_t get_maxHeight();

  /// @brief Method set_maxHeight addr 0x2d1c468 size 0x8 virtual false final false
  inline void set_maxHeight(float_t value);

  /// @brief Method get_noiseSpread addr 0x2d1c470 size 0x8 virtual false final false
  inline float_t get_noiseSpread();

  /// @brief Method set_noiseSpread addr 0x2d1c478 size 0x8 virtual false final false
  inline void set_noiseSpread(float_t value);

  /// @brief Method get_healthyColor addr 0x2d1c480 size 0xc virtual false final false
  inline ::UnityEngine::Color get_healthyColor();

  /// @brief Method set_healthyColor addr 0x2d1c48c size 0xc virtual false final false
  inline void set_healthyColor(::UnityEngine::Color value);

  /// @brief Method get_dryColor addr 0x2d1c498 size 0xc virtual false final false
  inline ::UnityEngine::Color get_dryColor();

  /// @brief Method set_dryColor addr 0x2d1c4a4 size 0xc virtual false final false
  inline void set_dryColor(::UnityEngine::Color value);

  /// @brief Method get_renderMode addr 0x2d1c4b0 size 0x8 virtual false final false
  inline ::UnityEngine::DetailRenderMode get_renderMode();

  /// @brief Method set_renderMode addr 0x2d1c4b8 size 0x8 virtual false final false
  inline void set_renderMode(::UnityEngine::DetailRenderMode value);

  /// @brief Method set_usePrototypeMesh addr 0x2d1c4c0 size 0x1c virtual false final false
  inline void set_usePrototypeMesh(bool value);

  static inline ::UnityEngine::DetailPrototype* New_ctor();

  /// @brief Method .ctor addr 0x2d1c4dc size 0xa0 virtual false final false
  inline void _ctor();

  /// @brief Method Equals addr 0x2d1c57c size 0x64 virtual true final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode addr 0x2d1c7cc size 0x8 virtual true final false
  inline int32_t GetHashCode();

  /// @brief Method Equals addr 0x2d1c5e0 size 0x1ec virtual false final false
  inline bool Equals(::UnityEngine::DetailPrototype* other);

  // Ctor Parameters [CppParam { name: "", ty: "DetailPrototype", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DetailPrototype(DetailPrototype&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DetailPrototype", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DetailPrototype(DetailPrototype const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DetailPrototype();

public:
  /// @brief Field m_Prototype, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::GameObject* ___m_Prototype;

  /// @brief Field m_PrototypeTexture, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Texture2D* ___m_PrototypeTexture;

  /// @brief Field m_HealthyColor, offset: 0x20, size: 0x10, def value: None
  ::UnityEngine::Color ___m_HealthyColor;

  /// @brief Field m_DryColor, offset: 0x30, size: 0x10, def value: None
  ::UnityEngine::Color ___m_DryColor;

  /// @brief Field m_MinWidth, offset: 0x40, size: 0x4, def value: None
  float_t ___m_MinWidth;

  /// @brief Field m_MaxWidth, offset: 0x44, size: 0x4, def value: None
  float_t ___m_MaxWidth;

  /// @brief Field m_MinHeight, offset: 0x48, size: 0x4, def value: None
  float_t ___m_MinHeight;

  /// @brief Field m_MaxHeight, offset: 0x4c, size: 0x4, def value: None
  float_t ___m_MaxHeight;

  /// @brief Field m_NoiseSeed, offset: 0x50, size: 0x4, def value: None
  int32_t ___m_NoiseSeed;

  /// @brief Field m_NoiseSpread, offset: 0x54, size: 0x4, def value: None
  float_t ___m_NoiseSpread;

  /// @brief Field m_HoleEdgePadding, offset: 0x58, size: 0x4, def value: None
  float_t ___m_HoleEdgePadding;

  /// @brief Field m_RenderMode, offset: 0x5c, size: 0x4, def value: None
  int32_t ___m_RenderMode;

  /// @brief Field m_UsePrototypeMesh, offset: 0x60, size: 0x4, def value: None
  int32_t ___m_UsePrototypeMesh;

  /// @brief Field m_UseInstancing, offset: 0x64, size: 0x4, def value: None
  int32_t ___m_UseInstancing;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::DetailPrototype, 0x68>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::DetailPrototype);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::DetailPrototype*, "UnityEngine", "DetailPrototype");
