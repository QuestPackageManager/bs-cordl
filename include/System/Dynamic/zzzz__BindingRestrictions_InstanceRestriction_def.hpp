#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Dynamic/zzzz__BindingRestrictions_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BindingRestrictions_InstanceRestriction)
namespace System::Linq::Expressions {
class Expression;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Dynamic {
class __BindingRestrictions__InstanceRestriction;
}
// Write type traits
MARK_REF_PTR_T(::System::Dynamic::__BindingRestrictions__InstanceRestriction);
// Type: ::InstanceRestriction
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Dynamic {
// Is value type: false
// CS Name: ::BindingRestrictions::InstanceRestriction*
class CORDL_TYPE __BindingRestrictions__InstanceRestriction : public ::System::Dynamic::BindingRestrictions {
public:
  // Declarations
  /// @brief Field _expression, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__expression, put = __cordl_internal_set__expression))::System::Linq::Expressions::Expression* _expression;

  /// @brief Field _instance, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__instance, put = __cordl_internal_set__instance))::System::Object* _instance;

  /// @brief Method Equals, addr 0x2b505e0, size 0x94, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetExpression, addr 0x2b506c0, size 0x380, virtual true, abstract: false, final false
  inline ::System::Linq::Expressions::Expression* GetExpression();

  /// @brief Method GetHashCode, addr 0x2b50674, size 0x4c, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::System::Dynamic::__BindingRestrictions__InstanceRestriction* New_ctor(::System::Linq::Expressions::Expression* parameter, ::System::Object* instance);

  constexpr ::System::Linq::Expressions::Expression*& __cordl_internal_get__expression();

  constexpr ::cordl_internals::to_const_pointer<::System::Linq::Expressions::Expression*> const& __cordl_internal_get__expression() const;

  constexpr ::System::Object*& __cordl_internal_get__instance();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get__instance() const;

  constexpr void __cordl_internal_set__expression(::System::Linq::Expressions::Expression* value);

  constexpr void __cordl_internal_set__instance(::System::Object* value);

  /// @brief Method .ctor, addr 0x2b4fd84, size 0x70, virtual false, abstract: false, final false
  inline void _ctor(::System::Linq::Expressions::Expression* parameter, ::System::Object* instance);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BindingRestrictions__InstanceRestriction();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__BindingRestrictions__InstanceRestriction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BindingRestrictions__InstanceRestriction(__BindingRestrictions__InstanceRestriction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BindingRestrictions__InstanceRestriction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BindingRestrictions__InstanceRestriction(__BindingRestrictions__InstanceRestriction const&) = delete;

  /// @brief Field _expression, offset: 0x10, size: 0x8, def value: None
  ::System::Linq::Expressions::Expression* ____expression;

  /// @brief Field _instance, offset: 0x18, size: 0x8, def value: None
  ::System::Object* ____instance;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Dynamic::__BindingRestrictions__InstanceRestriction, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Dynamic::__BindingRestrictions__InstanceRestriction, ____expression) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Dynamic::__BindingRestrictions__InstanceRestriction, ____instance) == 0x18, "Offset mismatch!");

} // namespace System::Dynamic
NEED_NO_BOX(::System::Dynamic::__BindingRestrictions__InstanceRestriction);
DEFINE_IL2CPP_ARG_TYPE(::System::Dynamic::__BindingRestrictions__InstanceRestriction*, "System.Dynamic", "BindingRestrictions/InstanceRestriction");
