#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__AttributeTargets_def.hpp"
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(AttributeUsageAttribute)
namespace System {
struct AttributeTargets;
}
// Forward declare root types
namespace System {
class AttributeUsageAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::AttributeUsageAttribute);
// Type: System::AttributeUsageAttribute
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 22, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// CS Name: ::System::AttributeUsageAttribute*
class CORDL_TYPE AttributeUsageAttribute : public ::System::Attribute {
public:
  // Declarations
  __declspec(property(get = get_AllowMultiple, put = set_AllowMultiple)) bool AllowMultiple;

  /// @brief Field Default, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Default, put = setStaticF_Default))::System::AttributeUsageAttribute* Default;

  __declspec(property(get = get_Inherited, put = set_Inherited)) bool Inherited;

  /// @brief Field _allowMultiple, offset 0x14, size 0x1
  __declspec(property(get = __cordl_internal_get__allowMultiple, put = __cordl_internal_set__allowMultiple)) bool _allowMultiple;

  /// @brief Field _attributeTarget, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__attributeTarget, put = __cordl_internal_set__attributeTarget))::System::AttributeTargets _attributeTarget;

  /// @brief Field _inherited, offset 0x15, size 0x1
  __declspec(property(get = __cordl_internal_get__inherited, put = __cordl_internal_set__inherited)) bool _inherited;

  static inline ::System::AttributeUsageAttribute* New_ctor(::System::AttributeTargets validOn);

  constexpr bool const& __cordl_internal_get__allowMultiple() const;

  constexpr bool& __cordl_internal_get__allowMultiple();

  constexpr ::System::AttributeTargets const& __cordl_internal_get__attributeTarget() const;

  constexpr ::System::AttributeTargets& __cordl_internal_get__attributeTarget();

  constexpr bool const& __cordl_internal_get__inherited() const;

  constexpr bool& __cordl_internal_get__inherited();

  constexpr void __cordl_internal_set__allowMultiple(bool value);

  constexpr void __cordl_internal_set__attributeTarget(::System::AttributeTargets value);

  constexpr void __cordl_internal_set__inherited(bool value);

  /// @brief Method .ctor, addr 0x26724a0, size 0x38, virtual false, abstract: false, final false
  inline void _ctor(::System::AttributeTargets validOn);

  static inline ::System::AttributeUsageAttribute* getStaticF_Default();

  /// @brief Method get_AllowMultiple, addr 0x26724d8, size 0x8, virtual false, abstract: false, final false
  inline bool get_AllowMultiple();

  /// @brief Method get_Inherited, addr 0x26724ec, size 0x8, virtual false, abstract: false, final false
  inline bool get_Inherited();

  static inline void setStaticF_Default(::System::AttributeUsageAttribute* value);

  /// @brief Method set_AllowMultiple, addr 0x26724e0, size 0xc, virtual false, abstract: false, final false
  inline void set_AllowMultiple(bool value);

  /// @brief Method set_Inherited, addr 0x26724f4, size 0xc, virtual false, abstract: false, final false
  inline void set_Inherited(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AttributeUsageAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AttributeUsageAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AttributeUsageAttribute(AttributeUsageAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AttributeUsageAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AttributeUsageAttribute(AttributeUsageAttribute const&) = delete;

  /// @brief Field _attributeTarget, offset: 0x10, size: 0x4, def value: None
  ::System::AttributeTargets ____attributeTarget;

  /// @brief Field _allowMultiple, offset: 0x14, size: 0x1, def value: None
  bool ____allowMultiple;

  /// @brief Field _inherited, offset: 0x15, size: 0x1, def value: None
  bool ____inherited;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::AttributeUsageAttribute, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::AttributeUsageAttribute, ____attributeTarget) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::AttributeUsageAttribute, ____allowMultiple) == 0x14, "Offset mismatch!");

static_assert(offsetof(::System::AttributeUsageAttribute, ____inherited) == 0x15, "Offset mismatch!");

} // namespace System
NEED_NO_BOX(::System::AttributeUsageAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::AttributeUsageAttribute*, "System", "AttributeUsageAttribute");
