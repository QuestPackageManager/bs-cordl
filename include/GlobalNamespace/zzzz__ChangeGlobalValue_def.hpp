#pragma once
// IWYU pragma private; include "GlobalNamespace/ChangeGlobalValue.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(ChangeGlobalValue)
namespace GlobalNamespace {
template <typename T> struct ChangeGlobalValue_ShaderValue_1;
}
// Forward declare root types
namespace GlobalNamespace {
class ChangeGlobalValue;
}
namespace GlobalNamespace {
template <typename T> struct ChangeGlobalValue_ShaderValue_1;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ChangeGlobalValue*);
MARK_GEN_VAL_T(::GlobalNamespace::ChangeGlobalValue_ShaderValue_1);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ChangeGlobalValue*, "", "ChangeGlobalValue");
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::ChangeGlobalValue_ShaderValue_1, "", "ChangeGlobalValue/ShaderValue`1");
// Dependencies
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: true
// CS Name: ChangeGlobalValue/ShaderValue`1<T>
struct CORDL_TYPE ChangeGlobalValue_ShaderValue_1 {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr ChangeGlobalValue_ShaderValue_1();

  // Ctor Parameters [CppParam { name: "key", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "value", ty: "T", modifiers: "", def_value: None }]
  constexpr ChangeGlobalValue_ShaderValue_1(::StringW key, T value) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6748 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field key, offset: 0x0, size: 0x8, def value: None
  ::StringW key;

  /// @brief Field value, offset: 0x8, size: 0x8, def value: None
  T value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace GlobalNamespace
// Dependencies ChangeGlobalValue::ShaderValue`1<T>, UnityEngine.Color, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: ChangeGlobalValue
class CORDL_TYPE ChangeGlobalValue : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  template <typename T> using ShaderValue_1 = ::GlobalNamespace::ChangeGlobalValue_ShaderValue_1<T>;

  /// @brief Field _colorValues, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__colorValues, put = __cordl_internal_set__colorValues)) ::ArrayW<::GlobalNamespace::ChangeGlobalValue_ShaderValue_1<::UnityEngine::Color>>
      _colorValues;

  /// @brief Field _floatValues, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__floatValues, put = __cordl_internal_set__floatValues)) ::ArrayW<::GlobalNamespace::ChangeGlobalValue_ShaderValue_1<float_t>> _floatValues;

  static inline ::GlobalNamespace::ChangeGlobalValue* New_ctor();

  /// @brief Method OnValidate, addr 0x5914cc0, size 0xe0, virtual false, abstract: false, final false
  inline void OnValidate();

  constexpr ::ArrayW<::GlobalNamespace::ChangeGlobalValue_ShaderValue_1<::UnityEngine::Color>> const& __cordl_internal_get__colorValues() const;

  constexpr ::ArrayW<::GlobalNamespace::ChangeGlobalValue_ShaderValue_1<::UnityEngine::Color>>& __cordl_internal_get__colorValues();

  constexpr ::ArrayW<::GlobalNamespace::ChangeGlobalValue_ShaderValue_1<float_t>> const& __cordl_internal_get__floatValues() const;

  constexpr ::ArrayW<::GlobalNamespace::ChangeGlobalValue_ShaderValue_1<float_t>>& __cordl_internal_get__floatValues();

  constexpr void __cordl_internal_set__colorValues(::ArrayW<::GlobalNamespace::ChangeGlobalValue_ShaderValue_1<::UnityEngine::Color>> value);

  constexpr void __cordl_internal_set__floatValues(::ArrayW<::GlobalNamespace::ChangeGlobalValue_ShaderValue_1<float_t>> value);

  /// @brief Method .ctor, addr 0x5914da0, size 0x118, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ChangeGlobalValue();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ChangeGlobalValue", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ChangeGlobalValue(ChangeGlobalValue&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ChangeGlobalValue", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ChangeGlobalValue(ChangeGlobalValue const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6749 };

  /// @brief Field _floatValues, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::ChangeGlobalValue_ShaderValue_1<float_t>> ____floatValues;

  /// @brief Field _colorValues, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::ChangeGlobalValue_ShaderValue_1<::UnityEngine::Color>> ____colorValues;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ChangeGlobalValue, ____floatValues) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ChangeGlobalValue, ____colorValues) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ChangeGlobalValue) == 0x30, "Size mismatch!");

} // namespace GlobalNamespace
