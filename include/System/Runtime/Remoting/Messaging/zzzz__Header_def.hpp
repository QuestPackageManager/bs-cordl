#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(Header)
namespace System {
class Object;
}
// Forward declare root types
namespace System::Runtime::Remoting::Messaging {
class Header;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::Messaging::Header);
// Type: System.Runtime.Remoting.Messaging::Header
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::Remoting::Messaging {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3165))
// CS Name: ::System.Runtime.Remoting.Messaging::Header*
class CORDL_TYPE Header : public ::System::Object {
public:
  // Declarations
  /// @brief Field HeaderNamespace, offset 0x10, size 0x8
  __declspec(property(get = __get_HeaderNamespace, put = __set_HeaderNamespace))::StringW HeaderNamespace;

  /// @brief Field MustUnderstand, offset 0x18, size 0x1
  __declspec(property(get = __get_MustUnderstand, put = __set_MustUnderstand)) bool MustUnderstand;

  /// @brief Field Name, offset 0x20, size 0x8
  __declspec(property(get = __get_Name, put = __set_Name))::StringW Name;

  /// @brief Field Value, offset 0x28, size 0x8
  __declspec(property(get = __get_Value, put = __set_Value))::System::Object* Value;

  constexpr ::StringW& __get_HeaderNamespace();

  constexpr ::StringW const& __get_HeaderNamespace() const;

  constexpr void __set_HeaderNamespace(::StringW value);

  constexpr bool& __get_MustUnderstand();

  constexpr bool const& __get_MustUnderstand() const;

  constexpr void __set_MustUnderstand(bool value);

  constexpr ::StringW& __get_Name();

  constexpr ::StringW const& __get_Name() const;

  constexpr void __set_Name(::StringW value);

  constexpr ::System::Object*& __get_Value();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get_Value() const;

  constexpr void __set_Value(::System::Object* value);

  // Ctor Parameters [CppParam { name: "", ty: "Header", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Header(Header&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Header", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Header(Header const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Header();

public:
  /// @brief Field HeaderNamespace, offset: 0x10, size: 0x8, def value: None
  ::StringW ___HeaderNamespace;

  /// @brief Field MustUnderstand, offset: 0x18, size: 0x1, def value: None
  bool ___MustUnderstand;

  /// @brief Field Name, offset: 0x20, size: 0x8, def value: None
  ::StringW ___Name;

  /// @brief Field Value, offset: 0x28, size: 0x8, def value: None
  ::System::Object* ___Value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::Messaging::Header, 0x30>, "Size mismatch!");

} // namespace System::Runtime::Remoting::Messaging
NEED_NO_BOX(::System::Runtime::Remoting::Messaging::Header);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Messaging::Header*, "System.Runtime.Remoting.Messaging", "Header");
