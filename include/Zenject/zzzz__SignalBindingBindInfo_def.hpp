#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SignalBindingBindInfo)
namespace System {
class Type;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Zenject {
class SignalBindingBindInfo;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::SignalBindingBindInfo);
// Type: Zenject::SignalBindingBindInfo
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10653))
// CS Name: ::Zenject::SignalBindingBindInfo*
class CORDL_TYPE SignalBindingBindInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field <Identifier>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __get__Identifier_k__BackingField, put = __set__Identifier_k__BackingField))::System::Object* _Identifier_k__BackingField;

  /// @brief Field <SignalType>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __get__SignalType_k__BackingField, put = __set__SignalType_k__BackingField))::System::Type* _SignalType_k__BackingField;

  __declspec(property(get = get_Identifier, put = set_Identifier))::System::Object* Identifier;

  __declspec(property(get = get_SignalType, put = set_SignalType))::System::Type* SignalType;

  constexpr ::System::Object*& __get__Identifier_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get__Identifier_k__BackingField() const;

  constexpr void __set__Identifier_k__BackingField(::System::Object* value);

  constexpr ::System::Type*& __get__SignalType_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __get__SignalType_k__BackingField() const;

  constexpr void __set__SignalType_k__BackingField(::System::Type* value);

  static inline ::Zenject::SignalBindingBindInfo* New_ctor(::System::Type* signalType);

  /// @brief Method .ctor, addr 0x2ec2404, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* signalType);

  /// @brief Method get_Identifier, addr 0x2ec242c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Object* get_Identifier();

  /// @brief Method set_Identifier, addr 0x2ec2434, size 0x8, virtual false, abstract: false, final false
  inline void set_Identifier(::System::Object* value);

  /// @brief Method get_SignalType, addr 0x2ec243c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Type* get_SignalType();

  /// @brief Method set_SignalType, addr 0x2ec2444, size 0x8, virtual false, abstract: false, final false
  inline void set_SignalType(::System::Type* value);

  // Ctor Parameters [CppParam { name: "", ty: "SignalBindingBindInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SignalBindingBindInfo(SignalBindingBindInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SignalBindingBindInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SignalBindingBindInfo(SignalBindingBindInfo const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SignalBindingBindInfo();

public:
  /// @brief Field <Identifier>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::System::Object* ____Identifier_k__BackingField;

  /// @brief Field <SignalType>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::System::Type* ____SignalType_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::SignalBindingBindInfo, 0x20>, "Size mismatch!");

static_assert(offsetof(::Zenject::SignalBindingBindInfo, ____Identifier_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::SignalBindingBindInfo, ____SignalType_k__BackingField) == 0x18, "Offset mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::SignalBindingBindInfo);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::SignalBindingBindInfo*, "Zenject", "SignalBindingBindInfo");
