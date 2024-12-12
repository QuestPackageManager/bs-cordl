#pragma once
// IWYU pragma private; include "GlobalNamespace/SetGlobalShaderFloat.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SetGlobalShaderFloat)
// Forward declare root types
namespace GlobalNamespace {
class SetGlobalShaderFloat;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SetGlobalShaderFloat);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SetGlobalShaderFloat
class CORDL_TYPE SetGlobalShaderFloat : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _propertyId, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__propertyId, put = __cordl_internal_set__propertyId)) int32_t _propertyId;

  /// @brief Field _propertyName, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__propertyName, put = __cordl_internal_set__propertyName)) ::StringW _propertyName;

  /// @brief Field _value, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__value, put = __cordl_internal_set__value)) float_t _value;

  static inline ::GlobalNamespace::SetGlobalShaderFloat* New_ctor();

  /// @brief Method OnValidate, addr 0x39e7884, size 0x20, virtual false, abstract: false, final false
  inline void OnValidate();

  /// @brief Method Start, addr 0x39e7850, size 0x20, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method Update, addr 0x39e7870, size 0x14, virtual false, abstract: false, final false
  inline void Update();

  constexpr int32_t const& __cordl_internal_get__propertyId() const;

  constexpr int32_t& __cordl_internal_get__propertyId();

  constexpr ::StringW const& __cordl_internal_get__propertyName() const;

  constexpr ::StringW& __cordl_internal_get__propertyName();

  constexpr float_t const& __cordl_internal_get__value() const;

  constexpr float_t& __cordl_internal_get__value();

  constexpr void __cordl_internal_set__propertyId(int32_t value);

  constexpr void __cordl_internal_set__propertyName(::StringW value);

  constexpr void __cordl_internal_set__value(float_t value);

  /// @brief Method .ctor, addr 0x39e78a4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SetGlobalShaderFloat();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SetGlobalShaderFloat", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SetGlobalShaderFloat(SetGlobalShaderFloat&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SetGlobalShaderFloat", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SetGlobalShaderFloat(SetGlobalShaderFloat const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16363 };

  /// @brief Field _propertyName, offset: 0x20, size: 0x8, def value: None
  ::StringW ____propertyName;

  /// @brief Field _value, offset: 0x28, size: 0x4, def value: None
  float_t ____value;

  /// @brief Field _propertyId, offset: 0x2c, size: 0x4, def value: None
  int32_t ____propertyId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SetGlobalShaderFloat, ____propertyName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SetGlobalShaderFloat, ____value) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SetGlobalShaderFloat, ____propertyId) == 0x2c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SetGlobalShaderFloat, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SetGlobalShaderFloat);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SetGlobalShaderFloat*, "", "SetGlobalShaderFloat");
