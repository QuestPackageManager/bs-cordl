#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(HEU_DetailPrototype)
namespace HoudiniEngineUnity {
template <typename T> class IEquivable_1;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_DetailPrototype;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_DetailPrototype);
// Type: HoudiniEngineUnity::HEU_DetailPrototype
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 92, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(10251))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9956))
// CS Name: ::HoudiniEngineUnity::HEU_DetailPrototype*
class CORDL_TYPE HEU_DetailPrototype : public ::System::Object {
public:
  // Declarations
  /// @brief Field _prototypePrefab, offset 0x10, size 0x8
  __declspec(property(get = __get__prototypePrefab, put = __set__prototypePrefab))::StringW _prototypePrefab;

  /// @brief Field _prototypeTexture, offset 0x18, size 0x8
  __declspec(property(get = __get__prototypeTexture, put = __set__prototypeTexture))::StringW _prototypeTexture;

  /// @brief Field _bendFactor, offset 0x20, size 0x4
  __declspec(property(get = __get__bendFactor, put = __set__bendFactor)) float_t _bendFactor;

  /// @brief Field _dryColor, offset 0x24, size 0x10
  __declspec(property(get = __get__dryColor, put = __set__dryColor))::UnityEngine::Color _dryColor;

  /// @brief Field _healthyColor, offset 0x34, size 0x10
  __declspec(property(get = __get__healthyColor, put = __set__healthyColor))::UnityEngine::Color _healthyColor;

  /// @brief Field _maxHeight, offset 0x44, size 0x4
  __declspec(property(get = __get__maxHeight, put = __set__maxHeight)) float_t _maxHeight;

  /// @brief Field _maxWidth, offset 0x48, size 0x4
  __declspec(property(get = __get__maxWidth, put = __set__maxWidth)) float_t _maxWidth;

  /// @brief Field _minHeight, offset 0x4c, size 0x4
  __declspec(property(get = __get__minHeight, put = __set__minHeight)) float_t _minHeight;

  /// @brief Field _minWidth, offset 0x50, size 0x4
  __declspec(property(get = __get__minWidth, put = __set__minWidth)) float_t _minWidth;

  /// @brief Field _noiseSpread, offset 0x54, size 0x4
  __declspec(property(get = __get__noiseSpread, put = __set__noiseSpread)) float_t _noiseSpread;

  /// @brief Field _renderMode, offset 0x58, size 0x4
  __declspec(property(get = __get__renderMode, put = __set__renderMode)) int32_t _renderMode;

  /// @brief Convert operator to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_DetailPrototype*>"
  constexpr operator ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_DetailPrototype*>*() noexcept;

  constexpr ::StringW& __get__prototypePrefab();

  constexpr ::StringW const& __get__prototypePrefab() const;

  constexpr void __set__prototypePrefab(::StringW value);

  constexpr ::StringW& __get__prototypeTexture();

  constexpr ::StringW const& __get__prototypeTexture() const;

  constexpr void __set__prototypeTexture(::StringW value);

  constexpr float_t& __get__bendFactor();

  constexpr float_t const& __get__bendFactor() const;

  constexpr void __set__bendFactor(float_t value);

  constexpr ::UnityEngine::Color& __get__dryColor();

  constexpr ::UnityEngine::Color const& __get__dryColor() const;

  constexpr void __set__dryColor(::UnityEngine::Color value);

  constexpr ::UnityEngine::Color& __get__healthyColor();

  constexpr ::UnityEngine::Color const& __get__healthyColor() const;

  constexpr void __set__healthyColor(::UnityEngine::Color value);

  constexpr float_t& __get__maxHeight();

  constexpr float_t const& __get__maxHeight() const;

  constexpr void __set__maxHeight(float_t value);

  constexpr float_t& __get__maxWidth();

  constexpr float_t const& __get__maxWidth() const;

  constexpr void __set__maxWidth(float_t value);

  constexpr float_t& __get__minHeight();

  constexpr float_t const& __get__minHeight() const;

  constexpr void __set__minHeight(float_t value);

  constexpr float_t& __get__minWidth();

  constexpr float_t const& __get__minWidth() const;

  constexpr void __set__minWidth(float_t value);

  constexpr float_t& __get__noiseSpread();

  constexpr float_t const& __get__noiseSpread() const;

  constexpr void __set__noiseSpread(float_t value);

  constexpr int32_t& __get__renderMode();

  constexpr int32_t const& __get__renderMode() const;

  constexpr void __set__renderMode(int32_t value);

  static inline ::HoudiniEngineUnity::HEU_DetailPrototype* New_ctor();

  /// @brief Method .ctor, addr 0x21ea814, size 0xfc, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method IsEquivalentTo, addr 0x21ea910, size 0xec, virtual true, abstract: false, final true
  inline bool IsEquivalentTo(::HoudiniEngineUnity::HEU_DetailPrototype* other);

  // Ctor Parameters [CppParam { name: "", ty: "HEU_DetailPrototype", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_DetailPrototype(HEU_DetailPrototype&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_DetailPrototype", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_DetailPrototype(HEU_DetailPrototype const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_DetailPrototype();

public:
  /// @brief Field _prototypePrefab, offset: 0x10, size: 0x8, def value: None
  ::StringW ____prototypePrefab;

  /// @brief Field _prototypeTexture, offset: 0x18, size: 0x8, def value: None
  ::StringW ____prototypeTexture;

  /// @brief Field _bendFactor, offset: 0x20, size: 0x4, def value: None
  float_t ____bendFactor;

  /// @brief Field _dryColor, offset: 0x24, size: 0x10, def value: None
  ::UnityEngine::Color ____dryColor;

  /// @brief Field _healthyColor, offset: 0x34, size: 0x10, def value: None
  ::UnityEngine::Color ____healthyColor;

  /// @brief Field _maxHeight, offset: 0x44, size: 0x4, def value: None
  float_t ____maxHeight;

  /// @brief Field _maxWidth, offset: 0x48, size: 0x4, def value: None
  float_t ____maxWidth;

  /// @brief Field _minHeight, offset: 0x4c, size: 0x4, def value: None
  float_t ____minHeight;

  /// @brief Field _minWidth, offset: 0x50, size: 0x4, def value: None
  float_t ____minWidth;

  /// @brief Field _noiseSpread, offset: 0x54, size: 0x4, def value: None
  float_t ____noiseSpread;

  /// @brief Field _renderMode, offset: 0x58, size: 0x4, def value: None
  int32_t ____renderMode;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_DetailPrototype, 0x60>, "Size mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_DetailPrototype, ____prototypePrefab) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_DetailPrototype, ____prototypeTexture) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_DetailPrototype, ____bendFactor) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_DetailPrototype, ____dryColor) == 0x24, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_DetailPrototype, ____healthyColor) == 0x34, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_DetailPrototype, ____maxHeight) == 0x44, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_DetailPrototype, ____maxWidth) == 0x48, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_DetailPrototype, ____minHeight) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_DetailPrototype, ____minWidth) == 0x50, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_DetailPrototype, ____noiseSpread) == 0x54, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_DetailPrototype, ____renderMode) == 0x58, "Offset mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_DetailPrototype);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_DetailPrototype*, "HoudiniEngineUnity", "HEU_DetailPrototype");
