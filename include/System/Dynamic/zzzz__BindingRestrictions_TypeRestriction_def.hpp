#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Dynamic/zzzz__BindingRestrictions_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BindingRestrictions_TypeRestriction)
namespace System::Linq::Expressions {
class Expression;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Dynamic {
class __BindingRestrictions__TypeRestriction;
}
// Write type traits
MARK_REF_PTR_T(::System::Dynamic::__BindingRestrictions__TypeRestriction);
// Type: ::TypeRestriction
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Dynamic {
// Is value type: false
// CS Name: ::BindingRestrictions::TypeRestriction*
class CORDL_TYPE __BindingRestrictions__TypeRestriction : public ::System::Dynamic::BindingRestrictions {
public:
  // Declarations
  /// @brief Field _expression, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__expression, put = __cordl_internal_set__expression))::System::Linq::Expressions::Expression* _expression;

  /// @brief Field _type, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__type, put = __cordl_internal_set__type))::System::Type* _type;

  /// @brief Method Equals, addr 0x2b4e46c, size 0xc4, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetExpression, addr 0x2b4e584, size 0x60, virtual true, abstract: false, final false
  inline ::System::Linq::Expressions::Expression* GetExpression();

  /// @brief Method GetHashCode, addr 0x2b4e530, size 0x54, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::System::Dynamic::__BindingRestrictions__TypeRestriction* New_ctor(::System::Linq::Expressions::Expression* parameter, ::System::Type* type);

  constexpr ::System::Linq::Expressions::Expression*& __cordl_internal_get__expression();

  constexpr ::cordl_internals::to_const_pointer<::System::Linq::Expressions::Expression*> const& __cordl_internal_get__expression() const;

  constexpr ::System::Type*& __cordl_internal_get__type();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get__type() const;

  constexpr void __cordl_internal_set__expression(::System::Linq::Expressions::Expression* value);

  constexpr void __cordl_internal_set__type(::System::Type* value);

  /// @brief Method .ctor, addr 0x2b4db08, size 0x70, virtual false, abstract: false, final false
  inline void _ctor(::System::Linq::Expressions::Expression* parameter, ::System::Type* type);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BindingRestrictions__TypeRestriction();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__BindingRestrictions__TypeRestriction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BindingRestrictions__TypeRestriction(__BindingRestrictions__TypeRestriction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BindingRestrictions__TypeRestriction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BindingRestrictions__TypeRestriction(__BindingRestrictions__TypeRestriction const&) = delete;

  /// @brief Field _expression, offset: 0x10, size: 0x8, def value: None
  ::System::Linq::Expressions::Expression* ____expression;

  /// @brief Field _type, offset: 0x18, size: 0x8, def value: None
  ::System::Type* ____type;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Dynamic::__BindingRestrictions__TypeRestriction, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Dynamic::__BindingRestrictions__TypeRestriction, ____expression) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Dynamic::__BindingRestrictions__TypeRestriction, ____type) == 0x18, "Offset mismatch!");

} // namespace System::Dynamic
NEED_NO_BOX(::System::Dynamic::__BindingRestrictions__TypeRestriction);
DEFINE_IL2CPP_ARG_TYPE(::System::Dynamic::__BindingRestrictions__TypeRestriction*, "System.Dynamic", "BindingRestrictions/TypeRestriction");
