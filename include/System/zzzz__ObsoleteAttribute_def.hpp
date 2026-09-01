#pragma once
// IWYU pragma private; include "System\ObsoleteAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ObsoleteAttribute)
// Forward declare root types
namespace System {
class ObsoleteAttribute;
}
// Write type traits
MARK_REF_T(::System::ObsoleteAttribute*);
DEFINE_IL2CPP_CLASS(::System::ObsoleteAttribute*, "System", "ObsoleteAttribute");
// Dependencies System.Attribute
namespace System {
// Is value type: false
// CS Name: System.ObsoleteAttribute
class CORDL_TYPE ObsoleteAttribute : public ::System::Attribute {
public:
  // Declarations
  __declspec(property(get = get_IsError)) bool IsError;

  __declspec(property(get = get_Message)) ::StringW Message;

  /// @brief Field _error, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get__error, put = __cordl_internal_set__error)) bool _error;

  /// @brief Field _message, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__message, put = __cordl_internal_set__message)) ::StringW _message;

  static inline ::System::ObsoleteAttribute* New_ctor();

  static inline ::System::ObsoleteAttribute* New_ctor(::StringW message);

  static inline ::System::ObsoleteAttribute* New_ctor(::StringW message, bool error);

  constexpr bool const& __cordl_internal_get__error() const;

  constexpr bool& __cordl_internal_get__error();

  constexpr ::StringW const& __cordl_internal_get__message() const;

  constexpr ::StringW& __cordl_internal_get__message();

  constexpr void __cordl_internal_set__error(bool value);

  constexpr void __cordl_internal_set__message(::StringW value);

  /// @brief Method .ctor, addr 0x5c57a10, size 0xc, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x5c57a1c, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

  /// @brief Method .ctor, addr 0x5c57a28, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, bool error);

  /// @brief Method get_IsError, addr 0x5c57a3c, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsError();

  /// @brief Method get_Message, addr 0x5c57a34, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Message();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ObsoleteAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ObsoleteAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ObsoleteAttribute(ObsoleteAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ObsoleteAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ObsoleteAttribute(ObsoleteAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2458 };

  /// @brief Field _message, offset: 0x10, size: 0x8, def value: None
  ::StringW ____message;

  /// @brief Field _error, offset: 0x18, size: 0x1, def value: None
  bool ____error;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::ObsoleteAttribute, ____message) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::ObsoleteAttribute, ____error) == 0x18, "Offset mismatch!");

static_assert(sizeof(::System::ObsoleteAttribute) == 0x20, "Size mismatch!");

} // namespace System
