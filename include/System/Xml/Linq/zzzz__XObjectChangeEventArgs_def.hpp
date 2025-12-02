#pragma once
// IWYU pragma private; include "System/Xml/Linq/XObjectChangeEventArgs.hpp"
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
// Dependencies System.EventArgs, System.Xml.Linq.XObjectChange
namespace System::Xml::Linq {
// Is value type: false
// CS Name: System.Xml.Linq.XObjectChangeEventArgs
class CORDL_TYPE XObjectChangeEventArgs : public ::System::EventArgs {
public:
  // Declarations
  /// @brief Field Add, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Add, put = setStaticF_Add)) ::System::Xml::Linq::XObjectChangeEventArgs* Add;

  /// @brief Field Name, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Name, put = setStaticF_Name)) ::System::Xml::Linq::XObjectChangeEventArgs* Name;

  /// @brief Field Remove, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Remove, put = setStaticF_Remove)) ::System::Xml::Linq::XObjectChangeEventArgs* Remove;

  /// @brief Field Value, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Value, put = setStaticF_Value)) ::System::Xml::Linq::XObjectChangeEventArgs* Value;

  /// @brief Field _objectChange, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__objectChange, put = __cordl_internal_set__objectChange)) ::System::Xml::Linq::XObjectChange _objectChange;

  static inline ::System::Xml::Linq::XObjectChangeEventArgs* New_ctor(::System::Xml::Linq::XObjectChange objectChange);

  constexpr ::System::Xml::Linq::XObjectChange const& __cordl_internal_get__objectChange() const;

  constexpr ::System::Xml::Linq::XObjectChange& __cordl_internal_get__objectChange();

  constexpr void __cordl_internal_set__objectChange(::System::Xml::Linq::XObjectChange value);

  /// @brief Method .ctor, addr 0x5f8f2c4, size 0x64, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::Linq::XObjectChange objectChange);

  static inline ::System::Xml::Linq::XObjectChangeEventArgs* getStaticF_Add();

  static inline ::System::Xml::Linq::XObjectChangeEventArgs* getStaticF_Name();

  static inline ::System::Xml::Linq::XObjectChangeEventArgs* getStaticF_Remove();

  static inline ::System::Xml::Linq::XObjectChangeEventArgs* getStaticF_Value();

  static inline void setStaticF_Add(::System::Xml::Linq::XObjectChangeEventArgs* value);

  static inline void setStaticF_Name(::System::Xml::Linq::XObjectChangeEventArgs* value);

  static inline void setStaticF_Remove(::System::Xml::Linq::XObjectChangeEventArgs* value);

  static inline void setStaticF_Value(::System::Xml::Linq::XObjectChangeEventArgs* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XObjectChangeEventArgs();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XObjectChangeEventArgs", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XObjectChangeEventArgs(XObjectChangeEventArgs&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XObjectChangeEventArgs", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XObjectChangeEventArgs(XObjectChangeEventArgs const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21776 };

  /// @brief Field _objectChange, offset: 0x10, size: 0x4, def value: None
  ::System::Xml::Linq::XObjectChange ____objectChange;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Linq::XObjectChangeEventArgs, ____objectChange) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::Linq::XObjectChangeEventArgs, 0x18>, "Size mismatch!");

} // namespace System::Xml::Linq
NEED_NO_BOX(::System::Xml::Linq::XObjectChangeEventArgs);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Linq::XObjectChangeEventArgs*, "System.Xml.Linq", "XObjectChangeEventArgs");
