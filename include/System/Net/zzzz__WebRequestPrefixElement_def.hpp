#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(WebRequestPrefixElement)
namespace System {
class Type;
}
namespace System::Net {
class IWebRequestCreate;
}
// Forward declare root types
namespace System::Net {
class WebRequestPrefixElement;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::WebRequestPrefixElement);
// Type: System.Net::WebRequestPrefixElement
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7914))
// CS Name: ::System.Net::WebRequestPrefixElement*
class CORDL_TYPE WebRequestPrefixElement : public ::System::Object {
public:
  // Declarations
  /// @brief Field Prefix, offset 0x10, size 0x8
  __declspec(property(get = __get_Prefix, put = __set_Prefix))::StringW Prefix;

  /// @brief Field creator, offset 0x18, size 0x8
  __declspec(property(get = __get_creator, put = __set_creator))::System::Net::IWebRequestCreate* creator;

  /// @brief Field creatorType, offset 0x20, size 0x8
  __declspec(property(get = __get_creatorType, put = __set_creatorType))::System::Type* creatorType;

  __declspec(property(get = get_Creator, put = set_Creator))::System::Net::IWebRequestCreate* Creator;

  constexpr ::StringW& __get_Prefix();

  constexpr ::StringW const& __get_Prefix() const;

  constexpr void __set_Prefix(::StringW value);

  constexpr ::System::Net::IWebRequestCreate*& __get_creator();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::IWebRequestCreate*> const& __get_creator() const;

  constexpr void __set_creator(::System::Net::IWebRequestCreate* value);

  constexpr ::System::Type*& __get_creatorType();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __get_creatorType() const;

  constexpr void __set_creatorType(::System::Type* value);

  /// @brief Method get_Creator addr 0x2820a40 size 0x1fc virtual false final false
  inline ::System::Net::IWebRequestCreate* get_Creator();

  /// @brief Method set_Creator addr 0x2820c3c size 0x8 virtual false final false
  inline void set_Creator(::System::Net::IWebRequestCreate* value);

  static inline ::System::Net::WebRequestPrefixElement* New_ctor(::StringW P, ::System::Net::IWebRequestCreate* C);

  /// @brief Method .ctor addr 0x2820c44 size 0x2c virtual false final false
  inline void _ctor(::StringW P, ::System::Net::IWebRequestCreate* C);

  // Ctor Parameters [CppParam { name: "", ty: "WebRequestPrefixElement", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WebRequestPrefixElement(WebRequestPrefixElement&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WebRequestPrefixElement", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WebRequestPrefixElement(WebRequestPrefixElement const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WebRequestPrefixElement();

public:
  /// @brief Field Prefix, offset: 0x10, size: 0x8, def value: None
  ::StringW ___Prefix;

  /// @brief Field creator, offset: 0x18, size: 0x8, def value: None
  ::System::Net::IWebRequestCreate* ___creator;

  /// @brief Field creatorType, offset: 0x20, size: 0x8, def value: None
  ::System::Type* ___creatorType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::WebRequestPrefixElement, 0x28>, "Size mismatch!");

static_assert(offsetof(::System::Net::WebRequestPrefixElement, ___Prefix) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebRequestPrefixElement, ___creator) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebRequestPrefixElement, ___creatorType) == 0x20, "Offset mismatch!");

} // namespace System::Net
NEED_NO_BOX(::System::Net::WebRequestPrefixElement);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::WebRequestPrefixElement*, "System.Net", "WebRequestPrefixElement");
