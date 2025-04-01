#pragma once
// IWYU pragma private; include "System/Net/WebRequestPrefixElement.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(WebRequestPrefixElement)
namespace System::Net {
class IWebRequestCreate;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Net {
class WebRequestPrefixElement;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::WebRequestPrefixElement);
// Dependencies System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.WebRequestPrefixElement
class CORDL_TYPE WebRequestPrefixElement : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Creator, put = set_Creator)) ::System::Net::IWebRequestCreate* Creator;

  /// @brief Field Prefix, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_Prefix, put = __cordl_internal_set_Prefix)) ::StringW Prefix;

  /// @brief Field creator, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_creator, put = __cordl_internal_set_creator)) ::System::Net::IWebRequestCreate* creator;

  /// @brief Field creatorType, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_creatorType, put = __cordl_internal_set_creatorType)) ::System::Type* creatorType;

  static inline ::System::Net::WebRequestPrefixElement* New_ctor(::StringW P, ::System::Net::IWebRequestCreate* C);

  constexpr ::StringW const& __cordl_internal_get_Prefix() const;

  constexpr ::StringW& __cordl_internal_get_Prefix();

  constexpr ::System::Net::IWebRequestCreate* const& __cordl_internal_get_creator() const;

  constexpr ::System::Net::IWebRequestCreate*& __cordl_internal_get_creator();

  constexpr ::System::Type* const& __cordl_internal_get_creatorType() const;

  constexpr ::System::Type*& __cordl_internal_get_creatorType();

  constexpr void __cordl_internal_set_Prefix(::StringW value);

  constexpr void __cordl_internal_set_creator(::System::Net::IWebRequestCreate* value);

  constexpr void __cordl_internal_set_creatorType(::System::Type* value);

  /// @brief Method .ctor, addr 0x449ca1c, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::StringW P, ::System::Net::IWebRequestCreate* C);

  /// @brief Method get_Creator, addr 0x449c81c, size 0x1f8, virtual false, abstract: false, final false
  inline ::System::Net::IWebRequestCreate* get_Creator();

  /// @brief Method set_Creator, addr 0x449ca14, size 0x8, virtual false, abstract: false, final false
  inline void set_Creator(::System::Net::IWebRequestCreate* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WebRequestPrefixElement();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WebRequestPrefixElement", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WebRequestPrefixElement(WebRequestPrefixElement&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WebRequestPrefixElement", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WebRequestPrefixElement(WebRequestPrefixElement const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9598 };

  /// @brief Field Prefix, offset: 0x10, size: 0x8, def value: None
  ::StringW ___Prefix;

  /// @brief Field creator, offset: 0x18, size: 0x8, def value: None
  ::System::Net::IWebRequestCreate* ___creator;

  /// @brief Field creatorType, offset: 0x20, size: 0x8, def value: None
  ::System::Type* ___creatorType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::WebRequestPrefixElement, ___Prefix) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebRequestPrefixElement, ___creator) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebRequestPrefixElement, ___creatorType) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::WebRequestPrefixElement, 0x28>, "Size mismatch!");

} // namespace System::Net
NEED_NO_BOX(::System::Net::WebRequestPrefixElement);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::WebRequestPrefixElement*, "System.Net", "WebRequestPrefixElement");
