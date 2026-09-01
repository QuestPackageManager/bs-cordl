#pragma once
// IWYU pragma private; include "UnityEngine\VFX\VFXTypeAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VFXTypeAttribute)
namespace UnityEngine::VFX {
struct VFXTypeAttribute_Usage;
}
// Forward declare root types
namespace UnityEngine::VFX {
struct VFXTypeAttribute_Usage;
}
namespace UnityEngine::VFX {
class VFXTypeAttribute;
}
// Write type traits
MARK_VAL_T(::UnityEngine::VFX::VFXTypeAttribute_Usage);
MARK_REF_T(::UnityEngine::VFX::VFXTypeAttribute*);
DEFINE_IL2CPP_CLASS(::UnityEngine::VFX::VFXTypeAttribute_Usage, "UnityEngine.VFX", "VFXTypeAttribute/Usage");
DEFINE_IL2CPP_CLASS(::UnityEngine::VFX::VFXTypeAttribute*, "UnityEngine.VFX", "VFXTypeAttribute");
// Dependencies
namespace UnityEngine::VFX {
// Is value type: true
// CS Name: UnityEngine.VFX.VFXTypeAttribute/Usage
struct CORDL_TYPE VFXTypeAttribute_Usage {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __VFXTypeAttribute_Usage_Unwrapped
  enum struct __VFXTypeAttribute_Usage_Unwrapped : int32_t {
    __E_Default = static_cast<int32_t>(0x1),
    __E_GraphicsBuffer = static_cast<int32_t>(0x2),
    __E_ExcludeFromProperty = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __VFXTypeAttribute_Usage_Unwrapped() const noexcept {
    return static_cast<__VFXTypeAttribute_Usage_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr VFXTypeAttribute_Usage();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr VFXTypeAttribute_Usage(int32_t value__) noexcept;

  /// @brief Field Default value: I32(1)
  static ::UnityEngine::VFX::VFXTypeAttribute_Usage const Default;

  /// @brief Field ExcludeFromProperty value: I32(4)
  static ::UnityEngine::VFX::VFXTypeAttribute_Usage const ExcludeFromProperty;

  /// @brief Field GraphicsBuffer value: I32(2)
  static ::UnityEngine::VFX::VFXTypeAttribute_Usage const GraphicsBuffer;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19928 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::VFX::VFXTypeAttribute_Usage, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::VFX::VFXTypeAttribute_Usage) == 0x4, "Size mismatch!");

} // namespace UnityEngine::VFX
// Dependencies System.Attribute, UnityEngine.VFX.VFXTypeAttribute::Usage
namespace UnityEngine::VFX {
// Is value type: false
// CS Name: UnityEngine.VFX.VFXTypeAttribute
class CORDL_TYPE VFXTypeAttribute : public ::System::Attribute {
public:
  // Declarations
  using Usage = ::UnityEngine::VFX::VFXTypeAttribute_Usage;

  /// @brief Field <name>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__name_k__BackingField, put = __cordl_internal_set__name_k__BackingField)) ::StringW _name_k__BackingField;

  /// @brief Field <usages>k__BackingField, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__usages_k__BackingField, put = __cordl_internal_set__usages_k__BackingField)) ::UnityEngine::VFX::VFXTypeAttribute_Usage _usages_k__BackingField;

  __declspec(property(get = get_name, put = set_name)) ::StringW name;

  __declspec(property(get = get_usages, put = set_usages)) ::UnityEngine::VFX::VFXTypeAttribute_Usage usages;

  static inline ::UnityEngine::VFX::VFXTypeAttribute* New_ctor(::UnityEngine::VFX::VFXTypeAttribute_Usage usages, ::StringW name);

  constexpr ::StringW const& __cordl_internal_get__name_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__name_k__BackingField();

  constexpr ::UnityEngine::VFX::VFXTypeAttribute_Usage const& __cordl_internal_get__usages_k__BackingField() const;

  constexpr ::UnityEngine::VFX::VFXTypeAttribute_Usage& __cordl_internal_get__usages_k__BackingField();

  constexpr void __cordl_internal_set__name_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__usages_k__BackingField(::UnityEngine::VFX::VFXTypeAttribute_Usage value);

  /// @brief Method .ctor, addr 0x69d2234, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::VFX::VFXTypeAttribute_Usage usages, ::StringW name);

  /// @brief Method get_name, addr 0x69d2250, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_name();

  /// @brief Method get_usages, addr 0x69d2240, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::VFX::VFXTypeAttribute_Usage get_usages();

  /// @brief Method set_name, addr 0x69d2258, size 0x8, virtual false, abstract: false, final false
  inline void set_name(::StringW value);

  /// @brief Method set_usages, addr 0x69d2248, size 0x8, virtual false, abstract: false, final false
  inline void set_usages(::UnityEngine::VFX::VFXTypeAttribute_Usage value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VFXTypeAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VFXTypeAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VFXTypeAttribute(VFXTypeAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VFXTypeAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VFXTypeAttribute(VFXTypeAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19929 };

  /// @brief Field <usages>k__BackingField, offset: 0x10, size: 0x4, def value: None
  ::UnityEngine::VFX::VFXTypeAttribute_Usage ____usages_k__BackingField;

  /// @brief Field <name>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____name_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::VFX::VFXTypeAttribute, ____usages_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::VFXTypeAttribute, ____name_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::VFX::VFXTypeAttribute) == 0x20, "Size mismatch!");

} // namespace UnityEngine::VFX
