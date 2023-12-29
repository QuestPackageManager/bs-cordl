#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ObsoleteAttribute)
// Forward declare root types
namespace System {
class ObsoleteAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::ObsoleteAttribute);
// Type: System::ObsoleteAttribute
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 25, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2545))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2452))
// CS Name: ::System::ObsoleteAttribute*
class CORDL_TYPE ObsoleteAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field _message, offset 0x10, size 0x8
  __declspec(property(get = __get__message, put = __set__message))::StringW _message;

  /// @brief Field _error, offset 0x18, size 0x1
  __declspec(property(get = __get__error, put = __set__error)) bool _error;

  __declspec(property(get = get_Message))::StringW Message;

  constexpr ::StringW& __get__message();

  constexpr ::StringW const& __get__message() const;

  constexpr void __set__message(::StringW value);

  constexpr bool& __get__error();

  constexpr bool const& __get__error() const;

  constexpr void __set__error(bool value);

  static inline ::System::ObsoleteAttribute* New_ctor();

  /// @brief Method .ctor addr 0x2460f78 size 0x20 virtual false final false
  inline void _ctor();

  static inline ::System::ObsoleteAttribute* New_ctor(::StringW message);

  /// @brief Method .ctor addr 0x2460f98 size 0x2c virtual false final false
  inline void _ctor(::StringW message);

  static inline ::System::ObsoleteAttribute* New_ctor(::StringW message, bool error);

  /// @brief Method .ctor addr 0x2460fc4 size 0x30 virtual false final false
  inline void _ctor(::StringW message, bool error);

  /// @brief Method get_Message addr 0x2460ff4 size 0x8 virtual false final false
  inline ::StringW get_Message();

  // Ctor Parameters [CppParam { name: "", ty: "ObsoleteAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ObsoleteAttribute(ObsoleteAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ObsoleteAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ObsoleteAttribute(ObsoleteAttribute const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ObsoleteAttribute();

public:
  /// @brief Field _message, offset: 0x10, size: 0x8, def value: None
  ::StringW ____message;

  /// @brief Field _error, offset: 0x18, size: 0x1, def value: None
  bool ____error;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ObsoleteAttribute, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::ObsoleteAttribute, ____message) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::ObsoleteAttribute, ____error) == 0x18, "Offset mismatch!");

} // namespace System
NEED_NO_BOX(::System::ObsoleteAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::ObsoleteAttribute*, "System", "ObsoleteAttribute");
