#pragma once
// IWYU pragma private; include "Zenject/SignalBindingBindInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SignalBindingBindInfo)
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Zenject {
class SignalBindingBindInfo;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::SignalBindingBindInfo);
// Dependencies System.Object
namespace Zenject {
// Is value type: false
// CS Name: Zenject.SignalBindingBindInfo
class CORDL_TYPE SignalBindingBindInfo : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Identifier, put = set_Identifier)) ::System::Object* Identifier;

  __declspec(property(get = get_SignalType, put = set_SignalType)) ::System::Type* SignalType;

  /// @brief Field <Identifier>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Identifier_k__BackingField, put = __cordl_internal_set__Identifier_k__BackingField)) ::System::Object* _Identifier_k__BackingField;

  /// @brief Field <SignalType>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__SignalType_k__BackingField, put = __cordl_internal_set__SignalType_k__BackingField)) ::System::Type* _SignalType_k__BackingField;

  static inline ::Zenject::SignalBindingBindInfo* New_ctor(::System::Type* signalType);

  constexpr ::System::Object* const& __cordl_internal_get__Identifier_k__BackingField() const;

  constexpr ::System::Object*& __cordl_internal_get__Identifier_k__BackingField();

  constexpr ::System::Type* const& __cordl_internal_get__SignalType_k__BackingField() const;

  constexpr ::System::Type*& __cordl_internal_get__SignalType_k__BackingField();

  constexpr void __cordl_internal_set__Identifier_k__BackingField(::System::Object* value);

  constexpr void __cordl_internal_set__SignalType_k__BackingField(::System::Type* value);

  /// @brief Method .ctor, addr 0x6c11370, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* signalType);

  /// @brief Method get_Identifier, addr 0x6c11378, size 0x8, virtual false, abstract: false, final false
  inline ::System::Object* get_Identifier();

  /// @brief Method get_SignalType, addr 0x6c11388, size 0x8, virtual false, abstract: false, final false
  inline ::System::Type* get_SignalType();

  /// @brief Method set_Identifier, addr 0x6c11380, size 0x8, virtual false, abstract: false, final false
  inline void set_Identifier(::System::Object* value);

  /// @brief Method set_SignalType, addr 0x6c11390, size 0x8, virtual false, abstract: false, final false
  inline void set_SignalType(::System::Type* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SignalBindingBindInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SignalBindingBindInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SignalBindingBindInfo(SignalBindingBindInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SignalBindingBindInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SignalBindingBindInfo(SignalBindingBindInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13975 };

  /// @brief Field <Identifier>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::System::Object* ____Identifier_k__BackingField;

  /// @brief Field <SignalType>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::System::Type* ____SignalType_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::SignalBindingBindInfo, ____Identifier_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::SignalBindingBindInfo, ____SignalType_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::SignalBindingBindInfo, 0x20>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::SignalBindingBindInfo);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::SignalBindingBindInfo*, "Zenject", "SignalBindingBindInfo");
