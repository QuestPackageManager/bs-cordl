#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Linq/zzzz__XObjectChange_def.hpp"
#include "System/zzzz__EventArgs_def.hpp"
CORDL_MODULE_EXPORT(XObjectChangeEventArgs)
namespace System::Xml::Linq {
struct XObjectChange;
}
// Forward declare root types
namespace System::Xml::Linq {
class XObjectChangeEventArgs;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Linq::XObjectChangeEventArgs);
// Type: System.Xml.Linq::XObjectChangeEventArgs
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Xml::Linq {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2376)), TypeDefinitionIndex(TypeDefinitionIndex(15563))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15570))
// CS Name: ::System.Xml.Linq::XObjectChangeEventArgs*
class CORDL_TYPE XObjectChangeEventArgs : public ::System::EventArgs {
public:
  // Declarations
  /// @brief Field _objectChange, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__objectChange, put = __cordl_internal_set__objectChange))::System::Xml::Linq::XObjectChange _objectChange;

  /// @brief Field Add, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Add, put = setStaticF_Add))::System::Xml::Linq::XObjectChangeEventArgs* Add;

  /// @brief Field Remove, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Remove, put = setStaticF_Remove))::System::Xml::Linq::XObjectChangeEventArgs* Remove;

  /// @brief Field Name, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Name, put = setStaticF_Name))::System::Xml::Linq::XObjectChangeEventArgs* Name;

  /// @brief Field Value, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Value, put = setStaticF_Value))::System::Xml::Linq::XObjectChangeEventArgs* Value;

  constexpr ::System::Xml::Linq::XObjectChange& __cordl_internal_get__objectChange();

  constexpr ::System::Xml::Linq::XObjectChange const& __cordl_internal_get__objectChange() const;

  constexpr void __cordl_internal_set__objectChange(::System::Xml::Linq::XObjectChange value);

  static inline void setStaticF_Add(::System::Xml::Linq::XObjectChangeEventArgs* value);

  static inline ::System::Xml::Linq::XObjectChangeEventArgs* getStaticF_Add();

  static inline void setStaticF_Remove(::System::Xml::Linq::XObjectChangeEventArgs* value);

  static inline ::System::Xml::Linq::XObjectChangeEventArgs* getStaticF_Remove();

  static inline void setStaticF_Name(::System::Xml::Linq::XObjectChangeEventArgs* value);

  static inline ::System::Xml::Linq::XObjectChangeEventArgs* getStaticF_Name();

  static inline void setStaticF_Value(::System::Xml::Linq::XObjectChangeEventArgs* value);

  static inline ::System::Xml::Linq::XObjectChangeEventArgs* getStaticF_Value();

  static inline ::System::Xml::Linq::XObjectChangeEventArgs* New_ctor(::System::Xml::Linq::XObjectChange objectChange);

  /// @brief Method .ctor, addr 0x28649dc, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::Linq::XObjectChange objectChange);

  // Ctor Parameters [CppParam { name: "", ty: "XObjectChangeEventArgs", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XObjectChangeEventArgs(XObjectChangeEventArgs&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XObjectChangeEventArgs", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XObjectChangeEventArgs(XObjectChangeEventArgs const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XObjectChangeEventArgs();

public:
  /// @brief Field _objectChange, offset: 0x10, size: 0x4, def value: None
  ::System::Xml::Linq::XObjectChange ____objectChange;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Linq::XObjectChangeEventArgs, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::Xml::Linq::XObjectChangeEventArgs, ____objectChange) == 0x10, "Offset mismatch!");

} // namespace System::Xml::Linq
NEED_NO_BOX(::System::Xml::Linq::XObjectChangeEventArgs);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Linq::XObjectChangeEventArgs*, "System.Xml.Linq", "XObjectChangeEventArgs");
