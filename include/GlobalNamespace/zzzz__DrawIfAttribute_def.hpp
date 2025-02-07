#pragma once
// IWYU pragma private; include "GlobalNamespace/DrawIfAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DrawIfAttribute)
namespace GlobalNamespace {
struct DrawIfAttribute_DisablingType;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
struct DrawIfAttribute_DisablingType;
}
namespace GlobalNamespace {
class DrawIfAttribute;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::DrawIfAttribute_DisablingType);
MARK_REF_PTR_T(::GlobalNamespace::DrawIfAttribute);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: DrawIfAttribute/DisablingType
struct CORDL_TYPE DrawIfAttribute_DisablingType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __DrawIfAttribute_DisablingType_Unwrapped
  enum struct __DrawIfAttribute_DisablingType_Unwrapped : int32_t {
    __E_ReadOnly = static_cast<int32_t>(0x0),
    __E_DontDraw = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __DrawIfAttribute_DisablingType_Unwrapped() const noexcept {
    return static_cast<__DrawIfAttribute_DisablingType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr DrawIfAttribute_DisablingType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr DrawIfAttribute_DisablingType(int32_t value__) noexcept;

  /// @brief Field DontDraw value: I32(1)
  static ::GlobalNamespace::DrawIfAttribute_DisablingType const DontDraw;

  /// @brief Field ReadOnly value: I32(0)
  static ::GlobalNamespace::DrawIfAttribute_DisablingType const ReadOnly;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19151 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DrawIfAttribute_DisablingType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DrawIfAttribute_DisablingType, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies DrawIfAttribute::DisablingType, UnityEngine.PropertyAttribute
namespace GlobalNamespace {
// Is value type: false
// CS Name: DrawIfAttribute
class CORDL_TYPE DrawIfAttribute : public ::UnityEngine::PropertyAttribute {
public:
  // Declarations
  using DisablingType = ::GlobalNamespace::DrawIfAttribute_DisablingType;

  /// @brief Field disablingType, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_disablingType, put = __cordl_internal_set_disablingType)) ::GlobalNamespace::DrawIfAttribute_DisablingType disablingType;

  /// @brief Field orValue, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_orValue, put = __cordl_internal_set_orValue)) ::System::Object* orValue;

  /// @brief Field propertyName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_propertyName, put = __cordl_internal_set_propertyName)) ::StringW propertyName;

  /// @brief Field value, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_value, put = __cordl_internal_set_value)) ::System::Object* value;

  static inline ::GlobalNamespace::DrawIfAttribute* New_ctor(::StringW propertyName, ::System::Object* value, ::GlobalNamespace::DrawIfAttribute_DisablingType disablingType);

  static inline ::GlobalNamespace::DrawIfAttribute* New_ctor(::StringW propertyName, ::System::Object* value, ::System::Object* orValue,
                                                             ::GlobalNamespace::DrawIfAttribute_DisablingType disablingType);

  constexpr ::GlobalNamespace::DrawIfAttribute_DisablingType const& __cordl_internal_get_disablingType() const;

  constexpr ::GlobalNamespace::DrawIfAttribute_DisablingType& __cordl_internal_get_disablingType();

  constexpr ::System::Object* const& __cordl_internal_get_orValue() const;

  constexpr ::System::Object*& __cordl_internal_get_orValue();

  constexpr ::StringW const& __cordl_internal_get_propertyName() const;

  constexpr ::StringW& __cordl_internal_get_propertyName();

  constexpr ::System::Object* const& __cordl_internal_get_value() const;

  constexpr ::System::Object*& __cordl_internal_get_value();

  constexpr void __cordl_internal_set_disablingType(::GlobalNamespace::DrawIfAttribute_DisablingType value);

  constexpr void __cordl_internal_set_orValue(::System::Object* value);

  constexpr void __cordl_internal_set_propertyName(::StringW value);

  constexpr void __cordl_internal_set_value(::System::Object* value);

  /// @brief Method .ctor, addr 0x229e754, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::StringW propertyName, ::System::Object* value, ::GlobalNamespace::DrawIfAttribute_DisablingType disablingType);

  /// @brief Method .ctor, addr 0x229e790, size 0x44, virtual false, abstract: false, final false
  inline void _ctor(::StringW propertyName, ::System::Object* value, ::System::Object* orValue, ::GlobalNamespace::DrawIfAttribute_DisablingType disablingType);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DrawIfAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DrawIfAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DrawIfAttribute(DrawIfAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DrawIfAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DrawIfAttribute(DrawIfAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19152 };

  /// @brief Field propertyName, offset: 0x10, size: 0x8, def value: None
  ::StringW ___propertyName;

  /// @brief Field value, offset: 0x18, size: 0x8, def value: None
  ::System::Object* ___value;

  /// @brief Field orValue, offset: 0x20, size: 0x8, def value: None
  ::System::Object* ___orValue;

  /// @brief Field disablingType, offset: 0x28, size: 0x4, def value: None
  ::GlobalNamespace::DrawIfAttribute_DisablingType ___disablingType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DrawIfAttribute, ___propertyName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DrawIfAttribute, ___value) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DrawIfAttribute, ___orValue) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DrawIfAttribute, ___disablingType) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DrawIfAttribute, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DrawIfAttribute_DisablingType, "", "DrawIfAttribute/DisablingType");
NEED_NO_BOX(::GlobalNamespace::DrawIfAttribute);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DrawIfAttribute*, "", "DrawIfAttribute");
